#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0126[4090] = {
    1, 0, 2, 0, 0, 3, 0, 0, 4, 0, 0, 5, 0, 0, 6, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 17, 0, 0, 18,
    0, 0, 19, 0, 0, 20, 0, 0, 21, 0, 0, 22, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 24, 0, 25, 0, 0, 0, 26, 0, 27, 0,
    0, 0, 28, 0, 0, 29, 0, 0, 30, 0, 0, 31, 0, 0, 32, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 36, 0, 37, 0, 38, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0,
    0, 0, 41, 0, 42, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 45, 0, 46, 0, 0, 0, 0, 0, 47, 0, 0, 0,
    48, 0, 49, 0, 50, 0, 0, 51, 0, 52, 0, 53, 0, 0, 0, 0, 0, 54, 0, 0, 0, 55, 0, 56, 0, 57, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 60, 0, 0, 0, 0, 0, 0, 0,
    61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 63, 0, 64, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 69, 0, 0, 0, 0, 0, 70, 0, 71, 0, 72, 0, 0,
    73, 0, 0, 0, 0, 74, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 82, 0, 0, 83, 0, 0, 84, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 89,
    0, 0, 0, 90, 0, 91, 0, 92, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 96, 0, 0, 97, 0, 0, 98, 0, 99, 0, 0, 0, 0,
    0, 100, 0, 0, 0, 101, 0, 0, 102, 0, 0, 103, 0, 0, 0, 0, 104, 0, 0, 105, 0, 0, 0, 106, 0, 0, 0, 0, 107, 0, 0, 0,
    0, 108, 0, 109, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0,
    112, 0, 0, 113, 0, 0, 114, 0, 0, 0, 0, 115, 0, 0, 0, 0, 116, 0, 0, 117, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0,
    119, 0, 120, 0, 121, 122, 0, 0, 0, 0, 123, 0, 0, 0, 124, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 127, 0, 0, 0,
    128, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 130, 0, 131, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0,
    0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 137, 0, 0, 0, 0, 0,
    138, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 141, 142, 0, 0, 0, 0, 0, 0, 143, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 146, 0, 0, 0,
    0, 147, 0, 0, 148, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 151, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 153, 0, 154, 0, 155, 0, 156, 0, 157, 158, 0, 0, 0, 159, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 161,
    0, 0, 162, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0,
    166, 0, 0, 167, 0, 168, 0, 0, 0, 0, 169, 0, 170, 0, 0, 171, 0, 0, 0, 172, 0, 173, 174, 0, 175, 0, 0, 176, 0, 0, 177, 0,
    178, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 180, 181, 0, 182, 183, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 187, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0,
    0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 191, 0, 192, 0, 193, 0, 194, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 198, 0, 0, 0, 199, 0, 0, 200, 0, 201, 0, 0, 0, 0, 202, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 205, 0, 206, 0, 0,
    207, 0, 0, 208, 0, 0, 0, 209, 0, 210, 0, 211, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 213, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 215, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 223, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 226, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 229, 0, 0, 0, 230, 0, 231, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 233, 0, 0, 0, 234, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0,
    0, 239, 0, 240, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 243, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 250, 251, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0,
    0, 0, 253, 0, 254, 0, 0, 255, 0, 256, 0, 257, 0, 0, 0, 0, 258, 0, 259, 0, 260, 0, 0, 0, 261, 0, 0, 0, 262, 0, 0, 0,
    263, 0, 0, 0, 264, 0, 0, 0, 265, 0, 0, 0, 266, 0, 0, 0, 267, 0, 0, 0, 268, 0, 0, 0, 269, 270, 0, 271, 0, 272, 0, 0,
    273, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 276, 0, 0, 277, 0, 0, 278, 279, 0, 280, 281, 0, 282,
    0, 283, 0, 0, 284, 0, 0, 0, 285, 0, 0, 0, 286, 0, 0, 287, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0,
    0, 290, 0, 0, 0, 291, 0, 0, 0, 292, 0, 0, 293, 0, 0, 0, 294, 0, 0, 0, 295, 0, 296, 0, 0, 297, 0, 0, 0, 298, 0, 0,
    0, 299, 0, 0, 0, 300, 0, 0, 0, 301, 0, 0, 0, 302, 0, 0, 0, 303, 0, 0, 0, 304, 0, 0, 0, 305, 0, 306, 0, 307, 0, 308,
    0, 309, 0, 310, 0, 311, 0, 312, 0, 313, 0, 314, 0, 315, 0, 316, 0, 317, 0, 0, 0, 318, 0, 0, 319, 0, 0, 320, 0, 0, 321, 322,
    0, 323, 324, 325, 0, 326, 0, 327, 0, 328, 0, 329, 0, 0, 330, 0, 0, 0, 0, 0, 331, 0, 332, 0, 0, 333, 0, 334, 0, 335, 0, 336,
    0, 0, 337, 0, 0, 0, 0, 338, 339, 0, 0, 0, 0, 340, 0, 0, 0, 341, 342, 0, 0, 0, 0, 343, 0, 0, 344, 0, 0, 0, 0, 345,
    0, 0, 346, 0, 0, 0, 0, 347, 0, 0, 0, 348, 0, 0, 0, 349, 0, 0, 350, 0, 0, 351, 0, 0, 352, 353, 0, 354, 355, 0, 0, 0,
    0, 356, 0, 357, 0, 358, 0, 359, 0, 360, 0, 0, 361, 0, 362, 0, 363, 0, 0, 0, 0, 364, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0,
    0, 366, 0, 367, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 369, 0,
    0, 370, 0, 0, 0, 0, 371, 0, 372, 0, 373, 0, 374, 0, 375, 0, 0, 376, 0, 0, 0, 0, 377, 0, 0, 0, 378, 0, 0, 379, 0, 0,
    380, 0, 381, 0, 382, 0, 0, 0, 0, 0, 383, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 384, 0, 385, 0, 386, 0, 0, 0,
    387, 0, 0, 0, 388, 0, 389, 0, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 391, 0, 0, 0, 392, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    393, 0, 394, 0, 0, 0, 395, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 396, 0, 397, 0, 0, 0, 398, 0, 0, 399, 0, 0, 0, 0,
    0, 0, 400, 0, 401, 0, 402, 0, 403, 0, 404, 0, 405, 0, 0, 0, 406, 0, 0, 0, 407, 0, 408, 0, 409, 0, 410, 0, 411, 0, 0, 412,
    0, 0, 0, 413, 0, 0, 0, 0, 0, 0, 0, 0, 0, 414, 0, 0, 415, 0, 416, 0, 0, 417, 0, 418, 0, 0, 0, 419, 0, 420, 0, 0,
    0, 421, 0, 0, 0, 0, 0, 0, 0, 0, 0, 422, 0, 0, 423, 0, 0, 0, 424, 0, 0, 425, 0, 426, 0, 427, 0, 428, 0, 429, 0, 430,
    0, 0, 0, 0, 0, 0, 431, 0, 0, 0, 432, 0, 0, 0, 0, 0, 0, 0, 433, 0, 0, 0, 0, 0, 0, 0, 0, 0, 434, 0, 0, 0,
    0, 0, 0, 435, 0, 0, 0, 0, 436, 0, 0, 437, 0, 438, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 439, 0, 0,
    0, 440, 0, 0, 0, 441, 0, 0, 0, 442, 0, 443, 0, 0, 0, 444, 0, 0, 0, 0, 0, 0, 0, 445, 0, 0, 0, 0, 0, 0, 446, 0,
    0, 0, 0, 447, 0, 0, 448, 0, 449, 0, 0, 0, 0, 450, 0, 0, 0, 451, 0, 452, 0, 453, 0, 454, 0, 0, 0, 0, 0, 0, 0, 455,
    0, 456, 0, 0, 0, 457, 0, 0, 458, 0, 459, 0, 0, 0, 0, 0, 460, 0, 0, 0, 0, 461, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 462, 0, 463, 0, 0, 464, 0, 465, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 466, 0, 0, 0, 467,
    0, 0, 0, 0, 468, 0, 0, 0, 469, 0, 470, 0, 0, 0, 0, 471, 0, 472, 0, 473, 0, 0, 0, 0, 474, 0, 475, 0, 476, 0, 0, 0,
    0, 0, 477, 0, 0, 478, 0, 0, 0, 0, 0, 479, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 480, 481, 0,
    482, 0, 0, 0, 0, 0, 0, 0, 483, 0, 484, 0, 0, 0, 485, 0, 0, 0, 0, 0, 0, 0, 486, 0, 487, 0, 0, 0, 0, 0, 488, 0,
    0, 0, 489, 0, 0, 0, 0, 0, 0, 0, 490, 0, 491, 0, 492, 0, 0, 0, 0, 0, 493, 0, 0, 0, 0, 0, 0, 0, 0, 0, 494, 0,
    0, 0, 495, 496, 0, 0, 497, 0, 0, 498, 0, 0, 0, 499, 0, 0, 0, 0, 0, 0, 0, 500, 0, 501, 0, 0, 0, 0, 0, 0, 502, 0,
    503, 0, 0, 0, 0, 0, 0, 504, 0, 505, 0, 506, 0, 507, 0, 508, 0, 509, 0, 0, 0, 510, 0, 0, 0, 511, 0, 512, 0, 513, 0, 514,
    0, 515, 0, 0, 516, 0, 0, 0, 517, 0, 518, 0, 0, 0, 519, 0, 0, 0, 0, 0, 520, 0, 521, 0, 0, 0, 522, 0, 0, 0, 523, 0,
    524, 0, 0, 0, 525, 0, 0, 526, 0, 527, 0, 0, 528, 0, 529, 0, 530, 0, 0, 0, 0, 531, 0, 532, 0, 533, 0, 534, 0, 535, 0, 0,
    536, 0, 0, 0, 0, 537, 0, 0, 0, 0, 538, 0, 0, 0, 0, 539, 0, 540, 0, 0, 541, 0, 542, 0, 0, 543, 0, 0, 0, 0, 544, 0,
    0, 545, 0, 546, 0, 0, 0, 0, 0, 0, 0, 547, 0, 0, 0, 0, 548, 0, 0, 549, 0, 0, 0, 0, 0, 550, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 551, 0, 0, 552, 0, 553, 0, 554, 0, 555, 0, 0, 0, 556, 0, 0, 0, 557, 0, 0, 0,
    558, 0, 0, 559, 0, 560, 0, 0, 561, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 562, 0, 563, 0,
    564, 0, 565, 0, 566, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 567, 0, 0, 0, 568, 0, 569, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 570, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 571, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 572, 0, 0, 0, 573,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 574, 0, 0, 0, 0, 575, 0, 0, 0, 0, 0, 576, 0, 0, 0, 0, 0, 0, 577, 0,
    0, 578, 0, 0, 579, 0, 0, 580, 0, 0, 581, 0, 0, 582, 0, 583, 0, 584, 0, 585, 0, 0, 586, 0, 0, 587, 0, 0, 588, 0, 0, 589,
    0, 0, 590, 0, 0, 591, 0, 0, 592, 0, 0, 0, 0, 593, 0, 594, 0, 595, 0, 596, 0, 597, 0, 598, 0, 599, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 600, 0, 0, 0, 601, 0, 0, 0, 0, 0, 602, 0, 603, 0, 604, 0, 605, 0, 0, 0, 0, 0, 0, 606, 0, 0,
    0, 0, 0, 0, 0, 0, 607, 0, 608, 0, 0, 0, 0, 0, 0, 609, 0, 0, 0, 610, 0, 0, 611, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 612, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 613, 0, 0, 0,
    0, 0, 0, 0, 614, 0, 0, 615, 0, 616, 0, 617, 0, 0, 0, 0, 618, 0, 0, 0, 619, 0, 620, 0, 621, 0, 0, 622, 0, 0, 623, 0,
    0, 0, 624, 0, 0, 0, 625, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 626, 0, 627, 0, 628, 0, 629, 0, 630, 0,
    631, 0, 632, 0, 633, 0, 634, 0, 0, 0, 635, 636, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 637, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 638, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 639, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 640, 0, 0, 0, 0, 641, 642, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 643, 0, 0,
    0, 0, 0, 0, 0, 644, 0, 0, 0, 645, 0, 0, 0, 646, 647, 0, 0, 0, 0, 648, 0, 649, 650, 0, 651, 0, 0, 0, 0, 0, 652, 0,
    0, 0, 0, 653, 0, 0, 0, 0, 654, 0, 0, 655, 0, 0, 0, 0, 0, 0, 656, 0, 0, 0, 657, 0, 0, 658, 0, 659, 0, 0, 0, 0,
    0, 660, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 661, 0, 662, 0, 0, 663, 0, 664, 0, 0, 0, 0, 665, 0, 666, 0, 0,
    667, 0, 0, 0, 0, 668, 0, 669, 0, 0, 0, 670, 0, 0, 0, 0, 0, 0, 0, 671, 0, 0, 0, 672, 0, 0, 0, 673, 674, 0, 0, 0,
    0, 675, 0, 676, 677, 0, 678, 0, 0, 0, 0, 0, 679, 0, 0, 0, 0, 680, 0, 0, 0, 0, 681, 0, 0, 682, 0, 0, 0, 0, 0, 0,
    683, 0, 0, 0, 684, 0, 0, 685, 0, 686, 0, 0, 0, 0, 687, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 688, 0, 689, 0,
    0, 690, 0, 691, 0, 0, 0, 0, 692, 0, 693, 0, 0, 694, 0, 0, 0, 0, 695, 0, 696, 0, 0, 0, 0, 697, 0, 0, 0, 0, 698, 0,
    0, 699, 0, 700, 0, 0, 0, 0, 701, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 702, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 703, 0, 0, 0, 0,
    0, 0, 704, 0, 0, 705, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 706, 0, 0, 0, 0, 0, 0, 707, 0, 708, 709, 0, 0, 710, 0, 711,
    0, 0, 0, 0, 0, 712, 0, 0, 0, 0, 0, 713, 0, 714, 0, 715, 0, 0, 0, 716, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 717, 0,
    0, 0, 0, 0, 718, 0, 719, 0, 0, 0, 0, 0, 720, 0, 721, 0, 0, 0, 722, 0, 0, 0, 0, 0, 0, 723, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 724, 0, 0, 0, 0, 725, 0, 726, 0, 0, 0, 727, 0, 728, 0, 0, 0, 0, 0, 729, 0, 0, 0,
    0, 730, 0, 731, 0, 0, 0, 0, 732, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 733, 0, 0, 0, 0, 0, 0, 734, 0, 0, 735, 0, 0,
    0, 0, 736, 0, 0, 0, 0, 737, 0, 0, 0, 0, 738, 0, 0, 0, 739, 0, 0, 0, 0, 740, 0, 0, 0, 741,
};
void recomp_unit_0126_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x089FC000u;
        entry_id = (entry_delta < 16360u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0126[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_089FC000;
    case 2u: goto L_089FC008;
    case 3u: goto L_089FC014;
    case 4u: goto L_089FC020;
    case 5u: goto L_089FC02C;
    case 6u: goto L_089FC038;
    case 7u: goto L_089FC044;
    case 8u: goto L_089FC08C;
    case 9u: goto L_089FC0F0;
    case 10u: goto L_089FC130;
    case 11u: goto L_089FC18C;
    case 12u: goto L_089FC238;
    case 13u: goto L_089FC5FC;
    case 14u: goto L_089FC67C;
    case 15u: goto L_089FC7C0;
    case 16u: goto L_089FC7E4;
    case 17u: goto L_089FC7F0;
    case 18u: goto L_089FC7FC;
    case 19u: goto L_089FC808;
    case 20u: goto L_089FC814;
    case 21u: goto L_089FC820;
    case 22u: goto L_089FC82C;
    case 23u: goto L_089FC844;
    case 24u: goto L_089FC858;
    case 25u: goto L_089FC860;
    case 26u: goto L_089FC870;
    case 27u: goto L_089FC878;
    case 28u: goto L_089FC888;
    case 29u: goto L_089FC894;
    case 30u: goto L_089FC8A0;
    case 31u: goto L_089FC8AC;
    case 32u: goto L_089FC8B8;
    case 33u: goto L_089FC8C4;
    case 34u: goto L_089FC8F0;
    case 35u: goto L_089FC928;
    case 36u: goto L_089FC99C;
    case 37u: goto L_089FC9A4;
    case 38u: goto L_089FC9AC;
    case 39u: goto L_089FC9B4;
    case 40u: goto L_089FC9F0;
    case 41u: goto L_089FCA08;
    case 42u: goto L_089FCA10;
    case 43u: goto L_089FCA18;
    case 44u: goto L_089FCA3C;
    case 45u: goto L_089FCA50;
    case 46u: goto L_089FCA58;
    case 47u: goto L_089FCA70;
    case 48u: goto L_089FCA80;
    case 49u: goto L_089FCA88;
    case 50u: goto L_089FCA90;
    case 51u: goto L_089FCA9C;
    case 52u: goto L_089FCAA4;
    case 53u: goto L_089FCAAC;
    case 54u: goto L_089FCAC4;
    case 55u: goto L_089FCAD4;
    case 56u: goto L_089FCADC;
    case 57u: goto L_089FCAE4;
    case 58u: goto L_089FCB34;
    case 59u: goto L_089FCB58;
    case 60u: goto L_089FCB60;
    case 61u: goto L_089FCB80;
    case 62u: goto L_089FCBB0;
    case 63u: goto L_089FCBC4;
    case 64u: goto L_089FCBCC;
    case 65u: goto L_089FCBD4;
    case 66u: goto L_089FCC44;
    case 67u: goto L_089FCC50;
    case 68u: goto L_089FCD44;
    case 69u: goto L_089FCD4C;
    case 70u: goto L_089FCD64;
    case 71u: goto L_089FCD6C;
    case 72u: goto L_089FCD74;
    case 73u: goto L_089FCD80;
    case 74u: goto L_089FCD94;
    case 75u: goto L_089FCDA0;
    case 76u: goto L_089FCDCC;
    case 77u: goto L_089FCDFC;
    case 78u: goto L_089FCE74;
    case 79u: goto L_089FCEAC;
    case 80u: goto L_089FCEC4;
    case 81u: goto L_089FCED8;
    case 82u: goto L_089FCF08;
    case 83u: goto L_089FCF14;
    case 84u: goto L_089FCF20;
    case 85u: goto L_089FCF24;
    case 86u: goto L_089FCF8C;
    case 87u: goto L_089FCFB4;
    case 88u: goto L_089FCFDC;
    case 89u: goto L_089FCFFC;
    case 90u: goto L_089FD00C;
    case 91u: goto L_089FD014;
    case 92u: goto L_089FD01C;
    case 93u: goto L_089FD030;
    case 94u: goto L_089FD06C;
    case 95u: goto L_089FD0B4;
    case 96u: goto L_089FD0CC;
    case 97u: goto L_089FD0D8;
    case 98u: goto L_089FD0E4;
    case 99u: goto L_089FD0EC;
    case 100u: goto L_089FD104;
    case 101u: goto L_089FD114;
    case 102u: goto L_089FD120;
    case 103u: goto L_089FD12C;
    case 104u: goto L_089FD140;
    case 105u: goto L_089FD14C;
    case 106u: goto L_089FD15C;
    case 107u: goto L_089FD170;
    case 108u: goto L_089FD184;
    case 109u: goto L_089FD18C;
    case 110u: goto L_089FD1A0;
    case 111u: goto L_089FD1DC;
    case 112u: goto L_089FD200;
    case 113u: goto L_089FD20C;
    case 114u: goto L_089FD218;
    case 115u: goto L_089FD22C;
    case 116u: goto L_089FD240;
    case 117u: goto L_089FD24C;
    case 118u: goto L_089FD268;
    case 119u: goto L_089FD280;
    case 120u: goto L_089FD288;
    case 121u: goto L_089FD290;
    case 122u: goto L_089FD294;
    case 123u: goto L_089FD2A8;
    case 124u: goto L_089FD2B8;
    case 125u: goto L_089FD2C4;
    case 126u: goto L_089FD2E8;
    case 127u: goto L_089FD2F0;
    case 128u: goto L_089FD300;
    case 129u: goto L_089FD324;
    case 130u: goto L_089FD32C;
    case 131u: goto L_089FD334;
    case 132u: goto L_089FD348;
    case 133u: goto L_089FD378;
    case 134u: goto L_089FD390;
    case 135u: goto L_089FD3BC;
    case 136u: goto L_089FD3D8;
    case 137u: goto L_089FD3E8;
    case 138u: goto L_089FD400;
    case 139u: goto L_089FD414;
    case 140u: goto L_089FD448;
    case 141u: goto L_089FD458;
    case 142u: goto L_089FD45C;
    case 143u: goto L_089FD478;
    case 144u: goto L_089FD4C4;
    case 145u: goto L_089FD4E8;
    case 146u: goto L_089FD4F0;
    case 147u: goto L_089FD504;
    case 148u: goto L_089FD510;
    case 149u: goto L_089FD518;
    case 150u: goto L_089FD548;
    case 151u: goto L_089FD550;
    case 152u: goto L_089FD564;
    case 153u: goto L_089FD594;
    case 154u: goto L_089FD59C;
    case 155u: goto L_089FD5A4;
    case 156u: goto L_089FD5AC;
    case 157u: goto L_089FD5B4;
    case 158u: goto L_089FD5B8;
    case 159u: goto L_089FD5C8;
    case 160u: goto L_089FD5D8;
    case 161u: goto L_089FD5FC;
    case 162u: goto L_089FD608;
    case 163u: goto L_089FD60C;
    case 164u: goto L_089FD64C;
    case 165u: goto L_089FD668;
    case 166u: goto L_089FD680;
    case 167u: goto L_089FD68C;
    case 168u: goto L_089FD694;
    case 169u: goto L_089FD6A8;
    case 170u: goto L_089FD6B0;
    case 171u: goto L_089FD6BC;
    case 172u: goto L_089FD6CC;
    case 173u: goto L_089FD6D4;
    case 174u: goto L_089FD6D8;
    case 175u: goto L_089FD6E0;
    case 176u: goto L_089FD6EC;
    case 177u: goto L_089FD6F8;
    case 178u: goto L_089FD700;
    case 179u: goto L_089FD724;
    case 180u: goto L_089FD73C;
    case 181u: goto L_089FD740;
    case 182u: goto L_089FD748;
    case 183u: goto L_089FD74C;
    case 184u: goto L_089FD754;
    case 185u: goto L_089FD794;
    case 186u: goto L_089FD7B0;
    case 187u: goto L_089FD7C0;
    case 188u: goto L_089FD7D0;
    case 189u: goto L_089FD7F4;
    case 190u: goto L_089FD810;
    case 191u: goto L_089FD828;
    case 192u: goto L_089FD830;
    case 193u: goto L_089FD838;
    case 194u: goto L_089FD840;
    case 195u: goto L_089FD850;
    case 196u: goto L_089FD880;
    case 197u: goto L_089FD8B0;
    case 198u: goto L_089FD8C0;
    case 199u: goto L_089FD8D0;
    case 200u: goto L_089FD8DC;
    case 201u: goto L_089FD8E4;
    case 202u: goto L_089FD8F8;
    case 203u: goto L_089FD934;
    case 204u: goto L_089FD954;
    case 205u: goto L_089FD96C;
    case 206u: goto L_089FD974;
    case 207u: goto L_089FD980;
    case 208u: goto L_089FD98C;
    case 209u: goto L_089FD99C;
    case 210u: goto L_089FD9A4;
    case 211u: goto L_089FD9AC;
    case 212u: goto L_089FD9C8;
    case 213u: goto L_089FDA08;
    case 214u: goto L_089FDA24;
    case 215u: goto L_089FDA34;
    case 216u: goto L_089FDA40;
    case 217u: goto L_089FDA6C;
    case 218u: goto L_089FDA98;
    case 219u: goto L_089FDAD4;
    case 220u: goto L_089FDB04;
    case 221u: goto L_089FDB28;
    case 222u: goto L_089FDB58;
    case 223u: goto L_089FDB78;
    case 224u: goto L_089FDBA0;
    case 225u: goto L_089FDBE8;
    case 226u: goto L_089FDC10;
    case 227u: goto L_089FDC18;
    case 228u: goto L_089FDC48;
    case 229u: goto L_089FDC58;
    case 230u: goto L_089FDC68;
    case 231u: goto L_089FDC70;
    case 232u: goto L_089FDCB4;
    case 233u: goto L_089FDCC4;
    case 234u: goto L_089FDCD4;
    case 235u: goto L_089FDCDC;
    case 236u: goto L_089FDD10;
    case 237u: goto L_089FDD3C;
    case 238u: goto L_089FDD64;
    case 239u: goto L_089FDD84;
    case 240u: goto L_089FDD8C;
    case 241u: goto L_089FDD90;
    case 242u: goto L_089FDDC0;
    case 243u: goto L_089FDDD0;
    case 244u: goto L_089FDDD4;
    case 245u: goto L_089FDE00;
    case 246u: goto L_089FDE2C;
    case 247u: goto L_089FDE5C;
    case 248u: goto L_089FDE88;
    case 249u: goto L_089FDEB4;
    case 250u: goto L_089FDEBC;
    case 251u: goto L_089FDEC0;
    case 252u: goto L_089FDEE4;
    case 253u: goto L_089FDF08;
    case 254u: goto L_089FDF10;
    case 255u: goto L_089FDF1C;
    case 256u: goto L_089FDF24;
    case 257u: goto L_089FDF2C;
    case 258u: goto L_089FDF40;
    case 259u: goto L_089FDF48;
    case 260u: goto L_089FDF50;
    case 261u: goto L_089FDF60;
    case 262u: goto L_089FDF70;
    case 263u: goto L_089FDF80;
    case 264u: goto L_089FDF90;
    case 265u: goto L_089FDFA0;
    case 266u: goto L_089FDFB0;
    case 267u: goto L_089FDFC0;
    case 268u: goto L_089FDFD0;
    case 269u: goto L_089FDFE0;
    case 270u: goto L_089FDFE4;
    case 271u: goto L_089FDFEC;
    case 272u: goto L_089FDFF4;
    case 273u: goto L_089FE000;
    case 274u: goto L_089FE020;
    case 275u: goto L_089FE040;
    case 276u: goto L_089FE04C;
    case 277u: goto L_089FE058;
    case 278u: goto L_089FE064;
    case 279u: goto L_089FE068;
    case 280u: goto L_089FE070;
    case 281u: goto L_089FE074;
    case 282u: goto L_089FE07C;
    case 283u: goto L_089FE084;
    case 284u: goto L_089FE090;
    case 285u: goto L_089FE0A0;
    case 286u: goto L_089FE0B0;
    case 287u: goto L_089FE0BC;
    case 288u: goto L_089FE0CC;
    case 289u: goto L_089FE0F4;
    case 290u: goto L_089FE104;
    case 291u: goto L_089FE114;
    case 292u: goto L_089FE124;
    case 293u: goto L_089FE130;
    case 294u: goto L_089FE140;
    case 295u: goto L_089FE150;
    case 296u: goto L_089FE158;
    case 297u: goto L_089FE164;
    case 298u: goto L_089FE174;
    case 299u: goto L_089FE184;
    case 300u: goto L_089FE194;
    case 301u: goto L_089FE1A4;
    case 302u: goto L_089FE1B4;
    case 303u: goto L_089FE1C4;
    case 304u: goto L_089FE1D4;
    case 305u: goto L_089FE1E4;
    case 306u: goto L_089FE1EC;
    case 307u: goto L_089FE1F4;
    case 308u: goto L_089FE1FC;
    case 309u: goto L_089FE204;
    case 310u: goto L_089FE20C;
    case 311u: goto L_089FE214;
    case 312u: goto L_089FE21C;
    case 313u: goto L_089FE224;
    case 314u: goto L_089FE22C;
    case 315u: goto L_089FE234;
    case 316u: goto L_089FE23C;
    case 317u: goto L_089FE244;
    case 318u: goto L_089FE254;
    case 319u: goto L_089FE260;
    case 320u: goto L_089FE26C;
    case 321u: goto L_089FE278;
    case 322u: goto L_089FE27C;
    case 323u: goto L_089FE284;
    case 324u: goto L_089FE288;
    case 325u: goto L_089FE28C;
    case 326u: goto L_089FE294;
    case 327u: goto L_089FE29C;
    case 328u: goto L_089FE2A4;
    case 329u: goto L_089FE2AC;
    case 330u: goto L_089FE2B8;
    case 331u: goto L_089FE2D0;
    case 332u: goto L_089FE2D8;
    case 333u: goto L_089FE2E4;
    case 334u: goto L_089FE2EC;
    case 335u: goto L_089FE2F4;
    case 336u: goto L_089FE2FC;
    case 337u: goto L_089FE308;
    case 338u: goto L_089FE31C;
    case 339u: goto L_089FE320;
    case 340u: goto L_089FE334;
    case 341u: goto L_089FE344;
    case 342u: goto L_089FE348;
    case 343u: goto L_089FE35C;
    case 344u: goto L_089FE368;
    case 345u: goto L_089FE37C;
    case 346u: goto L_089FE388;
    case 347u: goto L_089FE39C;
    case 348u: goto L_089FE3AC;
    case 349u: goto L_089FE3BC;
    case 350u: goto L_089FE3C8;
    case 351u: goto L_089FE3D4;
    case 352u: goto L_089FE3E0;
    case 353u: goto L_089FE3E4;
    case 354u: goto L_089FE3EC;
    case 355u: goto L_089FE3F0;
    case 356u: goto L_089FE404;
    case 357u: goto L_089FE40C;
    case 358u: goto L_089FE414;
    case 359u: goto L_089FE41C;
    case 360u: goto L_089FE424;
    case 361u: goto L_089FE430;
    case 362u: goto L_089FE438;
    case 363u: goto L_089FE440;
    case 364u: goto L_089FE454;
    case 365u: goto L_089FE460;
    case 366u: goto L_089FE484;
    case 367u: goto L_089FE48C;
    case 368u: goto L_089FE4C8;
    case 369u: goto L_089FE4F8;
    case 370u: goto L_089FE504;
    case 371u: goto L_089FE518;
    case 372u: goto L_089FE520;
    case 373u: goto L_089FE528;
    case 374u: goto L_089FE530;
    case 375u: goto L_089FE538;
    case 376u: goto L_089FE544;
    case 377u: goto L_089FE558;
    case 378u: goto L_089FE568;
    case 379u: goto L_089FE574;
    case 380u: goto L_089FE580;
    case 381u: goto L_089FE588;
    case 382u: goto L_089FE590;
    case 383u: goto L_089FE5A8;
    case 384u: goto L_089FE5E0;
    case 385u: goto L_089FE5E8;
    case 386u: goto L_089FE5F0;
    case 387u: goto L_089FE600;
    case 388u: goto L_089FE610;
    case 389u: goto L_089FE618;
    case 390u: goto L_089FE630;
    case 391u: goto L_089FE648;
    case 392u: goto L_089FE658;
    case 393u: goto L_089FE680;
    case 394u: goto L_089FE688;
    case 395u: goto L_089FE698;
    case 396u: goto L_089FE6C8;
    case 397u: goto L_089FE6D0;
    case 398u: goto L_089FE6E0;
    case 399u: goto L_089FE6EC;
    case 400u: goto L_089FE708;
    case 401u: goto L_089FE710;
    case 402u: goto L_089FE718;
    case 403u: goto L_089FE720;
    case 404u: goto L_089FE728;
    case 405u: goto L_089FE730;
    case 406u: goto L_089FE740;
    case 407u: goto L_089FE750;
    case 408u: goto L_089FE758;
    case 409u: goto L_089FE760;
    case 410u: goto L_089FE768;
    case 411u: goto L_089FE770;
    case 412u: goto L_089FE77C;
    case 413u: goto L_089FE78C;
    case 414u: goto L_089FE7B4;
    case 415u: goto L_089FE7C0;
    case 416u: goto L_089FE7C8;
    case 417u: goto L_089FE7D4;
    case 418u: goto L_089FE7DC;
    case 419u: goto L_089FE7EC;
    case 420u: goto L_089FE7F4;
    case 421u: goto L_089FE804;
    case 422u: goto L_089FE82C;
    case 423u: goto L_089FE838;
    case 424u: goto L_089FE848;
    case 425u: goto L_089FE854;
    case 426u: goto L_089FE85C;
    case 427u: goto L_089FE864;
    case 428u: goto L_089FE86C;
    case 429u: goto L_089FE874;
    case 430u: goto L_089FE87C;
    case 431u: goto L_089FE898;
    case 432u: goto L_089FE8A8;
    case 433u: goto L_089FE8C8;
    case 434u: goto L_089FE8F0;
    case 435u: goto L_089FE90C;
    case 436u: goto L_089FE920;
    case 437u: goto L_089FE92C;
    case 438u: goto L_089FE934;
    case 439u: goto L_089FE974;
    case 440u: goto L_089FE984;
    case 441u: goto L_089FE994;
    case 442u: goto L_089FE9A4;
    case 443u: goto L_089FE9AC;
    case 444u: goto L_089FE9BC;
    case 445u: goto L_089FE9DC;
    case 446u: goto L_089FE9F8;
    case 447u: goto L_089FEA0C;
    case 448u: goto L_089FEA18;
    case 449u: goto L_089FEA20;
    case 450u: goto L_089FEA34;
    case 451u: goto L_089FEA44;
    case 452u: goto L_089FEA4C;
    case 453u: goto L_089FEA54;
    case 454u: goto L_089FEA5C;
    case 455u: goto L_089FEA7C;
    case 456u: goto L_089FEA84;
    case 457u: goto L_089FEA94;
    case 458u: goto L_089FEAA0;
    case 459u: goto L_089FEAA8;
    case 460u: goto L_089FEAC0;
    case 461u: goto L_089FEAD4;
    case 462u: goto L_089FEB0C;
    case 463u: goto L_089FEB14;
    case 464u: goto L_089FEB20;
    case 465u: goto L_089FEB28;
    case 466u: goto L_089FEB6C;
    case 467u: goto L_089FEB7C;
    case 468u: goto L_089FEB90;
    case 469u: goto L_089FEBA0;
    case 470u: goto L_089FEBA8;
    case 471u: goto L_089FEBBC;
    case 472u: goto L_089FEBC4;
    case 473u: goto L_089FEBCC;
    case 474u: goto L_089FEBE0;
    case 475u: goto L_089FEBE8;
    case 476u: goto L_089FEBF0;
    case 477u: goto L_089FEC08;
    case 478u: goto L_089FEC14;
    case 479u: goto L_089FEC2C;
    case 480u: goto L_089FECF4;
    case 481u: goto L_089FECF8;
    case 482u: goto L_089FED00;
    case 483u: goto L_089FED20;
    case 484u: goto L_089FED28;
    case 485u: goto L_089FED38;
    case 486u: goto L_089FED58;
    case 487u: goto L_089FED60;
    case 488u: goto L_089FED78;
    case 489u: goto L_089FED88;
    case 490u: goto L_089FEDA8;
    case 491u: goto L_089FEDB0;
    case 492u: goto L_089FEDB8;
    case 493u: goto L_089FEDD0;
    case 494u: goto L_089FEDF8;
    case 495u: goto L_089FEE08;
    case 496u: goto L_089FEE0C;
    case 497u: goto L_089FEE18;
    case 498u: goto L_089FEE24;
    case 499u: goto L_089FEE34;
    case 500u: goto L_089FEE54;
    case 501u: goto L_089FEE5C;
    case 502u: goto L_089FEE78;
    case 503u: goto L_089FEE80;
    case 504u: goto L_089FEE9C;
    case 505u: goto L_089FEEA4;
    case 506u: goto L_089FEEAC;
    case 507u: goto L_089FEEB4;
    case 508u: goto L_089FEEBC;
    case 509u: goto L_089FEEC4;
    case 510u: goto L_089FEED4;
    case 511u: goto L_089FEEE4;
    case 512u: goto L_089FEEEC;
    case 513u: goto L_089FEEF4;
    case 514u: goto L_089FEEFC;
    case 515u: goto L_089FEF04;
    case 516u: goto L_089FEF10;
    case 517u: goto L_089FEF20;
    case 518u: goto L_089FEF28;
    case 519u: goto L_089FEF38;
    case 520u: goto L_089FEF50;
    case 521u: goto L_089FEF58;
    case 522u: goto L_089FEF68;
    case 523u: goto L_089FEF78;
    case 524u: goto L_089FEF80;
    case 525u: goto L_089FEF90;
    case 526u: goto L_089FEF9C;
    case 527u: goto L_089FEFA4;
    case 528u: goto L_089FEFB0;
    case 529u: goto L_089FEFB8;
    case 530u: goto L_089FEFC0;
    case 531u: goto L_089FEFD4;
    case 532u: goto L_089FEFDC;
    case 533u: goto L_089FEFE4;
    case 534u: goto L_089FEFEC;
    case 535u: goto L_089FEFF4;
    case 536u: goto L_089FF000;
    case 537u: goto L_089FF014;
    case 538u: goto L_089FF028;
    case 539u: goto L_089FF03C;
    case 540u: goto L_089FF044;
    case 541u: goto L_089FF050;
    case 542u: goto L_089FF058;
    case 543u: goto L_089FF064;
    case 544u: goto L_089FF078;
    case 545u: goto L_089FF084;
    case 546u: goto L_089FF08C;
    case 547u: goto L_089FF0AC;
    case 548u: goto L_089FF0C0;
    case 549u: goto L_089FF0CC;
    case 550u: goto L_089FF0E4;
    case 551u: goto L_089FF12C;
    case 552u: goto L_089FF138;
    case 553u: goto L_089FF140;
    case 554u: goto L_089FF148;
    case 555u: goto L_089FF150;
    case 556u: goto L_089FF160;
    case 557u: goto L_089FF170;
    case 558u: goto L_089FF180;
    case 559u: goto L_089FF18C;
    case 560u: goto L_089FF194;
    case 561u: goto L_089FF1A0;
    case 562u: goto L_089FF1F0;
    case 563u: goto L_089FF1F8;
    case 564u: goto L_089FF200;
    case 565u: goto L_089FF208;
    case 566u: goto L_089FF210;
    case 567u: goto L_089FF254;
    case 568u: goto L_089FF264;
    case 569u: goto L_089FF26C;
    case 570u: goto L_089FF294;
    case 571u: goto L_089FF2C0;
    case 572u: goto L_089FF2EC;
    case 573u: goto L_089FF2FC;
    case 574u: goto L_089FF330;
    case 575u: goto L_089FF344;
    case 576u: goto L_089FF35C;
    case 577u: goto L_089FF378;
    case 578u: goto L_089FF384;
    case 579u: goto L_089FF390;
    case 580u: goto L_089FF39C;
    case 581u: goto L_089FF3A8;
    case 582u: goto L_089FF3B4;
    case 583u: goto L_089FF3BC;
    case 584u: goto L_089FF3C4;
    case 585u: goto L_089FF3CC;
    case 586u: goto L_089FF3D8;
    case 587u: goto L_089FF3E4;
    case 588u: goto L_089FF3F0;
    case 589u: goto L_089FF3FC;
    case 590u: goto L_089FF408;
    case 591u: goto L_089FF414;
    case 592u: goto L_089FF420;
    case 593u: goto L_089FF434;
    case 594u: goto L_089FF43C;
    case 595u: goto L_089FF444;
    case 596u: goto L_089FF44C;
    case 597u: goto L_089FF454;
    case 598u: goto L_089FF45C;
    case 599u: goto L_089FF464;
    case 600u: goto L_089FF498;
    case 601u: goto L_089FF4A8;
    case 602u: goto L_089FF4C0;
    case 603u: goto L_089FF4C8;
    case 604u: goto L_089FF4D0;
    case 605u: goto L_089FF4D8;
    case 606u: goto L_089FF4F4;
    case 607u: goto L_089FF518;
    case 608u: goto L_089FF520;
    case 609u: goto L_089FF53C;
    case 610u: goto L_089FF54C;
    case 611u: goto L_089FF558;
    case 612u: goto L_089FF598;
    case 613u: goto L_089FF5F0;
    case 614u: goto L_089FF610;
    case 615u: goto L_089FF61C;
    case 616u: goto L_089FF624;
    case 617u: goto L_089FF62C;
    case 618u: goto L_089FF640;
    case 619u: goto L_089FF650;
    case 620u: goto L_089FF658;
    case 621u: goto L_089FF660;
    case 622u: goto L_089FF66C;
    case 623u: goto L_089FF678;
    case 624u: goto L_089FF688;
    case 625u: goto L_089FF698;
    case 626u: goto L_089FF6D8;
    case 627u: goto L_089FF6E0;
    case 628u: goto L_089FF6E8;
    case 629u: goto L_089FF6F0;
    case 630u: goto L_089FF6F8;
    case 631u: goto L_089FF700;
    case 632u: goto L_089FF708;
    case 633u: goto L_089FF710;
    case 634u: goto L_089FF718;
    case 635u: goto L_089FF728;
    case 636u: goto L_089FF72C;
    case 637u: goto L_089FF76C;
    case 638u: goto L_089FF7B0;
    case 639u: goto L_089FF7F8;
    case 640u: goto L_089FF824;
    case 641u: goto L_089FF838;
    case 642u: goto L_089FF83C;
    case 643u: goto L_089FF874;
    case 644u: goto L_089FF894;
    case 645u: goto L_089FF8A4;
    case 646u: goto L_089FF8B4;
    case 647u: goto L_089FF8B8;
    case 648u: goto L_089FF8CC;
    case 649u: goto L_089FF8D4;
    case 650u: goto L_089FF8D8;
    case 651u: goto L_089FF8E0;
    case 652u: goto L_089FF8F8;
    case 653u: goto L_089FF90C;
    case 654u: goto L_089FF920;
    case 655u: goto L_089FF92C;
    case 656u: goto L_089FF948;
    case 657u: goto L_089FF958;
    case 658u: goto L_089FF964;
    case 659u: goto L_089FF96C;
    case 660u: goto L_089FF984;
    case 661u: goto L_089FF9BC;
    case 662u: goto L_089FF9C4;
    case 663u: goto L_089FF9D0;
    case 664u: goto L_089FF9D8;
    case 665u: goto L_089FF9EC;
    case 666u: goto L_089FF9F4;
    case 667u: goto L_089FFA00;
    case 668u: goto L_089FFA14;
    case 669u: goto L_089FFA1C;
    case 670u: goto L_089FFA2C;
    case 671u: goto L_089FFA4C;
    case 672u: goto L_089FFA5C;
    case 673u: goto L_089FFA6C;
    case 674u: goto L_089FFA70;
    case 675u: goto L_089FFA84;
    case 676u: goto L_089FFA8C;
    case 677u: goto L_089FFA90;
    case 678u: goto L_089FFA98;
    case 679u: goto L_089FFAB0;
    case 680u: goto L_089FFAC4;
    case 681u: goto L_089FFAD8;
    case 682u: goto L_089FFAE4;
    case 683u: goto L_089FFB00;
    case 684u: goto L_089FFB10;
    case 685u: goto L_089FFB1C;
    case 686u: goto L_089FFB24;
    case 687u: goto L_089FFB38;
    case 688u: goto L_089FFB70;
    case 689u: goto L_089FFB78;
    case 690u: goto L_089FFB84;
    case 691u: goto L_089FFB8C;
    case 692u: goto L_089FFBA0;
    case 693u: goto L_089FFBA8;
    case 694u: goto L_089FFBB4;
    case 695u: goto L_089FFBC8;
    case 696u: goto L_089FFBD0;
    case 697u: goto L_089FFBE4;
    case 698u: goto L_089FFBF8;
    case 699u: goto L_089FFC04;
    case 700u: goto L_089FFC0C;
    case 701u: goto L_089FFC20;
    case 702u: goto L_089FFC58;
    case 703u: goto L_089FFCEC;
    case 704u: goto L_089FFD08;
    case 705u: goto L_089FFD14;
    case 706u: goto L_089FFD40;
    case 707u: goto L_089FFD5C;
    case 708u: goto L_089FFD64;
    case 709u: goto L_089FFD68;
    case 710u: goto L_089FFD74;
    case 711u: goto L_089FFD7C;
    case 712u: goto L_089FFD94;
    case 713u: goto L_089FFDAC;
    case 714u: goto L_089FFDB4;
    case 715u: goto L_089FFDBC;
    case 716u: goto L_089FFDCC;
    case 717u: goto L_089FFDF8;
    case 718u: goto L_089FFE10;
    case 719u: goto L_089FFE18;
    case 720u: goto L_089FFE30;
    case 721u: goto L_089FFE38;
    case 722u: goto L_089FFE48;
    case 723u: goto L_089FFE64;
    case 724u: goto L_089FFEA4;
    case 725u: goto L_089FFEB8;
    case 726u: goto L_089FFEC0;
    case 727u: goto L_089FFED0;
    case 728u: goto L_089FFED8;
    case 729u: goto L_089FFEF0;
    case 730u: goto L_089FFF04;
    case 731u: goto L_089FFF0C;
    case 732u: goto L_089FFF20;
    case 733u: goto L_089FFF4C;
    case 734u: goto L_089FFF68;
    case 735u: goto L_089FFF74;
    case 736u: goto L_089FFF88;
    case 737u: goto L_089FFF9C;
    case 738u: goto L_089FFFB0;
    case 739u: goto L_089FFFC0;
    case 740u: goto L_089FFFD4;
    case 741u: goto L_089FFFE4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_089FC000:
    ctx.gpr[31] = (0x089FC008u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 302u, 0x08A25F64u>(ctx, &aot_mem) && ctx.pc == 0x089FC008u) goto L_089FC008;
    return;
L_089FC008:
    ctx.gpr[4] = (0u | 10u);
    ctx.gpr[31] = (0x089FC014u);
    ctx.gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x089FC014u) goto L_089FC014;
    return;
L_089FC014:
    ctx.gpr[4] = (0u | 11u);
    ctx.gpr[31] = (0x089FC020u);
    ctx.gpr[5] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x089FC020u) goto L_089FC020;
    return;
