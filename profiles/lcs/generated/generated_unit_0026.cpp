#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0026[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 5, 0, 6, 0, 0, 0, 7, 0, 8, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 10, 0, 0, 11, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 13, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0,
    0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 23, 24, 0,
    0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 28, 0, 29, 0, 30, 0, 31, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0,
    0, 0, 33, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 37, 0, 38, 0, 0, 0,
    39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 49, 50, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 55, 0, 56, 0, 57, 0, 58, 0, 0, 0, 0, 0,
    0, 0, 0, 59, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 63, 0, 0, 64, 0, 65, 0, 0, 0, 0, 0, 66, 67, 0, 0, 0, 0, 68, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 71, 0, 0, 0, 72, 0, 0, 0, 0, 73, 0, 0, 0,
    74, 0, 0, 0, 0, 75, 0, 0, 76, 0, 0, 77, 0, 0, 78, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 82, 0, 0, 83, 0, 84, 0, 85, 0, 0, 0, 0, 86,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 88, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 90, 0, 0, 0, 91, 0,
    0, 0, 92, 0, 0, 0, 0, 93, 0, 0, 94, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 97, 0, 98,
    0, 0, 0, 99, 0, 0, 0, 100, 0, 0, 101, 0, 0, 0, 0, 102, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 106, 0, 0, 0, 107, 0, 0, 0, 0, 108, 0, 0, 0, 109, 0, 0, 0, 0, 110, 0, 0, 111,
    0, 0, 112, 0, 0, 113, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 116, 0, 0, 117, 0, 118, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 121, 0, 122, 123, 0, 0,
    0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 126, 0, 127, 0, 0, 0, 128, 0, 0, 129, 0, 130, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 139, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 141, 0, 0, 0, 0, 0, 142, 0, 0, 143, 0, 0, 144, 0, 145, 0, 146,
    147, 0, 0, 148, 0, 149, 0, 150, 0, 0, 0, 151, 0, 152, 0, 0, 153, 0, 154, 0, 0, 155, 0, 156, 0, 157, 0, 158, 0, 159, 0, 0,
    160, 0, 161, 0, 162, 0, 163, 0, 164, 0, 0, 165, 0, 166, 0, 167, 168, 0, 169, 0, 170, 0, 0, 171, 0, 172, 0, 173, 0, 174, 0, 0,
    175, 0, 176, 0, 177, 0, 178, 179, 0, 180, 0, 181, 0, 182, 0, 0, 183, 0, 0, 0, 184, 0, 185, 186, 0, 187, 0, 188, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 192, 0, 0, 193, 194, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 196, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 199, 0, 0, 0,
    0, 0, 200, 201, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0,
    0, 0, 0, 0, 205, 0, 0, 0, 0, 206, 0, 207, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 209, 0, 210, 0, 0, 0, 211,
    0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 214, 0, 0, 215, 0, 216, 217, 0, 0, 0, 0, 0, 218, 0, 0, 0,
    0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 222, 0, 223, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 228, 229, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 231,
    0, 232, 0, 233, 0, 0, 0, 234, 0, 0, 0, 0, 235, 0, 0, 236, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 239,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 241, 0, 242, 0, 0, 0, 243, 0, 244, 0, 245, 0, 0, 0, 0, 246, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 248, 0, 0, 0, 0, 0, 249, 0, 250, 0, 251, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0,
    253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 255, 0, 0, 0, 256, 0, 257, 258, 0, 0, 0, 0, 0, 259, 0, 0,
    0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 263, 0, 0, 0, 0, 0,
    0, 264, 0, 265, 0, 0, 0, 266, 0, 0, 267, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 270, 0, 0, 271,
    0, 0, 272, 0, 273, 0, 274, 0, 275, 0, 276, 0, 277, 278, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280,
    0, 281, 0, 0, 282, 0, 283, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 286, 0, 0, 0, 0, 287,
    0, 288, 0, 0, 0, 289, 0, 0, 0, 290, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 293, 0, 0, 0, 294, 0, 295, 0,
    296, 297, 0, 298, 299, 300, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 303, 0, 0, 304, 0, 305, 0, 306, 0, 0, 0, 307, 0, 0, 308, 0, 309, 0, 310, 0, 0, 0, 311, 0, 312, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 314, 0, 0, 315, 0, 316, 317, 0, 0, 0, 0, 0, 0, 318, 0, 0,
    0, 0, 0, 0, 0, 0, 319, 0, 0, 320, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 322, 0, 323, 0, 0, 324, 0, 325, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 327, 0, 328, 0, 329, 330, 0, 331, 0, 332, 0, 333, 334, 0, 335,
    0, 336, 0, 337, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0,
    0, 0, 343, 0, 0, 0, 0, 0, 0, 344, 0, 0, 345, 0, 0, 0, 0, 0, 346, 0, 347, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 352, 0, 353, 0,
    0, 0, 354, 355, 0, 0, 356, 0, 0, 0, 357, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 360, 0, 361, 0, 0,
    0, 362, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 364, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 367, 0, 368, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 370, 0, 371, 372, 0, 0, 0, 373, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0, 376, 0, 0, 0, 377, 378,
    379, 0, 380, 0, 0, 0, 381, 0, 382, 0, 383, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 384, 0, 385, 0, 386, 387, 0, 0, 388,
    0, 0, 0, 0, 0, 389, 0, 0, 390, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 391, 0, 0, 392, 0,
    393, 0, 394, 395, 0, 396, 0, 397, 0, 398, 399, 0, 400, 0, 401, 0, 402, 403, 0, 0, 0, 0, 0, 0, 0, 0, 0, 404, 0, 0, 0, 405,
    0, 0, 0, 0, 0, 406, 0, 0, 0, 0, 407, 408, 0, 0, 0, 0, 409, 0, 0, 410, 0, 411, 0, 412, 0, 0, 413, 0, 0, 0, 414, 0,
    415, 0, 416, 0, 0, 417, 0, 0, 418, 0, 0, 419, 420, 421, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 422, 0, 423, 0, 0, 0, 424,
    0, 0, 0, 425, 0, 0, 0, 0, 426, 0, 0, 427, 0, 0, 0, 428, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 429, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 430, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 431, 0, 0, 432, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 433, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 434, 0, 0, 435, 0, 0, 0, 0, 0, 0, 0, 0, 436, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 437, 0, 0, 0, 0, 0, 438, 0,
    0, 439, 0, 0, 440, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 441, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 442, 0, 0,
    0, 443, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 444, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 445, 446, 0, 0, 0, 0, 0, 0, 0, 0, 0, 447, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 448, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 449, 0, 0, 0, 0, 0, 450, 0, 0, 451, 0, 0, 0, 0, 452, 0, 0, 453, 0, 0, 454, 0, 0, 0, 455, 0, 456, 0,
    457, 0, 458, 0, 0, 0, 0, 459, 0, 0, 0, 460, 0, 0, 461, 0, 0, 0, 0, 0, 462, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 463, 0, 0, 464, 0, 465, 0, 0, 0, 466, 0, 0, 467, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 468, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 469, 0, 470, 0, 0, 0, 471, 0, 0, 0, 0, 0, 472, 0, 0, 473, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 474, 0, 475, 0, 476, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 477, 0, 0, 0, 0, 478, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 479, 0, 0, 0, 0, 480, 0, 0, 0, 0, 481, 0, 0, 0, 0, 0, 482, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 483, 0, 0, 0, 0, 0, 0, 484, 0, 485, 0, 486, 0, 0, 0, 0, 0, 0, 0, 0, 487, 0, 0, 0, 0, 0, 488, 0, 0,
    0, 0, 0, 0, 0, 0, 489, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 490, 0, 491, 0, 0, 0, 0, 492,
    0, 0, 0, 493, 0, 0, 0, 0, 0, 0, 494, 0, 0, 0, 0, 0, 495, 0, 0, 496, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    497, 0, 0, 498, 0, 499, 500, 0, 0, 0, 501, 0, 0, 0, 502, 0, 503, 0, 504, 0, 0, 505, 0, 506, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 507, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 508, 0, 0, 0, 509, 0,
    0, 0, 510, 0, 0, 0, 0, 511, 0, 512, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 513, 514, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 515, 0, 516, 0, 0, 0, 517, 0, 0, 0, 0, 0, 518, 0, 0, 0, 0, 0, 0, 519, 0, 520, 0, 0, 0, 0, 521, 0, 522, 0,
    523, 0, 524, 0, 525, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 526, 527, 0, 0, 0, 528, 0, 0, 0, 529,
    0, 530, 0, 0, 0, 0, 0, 0, 0, 0, 531, 0, 0, 0, 0, 0, 0, 532, 0, 0, 0, 0, 0, 0, 0, 0, 0, 533, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 534, 0, 0, 0, 0, 0, 0, 535, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 536, 0, 0, 0, 537, 0, 538, 0, 0, 0, 0, 539, 0, 0, 540, 0, 541, 542, 0, 0, 0, 543, 0, 0,
    0, 544, 0, 545, 0, 546, 0, 547, 0, 0, 548, 0, 549, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 550, 551, 0, 0, 0, 0, 552, 553, 0,
    0, 0, 0, 0, 0, 0, 554, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 555, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 556, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 557, 0, 558, 0, 0, 559, 0,
    560, 561, 0, 0, 0, 0, 0, 0, 0, 0, 0, 562, 0, 0, 0, 0, 0, 0, 0, 0, 563, 0, 0, 0, 0, 564, 565, 0, 0, 0, 0, 566,
    0, 0, 567, 0, 0, 0, 0, 568, 0, 0, 569, 0, 0, 0, 570, 0, 571, 0, 572, 573, 0, 574, 575, 576, 0, 577, 0, 0, 0, 0, 0, 578,
    0, 0, 579, 580, 0, 0, 581, 0, 582, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 583, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 584, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 585, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 586, 0, 587, 0, 0, 0, 0, 588, 0, 589, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 590, 0, 0, 0, 0, 0, 0, 591, 0, 0, 0, 592, 0, 0, 0, 0, 0, 0, 0, 0, 0, 593, 0, 0,
    0, 594, 0, 0, 0, 595, 596, 597, 0, 598, 0, 0, 0, 599, 0, 0, 0, 0, 0, 0, 0, 0, 600, 0, 0, 0, 0, 0, 601, 0, 0, 602,
    0, 0, 0, 603, 0, 0, 0, 0, 0, 0, 604, 0, 605, 0, 0, 0, 0, 606, 0, 607, 0, 0, 608, 609, 0, 0, 0, 0, 0, 0, 610, 0,
    611, 0, 0, 0, 0, 0, 612, 0, 0, 0, 613, 0, 0, 614, 0, 0, 615, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 616, 0, 0, 0, 0, 0, 0, 617, 618, 0, 0, 0, 0, 0, 0, 0, 0, 619, 0, 0, 0, 620, 0, 0, 621, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 622, 0, 0, 623, 0, 624, 0, 625, 626, 0, 627, 0, 628, 0, 629, 630, 0, 631, 0,
    632, 0, 633, 634, 0, 0, 0, 0, 0, 0, 0, 0, 0, 635, 0, 636, 0, 0, 637, 0, 0, 0, 0, 0, 638, 0, 0, 0, 0, 639, 0, 0,
    0, 640, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 641, 642, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 643, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 644, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 645, 0, 0, 0, 0, 0, 646, 0, 0, 0, 647, 0, 0, 0, 0, 0, 0, 648, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 649, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 650, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 651, 0, 0, 0, 652, 0, 0, 653, 0, 0, 0, 0,
    0, 0, 0, 0, 654, 655, 0, 0, 0, 0, 0, 0, 0, 0, 656, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 657, 0, 658, 0, 0, 0, 659, 0, 0, 0, 0, 660, 0, 0, 661, 0, 0, 662, 0, 0, 0, 0, 0, 0, 663,
};
void recomp_unit_0026_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x0886C000u;
        entry_id = (entry_delta < 16384u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0026[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_0886C000;
    case 2u: goto L_0886C060;
    case 3u: goto L_0886C0C4;
    case 4u: goto L_0886C144;
    case 5u: goto L_0886C29C;
    case 6u: goto L_0886C2A4;
    case 7u: goto L_0886C2B4;
    case 8u: goto L_0886C2BC;
    case 9u: goto L_0886C2DC;
    case 10u: goto L_0886C2E8;
    case 11u: goto L_0886C2F4;
    case 12u: goto L_0886C348;
    case 13u: goto L_0886C354;
    case 14u: goto L_0886C360;
    case 15u: goto L_0886C3A8;
    case 16u: goto L_0886C428;
    case 17u: goto L_0886C438;
    case 18u: goto L_0886C454;
    case 19u: goto L_0886C474;
    case 20u: goto L_0886C494;
    case 21u: goto L_0886C4B4;
    case 22u: goto L_0886C4D4;
    case 23u: goto L_0886C4F4;
    case 24u: goto L_0886C4F8;
    case 25u: goto L_0886C510;
    case 26u: goto L_0886C544;
    case 27u: goto L_0886C59C;
    case 28u: goto L_0886C5BC;
    case 29u: goto L_0886C5C4;
    case 30u: goto L_0886C5CC;
    case 31u: goto L_0886C5D4;
    case 32u: goto L_0886C5F0;
    case 33u: goto L_0886C608;
    case 34u: goto L_0886C620;
    case 35u: goto L_0886C638;
    case 36u: goto L_0886C650;
    case 37u: goto L_0886C668;
    case 38u: goto L_0886C670;
    case 39u: goto L_0886C680;
    case 40u: goto L_0886C6D4;
    case 41u: goto L_0886C6F8;
    case 42u: goto L_0886C738;
    case 43u: goto L_0886C78C;
    case 44u: goto L_0886C7A8;
    case 45u: goto L_0886C7BC;
    case 46u: goto L_0886C804;
    case 47u: goto L_0886C848;
    case 48u: goto L_0886C860;
    case 49u: goto L_0886C898;
    case 50u: goto L_0886C89C;
    case 51u: goto L_0886C8AC;
    case 52u: goto L_0886C8D0;
    case 53u: goto L_0886C918;
    case 54u: goto L_0886C948;
    case 55u: goto L_0886C950;
    case 56u: goto L_0886C958;
    case 57u: goto L_0886C960;
    case 58u: goto L_0886C968;
    case 59u: goto L_0886C98C;
    case 60u: goto L_0886C998;
    case 61u: goto L_0886C9CC;
    case 62u: goto L_0886C9D4;
    case 63u: goto L_0886CA04;
    case 64u: goto L_0886CA10;
    case 65u: goto L_0886CA18;
    case 66u: goto L_0886CA30;
    case 67u: goto L_0886CA34;
    case 68u: goto L_0886CA48;
    case 69u: goto L_0886CA4C;
    case 70u: goto L_0886CABC;
    case 71u: goto L_0886CACC;
    case 72u: goto L_0886CADC;
    case 73u: goto L_0886CAF0;
    case 74u: goto L_0886CB00;
    case 75u: goto L_0886CB14;
    case 76u: goto L_0886CB20;
    case 77u: goto L_0886CB2C;
    case 78u: goto L_0886CB38;
    case 79u: goto L_0886CB44;
    case 80u: goto L_0886CB84;
    case 81u: goto L_0886CBBC;
    case 82u: goto L_0886CBCC;
    case 83u: goto L_0886CBD8;
    case 84u: goto L_0886CBE0;
    case 85u: goto L_0886CBE8;
    case 86u: goto L_0886CBFC;
    case 87u: goto L_0886CC28;
    case 88u: goto L_0886CC34;
    case 89u: goto L_0886CC50;
    case 90u: goto L_0886CC68;
    case 91u: goto L_0886CC78;
    case 92u: goto L_0886CC88;
    case 93u: goto L_0886CC9C;
    case 94u: goto L_0886CCA8;
    case 95u: goto L_0886CCB8;
    case 96u: goto L_0886CCE4;
    case 97u: goto L_0886CCF4;
    case 98u: goto L_0886CCFC;
    case 99u: goto L_0886CD0C;
    case 100u: goto L_0886CD1C;
    case 101u: goto L_0886CD28;
    case 102u: goto L_0886CD3C;
    case 103u: goto L_0886CD48;
    case 104u: goto L_0886CDAC;
    case 105u: goto L_0886CE18;
    case 106u: goto L_0886CE28;
    case 107u: goto L_0886CE38;
    case 108u: goto L_0886CE4C;
    case 109u: goto L_0886CE5C;
    case 110u: goto L_0886CE70;
    case 111u: goto L_0886CE7C;
    case 112u: goto L_0886CE88;
    case 113u: goto L_0886CE94;
    case 114u: goto L_0886CEA0;
    case 115u: goto L_0886CEE0;
    case 116u: goto L_0886CF18;
    case 117u: goto L_0886CF24;
    case 118u: goto L_0886CF2C;
    case 119u: goto L_0886CF38;
    case 120u: goto L_0886CF58;
    case 121u: goto L_0886CF68;
    case 122u: goto L_0886CF70;
    case 123u: goto L_0886CF74;
    case 124u: goto L_0886CF8C;
    case 125u: goto L_0886CFAC;
    case 126u: goto L_0886CFC0;
    case 127u: goto L_0886CFC8;
    case 128u: goto L_0886CFD8;
    case 129u: goto L_0886CFE4;
    case 130u: goto L_0886CFEC;
    case 131u: goto L_0886D018;
    case 132u: goto L_0886D0CC;
    case 133u: goto L_0886D0D8;
    case 134u: goto L_0886D104;
    case 135u: goto L_0886D1A0;
    case 136u: goto L_0886D1B0;
    case 137u: goto L_0886D1F8;
    case 138u: goto L_0886D260;
    case 139u: goto L_0886D278;
    case 140u: goto L_0886D2B0;
    case 141u: goto L_0886D2BC;
    case 142u: goto L_0886D2D4;
    case 143u: goto L_0886D2E0;
    case 144u: goto L_0886D2EC;
    case 145u: goto L_0886D2F4;
    case 146u: goto L_0886D2FC;
    case 147u: goto L_0886D300;
    case 148u: goto L_0886D30C;
    case 149u: goto L_0886D314;
    case 150u: goto L_0886D31C;
    case 151u: goto L_0886D32C;
    case 152u: goto L_0886D334;
    case 153u: goto L_0886D340;
    case 154u: goto L_0886D348;
    case 155u: goto L_0886D354;
    case 156u: goto L_0886D35C;
    case 157u: goto L_0886D364;
    case 158u: goto L_0886D36C;
    case 159u: goto L_0886D374;
    case 160u: goto L_0886D380;
    case 161u: goto L_0886D388;
    case 162u: goto L_0886D390;
    case 163u: goto L_0886D398;
    case 164u: goto L_0886D3A0;
    case 165u: goto L_0886D3AC;
    case 166u: goto L_0886D3B4;
    case 167u: goto L_0886D3BC;
    case 168u: goto L_0886D3C0;
    case 169u: goto L_0886D3C8;
    case 170u: goto L_0886D3D0;
    case 171u: goto L_0886D3DC;
    case 172u: goto L_0886D3E4;
    case 173u: goto L_0886D3EC;
    case 174u: goto L_0886D3F4;
    case 175u: goto L_0886D400;
    case 176u: goto L_0886D408;
    case 177u: goto L_0886D410;
    case 178u: goto L_0886D418;
    case 179u: goto L_0886D41C;
    case 180u: goto L_0886D424;
    case 181u: goto L_0886D42C;
    case 182u: goto L_0886D434;
    case 183u: goto L_0886D440;
    case 184u: goto L_0886D450;
    case 185u: goto L_0886D458;
    case 186u: goto L_0886D45C;
    case 187u: goto L_0886D464;
    case 188u: goto L_0886D46C;
    case 189u: goto L_0886D49C;
    case 190u: goto L_0886D4A8;
    case 191u: goto L_0886D4DC;
    case 192u: goto L_0886D4E4;
    case 193u: goto L_0886D4F0;
    case 194u: goto L_0886D4F4;
    case 195u: goto L_0886D520;
    case 196u: goto L_0886D528;
    case 197u: goto L_0886D530;
    case 198u: goto L_0886D558;
    case 199u: goto L_0886D570;
    case 200u: goto L_0886D588;
    case 201u: goto L_0886D58C;
    case 202u: goto L_0886D59C;
    case 203u: goto L_0886D5CC;
    case 204u: goto L_0886D5F0;
    case 205u: goto L_0886D610;
    case 206u: goto L_0886D624;
    case 207u: goto L_0886D62C;
    case 208u: goto L_0886D644;
    case 209u: goto L_0886D664;
    case 210u: goto L_0886D66C;
    case 211u: goto L_0886D67C;
    case 212u: goto L_0886D68C;
    case 213u: goto L_0886D6AC;
    case 214u: goto L_0886D6C0;
    case 215u: goto L_0886D6CC;
    case 216u: goto L_0886D6D4;
    case 217u: goto L_0886D6D8;
    case 218u: goto L_0886D6F0;
    case 219u: goto L_0886D70C;
    case 220u: goto L_0886D774;
    case 221u: goto L_0886D79C;
    case 222u: goto L_0886D7AC;
    case 223u: goto L_0886D7B4;
    case 224u: goto L_0886D7D4;
    case 225u: goto L_0886D818;
    case 226u: goto L_0886D844;
    case 227u: goto L_0886D8BC;
    case 228u: goto L_0886D8C8;
    case 229u: goto L_0886D8CC;
    case 230u: goto L_0886D8F0;
    case 231u: goto L_0886D8FC;
    case 232u: goto L_0886D904;
    case 233u: goto L_0886D90C;
    case 234u: goto L_0886D91C;
    case 235u: goto L_0886D930;
    case 236u: goto L_0886D93C;
    case 237u: goto L_0886D94C;
    case 238u: goto L_0886D970;
    case 239u: goto L_0886D97C;
    case 240u: goto L_0886D9AC;
    case 241u: goto L_0886D9BC;
    case 242u: goto L_0886D9C4;
    case 243u: goto L_0886D9D4;
    case 244u: goto L_0886D9DC;
    case 245u: goto L_0886D9E4;
    case 246u: goto L_0886D9F8;
    case 247u: goto L_0886DA20;
    case 248u: goto L_0886DA2C;
    case 249u: goto L_0886DA44;
    case 250u: goto L_0886DA4C;
    case 251u: goto L_0886DA54;
    case 252u: goto L_0886DA5C;
    case 253u: goto L_0886DA80;
    case 254u: goto L_0886DAB0;
    case 255u: goto L_0886DAC0;
    case 256u: goto L_0886DAD0;
    case 257u: goto L_0886DAD8;
    case 258u: goto L_0886DADC;
    case 259u: goto L_0886DAF4;
    case 260u: goto L_0886DB0C;
    case 261u: goto L_0886DB28;
    case 262u: goto L_0886DB58;
    case 263u: goto L_0886DB68;
    case 264u: goto L_0886DB84;
    case 265u: goto L_0886DB8C;
    case 266u: goto L_0886DB9C;
    case 267u: goto L_0886DBA8;
    case 268u: goto L_0886DBB4;
    case 269u: goto L_0886DBDC;
    case 270u: goto L_0886DBF0;
    case 271u: goto L_0886DBFC;
    case 272u: goto L_0886DC08;
    case 273u: goto L_0886DC10;
    case 274u: goto L_0886DC18;
    case 275u: goto L_0886DC20;
    case 276u: goto L_0886DC28;
    case 277u: goto L_0886DC30;
    case 278u: goto L_0886DC34;
    case 279u: goto L_0886DC3C;
    case 280u: goto L_0886DC7C;
    case 281u: goto L_0886DC84;
    case 282u: goto L_0886DC90;
    case 283u: goto L_0886DC98;
    case 284u: goto L_0886DC9C;
    case 285u: goto L_0886DCD8;
    case 286u: goto L_0886DCE8;
    case 287u: goto L_0886DCFC;
    case 288u: goto L_0886DD04;
    case 289u: goto L_0886DD14;
    case 290u: goto L_0886DD24;
    case 291u: goto L_0886DD30;
    case 292u: goto L_0886DD50;
    case 293u: goto L_0886DD60;
    case 294u: goto L_0886DD70;
    case 295u: goto L_0886DD78;
    case 296u: goto L_0886DD80;
    case 297u: goto L_0886DD84;
    case 298u: goto L_0886DD8C;
    case 299u: goto L_0886DD90;
    case 300u: goto L_0886DD94;
    case 301u: goto L_0886DD9C;
    case 302u: goto L_0886DDD8;
    case 303u: goto L_0886DE08;
    case 304u: goto L_0886DE14;
    case 305u: goto L_0886DE1C;
    case 306u: goto L_0886DE24;
    case 307u: goto L_0886DE34;
    case 308u: goto L_0886DE40;
    case 309u: goto L_0886DE48;
    case 310u: goto L_0886DE50;
    case 311u: goto L_0886DE60;
    case 312u: goto L_0886DE68;
    case 313u: goto L_0886DEB0;
    case 314u: goto L_0886DEC0;
    case 315u: goto L_0886DECC;
    case 316u: goto L_0886DED4;
    case 317u: goto L_0886DED8;
    case 318u: goto L_0886DEF4;
    case 319u: goto L_0886DF18;
    case 320u: goto L_0886DF24;
    case 321u: goto L_0886DF40;
    case 322u: goto L_0886DF5C;
    case 323u: goto L_0886DF64;
    case 324u: goto L_0886DF70;
    case 325u: goto L_0886DF78;
    case 326u: goto L_0886DFB4;
    case 327u: goto L_0886DFC4;
    case 328u: goto L_0886DFCC;
    case 329u: goto L_0886DFD4;
    case 330u: goto L_0886DFD8;
    case 331u: goto L_0886DFE0;
    case 332u: goto L_0886DFE8;
    case 333u: goto L_0886DFF0;
    case 334u: goto L_0886DFF4;
    case 335u: goto L_0886DFFC;
    case 336u: goto L_0886E004;
    case 337u: goto L_0886E00C;
    case 338u: goto L_0886E01C;
    case 339u: goto L_0886E068;
    case 340u: goto L_0886E098;
    case 341u: goto L_0886E0BC;
    case 342u: goto L_0886E0E4;
    case 343u: goto L_0886E108;
    case 344u: goto L_0886E124;
    case 345u: goto L_0886E130;
    case 346u: goto L_0886E148;
    case 347u: goto L_0886E150;
    case 348u: goto L_0886E16C;
    case 349u: goto L_0886E194;
    case 350u: goto L_0886E1B8;
    case 351u: goto L_0886E1E4;
    case 352u: goto L_0886E1F0;
    case 353u: goto L_0886E1F8;
    case 354u: goto L_0886E208;
    case 355u: goto L_0886E20C;
    case 356u: goto L_0886E218;
    case 357u: goto L_0886E228;
    case 358u: goto L_0886E230;
    case 359u: goto L_0886E258;
    case 360u: goto L_0886E26C;
    case 361u: goto L_0886E274;
    case 362u: goto L_0886E284;
    case 363u: goto L_0886E2A0;
    case 364u: goto L_0886E2B0;
    case 365u: goto L_0886E2BC;
    case 366u: goto L_0886E2DC;
    case 367u: goto L_0886E2E8;
    case 368u: goto L_0886E2F0;
    case 369u: goto L_0886E33C;
    case 370u: goto L_0886E34C;
    case 371u: goto L_0886E354;
    case 372u: goto L_0886E358;
    case 373u: goto L_0886E368;
    case 374u: goto L_0886E3B0;
    case 375u: goto L_0886E3D8;
    case 376u: goto L_0886E3E8;
    case 377u: goto L_0886E3F8;
    case 378u: goto L_0886E3FC;
    case 379u: goto L_0886E400;
    case 380u: goto L_0886E408;
    case 381u: goto L_0886E418;
    case 382u: goto L_0886E420;
    case 383u: goto L_0886E428;
    case 384u: goto L_0886E45C;
    case 385u: goto L_0886E464;
    case 386u: goto L_0886E46C;
    case 387u: goto L_0886E470;
    case 388u: goto L_0886E47C;
    case 389u: goto L_0886E494;
    case 390u: goto L_0886E4A0;
    case 391u: goto L_0886E4EC;
    case 392u: goto L_0886E4F8;
    case 393u: goto L_0886E500;
    case 394u: goto L_0886E508;
    case 395u: goto L_0886E50C;
    case 396u: goto L_0886E514;
    case 397u: goto L_0886E51C;
    case 398u: goto L_0886E524;
    case 399u: goto L_0886E528;
    case 400u: goto L_0886E530;
    case 401u: goto L_0886E538;
    case 402u: goto L_0886E540;
    case 403u: goto L_0886E544;
    case 404u: goto L_0886E56C;
    case 405u: goto L_0886E57C;
    case 406u: goto L_0886E594;
    case 407u: goto L_0886E5A8;
    case 408u: goto L_0886E5AC;
    case 409u: goto L_0886E5C0;
    case 410u: goto L_0886E5CC;
    case 411u: goto L_0886E5D4;
    case 412u: goto L_0886E5DC;
    case 413u: goto L_0886E5E8;
    case 414u: goto L_0886E5F8;
    case 415u: goto L_0886E600;
    case 416u: goto L_0886E608;
    case 417u: goto L_0886E614;
    case 418u: goto L_0886E620;
    case 419u: goto L_0886E62C;
    case 420u: goto L_0886E630;
    case 421u: goto L_0886E634;
    case 422u: goto L_0886E664;
    case 423u: goto L_0886E66C;
    case 424u: goto L_0886E67C;
    case 425u: goto L_0886E68C;
    case 426u: goto L_0886E6A0;
    case 427u: goto L_0886E6AC;
    case 428u: goto L_0886E6BC;
    case 429u: goto L_0886E6E8;
    case 430u: goto L_0886E718;
    case 431u: goto L_0886E764;
    case 432u: goto L_0886E770;
    case 433u: goto L_0886E7AC;
    case 434u: goto L_0886E804;
    case 435u: goto L_0886E810;
    case 436u: goto L_0886E834;
    case 437u: goto L_0886E860;
    case 438u: goto L_0886E878;
    case 439u: goto L_0886E884;
    case 440u: goto L_0886E890;
    case 441u: goto L_0886E8C4;
    case 442u: goto L_0886E8F4;
    case 443u: goto L_0886E904;
    case 444u: goto L_0886E960;
    case 445u: goto L_0886E98C;
    case 446u: goto L_0886E990;
    case 447u: goto L_0886E9B8;
    case 448u: goto L_0886E9E8;
    case 449u: goto L_0886EA10;
    case 450u: goto L_0886EA28;
    case 451u: goto L_0886EA34;
    case 452u: goto L_0886EA48;
    case 453u: goto L_0886EA54;
    case 454u: goto L_0886EA60;
    case 455u: goto L_0886EA70;
    case 456u: goto L_0886EA78;
    case 457u: goto L_0886EA80;
    case 458u: goto L_0886EA88;
    case 459u: goto L_0886EA9C;
    case 460u: goto L_0886EAAC;
    case 461u: goto L_0886EAB8;
    case 462u: goto L_0886EAD0;
    case 463u: goto L_0886EB0C;
    case 464u: goto L_0886EB18;
    case 465u: goto L_0886EB20;
    case 466u: goto L_0886EB30;
    case 467u: goto L_0886EB3C;
    case 468u: goto L_0886EB6C;
    case 469u: goto L_0886EB98;
    case 470u: goto L_0886EBA0;
    case 471u: goto L_0886EBB0;
    case 472u: goto L_0886EBC8;
    case 473u: goto L_0886EBD4;
    case 474u: goto L_0886EC8C;
    case 475u: goto L_0886EC94;
    case 476u: goto L_0886EC9C;
    case 477u: goto L_0886ECE0;
    case 478u: goto L_0886ECF4;
    case 479u: goto L_0886ED98;
    case 480u: goto L_0886EDAC;
    case 481u: goto L_0886EDC0;
    case 482u: goto L_0886EDD8;
    case 483u: goto L_0886EE0C;
    case 484u: goto L_0886EE28;
    case 485u: goto L_0886EE30;
    case 486u: goto L_0886EE38;
    case 487u: goto L_0886EE5C;
    case 488u: goto L_0886EE74;
    case 489u: goto L_0886EE98;
    case 490u: goto L_0886EEE0;
    case 491u: goto L_0886EEE8;
    case 492u: goto L_0886EEFC;
    case 493u: goto L_0886EF0C;
    case 494u: goto L_0886EF28;
    case 495u: goto L_0886EF40;
    case 496u: goto L_0886EF4C;
    case 497u: goto L_0886EF80;
    case 498u: goto L_0886EF8C;
    case 499u: goto L_0886EF94;
    case 500u: goto L_0886EF98;
    case 501u: goto L_0886EFA8;
    case 502u: goto L_0886EFB8;
    case 503u: goto L_0886EFC0;
    case 504u: goto L_0886EFC8;
    case 505u: goto L_0886EFD4;
    case 506u: goto L_0886EFDC;
    case 507u: goto L_0886F004;
    case 508u: goto L_0886F0E8;
    case 509u: goto L_0886F0F8;
    case 510u: goto L_0886F108;
    case 511u: goto L_0886F11C;
    case 512u: goto L_0886F124;
    case 513u: goto L_0886F158;
    case 514u: goto L_0886F15C;
    case 515u: goto L_0886F188;
    case 516u: goto L_0886F190;
    case 517u: goto L_0886F1A0;
    case 518u: goto L_0886F1B8;
    case 519u: goto L_0886F1D4;
    case 520u: goto L_0886F1DC;
    case 521u: goto L_0886F1F0;
    case 522u: goto L_0886F1F8;
    case 523u: goto L_0886F200;
    case 524u: goto L_0886F208;
    case 525u: goto L_0886F210;
    case 526u: goto L_0886F258;
    case 527u: goto L_0886F25C;
    case 528u: goto L_0886F26C;
    case 529u: goto L_0886F27C;
    case 530u: goto L_0886F284;
    case 531u: goto L_0886F2A8;
    case 532u: goto L_0886F2C4;
    case 533u: goto L_0886F2EC;
    case 534u: goto L_0886F384;
    case 535u: goto L_0886F3A0;
    case 536u: goto L_0886F420;
    case 537u: goto L_0886F430;
    case 538u: goto L_0886F438;
    case 539u: goto L_0886F44C;
    case 540u: goto L_0886F458;
    case 541u: goto L_0886F460;
    case 542u: goto L_0886F464;
    case 543u: goto L_0886F474;
    case 544u: goto L_0886F484;
    case 545u: goto L_0886F48C;
    case 546u: goto L_0886F494;
    case 547u: goto L_0886F49C;
    case 548u: goto L_0886F4A8;
    case 549u: goto L_0886F4B0;
    case 550u: goto L_0886F4DC;
    case 551u: goto L_0886F4E0;
    case 552u: goto L_0886F4F4;
    case 553u: goto L_0886F4F8;
    case 554u: goto L_0886F518;
    case 555u: goto L_0886F54C;
    case 556u: goto L_0886F59C;
    case 557u: goto L_0886F5E4;
    case 558u: goto L_0886F5EC;
    case 559u: goto L_0886F5F8;
    case 560u: goto L_0886F600;
    case 561u: goto L_0886F604;
    case 562u: goto L_0886F62C;
    case 563u: goto L_0886F650;
    case 564u: goto L_0886F664;
    case 565u: goto L_0886F668;
    case 566u: goto L_0886F67C;
    case 567u: goto L_0886F688;
    case 568u: goto L_0886F69C;
    case 569u: goto L_0886F6A8;
    case 570u: goto L_0886F6B8;
    case 571u: goto L_0886F6C0;
    case 572u: goto L_0886F6C8;
    case 573u: goto L_0886F6CC;
    case 574u: goto L_0886F6D4;
    case 575u: goto L_0886F6D8;
    case 576u: goto L_0886F6DC;
    case 577u: goto L_0886F6E4;
    case 578u: goto L_0886F6FC;
    case 579u: goto L_0886F708;
    case 580u: goto L_0886F70C;
    case 581u: goto L_0886F718;
    case 582u: goto L_0886F720;
    case 583u: goto L_0886F784;
    case 584u: goto L_0886F7B0;
    case 585u: goto L_0886F898;
    case 586u: goto L_0886F8D4;
    case 587u: goto L_0886F8DC;
    case 588u: goto L_0886F8F0;
    case 589u: goto L_0886F8F8;
    case 590u: goto L_0886F920;
    case 591u: goto L_0886F93C;
    case 592u: goto L_0886F94C;
    case 593u: goto L_0886F974;
    case 594u: goto L_0886F984;
    case 595u: goto L_0886F994;
    case 596u: goto L_0886F998;
    case 597u: goto L_0886F99C;
    case 598u: goto L_0886F9A4;
    case 599u: goto L_0886F9B4;
    case 600u: goto L_0886F9D8;
    case 601u: goto L_0886F9F0;
    case 602u: goto L_0886F9FC;
    case 603u: goto L_0886FA0C;
    case 604u: goto L_0886FA28;
    case 605u: goto L_0886FA30;
    case 606u: goto L_0886FA44;
    case 607u: goto L_0886FA4C;
    case 608u: goto L_0886FA58;
    case 609u: goto L_0886FA5C;
    case 610u: goto L_0886FA78;
    case 611u: goto L_0886FA80;
    case 612u: goto L_0886FA98;
    case 613u: goto L_0886FAA8;
    case 614u: goto L_0886FAB4;
    case 615u: goto L_0886FAC0;
    case 616u: goto L_0886FB08;
    case 617u: goto L_0886FB24;
    case 618u: goto L_0886FB28;
    case 619u: goto L_0886FB4C;
    case 620u: goto L_0886FB5C;
    case 621u: goto L_0886FB68;
    case 622u: goto L_0886FBB4;
    case 623u: goto L_0886FBC0;
    case 624u: goto L_0886FBC8;
    case 625u: goto L_0886FBD0;
    case 626u: goto L_0886FBD4;
    case 627u: goto L_0886FBDC;
    case 628u: goto L_0886FBE4;
    case 629u: goto L_0886FBEC;
    case 630u: goto L_0886FBF0;
    case 631u: goto L_0886FBF8;
    case 632u: goto L_0886FC00;
    case 633u: goto L_0886FC08;
    case 634u: goto L_0886FC0C;
    case 635u: goto L_0886FC34;
    case 636u: goto L_0886FC3C;
    case 637u: goto L_0886FC48;
    case 638u: goto L_0886FC60;
    case 639u: goto L_0886FC74;
    case 640u: goto L_0886FC84;
    case 641u: goto L_0886FCB4;
    case 642u: goto L_0886FCB8;
    case 643u: goto L_0886FCE8;
    case 644u: goto L_0886FD20;
    case 645u: goto L_0886FDB4;
    case 646u: goto L_0886FDCC;
    case 647u: goto L_0886FDDC;
    case 648u: goto L_0886FDF8;
    case 649u: goto L_0886FE28;
    case 650u: goto L_0886FE8C;
    case 651u: goto L_0886FED0;
    case 652u: goto L_0886FEE0;
    case 653u: goto L_0886FEEC;
    case 654u: goto L_0886FF10;
    case 655u: goto L_0886FF14;
    case 656u: goto L_0886FF38;
    case 657u: goto L_0886FF9C;
    case 658u: goto L_0886FFA4;
    case 659u: goto L_0886FFB4;
    case 660u: goto L_0886FFC8;
    case 661u: goto L_0886FFD4;
    case 662u: goto L_0886FFE0;
    case 663u: goto L_0886FFFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_0886C000:
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
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    ctx.execute_vfpu_cross_quat(0u, 1u, 2u, 3u);
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (15692u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<1u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 1u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[23] = (0u | 1u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[8]);
    goto L_0886C060;
L_0886C060:
    ctx.gpr[4] = (15744u << 16u);
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16256u << 16u);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17279u << 16u);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[2] = (0u | 255u);
    ctx.fpr[13] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[11] = (ctx.gpr[2] | 0u);
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[12];
    ctx.gpr[10] = (ctx.gpr[2] | 0u);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[3] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[8] = (ctx.gpr[3] << 16u);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 16u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(64), static_cast<std::uint8_t>(ctx.gpr[2]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(65), static_cast<std::uint8_t>(ctx.gpr[11]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(66), static_cast<std::uint8_t>(ctx.gpr[10]));
    ctx.gpr[4] = (0u | 0u);
    if (ctx.gpr[12] == 0u) {
    ctx.gpr[4] = (ctx.gpr[8] & 255u);
        goto L_0886C0C4;
    }
    goto L_0886C0C4;
L_0886C0C4:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(67), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(16)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(20)));
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(24)));
    ctx.fpr[13] = ctx.fpr[15] - ctx.fpr[13];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(220)));
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[14] = ctx.fpr[16] - ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[17] = ctx.fpr[18] - ctx.fpr[17];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(80), static_cast<std::uint8_t>(ctx.gpr[2]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(81), static_cast<std::uint8_t>(ctx.gpr[11]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(82), static_cast<std::uint8_t>(ctx.gpr[10]));
    ctx.gpr[4] = (0u | 0u);
    if (ctx.gpr[12] == 0u) {
    ctx.gpr[4] = (ctx.gpr[8] & 255u);
        goto L_0886C144;
    }
    goto L_0886C144;
L_0886C144:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(83), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(16)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(20)));
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(24)));
    ctx.fpr[13] = ctx.fpr[15] + ctx.fpr[13];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[14] = ctx.fpr[16] + ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[17] = ctx.fpr[18] + ctx.fpr[17];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[12];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(96), static_cast<std::uint8_t>(ctx.gpr[2]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(ctx.gpr[11]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(98), static_cast<std::uint8_t>(ctx.gpr[10]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(99), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(16)));
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[30] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[30] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[28] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[28] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(20)));
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[26] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[26] = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(24)));
    ctx.fpr[30] = ctx.fpr[14] - ctx.fpr[30];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    ctx.fpr[28] = ctx.fpr[16] - ctx.fpr[28];
    ctx.fpr[26] = ctx.fpr[17] - ctx.fpr[26];
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(112), static_cast<std::uint8_t>(ctx.gpr[2]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(ctx.gpr[11]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(114), static_cast<std::uint8_t>(ctx.gpr[10]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(115), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(16)));
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(20)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(24)));
    ctx.fpr[24] = ctx.fpr[14] + ctx.fpr[24];
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.fpr[22] = ctx.fpr[16] + ctx.fpr[22];
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[5] = (0u | 4u);
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[20] = ctx.fpr[17] + ctx.fpr[20];
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[6] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), ctx.gpr[8]);
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(8), ctx.gpr[8]);
    ctx.gpr[31] = (0x0886C29Cu);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 50u, 0x08868560u>(ctx, &aot_mem) && ctx.pc == 0x0886C29Cu) goto L_0886C29C;
    return;