L_089FC020:
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[31] = (0x089FC02Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x089FC02Cu) goto L_089FC02C;
    return;
L_089FC02C:
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[31] = (0x089FC038u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x089FC038u) goto L_089FC038;
    return;
L_089FC038:
    ctx.gpr[4] = (0u | 6u);
    ctx.gpr[31] = (0x089FC044u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x089FC044u) goto L_089FC044;
    return;
L_089FC044:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(220)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(236)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(240)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(256));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FC08C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-240));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), ctx.gpr[17]);
    ctx.gpr[17] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22912)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11224)));
    ctx.gpr[6] = (ctx.gpr[6] << 4u);
    ctx.gpr[5] = (48460u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(220), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), ctx.gpr[31]);
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089FC8F0;
      }
      goto L_089FC0F0;
    }
L_089FC0F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22912)));
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11224)));
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (16000u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[16] = (2230u << 16u);
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[12];
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[20]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) ^ 0x80000000u);
        goto L_089FC130;
    }
    goto L_089FC130;
L_089FC130:
    ctx.gpr[4] = (16025u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (16469u << 16u);
    ctx.fpr[13] = ctx.fpr[14] - ctx.fpr[13];
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 20447u);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7672)));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (2230u << 16u);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7804)));
    ctx.fpr[14] = ctx.fpr[22] - ctx.fpr[16];
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-7688)));
    ctx.fpr[17] = ctx.fpr[22] - ctx.fpr[17];
    ctx.fpr[15] = ctx.fpr[22] - ctx.fpr[18];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089FC8F0;
      }
      goto L_089FC18C;
    }
L_089FC18C:
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22912)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11116)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11104)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[21] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11120)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11108)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    ctx.gpr[20] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11124)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11112)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[19] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11224)));
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (16928u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
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
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(13216));
    ctx.gpr[31] = (0x089FC238u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 565u, 0x089274ACu>(ctx, &aot_mem) && ctx.pc == 0x089FC238u) goto L_089FC238;
    return;
L_089FC238:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-7688)));
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[23] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[23] + static_cast<std::uint32_t>(-4912));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (16544u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[15];
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (ctx.gpr[4] >> 8u);
    ctx.gpr[30] = (18176u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[30]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-4912)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(-4912), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22912)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11224)));
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
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
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
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
    ctx.gpr[17] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-7736), 0u);
    ctx.gpr[16] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-7732), 0u);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(2));
    ctx.gpr[5] = (0u + 0u);
    ctx.gpr[22] = (2233u << 16u);
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(-28752));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[22]);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[6]));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(3));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[4] = (0u | 255u);
    ctx.gpr[18] = (2232u << 16u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(20400));
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(8));
    ctx.gpr[6] = (16880u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(20));
    ctx.gpr[7] = (ctx.gpr[18] + static_cast<std::uint32_t>(40));
    ctx.gpr[8] = (ctx.gpr[18] + static_cast<std::uint32_t>(52));
    ctx.gpr[9] = (17008u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[9]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(80), static_cast<std::uint8_t>(ctx.gpr[21]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(81), static_cast<std::uint8_t>(ctx.gpr[20]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(82), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-7732)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(83), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[9] = (ctx.gpr[9] << 5u);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[10]);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-7732)));
    ctx.fpr[15] = ctx.fpr[16] + ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    ctx.gpr[9] = (ctx.gpr[9] << 5u);
    ctx.gpr[11] = (std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    ctx.fpr[17] = ctx.fpr[18] - ctx.fpr[17];
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.gpr[2] = (std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(8), ctx.gpr[11]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(96), static_cast<std::uint8_t>(ctx.gpr[21]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(ctx.gpr[20]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(98), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-7732)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(99), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[9] = (ctx.gpr[9] << 5u);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[10]);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-7732)));
    ctx.fpr[15] = ctx.fpr[16] - ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    ctx.gpr[9] = (ctx.gpr[9] << 5u);
    ctx.gpr[11] = (std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    ctx.fpr[17] = ctx.fpr[18] + ctx.fpr[17];
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.gpr[2] = (std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(8), ctx.gpr[11]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(112), static_cast<std::uint8_t>(ctx.gpr[21]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(ctx.gpr[20]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(114), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-7732)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(115), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[9] = (ctx.gpr[9] << 5u);
    ctx.gpr[10] = (ctx.gpr[18] + static_cast<std::uint32_t>(72));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[11]);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[19] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[19] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[2] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-7732)));
    ctx.fpr[17] = ctx.fpr[18] + ctx.fpr[17];
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[19] = ctx.fpr[0] + ctx.fpr[19];
    ctx.gpr[9] = (ctx.gpr[9] << 5u);
    ctx.gpr[10] = (ctx.gpr[18] + static_cast<std::uint32_t>(84));
    ctx.fpr[16] = ctx.fpr[17] + ctx.fpr[16];
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[10]);
    ctx.gpr[11] = (std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    ctx.fpr[15] = ctx.fpr[19] - ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[2] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[3] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(8), ctx.gpr[11]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(128), static_cast<std::uint8_t>(ctx.gpr[21]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(129), static_cast<std::uint8_t>(ctx.gpr[20]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(130), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-7732)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(131), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[9] = (ctx.gpr[9] << 5u);
    ctx.gpr[10] = (ctx.gpr[18] + static_cast<std::uint32_t>(104));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[11]);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[10] = (ctx.gpr[4] | 0u);
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.fpr[17] = ctx.fpr[18] + ctx.fpr[17];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-7732)));
    ctx.gpr[9] = (ctx.gpr[18] + static_cast<std::uint32_t>(116));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.fpr[13] = ctx.fpr[19] + ctx.fpr[13];
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[9]);
    ctx.gpr[2] = (std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[16] = ctx.fpr[17] - ctx.fpr[16];
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[9] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[3] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-7732)));
    ctx.gpr[2] = (ctx.gpr[4] << 5u);
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-7736)));
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[2] = (ctx.gpr[3] + static_cast<std::uint32_t>(6));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-7736), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-7732), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(144), static_cast<std::uint8_t>(ctx.gpr[21]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(145), static_cast<std::uint8_t>(ctx.gpr[20]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(146), static_cast<std::uint8_t>(ctx.gpr[19]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(147), static_cast<std::uint8_t>(ctx.gpr[10]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(160), static_cast<std::uint8_t>(ctx.gpr[21]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(161), static_cast<std::uint8_t>(ctx.gpr[20]));
    ctx.gpr[11] = (15177u << 16u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(162), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.gpr[9] = (20352u << 16u);
    ctx.gpr[11] = (ctx.gpr[11] | 4059u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[9]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(163), static_cast<std::uint8_t>(ctx.gpr[10]));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[11]);
    ctx.gpr[2] = (16672u << 16u);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[9] = (0u | 20u);
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[12] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.gpr[2] = (2230u << 16u);
    goto L_089FC5FC;
L_089FC5FC:
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[21]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[9]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-7736)));
    ctx.gpr[14] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-7732)));
    ctx.gpr[13] = (ctx.gpr[13] + ctx.gpr[13]);
    ctx.gpr[13] = (ctx.gpr[13] + ctx.gpr[22]);
    aot_mem.aot_store16(ctx.gpr[13] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[14]));
    ctx.gpr[15] = (ctx.gpr[14] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[13] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[15]));
    aot_mem.aot_store16(ctx.gpr[13] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(ctx.gpr[14]));
    ctx.gpr[24] = (ctx.gpr[14] + static_cast<std::uint32_t>(-2));
    aot_mem.aot_store16(ctx.gpr[13] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[24]));
    ctx.gpr[14] = (ctx.gpr[14] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[13] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[14]));
    aot_mem.aot_store16(ctx.gpr[13] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(ctx.gpr[15]));
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[13] = (ctx.gpr[13] + ctx.gpr[11]);
    ctx.gpr[13] = (ctx.gpr[13] & 2047u);
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[13]);
    ctx.fpr[18] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[18])));
    ctx.gpr[14] = (ctx.lo);
    // nop
    // nop
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[10]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[9]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[14] = (ctx.gpr[14] + static_cast<std::uint32_t>(60));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[14]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[14] = (ctx.lo);
    ctx.gpr[14] = (ctx.gpr[14] + static_cast<std::uint32_t>(30));
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[14]);
    ctx.fpr[17] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[17])));
    if (static_cast<std::int32_t>(ctx.gpr[13]) < 0) {
    ctx.fpr[18] = ctx.fpr[18] + ctx.fpr[14];
        goto L_089FC67C;
    }
    goto L_089FC67C;
L_089FC67C:
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    ctx.gpr[13] = (std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[13]);
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
    ctx.gpr[13] = (ctx.vfpu_scalar_bits_ct<1u>());
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[13]);
    { const float fs = ctx.fpr[19]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    ctx.fpr[17] = ctx.fpr[17] + ctx.fpr[18];
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-7732)));
    ctx.gpr[13] = (ctx.gpr[13] << 5u);
    ctx.gpr[13] = (ctx.gpr[13] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[13] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[2] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[1] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[3] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[5] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[5] = fs * ft; }
    ctx.fpr[4] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-7732)));
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[19] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[19] = fs * ft; }
    ctx.fpr[18] = ctx.fpr[2] + ctx.fpr[0];
    ctx.gpr[13] = (ctx.gpr[13] << 5u);
    ctx.fpr[1] = ctx.fpr[3] + ctx.fpr[1];
    ctx.gpr[13] = (ctx.gpr[13] + ctx.gpr[6]);
    ctx.fpr[18] = ctx.fpr[18] + ctx.fpr[19];
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[4]));
    ctx.gpr[14] = (std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_store32(ctx.gpr[13] + static_cast<std::uint32_t>(8), ctx.gpr[14]);
    ctx.fpr[19] = ctx.fpr[1] - ctx.fpr[5];
    ctx.gpr[14] = (std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    aot_mem.aot_store32(ctx.gpr[13] + static_cast<std::uint32_t>(0), ctx.gpr[14]);
    ctx.gpr[15] = (std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    aot_mem.aot_store32(ctx.gpr[13] + static_cast<std::uint32_t>(4), ctx.gpr[15]);
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-7732)));
    ctx.gpr[13] = (ctx.gpr[13] << 5u);
    ctx.gpr[13] = (ctx.gpr[13] + ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[13] + static_cast<std::uint32_t>(0), ctx.gpr[12]);
    ctx.fpr[2] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[1] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[3] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[3] = fs * ft; }
    ctx.fpr[4] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[5] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[3] = ctx.fpr[4] + ctx.fpr[3];
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[1] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[5] = ctx.fpr[5] + ctx.fpr[13];
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[3] - ctx.fpr[1];
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.fpr[2] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.fpr[17] = ctx.fpr[5] + ctx.fpr[17];
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-7732)));
    ctx.gpr[15] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[14] = (std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    ctx.gpr[13] = (ctx.gpr[13] << 5u);
    ctx.gpr[13] = (ctx.gpr[13] + ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[13] + static_cast<std::uint32_t>(8), ctx.gpr[14]);
    ctx.gpr[14] = (std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    aot_mem.aot_store32(ctx.gpr[13] + static_cast<std::uint32_t>(0), ctx.gpr[15]);
    aot_mem.aot_store32(ctx.gpr[13] + static_cast<std::uint32_t>(4), ctx.gpr[14]);
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-7732)));
    ctx.gpr[14] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-7736)));
    ctx.gpr[15] = (ctx.gpr[13] << 5u);
    ctx.gpr[15] = (ctx.gpr[15] + ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[15] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[15] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[15] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[15] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[14] = (ctx.gpr[14] + static_cast<std::uint32_t>(6));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-7736), ctx.gpr[14]);
    ctx.gpr[13] = (ctx.gpr[13] + static_cast<std::uint32_t>(2));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-7732), ctx.gpr[13]);
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1440));
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(970));
    ctx.gpr[13] = (static_cast<std::int32_t>(ctx.gpr[4]) < 20 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[13] != 0u;
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(900));
      if (branch_taken) {
          goto L_089FC5FC;
      }
      goto L_089FC7C0;
    }
L_089FC7C0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[31] = (0x089FC7E4u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x089FC7E4u) goto L_089FC7E4;
    return;
L_089FC7E4:
    ctx.gpr[4] = (0u | 6u);
    ctx.gpr[31] = (0x089FC7F0u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x089FC7F0u) goto L_089FC7F0;
    return;
L_089FC7F0:
    ctx.gpr[4] = (0u | 14u);
    ctx.gpr[31] = (0x089FC7FCu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x089FC7FCu) goto L_089FC7FC;
    return;
L_089FC7FC:
    ctx.gpr[4] = (0u | 16u);
    ctx.gpr[31] = (0x089FC808u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x089FC808u) goto L_089FC808;
    return;
L_089FC808:
    ctx.gpr[4] = (0u | 10u);
    ctx.gpr[31] = (0x089FC814u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x089FC814u) goto L_089FC814;
    return;
L_089FC814:
    ctx.gpr[4] = (0u | 11u);
    ctx.gpr[31] = (0x089FC820u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x089FC820u) goto L_089FC820;
    return;
L_089FC820:
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[31] = (0x089FC82Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x089FC82Cu) goto L_089FC82C;
    return;
L_089FC82C:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-16636));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[31] = (0x089FC844u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x089FC844u) goto L_089FC844;
    return;
L_089FC844:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-7732)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x089FC858u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 50u, 0x08868560u>(ctx, &aot_mem) && ctx.pc == 0x089FC858u) goto L_089FC858;
    return;
L_089FC858:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FC878;
      }
      goto L_089FC860;
    }
L_089FC860:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-7736)));
    ctx.gpr[4] = (0u | 3u);
    ctx.gpr[31] = (0x089FC870u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 71u, 0x0886885Cu>(ctx, &aot_mem) && ctx.pc == 0x089FC870u) goto L_089FC870;
    return;
L_089FC870:
    ctx.gpr[31] = (0x089FC878u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 70u, 0x08868844u>(ctx, &aot_mem) && ctx.pc == 0x089FC878u) goto L_089FC878;
    return;
L_089FC878:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[31] = (0x089FC888u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x089FC888u) goto L_089FC888;
    return;
L_089FC888:
    ctx.gpr[4] = (0u | 6u);
    ctx.gpr[31] = (0x089FC894u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x089FC894u) goto L_089FC894;
    return;
L_089FC894:
    ctx.gpr[4] = (0u | 10u);
    ctx.gpr[31] = (0x089FC8A0u);
    ctx.gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x089FC8A0u) goto L_089FC8A0;
    return;
L_089FC8A0:
    ctx.gpr[4] = (0u | 11u);
    ctx.gpr[31] = (0x089FC8ACu);
    ctx.gpr[5] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x089FC8ACu) goto L_089FC8AC;
    return;
L_089FC8AC:
    ctx.gpr[4] = (0u | 14u);
    ctx.gpr[31] = (0x089FC8B8u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x089FC8B8u) goto L_089FC8B8;
    return;
L_089FC8B8:
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[31] = (0x089FC8C4u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x089FC8C4u) goto L_089FC8C4;
    return;
L_089FC8C4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-7736), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-7732), 0u);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] >> 8u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(-4912), ctx.gpr[4]);
    goto L_089FC8F0;
L_089FC8F0:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(220)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FC928:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[2] = (2232u << 16u);
    ctx.gpr[14] = (ctx.gpr[2] + static_cast<std::uint32_t>(13216));
    ctx.gpr[14] = (ctx.gpr[14] + static_cast<std::uint32_t>(48));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[14] + static_cast<std::uint32_t>(0)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[14] + static_cast<std::uint32_t>(4)));
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(4)));
    ctx.fpr[16] = ctx.fpr[16] - ctx.fpr[17];
    ctx.fpr[18] = ctx.fpr[18] - ctx.fpr[19];
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.gpr[3] = (ctx.gpr[7] & 255u);
    ctx.gpr[2] = (ctx.gpr[8] & 255u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[16] = ctx.fpr[16] + ctx.fpr[17];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    ctx.gpr[12] = (ctx.gpr[6] & 255u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[13] = (ctx.gpr[5] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_fpu_condition((ctx.fpr[16] <= ctx.fpr[18]));
    ctx.gpr[11] = (ctx.gpr[11] & 255u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_089FC9AC;
      }
      goto L_089FC99C;
    }
L_089FC99C:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FC9B4;
      }
      goto L_089FC9A4;
    }
L_089FC9A4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FCA3C;
      }
      goto L_089FC9AC;
    }
L_089FC9AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FCC44;
      }
      goto L_089FC9B4;
    }
L_089FC9B4:
    { const std::uint32_t vfpu_address = ctx.gpr[14] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[9] + static_cast<std::uint32_t>(0);
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
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    ctx.gpr[14] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[14]);
    ctx.gpr[14] = (16908u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[14]);
    ctx.set_fpu_condition((ctx.fpr[17] < ctx.fpr[16]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089FCA10;
      }
      goto L_089FC9F0;
    }
L_089FC9F0:
    ctx.gpr[14] = (16968u << 16u);
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[14]);
    ctx.set_fpu_condition((ctx.fpr[17] < ctx.fpr[18]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[14] = (16752u << 16u);
      if (branch_taken) {
          goto L_089FCA18;
      }
      goto L_089FCA08;
    }
L_089FCA08:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FCA3C;
      }
      goto L_089FCA10;
    }
L_089FCA10:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FCC44;
      }
      goto L_089FCA18;
    }
L_089FCA18:
    ctx.fpr[16] = ctx.fpr[17] - ctx.fpr[16];
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[14]);
    ctx.fpr[16] = ctx.fpr[16] / ctx.fpr[18];
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[19] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[19])));
    { const float fs = ctx.fpr[19]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[16]));
    ctx.gpr[2] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[2] = (ctx.gpr[2] & 255u);
    goto L_089FCA3C;
L_089FCA3C:
    ctx.gpr[14] = (2277u << 16u);
    ctx.gpr[15] = (0u | 0u);
    ctx.gpr[25] = (0u | 1u);
    ctx.gpr[24] = (0u | 56u);
    ctx.gpr[14] = (ctx.gpr[14] + static_cast<std::uint32_t>(15552));
    goto L_089FCA50;
L_089FCA50:
    { const bool branch_taken = ctx.gpr[25] == 0u;
    ctx.gpr[25] = (ctx.gpr[15] << 7u);
      if (branch_taken) {
          goto L_089FCA80;
      }
      goto L_089FCA58;
    }
L_089FCA58:
    ctx.gpr[16] = (ctx.gpr[15] << 4u);
    ctx.gpr[25] = (ctx.gpr[25] - ctx.gpr[16]);
    ctx.gpr[25] = (ctx.gpr[25] + ctx.gpr[14]);
    ctx.gpr[25] = (aot_mem.aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[25] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089FCA80;
      }
      goto L_089FCA70;
    }
L_089FCA70:
    ctx.gpr[15] = (ctx.gpr[15] + static_cast<std::uint32_t>(1));
    ctx.gpr[15] = (ctx.gpr[15] & 65535u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[25] = (static_cast<std::int32_t>(ctx.gpr[15]) < 56 ? 1u : 0u);
      if (branch_taken) {
          goto L_089FCA50;
      }
      goto L_089FCA80;
    }
L_089FCA80:
    { const bool branch_taken = ctx.gpr[15] != ctx.gpr[24];
    // nop
      if (branch_taken) {
          goto L_089FCB60;
      }
      goto L_089FCA88;
    }
L_089FCA88:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FCA9C;
      }
      goto L_089FCA90;
    }
L_089FCA90:
    ctx.gpr[15] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[25] = (0u | 1u);
      if (branch_taken) {
          goto L_089FCAA4;
      }
      goto L_089FCA9C;
    }
L_089FCA9C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FCC44;
      }
      goto L_089FCAA4;
    }