L_0886C29C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886C2BC;
      }
      goto L_0886C2A4;
    }
L_0886C2A4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    ctx.gpr[4] = (0u | 3u);
    ctx.gpr[31] = (0x0886C2B4u);
    ctx.gpr[6] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 71u, 0x0886885Cu>(ctx, &aot_mem) && ctx.pc == 0x0886C2B4u) goto L_0886C2B4;
    return;
L_0886C2B4:
    ctx.gpr[31] = (0x0886C2BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 70u, 0x08868844u>(ctx, &aot_mem) && ctx.pc == 0x0886C2BCu) goto L_0886C2BC;
    return;
L_0886C2BC:
    ctx.gpr[10] = (ctx.gpr[17] | 0u);
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    ctx.gpr[8] = (ctx.gpr[21] << 16u);
    ctx.gpr[16] = (ctx.gpr[4] << 16u);
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 16u));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 16u));
      if (branch_taken) {
          goto L_0886C2E8;
      }
      goto L_0886C2DC;
    }
L_0886C2DC:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[4] << 16u);
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 16u));
    goto L_0886C2E8;
L_0886C2E8:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[8]) < 15 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 722u, 0x0886BF88u>(ctx, &aot_mem); return;
      }
      goto L_0886C2F4;
    }
L_0886C2F4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[31] = (0x0886C348u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x0886C348u) goto L_0886C348;
    return;