L_089FCAA4:
    { const bool branch_taken = ctx.gpr[25] == 0u;
    ctx.gpr[25] = (ctx.gpr[15] << 7u);
      if (branch_taken) {
          goto L_089FCAD4;
      }
      goto L_089FCAAC;
    }
L_089FCAAC:
    ctx.gpr[16] = (ctx.gpr[15] << 4u);
    ctx.gpr[25] = (ctx.gpr[25] - ctx.gpr[16]);
    ctx.gpr[25] = (ctx.gpr[25] + ctx.gpr[14]);
    ctx.gpr[25] = (aot_mem.aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[25] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FCAD4;
      }
      goto L_089FCAC4;
    }
L_089FCAC4:
    ctx.gpr[15] = (ctx.gpr[15] + static_cast<std::uint32_t>(1));
    ctx.gpr[15] = (ctx.gpr[15] & 65535u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[25] = (static_cast<std::int32_t>(ctx.gpr[15]) < 56 ? 1u : 0u);
      if (branch_taken) {
          goto L_089FCAA4;
      }
      goto L_089FCAD4;
    }
L_089FCAD4:
    { const bool branch_taken = ctx.gpr[15] != ctx.gpr[24];
    ctx.gpr[25] = (ctx.gpr[15] << 7u);
      if (branch_taken) {
          goto L_089FCAE4;
      }
      goto L_089FCADC;
    }
L_089FCADC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FCC44;
      }
      goto L_089FCAE4;
    }
L_089FCAE4:
    ctx.gpr[15] = (ctx.gpr[15] << 4u);
    ctx.gpr[25] = (ctx.gpr[25] - ctx.gpr[15]);
    ctx.gpr[24] = (ctx.gpr[25] + ctx.gpr[14]);
    ctx.gpr[15] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[24] + static_cast<std::uint32_t>(56))))));
    ctx.gpr[15] = (ctx.gpr[15] | 2u);
    aot_mem.aot_store8(ctx.gpr[24] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[15]));
    ctx.gpr[15] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[24] + static_cast<std::uint32_t>(56))))));
    aot_mem.aot_store8(ctx.gpr[24] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(0u));
    ctx.gpr[15] = (ctx.gpr[15] | 4u);
    aot_mem.aot_store8(ctx.gpr[24] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[15]));
    ctx.gpr[15] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[24] + static_cast<std::uint32_t>(56))))));
    ctx.gpr[16] = (0u + static_cast<std::uint32_t>(-65));
    ctx.gpr[15] = (ctx.gpr[15] & ctx.gpr[16]);
    aot_mem.aot_store8(ctx.gpr[24] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[15]));
    ctx.gpr[15] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[24] + static_cast<std::uint32_t>(56))))));
    ctx.gpr[16] = (0u + static_cast<std::uint32_t>(-17));
    aot_mem.aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(20), 0u);
    ctx.gpr[15] = (ctx.gpr[15] & ctx.gpr[16]);
    aot_mem.aot_store8(ctx.gpr[24] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[15]));
    ctx.gpr[15] = (0u | 0u);
    goto L_089FCB34;
L_089FCB34:
    ctx.gpr[16] = (ctx.gpr[25] + ctx.gpr[15]);
    ctx.gpr[15] = (ctx.gpr[15] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[14]);
    ctx.gpr[15] = (ctx.gpr[15] << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(100), static_cast<std::uint8_t>(0u));
    ctx.gpr[15] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[15]) >> 16u));
    ctx.gpr[16] = (static_cast<std::int32_t>(ctx.gpr[15]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FCB34;
      }
      goto L_089FCB58;
    }
L_089FCB58:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FCB80;
      }
      goto L_089FCB60;
    }
L_089FCB60:
    ctx.gpr[24] = (ctx.gpr[15] << 7u);
    ctx.gpr[15] = (ctx.gpr[15] << 4u);
    ctx.gpr[24] = (ctx.gpr[24] - ctx.gpr[15]);
    ctx.gpr[24] = (ctx.gpr[24] + ctx.gpr[14]);
    ctx.gpr[14] = (aot_mem.aot_load8(ctx.gpr[24] + static_cast<std::uint32_t>(52)));
    ctx.gpr[14] = (ctx.gpr[14] | ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[14] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FCBC4;
      }
      goto L_089FCB80;
    }
L_089FCB80:
    aot_mem.aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[24] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[13]));
    aot_mem.aot_store8(ctx.gpr[24] + static_cast<std::uint32_t>(49), static_cast<std::uint8_t>(ctx.gpr[12]));
    aot_mem.aot_store8(ctx.gpr[24] + static_cast<std::uint32_t>(50), static_cast<std::uint8_t>(ctx.gpr[3]));
    aot_mem.aot_store8(ctx.gpr[24] + static_cast<std::uint32_t>(51), static_cast<std::uint8_t>(ctx.gpr[2]));
    { const std::uint32_t vfpu_address = ctx.gpr[9] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[24] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[16] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[16]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (2229u << 16u);
      if (branch_taken) {
          goto L_089FCBCC;
      }
      goto L_089FCBB0;
    }
L_089FCBB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(22912)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11132)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089FCBD4;
      }
      goto L_089FCBC4;
    }
L_089FCBC4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(16), 0u);
      if (branch_taken) {
          goto L_089FCC44;
      }
      goto L_089FCBCC;
    }
L_089FCBCC:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089FCBD4;
L_089FCBD4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[24] + static_cast<std::uint32_t>(56))))));
    ctx.gpr[9] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[9]);
    ctx.gpr[7] = (ctx.gpr[7] & 1u);
    aot_mem.aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[7]);
    aot_mem.aot_store8(ctx.gpr[24] + static_cast<std::uint32_t>(53), static_cast<std::uint8_t>(ctx.gpr[9]));
    aot_mem.aot_store8(ctx.gpr[24] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[24] + static_cast<std::uint32_t>(56))))));
    aot_mem.aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(24), ctx.gpr[10]);
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-9));
    ctx.gpr[6] = (ctx.gpr[6] & 1u);
    aot_mem.aot_store8(ctx.gpr[24] + static_cast<std::uint32_t>(54), static_cast<std::uint8_t>(ctx.gpr[11]));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    aot_mem.aot_store8(ctx.gpr[24] + static_cast<std::uint32_t>(55), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[24] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[24] + static_cast<std::uint32_t>(56))))));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-33));
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[24] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    goto L_089FCC44;
L_089FCC44:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FCC50:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-16692)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[17];
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-16696)));
    ctx.gpr[2] = (2229u << 16u);
    ctx.gpr[6] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-16688), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[7] = (2229u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-16668)));
    ctx.gpr[3] = (2229u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = ctx.fpr[16] / ctx.fpr[15];
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-16656)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-16660)));
    ctx.gpr[24] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[5] = (16014u << 16u);
    ctx.gpr[16] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(-16652), std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.gpr[5] = (ctx.gpr[5] | 14571u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-16644), std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[18] / ctx.fpr[12];
    ctx.gpr[13] = (2229u << 16u);
    ctx.gpr[12] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[13] + static_cast<std::uint32_t>(-16680), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[10] = (16672u << 16u);
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(-16684), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[11] = (15744u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[10]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[11]);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[14] = (2229u << 16u);
    ctx.gpr[8] = (16281u << 16u);
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[14] + static_cast<std::uint32_t>(-16676), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[9] = (16268u << 16u);
    ctx.gpr[15] = (2229u << 16u);
    ctx.gpr[6] = (ctx.gpr[8] | 39322u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-16672), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[7] = (ctx.gpr[9] | 52429u);
    aot_mem.aot_store32(ctx.gpr[15] + static_cast<std::uint32_t>(-16664), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[25] = (2229u << 16u);
    ctx.gpr[2] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[25] + static_cast<std::uint32_t>(-16648), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-16640), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FCD44:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FCD4C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x089FCD64u);
    ctx.gpr[7] = (0u | 88u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 322u, 0x0894DE0Cu>(ctx, &aot_mem) && ctx.pc == 0x089FCD64u) goto L_089FCD64;
    return;
L_089FCD64:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FCD74;
      }
      goto L_089FCD6C;
    }
L_089FCD6C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089FCD74;
      }
      goto L_089FCD74;
    }
L_089FCD74:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FCD80:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (0u | 88u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x089FCD94u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 322u, 0x0894DE0Cu>(ctx, &aot_mem) && ctx.pc == 0x089FCD94u) goto L_089FCD94;
    return;
L_089FCD94:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FCDA0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x089FCDCCu);
    ctx.gpr[7] = (0u | 360u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 322u, 0x0894DE0Cu>(ctx, &aot_mem) && ctx.pc == 0x089FCDCCu) goto L_089FCDCC;
    return;
L_089FCDCC:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.gpr[4] = (0u | 45u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(360));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x089FCDFCu);
    ctx.gpr[7] = (0u | 192u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 322u, 0x0894DE0Cu>(ctx, &aot_mem) && ctx.pc == 0x089FCDFCu) goto L_089FCDFC;
    return;
L_089FCDFC:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(8));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(160));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 8u);
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(44), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(44)));
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FCE74:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] << 3u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x089FCEACu);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 322u, 0x0894DE0Cu>(ctx, &aot_mem) && ctx.pc == 0x089FCEACu) goto L_089FCEAC;
    return;
L_089FCEAC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[31] = (0x089FCEC4u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 322u, 0x0894DE0Cu>(ctx, &aot_mem) && ctx.pc == 0x089FCEC4u) goto L_089FCEC4;
    return;
L_089FCEC4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FCED8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x089FCF08u);
    ctx.gpr[7] = (0u | 148u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 322u, 0x0894DE0Cu>(ctx, &aot_mem) && ctx.pc == 0x089FCF08u) goto L_089FCF08;
    return;
L_089FCF08:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    if (ctx.gpr[17] != 0u) {
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
        goto L_089FCF24;
    }
    goto L_089FCF14;
L_089FCF14:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089FCF20u);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 238u, 0x088B93ECu>(ctx, &aot_mem) && ctx.pc == 0x089FCF20u) goto L_089FCF20;
    return;
L_089FCF20:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    goto L_089FCF24;
L_089FCF24:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(60), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(32), 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (2208u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24), 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(28), 0u);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-12988));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), 0u);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(64));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), 0u);
    ctx.gpr[4] = (0u | 236u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089FCF8Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_089FCDA0;
L_089FCF8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[18] = (0u | 5u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), ctx.gpr[18]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[19] = (ctx.gpr[5] + static_cast<std::uint32_t>(52));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089FCFB4u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 690u, 0x08927F14u>(ctx, &aot_mem) && ctx.pc == 0x089FCFB4u) goto L_089FCFB4;
    return;
L_089FCFB4:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(64));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089FCFDCu);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 690u, 0x08927F14u>(ctx, &aot_mem) && ctx.pc == 0x089FCFDCu) goto L_089FCFDC;
    return;
L_089FCFDC:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[19] = (ctx.gpr[5] + static_cast<std::uint32_t>(44));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    ctx.gpr[5] = (0u | 4u);
    ctx.gpr[31] = (0x089FCFFCu);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 690u, 0x08927F14u>(ctx, &aot_mem) && ctx.pc == 0x089FCFFCu) goto L_089FCFFC;
    return;
L_089FCFFC:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089FD00Cu);
    ctx.gpr[5] = (0u | 32u);
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 536u, 0x08916F38u>(ctx, &aot_mem) && ctx.pc == 0x089FD00Cu) goto L_089FD00C;
    return;
L_089FD00C:
    ctx.gpr[31] = (0x089FD014u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0168_entry, 168u, 643u, 0x08AA7F94u>(ctx, &aot_mem) && ctx.pc == 0x089FD014u) goto L_089FD014;
    return;
L_089FD014:
    ctx.gpr[31] = (0x089FD01Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 538u, 0x08AAEB38u>(ctx, &aot_mem) && ctx.pc == 0x089FD01Cu) goto L_089FD01C;
    return;
L_089FD01C:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 17u);
    ctx.gpr[31] = (0x089FD030u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-3328));
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 555u, 0x0891713Cu>(ctx, &aot_mem) && ctx.pc == 0x089FD030u) goto L_089FD030;
    return;
L_089FD030:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(5));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] | 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
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
L_089FD06C:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(80), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(60), 0u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(50), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), 0u);
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(49), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(72), 0u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(44), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(46), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(84), 0u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(64), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FD0B4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x089FD0CCu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 142u, 0x08878B94u>(ctx, &aot_mem) && ctx.pc == 0x089FD0CCu) goto L_089FD0CC;
    return;
L_089FD0CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FD114;
      }
      goto L_089FD0D8;
    }
L_089FD0D8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089FD0E4u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 71u, 0x0891C604u>(ctx, &aot_mem) && ctx.pc == 0x089FD0E4u) goto L_089FD0E4;
    return;
L_089FD0E4:
    ctx.gpr[31] = (0x089FD0ECu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 534u, 0x08916F0Cu>(ctx, &aot_mem) && ctx.pc == 0x089FD0ECu) goto L_089FD0EC;
    return;
L_089FD0EC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x089FD104u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 322u, 0x0894DE0Cu>(ctx, &aot_mem) && ctx.pc == 0x089FD104u) goto L_089FD104;
    return;
L_089FD104:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), 0u);
    goto L_089FD114;
L_089FD114:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089FD120u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_089FCE74;
L_089FD120:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FD140;
      }
      goto L_089FD12C;
    }
L_089FD12C:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[6] = (0u | 148u);
    ctx.gpr[31] = (0x089FD140u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 322u, 0x0894DE0Cu>(ctx, &aot_mem) && ctx.pc == 0x089FD140u) goto L_089FD140;
    return;
L_089FD140:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x089FD14Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_089FCD80;
L_089FD14C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FD15C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x089FD170u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    goto L_089FCD4C;
L_089FD170:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089FD184u);
    ctx.gpr[6] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 107u, 0x0891C844u>(ctx, &aot_mem) && ctx.pc == 0x089FD184u) goto L_089FD184;
    return;
L_089FD184:
    ctx.gpr[31] = (0x089FD18Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089FD06C;
L_089FD18C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x089FD1A0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    goto L_089FCDA0;
L_089FD1A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(64));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(64));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FD1DC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x089FD200u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 142u, 0x08878B94u>(ctx, &aot_mem) && ctx.pc == 0x089FD200u) goto L_089FD200;
    return;
L_089FD200:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089FD20Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_089FCE74;
L_089FD20C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089FD218u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_089FCD80;
L_089FD218:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FD22C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x089FD240u);
    ctx.gpr[4] = (0u | 0u);
    goto L_089FCD4C;
L_089FD240:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FD294;
      }
      goto L_089FD24C;
    }
L_089FD24C:
    ctx.gpr[4] = (0u | 8u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(76), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[31] = (0x089FD268u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089FD06C;
L_089FD268:
    ctx.gpr[5] = (2208u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x089FD280u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-12584));
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 244u, 0x088B9450u>(ctx, &aot_mem) && ctx.pc == 0x089FD280u) goto L_089FD280;
    return;
L_089FD280:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FD294;
      }
      goto L_089FD288;
    }
L_089FD288:
    ctx.gpr[31] = (0x089FD290u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089FD0B4;
L_089FD290:
    ctx.gpr[16] = (0u | 0u);
    goto L_089FD294;
L_089FD294:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FD2A8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x089FD2B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 66u, 0x0891C53Cu>(ctx, &aot_mem) && ctx.pc == 0x089FD2B8u) goto L_089FD2B8;
    return;
L_089FD2B8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FD2C4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x089FD2E8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 142u, 0x08878B94u>(ctx, &aot_mem) && ctx.pc == 0x089FD2E8u) goto L_089FD2E8;
    return;
L_089FD2E8:
    ctx.gpr[31] = (0x089FD2F0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 785u, 0x0891B904u>(ctx, &aot_mem) && ctx.pc == 0x089FD2F0u) goto L_089FD2F0;
    return;
L_089FD2F0:
    ctx.gpr[17] = (2208u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), 0u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-11608));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    goto L_089FD300;
L_089FD300:
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(46), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089FD324u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 244u, 0x088B9450u>(ctx, &aot_mem) && ctx.pc == 0x089FD324u) goto L_089FD324;
    return;
L_089FD324:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
        goto L_089FD300;
    }
    goto L_089FD32C;
L_089FD32C:
    ctx.gpr[31] = (0x089FD334u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089FD0B4;
L_089FD334:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FD348:
    ctx.gpr[5] = (18804u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 9216u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (51572u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] | 9216u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FD378:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FD390:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[17]);
    ctx.gpr[7] = (0u | 6u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_089FD458;
      }
      goto L_089FD3BC;
    }
L_089FD3BC:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (2274u << 16u);
    ctx.gpr[31] = (0x089FD3D8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(19632));
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 42u, 0x0893031Cu>(ctx, &aot_mem) && ctx.pc == 0x089FD3D8u) goto L_089FD3D8;
    return;
L_089FD3D8:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[4];
    ctx.gpr[5] = (2274u << 16u);
      if (branch_taken) {
          goto L_089FD458;
      }
      goto L_089FD3E8;
    }
L_089FD3E8:
    ctx.gpr[4] = (ctx.gpr[18] << 6u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(19632));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FD458;
      }
      goto L_089FD400;
    }
L_089FD400:
    ctx.gpr[19] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1360), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089FD414u);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 538u, 0x089A246Cu>(ctx, &aot_mem) && ctx.pc == 0x089FD414u) goto L_089FD414;
    return;
L_089FD414:
    ctx.gpr[4] = (ctx.gpr[18] << 6u);
    ctx.gpr[5] = (2274u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(19632));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (16025u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x089FD448u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 303u, 0x089A1630u>(ctx, &aot_mem) && ctx.pc == 0x089FD448u) goto L_089FD448;
    return;
L_089FD448:
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(1362), static_cast<std::uint16_t>(ctx.gpr[18]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1364), ctx.gpr[16]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_089FD45C;
      }
      goto L_089FD458;
    }
L_089FD458:
    ctx.gpr[2] = (0u | 0u);
    goto L_089FD45C;
L_089FD45C:
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
L_089FD478:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089FD4C4u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 329u, 0x089A5680u>(ctx, &aot_mem) && ctx.pc == 0x089FD4C4u) goto L_089FD4C4;
    return;
L_089FD4C4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-16012));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(92), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(40));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089FD4E8u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089FD4E8u) goto L_089FD4E8;
    return;
L_089FD4E8:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089FD4F0;
L_089FD4F0:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1828), 0u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[18]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089FD4F0;
      }
      goto L_089FD504;
    }
L_089FD504:
    ctx.gpr[4] = (0u | 18u);
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[4];
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2064), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_089FD518;
      }
      goto L_089FD510;
    }
L_089FD510:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2064), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_089FD518;
L_089FD518:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2068), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2073), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2072), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15876)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15880)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15868)));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[30] = (0u | 146u);
    ctx.gpr[23] = (ctx.gpr[16] | 0u);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15872)));
    goto L_089FD548;
L_089FD548:
    ctx.gpr[31] = (0x089FD550u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x089FD550u) goto L_089FD550;
    return;
L_089FD550:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089FD564u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 360u, 0x08AF5BFCu>(ctx, &aot_mem) && ctx.pc == 0x089FD564u) goto L_089FD564;
    return;
L_089FD564:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[7] = (ctx.gpr[6] < ctx.gpr[20] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[21]);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[22] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x089FD594u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 124u, 0x08A28D44u>(ctx, &aot_mem) && ctx.pc == 0x089FD594u) goto L_089FD594;
    return;
L_089FD594:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FD5AC;
      }
      goto L_089FD59C;
    }
L_089FD59C:
    ctx.gpr[31] = (0x089FD5A4u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 148u, 0x08A28E68u>(ctx, &aot_mem) && ctx.pc == 0x089FD5A4u) goto L_089FD5A4;
    return;
L_089FD5A4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FD5B4;
      }
      goto L_089FD5AC;
    }
L_089FD5AC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(2076), ctx.gpr[22]);
      if (branch_taken) {
          goto L_089FD5B8;
      }
      goto L_089FD5B4;
    }
L_089FD5B4:
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(2076), ctx.gpr[30]);
    goto L_089FD5B8;
L_089FD5B8:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089FD548;
      }
      goto L_089FD5C8;
    }
L_089FD5C8:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[31] = (0x089FD5D8u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x089FD5D8u) goto L_089FD5D8;
    return;
L_089FD5D8:
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[20];
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-11044)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089FD608;
      }
      goto L_089FD5FC;
    }
L_089FD5FC:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2140), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089FD60C;
      }
      goto L_089FD608;
    }
L_089FD608:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2140), static_cast<std::uint8_t>(0u));
    goto L_089FD60C;
L_089FD60C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2144), 0u);
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
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
L_089FD64C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_089FD694;
      }
      goto L_089FD668;
    }
L_089FD668:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-16012));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(92), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089FD680u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 358u, 0x089A6320u>(ctx, &aot_mem) && ctx.pc == 0x089FD680u) goto L_089FD680;
    return;
L_089FD680:
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FD694;
      }
      goto L_089FD68C;
    }
L_089FD68C:
    ctx.gpr[31] = (0x089FD694u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 242u, 0x0899D9B8u>(ctx, &aot_mem) && ctx.pc == 0x089FD694u) goto L_089FD694;
    return;
L_089FD694:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FD6A8:
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2076));
    goto L_089FD6B0;
L_089FD6B0:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_089FD6D4;
      }
      goto L_089FD6BC;
    }
L_089FD6BC:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089FD6B0;
      }
      goto L_089FD6CC;
    }
L_089FD6CC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089FD6D8;
      }
      goto L_089FD6D4;
    }
L_089FD6D4:
    ctx.gpr[2] = (0u | 1u);
    goto L_089FD6D8;
L_089FD6D8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FD6E0:
    ctx.gpr[4] = (ctx.gpr[5] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FD748;
      }
      goto L_089FD6EC;
    }
L_089FD6EC:
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_089FD700;
      }
      goto L_089FD6F8;
    }
L_089FD6F8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089FD74C;
      }
      goto L_089FD700;
    }
L_089FD700:
    ctx.gpr[5] = (2230u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7808)));
    ctx.gpr[5] = (15948u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089FD73C;
      }
      goto L_089FD724;
    }
L_089FD724:
    ctx.gpr[5] = (2230u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-6976)));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089FD740;
      }
      goto L_089FD73C;
    }
L_089FD73C:
    ctx.gpr[4] = (0u | 1u);
    goto L_089FD740;
L_089FD740:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_089FD74C;
      }
      goto L_089FD748;
    }
L_089FD748:
    ctx.gpr[2] = (0u | 0u);
    goto L_089FD74C;
L_089FD74C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FD754:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-176));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), ctx.gpr[31]);
    ctx.gpr[31] = (0x089FD794u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0107_entry, 107u, 300u, 0x089B1038u>(ctx, &aot_mem) && ctx.pc == 0x089FD794u) goto L_089FD794;
    return;
L_089FD794:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (2u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FD838;
      }
      goto L_089FD7B0;
    }
L_089FD7B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 55u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089FD830;
      }
      goto L_089FD7C0;
    }
L_089FD7C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 54u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089FD828;
      }
      goto L_089FD7D0;
    }
L_089FD7D0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[31] = (0x089FD7F4u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 327u, 0x08855A5Cu>(ctx, &aot_mem) && ctx.pc == 0x089FD7F4u) goto L_089FD7F4;
    return;
L_089FD7F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(47) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[17] = (2230u << 16u);
      if (branch_taken) {
          goto L_089FE40C;
      }
      goto L_089FD810;
    }
L_089FD810:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-3296)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FD828:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FE48C;
      }
      goto L_089FD830;
    }
L_089FD830:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FE48C;
      }
      goto L_089FD838;
    }
L_089FD838:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FE48C;
      }
      goto L_089FD840;
    }
L_089FD840:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1376)));
    ctx.gpr[5] = (0u | 20u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[19] = (2230u << 16u);
      if (branch_taken) {
          goto L_089FDF08;
      }
      goto L_089FD850;
    }
L_089FD850:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(-7828)));
    ctx.gpr[20] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(228)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_089FDF08;
      }
      goto L_089FD880;
    }
L_089FD880:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(-7828)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(216)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(-7828)));
        goto L_089FDDD4;
    }
    goto L_089FD8B0;
L_089FD8B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[21] = (0u | 50u);
    if (ctx.gpr[4] != ctx.gpr[21]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
        goto L_089FDD90;
    }
    goto L_089FD8C0;
L_089FD8C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(504)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
        goto L_089FDD90;
    }
    goto L_089FD8D0;
L_089FD8D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[31] = (0x089FD8DCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(504)));
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x089FD8DCu) goto L_089FD8DC;
    return;
L_089FD8DC:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
        goto L_089FDD90;
    }
    goto L_089FD8E4;
L_089FD8E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(504)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    if (ctx.gpr[4] != ctx.gpr[21]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
        goto L_089FDD90;
    }
    goto L_089FD8F8;
L_089FD8F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.gpr[5] = (49864u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[31] = (0x089FD934u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 95u, 0x088C06D4u>(ctx, &aot_mem) && ctx.pc == 0x089FD934u) goto L_089FD934;
    return;
L_089FD934:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(112));
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
    ctx.gpr[31] = (0x089FD954u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 377u, 0x08AF5D84u>(ctx, &aot_mem) && ctx.pc == 0x089FD954u) goto L_089FD954;
    return;
L_089FD954:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15860)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15864)));
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x089FD96Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 514u, 0x08AF6790u>(ctx, &aot_mem) && ctx.pc == 0x089FD96Cu) goto L_089FD96C;
    return;
L_089FD96C:
    if (static_cast<std::int32_t>(ctx.gpr[2]) >= 0) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(-7828)));
        goto L_089FDCDC;
    }
    goto L_089FD974;
L_089FD974:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(78)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(-7828)));
        goto L_089FDCDC;
    }
    goto L_089FD980;
L_089FD980:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(78)));
    if (ctx.gpr[4] == ctx.gpr[18]) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(-7828)));
        goto L_089FDCDC;
    }
    goto L_089FD98C;
L_089FD98C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(78)));
    ctx.gpr[5] = (0u | 5u);
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(-7828)));
        goto L_089FDCDC;
    }
    goto L_089FD99C;
L_089FD99C:
    ctx.gpr[31] = (0x089FD9A4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 851u, 0x0889FE54u>(ctx, &aot_mem) && ctx.pc == 0x089FD9A4u) goto L_089FD9A4;
    return;
L_089FD9A4:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
        goto L_089FDC70;
    }
    goto L_089FD9AC;
L_089FD9AC:
    ctx.gpr[4] = (48972u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (49049u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.gpr[31] = (0x089FD9C8u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x089FD9C8u) goto L_089FD9C8;
    return;
L_089FD9C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[22];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.fpr[15] = ctx.fpr[15] - ctx.fpr[16];
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.fpr[19] = ctx.fpr[22] + ctx.fpr[13];
    ctx.fpr[16] = ctx.fpr[17] - ctx.fpr[18];
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    { const float fs = ctx.fpr[19]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[31] = (0x089FDA08u);
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 280u, 0x08A0E1E4u>(ctx, &aot_mem) && ctx.pc == 0x089FDA08u) goto L_089FDA08;
    return;
L_089FDA08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[6] = (0u | 23u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(96)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x089FDA24u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 101u, 0x0886476Cu>(ctx, &aot_mem) && ctx.pc == 0x089FDA24u) goto L_089FDA24;
    return;
L_089FDA24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (0u | 128u);
    ctx.gpr[31] = (0x089FDA34u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(504)));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 497u, 0x088B6C9Cu>(ctx, &aot_mem) && ctx.pc == 0x089FDA34u) goto L_089FDA34;
    return;
L_089FDA34:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089FDA40u);
    ctx.gpr[5] = (0u | 128u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 497u, 0x088B6C9Cu>(ctx, &aot_mem) && ctx.pc == 0x089FDA40u) goto L_089FDA40;
    return;
L_089FDA40:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(-7828)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(188)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 10 ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
        goto L_089FDC18;
    }
    goto L_089FDA6C;
L_089FDA6C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(-7828)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(224)));
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(251) ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
        goto L_089FDC18;
    }
    goto L_089FDA98;
L_089FDA98:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(-7828)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(224)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[7] = (ctx.gpr[5] < static_cast<std::uint32_t>(350) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(216), ctx.gpr[5]);
    ctx.gpr[4] = (17146u << 16u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_089FDB28;
      }
      goto L_089FDAD4;
    }
L_089FDAD4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(-7828)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(224)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-10));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(250) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (0u | 250u);
        goto L_089FDB04;
    }
    goto L_089FDB04;
L_089FDB04:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(-7828)));
    ctx.gpr[6] = (ctx.gpr[5] << 7u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[20]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(224), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089FDB78;
      }
      goto L_089FDB28;
    }
L_089FDB28:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(-7828)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(224)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-30));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(250) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (0u | 250u);
        goto L_089FDB58;
    }
    goto L_089FDB58;
L_089FDB58:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(-7828)));
    ctx.gpr[6] = (ctx.gpr[5] << 7u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(224), ctx.gpr[4]);
    goto L_089FDB78;
L_089FDB78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (16256u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(504)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1208)));
    ctx.fpr[12] = ctx.fpr[14] + ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
        goto L_089FDBA0;
    }
    goto L_089FDBA0;
L_089FDBA0:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(504)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[5] = (0u | 250u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1208), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(-7828)));
    ctx.gpr[6] = (ctx.gpr[4] << 7u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(224)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089FDC10;
      }
      goto L_089FDBE8;
    }
L_089FDBE8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(-7828)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[6] = (ctx.gpr[4] << 7u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(3000));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(216), ctx.gpr[5]);
    goto L_089FDC10;
L_089FDC10:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FDD84;
      }
      goto L_089FDC18;
    }
L_089FDC18:
    ctx.gpr[4] = (ctx.gpr[4] | 256u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(-7828)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(228), 0u);
    ctx.gpr[31] = (0x089FDC48u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 556u, 0x08886D10u>(ctx, &aot_mem) && ctx.pc == 0x089FDC48u) goto L_089FDC48;
    return;
L_089FDC48:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089FDC58u);
    ctx.gpr[5] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 924u, 0x088930F0u>(ctx, &aot_mem) && ctx.pc == 0x089FDC58u) goto L_089FDC58;
    return;
L_089FDC58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (0u | 127u);
    ctx.gpr[31] = (0x089FDC68u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(504)));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 497u, 0x088B6C9Cu>(ctx, &aot_mem) && ctx.pc == 0x089FDC68u) goto L_089FDC68;
    return;
L_089FDC68:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FDD84;
      }
      goto L_089FDC70;
    }
L_089FDC70:
    ctx.gpr[4] = (ctx.gpr[4] | 256u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(-7828)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(228), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (17146u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(504)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089FDCB4u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(1208), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 556u, 0x08886D10u>(ctx, &aot_mem) && ctx.pc == 0x089FDCB4u) goto L_089FDCB4;
    return;
L_089FDCB4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089FDCC4u);
    ctx.gpr[5] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 924u, 0x088930F0u>(ctx, &aot_mem) && ctx.pc == 0x089FDCC4u) goto L_089FDCC4;
    return;
L_089FDCC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (0u | 127u);
    ctx.gpr[31] = (0x089FDCD4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(504)));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 497u, 0x088B6C9Cu>(ctx, &aot_mem) && ctx.pc == 0x089FDCD4u) goto L_089FDCD4;
    return;
L_089FDCD4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FDD84;
      }
      goto L_089FDCDC;
    }
L_089FDCDC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[6] = (ctx.gpr[4] << 7u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(3000));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(224)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(216), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[6] < static_cast<std::uint32_t>(1000) ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(-7828)));
        goto L_089FDD64;
    }
    goto L_089FDD10;
L_089FDD10:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(-7828)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(224)));
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(251) ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(-7828)));
        goto L_089FDD64;
    }
    goto L_089FDD3C;
L_089FDD3C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(-7828)));
    ctx.gpr[5] = (0u | 250u);
    ctx.gpr[6] = (ctx.gpr[4] << 7u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(224), ctx.gpr[5]);
      if (branch_taken) {
          goto L_089FDD84;
      }
      goto L_089FDD64;
    }
L_089FDD64:
    ctx.gpr[5] = (0u | 1200u);
    ctx.gpr[6] = (ctx.gpr[4] << 7u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(224), ctx.gpr[5]);
    goto L_089FDD84;
L_089FDD84:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(-7828)));
      if (branch_taken) {
          goto L_089FDDD4;
      }
      goto L_089FDD8C;
    }
L_089FDD8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    goto L_089FDD90;
L_089FDD90:
    ctx.gpr[4] = (ctx.gpr[4] | 256u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(-7828)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(228), 0u);
    ctx.gpr[31] = (0x089FDDC0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 556u, 0x08886D10u>(ctx, &aot_mem) && ctx.pc == 0x089FDDC0u) goto L_089FDDC0;
    return;
L_089FDDC0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089FDDD0u);
    ctx.gpr[5] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 924u, 0x088930F0u>(ctx, &aot_mem) && ctx.pc == 0x089FDDD0u) goto L_089FDDD0;
    return;
L_089FDDD0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(-7828)));
    goto L_089FDDD4;
L_089FDDD4:
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(220)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FDF08;
      }
      goto L_089FDE00;
    }
L_089FDE00:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(-7828)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(188)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(-7828)));
        goto L_089FDEC0;
    }
    goto L_089FDE2C;
L_089FDE2C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(-7828)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(188)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 0 ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (0u | 0u);
        goto L_089FDE5C;
    }
    goto L_089FDE5C;
L_089FDE5C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(-7828)));
    ctx.gpr[6] = (ctx.gpr[5] << 7u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(188), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(228)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FDEB4;
      }
      goto L_089FDE88;
    }
L_089FDE88:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(-7828)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(228)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(1916)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(1916), static_cast<std::uint16_t>(ctx.gpr[5]));
    goto L_089FDEB4;
L_089FDEB4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(-7828)));
      if (branch_taken) {
          goto L_089FDEE4;
      }
      goto L_089FDEBC;
    }
L_089FDEBC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(-7828)));
    goto L_089FDEC0;
L_089FDEC0:
    ctx.gpr[5] = (0u | 250u);
    ctx.gpr[6] = (ctx.gpr[4] << 7u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(224), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(-7828)));
    goto L_089FDEE4;
L_089FDEE4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[6] = (ctx.gpr[4] << 7u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1000));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(220), ctx.gpr[5]);
    goto L_089FDF08;
L_089FDF08:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FE40C;
      }
      goto L_089FDF10;
    }
L_089FDF10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1328)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FDF2C;
      }
      goto L_089FDF1C;
    }
L_089FDF1C:
    ctx.gpr[31] = (0x089FDF24u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 222u, 0x089AD70Cu>(ctx, &aot_mem) && ctx.pc == 0x089FDF24u) goto L_089FDF24;
    return;
L_089FDF24:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FE40C;
      }
      goto L_089FDF2C;
    }
L_089FDF2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1328)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(1312));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    goto L_089FDF40;
L_089FDF40:
    ctx.gpr[31] = (0x089FDF48u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 508u, 0x089AA458u>(ctx, &aot_mem) && ctx.pc == 0x089FDF48u) goto L_089FDF48;
    return;
L_089FDF48:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FE1FC;
      }
      goto L_089FDF50;
    }
L_089FDF50:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[4] = (0u | 24u);
    if (ctx.gpr[5] == ctx.gpr[4]) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1176)));
        goto L_089FDFE4;
    }
    goto L_089FDF60;
L_089FDF60:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[6] = (0u | 25u);
    if (ctx.gpr[5] == ctx.gpr[6]) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1176)));
        goto L_089FDFE4;
    }
    goto L_089FDF70;
L_089FDF70:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[6] = (0u | 49u);
    if (ctx.gpr[5] == ctx.gpr[6]) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1176)));
        goto L_089FDFE4;
    }
    goto L_089FDF80;
L_089FDF80:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[6] = (0u | 39u);
    if (ctx.gpr[5] == ctx.gpr[6]) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1176)));
        goto L_089FDFE4;
    }
    goto L_089FDF90;
L_089FDF90:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[6] = (0u | 40u);
    if (ctx.gpr[5] == ctx.gpr[6]) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1176)));
        goto L_089FDFE4;
    }
    goto L_089FDFA0;
L_089FDFA0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[6] = (0u | 43u);
    if (ctx.gpr[5] == ctx.gpr[6]) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1176)));
        goto L_089FDFE4;
    }
    goto L_089FDFB0;
L_089FDFB0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[6] = (0u | 44u);
    if (ctx.gpr[5] == ctx.gpr[6]) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1176)));
        goto L_089FDFE4;
    }
    goto L_089FDFC0;
L_089FDFC0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[6] = (0u | 45u);
    if (ctx.gpr[5] == ctx.gpr[6]) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1176)));
        goto L_089FDFE4;
    }
    goto L_089FDFD0;
L_089FDFD0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[6] = (0u | 53u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089FDFF4;
      }
      goto L_089FDFE0;
    }
L_089FDFE0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1176)));
    goto L_089FDFE4;
L_089FDFE4:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FDFF4;
      }
      goto L_089FDFEC;
    }
L_089FDFEC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1176), 0u);
      if (branch_taken) {
          goto L_089FE40C;
      }
      goto L_089FDFF4;
    }
L_089FDFF4:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1360)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_089FE090;
      }
      goto L_089FE000;
    }
L_089FE000:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1362))))));
    ctx.gpr[5] = (2274u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(19632));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FE07C;
      }
      goto L_089FE020;
    }
L_089FE020:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1362))))));
    ctx.gpr[5] = (ctx.gpr[5] << 6u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(64), ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (0u | 18u);
      if (branch_taken) {
          goto L_089FE074;
      }
      goto L_089FE040;
    }
L_089FE040:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FE068;
      }
      goto L_089FE04C;
    }
L_089FE04C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
        goto L_089FE068;
    }
    goto L_089FE058;
L_089FE058:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    ctx.gpr[31] = (0x089FE064u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(912));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 700u, 0x0883B934u>(ctx, &aot_mem) && ctx.pc == 0x089FE064u) goto L_089FE064;
    return;
L_089FE064:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
    goto L_089FE068;
L_089FE068:
    ctx.gpr[31] = (0x089FE070u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 404u, 0x089A1C4Cu>(ctx, &aot_mem) && ctx.pc == 0x089FE070u) goto L_089FE070;
    return;
L_089FE070:
    ctx.gpr[4] = (0u | 18u);
    goto L_089FE074;
L_089FE074:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(844), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089FE1FC;
      }
      goto L_089FE07C;
    }
L_089FE07C:
    ctx.gpr[31] = (0x089FE084u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 222u, 0x089AD70Cu>(ctx, &aot_mem) && ctx.pc == 0x089FE084u) goto L_089FE084;
    return;
L_089FE084:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(1362), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089FE1FC;
      }
      goto L_089FE090;
    }
L_089FE090:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[6] = (0u | 9u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089FE1FC;
      }
      goto L_089FE0A0;
    }
L_089FE0A0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[6] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089FE1FC;
      }
      goto L_089FE0B0;
    }
L_089FE0B0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FE114;
      }
      goto L_089FE0BC;
    }
L_089FE0BC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[6] = (0u | 15u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089FE114;
      }
      goto L_089FE0CC;
    }
L_089FE0CC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1240)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1244)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[12] = std::sqrt(ctx.fpr[12]);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[20])) && ctx.fpr[12] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089FE1FC;
      }
      goto L_089FE0F4;
    }
L_089FE0F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_089FE1FC;
      }
      goto L_089FE104;
    }
L_089FE104:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1248)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089FE1FC;
      }
      goto L_089FE114;
    }
L_089FE114:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[6] = (0u | 12u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089FE158;
      }
      goto L_089FE124;
    }
L_089FE124:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FE158;
      }
      goto L_089FE130;
    }
L_089FE130:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_089FE158;
      }
      goto L_089FE140;
    }
L_089FE140:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089FE150u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(852)));
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 538u, 0x089A246Cu>(ctx, &aot_mem) && ctx.pc == 0x089FE150u) goto L_089FE150;
    return;
L_089FE150:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FE1FC;
      }
      goto L_089FE158;
    }
L_089FE158:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089FE1E4;
      }
      goto L_089FE164;
    }
L_089FE164:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 25u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089FE1E4;
      }
      goto L_089FE174;
    }
L_089FE174:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 49u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089FE1E4;
      }
      goto L_089FE184;
    }
L_089FE184:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 39u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089FE1E4;
      }
      goto L_089FE194;
    }
L_089FE194:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 40u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089FE1E4;
      }
      goto L_089FE1A4;
    }
L_089FE1A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 43u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089FE1E4;
      }
      goto L_089FE1B4;
    }
L_089FE1B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 44u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089FE1E4;
      }
      goto L_089FE1C4;
    }
L_089FE1C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 45u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089FE1E4;
      }
      goto L_089FE1D4;
    }
L_089FE1D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 53u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089FE1F4;
      }
      goto L_089FE1E4;
    }
L_089FE1E4:
    ctx.gpr[31] = (0x089FE1ECu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 748u, 0x0899FCA0u>(ctx, &aot_mem) && ctx.pc == 0x089FE1ECu) goto L_089FE1EC;
    return;
L_089FE1EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FE1FC;
      }
      goto L_089FE1F4;
    }
L_089FE1F4:
    ctx.gpr[31] = (0x089FE1FCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 222u, 0x089AD70Cu>(ctx, &aot_mem) && ctx.pc == 0x089FE1FCu) goto L_089FE1FC;
    return;
L_089FE1FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FE40C;
      }
      goto L_089FE204;
    }
L_089FE204:
    ctx.gpr[31] = (0x089FE20Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 746u, 0x08A2F708u>(ctx, &aot_mem) && ctx.pc == 0x089FE20Cu) goto L_089FE20C;
    return;
L_089FE20C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FE21C;
      }
      goto L_089FE214;
    }
L_089FE214:
    ctx.gpr[31] = (0x089FE21Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 819u, 0x089ABE0Cu>(ctx, &aot_mem) && ctx.pc == 0x089FE21Cu) goto L_089FE21C;
    return;
L_089FE21C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FE40C;
      }
      goto L_089FE224;
    }
L_089FE224:
    ctx.gpr[31] = (0x089FE22Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 407u, 0x089A1C74u>(ctx, &aot_mem) && ctx.pc == 0x089FE22Cu) goto L_089FE22C;
    return;
L_089FE22C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FE40C;
      }
      goto L_089FE234;
    }
L_089FE234:
    ctx.gpr[31] = (0x089FE23Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 553u, 0x089A2534u>(ctx, &aot_mem) && ctx.pc == 0x089FE23Cu) goto L_089FE23C;
    return;
L_089FE23C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FE28C;
      }
      goto L_089FE244;
    }
L_089FE244:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (0u | 19u);
      if (branch_taken) {
          goto L_089FE288;
      }
      goto L_089FE254;
    }
L_089FE254:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FE27C;
      }
      goto L_089FE260;
    }
L_089FE260:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
        goto L_089FE27C;
    }
    goto L_089FE26C;
L_089FE26C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    ctx.gpr[31] = (0x089FE278u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(912));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 700u, 0x0883B934u>(ctx, &aot_mem) && ctx.pc == 0x089FE278u) goto L_089FE278;
    return;
L_089FE278:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
    goto L_089FE27C;
L_089FE27C:
    ctx.gpr[31] = (0x089FE284u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 404u, 0x089A1C4Cu>(ctx, &aot_mem) && ctx.pc == 0x089FE284u) goto L_089FE284;
    return;
L_089FE284:
    ctx.gpr[4] = (0u | 19u);
    goto L_089FE288;
L_089FE288:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(844), ctx.gpr[4]);
    goto L_089FE28C;
L_089FE28C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FE40C;
      }
      goto L_089FE294;
    }