L_0886C348:
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[31] = (0x0886C354u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x0886C354u) goto L_0886C354;
    return;
L_0886C354:
    ctx.gpr[4] = (0u | 14u);
    ctx.gpr[31] = (0x0886C360u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x0886C360u) goto L_0886C360;
    return;
L_0886C360:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(236)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(240)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(244)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(248)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(252)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(264)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(268)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(272)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(280)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(284)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(288)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(292)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(304));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886C3A8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-272));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(248), ctx.gpr[22]);
    ctx.gpr[22] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (17948u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 16384u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (50716u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 16384u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[7] = (0u | 0u);
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[5] = (ctx.gpr[22] + static_cast<std::uint32_t>(20));
    ctx.gpr[4] = (ctx.gpr[22] + static_cast<std::uint32_t>(16));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[6] = (ctx.gpr[22] + static_cast<std::uint32_t>(24));
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
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(252), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), ctx.gpr[31]);
    goto L_0886C428;
L_0886C428:
    ctx.gpr[8] = (ctx.gpr[22] + ctx.gpr[7]);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(528)));
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886C4F8;
      }
      goto L_0886C438;
    }
L_0886C438:
    ctx.gpr[8] = (ctx.gpr[4] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[19]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
        goto L_0886C454;
    }
    goto L_0886C454;
L_0886C454:
    ctx.gpr[8] = (ctx.gpr[4] | 0u);
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[19]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
        goto L_0886C474;
    }
    goto L_0886C474;
L_0886C474:
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[19]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
        goto L_0886C494;
    }
    goto L_0886C494;
L_0886C494:
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[19]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
        goto L_0886C4B4;
    }
    goto L_0886C4B4;
L_0886C4B4:
    ctx.gpr[8] = (ctx.gpr[6] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[19]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
        goto L_0886C4D4;
    }
    goto L_0886C4D4;
L_0886C4D4:
    ctx.gpr[8] = (ctx.gpr[6] | 0u);
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[19]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
        goto L_0886C4F4;
    }
    goto L_0886C4F4;
L_0886C4F4:
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0886C4F8;
L_0886C4F8:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_0886C428;
      }
      goto L_0886C510;
    }
L_0886C510:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0886C8D0;
      }
      goto L_0886C544;
    }
L_0886C544:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(3248));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), ctx.gpr[4]);
    ctx.gpr[4] = (16153u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.lo);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), ctx.gpr[4]);
    ctx.gpr[4] = (15948u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[4] = (16672u << 16u);
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[4] = (17076u << 16u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[30] = (2230u << 16u);
    goto L_0886C59C;
L_0886C59C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] & 128u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
        goto L_0886C5C4;
    }
    goto L_0886C5BC;
L_0886C5BC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_0886C5CC;
      }
      goto L_0886C5C4;
    }
L_0886C5C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (ctx.gpr[4] + ctx.gpr[17]);
    goto L_0886C5CC;
L_0886C5CC:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886C8AC;
      }
      goto L_0886C5D4;
    }
L_0886C5D4:
    ctx.gpr[19] = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0886C8AC;
      }
      goto L_0886C5F0;
    }
L_0886C5F0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0886C8AC;
      }
      goto L_0886C608;
    }
L_0886C608:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0886C8AC;
      }
      goto L_0886C620;
    }
L_0886C620:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0886C8AC;
      }
      goto L_0886C638;
    }
L_0886C638:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0886C8AC;
      }
      goto L_0886C650;
    }
L_0886C650:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0886C8AC;
      }
      goto L_0886C668;
    }
L_0886C668:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(112));
    goto L_0886C670;
L_0886C670:
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[22]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(528)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] << 4u);
      if (branch_taken) {
          goto L_0886C89C;
      }
      goto L_0886C680;
    }
L_0886C680:
    ctx.gpr[16] = (ctx.gpr[22] + ctx.gpr[16]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[15];
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[16] = ctx.fpr[16] - ctx.fpr[17];
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[5] = (16544u << 16u);
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[15];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[18]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0886C89C;
      }
      goto L_0886C6D4;
    }
L_0886C6D4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), ctx.gpr[23]);
    ctx.gpr[23] = (ctx.gpr[16] | 0u);
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(72));
    ctx.gpr[31] = (0x0886C6F8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 338u, 0x0899E180u>(ctx, &aot_mem) && ctx.pc == 0x0886C6F8u) goto L_0886C6F8;
    return;
L_0886C6F8:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(404)));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(-7864)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x0886C738u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 270u, 0x08A0E0E8u>(ctx, &aot_mem) && ctx.pc == 0x0886C738u) goto L_0886C738;
    return;
L_0886C738:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(112)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(272)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[14];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(116)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(276)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[15];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[24]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
      if (branch_taken) {
          goto L_0886C7A8;
      }
      goto L_0886C78C;
    }
L_0886C78C:
    ctx.fpr[12] = ctx.fpr[24] / ctx.fpr[12];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(112)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(116)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0886C7A8;
L_0886C7A8:
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(25));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 2000u);
    ctx.gpr[31] = (0x0886C7BCu);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 98u, 0x089A0734u>(ctx, &aot_mem) && ctx.pc == 0x0886C7BCu) goto L_0886C7BC;
    return;
L_0886C7BC:
    ctx.gpr[4] = (16025u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (0u | 31u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x0886C804u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 78u, 0x08998634u>(ctx, &aot_mem) && ctx.pc == 0x0886C804u) goto L_0886C804;
    return;
L_0886C804:
    ctx.gpr[4] = (48793u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x0886C848u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x0886C848u) goto L_0886C848;
    return;
L_0886C848:
    ctx.fpr[12] = ctx.fpr[30] - ctx.fpr[20];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[31] = (0x0886C860u);
    ctx.gpr[16] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x0886C860u) goto L_0886C860;
    return;
L_0886C860:
    ctx.fpr[13] = ctx.fpr[28] - ctx.fpr[20];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[20] + ctx.fpr[13];
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[9] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (0u | 44u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[31] = (0x0886C898u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 78u, 0x08998634u>(ctx, &aot_mem) && ctx.pc == 0x0886C898u) goto L_0886C898;
    return;
L_0886C898:
    ctx.gpr[4] = (0u | 16u);
    goto L_0886C89C;
L_0886C89C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886C670;
      }
      goto L_0886C8AC;
    }
L_0886C8AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-3248));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), ctx.gpr[6]);
      if (branch_taken) {
          goto L_0886C59C;
      }
      goto L_0886C8D0;
    }
L_0886C8D0:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(220)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(236)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(240)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(244)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(248)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(252)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886C918:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-544));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(496), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(500), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(504), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(508), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(512), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(516), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(520), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(524), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(528), ctx.gpr[31]);
    ctx.gpr[31] = (0x0886C948u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x0886C948u) goto L_0886C948;
    return;
L_0886C948:
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0886CBE8;
      }
      goto L_0886C950;
    }
L_0886C950:
    ctx.gpr[31] = (0x0886C958u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x0886C958u) goto L_0886C958;
    return;
L_0886C958:
    ctx.gpr[31] = (0x0886C960u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 1044u, 0x08A97D90u>(ctx, &aot_mem) && ctx.pc == 0x0886C960u) goto L_0886C960;
    return;
L_0886C960:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886CF2C;
      }
      goto L_0886C968;
    }
L_0886C968:
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1708)));
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[4] = (14723u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-7864)));
    ctx.gpr[4] = (ctx.gpr[4] | 4719u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x0886C98Cu);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x0886C98Cu) goto L_0886C98C;
    return;
L_0886C98C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0886C998u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 824u, 0x08A97354u>(ctx, &aot_mem) && ctx.pc == 0x0886C998u) goto L_0886C998;
    return;
L_0886C998:
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1712)));
    ctx.gpr[4] = (14545u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 46871u);
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (0u | 0u);
    ctx.fpr[12] = ctx.fpr[22] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1708), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-7864)));
    ctx.gpr[31] = (0x0886C9CCu);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x0886C9CCu) goto L_0886C9CC;
    return;
L_0886C9CC:
    ctx.gpr[31] = (0x0886C9D4u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 835u, 0x08A97400u>(ctx, &aot_mem) && ctx.pc == 0x0886C9D4u) goto L_0886C9D4;
    return;
L_0886C9D4:
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[5] = (15692u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[6] = (16025u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(25651)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] | 39322u);
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
      if (branch_taken) {
          goto L_0886CA10;
      }
      goto L_0886CA04;
    }
L_0886CA04:
    ctx.gpr[4] = (49024u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_0886CA18;
      }
      goto L_0886CA10;
    }
L_0886CA10:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_0886CA18;
L_0886CA18:
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1712), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0886CA34;
      }
      goto L_0886CA30;
    }
L_0886CA30:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1712), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    goto L_0886CA34;
L_0886CA34:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1712)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0886CA4C;
      }
      goto L_0886CA48;
    }
L_0886CA48:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1712), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    goto L_0886CA4C;
L_0886CA4C:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16262u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (16385u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 18350u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16192u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), ctx.gpr[4]);
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[31] = (0x0886CABCu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 509u, 0x08A0654Cu>(ctx, &aot_mem) && ctx.pc == 0x0886CABCu) goto L_0886CABC;
    return;
L_0886CABC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1708)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.gpr[31] = (0x0886CACCu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 490u, 0x08A05FD4u>(ctx, &aot_mem) && ctx.pc == 0x0886CACCu) goto L_0886CACC;
    return;
L_0886CACC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x0886CADCu);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 653u, 0x0886B7F0u>(ctx, &aot_mem) && ctx.pc == 0x0886CADCu) goto L_0886CADC;
    return;
L_0886CADC:
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0886CAF0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 565u, 0x089274ACu>(ctx, &aot_mem) && ctx.pc == 0x0886CAF0u) goto L_0886CAF0;
    return;
L_0886CAF0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0886CB00u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 653u, 0x0886B7F0u>(ctx, &aot_mem) && ctx.pc == 0x0886CB00u) goto L_0886CB00;
    return;
L_0886CB00:
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x0886CB14u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1708)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 376u, 0x08AF99E4u>(ctx, &aot_mem) && ctx.pc == 0x0886CB14u) goto L_0886CB14;
    return;
L_0886CB14:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x0886CB20u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1712)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 377u, 0x08AF9A08u>(ctx, &aot_mem) && ctx.pc == 0x0886CB20u) goto L_0886CB20;
    return;
L_0886CB20:
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.gpr[31] = (0x0886CB2Cu);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1708)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 377u, 0x08AF9A08u>(ctx, &aot_mem) && ctx.pc == 0x0886CB2Cu) goto L_0886CB2C;
    return;
L_0886CB2C:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x0886CB38u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1712)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 377u, 0x08AF9A08u>(ctx, &aot_mem) && ctx.pc == 0x0886CB38u) goto L_0886CB38;
    return;
L_0886CB38:
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    ctx.gpr[31] = (0x0886CB44u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1712)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 376u, 0x08AF99E4u>(ctx, &aot_mem) && ctx.pc == 0x0886CB44u) goto L_0886CB44;
    return;
L_0886CB44:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x0886CB84u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x0886CB84u) goto L_0886CB84;
    return;
L_0886CB84:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 15u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (14979u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4719u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0886CBBCu);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 683u, 0x0886BB50u>(ctx, &aot_mem) && ctx.pc == 0x0886CBBCu) goto L_0886CBBC;
    return;
L_0886CBBC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886CBE0;
      }
      goto L_0886CBCC;
    }
L_0886CBCC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886CBE0;
      }
      goto L_0886CBD8;
    }
L_0886CBD8:
    ctx.gpr[31] = (0x0886CBE0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x0886CBE0u) goto L_0886CBE0;
    return;
L_0886CBE0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0886CF2C;
      }
      goto L_0886CBE8;
    }
L_0886CBE8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u | 48u);
    ctx.gpr[4] = (ctx.gpr[4] & 496u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0886CF2C;
      }
      goto L_0886CBFC;
    }
L_0886CBFC:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-24800));
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[6] = (16672u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (16908u << 16u);
    ctx.gpr[31] = (0x0886CC28u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 591u, 0x0884E520u>(ctx, &aot_mem) && ctx.pc == 0x0886CC28u) goto L_0886CC28;
    return;
L_0886CC28:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886CF2C;
      }
      goto L_0886CC34;
    }
L_0886CC34:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[12];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x0886CC50u);
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[15];
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 282u, 0x089D962Cu>(ctx, &aot_mem) && ctx.pc == 0x0886CC50u) goto L_0886CC50;
    return;
L_0886CC50:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[17] = (2230u << 16u);
      if (branch_taken) {
          goto L_0886CC78;
      }
      goto L_0886CC68;
    }
L_0886CC68:
    ctx.gpr[4] = (16585u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[22] = ctx.fpr[22] + ctx.fpr[12];
    goto L_0886CC78;
L_0886CC78:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x0886CC88u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 282u, 0x089D962Cu>(ctx, &aot_mem) && ctx.pc == 0x0886CC88u) goto L_0886CC88;
    return;
L_0886CC88:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (16585u << 16u);
      if (branch_taken) {
          goto L_0886CCA8;
      }
      goto L_0886CC9C;
    }
L_0886CC9C:
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_0886CCA8;
L_0886CCA8:
    ctx.fpr[22] = ctx.fpr[12] - ctx.fpr[22];
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1708)));
    ctx.gpr[31] = (0x0886CCB8u);
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[12];
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 253u, 0x08A1D3ECu>(ctx, &aot_mem) && ctx.pc == 0x0886CCB8u) goto L_0886CCB8;
    return;
L_0886CCB8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7864)));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (15395u << 16u);
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    if (ctx.fpu_condition()) {
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
        goto L_0886CCE4;
    }
    goto L_0886CCE4;
L_0886CCE4:
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0886CCFC;
      }
      goto L_0886CCF4;
    }
L_0886CCF4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1708), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
      if (branch_taken) {
          goto L_0886CD28;
      }
      goto L_0886CCFC;
    }
L_0886CCFC:
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0886CD1C;
      }
      goto L_0886CD0C;
    }
L_0886CD0C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1708)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1708), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0886CD28;
      }
      goto L_0886CD1C;
    }
L_0886CD1C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1708)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1708), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0886CD28;
L_0886CD28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] & 4095u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_0886CD48;
      }
      goto L_0886CD3C;
    }
L_0886CD3C:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_0886CD48;
L_0886CD48:
    ctx.gpr[4] = (16584u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 62915u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (14720u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
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
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (15948u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1712), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] >> 10u);
    ctx.gpr[4] = (ctx.gpr[4] & 3u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886CF2C;
      }
      goto L_0886CDAC;
    }
L_0886CDAC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (16262u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16385u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 18350u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(272), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (16192u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(280), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(352), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(356)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(356), ctx.gpr[4]);
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(288));
    ctx.gpr[31] = (0x0886CE18u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 509u, 0x08A0654Cu>(ctx, &aot_mem) && ctx.pc == 0x0886CE18u) goto L_0886CE18;
    return;
L_0886CE18:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1708)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.gpr[31] = (0x0886CE28u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 490u, 0x08A05FD4u>(ctx, &aot_mem) && ctx.pc == 0x0886CE28u) goto L_0886CE28;
    return;
L_0886CE28:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x0886CE38u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 653u, 0x0886B7F0u>(ctx, &aot_mem) && ctx.pc == 0x0886CE38u) goto L_0886CE38;
    return;
L_0886CE38:
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0886CE4Cu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 565u, 0x089274ACu>(ctx, &aot_mem) && ctx.pc == 0x0886CE4Cu) goto L_0886CE4C;
    return;