L_089FE294:
    ctx.gpr[31] = (0x089FE29Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 567u, 0x089A26C4u>(ctx, &aot_mem) && ctx.pc == 0x089FE29Cu) goto L_089FE29C;
    return;
L_089FE29C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FE2E4;
      }
      goto L_089FE2A4;
    }
L_089FE2A4:
    ctx.gpr[31] = (0x089FE2ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x089FE2ACu) goto L_089FE2AC;
    return;
L_089FE2AC:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    if (static_cast<std::int32_t>(ctx.gpr[4]) >= 0) {
    ctx.gpr[4] = (ctx.gpr[4] & 7u);
        goto L_089FE2D0;
    }
    goto L_089FE2B8;
L_089FE2B8:
    ctx.gpr[4] = (0u - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] & 7u);
    ctx.gpr[4] = (0u - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 24u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 24u));
      if (branch_taken) {
          goto L_089FE2D8;
      }
      goto L_089FE2D0;
    }
L_089FE2D0:
    ctx.gpr[4] = (ctx.gpr[4] << 24u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 24u));
    goto L_089FE2D8;
L_089FE2D8:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x089FE2E4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 270u, 0x089A13B4u>(ctx, &aot_mem) && ctx.pc == 0x089FE2E4u) goto L_089FE2E4;
    return;
L_089FE2E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FE40C;
      }
      goto L_089FE2EC;
    }
L_089FE2EC:
    ctx.gpr[31] = (0x089FE2F4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 915u, 0x089A3D98u>(ctx, &aot_mem) && ctx.pc == 0x089FE2F4u) goto L_089FE2F4;
    return;
L_089FE2F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FE40C;
      }
      goto L_089FE2FC;
    }
L_089FE2FC:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[31] = (0x089FE308u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 408u, 0x0899E4A0u>(ctx, &aot_mem) && ctx.pc == 0x089FE308u) goto L_089FE308;
    return;
L_089FE308:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1868)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u | 37u);
      if (branch_taken) {
          goto L_089FE35C;
      }
      goto L_089FE31C;
    }
L_089FE31C:
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_089FE320;
L_089FE320:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1828)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1376)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(1376)));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_089FE348;
      }
      goto L_089FE334;
    }
L_089FE334:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1828)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(844)));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089FE348;
      }
      goto L_089FE344;
    }
L_089FE344:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_089FE348;
L_089FE348:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1868)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089FE320;
      }
      goto L_089FE35C;
    }
L_089FE35C:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FE404;
      }
      goto L_089FE368;
    }
L_089FE368:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1868)));
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (0u | 5u);
      if (branch_taken) {
          goto L_089FE404;
      }
      goto L_089FE37C;
    }
L_089FE37C:
    ctx.gpr[20] = (0u | 11u);
    ctx.gpr[23] = (0u | 37u);
    ctx.gpr[22] = (ctx.gpr[16] | 0u);
    goto L_089FE388;
L_089FE388:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(1828)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1376)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1376)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089FE3F0;
      }
      goto L_089FE39C;
    }
L_089FE39C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(1828)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_089FE3F0;
      }
      goto L_089FE3AC;
    }
L_089FE3AC:
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(1828)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(844)));
    if (ctx.gpr[4] != ctx.gpr[20]) {
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(844), ctx.gpr[23]);
        goto L_089FE3F0;
    }
    goto L_089FE3BC;
L_089FE3BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(912)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FE3E4;
      }
      goto L_089FE3C8;
    }
L_089FE3C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(912)));
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(912), 0u);
        goto L_089FE3E4;
    }
    goto L_089FE3D4;
L_089FE3D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(912)));
    ctx.gpr[31] = (0x089FE3E0u);
    ctx.gpr[5] = (ctx.gpr[30] + static_cast<std::uint32_t>(912));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 700u, 0x0883B934u>(ctx, &aot_mem) && ctx.pc == 0x089FE3E0u) goto L_089FE3E0;
    return;
L_089FE3E0:
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(912), 0u);
    goto L_089FE3E4;
L_089FE3E4:
    ctx.gpr[31] = (0x089FE3ECu);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 404u, 0x089A1C4Cu>(ctx, &aot_mem) && ctx.pc == 0x089FE3ECu) goto L_089FE3EC;
    return;
L_089FE3EC:
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(844), ctx.gpr[23]);
    goto L_089FE3F0;
L_089FE3F0:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1868)));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089FE388;
      }
      goto L_089FE404;
    }
L_089FE404:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FE40C;
      }
      goto L_089FE40C;
    }
L_089FE40C:
    ctx.gpr[31] = (0x089FE414u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 340u, 0x0899E1A0u>(ctx, &aot_mem) && ctx.pc == 0x089FE414u) goto L_089FE414;
    return;
L_089FE414:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FE424;
      }
      goto L_089FE41C;
    }
L_089FE41C:
    ctx.gpr[31] = (0x089FE424u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089FE4C8;
L_089FE424:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(428)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_089FE440;
      }
      goto L_089FE430;
    }
L_089FE430:
    ctx.gpr[31] = (0x089FE438u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089FF0E4;
L_089FE438:
    ctx.gpr[31] = (0x089FE440u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089FF598;
L_089FE440:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1420)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1240)));
        goto L_089FE460;
    }
    goto L_089FE454;
L_089FE454:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1416), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1420), 0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1240)));
    goto L_089FE460;
L_089FE460:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1244)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[12] = std::sqrt(ctx.fpr[12]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089FE48C;
      }
      goto L_089FE484;
    }
L_089FE484:
    ctx.gpr[31] = (0x089FE48Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 436u, 0x0899E69Cu>(ctx, &aot_mem) && ctx.pc == 0x089FE48Cu) goto L_089FE48C;
    return;
L_089FE48C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
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
L_089FE4C8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1396)));
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-7868)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FEF80;
      }
      goto L_089FE4F8;
    }
L_089FE4F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FE518;
      }
      goto L_089FE504;
    }
L_089FE504:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (2u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FEF80;
      }
      goto L_089FE518;
    }
L_089FE518:
    ctx.gpr[31] = (0x089FE520u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 340u, 0x0899E1A0u>(ctx, &aot_mem) && ctx.pc == 0x089FE520u) goto L_089FE520;
    return;
L_089FE520:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FEF80;
      }
      goto L_089FE528;
    }
L_089FE528:
    ctx.gpr[31] = (0x089FE530u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 478u, 0x0899EB98u>(ctx, &aot_mem) && ctx.pc == 0x089FE530u) goto L_089FE530;
    return;
L_089FE530:
    ctx.gpr[31] = (0x089FE538u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 487u, 0x0899EC18u>(ctx, &aot_mem) && ctx.pc == 0x089FE538u) goto L_089FE538;
    return;
L_089FE538:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1972)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FF0CC;
      }
      goto L_089FE544;
    }
L_089FE544:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1976)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FF0CC;
      }
      goto L_089FE558;
    }
L_089FE558:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1972), 0u);
    ctx.gpr[4] = (512u << 16u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1976), 0u);
      if (branch_taken) {
          goto L_089FEB14;
      }
      goto L_089FE568;
    }
L_089FE568:
    ctx.gpr[6] = (128u << 16u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_089FE934;
      }
      goto L_089FE574;
    }
L_089FE574:
    ctx.gpr[6] = (16u << 16u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(640)));
      if (branch_taken) {
          goto L_089FEDB0;
      }
      goto L_089FE580;
    }
L_089FE580:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FE92C;
      }
      goto L_089FE588;
    }
L_089FE588:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FE5E8;
      }
      goto L_089FE590;
    }
L_089FE590:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[5] = (ctx.gpr[5] & 14u);
    ctx.gpr[5] = (ctx.gpr[5] >> 1u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089FE5E8;
      }
      goto L_089FE5A8;
    }
L_089FE5A8:
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[15];
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(428)));
    ctx.gpr[6] = (0u | 2u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[14];
      if (branch_taken) {
          goto L_089FE5F0;
      }
      goto L_089FE5E0;
    }
L_089FE5E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FE618;
      }
      goto L_089FE5E8;
    }
L_089FE5E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FEF78;
      }
      goto L_089FE5F0;
    }
L_089FE5F0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(416)));
    ctx.gpr[5] = (ctx.gpr[5] & 4u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FE618;
      }
      goto L_089FE600;
    }
L_089FE600:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 10000u);
    ctx.gpr[31] = (0x089FE610u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 656u, 0x088875FCu>(ctx, &aot_mem) && ctx.pc == 0x089FE610u) goto L_089FE610;
    return;
L_089FE610:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FE90C;
      }
      goto L_089FE618;
    }
L_089FE618:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(38))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(36))))));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FE6D0;
      }
      goto L_089FE630;
    }
L_089FE630:
    ctx.gpr[5] = (17505u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[17] = (8192u << 16u);
      if (branch_taken) {
          goto L_089FE688;
      }
      goto L_089FE648;
    }
L_089FE648:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089FE658u);
    ctx.gpr[6] = (0u | 10000u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 377u, 0x089A1A5Cu>(ctx, &aot_mem) && ctx.pc == 0x089FE658u) goto L_089FE658;
    return;
L_089FE658:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(412)));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(412), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1176), 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089FE680u);
    ctx.gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 538u, 0x089A246Cu>(ctx, &aot_mem) && ctx.pc == 0x089FE680u) goto L_089FE680;
    return;
L_089FE680:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FE90C;
      }
      goto L_089FE688;
    }
L_089FE688:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089FE698u);
    ctx.gpr[6] = (0u | 5000u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 377u, 0x089A1A5Cu>(ctx, &aot_mem) && ctx.pc == 0x089FE698u) goto L_089FE698;
    return;
L_089FE698:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(412)));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[4] = (57344u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(412), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1176), 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089FE6C8u);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 538u, 0x089A246Cu>(ctx, &aot_mem) && ctx.pc == 0x089FE6C8u) goto L_089FE6C8;
    return;
L_089FE6C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FE90C;
      }
      goto L_089FE6D0;
    }
L_089FE6D0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(37))))));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FE85C;
      }
      goto L_089FE6E0;
    }
L_089FE6E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FE7F4;
      }
      goto L_089FE6EC;
    }
L_089FE6EC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[31] = (0x089FE708u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 138u, 0x08850D9Cu>(ctx, &aot_mem) && ctx.pc == 0x089FE708u) goto L_089FE708;
    return;
L_089FE708:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FE7F4;
      }
      goto L_089FE710;
    }
L_089FE710:
    ctx.gpr[31] = (0x089FE718u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x089FE718u) goto L_089FE718;
    return;
L_089FE718:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FE758;
      }
      goto L_089FE720;
    }
L_089FE720:
    ctx.gpr[31] = (0x089FE728u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 837u, 0x089A380Cu>(ctx, &aot_mem) && ctx.pc == 0x089FE728u) goto L_089FE728;
    return;
L_089FE728:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FE758;
      }
      goto L_089FE730;
    }
L_089FE730:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(416)));
    ctx.gpr[4] = (ctx.gpr[4] & 256u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FE758;
      }
      goto L_089FE740;
    }
L_089FE740:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(640)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089FE750u);
    ctx.gpr[5] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 924u, 0x088930F0u>(ctx, &aot_mem) && ctx.pc == 0x089FE750u) goto L_089FE750;
    return;
L_089FE750:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FE90C;
      }
      goto L_089FE758;
    }
L_089FE758:
    ctx.gpr[31] = (0x089FE760u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x089FE760u) goto L_089FE760;
    return;
L_089FE760:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FE7DC;
      }
      goto L_089FE768;
    }
L_089FE768:
    ctx.gpr[31] = (0x089FE770u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x089FE770u) goto L_089FE770;
    return;
L_089FE770:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2088)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_089FE7DC;
      }
      goto L_089FE77C;
    }
L_089FE77C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(640)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089FE78Cu);
    ctx.gpr[6] = (0u | 5000u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 377u, 0x089A1A5Cu>(ctx, &aot_mem) && ctx.pc == 0x089FE78Cu) goto L_089FE78C;
    return;
L_089FE78C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (8192u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[4] = (17505u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1176), 0u);
      if (branch_taken) {
          goto L_089FE7C8;
      }
      goto L_089FE7B4;
    }
L_089FE7B4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089FE7C0u);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 538u, 0x089A246Cu>(ctx, &aot_mem) && ctx.pc == 0x089FE7C0u) goto L_089FE7C0;
    return;
L_089FE7C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FE90C;
      }
      goto L_089FE7C8;
    }
L_089FE7C8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089FE7D4u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 538u, 0x089A246Cu>(ctx, &aot_mem) && ctx.pc == 0x089FE7D4u) goto L_089FE7D4;
    return;
L_089FE7D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FE90C;
      }
      goto L_089FE7DC;
    }
L_089FE7DC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(640)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089FE7ECu);
    ctx.gpr[5] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 924u, 0x088930F0u>(ctx, &aot_mem) && ctx.pc == 0x089FE7ECu) goto L_089FE7EC;
    return;
L_089FE7EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FE90C;
      }
      goto L_089FE7F4;
    }
L_089FE7F4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(640)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089FE804u);
    ctx.gpr[6] = (0u | 5000u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 377u, 0x089A1A5Cu>(ctx, &aot_mem) && ctx.pc == 0x089FE804u) goto L_089FE804;
    return;
L_089FE804:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[17] = (8192u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[4] = (17352u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1176), 0u);
      if (branch_taken) {
          goto L_089FE848;
      }
      goto L_089FE82C;
    }
L_089FE82C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089FE838u);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 538u, 0x089A246Cu>(ctx, &aot_mem) && ctx.pc == 0x089FE838u) goto L_089FE838;
    return;
L_089FE838:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(412)));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[17]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(412), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089FE90C;
      }
      goto L_089FE848;
    }
L_089FE848:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089FE854u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 538u, 0x089A246Cu>(ctx, &aot_mem) && ctx.pc == 0x089FE854u) goto L_089FE854;
    return;
L_089FE854:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FE90C;
      }
      goto L_089FE85C;
    }
L_089FE85C:
    ctx.gpr[31] = (0x089FE864u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x089FE864u) goto L_089FE864;
    return;
L_089FE864:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_089FE87C;
      }
      goto L_089FE86C;
    }
L_089FE86C:
    ctx.gpr[31] = (0x089FE874u);
    ctx.gpr[5] = (0u | 1u);
    goto L_089FD390;
L_089FE874:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FE90C;
      }
      goto L_089FE87C;
    }
L_089FE87C:
    ctx.gpr[4] = (17505u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (8192u << 16u);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(640)));
      if (branch_taken) {
          goto L_089FE8C8;
      }
      goto L_089FE898;
    }
L_089FE898:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089FE8A8u);
    ctx.gpr[6] = (0u | 10000u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 377u, 0x089A1A5Cu>(ctx, &aot_mem) && ctx.pc == 0x089FE8A8u) goto L_089FE8A8;
    return;
L_089FE8A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(412)));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(412), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1176), 0u);
      if (branch_taken) {
          goto L_089FE90C;
      }
      goto L_089FE8C8;
    }
L_089FE8C8:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089FE8F0u);
    ctx.gpr[6] = (0u | 5000u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 353u, 0x089A18ACu>(ctx, &aot_mem) && ctx.pc == 0x089FE8F0u) goto L_089FE8F0;
    return;
L_089FE8F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1176), 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089FE90Cu);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 538u, 0x089A246Cu>(ctx, &aot_mem) && ctx.pc == 0x089FE90Cu) goto L_089FE90C;
    return;
L_089FE90C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(640)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x089FE920u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 77u, 0x089A0598u>(ctx, &aot_mem) && ctx.pc == 0x089FE920u) goto L_089FE920;
    return;
L_089FE920:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089FE92Cu);
    ctx.gpr[5] = (0u | 500u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 787u, 0x0899FEE8u>(ctx, &aot_mem) && ctx.pc == 0x089FE92Cu) goto L_089FE92C;
    return;
L_089FE92C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FEF78;
      }
      goto L_089FE934;
    }
L_089FE934:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(644)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(648)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[12];
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(428)));
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[15];
    ctx.gpr[7] = (17352u << 16u);
    ctx.gpr[6] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[16];
      if (branch_taken) {
          goto L_089FE9AC;
      }
      goto L_089FE974;
    }
L_089FE974:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(416)));
    ctx.gpr[7] = (ctx.gpr[7] & 4u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FE9AC;
      }
      goto L_089FE984;
    }
L_089FE984:
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089FE9AC;
      }
      goto L_089FE994;
    }
L_089FE994:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 10000u);
    ctx.gpr[31] = (0x089FE9A4u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 656u, 0x088875FCu>(ctx, &aot_mem) && ctx.pc == 0x089FE9A4u) goto L_089FE9A4;
    return;
L_089FE9A4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FEB0C;
      }
      goto L_089FE9AC;
    }
L_089FE9AC:
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089FEA20;
      }
      goto L_089FE9BC;
    }
L_089FE9BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(412)));
    ctx.gpr[5] = (8192u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(412), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(644));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089FE9DCu);
    ctx.gpr[6] = (0u | 2000u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 353u, 0x089A18ACu>(ctx, &aot_mem) && ctx.pc == 0x089FE9DCu) goto L_089FE9DC;
    return;
L_089FE9DC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(644)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(648)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[12];
    ctx.gpr[31] = (0x089FE9F8u);
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[15];
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 282u, 0x089D962Cu>(ctx, &aot_mem) && ctx.pc == 0x089FE9F8u) goto L_089FE9F8;
    return;
L_089FE9F8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x089FEA0Cu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 71u, 0x089A04F8u>(ctx, &aot_mem) && ctx.pc == 0x089FEA0Cu) goto L_089FEA0C;
    return;
L_089FEA0C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089FEA18u);
    ctx.gpr[5] = (0u | 500u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 787u, 0x0899FEE8u>(ctx, &aot_mem) && ctx.pc == 0x089FEA18u) goto L_089FEA18;
    return;
L_089FEA18:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FEB0C;
      }
      goto L_089FEA20;
    }
L_089FEA20:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[8] = (17608u << 16u);
    ctx.gpr[4] = (ctx.gpr[7] & ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[8]);
      if (branch_taken) {
          goto L_089FEA84;
      }
      goto L_089FEA34;
    }
L_089FEA34:
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089FEA84;
      }
      goto L_089FEA44;
    }
L_089FEA44:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089FEB0C;
      }
      goto L_089FEA4C;
    }
L_089FEA4C:
    ctx.gpr[31] = (0x089FEA54u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 837u, 0x089A380Cu>(ctx, &aot_mem) && ctx.pc == 0x089FEA54u) goto L_089FEA54;
    return;
L_089FEA54:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FEB0C;
      }
      goto L_089FEA5C;
    }
L_089FEA5C:
    ctx.gpr[8] = (16576u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(644));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 13u);
    ctx.gpr[31] = (0x089FEA7Cu);
    ctx.gpr[7] = (0u | 30000u);
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 192u, 0x088D4F00u>(ctx, &aot_mem) && ctx.pc == 0x089FEA7Cu) goto L_089FEA7C;
    return;
L_089FEA7C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FEB0C;
      }
      goto L_089FEA84;
    }
L_089FEA84:
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089FEB0C;
      }
      goto L_089FEA94;
    }
L_089FEA94:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) ^ 0x80000000u);
    ctx.gpr[31] = (0x089FEAA0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 282u, 0x089D962Cu>(ctx, &aot_mem) && ctx.pc == 0x089FEAA0u) goto L_089FEAA0;
    return;
L_089FEAA0:
    ctx.gpr[31] = (0x089FEAA8u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 253u, 0x08A1D3ECu>(ctx, &aot_mem) && ctx.pc == 0x089FEAA8u) goto L_089FEAA8;
    return;
L_089FEAA8:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
        goto L_089FEAD4;
    }
    goto L_089FEAC0;
L_089FEAC0:
    ctx.gpr[4] = (16585u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[12];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    goto L_089FEAD4;
L_089FEAD4:
    ctx.gpr[4] = (15872u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] << 24u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 24u));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] << 24u);
    ctx.gpr[31] = (0x089FEB0Cu);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 24u));
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 270u, 0x089A13B4u>(ctx, &aot_mem) && ctx.pc == 0x089FEB0Cu) goto L_089FEB0C;
    return;
L_089FEB0C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FEF78;
      }
      goto L_089FEB14;
    }
L_089FEB14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(656)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FEDA8;
      }
      goto L_089FEB20;
    }
L_089FEB20:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_089FEDA8;
      }
      goto L_089FEB28;
    }
L_089FEB28:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[14];
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[15];
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(428)));
    ctx.gpr[6] = (0u | 2u);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[12];
      if (branch_taken) {
          goto L_089FEBA8;
      }
      goto L_089FEB6C;
    }
L_089FEB6C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(416)));
    ctx.gpr[5] = (ctx.gpr[5] & 4u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (16840u << 16u);
      if (branch_taken) {
          goto L_089FEBA8;
      }
      goto L_089FEB7C;
    }
L_089FEB7C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089FEBA8;
      }
      goto L_089FEB90;
    }
L_089FEB90:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 10000u);
    ctx.gpr[31] = (0x089FEBA0u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 656u, 0x088875FCu>(ctx, &aot_mem) && ctx.pc == 0x089FEBA0u) goto L_089FEBA0;
    return;
L_089FEBA0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FEDA8;
      }
      goto L_089FEBA8;
    }
L_089FEBA8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(412)));
    ctx.gpr[6] = (1u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FED60;
      }
      goto L_089FEBBC;
    }
L_089FEBBC:
    ctx.gpr[31] = (0x089FEBC4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 837u, 0x089A380Cu>(ctx, &aot_mem) && ctx.pc == 0x089FEBC4u) goto L_089FEBC4;
    return;
L_089FEBC4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FEBE0;
      }
      goto L_089FEBCC;
    }
L_089FEBCC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(656)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1376)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1376)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089FED60;
      }
      goto L_089FEBE0;
    }
L_089FEBE0:
    ctx.gpr[31] = (0x089FEBE8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 837u, 0x089A380Cu>(ctx, &aot_mem) && ctx.pc == 0x089FEBE8u) goto L_089FEBE8;
    return;