L_0886CE4C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0886CE5Cu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 653u, 0x0886B7F0u>(ctx, &aot_mem) && ctx.pc == 0x0886CE5Cu) goto L_0886CE5C;
    return;
L_0886CE5C:
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x0886CE70u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1708)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 376u, 0x08AF99E4u>(ctx, &aot_mem) && ctx.pc == 0x0886CE70u) goto L_0886CE70;
    return;
L_0886CE70:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x0886CE7Cu);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1712)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 377u, 0x08AF9A08u>(ctx, &aot_mem) && ctx.pc == 0x0886CE7Cu) goto L_0886CE7C;
    return;
L_0886CE7C:
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.gpr[31] = (0x0886CE88u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1708)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 377u, 0x08AF9A08u>(ctx, &aot_mem) && ctx.pc == 0x0886CE88u) goto L_0886CE88;
    return;
L_0886CE88:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x0886CE94u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1712)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 377u, 0x08AF9A08u>(ctx, &aot_mem) && ctx.pc == 0x0886CE94u) goto L_0886CE94;
    return;
L_0886CE94:
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    ctx.gpr[31] = (0x0886CEA0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1712)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 376u, 0x08AF99E4u>(ctx, &aot_mem) && ctx.pc == 0x0886CEA0u) goto L_0886CEA0;
    return;
L_0886CEA0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(256));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x0886CEE0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(264)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x0886CEE0u) goto L_0886CEE0;
    return;
L_0886CEE0:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 15u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (14979u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4719u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(264), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(356)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886CF2C;
      }
      goto L_0886CF18;
    }
L_0886CF18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(352)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886CF2C;
      }
      goto L_0886CF24;
    }
L_0886CF24:
    ctx.gpr[31] = (0x0886CF2Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(352)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x0886CF2Cu) goto L_0886CF2C;
    return;
L_0886CF2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1200)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886CFEC;
      }
      goto L_0886CF38;
    }
L_0886CF38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(436)));
    ctx.gpr[17] = (0u + static_cast<std::uint32_t>(-2));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(432), 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(436), ctx.gpr[4]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1200)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(368));
      if (branch_taken) {
          goto L_0886CF70;
      }
      goto L_0886CF58;
    }
L_0886CF58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(436)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_0886CF74;
      }
      goto L_0886CF68;
    }
L_0886CF68:
    ctx.gpr[31] = (0x0886CF70u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(432)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x0886CF70u) goto L_0886CF70;
    return;
L_0886CF70:
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(16));
    goto L_0886CF74;
L_0886CF74:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(432), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(436)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(436), ctx.gpr[4]);
    ctx.gpr[31] = (0x0886CF8Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 508u, 0x08A0651Cu>(ctx, &aot_mem) && ctx.pc == 0x0886CF8Cu) goto L_0886CF8C;
    return;
L_0886CF8C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(416));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(448));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1708)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.gpr[31] = (0x0886CFACu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 490u, 0x08A05FD4u>(ctx, &aot_mem) && ctx.pc == 0x0886CFACu) goto L_0886CFAC;
    return;
L_0886CFAC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(448)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(452)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(456)));
    ctx.gpr[31] = (0x0886CFC0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 515u, 0x08A06668u>(ctx, &aot_mem) && ctx.pc == 0x0886CFC0u) goto L_0886CFC0;
    return;
L_0886CFC0:
    ctx.gpr[31] = (0x0886CFC8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 505u, 0x08A064E8u>(ctx, &aot_mem) && ctx.pc == 0x0886CFC8u) goto L_0886CFC8;
    return;
L_0886CFC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(436)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886CFEC;
      }
      goto L_0886CFD8;
    }
L_0886CFD8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(432)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886CFEC;
      }
      goto L_0886CFE4;
    }
L_0886CFE4:
    ctx.gpr[31] = (0x0886CFECu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(432)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x0886CFECu) goto L_0886CFEC;
    return;
L_0886CFEC:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(496)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(500)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(504)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(508)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(512)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(516)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(520)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(524)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(528)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(544));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886D018:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(13748)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[17];
    ctx.gpr[5] = (2227u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(13744)));
    ctx.gpr[5] = (16014u << 16u);
    ctx.gpr[8] = (ctx.gpr[5] | 14571u);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.gpr[6] = (2227u << 16u);
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(13772)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(13752), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[16] / ctx.fpr[15];
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.fpr[12] = ctx.fpr[17] / ctx.fpr[12];
    ctx.gpr[2] = (2227u << 16u);
    ctx.gpr[11] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(13760), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[9] = (16672u << 16u);
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(13756), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[9]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[10] = (15744u << 16u);
    ctx.gpr[3] = (2227u << 16u);
    ctx.gpr[7] = (2269u << 16u);
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[10]);
    ctx.gpr[12] = (2227u << 16u);
    ctx.gpr[14] = (2224u << 16u);
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(-2512));
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(13764), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.gpr[13] = (2227u << 16u);
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[6] = (0u | 544u);
    ctx.gpr[7] = (ctx.gpr[14] + static_cast<std::uint32_t>(-16764));
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(13768), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x0886D0CCu);
    aot_mem.aot_store32(ctx.gpr[13] + static_cast<std::uint32_t>(13776), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 341u, 0x08AF5A1Cu>(ctx, &aot_mem) && ctx.pc == 0x0886D0CCu) goto L_0886D0CC;
    return;
L_0886D0CC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886D0D8:
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
L_0886D104:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    ctx.gpr[4] = (0u | 255u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(18))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(20))))));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(22))))));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[6]));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(22), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 1400u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(33), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x0886D1A0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x0886D1A0u) goto L_0886D1A0;
    return;
L_0886D1A0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(52), static_cast<std::uint16_t>(ctx.gpr[17]));
    ctx.gpr[31] = (0x0886D1B0u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(56));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 327u, 0x089D98BCu>(ctx, &aot_mem) && ctx.pc == 0x0886D1B0u) goto L_0886D1B0;
    return;
L_0886D1B0:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(96), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(104), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(108), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(112), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(116), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(120), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(124), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(128), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(132), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(136), 0u);
    ctx.gpr[7] = (2224u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(140), 0u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (0u | 48u);
    ctx.gpr[6] = (0u | 1412u);
    ctx.gpr[31] = (0x0886D1F8u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-16724));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 341u, 0x08AF5A1Cu>(ctx, &aot_mem) && ctx.pc == 0x0886D1F8u) goto L_0886D1F8;
    return;
L_0886D1F8:
    ctx.gpr[4] = (1u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (1u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(2384), 0u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[5] = (1u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(2388), 0u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[5] = (1u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(2392), 0u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[5] = (1u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(2396), 0u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[5] = (1u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(2400), 0u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[5] = (1u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(2404), 0u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[5] = (1u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(2408), 0u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(2412), 0u);
    ctx.gpr[31] = (0x0886D260u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0886D4A8;
L_0886D260:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886D278:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_0886D46C;
      }
      goto L_0886D2B0;
    }
L_0886D2B0:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x0886D2BCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4064));
    goto L_0886D0D8;
L_0886D2BC:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(120));
    ctx.gpr[23] = (ctx.gpr[16] + static_cast<std::uint32_t>(108));
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[4];
    ctx.gpr[30] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
      if (branch_taken) {
          goto L_0886D30C;
      }
      goto L_0886D2D4;
    }
L_0886D2D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0886D2F4;
      }
      goto L_0886D2E0;
    }
L_0886D2E0:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0886D2ECu);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0886D2ECu) goto L_0886D2EC;
    return;
L_0886D2EC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
      if (branch_taken) {
          goto L_0886D300;
      }
      goto L_0886D2F4;
    }
L_0886D2F4:
    ctx.gpr[31] = (0x0886D2FCu);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 656u, 0x08AA3128u>(ctx, &aot_mem) && ctx.pc == 0x0886D2FCu) goto L_0886D2FC;
    return;
L_0886D2FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    goto L_0886D300;
L_0886D300:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0886D2D4;
      }
      goto L_0886D30C;
    }
L_0886D30C:
    ctx.gpr[31] = (0x0886D314u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(12));
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 633u, 0x08973F88u>(ctx, &aot_mem) && ctx.pc == 0x0886D314u) goto L_0886D314;
    return;
L_0886D314:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886D3EC;
      }
      goto L_0886D31C;
    }
L_0886D31C:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(124)));
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[19];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_0886D3C8;
      }
      goto L_0886D32C;
    }
L_0886D32C:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(28));
      if (branch_taken) {
          goto L_0886D3BC;
      }
      goto L_0886D334;
    }
L_0886D334:
    ctx.gpr[21] = (ctx.gpr[20] + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[22] = (ctx.gpr[20] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0886D364;
      }
      goto L_0886D340;
    }
L_0886D340:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_0886D364;
      }
      goto L_0886D348;
    }
L_0886D348:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886D364;
      }
      goto L_0886D354;
    }
L_0886D354:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886D364;
      }
      goto L_0886D35C;
    }
L_0886D35C:
    ctx.gpr[31] = (0x0886D364u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 668u, 0x08AA3200u>(ctx, &aot_mem) && ctx.pc == 0x0886D364u) goto L_0886D364;
    return;
L_0886D364:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886D390;
      }
      goto L_0886D36C;
    }
L_0886D36C:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_0886D390;
      }
      goto L_0886D374;
    }
L_0886D374:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886D390;
      }
      goto L_0886D380;
    }
L_0886D380:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886D390;
      }
      goto L_0886D388;
    }
L_0886D388:
    ctx.gpr[31] = (0x0886D390u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 668u, 0x08AA3200u>(ctx, &aot_mem) && ctx.pc == 0x0886D390u) goto L_0886D390;
    return;
L_0886D390:
    if (ctx.gpr[22] == 0u) {
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(40));
        goto L_0886D3C0;
    }
    goto L_0886D398;
L_0886D398:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_0886D3BC;
      }
      goto L_0886D3A0;
    }
L_0886D3A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(40));
        goto L_0886D3C0;
    }
    goto L_0886D3AC;
L_0886D3AC:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(40));
        goto L_0886D3C0;
    }
    goto L_0886D3B4;
L_0886D3B4:
    ctx.gpr[31] = (0x0886D3BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 668u, 0x08AA3200u>(ctx, &aot_mem) && ctx.pc == 0x0886D3BCu) goto L_0886D3BC;
    return;
L_0886D3BC:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(40));
    goto L_0886D3C0;
L_0886D3C0:
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_0886D32C;
      }
      goto L_0886D3C8;
    }
L_0886D3C8:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886D3EC;
      }
      goto L_0886D3D0;
    }
L_0886D3D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886D3EC;
      }
      goto L_0886D3DC;
    }
L_0886D3DC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886D3EC;
      }
      goto L_0886D3E4;
    }
L_0886D3E4:
    ctx.gpr[31] = (0x0886D3ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 668u, 0x08AA3200u>(ctx, &aot_mem) && ctx.pc == 0x0886D3ECu) goto L_0886D3EC;
    return;
L_0886D3EC:
    { const bool branch_taken = ctx.gpr[23] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(56));
      if (branch_taken) {
          goto L_0886D41C;
      }
      goto L_0886D3F4;
    }
L_0886D3F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    { const bool branch_taken = ctx.gpr[23] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_0886D418;
      }
      goto L_0886D400;
    }
L_0886D400:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(56));
        goto L_0886D41C;
    }
    goto L_0886D408;
L_0886D408:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(56));
        goto L_0886D41C;
    }
    goto L_0886D410;
L_0886D410:
    ctx.gpr[31] = (0x0886D418u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 668u, 0x08AA3200u>(ctx, &aot_mem) && ctx.pc == 0x0886D418u) goto L_0886D418;
    return;
L_0886D418:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(56));
    goto L_0886D41C;
L_0886D41C:
    ctx.gpr[31] = (0x0886D424u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 329u, 0x089D98F0u>(ctx, &aot_mem) && ctx.pc == 0x0886D424u) goto L_0886D424;
    return;
L_0886D424:
    { const bool branch_taken = ctx.gpr[30] == 0u;
    ctx.gpr[4] = (ctx.gpr[17] & 1u);
      if (branch_taken) {
          goto L_0886D45C;
      }
      goto L_0886D42C;
    }
L_0886D42C:
    { const bool branch_taken = ctx.gpr[30] == 0u;
    ctx.gpr[4] = (ctx.gpr[17] & 1u);
      if (branch_taken) {
          goto L_0886D45C;
      }
      goto L_0886D434;
    }
L_0886D434:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (ctx.gpr[17] & 1u);
        goto L_0886D45C;
    }
    goto L_0886D440;
L_0886D440:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_0886D458;
      }
      goto L_0886D450;
    }
L_0886D450:
    ctx.gpr[31] = (0x0886D458u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 656u, 0x08AA3128u>(ctx, &aot_mem) && ctx.pc == 0x0886D458u) goto L_0886D458;
    return;
L_0886D458:
    ctx.gpr[4] = (ctx.gpr[17] & 1u);
    goto L_0886D45C;
L_0886D45C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886D46C;
      }
      goto L_0886D464;
    }
L_0886D464:
    ctx.gpr[31] = (0x0886D46Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 656u, 0x08AA3128u>(ctx, &aot_mem) && ctx.pc == 0x0886D46Cu) goto L_0886D46C;
    return;
L_0886D46C:
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
L_0886D49C:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886D4A8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16))))));
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_0886D4F4;
      }
      goto L_0886D4DC;
    }
L_0886D4DC:
    ctx.gpr[31] = (0x0886D4E4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 656u, 0x08AA3128u>(ctx, &aot_mem) && ctx.pc == 0x0886D4E4u) goto L_0886D4E4;
    return;
L_0886D4E4:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_0886D4DC;
      }
      goto L_0886D4F0;
    }
L_0886D4F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    goto L_0886D4F4;
L_0886D4F4:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(17))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(132)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(112), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(136), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(140), 0u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(52), static_cast<std::uint16_t>(0u));
    ctx.gpr[31] = (0x0886D520u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(120));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 923u, 0x08AFBEBCu>(ctx, &aot_mem) && ctx.pc == 0x0886D520u) goto L_0886D520;
    return;
L_0886D520:
    ctx.gpr[31] = (0x0886D528u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0886DEF4;
L_0886D528:
    ctx.gpr[31] = (0x0886D530u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0886DEF4;
L_0886D530:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (ctx.gpr[17] - ctx.gpr[4]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[6] >> 30u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[5] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), 0u);
      if (branch_taken) {
          goto L_0886D570;
      }
      goto L_0886D558;
    }
L_0886D558:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(29), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(112), ctx.gpr[5]);
      if (branch_taken) {
          goto L_0886D58C;
      }
      goto L_0886D570;
    }
L_0886D570:
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(108));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.gpr[31] = (0x0886D588u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 230u, 0x08AFCF5Cu>(ctx, &aot_mem) && ctx.pc == 0x0886D588u) goto L_0886D588;
    return;
L_0886D588:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    goto L_0886D58C;
L_0886D58C:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0886D59Cu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    goto L_0886E068;
L_0886D59C:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    ctx.gpr[7] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0886D5CCu);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    goto L_0886E068;
L_0886D5CC:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(104), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), 0u);
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
L_0886D5F0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[31]);
    ctx.gpr[31] = (0x0886D610u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    goto L_0886D4A8;
L_0886D610:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(96), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(12));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0886D624u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 626u, 0x08973EF8u>(ctx, &aot_mem) && ctx.pc == 0x0886D624u) goto L_0886D624;
    return;
L_0886D624:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886D6D4;
      }
      goto L_0886D62C;
    }
L_0886D62C:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(12));
    ctx.gpr[6] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0886D644u);
    ctx.gpr[17] = (ctx.gpr[6] + static_cast<std::uint32_t>(-4048));
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 637u, 0x08973FC4u>(ctx, &aot_mem) && ctx.pc == 0x0886D644u) goto L_0886D644;
    return;
L_0886D644:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.gpr[31] = (0x0886D664u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.pc = 0x08B0B724u;
    return;
L_0886D664:
    ctx.gpr[31] = (0x0886D66Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 498u, 0x08AEDD14u>(ctx, &aot_mem) && ctx.pc == 0x0886D66Cu) goto L_0886D66C;
    return;
L_0886D66C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0886D67Cu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 309u, 0x08AF9624u>(ctx, &aot_mem) && ctx.pc == 0x0886D67Cu) goto L_0886D67C;
    return;
L_0886D67C:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[31] = (0x0886D68Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 637u, 0x08973FC4u>(ctx, &aot_mem) && ctx.pc == 0x0886D68Cu) goto L_0886D68C;
    return;
L_0886D68C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(38)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0886D6ACu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_0886D0D8;
L_0886D6AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21008));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_0886D6CC;
      }
      goto L_0886D6C0;
    }
L_0886D6C0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (0x0886D6CCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5696));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 730u, 0x08AA367Cu>(ctx, &aot_mem) && ctx.pc == 0x0886D6CCu) goto L_0886D6CC;
    return;
L_0886D6CC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0886D6D8;
      }
      goto L_0886D6D4;
    }
L_0886D6D4:
    ctx.gpr[2] = (0u | 0u);
    goto L_0886D6D8;
L_0886D6D8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886D6F0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[5]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x0886D70Cu);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(56));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 337u, 0x089D99C0u>(ctx, &aot_mem) && ctx.pc == 0x0886D70Cu) goto L_0886D70C;
    return;
L_0886D70C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (19056u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(96));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.gpr[4] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(48))))));
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 2u));
    ctx.gpr[7] = (ctx.gpr[7] >> 30u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[4] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886D8FC;
      }
      goto L_0886D774;
    }
L_0886D774:
    ctx.gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(26))))));
    ctx.gpr[12] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(28))))));
    ctx.gpr[9] = (34953u << 16u);
    ctx.gpr[2] = (0u | 45696u);
    ctx.gpr[13] = (0u | 45788u);
    ctx.gpr[14] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(30))))));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(-30584));
    ctx.gpr[8] = (1u << 16u);
    ctx.gpr[10] = (1u << 16u);
    goto L_0886D79C;
L_0886D79C:
    ctx.gpr[7] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886D7B4;
      }
      goto L_0886D7AC;
    }
L_0886D7AC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
      if (branch_taken) {
          goto L_0886D8CC;
      }
      goto L_0886D7B4;
    }
L_0886D7B4:
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(0u));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[3] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(96))))));
    ctx.gpr[5] = (ctx.gpr[11] + ctx.gpr[8]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-19832)));
    ctx.gpr[11] = (ctx.gpr[11] + ctx.gpr[10]);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[9];
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(-19836)));
      if (branch_taken) {
          goto L_0886D818;
      }
      goto L_0886D7D4;
    }
L_0886D7D4:
    ctx.gpr[5] = (ctx.gpr[11] - ctx.gpr[5]);
    ctx.gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 1u));
    ctx.gpr[11] = (ctx.gpr[11] >> 31u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[11]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 1u));
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
    ctx.gpr[5] = (ctx.gpr[3] + ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(18))))));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(16))))));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[3] = (ctx.gpr[3] + ctx.gpr[2]);
      if (branch_taken) {
          goto L_0886D844;
      }
      goto L_0886D818;
    }
L_0886D818:
    ctx.gpr[5] = (ctx.gpr[11] << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
    ctx.gpr[5] = (ctx.gpr[3] + ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(22), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(22))))));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(16))))));
    ctx.gpr[3] = (ctx.gpr[3] + ctx.gpr[2]);
    goto L_0886D844;