L_089FEBE8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(656)));
      if (branch_taken) {
          goto L_089FEC08;
      }
      goto L_089FEBF0;
    }
L_089FEBF0:
    ctx.gpr[5] = (16840u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089FED28;
      }
      goto L_089FEC08;
    }
L_089FEC08:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(640)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_089FECF8;
      }
      goto L_089FEC14;
    }
L_089FEC14:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(68)));
    ctx.gpr[8] = (0u | 3u);
    ctx.gpr[7] = (ctx.gpr[7] & 14u);
    ctx.gpr[7] = (ctx.gpr[7] >> 1u);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[8];
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_089FECF8;
      }
      goto L_089FEC2C;
    }
L_089FEC2C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[7]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[7]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[6]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[6]);
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.fpr[16] = ctx.fpr[16] - ctx.fpr[17];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = ctx.fpr[18] - ctx.fpr[19];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[4] = (17096u << 16u);
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089FECF8;
      }
      goto L_089FECF4;
    }
L_089FECF4:
    ctx.gpr[5] = (0u | 0u);
    goto L_089FECF8;
L_089FECF8:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FED20;
      }
      goto L_089FED00;
    }
L_089FED00:
    ctx.gpr[8] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 6u);
    ctx.gpr[31] = (0x089FED20u);
    ctx.gpr[7] = (0u | 20000u);
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 192u, 0x088D4F00u>(ctx, &aot_mem) && ctx.pc == 0x089FED20u) goto L_089FED20;
    return;
L_089FED20:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FEDA8;
      }
      goto L_089FED28;
    }
L_089FED28:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089FED38u);
    ctx.gpr[6] = (0u | 5000u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 377u, 0x089A1A5Cu>(ctx, &aot_mem) && ctx.pc == 0x089FED38u) goto L_089FED38;
    return;
L_089FED38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (8192u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1176), 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089FED58u);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 538u, 0x089A246Cu>(ctx, &aot_mem) && ctx.pc == 0x089FED58u) goto L_089FED58;
    return;
L_089FED58:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FEDA8;
      }
      goto L_089FED60;
    }
L_089FED60:
    ctx.gpr[5] = (16840u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089FEDA8;
      }
      goto L_089FED78;
    }
L_089FED78:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089FED88u);
    ctx.gpr[6] = (0u | 2000u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 377u, 0x089A1A5Cu>(ctx, &aot_mem) && ctx.pc == 0x089FED88u) goto L_089FED88;
    return;
L_089FED88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (8192u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1176), 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089FEDA8u);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 538u, 0x089A246Cu>(ctx, &aot_mem) && ctx.pc == 0x089FEDA8u) goto L_089FEDA8;
    return;
L_089FEDA8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FEF78;
      }
      goto L_089FEDB0;
    }
L_089FEDB0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FEF78;
      }
      goto L_089FEDB8;
    }
L_089FEDB8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[5] = (ctx.gpr[5] & 14u);
    ctx.gpr[5] = (ctx.gpr[5] >> 1u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089FEF78;
      }
      goto L_089FEDD0;
    }
L_089FEDD0:
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(37))))));
    ctx.gpr[7] = (0u | 100u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(36))))));
    ctx.gpr[5] = (ctx.gpr[7] - ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
        goto L_089FEE0C;
    }
    goto L_089FEDF8;
L_089FEDF8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1376)));
    ctx.gpr[6] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089FEE5C;
      }
      goto L_089FEE08;
    }
L_089FEE08:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    goto L_089FEE0C;
L_089FEE0C:
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FEE5C;
      }
      goto L_089FEE18;
    }
L_089FEE18:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1924)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FEE5C;
      }
      goto L_089FEE24;
    }
L_089FEE24:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089FEE34u);
    ctx.gpr[6] = (0u | 10000u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 377u, 0x089A1A5Cu>(ctx, &aot_mem) && ctx.pc == 0x089FEE34u) goto L_089FEE34;
    return;
L_089FEE34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (8192u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1176), 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089FEE54u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 538u, 0x089A246Cu>(ctx, &aot_mem) && ctx.pc == 0x089FEE54u) goto L_089FEE54;
    return;
L_089FEE54:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FEF78;
      }
      goto L_089FEE5C;
    }
L_089FEE5C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[6] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[31] = (0x089FEE78u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 138u, 0x08850D9Cu>(ctx, &aot_mem) && ctx.pc == 0x089FEE78u) goto L_089FEE78;
    return;
L_089FEE78:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FEEA4;
      }
      goto L_089FEE80;
    }
L_089FEE80:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[31] = (0x089FEE9Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 138u, 0x08850D9Cu>(ctx, &aot_mem) && ctx.pc == 0x089FEE9Cu) goto L_089FEE9C;
    return;
L_089FEE9C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FEF78;
      }
      goto L_089FEEA4;
    }
L_089FEEA4:
    ctx.gpr[31] = (0x089FEEACu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x089FEEACu) goto L_089FEEAC;
    return;
L_089FEEAC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FEEEC;
      }
      goto L_089FEEB4;
    }
L_089FEEB4:
    ctx.gpr[31] = (0x089FEEBCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 837u, 0x089A380Cu>(ctx, &aot_mem) && ctx.pc == 0x089FEEBCu) goto L_089FEEBC;
    return;
L_089FEEBC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FEEEC;
      }
      goto L_089FEEC4;
    }
L_089FEEC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(416)));
    ctx.gpr[4] = (ctx.gpr[4] & 256u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FEEEC;
      }
      goto L_089FEED4;
    }
L_089FEED4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(640)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089FEEE4u);
    ctx.gpr[5] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 924u, 0x088930F0u>(ctx, &aot_mem) && ctx.pc == 0x089FEEE4u) goto L_089FEEE4;
    return;
L_089FEEE4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FEF78;
      }
      goto L_089FEEEC;
    }
L_089FEEEC:
    ctx.gpr[31] = (0x089FEEF4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x089FEEF4u) goto L_089FEEF4;
    return;
L_089FEEF4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FEF58;
      }
      goto L_089FEEFC;
    }
L_089FEEFC:
    ctx.gpr[31] = (0x089FEF04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x089FEF04u) goto L_089FEF04;
    return;
L_089FEF04:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2088)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_089FEF58;
      }
      goto L_089FEF10;
    }
L_089FEF10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 9u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 8u);
      if (branch_taken) {
          goto L_089FEF28;
      }
      goto L_089FEF20;
    }
L_089FEF20:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089FEF50;
      }
      goto L_089FEF28;
    }
L_089FEF28:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(640)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089FEF38u);
    ctx.gpr[6] = (0u | 10000u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 377u, 0x089A1A5Cu>(ctx, &aot_mem) && ctx.pc == 0x089FEF38u) goto L_089FEF38;
    return;
L_089FEF38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (8192u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1176), 0u);
      if (branch_taken) {
          goto L_089FEF78;
      }
      goto L_089FEF50;
    }
L_089FEF50:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FEF78;
      }
      goto L_089FEF58;
    }
L_089FEF58:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27772)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FEF78;
      }
      goto L_089FEF68;
    }
L_089FEF68:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(640)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089FEF78u);
    ctx.gpr[5] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 924u, 0x088930F0u>(ctx, &aot_mem) && ctx.pc == 0x089FEF78u) goto L_089FEF78;
    return;
L_089FEF78:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FF0CC;
      }
      goto L_089FEF80;
    }
L_089FEF80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089FF0CC;
      }
      goto L_089FEF90;
    }
L_089FEF90:
    ctx.gpr[5] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 9u);
      if (branch_taken) {
          goto L_089FEFA4;
      }
      goto L_089FEF9C;
    }
L_089FEF9C:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089FEFC0;
      }
      goto L_089FEFA4;
    }
L_089FEFA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FEFC0;
      }
      goto L_089FEFB0;
    }
L_089FEFB0:
    ctx.gpr[31] = (0x089FEFB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x089FEFB8u) goto L_089FEFB8;
    return;
L_089FEFB8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FEFDC;
      }
      goto L_089FEFC0;
    }
L_089FEFC0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1780)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FEFE4;
      }
      goto L_089FEFD4;
    }
L_089FEFD4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FF0CC;
      }
      goto L_089FEFDC;
    }
L_089FEFDC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FF0CC;
      }
      goto L_089FEFE4;
    }
L_089FEFE4:
    ctx.gpr[31] = (0x089FEFECu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 478u, 0x0899EB98u>(ctx, &aot_mem) && ctx.pc == 0x089FEFECu) goto L_089FEFEC;
    return;
L_089FEFEC:
    ctx.gpr[31] = (0x089FEFF4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 487u, 0x0899EC18u>(ctx, &aot_mem) && ctx.pc == 0x089FEFF4u) goto L_089FEFF4;
    return;
L_089FEFF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1972)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FF0CC;
      }
      goto L_089FF000;
    }
L_089FF000:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1976)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[5] = (ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FF0CC;
      }
      goto L_089FF014;
    }
L_089FF014:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1972), 0u);
    ctx.gpr[5] = (16u << 16u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1976), 0u);
      if (branch_taken) {
          goto L_089FF044;
      }
      goto L_089FF028;
    }
L_089FF028:
    ctx.gpr[5] = (16u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FF0CC;
      }
      goto L_089FF03C;
    }
L_089FF03C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FF058;
      }
      goto L_089FF044;
    }
L_089FF044:
    ctx.gpr[5] = (128u << 16u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089FF08C;
      }
      goto L_089FF050;
    }
L_089FF050:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FF0CC;
      }
      goto L_089FF058;
    }
L_089FF058:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(640)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FF084;
      }
      goto L_089FF064;
    }
L_089FF064:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089FF078u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 77u, 0x089A0598u>(ctx, &aot_mem) && ctx.pc == 0x089FF078u) goto L_089FF078;
    return;
L_089FF078:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089FF084u);
    ctx.gpr[5] = (0u | 500u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 787u, 0x0899FEE8u>(ctx, &aot_mem) && ctx.pc == 0x089FF084u) goto L_089FF084;
    return;
L_089FF084:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FF0CC;
      }
      goto L_089FF08C;
    }
L_089FF08C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(644)));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(648)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[12];
    ctx.gpr[31] = (0x089FF0ACu);
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[15];
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 282u, 0x089D962Cu>(ctx, &aot_mem) && ctx.pc == 0x089FF0ACu) goto L_089FF0AC;
    return;
L_089FF0AC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x089FF0C0u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 71u, 0x089A04F8u>(ctx, &aot_mem) && ctx.pc == 0x089FF0C0u) goto L_089FF0C0;
    return;
L_089FF0C0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089FF0CCu);
    ctx.gpr[5] = (0u | 500u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 787u, 0x0899FEE8u>(ctx, &aot_mem) && ctx.pc == 0x089FF0CCu) goto L_089FF0CC;
    return;
L_089FF0CC:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FF0E4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-160));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2064)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089FF140;
      }
      goto L_089FF12C;
    }
L_089FF12C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(2073)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1336)));
        goto L_089FF148;
    }
    goto L_089FF138;
L_089FF138:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FF160;
      }
      goto L_089FF140;
    }
L_089FF140:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FF558;
      }
      goto L_089FF148;
    }
L_089FF148:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FF160;
      }
      goto L_089FF150;
    }
L_089FF150:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(604)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1332)));
    if (ctx.gpr[4] == ctx.gpr[5]) {
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(2073), static_cast<std::uint8_t>(0u));
        goto L_089FF210;
    }
    goto L_089FF160;
L_089FF160:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(412)));
    ctx.gpr[4] = (ctx.gpr[4] & 512u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FF208;
      }
      goto L_089FF170;
    }
L_089FF170:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(2068)));
    ctx.gpr[5] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089FF254;
      }
      goto L_089FF180;
    }
L_089FF180:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(2068), 0u);
    ctx.gpr[31] = (0x089FF18Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 340u, 0x0899E1A0u>(ctx, &aot_mem) && ctx.pc == 0x089FF18Cu) goto L_089FF18C;
    return;
L_089FF18C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FF200;
      }
      goto L_089FF194;
    }
L_089FF194:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(592)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[22] = (ctx.gpr[19] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_089FF1F8;
      }
      goto L_089FF1A0;
    }
L_089FF1A0:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (16672u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] - ctx.fpr[12];
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = ctx.fpr[14] / ctx.fpr[13];
    ctx.gpr[4] = (16968u << 16u);
    ctx.gpr[6] = (32639u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[6] | 65535u);
    ctx.gpr[23] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[14];
    ctx.fpr[15] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[15]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[7]);
      if (branch_taken) {
          goto L_089FF264;
      }
      goto L_089FF1F0;
    }
L_089FF1F0:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_089FF26C;
      }
      goto L_089FF1F8;
    }
L_089FF1F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FF558;
      }
      goto L_089FF200;
    }
L_089FF200:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FF558;
      }
      goto L_089FF208;
    }
L_089FF208:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FF558;
      }
      goto L_089FF210;
    }
L_089FF210:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-497));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[6] & ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] | 48u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(398), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (0u | 10u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(408), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[5] = (ctx.gpr[5] | 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(597), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_089FF558;
      }
      goto L_089FF254;
    }
L_089FF254:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(2068)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(2068), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089FF558;
      }
      goto L_089FF264;
    }
L_089FF264:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    goto L_089FF26C;
L_089FF26C:
    ctx.fpr[15] = ctx.fpr[15] - ctx.fpr[12];
    ctx.fpr[15] = ctx.fpr[15] / ctx.fpr[13];
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[4] = (0u | 0u);
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[14];
    ctx.fpr[15] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[15]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
        goto L_089FF294;
    }
    goto L_089FF294;
L_089FF294:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[12];
    ctx.fpr[15] = ctx.fpr[15] / ctx.fpr[13];
    ctx.gpr[5] = (0u | 99u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[5]);
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[14];
    ctx.fpr[15] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[15]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < 99 ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[5]);
        goto L_089FF2C0;
    }
    goto L_089FF2C0;
L_089FF2C0:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[15] + ctx.fpr[12];
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[5] = (0u | 99u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < 99 ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[5]);
        goto L_089FF2EC;
    }
    goto L_089FF2EC;
L_089FF2EC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089FF518;
      }
      goto L_089FF2FC;
    }
L_089FF2FC:
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[4]);
    ctx.gpr[4] = (17480u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[21] = (0u | 1u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.gpr[20] = (0u | 3u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    goto L_089FF330;
L_089FF330:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089FF4F4;
      }
      goto L_089FF344;
    }
L_089FF344:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[30] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[30] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[30] = (ctx.gpr[4] - ctx.gpr[30]);
    goto L_089FF35C;
L_089FF35C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20972)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[30]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FF4D8;
      }
      goto L_089FF378;
    }
L_089FF378:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_089FF4D0;
      }
      goto L_089FF384;
    }
L_089FF384:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(836)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FF4D0;
      }
      goto L_089FF390;
    }
L_089FF390:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(596)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_089FF3A8;
      }
      goto L_089FF39C;
    }
L_089FF39C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(596)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_089FF4D0;
      }
      goto L_089FF3A8;
    }
L_089FF3A8:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[31] = (0x089FF3B4u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    goto L_089FD6A8;
L_089FF3B4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FF4D0;
      }
      goto L_089FF3BC;
    }
L_089FF3BC:
    ctx.gpr[31] = (0x089FF3C4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 99u, 0x088A078Cu>(ctx, &aot_mem) && ctx.pc == 0x089FF3C4u) goto L_089FF3C4;
    return;
L_089FF3C4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FF4D0;
      }
      goto L_089FF3CC;
    }
L_089FF3CC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(2072)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FF3F0;
      }
      goto L_089FF3D8;
    }
L_089FF3D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FF4D0;
      }
      goto L_089FF3E4;
    }
L_089FF3E4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(540)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FF4D0;
      }
      goto L_089FF3F0;
    }
L_089FF3F0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(541)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FF4D0;
      }
      goto L_089FF3FC;
    }
L_089FF3FC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(542)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FF4D0;
      }
      goto L_089FF408;
    }
L_089FF408:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(543)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FF4D0;
      }
      goto L_089FF414;
    }
L_089FF414:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(580)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FF4D0;
      }
      goto L_089FF420;
    }
L_089FF420:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(616)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089FF4D0;
      }
      goto L_089FF434;
    }
L_089FF434:
    ctx.gpr[31] = (0x089FF43Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 824u, 0x0889FD00u>(ctx, &aot_mem) && ctx.pc == 0x089FF43Cu) goto L_089FF43C;
    return;
L_089FF43C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FF4D0;
      }
      goto L_089FF444;
    }
L_089FF444:
    ctx.gpr[31] = (0x089FF44Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 828u, 0x0889FD44u>(ctx, &aot_mem) && ctx.pc == 0x089FF44Cu) goto L_089FF44C;
    return;
L_089FF44C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FF4D0;
      }
      goto L_089FF454;
    }
L_089FF454:
    ctx.gpr[31] = (0x089FF45Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 889u, 0x0889FFE0u>(ctx, &aot_mem) && ctx.pc == 0x089FF45Cu) goto L_089FF45C;
    return;
L_089FF45C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FF4D0;
      }
      goto L_089FF464;
    }
L_089FF464:
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
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
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[24] < ctx.fpr[26]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089FF4D0;
      }
      goto L_089FF498;
    }
L_089FF498:
    ctx.set_fpu_condition((ctx.fpr[24] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089FF4D0;
      }
      goto L_089FF4A8;
    }
L_089FF4A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(312));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089FF4C0u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089FF4C0u) goto L_089FF4C0;
    return;
L_089FF4C0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FF4D0;
      }
      goto L_089FF4C8;
    }
L_089FF4C8:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[23] = (ctx.gpr[16] | 0u);
    goto L_089FF4D0;
L_089FF4D0:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FF378;
      }
      goto L_089FF4D8;
    }
L_089FF4D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(44));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089FF35C;
      }
      goto L_089FF4F4;
    }
L_089FF4F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(100));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[5]);
      if (branch_taken) {
          goto L_089FF330;
      }
      goto L_089FF518;
    }
L_089FF518:
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FF558;
      }
      goto L_089FF520;
    }
L_089FF520:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(412)));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(2073), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[5] | 512u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(412), ctx.gpr[4]);
    ctx.gpr[31] = (0x089FF53Cu);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 206u, 0x089ED510u>(ctx, &aot_mem) && ctx.pc == 0x089FF53Cu) goto L_089FF53C;
    return;
L_089FF53C:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (0u | 18u);
    ctx.gpr[31] = (0x089FF54Cu);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 924u, 0x088930F0u>(ctx, &aot_mem) && ctx.pc == 0x089FF54Cu) goto L_089FF54C;
    return;
L_089FF54C:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089FF558u);
    ctx.gpr[5] = (0u | 10000u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 530u, 0x08886B78u>(ctx, &aot_mem) && ctx.pc == 0x089FF558u) goto L_089FF558;
    return;
L_089FF558:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
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
L_089FF598:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-208));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), ctx.gpr[20]);
    ctx.gpr[20] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7808)));
    ctx.gpr[4] = (15948u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), ctx.gpr[31]);
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_089FF61C;
      }
      goto L_089FF5F0;
    }
L_089FF5F0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6976)));
    ctx.gpr[4] = (15948u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089FF61C;
      }
      goto L_089FF610;
    }
L_089FF610:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(2140)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FF710;
      }
      goto L_089FF61C;
    }
L_089FF61C:
    ctx.gpr[31] = (0x089FF624u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 132u, 0x089A49C8u>(ctx, &aot_mem) && ctx.pc == 0x089FF624u) goto L_089FF624;
    return;
L_089FF624:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FF708;
      }
      goto L_089FF62C;
    }
L_089FF62C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(2144)));
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11040)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089FF718;
      }
      goto L_089FF640;
    }
L_089FF640:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(412)));
    ctx.gpr[4] = (ctx.gpr[4] & 256u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(2144), 0u);
      if (branch_taken) {
          goto L_089FF700;
      }
      goto L_089FF650;
    }
L_089FF650:
    ctx.gpr[31] = (0x089FF658u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 340u, 0x0899E1A0u>(ctx, &aot_mem) && ctx.pc == 0x089FF658u) goto L_089FF658;
    return;
L_089FF658:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FF6F8;
      }
      goto L_089FF660;
    }
L_089FF660:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(592)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FF6F0;
      }
      goto L_089FF66C;
    }
L_089FF66C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(628)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FF6E8;
      }
      goto L_089FF678;
    }
L_089FF678:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[4] & 512u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FF6E8;
      }
      goto L_089FF688;
    }
L_089FF688:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 9u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_089FF6E0;
      }
      goto L_089FF698;
    }
L_089FF698:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-11056)));
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    ctx.gpr[4] = (16968u << 16u);
    ctx.gpr[6] = (0u | 0u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[15];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
        goto L_089FF728;
    }
    goto L_089FF6D8;
L_089FF6D8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_089FF72C;
      }
      goto L_089FF6E0;
    }
L_089FF6E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FFC20;
      }
      goto L_089FF6E8;
    }
L_089FF6E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FFC20;
      }
      goto L_089FF6F0;
    }
L_089FF6F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FFC20;
      }
      goto L_089FF6F8;
    }
L_089FF6F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FFC20;
      }
      goto L_089FF700;
    }
L_089FF700:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FFC20;
      }
      goto L_089FF708;
    }
L_089FF708:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FFC20;
      }
      goto L_089FF710;
    }
L_089FF710:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FFC20;
      }
      goto L_089FF718;
    }
L_089FF718:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(2144)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(2144), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089FFC20;
      }
      goto L_089FF728;
    }
L_089FF728:
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(48));
    goto L_089FF72C;
L_089FF72C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-11056)));
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    ctx.gpr[4] = (16968u << 16u);
    ctx.gpr[30] = (0u | 0u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[15];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[30]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[30] = (ctx.gpr[4] | 0u);
        goto L_089FF76C;
    }
    goto L_089FF76C;
L_089FF76C:
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-11056)));
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    ctx.gpr[4] = (16968u << 16u);
    ctx.gpr[5] = (0u | 99u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[15];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
        goto L_089FF7B0;
    }
    goto L_089FF7B0;