L_0886D844:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[3] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[11] = (ctx.gpr[7] << 16u);
    ctx.gpr[12] = (ctx.gpr[5] << 16u);
    ctx.gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[11]) >> 16u));
    ctx.gpr[12] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[12]) >> 16u));
    ctx.gpr[7] = (ctx.gpr[11] - ctx.gpr[12]);
    ctx.gpr[7] = (ctx.gpr[7] << 16u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 16u));
    ctx.gpr[7] = (ctx.gpr[7] << 16u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 16u));
    ctx.gpr[7] = (ctx.gpr[7] << 16u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 16u));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    aot_mem.aot_store16(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.gpr[7] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[3] + ctx.gpr[13]);
    ctx.gpr[14] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[3] = (ctx.gpr[3] + ctx.gpr[2]);
    ctx.gpr[15] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[3] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[14] = (ctx.gpr[14] << 16u);
    ctx.gpr[14] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[14]) >> 16u));
    ctx.gpr[15] = (ctx.gpr[15] - ctx.gpr[14]);
    ctx.gpr[15] = (ctx.gpr[15] << 16u);
    ctx.gpr[15] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[15]) >> 16u));
    ctx.gpr[15] = (static_cast<std::int32_t>(ctx.gpr[15]) < 0 ? 1u : 0u);
    ctx.gpr[15] = (ctx.gpr[15] & 255u);
    { const bool branch_taken = ctx.gpr[15] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886D8C8;
      }
      goto L_0886D8BC;
    }
L_0886D8BC:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store16(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    goto L_0886D8C8;
L_0886D8C8:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    goto L_0886D8CC;
L_0886D8CC:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[7] - ctx.gpr[5]);
    ctx.gpr[3] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 2u));
    ctx.gpr[3] = (ctx.gpr[3] >> 30u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[3]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 2u));
    ctx.gpr[7] = (ctx.gpr[4] < ctx.gpr[7] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0886D79C;
      }
      goto L_0886D8F0;
    }
L_0886D8F0:
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(26), static_cast<std::uint16_t>(ctx.gpr[11]));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(28), static_cast<std::uint16_t>(ctx.gpr[12]));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(30), static_cast<std::uint16_t>(ctx.gpr[14]));
    goto L_0886D8FC;
L_0886D8FC:
    ctx.gpr[31] = (0x0886D904u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0886F2EC;
L_0886D904:
    ctx.gpr[31] = (0x0886D90Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 145u, 0x08870F10u>(ctx, &aot_mem) && ctx.pc == 0x0886D90Cu) goto L_0886D90C;
    return;
L_0886D90C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886D91C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x0886D930u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_0886F210;
L_0886D930:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886D93C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) >= 0;
    // nop
      if (branch_taken) {
          goto L_0886D970;
      }
      goto L_0886D94C;
    }
L_0886D94C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(112)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(108)));
    ctx.gpr[7] = (ctx.gpr[7] - ctx.gpr[8]);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 2u));
    ctx.gpr[8] = (ctx.gpr[8] >> 30u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[7] - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    goto L_0886D970;
L_0886D970:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_0886D9DC;
      }
      goto L_0886D97C;
    }
L_0886D97C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(120)));
    ctx.gpr[4] = (ctx.gpr[6] << 5u);
    ctx.gpr[8] = (ctx.gpr[6] << 3u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[8]);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.gpr[8] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[9] - ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] < static_cast<std::uint32_t>(10001) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886D9C4;
      }
      goto L_0886D9AC;
    }
L_0886D9AC:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(2))))));
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_0886D9E4;
      }
      goto L_0886D9BC;
    }
L_0886D9BC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (rt.memory().aot_load_word_right(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[7]));
      if (branch_taken) {
          goto L_0886D9F8;
      }
      goto L_0886D9C4;
    }
L_0886D9C4:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x0886D9D4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4028));
    goto L_0886D0D8;
L_0886D9D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0886DA20;
      }
      goto L_0886D9DC;
    }
L_0886D9DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0886DA20;
      }
      goto L_0886D9E4;
    }
L_0886D9E4:
    ctx.gpr[4] = (ctx.gpr[6] << 5u);
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.gpr[7] = (rt.memory().aot_load_word_right(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[7]));
    goto L_0886D9F8;
L_0886D9F8:
    ctx.gpr[7] = (rt.memory().aot_load_word_left(ctx.gpr[5] + static_cast<std::uint32_t>(3), ctx.gpr[7]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (ctx.gpr[7] & 65535u);
    ctx.gpr[7] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(33), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x0886DA20u);
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(33));
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 5u, 0x08AFC03Cu>(ctx, &aot_mem) && ctx.pc == 0x0886DA20u) goto L_0886DA20;
    return;
L_0886DA20:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886DA2C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_0886DA54;
      }
      goto L_0886DA44;
    }
L_0886DA44:
    if (static_cast<std::int32_t>(ctx.gpr[16]) < 0) {
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(112)));
        goto L_0886DA5C;
    }
    goto L_0886DA4C;
L_0886DA4C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(120)));
      if (branch_taken) {
          goto L_0886DA80;
      }
      goto L_0886DA54;
    }
L_0886DA54:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0886DB58;
      }
      goto L_0886DA5C;
    }
L_0886DA5C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(108)));
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[7]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 2u));
    ctx.gpr[7] = (ctx.gpr[7] >> 30u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 2u));
    ctx.gpr[16] = (ctx.gpr[6] - ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(120)));
    goto L_0886DA80;
L_0886DA80:
    ctx.gpr[6] = (ctx.gpr[16] << 5u);
    ctx.gpr[8] = (ctx.gpr[16] << 3u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[8]);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(16));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (0u | 51200u);
    ctx.gpr[7] = (ctx.gpr[9] - ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[8] < ctx.gpr[7] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886DAF4;
      }
      goto L_0886DAB0;
    }
L_0886DAB0:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0886DAC0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-3980));
    goto L_0886D0D8;
L_0886DAC0:
    ctx.gpr[16] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-20652)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-20652)));
        goto L_0886DADC;
    }
    goto L_0886DAD0;
L_0886DAD0:
    ctx.gpr[31] = (0x0886DAD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 519u, 0x08AFA45Cu>(ctx, &aot_mem) && ctx.pc == 0x0886DAD8u) goto L_0886DAD8;
    return;
L_0886DAD8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-20652)));
    goto L_0886DADC;
L_0886DADC:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(68));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] | 1u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0886DB58;
      }
      goto L_0886DAF4;
    }
L_0886DAF4:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(120)));
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(2))))));
    if (ctx.gpr[7] == ctx.gpr[8]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(120)));
        goto L_0886DB28;
    }
    goto L_0886DB0C;
L_0886DB0C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(120)));
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(2))))));
    ctx.gpr[7] = (ctx.gpr[6] << 5u);
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(120)));
    goto L_0886DB28;
L_0886DB28:
    ctx.gpr[7] = (rt.memory().aot_load_word_right(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[7]));
    ctx.gpr[7] = (rt.memory().aot_load_word_left(ctx.gpr[5] + static_cast<std::uint32_t>(3), ctx.gpr[7]));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[7] = (ctx.gpr[7] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[7] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(33), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x0886DB58u);
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(33));
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 5u, 0x08AFC03Cu>(ctx, &aot_mem) && ctx.pc == 0x0886DB58u) goto L_0886DB58;
    return;
L_0886DB58:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886DB68:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[7] = (ctx.gpr[6] | 0u);
    ctx.gpr[8] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[8];
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_0886DB8C;
      }
      goto L_0886DB84;
    }
L_0886DB84:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0886DB9C;
      }
      goto L_0886DB8C;
    }
L_0886DB8C:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x0886DB9Cu);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    goto L_0886D93C;
L_0886DB9C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886DBA8:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0886DC28;
      }
      goto L_0886DBB4;
    }
L_0886DBB4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(112)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(108)));
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 2u));
    ctx.gpr[7] = (ctx.gpr[7] >> 30u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886DC20;
      }
      goto L_0886DBDC;
    }
L_0886DBDC:
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886DC18;
      }
      goto L_0886DBF0;
    }
L_0886DBF0:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886DC10;
      }
      goto L_0886DBFC;
    }
L_0886DBFC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886DC30;
      }
      goto L_0886DC08;
    }
L_0886DC08:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0886DC34;
      }
      goto L_0886DC10;
    }
L_0886DC10:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0886DC34;
      }
      goto L_0886DC18;
    }
L_0886DC18:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0886DC34;
      }
      goto L_0886DC20;
    }
L_0886DC20:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0886DC34;
      }
      goto L_0886DC28;
    }
L_0886DC28:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0886DC34;
      }
      goto L_0886DC30;
    }
L_0886DC30:
    ctx.gpr[2] = (0u | 1u);
    goto L_0886DC34;
L_0886DC34:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886DC3C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), 0u);
    ctx.gpr[17] = (ctx.gpr[17] - ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), 0u);
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_0886DC9C;
      }
      goto L_0886DC7C;
    }
L_0886DC7C:
    ctx.gpr[31] = (0x0886DC84u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 660u, 0x08AA3170u>(ctx, &aot_mem) && ctx.pc == 0x0886DC84u) goto L_0886DC84;
    return;
L_0886DC84:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886DC9C;
      }
      goto L_0886DC90;
    }
L_0886DC90:
    ctx.gpr[31] = (0x0886DC98u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 362u, 0x08AF9910u>(ctx, &aot_mem) && ctx.pc == 0x0886DC98u) goto L_0886DC98;
    return;
L_0886DC98:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_0886DC9C;
L_0886DC9C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(34), static_cast<std::uint8_t>(0u));
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(34))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(37), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(37))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(33), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x0886DCD8u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(ctx.gpr[5]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 918u, 0x08AFBE70u>(ctx, &aot_mem) && ctx.pc == 0x0886DCD8u) goto L_0886DCD8;
    return;
L_0886DCD8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(40))))));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0886DD04;
      }
      goto L_0886DCE8;
    }
L_0886DCE8:
    ctx.gpr[18] = (ctx.gpr[18] - ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0886DCFCu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 539u, 0x08932C08u>(ctx, &aot_mem) && ctx.pc == 0x0886DCFCu) goto L_0886DCFC;
    return;
L_0886DCFC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[2] + ctx.gpr[18]);
      if (branch_taken) {
          goto L_0886DD04;
      }
      goto L_0886DD04;
    }
L_0886DD04:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    ctx.gpr[31] = (0x0886DD14u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 279u, 0x08AFD284u>(ctx, &aot_mem) && ctx.pc == 0x0886DD14u) goto L_0886DD14;
    return;
L_0886DD14:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(124)));
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0886DE60;
      }
      goto L_0886DD24;
    }
L_0886DD24:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886DE50;
      }
      goto L_0886DD30;
    }
L_0886DD30:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(28)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[7] - ctx.gpr[8]);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0886DD90;
      }
      goto L_0886DD50;
    }
L_0886DD50:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_0886DD80;
      }
      goto L_0886DD60;
    }
L_0886DD60:
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[9];
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0886DD78;
      }
      goto L_0886DD70;
    }
L_0886DD70:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_0886DD84;
      }
      goto L_0886DD78;
    }
L_0886DD78:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0886DD60;
      }
      goto L_0886DD80;
    }
L_0886DD80:
    ctx.gpr[5] = (0u | 1u);
    goto L_0886DD84;
L_0886DD84:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_0886DD94;
      }
      goto L_0886DD8C;
    }
L_0886DD8C:
    ctx.gpr[4] = (0u | 1u);
    goto L_0886DD90;
L_0886DD90:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_0886DD94;
L_0886DD94:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886DE50;
      }
      goto L_0886DD9C;
    }
L_0886DD9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    ctx.gpr[5] = (0u | 40u);
    ctx.gpr[4] = (ctx.gpr[19] - ctx.gpr[4]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[5] >> 30u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[5] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886DE24;
      }
      goto L_0886DDD8;
    }
L_0886DDD8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[6] >> 30u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[16] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_0886DE1C;
      }
      goto L_0886DE08;
    }
L_0886DE08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886DE1C;
      }
      goto L_0886DE14;
    }
L_0886DE14:
    ctx.gpr[31] = (0x0886DE1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 668u, 0x08AA3200u>(ctx, &aot_mem) && ctx.pc == 0x0886DE1Cu) goto L_0886DE1C;
    return;
L_0886DE1C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_0886DED8;
      }
      goto L_0886DE24;
    }
L_0886DE24:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(29), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_0886DE48;
      }
      goto L_0886DE34;
    }
L_0886DE34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886DE48;
      }
      goto L_0886DE40;
    }
L_0886DE40:
    ctx.gpr[31] = (0x0886DE48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 668u, 0x08AA3200u>(ctx, &aot_mem) && ctx.pc == 0x0886DE48u) goto L_0886DE48;
    return;
L_0886DE48:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_0886DED8;
      }
      goto L_0886DE50;
    }
L_0886DE50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(124)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(40));
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0886DD24;
      }
      goto L_0886DE60;
    }
L_0886DE60:
    ctx.gpr[31] = (0x0886DE68u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0886DEF4;
L_0886DE68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[5] >> 30u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(28));
    ctx.gpr[31] = (0x0886DEB0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 206u, 0x08AFCD7Cu>(ctx, &aot_mem) && ctx.pc == 0x0886DEB0u) goto L_0886DEB0;
    return;
L_0886DEB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(30), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_0886DED4;
      }
      goto L_0886DEC0;
    }
L_0886DEC0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886DED4;
      }
      goto L_0886DECC;
    }
L_0886DECC:
    ctx.gpr[31] = (0x0886DED4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 668u, 0x08AA3200u>(ctx, &aot_mem) && ctx.pc == 0x0886DED4u) goto L_0886DED4;
    return;
L_0886DED4:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    goto L_0886DED8;
L_0886DED8:
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
L_0886DEF4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(124)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0886DF70;
      }
      goto L_0886DF18;
    }
L_0886DF18:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886DF64;
      }
      goto L_0886DF24;
    }
L_0886DF24:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[5] ^ ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886DF64;
      }
      goto L_0886DF40;
    }
L_0886DF40:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (ctx.gpr[5] ^ ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886DF64;
      }
      goto L_0886DF5C;
    }
L_0886DF5C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0886DF70;
      }
      goto L_0886DF64;
    }
L_0886DF64:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(40));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0886DF18;
      }
      goto L_0886DF70;
    }
L_0886DF70:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[4];
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0886E00C;
      }
      goto L_0886DF78;
    }
L_0886DF78:
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), 0u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(120));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), 0u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x0886DFB4u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 140u, 0x08AFC93Cu>(ctx, &aot_mem) && ctx.pc == 0x0886DFB4u) goto L_0886DFB4;
    return;
L_0886DFB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(59), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_0886DFD4;
      }
      goto L_0886DFC4;
    }
L_0886DFC4:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
        goto L_0886DFD8;
    }
    goto L_0886DFCC;
L_0886DFCC:
    ctx.gpr[31] = (0x0886DFD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 668u, 0x08AA3200u>(ctx, &aot_mem) && ctx.pc == 0x0886DFD4u) goto L_0886DFD4;
    return;
L_0886DFD4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_0886DFD8;
L_0886DFD8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_0886DFF0;
      }
      goto L_0886DFE0;
    }
L_0886DFE0:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
        goto L_0886DFF4;
    }
    goto L_0886DFE8;
L_0886DFE8:
    ctx.gpr[31] = (0x0886DFF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 668u, 0x08AA3200u>(ctx, &aot_mem) && ctx.pc == 0x0886DFF0u) goto L_0886DFF0;
    return;
L_0886DFF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    goto L_0886DFF4;
L_0886DFF4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_0886E00C;
      }
      goto L_0886DFFC;
    }
L_0886DFFC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886E00C;
      }
      goto L_0886E004;
    }
L_0886E004:
    ctx.gpr[31] = (0x0886E00Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 668u, 0x08AA3200u>(ctx, &aot_mem) && ctx.pc == 0x0886E00Cu) goto L_0886E00C;
    return;
L_0886E00C:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x0886E01Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0886F650;
L_0886E01C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    ctx.gpr[5] = (0u | 40u);
    ctx.gpr[4] = (ctx.gpr[17] - ctx.gpr[4]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[5] >> 30u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[2] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886E068:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(120)));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) >= 0;
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_0886E0BC;
      }
      goto L_0886E098;
    }
L_0886E098:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[7]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 2u));
    ctx.gpr[7] = (ctx.gpr[7] >> 30u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 2u));
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    goto L_0886E0BC;
L_0886E0BC:
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[17] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(28));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x0886E0E4u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 403u, 0x08AFDBDCu>(ctx, &aot_mem) && ctx.pc == 0x0886E0E4u) goto L_0886E0E4;
    return;
L_0886E0E4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(44))))));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(40))))));
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x0886E108u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 404u, 0x08AFDBF0u>(ctx, &aot_mem) && ctx.pc == 0x0886E108u) goto L_0886E108;
    return;
L_0886E108:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(28));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[7];
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_0886E130;
      }
      goto L_0886E124;
    }
L_0886E124:
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0886E148;
      }
      goto L_0886E130;
    }
L_0886E130:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[31] = (0x0886E148u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 173u, 0x08AFCB48u>(ctx, &aot_mem) && ctx.pc == 0x0886E148u) goto L_0886E148;
    return;
L_0886E148:
    ctx.gpr[31] = (0x0886E150u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0886F650;
L_0886E150:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886E16C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) >= 0;
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_0886E1B8;
      }
      goto L_0886E194;
    }
L_0886E194:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[5] >> 30u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[17] = (ctx.gpr[4] - ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    goto L_0886E1B8;
L_0886E1B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    ctx.gpr[5] = (ctx.gpr[17] << 5u);
    ctx.gpr[6] = (ctx.gpr[17] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[18] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(28));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x0886E1E4u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 411u, 0x08AFDC50u>(ctx, &aot_mem) && ctx.pc == 0x0886E1E4u) goto L_0886E1E4;
    return;
L_0886E1E4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_0886E1F8;
      }
      goto L_0886E1F0;
    }
L_0886E1F0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0886E230;
      }
      goto L_0886E1F8;
    }
L_0886E1F8:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_0886E230;
      }
      goto L_0886E208;
    }
L_0886E208:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_0886E20C;
L_0886E20C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    if (ctx.gpr[6] == ctx.gpr[7]) {
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
        goto L_0886E228;
    }
    goto L_0886E218;
L_0886E218:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    goto L_0886E228;
L_0886E228:
    if (ctx.gpr[4] != ctx.gpr[19]) {
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
        goto L_0886E20C;
    }
    goto L_0886E230;
L_0886E230:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    ctx.gpr[6] = (ctx.gpr[17] << 5u);
    ctx.gpr[7] = (ctx.gpr[17] << 3u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(28));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_0886E274;
      }
      goto L_0886E258;
    }
L_0886E258:
    ctx.gpr[19] = (ctx.gpr[4] - ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0886E26Cu);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 539u, 0x08932C08u>(ctx, &aot_mem) && ctx.pc == 0x0886E26Cu) goto L_0886E26C;
    return;
L_0886E26C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[2] + ctx.gpr[19]);
      if (branch_taken) {
          goto L_0886E274;
      }
      goto L_0886E274;
    }
L_0886E274:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[31] = (0x0886E284u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0886F650;
L_0886E284:
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
L_0886E2A0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x0886E2B0u);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    goto L_0886E2BC;
L_0886E2B0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886E2BC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[6];
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_0886E34C;
      }
      goto L_0886E2DC;
    }
L_0886E2DC:
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0886E34C;
      }
      goto L_0886E2E8;
    }
L_0886E2E8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_0886E354;
      }
      goto L_0886E2F0;
    }
L_0886E2F0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(112)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(108)));
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[7]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 2u));
    ctx.gpr[7] = (ctx.gpr[7] >> 30u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 2u));
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(120)));
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(28));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x0886E33Cu);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 287u, 0x08AFD32Cu>(ctx, &aot_mem) && ctx.pc == 0x0886E33Cu) goto L_0886E33C;
    return;
L_0886E33C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[2] = (ctx.gpr[2] ^ ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u < ctx.gpr[2] ? 1u : 0u);
      if (branch_taken) {
          goto L_0886E358;
      }
      goto L_0886E34C;
    }
L_0886E34C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0886E358;
      }
      goto L_0886E354;
    }
L_0886E354:
    ctx.gpr[2] = (0u | 0u);
    goto L_0886E358;
L_0886E358:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886E368:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-176));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[30]);
    ctx.gpr[30] = (ctx.gpr[5] | 0u);
    ctx.gpr[19] = (ctx.gpr[7] | 0u);
    ctx.gpr[23] = (ctx.gpr[6] | 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[31]);
    ctx.gpr[31] = (0x0886E3B0u);
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(12));
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 637u, 0x08973FC4u>(ctx, &aot_mem) && ctx.pc == 0x0886E3B0u) goto L_0886E3B0;
    return;
L_0886E3B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[23] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (0u | 0u);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[8];
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_0886E3FC;
      }
      goto L_0886E3D8;
    }
L_0886E3D8:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[23] + static_cast<std::uint32_t>(2)));
    ctx.gpr[8] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(2)));
    if (ctx.gpr[7] != ctx.gpr[8]) {
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
        goto L_0886E400;
    }
    goto L_0886E3E8;
L_0886E3E8:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[6];
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_0886E400;
      }
      goto L_0886E3F8;
    }
L_0886E3F8:
    ctx.gpr[5] = (0u | 1u);
    goto L_0886E3FC;
L_0886E3FC:
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    goto L_0886E400;
L_0886E400:
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
        goto L_0886E420;
    }
    goto L_0886E408;
L_0886E408:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[23] + static_cast<std::uint32_t>(6)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(26)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_0886E420;
      }
      goto L_0886E418;
    }
L_0886E418:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_0886E420;
L_0886E420:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886E464;
      }
      goto L_0886E428;
    }
L_0886E428:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(112)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(108)));
    ctx.gpr[22] = (ctx.gpr[30] | 0u);
    ctx.gpr[6] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 2u));
    ctx.gpr[8] = (ctx.gpr[8] >> 30u);
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(52)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[22] << 2u);
    ctx.gpr[9] = (ctx.gpr[7] < ctx.gpr[22] ? 1u : 0u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 2u));
    { const bool branch_taken = ctx.gpr[9] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[8]);
      if (branch_taken) {
          goto L_0886E46C;
      }
      goto L_0886E45C;
    }
L_0886E45C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0886E470;
      }
      goto L_0886E464;
    }
L_0886E464:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0886E6E8;
      }
      goto L_0886E46C;
    }
L_0886E46C:
    ctx.gpr[22] = (ctx.gpr[7] | 0u);
    goto L_0886E470;
L_0886E470:
    ctx.gpr[7] = (ctx.gpr[22] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886E5AC;
      }
      goto L_0886E47C;
    }
L_0886E47C:
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[22] - ctx.gpr[6]);
    ctx.gpr[16] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[19]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_0886E56C;
      }
      goto L_0886E494;
    }
L_0886E494:
    ctx.gpr[21] = (ctx.gpr[18] + static_cast<std::uint32_t>(120));
    ctx.gpr[20] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(44));
    goto L_0886E4A0;
L_0886E4A0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(120)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(44), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(46), static_cast<std::uint16_t>(ctx.gpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), 0u);
    ctx.gpr[4] = (ctx.gpr[6] << 5u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), 0u);
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), 0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), 0u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x0886E4ECu);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 140u, 0x08AFC93Cu>(ctx, &aot_mem) && ctx.pc == 0x0886E4ECu) goto L_0886E4EC;
    return;
L_0886E4EC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(106), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_0886E508;
      }
      goto L_0886E4F8;
    }
L_0886E4F8:
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
        goto L_0886E50C;
    }
    goto L_0886E500;
L_0886E500:
    ctx.gpr[31] = (0x0886E508u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 668u, 0x08AA3200u>(ctx, &aot_mem) && ctx.pc == 0x0886E508u) goto L_0886E508;
    return;
L_0886E508:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    goto L_0886E50C;
L_0886E50C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(107), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_0886E524;
      }
      goto L_0886E514;
    }
L_0886E514:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
        goto L_0886E528;
    }
    goto L_0886E51C;
L_0886E51C:
    ctx.gpr[31] = (0x0886E524u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 668u, 0x08AA3200u>(ctx, &aot_mem) && ctx.pc == 0x0886E524u) goto L_0886E524;
    return;
L_0886E524:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    goto L_0886E528;
L_0886E528:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(108), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_0886E540;
      }
      goto L_0886E530;
    }
L_0886E530:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(112)));
        goto L_0886E544;
    }
    goto L_0886E538;
L_0886E538:
    ctx.gpr[31] = (0x0886E540u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 668u, 0x08AA3200u>(ctx, &aot_mem) && ctx.pc == 0x0886E540u) goto L_0886E540;
    return;
L_0886E540:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(112)));
    goto L_0886E544;
L_0886E544:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(108)));
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 2u));
    ctx.gpr[8] = (ctx.gpr[8] >> 30u);
    ctx.gpr[16] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[8]);
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 2u));
      if (branch_taken) {
          goto L_0886E4A0;
      }
      goto L_0886E56C;
    }
L_0886E56C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), 0u);
    ctx.gpr[7] = (ctx.gpr[22] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
      if (branch_taken) {
          goto L_0886E594;
      }
      goto L_0886E57C;
    }
L_0886E57C:
    ctx.gpr[4] = (ctx.gpr[22] << 2u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(116), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(117), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(112), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0886E5AC;
      }
      goto L_0886E594;
    }
L_0886E594:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (ctx.gpr[22] - ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(108));
    ctx.gpr[31] = (0x0886E5A8u);
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 230u, 0x08AFCF5Cu>(ctx, &aot_mem) && ctx.pc == 0x0886E5A8u) goto L_0886E5A8;
    return;
L_0886E5A8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(108)));
    goto L_0886E5AC;
L_0886E5AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886E5D4;
      }
      goto L_0886E5C0;
    }
L_0886E5C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (0u | 45792u);
      if (branch_taken) {
          goto L_0886E5DC;
      }
      goto L_0886E5CC;
    }
L_0886E5CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0886E608;
      }
      goto L_0886E5D4;
    }
L_0886E5D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0886E6E8;
      }
      goto L_0886E5DC;
    }
L_0886E5DC:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0886E5E8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0886E5E8u) goto L_0886E5E8;
    return;
L_0886E5E8:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
      if (branch_taken) {
          goto L_0886E630;
      }
      goto L_0886E5F8;
    }
L_0886E5F8:
    ctx.gpr[31] = (0x0886E600u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    goto L_0886F720;
L_0886E600:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
      if (branch_taken) {
          goto L_0886E634;
      }
      goto L_0886E608;
    }
L_0886E608:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0886E614u);
    ctx.gpr[16] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x0886E614u) goto L_0886E614;
    return;
L_0886E614:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_0886E630;
      }
      goto L_0886E620;
    }
L_0886E620:
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x0886E62Cu);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    goto L_0886F720;
L_0886E62C:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_0886E630;
L_0886E630:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    goto L_0886E634;
L_0886E634:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(108)));
    ctx.gpr[6] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(104)));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(88));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(104), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0886E664u);
    ctx.gpr[17] = (ctx.gpr[6] + static_cast<std::uint32_t>(-3896));
    ctx.pc = 0x08B0B724u;
    return;
L_0886E664:
    ctx.gpr[31] = (0x0886E66Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 498u, 0x08AEDD14u>(ctx, &aot_mem) && ctx.pc == 0x0886E66Cu) goto L_0886E66C;
    return;
L_0886E66C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0886E67Cu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 309u, 0x08AF9624u>(ctx, &aot_mem) && ctx.pc == 0x0886E67Cu) goto L_0886E67C;
    return;
L_0886E67C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0886E68Cu);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    goto L_0886D0D8;
L_0886E68C:
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-21008));
    { const bool branch_taken = ctx.gpr[23] == ctx.gpr[4];
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_0886E6AC;
      }
      goto L_0886E6A0;
    }
L_0886E6A0:
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x0886E6ACu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5696));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 730u, 0x08AA367Cu>(ctx, &aot_mem) && ctx.pc == 0x0886E6ACu) goto L_0886E6AC;
    return;
L_0886E6AC:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x0886E6BCu);
    ctx.gpr[6] = (ctx.gpr[30] | 0u);
    goto L_0886E068;
L_0886E6BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(120)));
    ctx.gpr[5] = (ctx.gpr[30] << 5u);
    ctx.gpr[7] = (ctx.gpr[30] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x0886E6E8u);
    ctx.gpr[6] = (ctx.gpr[30] | 0u);
    goto L_0886E068;
L_0886E6E8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886E718:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-1712));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1664), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1672), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1660), ctx.gpr[5]);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(228));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(236), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1668), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1676), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1680), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1684), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1688), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1692), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1696), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1700), ctx.gpr[31]);
    ctx.gpr[31] = (0x0886E764u);
    ctx.gpr[6] = (0u | 1404u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 376u, 0x08AED4ECu>(ctx, &aot_mem) && ctx.pc == 0x0886E764u) goto L_0886E764;
    return;
L_0886E764:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0886E770u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_0886F2C4;
L_0886E770:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(112)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(238));
    ctx.gpr[5] = (ctx.gpr[5] >> 30u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1656), ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[23] = (ctx.gpr[18] + static_cast<std::uint32_t>(12));
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
        goto L_0886E7AC;
    }
    goto L_0886E7AC;
L_0886E7AC:
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(104)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(204));
    ctx.gpr[7] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(-7063)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (18766u << 16u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(17999));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint16_t>(ctx.gpr[5]));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(26), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[7] = (2224u << 16u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.gpr[5] = (0u | 16u);
    ctx.gpr[6] = (0u | 12u);
    ctx.gpr[31] = (0x0886E804u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-12980));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 341u, 0x08AF5A1Cu>(ctx, &aot_mem) && ctx.pc == 0x0886E804u) goto L_0886E804;
    return;
L_0886E804:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (0u | 102u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1656)));
    goto L_0886E810;
L_0886E810:
    ctx.gpr[7] = (ctx.gpr[29] + ctx.gpr[5]);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(16))))));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(17))))));
    ctx.gpr[9] = (ctx.gpr[6] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0886E810;
      }
      goto L_0886E834;
    }
L_0886E834:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(112)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(108)));
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[6] >> 30u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[20] < ctx.gpr[5] ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1656)));
        goto L_0886E990;
    }
    goto L_0886E860;
L_0886E860:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1656)));
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(1640));
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(1632));
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(1648));
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(14));
    ctx.gpr[17] = (0u | 0u);
    goto L_0886E878;
L_0886E878:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0886E8F4;
      }
      goto L_0886E884;
    }
L_0886E884:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x0886E890u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 637u, 0x08973FC4u>(ctx, &aot_mem) && ctx.pc == 0x0886E890u) goto L_0886E890;
    return;
L_0886E890:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1640)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1644)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1632), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1636), ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[22] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[22] + static_cast<std::uint32_t>(2))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[22] + static_cast<std::uint32_t>(4))))));
    aot_mem.aot_store16(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store16(ctx.gpr[19] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[5]));
    aot_mem.aot_store16(ctx.gpr[19] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x0886E8C4u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 637u, 0x08973FC4u>(ctx, &aot_mem) && ctx.pc == 0x0886E8C4u) goto L_0886E8C4;
    return;
L_0886E8C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1652)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1648)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1636), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1632), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(1638)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(13), static_cast<std::uint8_t>(ctx.gpr[1]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    rt.memory().aot_store_word_right(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    rt.memory().aot_store_word_left(ctx.gpr[16] + static_cast<std::uint32_t>(23), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(108)));
    goto L_0886E8F4;
L_0886E8F4:
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(112)));
        goto L_0886E960;
    }
    goto L_0886E904;
L_0886E904:
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(2));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(2))))));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4))))));
    aot_mem.aot_store16(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    aot_mem.aot_store16(ctx.gpr[19] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[6]));
    aot_mem.aot_store16(ctx.gpr[19] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(6)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(13), static_cast<std::uint8_t>(ctx.gpr[1]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store_word_right(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    rt.memory().aot_store_word_left(ctx.gpr[16] + static_cast<std::uint32_t>(23), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(112)));
    goto L_0886E960;
L_0886E960:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[6] >> 30u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(12));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(12));
    ctx.gpr[5] = (ctx.gpr[20] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0886E878;
      }
      goto L_0886E98C;
    }
L_0886E98C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1656)));
    goto L_0886E990;
L_0886E990:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    ctx.gpr[7] = (rt.memory().aot_load_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[7]));
    ctx.gpr[7] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(3), ctx.gpr[7]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(232));
    ctx.gpr[7] = (ctx.gpr[7] & 65535u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), ctx.gpr[6]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1660)));
    ctx.gpr[31] = (0x0886E9B8u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 35u, 0x089741A0u>(ctx, &aot_mem) && ctx.pc == 0x0886E9B8u) goto L_0886E9B8;
    return;
L_0886E9B8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1664)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1668)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1672)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1676)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1680)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1684)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1688)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1692)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1696)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1700)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(1712));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886E9E8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x0886EA10u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-3868));
    goto L_0886D0D8;
L_0886EA10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(108)));
    ctx.gpr[18] = (ctx.gpr[16] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886EA60;
      }
      goto L_0886EA28;
    }
L_0886EA28:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0886EA34u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_0886F004;
L_0886EA34:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[18]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0886EA78;
      }
      goto L_0886EA48;
    }
L_0886EA48:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0886EA54u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0886EA54u) goto L_0886EA54;
    return;
L_0886EA54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(108)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[4] + ctx.gpr[18]);
      if (branch_taken) {
          goto L_0886EA88;
      }
      goto L_0886EA60;
    }
L_0886EA60:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0886EA70u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-3836));
    goto L_0886D0D8;
L_0886EA70:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0886EAB8;
      }
      goto L_0886EA78;
    }
L_0886EA78:
    ctx.gpr[31] = (0x0886EA80u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 656u, 0x08AA3128u>(ctx, &aot_mem) && ctx.pc == 0x0886EA80u) goto L_0886EA80;
    return;
L_0886EA80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(108)));
    ctx.gpr[18] = (ctx.gpr[4] + ctx.gpr[18]);
    goto L_0886EA88;
L_0886EA88:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x0886EA9Cu);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    goto L_0886E16C;
L_0886EA9C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0886EAACu);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    goto L_0886E16C;
L_0886EAAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(104)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(104), ctx.gpr[4]);
    goto L_0886EAB8;
L_0886EAB8:
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
L_0886EAD0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    ctx.gpr[8] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(108)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[8] << 2u);
    ctx.gpr[9] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(14)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_0886ECE0;
      }
      goto L_0886EB0C;
    }
L_0886EB0C:
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(1)));
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886ECE0;
      }
      goto L_0886EB18;
    }
L_0886EB18:
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886EB30;
      }
      goto L_0886EB20;
    }
L_0886EB20:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(592)));
    ctx.gpr[8] = (ctx.gpr[6] & 255u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 8u));
      if (branch_taken) {
          goto L_0886EB3C;
      }
      goto L_0886EB30;
    }
L_0886EB30:
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    ctx.gpr[8] = (ctx.gpr[6] & 255u);
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 8u));
    goto L_0886EB3C;
L_0886EB3C:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(ctx.gpr[8]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[18]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(16));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(8)));
    ctx.gpr[9] = (ctx.gpr[9] ^ 46u);
    ctx.gpr[9] = (ctx.gpr[9] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[9] = (ctx.gpr[9] & 255u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886EBA0;
      }
      goto L_0886EB6C;
    }
L_0886EB6C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(8)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(100));
      if (branch_taken) {
          goto L_0886EBC8;
      }
      goto L_0886EB98;
    }
L_0886EB98:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0886EBD4;
      }
      goto L_0886EBA0;
    }
L_0886EBA0:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x0886EBB0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-3784));
    goto L_0886D0D8;
L_0886EBB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_0886EDC0;
      }
      goto L_0886EBC8;
    }
L_0886EBC8:
    ctx.gpr[9] = (0u | 47u);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    goto L_0886EBD4;
L_0886EBD4:
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(-1));
    ctx.gpr[10] = (ctx.gpr[9] + ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[10]);
    ctx.gpr[9] = (ctx.gpr[9] << 2u);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[9] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(12));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(4), ctx.gpr[11]);
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (ctx.gpr[9] + ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[10]);
    ctx.gpr[9] = (ctx.gpr[9] << 2u);
    ctx.gpr[9] = (ctx.gpr[8] + ctx.gpr[9]);
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(0u));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (ctx.gpr[9] + ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[10]);
    ctx.gpr[9] = (ctx.gpr[9] << 2u);
    ctx.gpr[9] = (ctx.gpr[8] + ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (ctx.gpr[9] + ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[10]);
    ctx.gpr[9] = (ctx.gpr[9] << 2u);
    ctx.gpr[9] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(20));
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[9]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[8] + ctx.gpr[4]);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[4] ^ 46u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[18]);
      if (branch_taken) {
          goto L_0886EC94;
      }
      goto L_0886EC8C;
    }
L_0886EC8C:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(33), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0886EC94;
L_0886EC94:
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0886ECE0;
      }
      goto L_0886EC9C;
    }
L_0886EC9C:
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(592));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(592));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] & 4095u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    goto L_0886ECE0;
L_0886ECE0:
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(2));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(12));
    ctx.gpr[31] = (0x0886ECF4u);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 35u, 0x089741A0u>(ctx, &aot_mem) && ctx.pc == 0x0886ECF4u) goto L_0886ECF4;
    return;
L_0886ECF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.gpr[6] = (1u << 16u);
    ctx.gpr[5] = (60u << 16u);
    ctx.gpr[6] = (ctx.gpr[16] + ctx.gpr[6]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(2400)));
    ctx.gpr[6] = (1u << 16u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[16] + ctx.gpr[6]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(2392)));
    ctx.gpr[10] = (1u << 16u);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(42));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(2392), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (ctx.gpr[16] + ctx.gpr[10]);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(2384)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[10]);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(42));
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(2384), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[7]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(100));
    ctx.gpr[4] = (ctx.lo);
    // nop
    // nop
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[7]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[5]);
      if (branch_taken) {
          goto L_0886EDAC;
      }
      goto L_0886ED98;
    }
L_0886ED98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(2392)));
    ctx.gpr[5] = (1u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(2396), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(2392), 0u);
    goto L_0886EDAC;
L_0886EDAC:
    ctx.gpr[4] = (1u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2400));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    goto L_0886EDC0;
L_0886EDC0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886EDD8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[8] = (ctx.gpr[6] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[7] - ctx.gpr[8]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[5]);
    ctx.gpr[7] = (ctx.gpr[6] < ctx.gpr[4] ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_0886EE5C;
      }
      goto L_0886EE0C;
    }
L_0886EE0C:
    ctx.gpr[9] = (ctx.gpr[4] | 0u);
    ctx.gpr[8] = (rt.memory().aot_load_word_right(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[8]));
    ctx.gpr[8] = (rt.memory().aot_load_word_left(ctx.gpr[9] + static_cast<std::uint32_t>(3), ctx.gpr[8]));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    ctx.gpr[7] = (ctx.gpr[5] + ctx.gpr[8]);
    ctx.gpr[7] = (ctx.gpr[6] < ctx.gpr[7] ? 1u : 0u);
    goto L_0886EE28;
L_0886EE28:
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886EE5C;
      }
      goto L_0886EE30;
    }
L_0886EE30:
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886EE5C;
      }
      goto L_0886EE38;
    }
L_0886EE38:
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[8]);
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[8]);
    ctx.gpr[8] = (rt.memory().aot_load_word_right(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[8]));
    ctx.gpr[8] = (rt.memory().aot_load_word_left(ctx.gpr[9] + static_cast<std::uint32_t>(3), ctx.gpr[8]));
    ctx.gpr[7] = (ctx.gpr[17] + ctx.gpr[5]);
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[6] < ctx.gpr[7] ? 1u : 0u);
      if (branch_taken) {
          goto L_0886EE28;
      }
      goto L_0886EE5C;
    }
L_0886EE5C:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x0886EE74u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x0886EE74u) goto L_0886EE74;
    return;