L_089FF7B0:
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-11056)));
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    ctx.gpr[7] = (16968u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[5]);
    ctx.gpr[4] = (0u | 99u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[15];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
        goto L_089FF7F8;
    }
    goto L_089FF7F8;
L_089FF7F8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[6]);
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[4]);
    ctx.gpr[6] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[6]);
    ctx.gpr[5] = (2229u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11052)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[30]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
      if (branch_taken) {
          goto L_089FFBF8;
      }
      goto L_089FF824;
    }
L_089FF824:
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FFBE4;
      }
      goto L_089FF838;
    }
L_089FF838:
    ctx.gpr[4] = (ctx.gpr[30] << 5u);
    goto L_089FF83C;
L_089FF83C:
    ctx.gpr[5] = (ctx.gpr[30] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[23] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[22] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20972)));
    ctx.gpr[22] = (ctx.gpr[4] + ctx.gpr[22]);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FFA1C;
      }
      goto L_089FF874;
    }
L_089FF874:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] & 14u);
    ctx.gpr[5] = (ctx.gpr[5] ^ 8u);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_089FF8D8;
      }
      goto L_089FF894;
    }
L_089FF894:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(68)));
    ctx.gpr[6] = (ctx.gpr[6] & 2048u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_089FF8B4;
      }
      goto L_089FF8A4;
    }
L_089FF8A4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(72)));
    ctx.gpr[6] = (ctx.gpr[6] & 4096u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FF8B8;
      }
      goto L_089FF8B4;
    }
L_089FF8B4:
    ctx.gpr[5] = (0u | 1u);
    goto L_089FF8B8;
L_089FF8B8:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(421))))));
    ctx.gpr[7] = (ctx.gpr[5] & 255u);
    ctx.gpr[5] = (ctx.gpr[6] & 64u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
      if (branch_taken) {
          goto L_089FF8D4;
      }
      goto L_089FF8CC;
    }
L_089FF8CC:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FF8D8;
      }
      goto L_089FF8D4;
    }
L_089FF8D4:
    ctx.gpr[4] = (0u | 0u);
    goto L_089FF8D8;
L_089FF8D8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FFA14;
      }
      goto L_089FF8E0;
    }
L_089FF8E0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7872)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_089FF90C;
      }
      goto L_089FF8F8;
    }
L_089FF8F8:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_089FF90C;
L_089FF90C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(17)));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FFA14;
      }
      goto L_089FF920;
    }
L_089FF920:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(24))))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_089FF948;
      }
      goto L_089FF92C;
    }
L_089FF92C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(24))))));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7092)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[4] << 6u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_089FF948;
      }
      goto L_089FF948;
    }
L_089FF948:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089FFA00;
      }
      goto L_089FF958;
    }
L_089FF958:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (0x089FF964u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    goto L_089FD6E0;
L_089FF964:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FFA00;
      }
      goto L_089FF96C;
    }
L_089FF96C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[16]);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[31] = (0x089FF984u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 678u, 0x08A2B0E4u>(ctx, &aot_mem) && ctx.pc == 0x089FF984u) goto L_089FF984;
    return;
L_089FF984:
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(48));
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
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
      if (branch_taken) {
          goto L_089FFA00;
      }
      goto L_089FF9BC;
    }
L_089FF9BC:
    ctx.gpr[31] = (0x089FF9C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 267u, 0x08A295CCu>(ctx, &aot_mem) && ctx.pc == 0x089FF9C4u) goto L_089FF9C4;
    return;
L_089FF9C4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089FF9D0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 650u, 0x08A2AFB0u>(ctx, &aot_mem) && ctx.pc == 0x089FF9D0u) goto L_089FF9D0;
    return;
L_089FF9D0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FFA00;
      }
      goto L_089FF9D8;
    }
L_089FF9D8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x089FF9ECu);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 682u, 0x08A2B1B8u>(ctx, &aot_mem) && ctx.pc == 0x089FF9ECu) goto L_089FF9EC;
    return;
L_089FF9EC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FFA00;
      }
      goto L_089FF9F4;
    }
L_089FF9F4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[16]);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[19]);
    goto L_089FFA00;
L_089FFA00:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(17)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FF920;
      }
      goto L_089FFA14;
    }
L_089FFA14:
    { const bool branch_taken = ctx.gpr[21] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FF874;
      }
      goto L_089FFA1C;
    }
L_089FFA1C:
    ctx.gpr[4] = (ctx.gpr[22] + static_cast<std::uint32_t>(12));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FFBD0;
      }
      goto L_089FFA2C;
    }
L_089FFA2C:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] & 14u);
    ctx.gpr[5] = (ctx.gpr[5] ^ 8u);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_089FFA90;
      }
      goto L_089FFA4C;
    }
L_089FFA4C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(68)));
    ctx.gpr[6] = (ctx.gpr[6] & 2048u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_089FFA6C;
      }
      goto L_089FFA5C;
    }
L_089FFA5C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(72)));
    ctx.gpr[6] = (ctx.gpr[6] & 4096u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FFA70;
      }
      goto L_089FFA6C;
    }
L_089FFA6C:
    ctx.gpr[5] = (0u | 1u);
    goto L_089FFA70;
L_089FFA70:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(421))))));
    ctx.gpr[7] = (ctx.gpr[5] & 255u);
    ctx.gpr[5] = (ctx.gpr[6] & 64u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
      if (branch_taken) {
          goto L_089FFA8C;
      }
      goto L_089FFA84;
    }
L_089FFA84:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FFA90;
      }
      goto L_089FFA8C;
    }
L_089FFA8C:
    ctx.gpr[4] = (0u | 0u);
    goto L_089FFA90;
L_089FFA90:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FFBC8;
      }
      goto L_089FFA98;
    }
L_089FFA98:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7872)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_089FFAC4;
      }
      goto L_089FFAB0;
    }
L_089FFAB0:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_089FFAC4;
L_089FFAC4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(17)));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FFBC8;
      }
      goto L_089FFAD8;
    }
L_089FFAD8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(24))))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_089FFB00;
      }
      goto L_089FFAE4;
    }
L_089FFAE4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(24))))));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7092)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[4] << 6u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_089FFB00;
      }
      goto L_089FFB00;
    }
L_089FFB00:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089FFBB4;
      }
      goto L_089FFB10;
    }
L_089FFB10:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (0x089FFB1Cu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    goto L_089FD6E0;
L_089FFB1C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FFBB4;
      }
      goto L_089FFB24;
    }
L_089FFB24:
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089FFB38u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 678u, 0x08A2B0E4u>(ctx, &aot_mem) && ctx.pc == 0x089FFB38u) goto L_089FFB38;
    return;
L_089FFB38:
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
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
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089FFBB4;
      }
      goto L_089FFB70;
    }
L_089FFB70:
    ctx.gpr[31] = (0x089FFB78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 267u, 0x08A295CCu>(ctx, &aot_mem) && ctx.pc == 0x089FFB78u) goto L_089FFB78;
    return;
L_089FFB78:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089FFB84u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 650u, 0x08A2AFB0u>(ctx, &aot_mem) && ctx.pc == 0x089FFB84u) goto L_089FFB84;
    return;
L_089FFB84:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FFBB4;
      }
      goto L_089FFB8C;
    }
L_089FFB8C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x089FFBA0u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 682u, 0x08A2B1B8u>(ctx, &aot_mem) && ctx.pc == 0x089FFBA0u) goto L_089FFBA0;
    return;
L_089FFBA0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FFBB4;
      }
      goto L_089FFBA8;
    }
L_089FFBA8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[16]);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[19]);
    goto L_089FFBB4;
L_089FFBB4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(17)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FFAD8;
      }
      goto L_089FFBC8;
    }
L_089FFBC8:
    { const bool branch_taken = ctx.gpr[21] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FFA2C;
      }
      goto L_089FFBD0;
    }
L_089FFBD0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[30] << 5u);
      if (branch_taken) {
          goto L_089FF83C;
      }
      goto L_089FFBE4;
    }
L_089FFBE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[30]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FF824;
      }
      goto L_089FFBF8;
    }
L_089FFBF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FFC20;
      }
      goto L_089FFC04;
    }
L_089FFC04:
    ctx.gpr[31] = (0x089FFC0Cu);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 267u, 0x08A295CCu>(ctx, &aot_mem) && ctx.pc == 0x089FFC0Cu) goto L_089FFC0C;
    return;
L_089FFC0C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x089FFC20u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 484u, 0x08A2A7ACu>(ctx, &aot_mem) && ctx.pc == 0x089FFC20u) goto L_089FFC20;
    return;
L_089FFC20:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FFC58:
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15916)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[5] = (2229u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-15920)));
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.gpr[9] = (2229u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-15892)));
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
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(-15912), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[12] = (2229u << 16u);
    ctx.fpr[14] = ctx.fpr[17] / ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(-15904), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[19] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(-15908), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[8]);
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-15900), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-15896), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(-15888), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FFCEC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x089FFD08u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-3104));
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 350u, 0x08A018ACu>(ctx, &aot_mem) && ctx.pc == 0x089FFD08u) goto L_089FFD08;
    return;
L_089FFD08:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FFD14:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_089FFD5C;
      }
      goto L_089FFD40;
    }
L_089FFD40:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] & 255u);
      if (branch_taken) {
          goto L_089FFD68;
      }
      goto L_089FFD5C;
    }
L_089FFD5C:
    ctx.gpr[31] = (0x089FFD64u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 49u, 0x08875960u>(ctx, &aot_mem) && ctx.pc == 0x089FFD64u) goto L_089FFD64;
    return;
L_089FFD64:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    goto L_089FFD68;
L_089FFD68:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089FFD7C;
      }
      goto L_089FFD74;
    }
L_089FFD74:
    ctx.gpr[31] = (0x089FFD7Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089FFCEC;
L_089FFD7C:
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
L_089FFD94:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x089FFDACu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 63u, 0x08875A54u>(ctx, &aot_mem) && ctx.pc == 0x089FFDACu) goto L_089FFDAC;
    return;
L_089FFDAC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FFDBC;
      }
      goto L_089FFDB4;
    }
L_089FFDB4:
    ctx.gpr[31] = (0x089FFDBCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089FFCEC;
L_089FFDBC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FFDCC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[19] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_089FFE38;
      }
      goto L_089FFDF8;
    }
L_089FFDF8:
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[17] = (ctx.gpr[18] + static_cast<std::uint32_t>(-1));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_089FFE30;
      }
      goto L_089FFE10;
    }
L_089FFE10:
    ctx.gpr[31] = (0x089FFE18u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089FFD14;
L_089FFE18:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[17] = (ctx.gpr[18] + static_cast<std::uint32_t>(-1));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_089FFE10;
      }
      goto L_089FFE30;
    }
L_089FFE30:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FFE48;
      }
      goto L_089FFE38;
    }
L_089FFE38:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089FFE48u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    goto L_089FFD94;
L_089FFE48:
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
L_089FFE64:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[19] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[18] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_089FFF0C;
      }
      goto L_089FFEA4;
    }
L_089FFEA4:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[19] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[17] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_089FFF04;
      }
      goto L_089FFEB8;
    }
L_089FFEB8:
    ctx.gpr[20] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-1));
    goto L_089FFEC0;
L_089FFEC0:
    ctx.gpr[23] = (ctx.gpr[18] + static_cast<std::uint32_t>(-1));
    ctx.gpr[21] = (ctx.gpr[20] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[22] = (ctx.gpr[23] | 0u);
      if (branch_taken) {
          goto L_089FFEF0;
      }
      goto L_089FFED0;
    }
L_089FFED0:
    ctx.gpr[31] = (0x089FFED8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089FFD14;
L_089FFED8:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[23] = (ctx.gpr[22] + static_cast<std::uint32_t>(-1));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[22] = (ctx.gpr[23] | 0u);
      if (branch_taken) {
          goto L_089FFED0;
      }
      goto L_089FFEF0;
    }
L_089FFEF0:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[19] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    ctx.gpr[20] = (ctx.gpr[20] + ctx.gpr[18]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_089FFEC0;
      }
      goto L_089FFF04;
    }
L_089FFF04:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FFF20;
      }
      goto L_089FFF0C;
    }
L_089FFF0C:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[17])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[18])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.lo);
    ctx.gpr[31] = (0x089FFF20u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    goto L_089FFD94;
L_089FFF20:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FFF4C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x089FFF68u);
    ctx.gpr[6] = (0u | 4u);
    goto L_089FFDCC;
L_089FFF68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_089FFF88;
      }
      goto L_089FFF74;
    }
L_089FFF74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x089FFF88u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-3072));
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 350u, 0x08A018ACu>(ctx, &aot_mem) && ctx.pc == 0x089FFF88u) goto L_089FFF88;
    return;
L_089FFF88:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FFF9C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x089FFFB0u);
    ctx.gpr[6] = (0u | 4u);
    goto L_089FFDCC;
L_089FFFB0:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FFFC0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x089FFFD4u);
    ctx.gpr[6] = (0u | 4u);
    goto L_089FFDCC;
L_089FFFD4:
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FFFE4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A00000u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_089FFF9C;
}

void recomp_unit_0126(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0126_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_126(Runtime &runtime) {
    runtime.register_generated_unit(126u, 0x089FC000u, 16384u, &recomp_unit_0126, &recomp_unit_0126_entry);
    runtime.register_function(0x089FC000u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC008u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC014u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC020u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC02Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC038u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC044u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC08Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC0F0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC130u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC18Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC238u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC5FCu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC67Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC7C0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC7E4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC7F0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC7FCu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC808u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC814u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC820u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC82Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC844u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC858u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC860u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC870u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC878u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC888u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC894u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC8A0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC8ACu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC8B8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC8C4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC8F0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC928u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC99Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC9A4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC9ACu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC9B4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC9F0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FCA08u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FCA10u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FCA18u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FCA3Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FCA50u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FCA58u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FCA70u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FCA80u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FCA88u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FCA90u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FCA9Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FCAA4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FCAACu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FCAC4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FCAD4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FCADCu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FCAE4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FCB34u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FCB58u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FCB60u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FCB80u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FCBB0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FCBC4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FCBCCu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FCBD4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FCC44u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FCC50u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FCD44u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FCD4Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FCD64u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FCD6Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FCD74u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FCD80u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FCD94u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FCDA0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FCDCCu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FCDFCu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FCE74u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FCEACu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FCEC4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FCED8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FCF08u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FCF14u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FCF20u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FCF24u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FCF8Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FCFB4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FCFDCu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FCFFCu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD00Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD014u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD01Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD030u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD06Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD0B4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD0CCu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD0D8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD0E4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD0ECu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD104u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD114u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD120u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD12Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD140u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD14Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD15Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD170u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD184u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD18Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD1A0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD1DCu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD200u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD20Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD218u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD22Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD240u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD24Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD268u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD280u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD288u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD290u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD294u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD2A8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD2B8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD2C4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD2E8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD2F0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD300u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD324u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD32Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD334u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD348u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD378u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD390u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD3BCu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD3D8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD3E8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD400u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD414u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD448u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD458u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD45Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD478u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD4C4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD4E8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD4F0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD504u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD510u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD518u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD548u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD550u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD564u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD594u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD59Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD5A4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD5ACu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD5B4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD5B8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD5C8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD5D8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD5FCu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD608u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD60Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD64Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD668u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD680u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD68Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD694u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD6A8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD6B0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD6BCu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD6CCu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD6D4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD6D8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD6E0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD6ECu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD6F8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD700u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD724u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD73Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD740u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD748u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD74Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD754u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD794u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD7B0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD7C0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD7D0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD7F4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD810u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD828u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD830u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD838u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD840u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD850u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD880u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD8B0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD8C0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD8D0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD8DCu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD8E4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD8F8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD934u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD954u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD96Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD974u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD980u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD98Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD99Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD9A4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD9ACu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD9C8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FDA08u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FDA24u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FDA34u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FDA40u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FDA6Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FDA98u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FDAD4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FDB04u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FDB28u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FDB58u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FDB78u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FDBA0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FDBE8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FDC10u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FDC18u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FDC48u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FDC58u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FDC68u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FDC70u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FDCB4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FDCC4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FDCD4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FDCDCu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FDD10u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FDD3Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FDD64u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FDD84u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FDD8Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FDD90u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FDDC0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FDDD0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FDDD4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FDE00u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FDE2Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FDE5Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FDE88u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FDEB4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FDEBCu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FDEC0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FDEE4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FDF08u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FDF10u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FDF1Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FDF24u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FDF2Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FDF40u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FDF48u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FDF50u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FDF60u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FDF70u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FDF80u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FDF90u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FDFA0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FDFB0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FDFC0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FDFD0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FDFE0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FDFE4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FDFECu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FDFF4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE000u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE020u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE040u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE04Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE058u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE064u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE068u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE070u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE074u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE07Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE084u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE090u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE0A0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE0B0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE0BCu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE0CCu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE0F4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE104u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE114u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE124u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE130u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE140u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE150u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE158u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE164u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE174u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE184u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE194u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE1A4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE1B4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE1C4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE1D4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE1E4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE1ECu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE1F4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE1FCu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE204u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE20Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE214u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE21Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE224u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE22Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE234u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE23Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE244u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE254u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE260u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE26Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE278u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE27Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE284u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE288u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE28Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE294u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE29Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE2A4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE2ACu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE2B8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE2D0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE2D8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE2E4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE2ECu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE2F4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE2FCu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE308u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE31Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE320u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE334u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE344u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE348u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE35Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE368u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE37Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE388u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE39Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE3ACu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE3BCu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE3C8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE3D4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE3E0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE3E4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE3ECu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE3F0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE404u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE40Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE414u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE41Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE424u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE430u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE438u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE440u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE454u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE460u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE484u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE48Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE4C8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE4F8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE504u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE518u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE520u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE528u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE530u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE538u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE544u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE558u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE568u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE574u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE580u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE588u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE590u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE5A8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE5E0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE5E8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE5F0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE600u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE610u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE618u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE630u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE648u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE658u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE680u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE688u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE698u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE6C8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE6D0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE6E0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE6ECu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE708u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE710u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE718u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE720u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE728u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE730u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE740u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE750u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE758u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE760u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE768u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE770u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE77Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE78Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE7B4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE7C0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE7C8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE7D4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE7DCu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE7ECu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE7F4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE804u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE82Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE838u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE848u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE854u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE85Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE864u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE86Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE874u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE87Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE898u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE8A8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE8C8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE8F0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE90Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE920u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE92Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE934u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE974u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE984u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE994u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE9A4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE9ACu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE9BCu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE9DCu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE9F8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEA0Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEA18u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEA20u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEA34u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEA44u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEA4Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEA54u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEA5Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEA7Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEA84u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEA94u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEAA0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEAA8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEAC0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEAD4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEB0Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEB14u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEB20u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEB28u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEB6Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEB7Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEB90u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEBA0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEBA8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEBBCu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEBC4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEBCCu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEBE0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEBE8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEBF0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEC08u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEC14u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEC2Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FECF4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FECF8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FED00u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FED20u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FED28u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FED38u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FED58u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FED60u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FED78u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FED88u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEDA8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEDB0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEDB8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEDD0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEDF8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEE08u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEE0Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEE18u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEE24u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEE34u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEE54u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEE5Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEE78u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEE80u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEE9Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEEA4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEEACu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEEB4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEEBCu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEEC4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEED4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEEE4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEEECu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEEF4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEEFCu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEF04u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEF10u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEF20u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEF28u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEF38u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEF50u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEF58u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEF68u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEF78u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEF80u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEF90u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEF9Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEFA4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEFB0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEFB8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEFC0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEFD4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEFDCu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEFE4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEFECu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEFF4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF000u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF014u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF028u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF03Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF044u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF050u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF058u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF064u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF078u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF084u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF08Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF0ACu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF0C0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF0CCu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF0E4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF12Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF138u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF140u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF148u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF150u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF160u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF170u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF180u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF18Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF194u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF1A0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF1F0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF1F8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF200u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF208u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF210u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF254u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF264u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF26Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF294u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF2C0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF2ECu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF2FCu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF330u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF344u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF35Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF378u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF384u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF390u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF39Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF3A8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF3B4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF3BCu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF3C4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF3CCu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF3D8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF3E4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF3F0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF3FCu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF408u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF414u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF420u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF434u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF43Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF444u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF44Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF454u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF45Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF464u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF498u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF4A8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF4C0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF4C8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF4D0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF4D8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF4F4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF518u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF520u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF53Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF54Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF558u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF598u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF5F0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF610u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF61Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF624u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF62Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF640u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF650u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF658u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF660u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF66Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF678u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF688u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF698u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF6D8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF6E0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF6E8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF6F0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF6F8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF700u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF708u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF710u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF718u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF728u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF72Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF76Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF7B0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF7F8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF824u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF838u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF83Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF874u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF894u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF8A4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF8B4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF8B8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF8CCu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF8D4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF8D8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF8E0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF8F8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF90Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF920u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF92Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF948u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF958u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF964u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF96Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF984u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF9BCu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF9C4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF9D0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF9D8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF9ECu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF9F4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FFA00u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FFA14u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FFA1Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FFA2Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FFA4Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FFA5Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FFA6Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FFA70u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FFA84u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FFA8Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FFA90u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FFA98u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FFAB0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FFAC4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FFAD8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FFAE4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FFB00u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FFB10u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FFB1Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FFB24u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FFB38u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FFB70u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FFB78u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FFB84u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FFB8Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FFBA0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FFBA8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FFBB4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FFBC8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FFBD0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FFBE4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FFBF8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FFC04u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FFC0Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FFC20u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FFC58u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FFCECu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FFD08u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FFD14u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FFD40u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FFD5Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FFD64u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FFD68u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FFD74u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FFD7Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FFD94u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FFDACu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FFDB4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FFDBCu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FFDCCu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FFDF8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FFE10u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FFE18u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FFE30u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FFE38u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FFE48u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FFE64u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FFEA4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FFEB8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FFEC0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FFED0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FFED8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FFEF0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FFF04u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FFF0Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FFF20u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FFF4Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FFF68u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FFF74u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FFF88u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FFF9Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FFFB0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FFFC0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FFFD4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FFFE4u, &recomp_unit_0126, "recomp_unit_0126");
}
} // namespace psprecomp