L_0886EE74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886EE98:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[21]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[21] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[22]);
    ctx.gpr[22] = (ctx.gpr[9] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[8]);
    ctx.gpr[4] = (ctx.gpr[21] < ctx.gpr[7] ? 1u : 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[16] = (ctx.gpr[7] | 0u);
    ctx.gpr[20] = (2230u << 16u);
    ctx.gpr[19] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[31]);
    goto L_0886EEE0;
L_0886EEE0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886EFDC;
      }
      goto L_0886EEE8;
    }
L_0886EEE8:
    ctx.gpr[4] = (rt.memory().aot_load_word_right(ctx.gpr[21] + static_cast<std::uint32_t>(0), ctx.gpr[4]));
    ctx.gpr[4] = (rt.memory().aot_load_word_left(ctx.gpr[21] + static_cast<std::uint32_t>(3), ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886EFDC;
      }
      goto L_0886EEFC;
    }
L_0886EEFC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(2)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(-7064)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0886EF40;
      }
      goto L_0886EF0C;
    }
L_0886EF0C:
    ctx.gpr[6] = (rt.memory().aot_load_word_right(ctx.gpr[21] + static_cast<std::uint32_t>(3), ctx.gpr[6]));
    ctx.gpr[6] = (rt.memory().aot_load_word_left(ctx.gpr[21] + static_cast<std::uint32_t>(6), ctx.gpr[6]));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(80))))));
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0886EF28u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 43u, 0x088703F0u>(ctx, &aot_mem) && ctx.pc == 0x0886EF28u) goto L_0886EF28;
    return;
L_0886EF28:
    ctx.gpr[4] = (rt.memory().aot_load_word_right(ctx.gpr[21] + static_cast<std::uint32_t>(0), ctx.gpr[4]));
    ctx.gpr[4] = (rt.memory().aot_load_word_left(ctx.gpr[21] + static_cast<std::uint32_t>(3), ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[21] = (ctx.gpr[21] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[21] < ctx.gpr[16] ? 1u : 0u);
      if (branch_taken) {
          goto L_0886EEE0;
      }
      goto L_0886EF40;
    }
L_0886EF40:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886EF28;
      }
      goto L_0886EF4C;
    }
L_0886EF4C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(80))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (ctx.gpr[22] & 255u);
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(32))))));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    jump_target = ctx.gpr[9];
    ctx.gpr[31] = (0x0886EF80u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0886EF80u) goto L_0886EF80;
    return;
L_0886EF80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-20652)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-20652)));
        goto L_0886EF98;
    }
    goto L_0886EF8C;
L_0886EF8C:
    ctx.gpr[31] = (0x0886EF94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 519u, 0x08AFA45Cu>(ctx, &aot_mem) && ctx.pc == 0x0886EF94u) goto L_0886EF94;
    return;
L_0886EF94:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-20652)));
    goto L_0886EF98;
L_0886EF98:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0886EFB8;
      }
      goto L_0886EFA8;
    }
L_0886EFA8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-20652)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_0886EFC0;
      }
      goto L_0886EFB8;
    }
L_0886EFB8:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_0886EFC0;
L_0886EFC0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886EF28;
      }
      goto L_0886EFC8;
    }
L_0886EFC8:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x0886EFD4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-3736));
    goto L_0886D0D8;
L_0886EFD4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0886EFDC;
      }
      goto L_0886EFDC;
    }
L_0886EFDC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886F004:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(108)));
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(16));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (ctx.gpr[9] + ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[10]);
    ctx.gpr[9] = (ctx.gpr[9] << 2u);
    ctx.gpr[9] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(12));
    ctx.gpr[10] = (ctx.gpr[8] + static_cast<std::uint32_t>(576));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[9]);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(12));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[10]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(16));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[9] = (ctx.gpr[8] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[8] = (ctx.gpr[8] << 2u);
    ctx.gpr[8] = (ctx.gpr[6] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(12));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[9] = (ctx.gpr[6] + static_cast<std::uint32_t>(576));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(12));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[8]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[9]);
    ctx.gpr[8] = (ctx.gpr[10] ^ ctx.gpr[11]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[8] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    ctx.gpr[6] = (ctx.gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[9]);
      if (branch_taken) {
          goto L_0886F15C;
      }
      goto L_0886F0E8;
    }
L_0886F0E8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886F108;
      }
      goto L_0886F0F8;
    }
L_0886F0F8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    goto L_0886F108;
L_0886F108:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_0886F124;
      }
      goto L_0886F11C;
    }
L_0886F11C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    goto L_0886F124;
L_0886F124:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[5] ^ ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[8]);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[9]);
      if (branch_taken) {
          goto L_0886F0E8;
      }
      goto L_0886F158;
    }
L_0886F158:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(108)));
    goto L_0886F15C;
L_0886F15C:
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), 0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(140)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(132)));
    ctx.gpr[8] = (ctx.gpr[7] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (0u | 47u);
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    goto L_0886F188;
L_0886F188:
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0886F208;
      }
      goto L_0886F190;
    }
L_0886F190:
    ctx.gpr[8] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[9] = (ctx.gpr[8] < static_cast<std::uint32_t>(48) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[9] = (0u + static_cast<std::uint32_t>(1412));
      if (branch_taken) {
          goto L_0886F1B8;
      }
      goto L_0886F1A0;
    }
L_0886F1A0:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[9])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[8] = (ctx.lo);
    ctx.gpr[8] = (ctx.gpr[4] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(144));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0886F1D4;
      }
      goto L_0886F1B8;
    }
L_0886F1B8:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-48));
    ctx.gpr[9] = (0u + static_cast<std::uint32_t>(1412));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[9])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[8] = (ctx.lo);
    ctx.gpr[8] = (ctx.gpr[4] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(144));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    goto L_0886F1D4;
L_0886F1D4:
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886F208;
      }
      goto L_0886F1DC;
    }
L_0886F1DC:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(140), ctx.gpr[7]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(136)));
    ctx.gpr[8] = (ctx.gpr[7] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
      if (branch_taken) {
          goto L_0886F1F8;
      }
      goto L_0886F1F0;
    }
L_0886F1F0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(136), ctx.gpr[5]);
      if (branch_taken) {
          goto L_0886F200;
      }
      goto L_0886F1F8;
    }
L_0886F1F8:
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(136), ctx.gpr[9]);
    goto L_0886F200;
L_0886F200:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0886F188;
      }
      goto L_0886F208;
    }
L_0886F208:
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886F210:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[6] >> 30u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[19] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_0886F2A8;
      }
      goto L_0886F258;
    }
L_0886F258:
    ctx.gpr[18] = (0u | 0u);
    goto L_0886F25C;
L_0886F25C:
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
        goto L_0886F284;
    }
    goto L_0886F26C;
L_0886F26C:
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0886F27Cu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    goto L_0886E9E8;
L_0886F27C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    goto L_0886F284;
L_0886F284:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[6] >> 30u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[19] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0886F25C;
      }
      goto L_0886F2A8;
    }
L_0886F2A8:
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
L_0886F2C4:
    ctx.gpr[6] = (0u | 6u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(96));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store16(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(0u));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886F2EC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-1536));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    ctx.gpr[7] = (1u << 16u);
    ctx.gpr[6] = (60u << 16u);
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[7]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[6]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(2412)));
    ctx.gpr[8] = (1u << 16u);
    ctx.gpr[8] = (ctx.gpr[4] + ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(2388), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1464), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1508), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1480), ctx.gpr[7]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[7]);
    ctx.gpr[4] = (ctx.lo);
    // nop
    // nop
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[7]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[6]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1472), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1512), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1516), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1520), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1524), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1528), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1532), ctx.gpr[31]);
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1488), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1496), ctx.gpr[5]);
      if (branch_taken) {
          goto L_0886F3A0;
      }
      goto L_0886F384;
    }
L_0886F384:
    ctx.gpr[4] = (1u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2404)));
    ctx.gpr[6] = (1u << 16u);
    ctx.gpr[6] = (ctx.gpr[16] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(2408), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(2404), 0u);
    goto L_0886F3A0;
L_0886F3A0:
    ctx.gpr[4] = (1u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(100));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2412));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[6] = (0u | 255u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1500), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1501), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1502), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1503), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1504), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1505), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(49), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(50), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(51), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(53), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1500)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(1504))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(52), static_cast<std::uint16_t>(ctx.gpr[5]));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(54), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), 0u);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(68), static_cast<std::uint16_t>(0u));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[20] = (ctx.gpr[16] + static_cast<std::uint32_t>(12));
    ctx.gpr[21] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    goto L_0886F420;
L_0886F420:
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (0u | 1400u);
    ctx.gpr[31] = (0x0886F430u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 638u, 0x08973FECu>(ctx, &aot_mem) && ctx.pc == 0x0886F430u) goto L_0886F430;
    return;
L_0886F430:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[2]);
      if (branch_taken) {
          goto L_0886F4B0;
      }
      goto L_0886F438;
    }
L_0886F438:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[5]);
    ctx.gpr[31] = (0x0886F44Cu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 98u, 0x08870AF0u>(ctx, &aot_mem) && ctx.pc == 0x0886F44Cu) goto L_0886F44C;
    return;
L_0886F44C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-20652)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-20652)));
        goto L_0886F464;
    }
    goto L_0886F458;
L_0886F458:
    ctx.gpr[31] = (0x0886F460u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 519u, 0x08AFA45Cu>(ctx, &aot_mem) && ctx.pc == 0x0886F460u) goto L_0886F460;
    return;
L_0886F460:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-20652)));
    goto L_0886F464;
L_0886F464:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0886F484;
      }
      goto L_0886F474;
    }
L_0886F474:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-20652)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_0886F48C;
      }
      goto L_0886F484;
    }
L_0886F484:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_0886F48C;
L_0886F48C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886F49C;
      }
      goto L_0886F494;
    }
L_0886F494:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_0886F420;
      }
      goto L_0886F49C;
    }
L_0886F49C:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x0886F4A8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-3664));
    goto L_0886D0D8;
L_0886F4A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0886F62C;
      }
      goto L_0886F4B0;
    }
L_0886F4B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[5] >> 30u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[4] = (ctx.gpr[17] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (0u | 31u);
      if (branch_taken) {
          goto L_0886F62C;
      }
      goto L_0886F4DC;
    }
L_0886F4DC:
    ctx.gpr[18] = (0u | 0u);
    goto L_0886F4E0;
L_0886F4E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
        goto L_0886F604;
    }
    goto L_0886F4F4;
L_0886F4F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    goto L_0886F4F8;
L_0886F4F8:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(596));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
        goto L_0886F604;
    }
    goto L_0886F518;
L_0886F518:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(1404));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(596));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
        goto L_0886F604;
    }
    goto L_0886F54C;
L_0886F54C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(1404));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(596));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[7] = (ctx.lo);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(12));
    ctx.gpr[20] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(2)));
    ctx.gpr[6] = (ctx.gpr[20] + static_cast<std::uint32_t>(8));
    ctx.gpr[7] = (ctx.gpr[20] + ctx.gpr[7]);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(4))))));
    ctx.gpr[31] = (0x0886F59Cu);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(6));
    goto L_0886EE98;
L_0886F59C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(7)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(6)));
    ctx.gpr[4] = (ctx.gpr[4] << 8u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[18]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(594), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(596));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[19];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
      if (branch_taken) {
          goto L_0886F5EC;
      }
      goto L_0886F5E4;
    }
L_0886F5E4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_0886F5F8;
      }
      goto L_0886F5EC;
    }
L_0886F5EC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    goto L_0886F5F8;
L_0886F5F8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
      if (branch_taken) {
          goto L_0886F4F8;
      }
      goto L_0886F600;
    }
L_0886F600:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    goto L_0886F604;
L_0886F604:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[5] >> 30u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[4] = (ctx.gpr[17] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0886F4E0;
      }
      goto L_0886F62C;
    }
L_0886F62C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1508)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1512)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1516)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1520)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1524)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1528)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1532)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(1536));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886F650:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(120)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(124)));
    ctx.gpr[8] = (ctx.gpr[9] | 0u);
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[5];
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0886F718;
      }
      goto L_0886F664;
    }
L_0886F664:
    ctx.gpr[5] = (0u | 40u);
    goto L_0886F668;
L_0886F668:
    aot_mem.aot_store16(ctx.gpr[8] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(120)));
    ctx.gpr[6] = (ctx.gpr[9] | 0u);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_0886F708;
      }
      goto L_0886F67C;
    }
L_0886F67C:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(32)));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(28)));
    ctx.gpr[10] = (ctx.gpr[2] - ctx.gpr[11]);
    goto L_0886F688;
L_0886F688:
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(32)));
    ctx.gpr[12] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(28)));
    ctx.gpr[13] = (ctx.gpr[13] - ctx.gpr[12]);
    { const bool branch_taken = ctx.gpr[10] != ctx.gpr[13];
    ctx.gpr[3] = (0u | 0u);
      if (branch_taken) {
          goto L_0886F6D8;
      }
      goto L_0886F69C;
    }
L_0886F69C:
    ctx.gpr[13] = (ctx.gpr[11] | 0u);
    if (ctx.gpr[13] == ctx.gpr[2]) {
    ctx.gpr[12] = (0u | 1u);
        goto L_0886F6CC;
    }
    goto L_0886F6A8;
L_0886F6A8:
    ctx.gpr[14] = (aot_mem.aot_load8(ctx.gpr[13] + static_cast<std::uint32_t>(0)));
    ctx.gpr[15] = (aot_mem.aot_load8(ctx.gpr[12] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[14] == ctx.gpr[15];
    ctx.gpr[13] = (ctx.gpr[13] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0886F6C0;
      }
      goto L_0886F6B8;
    }
L_0886F6B8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[12] = (0u | 0u);
      if (branch_taken) {
          goto L_0886F6CC;
      }
      goto L_0886F6C0;
    }
L_0886F6C0:
    { const bool branch_taken = ctx.gpr[13] != ctx.gpr[2];
    ctx.gpr[12] = (ctx.gpr[12] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0886F6A8;
      }
      goto L_0886F6C8;
    }
L_0886F6C8:
    ctx.gpr[12] = (0u | 1u);
    goto L_0886F6CC;
L_0886F6CC:
    { const bool branch_taken = ctx.gpr[12] == 0u;
    ctx.gpr[3] = (ctx.gpr[3] & 255u);
      if (branch_taken) {
          goto L_0886F6DC;
      }
      goto L_0886F6D4;
    }
L_0886F6D4:
    ctx.gpr[3] = (0u | 1u);
    goto L_0886F6D8;
L_0886F6D8:
    ctx.gpr[3] = (ctx.gpr[3] & 255u);
    goto L_0886F6DC;
L_0886F6DC:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886F6FC;
      }
      goto L_0886F6E4;
    }
L_0886F6E4:
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[9]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[6]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[6] = (ctx.lo);
    aot_mem.aot_store16(ctx.gpr[8] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[6]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(124)));
      if (branch_taken) {
          goto L_0886F70C;
      }
      goto L_0886F6FC;
    }
L_0886F6FC:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(40));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_0886F688;
      }
      goto L_0886F708;
    }
L_0886F708:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(124)));
    goto L_0886F70C;
L_0886F70C:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(40));
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[9];
    // nop
      if (branch_taken) {
          goto L_0886F668;
      }
      goto L_0886F718;
    }
L_0886F718:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886F720:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(2))))));
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(2));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(4))))));
    aot_mem.aot_store16(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store16(ctx.gpr[7] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[8]));
    aot_mem.aot_store16(ctx.gpr[7] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[9]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(6)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[6]);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), 0u);
    ctx.gpr[7] = (2224u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), 0u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(28));
    ctx.gpr[5] = (0u | 47u);
    ctx.gpr[6] = (0u | 12u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x0886F784u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-12944));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 341u, 0x08AF5A1Cu>(ctx, &aot_mem) && ctx.pc == 0x0886F784u) goto L_0886F784;
    return;
L_0886F784:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(592), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(594), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(596), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(600), 0u);
    ctx.gpr[7] = (2224u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(604), 0u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(608));
    ctx.gpr[5] = (0u | 32u);
    ctx.gpr[6] = (0u | 1404u);
    ctx.gpr[31] = (0x0886F7B0u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-16736));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 341u, 0x08AF5A1Cu>(ctx, &aot_mem) && ctx.pc == 0x0886F7B0u) goto L_0886F7B0;
    return;
L_0886F7B0:
    ctx.gpr[4] = (1u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (1u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-20000), 0u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[5] = (1u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-19996), 0u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[5] = (1u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-19992), 0u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-19860), 0u);
    ctx.gpr[4] = (1u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (1u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-19856), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-19852), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (1u << 16u);
    ctx.gpr[5] = (0u | 30u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-19848), ctx.gpr[5]);
    ctx.gpr[4] = (1u << 16u);
    ctx.gpr[6] = (0u | 30u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (1u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-19844), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(-19840), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (1u << 16u);
    ctx.gpr[5] = (34953u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-30584));
    ctx.gpr[6] = (1u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-19836), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[6]);
    ctx.gpr[6] = (1u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-19832), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[6]);
    ctx.gpr[5] = (1u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-19828), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[5] = (1u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-19824), 0u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[5] = (1u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-19820), 0u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[5] = (1u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-19816), 0u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(-19748), static_cast<std::uint16_t>(0u));
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886F898:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-176));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(104)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[22]);
    ctx.gpr[22] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[5]);
      if (branch_taken) {
          goto L_0886F8DC;
      }
      goto L_0886F8D4;
    }
L_0886F8D4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0886FCB8;
      }
      goto L_0886F8DC;
    }
L_0886F8DC:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[22] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(28), 0u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x0886F8F0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    goto L_0886E16C;
L_0886F8F0:
    ctx.gpr[31] = (0x0886F8F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x0886F8F8u) goto L_0886F8F8;
    return;
L_0886F8F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[20] = (0u | 0u);
    aot_mem.aot_store16(ctx.gpr[22] + static_cast<std::uint32_t>(52), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[22] + static_cast<std::uint32_t>(120));
    ctx.gpr[4] = (ctx.gpr[20] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[5]);
      if (branch_taken) {
          goto L_0886FA28;
      }
      goto L_0886F920;
    }
L_0886F920:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(34));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(12));
    ctx.gpr[21] = (ctx.gpr[22] + static_cast<std::uint32_t>(12));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(18));
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(42));
    ctx.gpr[19] = (ctx.gpr[17] + static_cast<std::uint32_t>(2));
    goto L_0886F93C;
L_0886F93C:
    ctx.gpr[16] = (ctx.gpr[19] | 0u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x0886F94Cu);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 637u, 0x08973FC4u>(ctx, &aot_mem) && ctx.pc == 0x0886F94Cu) goto L_0886F94C;
    return;
L_0886F94C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(34))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0886F998;
      }
      goto L_0886F974;
    }
L_0886F974:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(2)));
    if (ctx.gpr[5] != ctx.gpr[6]) {
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
        goto L_0886F99C;
    }
    goto L_0886F984;
L_0886F984:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_0886F99C;
      }
      goto L_0886F994;
    }
L_0886F994:
    ctx.gpr[4] = (0u | 1u);
    goto L_0886F998;
L_0886F998:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_0886F99C;
L_0886F99C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886F9F0;
      }
      goto L_0886F9A4;
    }
L_0886F9A4:
    ctx.gpr[16] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x0886F9B4u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 637u, 0x08973FC4u>(ctx, &aot_mem) && ctx.pc == 0x0886F9B4u) goto L_0886F9B4;
    return;
L_0886F9B4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(42))))));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(26), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint16_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0886F9F0;
      }
      goto L_0886F9D8;
    }
L_0886F9D8:
    aot_mem.aot_store16(ctx.gpr[22] + static_cast<std::uint32_t>(52), static_cast<std::uint16_t>(ctx.gpr[20]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(108)));
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(112)));
      if (branch_taken) {
          goto L_0886FA30;
      }
      goto L_0886F9F0;
    }
L_0886F9F0:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886FA0C;
      }
      goto L_0886F9FC;
    }
L_0886F9FC:
    aot_mem.aot_store16(ctx.gpr[22] + static_cast<std::uint32_t>(52), static_cast<std::uint16_t>(ctx.gpr[20]));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(108)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(112)));
      if (branch_taken) {
          goto L_0886FA30;
      }
      goto L_0886FA0C;
    }
L_0886FA0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(12));
    ctx.gpr[4] = (ctx.gpr[20] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_0886F93C;
      }
      goto L_0886FA28;
    }
L_0886FA28:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(108)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(112)));
    goto L_0886FA30;
L_0886FA30:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16))))));
    ctx.gpr[16] = (ctx.gpr[20] | 0u);
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[17];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(100), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0886FA5C;
      }
      goto L_0886FA44;
    }
L_0886FA44:
    ctx.gpr[31] = (0x0886FA4Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 656u, 0x08AA3128u>(ctx, &aot_mem) && ctx.pc == 0x0886FA4Cu) goto L_0886FA4C;
    return;
L_0886FA4C:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_0886FA44;
      }
      goto L_0886FA58;
    }
L_0886FA58:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(108)));
    goto L_0886FA5C;
L_0886FA5C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(100))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(102), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(101), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(103), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x0886FA78u);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(112), ctx.gpr[20]);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 923u, 0x08AFBEBCu>(ctx, &aot_mem) && ctx.pc == 0x0886FA78u) goto L_0886FA78;
    return;
L_0886FA78:
    ctx.gpr[31] = (0x0886FA80u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    goto L_0886DEF4;
L_0886FA80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[16] < ctx.gpr[4] ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(112)));
        goto L_0886FB28;
    }
    goto L_0886FA98;
L_0886FA98:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(50));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(12));
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(2));
    goto L_0886FAA8;
L_0886FAA8:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886FB08;
      }
      goto L_0886FAB4;
    }
L_0886FAB4:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[22] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 255u);
      if (branch_taken) {
          goto L_0886FB08;
      }
      goto L_0886FAC0;
    }
L_0886FAC0:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(50), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(51), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(53), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(54), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(55), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(2))))));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(4))))));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(50), static_cast<std::uint16_t>(ctx.gpr[5]));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(52), static_cast<std::uint16_t>(ctx.gpr[6]));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(54), static_cast<std::uint16_t>(ctx.gpr[7]));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(56), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0886FB08u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    goto L_0886E368;
L_0886FB08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(12));
    ctx.gpr[5] = (ctx.gpr[16] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_0886FAA8;
      }
      goto L_0886FB24;
    }
L_0886FB24:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(112)));
    goto L_0886FB28;
L_0886FB28:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(108)));
    ctx.gpr[7] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 2u));
    ctx.gpr[8] = (ctx.gpr[8] >> 30u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 2u));
    ctx.gpr[8] = (ctx.gpr[7] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886FC74;
      }
      goto L_0886FB4C;
    }
L_0886FB4C:
    ctx.gpr[8] = (ctx.gpr[4] - ctx.gpr[7]);
    ctx.gpr[17] = (ctx.gpr[8] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_0886FC3C;
      }
      goto L_0886FB5C;
    }
L_0886FB5C:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[20] = (0u + static_cast<std::uint32_t>(-1));
    goto L_0886FB68;
L_0886FB68:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(120)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(60), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(62), static_cast<std::uint16_t>(ctx.gpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), 0u);
    ctx.gpr[4] = (ctx.gpr[7] << 5u);
    ctx.gpr[6] = (ctx.gpr[7] << 3u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), 0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), 0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0886FBB4u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 140u, 0x08AFC93Cu>(ctx, &aot_mem) && ctx.pc == 0x0886FBB4u) goto L_0886FBB4;
    return;
L_0886FBB4:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(107), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_0886FBD0;
      }
      goto L_0886FBC0;
    }
L_0886FBC0:
    if (ctx.gpr[7] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
        goto L_0886FBD4;
    }
    goto L_0886FBC8;
L_0886FBC8:
    ctx.gpr[31] = (0x0886FBD0u);
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 668u, 0x08AA3200u>(ctx, &aot_mem) && ctx.pc == 0x0886FBD0u) goto L_0886FBD0;
    return;
L_0886FBD0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    goto L_0886FBD4;
L_0886FBD4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(108), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_0886FBEC;
      }
      goto L_0886FBDC;
    }
L_0886FBDC:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
        goto L_0886FBF0;
    }
    goto L_0886FBE4;
L_0886FBE4:
    ctx.gpr[31] = (0x0886FBECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 668u, 0x08AA3200u>(ctx, &aot_mem) && ctx.pc == 0x0886FBECu) goto L_0886FBEC;
    return;
L_0886FBEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    goto L_0886FBF0;
L_0886FBF0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(109), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_0886FC08;
      }
      goto L_0886FBF8;
    }
L_0886FBF8:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(108)));
        goto L_0886FC0C;
    }
    goto L_0886FC00;
L_0886FC00:
    ctx.gpr[31] = (0x0886FC08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 668u, 0x08AA3200u>(ctx, &aot_mem) && ctx.pc == 0x0886FC08u) goto L_0886FC08;
    return;
L_0886FC08:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(108)));
    goto L_0886FC0C;
L_0886FC0C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(112)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 2u));
    ctx.gpr[8] = (ctx.gpr[8] >> 30u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 2u));
      if (branch_taken) {
          goto L_0886FB68;
      }
      goto L_0886FC34;
    }
L_0886FC34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    goto L_0886FC3C;
L_0886FC3C:
    ctx.gpr[8] = (ctx.gpr[4] < ctx.gpr[7] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), 0u);
      if (branch_taken) {
          goto L_0886FC60;
      }
      goto L_0886FC48;
    }
L_0886FC48:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(116), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(117), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(112), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0886FC74;
      }
      goto L_0886FC60;
    }
L_0886FC60:
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[4] - ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[22] + static_cast<std::uint32_t>(108));
    ctx.gpr[31] = (0x0886FC74u);
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 230u, 0x08AFCF5Cu>(ctx, &aot_mem) && ctx.pc == 0x0886FC74u) goto L_0886FC74;
    return;
L_0886FC74:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[22] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x0886FC84u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    goto L_0886E068;
L_0886FC84:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[22] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(120)));
    ctx.gpr[7] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[22] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x0886FCB4u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    goto L_0886E068;
L_0886FCB4:
    ctx.gpr[2] = (0u | 1u);
    goto L_0886FCB8;
L_0886FCB8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886FCE8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-2960));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2924), ctx.gpr[20]);
    ctx.gpr[20] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2908), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2912), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2916), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2920), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2928), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2932), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2936), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2940), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2944), ctx.gpr[31]);
    ctx.gpr[31] = (0x0886FD20u);
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(56));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 337u, 0x089D99C0u>(ctx, &aot_mem) && ctx.pc == 0x0886FD20u) goto L_0886FD20;
    return;
L_0886FD20:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (19056u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(112)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(100)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(108)));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[19] = (1u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[19] = (ctx.gpr[20] + ctx.gpr[19]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(100), ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] >> 30u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(2384), 0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[20] + static_cast<std::uint32_t>(100));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(120)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2888), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[23] + ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (1u << 16u);
      if (branch_taken) {
          goto L_0886FF14;
      }
      goto L_0886FDB4;
    }
L_0886FDB4:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.gpr[30] = (ctx.gpr[20] + static_cast<std::uint32_t>(12));
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(1444));
    ctx.gpr[22] = (ctx.gpr[20] + static_cast<std::uint32_t>(12));
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[17] = (ctx.gpr[20] + ctx.gpr[17]);
    goto L_0886FDCC;
L_0886FDCC:
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(48), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x0886FDDCu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_0886F2C4;
L_0886FDDC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2896), ctx.gpr[20]);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0886FDF8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2892), ctx.gpr[18]);
    goto L_0886EDD8;
L_0886FDF8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2900), ctx.gpr[2]);
    ctx.gpr[20] = (0u | 255u);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[20]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(ctx.gpr[20]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(ctx.gpr[20]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(27), static_cast<std::uint8_t>(ctx.gpr[20]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(ctx.gpr[20]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(29), static_cast<std::uint8_t>(ctx.gpr[20]));
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x0886FE28u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 637u, 0x08973FC4u>(ctx, &aot_mem) && ctx.pc == 0x0886FE28u) goto L_0886FE28;
    return;
L_0886FE28:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(1444))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(1446))))));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(1450)));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(1448))))));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(36), static_cast<std::uint16_t>(ctx.gpr[6]));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(30), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint16_t>(ctx.gpr[5]));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(34), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[20]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(ctx.gpr[20]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[20]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[20]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[20]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(ctx.gpr[20]));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(28))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint16_t>(ctx.gpr[6]));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(22), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0886FE8Cu);
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 35u, 0x089741A0u>(ctx, &aot_mem) && ctx.pc == 0x0886FE8Cu) goto L_0886FE8C;
    return;
L_0886FE8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2392)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(2384)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(42));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(2392), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(42));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(2384), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2900)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(2876), static_cast<std::uint8_t>(0u));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2892)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[5];
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2896)));
      if (branch_taken) {
          goto L_0886FEEC;
      }
      goto L_0886FED0;
    }
L_0886FED0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2896), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[31] = (0x0886FEE0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 539u, 0x08932C08u>(ctx, &aot_mem) && ctx.pc == 0x0886FEE0u) goto L_0886FEE0;
    return;
L_0886FEE0:
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[17]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2896)));
      if (branch_taken) {
          goto L_0886FEEC;
      }
      goto L_0886FEEC;
    }
L_0886FEEC:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(2877), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886FDCC;
      }
      goto L_0886FF10;
    }
L_0886FF10:
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(120)));
    goto L_0886FF14;
L_0886FF14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(124)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1452), ctx.gpr[23]);
    ctx.gpr[6] = (ctx.gpr[4] ^ ctx.gpr[23]);
    ctx.gpr[5] = (ctx.gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1456), ctx.gpr[4]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 39u, 0x08870398u>(ctx, &aot_mem); return;
      }
      goto L_0886FF38;
    }
L_0886FF38:
    ctx.gpr[5] = (0u | 40u);
    ctx.gpr[6] = (ctx.gpr[4] - ctx.gpr[23]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[6]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(112)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(108)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1460), ctx.gpr[23]);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[6] >> 30u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-40));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-40));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(140)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] ^ 47u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2884), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[7] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[7] = (ctx.lo);
    ctx.gpr[23] = (ctx.gpr[6] < ctx.gpr[7] ? 1u : 0u);
    ctx.gpr[23] = (ctx.gpr[23] ^ 1u);
    goto L_0886FF9C;
L_0886FF9C:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-40));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 32u, 0x088702E4u>(ctx, &aot_mem); return;
      }
      goto L_0886FFA4;
    }
L_0886FFA4:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[30] != ctx.gpr[5];
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-40));
      if (branch_taken) {
          goto L_0886FFD4;
      }
      goto L_0886FFB4;
    }
L_0886FFB4:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2884)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 32u, 0x088702E4u>(ctx, &aot_mem); return;
      }
      goto L_0886FFC8;
    }
L_0886FFC8:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(33)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 32u, 0x088702E4u>(ctx, &aot_mem); return;
      }
      goto L_0886FFD4;
    }
L_0886FFD4:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1464));
    ctx.gpr[31] = (0x0886FFE0u);
    ctx.gpr[5] = (0u | 1412u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 277u, 0x08AF55B8u>(ctx, &aot_mem) && ctx.pc == 0x0886FFE0u) goto L_0886FFE0;
    return;
L_0886FFE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(140)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1468), 0u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(1480), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(132)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(140), ctx.gpr[4]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 2u, 0x08870008u>(ctx, &aot_mem); return;
      }
      goto L_0886FFFC;
    }
L_0886FFFC:
    ctx.gpr[4] = (0u | 48u);
    ctx.pc = 0x08870000u; return;
}

void recomp_unit_0026(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0026_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_26(Runtime &runtime) {
    runtime.register_generated_unit(26u, 0x0886C000u, 16384u, &recomp_unit_0026, &recomp_unit_0026_entry);
    runtime.register_function(0x0886C000u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C060u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C0C4u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C144u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C29Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C2A4u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C2B4u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C2BCu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C2DCu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C2E8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C2F4u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C348u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C354u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C360u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C3A8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C428u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C438u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C454u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C474u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C494u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C4B4u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C4D4u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C4F4u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C4F8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C510u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C544u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C59Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C5BCu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C5C4u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C5CCu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C5D4u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C5F0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C608u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C620u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C638u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C650u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C668u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C670u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C680u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C6D4u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C6F8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C738u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C78Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C7A8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C7BCu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C804u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C848u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C860u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C898u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C89Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C8ACu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C8D0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C918u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C948u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C950u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C958u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C960u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C968u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C98Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C998u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C9CCu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C9D4u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CA04u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CA10u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CA18u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CA30u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CA34u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CA48u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CA4Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CABCu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CACCu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CADCu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CAF0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CB00u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CB14u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CB20u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CB2Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CB38u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CB44u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CB84u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CBBCu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CBCCu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CBD8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CBE0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CBE8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CBFCu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CC28u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CC34u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CC50u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CC68u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CC78u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CC88u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CC9Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CCA8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CCB8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CCE4u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CCF4u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CCFCu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CD0Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CD1Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CD28u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CD3Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CD48u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CDACu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CE18u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CE28u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CE38u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CE4Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CE5Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CE70u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CE7Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CE88u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CE94u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CEA0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CEE0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CF18u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CF24u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CF2Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CF38u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CF58u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CF68u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CF70u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CF74u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CF8Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CFACu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CFC0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CFC8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CFD8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CFE4u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CFECu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D018u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D0CCu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D0D8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D104u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D1A0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D1B0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D1F8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D260u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D278u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D2B0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D2BCu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D2D4u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D2E0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D2ECu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D2F4u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D2FCu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D300u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D30Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D314u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D31Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D32Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D334u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D340u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D348u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D354u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D35Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D364u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D36Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D374u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D380u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D388u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D390u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D398u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D3A0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D3ACu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D3B4u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D3BCu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D3C0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D3C8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D3D0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D3DCu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D3E4u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D3ECu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D3F4u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D400u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D408u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D410u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D418u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D41Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D424u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D42Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D434u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D440u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D450u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D458u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D45Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D464u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D46Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D49Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D4A8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D4DCu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D4E4u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D4F0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D4F4u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D520u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D528u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D530u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D558u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D570u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D588u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D58Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D59Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D5CCu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D5F0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D610u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D624u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D62Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D644u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D664u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D66Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D67Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D68Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D6ACu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D6C0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D6CCu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D6D4u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D6D8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D6F0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D70Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D774u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D79Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D7ACu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D7B4u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D7D4u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D818u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D844u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D8BCu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D8C8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D8CCu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D8F0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D8FCu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D904u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D90Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D91Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D930u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D93Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D94Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D970u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D97Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D9ACu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D9BCu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D9C4u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D9D4u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D9DCu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D9E4u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D9F8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DA20u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DA2Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DA44u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DA4Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DA54u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DA5Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DA80u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DAB0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DAC0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DAD0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DAD8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DADCu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DAF4u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DB0Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DB28u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DB58u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DB68u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DB84u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DB8Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DB9Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DBA8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DBB4u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DBDCu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DBF0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DBFCu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DC08u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DC10u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DC18u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DC20u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DC28u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DC30u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DC34u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DC3Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DC7Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DC84u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DC90u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DC98u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DC9Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DCD8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DCE8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DCFCu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DD04u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DD14u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DD24u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DD30u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DD50u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DD60u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DD70u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DD78u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DD80u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DD84u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DD8Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DD90u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DD94u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DD9Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DDD8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DE08u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DE14u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DE1Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DE24u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DE34u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DE40u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DE48u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DE50u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DE60u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DE68u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DEB0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DEC0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DECCu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DED4u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DED8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DEF4u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DF18u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DF24u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DF40u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DF5Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DF64u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DF70u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DF78u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DFB4u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DFC4u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DFCCu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DFD4u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DFD8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DFE0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DFE8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DFF0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DFF4u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DFFCu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E004u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E00Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E01Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E068u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E098u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E0BCu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E0E4u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E108u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E124u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E130u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E148u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E150u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E16Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E194u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E1B8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E1E4u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E1F0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E1F8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E208u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E20Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E218u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E228u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E230u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E258u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E26Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E274u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E284u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E2A0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E2B0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E2BCu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E2DCu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E2E8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E2F0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E33Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E34Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E354u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E358u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E368u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E3B0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E3D8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E3E8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E3F8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E3FCu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E400u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E408u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E418u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E420u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E428u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E45Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E464u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E46Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E470u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E47Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E494u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E4A0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E4ECu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E4F8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E500u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E508u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E50Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E514u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E51Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E524u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E528u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E530u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E538u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E540u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E544u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E56Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E57Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E594u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E5A8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E5ACu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E5C0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E5CCu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E5D4u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E5DCu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E5E8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E5F8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E600u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E608u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E614u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E620u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E62Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E630u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E634u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E664u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E66Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E67Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E68Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E6A0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E6ACu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E6BCu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E6E8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E718u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E764u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E770u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E7ACu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E804u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E810u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E834u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E860u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E878u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E884u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E890u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E8C4u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E8F4u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E904u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E960u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E98Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E990u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E9B8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E9E8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886EA10u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886EA28u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886EA34u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886EA48u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886EA54u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886EA60u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886EA70u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886EA78u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886EA80u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886EA88u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886EA9Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886EAACu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886EAB8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886EAD0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886EB0Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886EB18u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886EB20u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886EB30u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886EB3Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886EB6Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886EB98u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886EBA0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886EBB0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886EBC8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886EBD4u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886EC8Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886EC94u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886EC9Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886ECE0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886ECF4u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886ED98u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886EDACu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886EDC0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886EDD8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886EE0Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886EE28u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886EE30u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886EE38u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886EE5Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886EE74u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886EE98u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886EEE0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886EEE8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886EEFCu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886EF0Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886EF28u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886EF40u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886EF4Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886EF80u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886EF8Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886EF94u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886EF98u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886EFA8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886EFB8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886EFC0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886EFC8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886EFD4u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886EFDCu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F004u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F0E8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F0F8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F108u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F11Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F124u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F158u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F15Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F188u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F190u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F1A0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F1B8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F1D4u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F1DCu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F1F0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F1F8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F200u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F208u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F210u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F258u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F25Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F26Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F27Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F284u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F2A8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F2C4u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F2ECu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F384u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F3A0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F420u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F430u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F438u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F44Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F458u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F460u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F464u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F474u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F484u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F48Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F494u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F49Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F4A8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F4B0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F4DCu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F4E0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F4F4u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F4F8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F518u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F54Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F59Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F5E4u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F5ECu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F5F8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F600u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F604u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F62Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F650u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F664u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F668u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F67Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F688u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F69Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F6A8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F6B8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F6C0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F6C8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F6CCu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F6D4u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F6D8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F6DCu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F6E4u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F6FCu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F708u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F70Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F718u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F720u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F784u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F7B0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F898u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F8D4u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F8DCu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F8F0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F8F8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F920u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F93Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F94Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F974u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F984u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F994u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F998u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F99Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F9A4u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F9B4u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F9D8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F9F0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F9FCu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886FA0Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886FA28u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886FA30u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886FA44u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886FA4Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886FA58u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886FA5Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886FA78u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886FA80u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886FA98u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886FAA8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886FAB4u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886FAC0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886FB08u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886FB24u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886FB28u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886FB4Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886FB5Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886FB68u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886FBB4u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886FBC0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886FBC8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886FBD0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886FBD4u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886FBDCu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886FBE4u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886FBECu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886FBF0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886FBF8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886FC00u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886FC08u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886FC0Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886FC34u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886FC3Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886FC48u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886FC60u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886FC74u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886FC84u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886FCB4u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886FCB8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886FCE8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886FD20u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886FDB4u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886FDCCu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886FDDCu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886FDF8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886FE28u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886FE8Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886FED0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886FEE0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886FEECu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886FF10u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886FF14u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886FF38u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886FF9Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886FFA4u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886FFB4u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886FFC8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886FFD4u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886FFE0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886FFFCu, &recomp_unit_0026, "recomp_unit_0026");
}
} // namespace psprecomp
