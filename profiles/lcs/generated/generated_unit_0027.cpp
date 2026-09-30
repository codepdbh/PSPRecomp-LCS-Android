#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0027[4048] = {
    1, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 6, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0,
    0, 0, 0, 9, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 11, 0, 12, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0,
    14, 0, 15, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 18, 0, 0, 19, 0, 0, 0, 0, 0, 0,
    0, 0, 20, 0, 0, 0, 21, 0, 0, 22, 0, 23, 0, 0, 0, 24, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0,
    0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 28, 0, 29, 0, 0, 30, 0, 0, 0, 0, 0, 0, 31, 0, 32, 0, 0, 0, 0, 0, 0,
    0, 33, 0, 0, 0, 34, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 37, 0, 38, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 39, 0, 0, 40, 0, 0, 0, 0, 41, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 45,
    0, 0, 0, 46, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 49, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0,
    0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54,
    0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 57, 0, 0, 0, 58, 0, 0, 0, 59, 0, 0,
    0, 60, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 64,
    0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 66, 0, 0, 67, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0,
    0, 0, 0, 70, 0, 71, 0, 72, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 74, 0, 0, 0, 75, 0, 0, 0, 76, 0, 0, 0, 0, 0,
    77, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 81,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 85, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 86, 0, 87, 0, 88, 0, 89, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 91, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 94, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 98, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0,
    0, 0, 100, 0, 0, 0, 0, 0, 101, 0, 0, 0, 102, 0, 0, 0, 103, 0, 0, 0, 104, 105, 106, 0, 0, 0, 107, 0, 0, 0, 108, 0,
    109, 0, 110, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 113, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 117, 0, 0, 0, 118, 0, 119, 0, 0,
    0, 120, 0, 0, 0, 0, 0, 121, 0, 122, 0, 0, 123, 0, 0, 0, 124, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0,
    127, 0, 0, 0, 128, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 133,
    0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 136, 0, 137, 0, 0, 0, 138, 0, 0, 0, 0, 139, 0, 0, 0,
    0, 0, 140, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 142, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0,
    0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 147, 0, 0, 0, 148, 0, 0,
    0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 150, 0, 151, 0, 0, 0, 0, 152, 0, 153, 0, 154, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0,
    156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    157, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 163, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0,
    0, 166, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 169, 0, 170, 0, 0, 171, 0, 0, 172, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 175, 0, 176, 0, 0, 0, 0, 177, 0,
    0, 0, 0, 0, 0, 0, 178, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 182, 0, 183,
    184, 0, 0, 0, 0, 185, 0, 0, 186, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0,
    193, 0, 0, 194, 0, 195, 196, 197, 0, 0, 198, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 202, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 206, 0, 0, 0, 207, 0, 0, 208, 0, 209, 0, 0, 210, 211, 0, 0, 0, 0,
    0, 212, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 217, 0, 0,
    0, 0, 218, 0, 219, 220, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 223, 0, 224, 0, 225, 0, 226, 0,
    227, 0, 228, 0, 0, 0, 0, 0, 229, 0, 0, 230, 0, 0, 0, 0, 0, 0, 231, 0, 232, 0, 0, 0, 0, 0, 0, 233, 0, 234, 0, 0,
    235, 0, 0, 0, 0, 0, 236, 0, 0, 237, 0, 0, 0, 0, 0, 0, 238, 0, 239, 0, 0, 0, 0, 0, 0, 240, 0, 241, 0, 0, 242, 0,
    0, 0, 0, 0, 243, 0, 0, 244, 0, 0, 0, 0, 0, 0, 245, 0, 246, 0, 0, 0, 0, 0, 0, 247, 0, 248, 0, 0, 249, 250, 0, 0,
    0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 253, 0, 254, 0, 255, 0, 256, 0, 257, 0,
    258, 0, 0, 0, 0, 259, 0, 0, 260, 0, 0, 0, 0, 0, 0, 261, 0, 262, 0, 0, 0, 0, 0, 0, 263, 0, 264, 0, 0, 265, 0, 0,
    0, 0, 266, 0, 0, 267, 0, 0, 0, 0, 0, 0, 268, 0, 269, 0, 0, 0, 0, 0, 0, 270, 0, 271, 0, 0, 272, 0, 0, 0, 0, 273,
    0, 0, 274, 0, 0, 0, 0, 0, 0, 275, 0, 276, 0, 0, 0, 0, 0, 0, 277, 0, 278, 0, 0, 279, 280, 0, 0, 0, 0, 281, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 283, 0, 0, 0, 284, 0, 0, 0, 285, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0,
    0, 0, 287, 0, 0, 0, 0, 288, 0, 289, 0, 0, 0, 0, 0, 0, 0, 290, 0, 291, 0, 0, 0, 0, 0, 292, 0, 293, 0, 294, 0, 295,
    0, 296, 0, 297, 0, 298, 299, 0, 0, 0, 0, 0, 300, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 303, 0, 304, 0, 0, 0, 305, 0, 0, 0, 306, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0,
    0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 310, 0, 311, 0, 0, 312, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 316, 0, 0, 317, 0, 318, 0, 0, 319, 0, 320, 321,
    0, 322, 0, 323, 0, 324, 0, 0, 0, 325, 0, 326, 0, 327, 0, 0, 328, 0, 329, 0, 0, 330, 331, 0, 332, 333, 0, 334, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 336, 0, 0, 337, 0, 338, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 340,
    0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 343, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 345, 0,
    0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0,
    0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 352, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0,
    354, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 358,
    0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 362, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    365, 0, 0, 366, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0, 0, 0, 370,
    0, 0, 371, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 0, 0, 0, 375, 0,
    0, 376, 0, 0, 0, 0, 0, 377, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0, 0, 0,
    0, 381, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 383, 0, 0, 0, 0, 0, 384, 0, 0, 0, 385, 0, 386,
    0, 0, 0, 0, 0, 387, 0, 388, 0, 389, 0, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 391, 0, 0, 0, 0, 392,
    0, 0, 0, 393, 0, 394, 0, 0, 0, 0, 395, 0, 0, 0, 0, 0, 0, 396, 0, 0, 397, 0, 0, 0, 0, 0, 0, 398, 0, 0, 399, 0,
    0, 0, 0, 0, 0, 400, 0, 0, 0, 0, 0, 0, 0, 0, 401, 0, 0, 0, 0, 0, 0, 402, 0, 403, 0, 0, 404, 0, 405, 0, 0, 0,
    0, 406, 0, 0, 0, 0, 0, 0, 407, 0, 0, 408, 0, 0, 0, 0, 0, 0, 409, 0, 0, 410, 0, 0, 0, 0, 0, 0, 411, 0, 0, 0,
    0, 0, 0, 0, 0, 412, 0, 0, 0, 0, 0, 0, 413, 0, 414, 0, 0, 415, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 416, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 417, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 418, 0, 0, 0, 419, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 420, 0, 0, 421, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 422, 0, 0, 423,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 424, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 425, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 426, 0, 0, 427, 0, 428, 0,
    0, 429, 0, 430, 0, 0, 0, 0, 0, 0, 431, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    433, 0, 0, 0, 0, 0, 434, 0, 0, 0, 435, 0, 0, 436, 0, 0, 437, 0, 438, 0, 0, 439, 0, 440, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 441, 0, 0, 0, 442, 0, 443, 0, 0, 0, 0, 444, 0, 0, 445, 446, 0, 0, 0, 0, 0, 0, 447, 0, 0, 0, 0, 0, 0, 0, 448,
    0, 449, 0, 450, 0, 0, 0, 0, 0, 451, 0, 0, 0, 452, 0, 0, 453, 0, 454, 0, 455, 456, 0, 0, 457, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 458, 459, 0, 0, 0, 0, 460, 0, 0, 461, 0, 462, 0, 463, 0, 0, 0, 0, 464, 0, 465, 0, 0, 0, 0,
    466, 467, 0, 0, 0, 468, 0, 0, 469, 0, 0, 0, 0, 470, 0, 471, 0, 0, 0, 472, 473, 0, 0, 0, 474, 0, 0, 0, 0, 0, 0, 475,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 476, 0, 477, 0, 0, 0, 0, 0, 478, 0, 0, 0, 0, 0, 0, 479, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 480, 0, 481, 0, 482, 0, 0, 0, 0, 483, 0, 484, 0, 0, 0, 0, 0, 485, 0, 0, 0, 0, 486, 487, 0, 488, 0,
    489, 0, 490, 0, 491, 0, 0, 0, 0, 0, 0, 0, 0, 0, 492, 0, 493, 0, 0, 0, 0, 0, 0, 0, 494, 0, 495, 0, 0, 496, 0, 0,
    0, 497, 0, 0, 498, 0, 499, 0, 0, 500, 0, 501, 0, 0, 0, 0, 502, 0, 0, 0, 503, 0, 0, 0, 0, 0, 0, 504, 0, 505, 0, 506,
    0, 0, 507, 0, 0, 0, 0, 0, 0, 0, 508, 0, 509, 510, 0, 0, 0, 511, 0, 512, 0, 0, 0, 0, 513, 0, 514, 0, 0, 0, 0, 0,
    0, 0, 515, 0, 0, 516, 0, 0, 517, 0, 0, 518, 0, 0, 519, 0, 0, 0, 0, 0, 0, 520, 0, 0, 521, 0, 522, 523, 0, 0, 524, 0,
    0, 525, 0, 526, 0, 527, 0, 0, 0, 0, 528, 0, 529, 0, 0, 0, 0, 0, 0, 0, 0, 530, 0, 0, 0, 0, 531, 0, 0, 0, 0, 0,
    0, 532, 0, 0, 533, 0, 0, 534, 0, 535, 0, 536, 0, 537, 0, 538, 0, 539, 0, 540, 541, 0, 0, 0, 0, 542, 0, 0, 0, 0, 0, 0,
    0, 543, 0, 0, 0, 544, 0, 545, 0, 0, 0, 546, 0, 547, 0, 0, 0, 0, 0, 548, 549, 0, 0, 0, 0, 550, 0, 0, 0, 551, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 552, 0, 0, 0, 553, 0, 554, 0, 0, 0, 555, 0, 556, 0, 0, 0, 0, 0, 557, 558, 0, 0, 0, 0, 559,
    0, 0, 0, 0, 560, 0, 0, 0, 0, 561, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 562, 0, 0, 563, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 564, 0, 0, 0, 0, 0, 0, 565, 0, 566, 0, 567, 0, 568, 0, 569, 0, 570, 0, 0, 0, 571, 0, 0, 0, 572, 0, 0, 0, 0,
    0, 573, 0, 0, 0, 574, 0, 0, 0, 0, 0, 575, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 576, 0, 0, 0, 0, 0, 0, 577, 0, 0, 0, 0, 0, 0, 578, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 579, 0, 0, 0, 580, 0, 0,
    0, 0, 0, 581, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 582, 583, 0, 0, 0, 584, 0, 585, 0, 0, 0,
    0, 0, 0, 586, 0, 587, 0, 0, 0, 0, 588, 0, 0, 0, 0, 0, 0, 0, 589, 0, 590, 0, 591, 0, 0, 0, 0, 592, 0, 0, 0, 0,
    593, 0, 0, 0, 0, 594, 0, 0, 595, 0, 0, 596, 0, 0, 0, 0, 0, 597, 0, 0, 598, 0, 599, 0, 0, 0, 0, 600, 0, 601, 0, 602,
    0, 0, 0, 0, 0, 603, 0, 0, 604, 0, 605, 0, 0, 0, 0, 606, 0, 607, 0, 608, 0, 0, 0, 0, 609, 0, 0, 610, 0, 0, 0, 0,
    611, 0, 0, 612, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 613, 0, 0, 614, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 615, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 616, 0, 0, 617, 0, 0, 0, 0, 0, 0, 0, 0, 618, 0, 0, 619, 0, 0, 0, 0, 620, 0, 0, 621, 0,
    0, 622, 0, 0, 0, 623, 0, 0, 0, 0, 0, 624, 0, 0, 0, 0, 625, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 626, 0, 0, 0, 627, 0, 628, 0, 629, 0, 630, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 631,
    0, 632, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 633, 0, 634, 635, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 636, 0, 637,
    0, 638, 0, 0, 0, 0, 0, 0, 0, 639, 0, 0, 640, 0, 641, 0, 642, 0, 643, 0, 0, 644, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 645, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 646, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 647, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 648, 0, 0, 0, 649, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 650, 0, 651, 0, 0, 0, 0, 0, 0, 652, 0, 0, 0, 653, 0, 0, 654, 0, 655, 656, 0, 657, 0, 658, 0, 0, 0, 0, 659, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 660, 0, 0, 0, 0, 0, 0, 0, 661,
};
void recomp_unit_0027_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08870000u;
        entry_id = (entry_delta < 16192u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0027[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08870000;
    case 2u: goto L_08870008;
    case 3u: goto L_08870038;
    case 4u: goto L_0887005C;
    case 5u: goto L_0887009C;
    case 6u: goto L_088700B8;
    case 7u: goto L_088700C4;
    case 8u: goto L_088700F0;
    case 9u: goto L_0887010C;
    case 10u: goto L_08870120;
    case 11u: goto L_0887013C;
    case 12u: goto L_08870144;
    case 13u: goto L_08870164;
    case 14u: goto L_08870180;
    case 15u: goto L_08870188;
    case 16u: goto L_08870190;
    case 17u: goto L_088701C4;
    case 18u: goto L_088701D8;
    case 19u: goto L_088701E4;
    case 20u: goto L_08870208;
    case 21u: goto L_08870218;
    case 22u: goto L_08870224;
    case 23u: goto L_0887022C;
    case 24u: goto L_0887023C;
    case 25u: goto L_08870250;
    case 26u: goto L_0887026C;
    case 27u: goto L_0887028C;
    case 28u: goto L_088702AC;
    case 29u: goto L_088702B4;
    case 30u: goto L_088702C0;
    case 31u: goto L_088702DC;
    case 32u: goto L_088702E4;
    case 33u: goto L_08870304;
    case 34u: goto L_08870314;
    case 35u: goto L_0887031C;
    case 36u: goto L_0887034C;
    case 37u: goto L_0887035C;
    case 38u: goto L_08870364;
    case 39u: goto L_08870398;
    case 40u: goto L_088703A4;
    case 41u: goto L_088703B8;
    case 42u: goto L_088703C0;
    case 43u: goto L_088703F0;
    case 44u: goto L_088704E0;
    case 45u: goto L_088704FC;
    case 46u: goto L_0887050C;
    case 47u: goto L_0887051C;
    case 48u: goto L_0887055C;
    case 49u: goto L_08870568;
    case 50u: goto L_088705CC;
    case 51u: goto L_088705EC;
    case 52u: goto L_08870604;
    case 53u: goto L_0887064C;
    case 54u: goto L_0887067C;
    case 55u: goto L_088706A0;
    case 56u: goto L_088706C4;
    case 57u: goto L_088706D4;
    case 58u: goto L_088706E4;
    case 59u: goto L_088706F4;
    case 60u: goto L_08870704;
    case 61u: goto L_0887071C;
    case 62u: goto L_08870740;
    case 63u: goto L_08870760;
    case 64u: goto L_0887077C;
    case 65u: goto L_08870798;
    case 66u: goto L_088707B4;
    case 67u: goto L_088707C0;
    case 68u: goto L_088707D4;
    case 69u: goto L_088707F0;
    case 70u: goto L_0887080C;
    case 71u: goto L_08870814;
    case 72u: goto L_0887081C;
    case 73u: goto L_08870838;
    case 74u: goto L_08870848;
    case 75u: goto L_08870858;
    case 76u: goto L_08870868;
    case 77u: goto L_08870880;
    case 78u: goto L_088708A4;
    case 79u: goto L_088708C4;
    case 80u: goto L_088708EC;
    case 81u: goto L_088708FC;
    case 82u: goto L_0887092C;
    case 83u: goto L_08870938;
    case 84u: goto L_0887095C;
    case 85u: goto L_0887096C;
    case 86u: goto L_08870998;
    case 87u: goto L_088709A0;
    case 88u: goto L_088709A8;
    case 89u: goto L_088709B0;
    case 90u: goto L_088709B8;
    case 91u: goto L_08870A10;
    case 92u: goto L_08870A1C;
    case 93u: goto L_08870A48;
    case 94u: goto L_08870A50;
    case 95u: goto L_08870A60;
    case 96u: goto L_08870AC0;
    case 97u: goto L_08870AD8;
    case 98u: goto L_08870AF0;
    case 99u: goto L_08870B78;
    case 100u: goto L_08870B88;
    case 101u: goto L_08870BA0;
    case 102u: goto L_08870BB0;
    case 103u: goto L_08870BC0;
    case 104u: goto L_08870BD0;
    case 105u: goto L_08870BD4;
    case 106u: goto L_08870BD8;
    case 107u: goto L_08870BE8;
    case 108u: goto L_08870BF8;
    case 109u: goto L_08870C00;
    case 110u: goto L_08870C08;
    case 111u: goto L_08870C14;
    case 112u: goto L_08870C64;
    case 113u: goto L_08870C74;
    case 114u: goto L_08870C9C;
    case 115u: goto L_08870CA8;
    case 116u: goto L_08870CD4;
    case 117u: goto L_08870CDC;
    case 118u: goto L_08870CEC;
    case 119u: goto L_08870CF4;
    case 120u: goto L_08870D04;
    case 121u: goto L_08870D1C;
    case 122u: goto L_08870D24;
    case 123u: goto L_08870D30;
    case 124u: goto L_08870D40;
    case 125u: goto L_08870D54;
    case 126u: goto L_08870D6C;
    case 127u: goto L_08870D80;
    case 128u: goto L_08870D90;
    case 129u: goto L_08870DA4;
    case 130u: goto L_08870DBC;
    case 131u: goto L_08870DD0;
    case 132u: goto L_08870DF4;
    case 133u: goto L_08870DFC;
    case 134u: goto L_08870E10;
    case 135u: goto L_08870E28;
    case 136u: goto L_08870E44;
    case 137u: goto L_08870E4C;
    case 138u: goto L_08870E5C;
    case 139u: goto L_08870E70;
    case 140u: goto L_08870E88;
    case 141u: goto L_08870E9C;
    case 142u: goto L_08870EC0;
    case 143u: goto L_08870EC4;
    case 144u: goto L_08870EF4;
    case 145u: goto L_08870F10;
    case 146u: goto L_08870F5C;
    case 147u: goto L_08870F64;
    case 148u: goto L_08870F74;
    case 149u: goto L_08870F8C;
    case 150u: goto L_08870FA8;
    case 151u: goto L_08870FB0;
    case 152u: goto L_08870FC4;
    case 153u: goto L_08870FCC;
    case 154u: goto L_08870FD4;
    case 155u: goto L_08870FDC;
    case 156u: goto L_08871000;
    case 157u: goto L_08871080;
    case 158u: goto L_0887109C;
    case 159u: goto L_088710AC;
    case 160u: goto L_088710CC;
    case 161u: goto L_088710E0;
    case 162u: goto L_088711A4;
    case 163u: goto L_088711AC;
    case 164u: goto L_088711C0;
    case 165u: goto L_088711E0;
    case 166u: goto L_08871204;
    case 167u: goto L_08871214;
    case 168u: goto L_0887123C;
    case 169u: goto L_08871258;
    case 170u: goto L_08871260;
    case 171u: goto L_0887126C;
    case 172u: goto L_08871278;
    case 173u: goto L_088712A4;
    case 174u: goto L_088712D4;
    case 175u: goto L_088712DC;
    case 176u: goto L_088712E4;
    case 177u: goto L_088712F8;
    case 178u: goto L_08871318;
    case 179u: goto L_08871324;
    case 180u: goto L_08871348;
    case 181u: goto L_0887136C;
    case 182u: goto L_08871374;
    case 183u: goto L_0887137C;
    case 184u: goto L_08871380;
    case 185u: goto L_08871394;
    case 186u: goto L_088713A0;
    case 187u: goto L_088713A8;
    case 188u: goto L_088713D8;
    case 189u: goto L_08871448;
    case 190u: goto L_08871478;
    case 191u: goto L_088714CC;
    case 192u: goto L_088714F4;
    case 193u: goto L_08871500;
    case 194u: goto L_0887150C;
    case 195u: goto L_08871514;
    case 196u: goto L_08871518;
    case 197u: goto L_0887151C;
    case 198u: goto L_08871528;
    case 199u: goto L_08871544;
    case 200u: goto L_08871590;
    case 201u: goto L_088715B8;
    case 202u: goto L_088715C0;
    case 203u: goto L_088715C8;
    case 204u: goto L_088715F8;
    case 205u: goto L_0887162C;
    case 206u: goto L_08871638;
    case 207u: goto L_08871648;
    case 208u: goto L_08871654;
    case 209u: goto L_0887165C;
    case 210u: goto L_08871668;
    case 211u: goto L_0887166C;
    case 212u: goto L_08871684;
    case 213u: goto L_0887169C;
    case 214u: goto L_088716B0;
    case 215u: goto L_088716C8;
    case 216u: goto L_088716DC;
    case 217u: goto L_088716F4;
    case 218u: goto L_08871708;
    case 219u: goto L_08871710;
    case 220u: goto L_08871714;
    case 221u: goto L_0887171C;
    case 222u: goto L_08871750;
    case 223u: goto L_08871760;
    case 224u: goto L_08871768;
    case 225u: goto L_08871770;
    case 226u: goto L_08871778;
    case 227u: goto L_08871780;
    case 228u: goto L_08871788;
    case 229u: goto L_088717A0;
    case 230u: goto L_088717AC;
    case 231u: goto L_088717C8;
    case 232u: goto L_088717D0;
    case 233u: goto L_088717EC;
    case 234u: goto L_088717F4;
    case 235u: goto L_08871800;
    case 236u: goto L_08871818;
    case 237u: goto L_08871824;
    case 238u: goto L_08871840;
    case 239u: goto L_08871848;
    case 240u: goto L_08871864;
    case 241u: goto L_0887186C;
    case 242u: goto L_08871878;
    case 243u: goto L_08871890;
    case 244u: goto L_0887189C;
    case 245u: goto L_088718B8;
    case 246u: goto L_088718C0;
    case 247u: goto L_088718DC;
    case 248u: goto L_088718E4;
    case 249u: goto L_088718F0;
    case 250u: goto L_088718F4;
    case 251u: goto L_08871908;
    case 252u: goto L_08871948;
    case 253u: goto L_08871958;
    case 254u: goto L_08871960;
    case 255u: goto L_08871968;
    case 256u: goto L_08871970;
    case 257u: goto L_08871978;
    case 258u: goto L_08871980;
    case 259u: goto L_08871994;
    case 260u: goto L_088719A0;
    case 261u: goto L_088719BC;
    case 262u: goto L_088719C4;
    case 263u: goto L_088719E0;
    case 264u: goto L_088719E8;
    case 265u: goto L_088719F4;
    case 266u: goto L_08871A08;
    case 267u: goto L_08871A14;
    case 268u: goto L_08871A30;
    case 269u: goto L_08871A38;
    case 270u: goto L_08871A54;
    case 271u: goto L_08871A5C;
    case 272u: goto L_08871A68;
    case 273u: goto L_08871A7C;
    case 274u: goto L_08871A88;
    case 275u: goto L_08871AA4;
    case 276u: goto L_08871AAC;
    case 277u: goto L_08871AC8;
    case 278u: goto L_08871AD0;
    case 279u: goto L_08871ADC;
    case 280u: goto L_08871AE0;
    case 281u: goto L_08871AF4;
    case 282u: goto L_08871B2C;
    case 283u: goto L_08871B34;
    case 284u: goto L_08871B44;
    case 285u: goto L_08871B54;
    case 286u: goto L_08871B64;
    case 287u: goto L_08871B88;
    case 288u: goto L_08871B9C;
    case 289u: goto L_08871BA4;
    case 290u: goto L_08871BC4;
    case 291u: goto L_08871BCC;
    case 292u: goto L_08871BE4;
    case 293u: goto L_08871BEC;
    case 294u: goto L_08871BF4;
    case 295u: goto L_08871BFC;
    case 296u: goto L_08871C04;
    case 297u: goto L_08871C0C;
    case 298u: goto L_08871C14;
    case 299u: goto L_08871C18;
    case 300u: goto L_08871C30;
    case 301u: goto L_08871C34;
    case 302u: goto L_08871C60;
    case 303u: goto L_08871C98;
    case 304u: goto L_08871CA0;
    case 305u: goto L_08871CB0;
    case 306u: goto L_08871CC0;
    case 307u: goto L_08871CD0;
    case 308u: goto L_08871CF4;
    case 309u: goto L_08871D08;
    case 310u: goto L_08871D28;
    case 311u: goto L_08871D30;
    case 312u: goto L_08871D3C;
    case 313u: goto L_08871D54;
    case 314u: goto L_08871D84;
    case 315u: goto L_08871DC4;
    case 316u: goto L_08871DD0;
    case 317u: goto L_08871DDC;
    case 318u: goto L_08871DE4;
    case 319u: goto L_08871DF0;
    case 320u: goto L_08871DF8;
    case 321u: goto L_08871DFC;
    case 322u: goto L_08871E04;
    case 323u: goto L_08871E0C;
    case 324u: goto L_08871E14;
    case 325u: goto L_08871E24;
    case 326u: goto L_08871E2C;
    case 327u: goto L_08871E34;
    case 328u: goto L_08871E40;
    case 329u: goto L_08871E48;
    case 330u: goto L_08871E54;
    case 331u: goto L_08871E58;
    case 332u: goto L_08871E60;
    case 333u: goto L_08871E64;
    case 334u: goto L_08871E6C;
    case 335u: goto L_08871E9C;
    case 336u: goto L_08871EB8;
    case 337u: goto L_08871EC4;
    case 338u: goto L_08871ECC;
    case 339u: goto L_08871EE4;
    case 340u: goto L_08871EFC;
    case 341u: goto L_08871F10;
    case 342u: goto L_08871F40;
    case 343u: goto L_08871F4C;
    case 344u: goto L_08871F64;
    case 345u: goto L_08871F78;
    case 346u: goto L_08871F8C;
    case 347u: goto L_08871FB0;
    case 348u: goto L_08871FC8;
    case 349u: goto L_08871FEC;
    case 350u: goto L_08872008;
    case 351u: goto L_08872048;
    case 352u: goto L_08872054;
    case 353u: goto L_0887206C;
    case 354u: goto L_08872080;
    case 355u: goto L_088720A0;
    case 356u: goto L_088720C4;
    case 357u: goto L_088720E4;
    case 358u: goto L_0887217C;
    case 359u: goto L_08872190;
    case 360u: goto L_088721A8;
    case 361u: goto L_088721BC;
    case 362u: goto L_08872208;
    case 363u: goto L_08872228;
    case 364u: goto L_08872258;
    case 365u: goto L_08872280;
    case 366u: goto L_0887228C;
    case 367u: goto L_088722A4;
    case 368u: goto L_088722B8;
    case 369u: goto L_088722D4;
    case 370u: goto L_088722FC;
    case 371u: goto L_08872308;
    case 372u: goto L_08872320;
    case 373u: goto L_08872334;
    case 374u: goto L_08872350;
    case 375u: goto L_08872378;
    case 376u: goto L_08872384;
    case 377u: goto L_0887239C;
    case 378u: goto L_088723B0;
    case 379u: goto L_088723CC;
    case 380u: goto L_088723E8;
    case 381u: goto L_08872404;
    case 382u: goto L_08872420;
    case 383u: goto L_0887244C;
    case 384u: goto L_08872464;
    case 385u: goto L_08872474;
    case 386u: goto L_0887247C;
    case 387u: goto L_08872494;
    case 388u: goto L_0887249C;
    case 389u: goto L_088724A4;
    case 390u: goto L_088724BC;
    case 391u: goto L_088724E8;
    case 392u: goto L_088724FC;
    case 393u: goto L_0887250C;
    case 394u: goto L_08872514;
    case 395u: goto L_08872528;
    case 396u: goto L_08872544;
    case 397u: goto L_08872550;
    case 398u: goto L_0887256C;
    case 399u: goto L_08872578;
    case 400u: goto L_08872594;
    case 401u: goto L_088725B8;
    case 402u: goto L_088725D4;
    case 403u: goto L_088725DC;
    case 404u: goto L_088725E8;
    case 405u: goto L_088725F0;
    case 406u: goto L_08872604;
    case 407u: goto L_08872620;
    case 408u: goto L_0887262C;
    case 409u: goto L_08872648;
    case 410u: goto L_08872654;
    case 411u: goto L_08872670;
    case 412u: goto L_08872694;
    case 413u: goto L_088726B0;
    case 414u: goto L_088726B8;
    case 415u: goto L_088726C4;
    case 416u: goto L_088726F8;
    case 417u: goto L_08872730;
    case 418u: goto L_08872764;
    case 419u: goto L_08872774;
    case 420u: goto L_088727AC;
    case 421u: goto L_088727B8;
    case 422u: goto L_088727F0;
    case 423u: goto L_088727FC;
    case 424u: goto L_08872834;
    case 425u: goto L_088728AC;
    case 426u: goto L_088728E4;
    case 427u: goto L_088728F0;
    case 428u: goto L_088728F8;
    case 429u: goto L_08872904;
    case 430u: goto L_0887290C;
    case 431u: goto L_08872928;
    case 432u: goto L_088729BC;
    case 433u: goto L_08872A00;
    case 434u: goto L_08872A18;
    case 435u: goto L_08872A28;
    case 436u: goto L_08872A34;
    case 437u: goto L_08872A40;
    case 438u: goto L_08872A48;
    case 439u: goto L_08872A54;
    case 440u: goto L_08872A5C;
    case 441u: goto L_08872A84;
    case 442u: goto L_08872A94;
    case 443u: goto L_08872A9C;
    case 444u: goto L_08872AB0;
    case 445u: goto L_08872ABC;
    case 446u: goto L_08872AC0;
    case 447u: goto L_08872ADC;
    case 448u: goto L_08872AFC;
    case 449u: goto L_08872B04;
    case 450u: goto L_08872B0C;
    case 451u: goto L_08872B24;
    case 452u: goto L_08872B34;
    case 453u: goto L_08872B40;
    case 454u: goto L_08872B48;
    case 455u: goto L_08872B50;
    case 456u: goto L_08872B54;
    case 457u: goto L_08872B60;
    case 458u: goto L_08872B9C;
    case 459u: goto L_08872BA0;
    case 460u: goto L_08872BB4;
    case 461u: goto L_08872BC0;
    case 462u: goto L_08872BC8;
    case 463u: goto L_08872BD0;
    case 464u: goto L_08872BE4;
    case 465u: goto L_08872BEC;
    case 466u: goto L_08872C00;
    case 467u: goto L_08872C04;
    case 468u: goto L_08872C14;
    case 469u: goto L_08872C20;
    case 470u: goto L_08872C34;
    case 471u: goto L_08872C3C;
    case 472u: goto L_08872C4C;
    case 473u: goto L_08872C50;
    case 474u: goto L_08872C60;
    case 475u: goto L_08872C7C;
    case 476u: goto L_08872CA4;
    case 477u: goto L_08872CAC;
    case 478u: goto L_08872CC4;
    case 479u: goto L_08872CE0;
    case 480u: goto L_08872D14;
    case 481u: goto L_08872D1C;
    case 482u: goto L_08872D24;
    case 483u: goto L_08872D38;
    case 484u: goto L_08872D40;
    case 485u: goto L_08872D58;
    case 486u: goto L_08872D6C;
    case 487u: goto L_08872D70;
    case 488u: goto L_08872D78;
    case 489u: goto L_08872D80;
    case 490u: goto L_08872D88;
    case 491u: goto L_08872D90;
    case 492u: goto L_08872DB8;
    case 493u: goto L_08872DC0;
    case 494u: goto L_08872DE0;
    case 495u: goto L_08872DE8;
    case 496u: goto L_08872DF4;
    case 497u: goto L_08872E04;
    case 498u: goto L_08872E10;
    case 499u: goto L_08872E18;
    case 500u: goto L_08872E24;
    case 501u: goto L_08872E2C;
    case 502u: goto L_08872E40;
    case 503u: goto L_08872E50;
    case 504u: goto L_08872E6C;
    case 505u: goto L_08872E74;
    case 506u: goto L_08872E7C;
    case 507u: goto L_08872E88;
    case 508u: goto L_08872EA8;
    case 509u: goto L_08872EB0;
    case 510u: goto L_08872EB4;
    case 511u: goto L_08872EC4;
    case 512u: goto L_08872ECC;
    case 513u: goto L_08872EE0;
    case 514u: goto L_08872EE8;
    case 515u: goto L_08872F08;
    case 516u: goto L_08872F14;
    case 517u: goto L_08872F20;
    case 518u: goto L_08872F2C;
    case 519u: goto L_08872F38;
    case 520u: goto L_08872F54;
    case 521u: goto L_08872F60;
    case 522u: goto L_08872F68;
    case 523u: goto L_08872F6C;
    case 524u: goto L_08872F78;
    case 525u: goto L_08872F84;
    case 526u: goto L_08872F8C;
    case 527u: goto L_08872F94;
    case 528u: goto L_08872FA8;
    case 529u: goto L_08872FB0;
    case 530u: goto L_08872FD4;
    case 531u: goto L_08872FE8;
    case 532u: goto L_08873004;
    case 533u: goto L_08873010;
    case 534u: goto L_0887301C;
    case 535u: goto L_08873024;
    case 536u: goto L_0887302C;
    case 537u: goto L_08873034;
    case 538u: goto L_0887303C;
    case 539u: goto L_08873044;
    case 540u: goto L_0887304C;
    case 541u: goto L_08873050;
    case 542u: goto L_08873064;
    case 543u: goto L_08873084;
    case 544u: goto L_08873094;
    case 545u: goto L_0887309C;
    case 546u: goto L_088730AC;
    case 547u: goto L_088730B4;
    case 548u: goto L_088730CC;
    case 549u: goto L_088730D0;
    case 550u: goto L_088730E4;
    case 551u: goto L_088730F4;
    case 552u: goto L_0887311C;
    case 553u: goto L_0887312C;
    case 554u: goto L_08873134;
    case 555u: goto L_08873144;
    case 556u: goto L_0887314C;
    case 557u: goto L_08873164;
    case 558u: goto L_08873168;
    case 559u: goto L_0887317C;
    case 560u: goto L_08873190;
    case 561u: goto L_088731A4;
    case 562u: goto L_088731D0;
    case 563u: goto L_088731DC;
    case 564u: goto L_08873208;
    case 565u: goto L_08873224;
    case 566u: goto L_0887322C;
    case 567u: goto L_08873234;
    case 568u: goto L_0887323C;
    case 569u: goto L_08873244;
    case 570u: goto L_0887324C;
    case 571u: goto L_0887325C;
    case 572u: goto L_0887326C;
    case 573u: goto L_08873284;
    case 574u: goto L_08873294;
    case 575u: goto L_088732AC;
    case 576u: goto L_08873310;
    case 577u: goto L_0887332C;
    case 578u: goto L_08873348;
    case 579u: goto L_088733E4;
    case 580u: goto L_088733F4;
    case 581u: goto L_0887340C;
    case 582u: goto L_08873454;
    case 583u: goto L_08873458;
    case 584u: goto L_08873468;
    case 585u: goto L_08873470;
    case 586u: goto L_0887348C;
    case 587u: goto L_08873494;
    case 588u: goto L_088734A8;
    case 589u: goto L_088734C8;
    case 590u: goto L_088734D0;
    case 591u: goto L_088734D8;
    case 592u: goto L_088734EC;
    case 593u: goto L_08873500;
    case 594u: goto L_08873514;
    case 595u: goto L_08873520;
    case 596u: goto L_0887352C;
    case 597u: goto L_08873544;
    case 598u: goto L_08873550;
    case 599u: goto L_08873558;
    case 600u: goto L_0887356C;
    case 601u: goto L_08873574;
    case 602u: goto L_0887357C;
    case 603u: goto L_08873594;
    case 604u: goto L_088735A0;
    case 605u: goto L_088735A8;
    case 606u: goto L_088735BC;
    case 607u: goto L_088735C4;
    case 608u: goto L_088735CC;
    case 609u: goto L_088735E0;
    case 610u: goto L_088735EC;
    case 611u: goto L_08873600;
    case 612u: goto L_0887360C;
    case 613u: goto L_08873658;
    case 614u: goto L_08873664;
    case 615u: goto L_088736AC;
    case 616u: goto L_0887371C;
    case 617u: goto L_08873728;
    case 618u: goto L_0887374C;
    case 619u: goto L_08873758;
    case 620u: goto L_0887376C;
    case 621u: goto L_08873778;
    case 622u: goto L_08873784;
    case 623u: goto L_08873794;
    case 624u: goto L_088737AC;
    case 625u: goto L_088737C0;
    case 626u: goto L_08873808;
    case 627u: goto L_08873818;
    case 628u: goto L_08873820;
    case 629u: goto L_08873828;
    case 630u: goto L_08873830;
    case 631u: goto L_0887387C;
    case 632u: goto L_08873884;
    case 633u: goto L_088738B8;
    case 634u: goto L_088738C0;
    case 635u: goto L_088738C4;
    case 636u: goto L_088738F4;
    case 637u: goto L_088738FC;
    case 638u: goto L_08873904;
    case 639u: goto L_08873924;
    case 640u: goto L_08873930;
    case 641u: goto L_08873938;
    case 642u: goto L_08873940;
    case 643u: goto L_08873948;
    case 644u: goto L_08873954;
    case 645u: goto L_08873B74;
    case 646u: goto L_08873BF4;
    case 647u: goto L_08873D4C;
    case 648u: goto L_08873D90;
    case 649u: goto L_08873DA0;
    case 650u: goto L_08873E08;
    case 651u: goto L_08873E10;
    case 652u: goto L_08873E2C;
    case 653u: goto L_08873E3C;
    case 654u: goto L_08873E48;
    case 655u: goto L_08873E50;
    case 656u: goto L_08873E54;
    case 657u: goto L_08873E5C;
    case 658u: goto L_08873E64;
    case 659u: goto L_08873E78;
    case 660u: goto L_08873F1C;
    case 661u: goto L_08873F3C;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08870000:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(132), ctx.gpr[4]);
    ctx.gpr[6] = (0u | 48u);
    goto L_08870008;
L_08870008:
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(1412));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(132), ctx.gpr[4]);
    ctx.gpr[9] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 176u);
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[6] = (ctx.gpr[20] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(144));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(1464)));
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    goto L_08870038;
L_08870038:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(1468)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[29] + ctx.gpr[7]);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(1464)));
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[7]);
      if (branch_taken) {
          goto L_08870038;
      }
      goto L_0887005C;
    }
L_0887005C:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(132)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(1412));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2888)));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.lo);
    ctx.gpr[19] = (ctx.gpr[20] + ctx.gpr[6]);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(144));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[22] = (ctx.gpr[19] + static_cast<std::uint32_t>(8));
    ctx.gpr[31] = (0x0887009Cu);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 532u, 0x0886F2C4u>(ctx, &aot_mem) && ctx.pc == 0x0887009Cu) goto L_0887009C;
    return;
L_0887009C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1456)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2884)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-40));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0887010C;
      }
      goto L_088700B8;
    }
L_088700B8:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(33)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887010C;
      }
      goto L_088700C4;
    }
L_088700C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1456)));
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-40));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088700F0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 482u, 0x0886EDD8u>(ctx, &aot_mem) && ctx.pc == 0x088700F0u) goto L_088700F0;
    return;
L_088700F0:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(14)));
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
    aot_mem.aot_store16(ctx.gpr[19] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1456)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2884), ctx.gpr[5]);
    goto L_0887010C;
L_0887010C:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-40));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[30] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08870144;
      }
      goto L_08870120;
    }
L_08870120:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-40));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x0887013Cu);
    ctx.gpr[6] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 482u, 0x0886EDD8u>(ctx, &aot_mem) && ctx.pc == 0x0887013Cu) goto L_0887013C;
    return;
L_0887013C:
    ctx.gpr[30] = (ctx.gpr[30] + ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1456)));
    goto L_08870144;
L_08870144:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-40));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(28));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-40));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(28));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[5];
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_0887026C;
      }
      goto L_08870164;
    }
L_08870164:
    ctx.gpr[17] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (ctx.gpr[17] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08870188;
      }
      goto L_08870180;
    }
L_08870180:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08870250;
      }
      goto L_08870188;
    }
L_08870188:
    { const bool branch_taken = ctx.gpr[23] != 0u;
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[21]);
      if (branch_taken) {
          goto L_0887022C;
      }
      goto L_08870190;
    }
L_08870190:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(120)));
    ctx.gpr[16] = (ctx.gpr[17] << 5u);
    ctx.gpr[5] = (ctx.gpr[17] << 3u);
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] ^ ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887022C;
      }
      goto L_088701C4;
    }
L_088701C4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088701D8u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 482u, 0x0886EDD8u>(ctx, &aot_mem) && ctx.pc == 0x088701D8u) goto L_088701D8;
    return;
L_088701D8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887022C;
      }
      goto L_088701E4;
    }
L_088701E4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(120)));
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[16] = (ctx.gpr[5] + ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[7]);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[5];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(2878), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08870224;
      }
      goto L_08870208;
    }
L_08870208:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2904), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[31] = (0x08870218u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 539u, 0x08932C08u>(ctx, &aot_mem) && ctx.pc == 0x08870218u) goto L_08870218;
    return;
L_08870218:
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[16]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2904)));
      if (branch_taken) {
          goto L_08870224;
      }
      goto L_08870224;
    }
L_08870224:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(2879), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    goto L_0887022C;
L_0887022C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(7) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08870250;
      }
      goto L_0887023C;
    }
L_0887023C:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08870250u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 462u, 0x0886EAD0u>(ctx, &aot_mem) && ctx.pc == 0x08870250u) goto L_08870250;
    return;
L_08870250:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1456)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-40));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(28));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08870164;
      }
      goto L_0887026C;
    }
L_0887026C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(132)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(1412));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[5] = (ctx.gpr[20] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(144)));
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(14)));
        goto L_088702C0;
    }
    goto L_0887028C;
L_0887028C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(140)));
    ctx.gpr[7] = (0u | 47u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[8] = (ctx.gpr[5] ^ 47u);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(140), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[8] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_088702B4;
      }
      goto L_088702AC;
    }
L_088702AC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(132), 0u);
      if (branch_taken) {
          goto L_088702DC;
      }
      goto L_088702B4;
    }
L_088702B4:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(132), ctx.gpr[6]);
      if (branch_taken) {
          goto L_088702DC;
      }
      goto L_088702C0;
    }
L_088702C0:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(6));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(140)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1456)));
    ctx.gpr[5] = (ctx.gpr[5] ^ 47u);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    goto L_088702DC;
L_088702DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 657u, 0x0886FF9Cu>(ctx, &aot_mem); return;
      }
      goto L_088702E4;
    }
L_088702E4:
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(-40));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-40));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[30];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(2880), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_0887031C;
      }
      goto L_08870304;
    }
L_08870304:
    ctx.gpr[17] = (ctx.gpr[5] - ctx.gpr[30]);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x08870314u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 539u, 0x08932C08u>(ctx, &aot_mem) && ctx.pc == 0x08870314u) goto L_08870314;
    return;
L_08870314:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[17]);
      if (branch_taken) {
          goto L_0887031C;
      }
      goto L_0887031C;
    }
L_0887031C:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(2881), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1456)));
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(-40));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-40));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2884)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(2882), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08870364;
      }
      goto L_0887034C;
    }
L_0887034C:
    ctx.gpr[17] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x0887035Cu);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 539u, 0x08932C08u>(ctx, &aot_mem) && ctx.pc == 0x0887035Cu) goto L_0887035C;
    return;
L_0887035C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[17]);
      if (branch_taken) {
          goto L_08870364;
      }
      goto L_08870364;
    }
L_08870364:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(2883), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1456)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(120)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-40));
    ctx.gpr[5] = (ctx.gpr[4] ^ ctx.gpr[23]);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1456), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1452), ctx.gpr[23]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 656u, 0x0886FF38u>(ctx, &aot_mem); return;
      }
      goto L_08870398;
    }
L_08870398:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088703C0;
      }
      goto L_088703A4;
    }
L_088703A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(140)));
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088703C0;
      }
      goto L_088703B8;
    }
L_088703B8:
    ctx.gpr[31] = (0x088703C0u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 190u, 0x0886D4A8u>(ctx, &aot_mem) && ctx.pc == 0x088703C0u) goto L_088703C0;
    return;
L_088703C0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2908)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2912)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2916)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2920)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2924)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2928)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2932)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2936)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2940)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2944)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(2960));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088703F0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-192));
    ctx.gpr[8] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (ctx.gpr[6] & 65535u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), ctx.gpr[19]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.gpr[8] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[8]);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(28));
    ctx.gpr[8] = (ctx.gpr[5] + static_cast<std::uint32_t>(592));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(28));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[6]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[11]);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.gpr[3] = (ctx.gpr[2] + ctx.gpr[2]);
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[3]);
    ctx.gpr[2] = (ctx.gpr[2] << 2u);
    ctx.gpr[2] = (ctx.gpr[5] + ctx.gpr[2]);
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(28));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[10]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[11]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[9] | 0u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[9]);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[8]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[11]);
    ctx.gpr[2] = (ctx.gpr[10] ^ ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[11] | 0u);
    ctx.gpr[11] = (ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[11] = (ctx.gpr[11] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[8]);
    ctx.gpr[11] = (ctx.gpr[11] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[11] = (ctx.gpr[11] & 255u);
    { const bool branch_taken = ctx.gpr[11] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[9]);
      if (branch_taken) {
          goto L_08870AD8;
      }
      goto L_088704E0;
    }
L_088704E0:
    ctx.gpr[15] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[24] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[11] = (ctx.gpr[29] + static_cast<std::uint32_t>(12));
    ctx.gpr[14] = (ctx.gpr[7] & 4095u);
    ctx.gpr[12] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    goto L_088704FC;
L_088704FC:
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(0)));
    ctx.gpr[25] = (aot_mem.aot_load8(ctx.gpr[13] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[25] != 0u;
    // nop
      if (branch_taken) {
          goto L_08870A50;
      }
      goto L_0887050C;
    }
L_0887050C:
    ctx.gpr[25] = (aot_mem.aot_load16(ctx.gpr[13] + static_cast<std::uint32_t>(2)));
    ctx.gpr[25] = (ctx.gpr[25] & 4095u);
    { const bool branch_taken = ctx.gpr[25] != ctx.gpr[14];
    // nop
      if (branch_taken) {
          goto L_08870A50;
      }
      goto L_0887051C;
    }
L_0887051C:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[2]);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[12]);
    ctx.gpr[6] = (ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[9]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[6] = (ctx.gpr[7] & 61440u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08870568;
      }
      goto L_0887055C;
    }
L_0887055C:
    ctx.gpr[8] = (aot_mem.aot_load16(ctx.gpr[13] + static_cast<std::uint32_t>(2)));
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08870A48;
      }
      goto L_08870568;
    }
L_08870568:
    ctx.gpr[14] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(192))))));
    ctx.gpr[25] = (ctx.gpr[6] | 0u);
    ctx.gpr[24] = (ctx.gpr[4] + static_cast<std::uint32_t>(100));
    ctx.gpr[15] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    ctx.gpr[9] = (16128u << 16u);
    ctx.gpr[4] = (1u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.gpr[6] = (1u << 16u);
    ctx.gpr[7] = (1u << 16u);
    ctx.gpr[8] = (1u << 16u);
    ctx.gpr[10] = (1u << 16u);
    ctx.gpr[11] = (1u << 16u);
    ctx.gpr[2] = (1u << 16u);
    ctx.gpr[12] = (1u << 16u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[7] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[8] = (ctx.gpr[5] + ctx.gpr[8]);
    ctx.gpr[10] = (ctx.gpr[5] + ctx.gpr[10]);
    ctx.gpr[11] = (ctx.gpr[5] + ctx.gpr[11]);
    ctx.gpr[2] = (ctx.gpr[5] + ctx.gpr[2]);
    ctx.gpr[12] = (ctx.gpr[5] + ctx.gpr[12]);
    ctx.gpr[9] = (1u << 16u);
    { const bool branch_taken = ctx.gpr[25] != 0u;
    ctx.gpr[3] = (1u << 16u);
      if (branch_taken) {
          goto L_088705EC;
      }
      goto L_088705CC;
    }
L_088705CC:
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(4)));
    ctx.gpr[24] = (aot_mem.aot_load32(ctx.gpr[24] + static_cast<std::uint32_t>(0)));
    ctx.gpr[13] = (ctx.gpr[13] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[24]);
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[13]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[13] = (ctx.gpr[24] - ctx.gpr[13]);
      if (branch_taken) {
          goto L_08870604;
      }
      goto L_088705EC;
    }
L_088705EC:
    ctx.gpr[24] = (aot_mem.aot_load32(ctx.gpr[24] + static_cast<std::uint32_t>(0)));
    ctx.gpr[13] = (ctx.gpr[13] + static_cast<std::uint32_t>(8));
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[24]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[13]);
    ctx.gpr[13] = (ctx.gpr[24] - ctx.gpr[13]);
    goto L_08870604;
L_08870604:
    ctx.gpr[15] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[15]) >> 16u));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(148), static_cast<std::uint16_t>(ctx.gpr[15]));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(152), static_cast<std::uint16_t>(ctx.gpr[14]));
    ctx.gpr[14] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(148))))));
    ctx.gpr[15] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(152))))));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(154), static_cast<std::uint16_t>(ctx.gpr[14]));
    ctx.gpr[14] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(154))))));
    ctx.gpr[24] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-19992)));
    ctx.gpr[14] = (ctx.gpr[15] - ctx.gpr[14]);
    ctx.gpr[14] = (ctx.gpr[14] << 16u);
    ctx.gpr[14] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[14]) >> 16u));
    ctx.gpr[24] = (ctx.gpr[24] ^ 31u);
    ctx.gpr[15] = (ctx.gpr[14] << 16u);
    ctx.gpr[24] = (ctx.gpr[24] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[15] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[15]) >> 16u));
    ctx.gpr[24] = (ctx.gpr[24] & 255u);
    { const bool branch_taken = ctx.gpr[24] == 0u;
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-19828)));
      if (branch_taken) {
          goto L_088708C4;
      }
      goto L_0887064C;
    }
L_0887064C:
    ctx.gpr[24] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-19816)));
    ctx.gpr[25] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-19824)));
    ctx.gpr[24] = (ctx.gpr[24] + static_cast<std::uint32_t>(-1));
    ctx.gpr[24] = (ctx.gpr[24] + ctx.gpr[25]);
    ctx.gpr[16] = (1u << 16u);
    ctx.gpr[18] = (1u << 16u);
    ctx.gpr[19] = (ctx.gpr[24] < static_cast<std::uint32_t>(32) ? 1u : 0u);
    ctx.gpr[25] = (0u | 45724u);
    ctx.gpr[16] = (ctx.gpr[5] + ctx.gpr[16]);
    ctx.gpr[17] = (0u | 45548u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[18] = (ctx.gpr[5] + ctx.gpr[18]);
      if (branch_taken) {
          goto L_088706A0;
      }
      goto L_0887067C;
    }
L_0887067C:
    ctx.gpr[24] = (ctx.gpr[24] + ctx.gpr[24]);
    ctx.gpr[24] = (ctx.gpr[5] + ctx.gpr[24]);
    ctx.gpr[24] = (ctx.gpr[24] + ctx.gpr[25]);
    ctx.gpr[24] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[24] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[15] = (ctx.gpr[15] - ctx.gpr[24]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[15]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
      if (branch_taken) {
          goto L_088706C4;
      }
      goto L_088706A0;
    }
L_088706A0:
    ctx.gpr[24] = (ctx.gpr[24] + static_cast<std::uint32_t>(-32));
    ctx.gpr[24] = (ctx.gpr[24] + ctx.gpr[24]);
    ctx.gpr[24] = (ctx.gpr[5] + ctx.gpr[24]);
    ctx.gpr[24] = (ctx.gpr[24] + ctx.gpr[25]);
    ctx.gpr[24] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[24] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[15] = (ctx.gpr[15] - ctx.gpr[24]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[15]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_088706C4;
L_088706C4:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-19828), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[15] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-19820)));
    { const bool branch_taken = ctx.gpr[15] != 0u;
    ctx.gpr[15] = (ctx.gpr[15] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088706E4;
      }
      goto L_088706D4;
    }
L_088706D4:
    ctx.gpr[15] = (0u | 32u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-19820), ctx.gpr[15]);
    ctx.gpr[15] = (0u | 32u);
    ctx.gpr[15] = (ctx.gpr[15] + static_cast<std::uint32_t>(-1));
    goto L_088706E4;
L_088706E4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-19820), ctx.gpr[15]);
    ctx.gpr[15] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-19824)));
    { const bool branch_taken = ctx.gpr[15] != 0u;
    ctx.gpr[24] = (ctx.gpr[15] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08870704;
      }
      goto L_088706F4;
    }
L_088706F4:
    ctx.gpr[15] = (0u | 32u);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(-19824), ctx.gpr[15]);
    ctx.gpr[15] = (0u | 32u);
    ctx.gpr[24] = (ctx.gpr[15] + static_cast<std::uint32_t>(-1));
    goto L_08870704;
L_08870704:
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(-19824), ctx.gpr[24]);
    ctx.gpr[15] = (ctx.gpr[24] + ctx.gpr[24]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-19820)));
    ctx.gpr[15] = (ctx.gpr[5] + ctx.gpr[15]);
    { const bool branch_taken = ctx.gpr[24] == ctx.gpr[16];
    ctx.gpr[15] = (ctx.gpr[15] + ctx.gpr[9]);
      if (branch_taken) {
          goto L_08870740;
      }
      goto L_0887071C;
    }
L_0887071C:
    ctx.gpr[24] = (ctx.gpr[16] + ctx.gpr[16]);
    ctx.gpr[24] = (ctx.gpr[5] + ctx.gpr[24]);
    ctx.gpr[24] = (ctx.gpr[24] + ctx.gpr[9]);
    ctx.gpr[24] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[24] + static_cast<std::uint32_t>(-19812))))));
    aot_mem.aot_store16(ctx.gpr[15] + static_cast<std::uint32_t>(-19812), static_cast<std::uint16_t>(ctx.gpr[24]));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-19824)));
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[8]);
    ctx.gpr[15] = (ctx.gpr[5] + ctx.gpr[8]);
    ctx.gpr[15] = (ctx.gpr[15] + ctx.gpr[9]);
    goto L_08870740;
L_08870740:
    aot_mem.aot_store16(ctx.gpr[15] + static_cast<std::uint32_t>(-19812), static_cast<std::uint16_t>(ctx.gpr[14]));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-19992)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(-20000)));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-1));
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[8] < static_cast<std::uint32_t>(32) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[14] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(-19860)));
      if (branch_taken) {
          goto L_0887077C;
      }
      goto L_08870760;
    }
L_08870760:
    ctx.gpr[8] = (ctx.gpr[8] << 2u);
    ctx.gpr[8] = (ctx.gpr[5] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[17]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[13] - ctx.gpr[8]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[14] = (ctx.gpr[14] + ctx.gpr[8]);
      if (branch_taken) {
          goto L_08870798;
      }
      goto L_0887077C;
    }
L_0887077C:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-32));
    ctx.gpr[8] = (ctx.gpr[8] << 2u);
    ctx.gpr[8] = (ctx.gpr[5] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[17]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[13] - ctx.gpr[8]);
    ctx.gpr[14] = (ctx.gpr[14] + ctx.gpr[8]);
    goto L_08870798;
L_08870798:
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(-19860), ctx.gpr[14]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[13]);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-19856)));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[14] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-19992)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[13]) >= 0;
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(-20000)));
      if (branch_taken) {
          goto L_088707C0;
      }
      goto L_088707B4;
    }
L_088707B4:
    ctx.gpr[9] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_088707C0;
L_088707C0:
    ctx.gpr[14] = (ctx.gpr[14] + static_cast<std::uint32_t>(-1));
    ctx.gpr[14] = (ctx.gpr[14] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[14] < static_cast<std::uint32_t>(32) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
      if (branch_taken) {
          goto L_088707F0;
      }
      goto L_088707D4;
    }
L_088707D4:
    ctx.gpr[8] = (ctx.gpr[14] << 2u);
    ctx.gpr[8] = (ctx.gpr[5] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[17]);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
      if (branch_taken) {
          goto L_0887080C;
      }
      goto L_088707F0;
    }
L_088707F0:
    ctx.gpr[8] = (ctx.gpr[14] + static_cast<std::uint32_t>(-32));
    ctx.gpr[8] = (ctx.gpr[8] << 2u);
    ctx.gpr[8] = (ctx.gpr[5] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    goto L_0887080C;
L_0887080C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) >= 0;
    ctx.gpr[8] = (20352u << 16u);
      if (branch_taken) {
          goto L_0887081C;
      }
      goto L_08870814;
    }
L_08870814:
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[16];
    goto L_0887081C;
L_0887081C:
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[12] = ctx.fpr[15] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-19856), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-19996)));
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08870848;
      }
      goto L_08870838;
    }
L_08870838:
    ctx.gpr[8] = (0u | 32u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-19996), ctx.gpr[8]);
    ctx.gpr[8] = (0u | 32u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-1));
    goto L_08870848;
L_08870848:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-19996), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(-20000)));
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[9] = (ctx.gpr[8] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08870868;
      }
      goto L_08870858;
    }
L_08870858:
    ctx.gpr[8] = (0u | 32u);
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(-20000), ctx.gpr[8]);
    ctx.gpr[8] = (0u | 32u);
    ctx.gpr[9] = (ctx.gpr[8] + static_cast<std::uint32_t>(-1));
    goto L_08870868;
L_08870868:
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(-20000), ctx.gpr[9]);
    ctx.gpr[8] = (ctx.gpr[9] << 2u);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-19996)));
    ctx.gpr[8] = (ctx.gpr[5] + ctx.gpr[8]);
    { const bool branch_taken = ctx.gpr[9] == ctx.gpr[18];
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[3]);
      if (branch_taken) {
          goto L_088708A4;
      }
      goto L_08870880;
    }
L_08870880:
    ctx.gpr[9] = (ctx.gpr[18] << 2u);
    ctx.gpr[9] = (ctx.gpr[5] + ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[3]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(-19988)));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(-19988), ctx.gpr[9]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(-20000)));
    ctx.gpr[8] = (ctx.gpr[8] << 2u);
    ctx.gpr[8] = (ctx.gpr[5] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[3]);
    goto L_088708A4;
L_088708A4:
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(-19988), ctx.gpr[13]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-19992)));
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(-19860)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[13]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
      if (branch_taken) {
          goto L_08870998;
      }
      goto L_088708C4;
    }
L_088708C4:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[15]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-19828), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[15] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-19816)));
    ctx.gpr[15] = (ctx.gpr[15] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(-19816), ctx.gpr[15]);
    ctx.gpr[15] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-19824)));
    { const bool branch_taken = ctx.gpr[15] != 0u;
    ctx.gpr[15] = (ctx.gpr[15] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088708FC;
      }
      goto L_088708EC;
    }
L_088708EC:
    ctx.gpr[15] = (0u | 32u);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(-19824), ctx.gpr[15]);
    ctx.gpr[15] = (0u | 32u);
    ctx.gpr[15] = (ctx.gpr[15] + static_cast<std::uint32_t>(-1));
    goto L_088708FC;
L_088708FC:
    ctx.gpr[24] = (ctx.gpr[15] + ctx.gpr[15]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[13]);
    ctx.gpr[24] = (ctx.gpr[5] + ctx.gpr[24]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(-19824), ctx.gpr[15]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[8] = (ctx.gpr[24] + ctx.gpr[9]);
    aot_mem.aot_store16(ctx.gpr[8] + static_cast<std::uint32_t>(-19812), static_cast<std::uint16_t>(ctx.gpr[14]));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(-19860)));
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[13]);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(-19860), ctx.gpr[8]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[13]) >= 0;
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-19856)));
      if (branch_taken) {
          goto L_08870938;
      }
      goto L_0887092C;
    }
L_0887092C:
    ctx.gpr[8] = (20352u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[15];
    goto L_08870938;
L_08870938:
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-19856), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-19992)));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-19992), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(-20000)));
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0887096C;
      }
      goto L_0887095C;
    }
L_0887095C:
    ctx.gpr[8] = (0u | 32u);
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(-20000), ctx.gpr[8]);
    ctx.gpr[8] = (0u | 32u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-1));
    goto L_0887096C;
L_0887096C:
    ctx.gpr[9] = (ctx.gpr[8] << 2u);
    ctx.gpr[9] = (ctx.gpr[5] + ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(-20000), ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[9] + ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(-19988), ctx.gpr[13]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-19992)));
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(-19860)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[13]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    goto L_08870998;
L_08870998:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[13]) >= 0;
    ctx.gpr[8] = (20352u << 16u);
      if (branch_taken) {
          goto L_088709A8;
      }
      goto L_088709A0;
    }
L_088709A0:
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[15];
    goto L_088709A8;
L_088709A8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.gpr[4] = (20352u << 16u);
      if (branch_taken) {
          goto L_088709B8;
      }
      goto L_088709B0;
    }
L_088709B0:
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[15];
    goto L_088709B8;
L_088709B8:
    ctx.fpr[15] = ctx.fpr[12] / ctx.fpr[13];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(-19852), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-19856)));
    ctx.fpr[12] = ctx.fpr[16] - ctx.fpr[12];
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.fpr[12] = std::sqrt(ctx.fpr[12]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[8] = (1u << 16u);
    ctx.gpr[8] = (ctx.gpr[5] + ctx.gpr[8]);
    ctx.fpr[12] = ctx.fpr[15] + ctx.fpr[12];
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(-19848), ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-19828)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-19816)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(-19852)));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
      if (branch_taken) {
          goto L_08870A1C;
      }
      goto L_08870A10;
    }
L_08870A10:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[16];
    goto L_08870A1C;
L_08870A1C:
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[15];
    ctx.gpr[4] = (14080u << 16u);
    ctx.gpr[6] = (1u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-19836), ctx.gpr[4]);
    goto L_08870A48;
L_08870A48:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08870AD8;
      }
      goto L_08870A50;
    }
L_08870A50:
    ctx.gpr[6] = (ctx.gpr[10] + static_cast<std::uint32_t>(12));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[6]);
    if (ctx.gpr[6] == ctx.gpr[15]) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[24]);
        goto L_08870A60;
    }
    goto L_08870A60;
L_08870A60:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[8] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[8]);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(28));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[6]);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[12] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[8]);
    ctx.gpr[13] = (ctx.gpr[10] ^ ctx.gpr[13]);
    ctx.gpr[13] = (ctx.gpr[13] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[13] = (ctx.gpr[13] & 255u);
    ctx.gpr[13] = (ctx.gpr[13] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[13] = (ctx.gpr[13] & 255u);
    { const bool branch_taken = ctx.gpr[13] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[9]);
      if (branch_taken) {
          goto L_088704FC;
      }
      goto L_08870AC0;
    }
L_08870AC0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[12]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[9]);
    goto L_08870AD8;
L_08870AD8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08870AF0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] + static_cast<std::uint32_t>(12));
    ctx.gpr[4] = (1u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2404)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(42));
    ctx.gpr[8] = (1u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(2404), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[7] = (ctx.gpr[16] + ctx.gpr[8]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(2388)));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(42));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(2388), ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[8] - ctx.gpr[5]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 2u));
    ctx.gpr[7] = (ctx.gpr[7] >> 30u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[18] < ctx.gpr[6] ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (ctx.gpr[18] << 2u);
      if (branch_taken) {
          goto L_08870EF4;
      }
      goto L_08870B78;
    }
L_08870B78:
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08870EF4;
      }
      goto L_08870B88;
    }
L_08870B88:
    ctx.gpr[6] = (ctx.gpr[18] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08870BE8;
      }
      goto L_08870BA0;
    }
L_08870BA0:
    ctx.gpr[8] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[9] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[9];
    ctx.gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_08870BD4;
      }
      goto L_08870BB0;
    }
L_08870BB0:
    ctx.gpr[8] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(2)));
    ctx.gpr[9] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(2)));
    if (ctx.gpr[8] != ctx.gpr[9]) {
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
        goto L_08870BD8;
    }
    goto L_08870BC0;
L_08870BC0:
    ctx.gpr[8] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[9];
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
      if (branch_taken) {
          goto L_08870BD8;
      }
      goto L_08870BD0;
    }
L_08870BD0:
    ctx.gpr[7] = (0u | 1u);
    goto L_08870BD4;
L_08870BD4:
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    goto L_08870BD8;
L_08870BD8:
    ctx.gpr[7] = (ctx.gpr[7] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08870C00;
      }
      goto L_08870BE8;
    }
L_08870BE8:
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[19] = (ctx.gpr[17] + static_cast<std::uint32_t>(10));
      if (branch_taken) {
          goto L_08870C08;
      }
      goto L_08870BF8;
    }
L_08870BF8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_08870C14;
      }
      goto L_08870C00;
    }
L_08870C00:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08870EF4;
      }
      goto L_08870C08;
    }
L_08870C08:
    ctx.gpr[7] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    goto L_08870C14;
L_08870C14:
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(2))))));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4))))));
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(6)));
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[8]));
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[9]));
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (1u << 16u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(38), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[6]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-19748))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(38))))));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 0 ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08870C74;
      }
      goto L_08870C64;
    }
L_08870C64:
    ctx.gpr[4] = (0u | 45788u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    goto L_08870C74;
L_08870C74:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(6)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[19] + ctx.gpr[6]);
    ctx.gpr[7] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(8))))));
    ctx.gpr[7] = (ctx.gpr[19] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08870C9Cu);
    ctx.gpr[9] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 489u, 0x0886EE98u>(ctx, &aot_mem) && ctx.pc == 0x08870C9Cu) goto L_08870C9C;
    return;
L_08870C9C:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(6)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08870EF4;
      }
      goto L_08870CA8;
    }
L_08870CA8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] << 8u);
    ctx.gpr[19] = (ctx.gpr[5] | ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(594)));
    ctx.gpr[19] = (ctx.gpr[19] & 65535u);
    ctx.gpr[4] = (ctx.gpr[19] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] & 4095u);
    ctx.gpr[5] = (ctx.gpr[4] & 2048u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08870CDC;
      }
      goto L_08870CD4;
    }
L_08870CD4:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-4096));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    goto L_08870CDC;
L_08870CDC:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 32 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08870EF4;
      }
      goto L_08870CEC;
    }
L_08870CEC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08870EC4;
      }
      goto L_08870CF4;
    }
L_08870CF4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(604)));
    ctx.gpr[7] = (ctx.gpr[4] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08870DFC;
      }
      goto L_08870D04;
    }
L_08870D04:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(596)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(604), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[7] = (ctx.gpr[5] < static_cast<std::uint32_t>(32) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(600), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08870D24;
      }
      goto L_08870D1C;
    }
L_08870D1C:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(600), ctx.gpr[5]);
    goto L_08870D24;
L_08870D24:
    ctx.gpr[7] = (ctx.gpr[6] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(596)));
      if (branch_taken) {
          goto L_08870D80;
      }
      goto L_08870D30;
    }
L_08870D30:
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[7] = (ctx.gpr[5] < static_cast<std::uint32_t>(32) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(1404));
      if (branch_taken) {
          goto L_08870D54;
      }
      goto L_08870D40;
    }
L_08870D40:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[5] = (ctx.gpr[18] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(608));
      if (branch_taken) {
          goto L_08870D6C;
      }
      goto L_08870D54;
    }
L_08870D54:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-32));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(1404));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[5] = (ctx.gpr[18] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(608));
    goto L_08870D6C;
L_08870D6C:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[6] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(596)));
      if (branch_taken) {
          goto L_08870D30;
      }
      goto L_08870D80;
    }
L_08870D80:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(32) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(1404));
      if (branch_taken) {
          goto L_08870DA4;
      }
      goto L_08870D90;
    }
L_08870D90:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[18] = (ctx.gpr[18] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(608));
      if (branch_taken) {
          goto L_08870DBC;
      }
      goto L_08870DA4;
    }
L_08870DA4:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(1404));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[18] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(608));
    goto L_08870DBC;
L_08870DBC:
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (0u | 175u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[18] | 0u);
    goto L_08870DD0;
L_08870DD0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[8] = (ctx.gpr[18] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_08870DD0;
      }
      goto L_08870DF4;
    }
L_08870DF4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
      if (branch_taken) {
          goto L_08870EC4;
      }
      goto L_08870DFC;
    }
L_08870DFC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(596)));
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[7] = (ctx.gpr[6] < static_cast<std::uint32_t>(32) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(1404));
      if (branch_taken) {
          goto L_08870E28;
      }
      goto L_08870E10;
    }
L_08870E10:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[6] = (ctx.lo);
    ctx.gpr[6] = (ctx.gpr[18] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(608));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08870E44;
      }
      goto L_08870E28;
    }
L_08870E28:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-32));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(1404));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[6] = (ctx.lo);
    ctx.gpr[6] = (ctx.gpr[18] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(608));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    goto L_08870E44;
L_08870E44:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08870EC4;
      }
      goto L_08870E4C;
    }
L_08870E4C:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(32) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(1404));
      if (branch_taken) {
          goto L_08870E70;
      }
      goto L_08870E5C;
    }
L_08870E5C:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[18] = (ctx.gpr[18] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(608));
      if (branch_taken) {
          goto L_08870E88;
      }
      goto L_08870E70;
    }
L_08870E70:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(1404));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[18] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(608));
    goto L_08870E88;
L_08870E88:
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (0u | 175u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[18] | 0u);
    goto L_08870E9C;
L_08870E9C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[8] = (ctx.gpr[18] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_08870E9C;
      }
      goto L_08870EC0;
    }
L_08870EC0:
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    goto L_08870EC4;
L_08870EC4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-7064)));
    ctx.gpr[5] = (0u | 5u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint16_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(34), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(35), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[19]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(ctx.gpr[1]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x08870EF4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 263u, 0x0886DB68u>(ctx, &aot_mem) && ctx.pc == 0x08870EF4u) goto L_08870EF4;
    return;
L_08870EF4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08870F10:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-272));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(248), ctx.gpr[21]);
    ctx.gpr[21] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(140)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(132)));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[12] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(112)));
    ctx.gpr[7] = (0u | 47u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(108)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(232), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(236), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(252), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(264), ctx.gpr[31]);
    goto L_08870F5C;
L_08870F5C:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08870FDC;
      }
      goto L_08870F64;
    }
L_08870F64:
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[8] = (ctx.gpr[5] < static_cast<std::uint32_t>(48) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(1412));
      if (branch_taken) {
          goto L_08870F8C;
      }
      goto L_08870F74;
    }
L_08870F74:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[5] = (ctx.gpr[21] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(144));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08870FA8;
      }
      goto L_08870F8C;
    }
L_08870F8C:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-48));
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(1412));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[5] = (ctx.gpr[21] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    goto L_08870FA8;
L_08870FA8:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08870FDC;
      }
      goto L_08870FB0;
    }
L_08870FB0:
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(140), ctx.gpr[4]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(136)));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_08870FCC;
      }
      goto L_08870FC4;
    }
L_08870FC4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(136), ctx.gpr[7]);
      if (branch_taken) {
          goto L_08870FD4;
      }
      goto L_08870FCC;
    }
L_08870FCC:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(136), ctx.gpr[8]);
    goto L_08870FD4;
L_08870FD4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08870F5C;
      }
      goto L_08870FDC;
    }
L_08870FDC:
    ctx.gpr[4] = (ctx.gpr[12] - ctx.gpr[3]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[5] >> 30u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[4] = (ctx.gpr[22] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(33), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08871448;
      }
      goto L_08871000;
    }
L_08871000:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(220), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), ctx.gpr[7]);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), ctx.gpr[6]);
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), ctx.gpr[4]);
    ctx.gpr[6] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[21] + static_cast<std::uint32_t>(100));
    ctx.gpr[17] = (0u | 46u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), ctx.gpr[6]);
    goto L_08871080;
L_08871080:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.gpr[9] = (ctx.gpr[3] + ctx.gpr[4]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.gpr[14] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[15] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
      if (branch_taken) {
          goto L_088710AC;
      }
      goto L_0887109C;
    }
L_0887109C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), ctx.gpr[15]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), ctx.gpr[14]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), ctx.gpr[13]);
      if (branch_taken) {
          goto L_088713A8;
      }
      goto L_088710AC;
    }
L_088710AC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), ctx.gpr[15]);
    ctx.gpr[16] = (ctx.gpr[9] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), ctx.gpr[14]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), ctx.gpr[13]);
      if (branch_taken) {
          goto L_08871380;
      }
      goto L_088710CC;
    }
L_088710CC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), ctx.gpr[15]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), ctx.gpr[14]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), ctx.gpr[13]);
      if (branch_taken) {
          goto L_08871380;
      }
      goto L_088710E0;
    }
L_088710E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[9] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(28));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(592));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(28));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[8]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[10] = (ctx.gpr[9] + ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[10]);
    ctx.gpr[9] = (ctx.gpr[9] << 2u);
    ctx.gpr[9] = (ctx.gpr[16] + ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(28));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(220), ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), ctx.gpr[5]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[9] ^ ctx.gpr[8]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[2] = (1u << 16u);
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[2] = (ctx.gpr[16] + ctx.gpr[2]);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_088711A4;
L_088711A4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[8] ^ ctx.gpr[9]);
      if (branch_taken) {
          goto L_0887123C;
      }
      goto L_088711AC;
    }
L_088711AC:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (ctx.gpr[8] ^ ctx.gpr[9]);
        goto L_0887123C;
    }
    goto L_088711C0;
L_088711C0:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-19848)));
    ctx.gpr[4] = (ctx.gpr[20] - ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08871204;
      }
      goto L_088711E0;
    }
L_088711E0:
    ctx.gpr[4] = (ctx.gpr[8] ^ ctx.gpr[9]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), ctx.gpr[15]);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), ctx.gpr[14]);
    ctx.gpr[9] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), ctx.gpr[13]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[9] = (ctx.gpr[9] & 255u);
      if (branch_taken) {
          goto L_08871258;
      }
      goto L_08871204;
    }
L_08871204:
    ctx.gpr[4] = (ctx.gpr[9] + static_cast<std::uint32_t>(12));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    if (ctx.gpr[4] == ctx.gpr[11]) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[10]);
        goto L_08871214;
    }
    goto L_08871214;
L_08871214:
    ctx.gpr[15] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[14] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[9] ^ ctx.gpr[8]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_088711A4;
      }
      goto L_0887123C;
    }
L_0887123C:
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), ctx.gpr[15]);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), ctx.gpr[14]);
    ctx.gpr[9] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), ctx.gpr[13]);
    ctx.gpr[9] = (ctx.gpr[9] & 255u);
    goto L_08871258;
L_08871258:
    { const bool branch_taken = ctx.gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887137C;
      }
      goto L_08871260;
    }
L_08871260:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[4];
    ctx.gpr[4] = (ctx.gpr[8] + static_cast<std::uint32_t>(-12));
      if (branch_taken) {
          goto L_08871278;
      }
      goto L_0887126C;
    }
L_0887126C:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[8]);
    ctx.gpr[4] = (ctx.gpr[8] + static_cast<std::uint32_t>(-12));
    goto L_08871278;
L_08871278:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), ctx.gpr[5]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08871318;
      }
      goto L_088712A4;
    }
L_088712A4:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[8] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(2)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[4] + static_cast<std::uint32_t>(4096));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
      if (branch_taken) {
          goto L_088712DC;
      }
      goto L_088712D4;
    }
L_088712D4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
      if (branch_taken) {
          goto L_088712E4;
      }
      goto L_088712DC;
    }
L_088712DC:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    goto L_088712E4;
L_088712E4:
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x088712F8u);
    ctx.gpr[7] = (ctx.gpr[8] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 462u, 0x0886EAD0u>(ctx, &aot_mem) && ctx.pc == 0x088712F8u) goto L_088712F8;
    return;
L_088712F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (ctx.gpr[8] ^ ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_0887136C;
      }
      goto L_08871318;
    }
L_08871318:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[8]);
      if (branch_taken) {
          goto L_08871348;
      }
      goto L_08871324;
    }
L_08871324:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (ctx.gpr[8] ^ ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_0887136C;
      }
      goto L_08871348;
    }
L_08871348:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (ctx.gpr[8] ^ ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_0887136C;
L_0887136C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08871260;
      }
      goto L_08871374;
    }
L_08871374:
    ctx.gpr[12] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(112)));
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(108)));
    goto L_0887137C;
L_0887137C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    goto L_08871380;
L_08871380:
    ctx.gpr[4] = (ctx.gpr[4] ^ 46u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088713A8;
      }
      goto L_08871394;
    }
L_08871394:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088713A8;
      }
      goto L_088713A0;
    }
L_088713A0:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(33), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_088713A8;
L_088713A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    ctx.gpr[5] = (ctx.gpr[12] - ctx.gpr[3]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (ctx.gpr[6] >> 30u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), ctx.gpr[4]);
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[4] = (ctx.gpr[22] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08871080;
      }
      goto L_088713D8;
    }
L_088713D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(220)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[20]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[19]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[6]);
    goto L_08871448;
L_08871448:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(236)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(240)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(244)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(248)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(252)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(264)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08871478:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-7064), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-7064)));
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[7] = (2230u << 16u);
    ctx.gpr[6] = (2232u << 16u);
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(-7063), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(6264));
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-3588));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(-7063)));
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-3584));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088714CC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24700)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0887151C;
      }
      goto L_088714F4;
    }
L_088714F4:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x08871500u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08871500u) goto L_08871500;
    return;
L_08871500:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08871518;
      }
      goto L_0887150C;
    }
L_0887150C:
    ctx.gpr[31] = (0x08871514u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08871514u) goto L_08871514;
    return;
L_08871514:
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
    goto L_08871518;
L_08871518:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(24700), ctx.gpr[18]);
    goto L_0887151C;
L_0887151C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x08871528u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08871528u) goto L_08871528;
    return;
L_08871528:
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
L_08871544:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-7828)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] << 7u);
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[6] << 4u);
    ctx.gpr[6] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088715C0;
      }
      goto L_08871590;
    }
L_08871590:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-7828)));
    ctx.gpr[7] = (ctx.gpr[6] << 7u);
    ctx.gpr[8] = (ctx.gpr[7] + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[6] = (ctx.gpr[6] << 4u);
    ctx.gpr[6] = (ctx.gpr[7] - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_088715C8;
      }
      goto L_088715B8;
    }
L_088715B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08871648;
      }
      goto L_088715C0;
    }
L_088715C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887166C;
      }
      goto L_088715C8;
    }
L_088715C8:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-7828)));
    ctx.gpr[7] = (ctx.gpr[6] << 7u);
    ctx.gpr[8] = (ctx.gpr[7] + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[6] = (ctx.gpr[6] << 4u);
    ctx.gpr[6] = (ctx.gpr[7] - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[6] = (ctx.gpr[6] & 8u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887162C;
      }
      goto L_088715F8;
    }
L_088715F8:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-7828)));
    ctx.gpr[6] = (ctx.gpr[5] << 7u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
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
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887165C;
      }
      goto L_0887162C;
    }
L_0887162C:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x08871638u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 166u, 0x089D568Cu>(ctx, &aot_mem) && ctx.pc == 0x08871638u) goto L_08871638;
    return;
L_08871638:
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
          goto L_0887165C;
      }
      goto L_08871648;
    }
L_08871648:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[31] = (0x08871654u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 166u, 0x089D568Cu>(ctx, &aot_mem) && ctx.pc == 0x08871654u) goto L_08871654;
    return;
L_08871654:
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
    goto L_0887165C;
L_0887165C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08871668u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08871AF4;
L_08871668:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    goto L_0887166C;
L_0887166C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08871684:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08871710;
      }
      goto L_0887169C;
    }
L_0887169C:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08871710;
      }
      goto L_088716B0;
    }
L_088716B0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08871710;
      }
      goto L_088716C8;
    }
L_088716C8:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08871710;
      }
      goto L_088716DC;
    }
L_088716DC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08871710;
      }
      goto L_088716F4;
    }
L_088716F4:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(28)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08871710;
      }
      goto L_08871708;
    }
L_08871708:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08871714;
      }
      goto L_08871710;
    }
L_08871710:
    ctx.gpr[2] = (0u | 0u);
    goto L_08871714;
L_08871714:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887171C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(13828)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(13824)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x08871750u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 411u, 0x08AED6BCu>(ctx, &aot_mem) && ctx.pc == 0x08871750u) goto L_08871750;
    return;
L_08871750:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08871770;
      }
      goto L_08871760;
    }
L_08871760:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_088718F0;
      }
      goto L_08871768;
    }
L_08871768:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08871788;
      }
      goto L_08871770;
    }
L_08871770:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08871800;
      }
      goto L_08871778;
    }
L_08871778:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08871878;
      }
      goto L_08871780;
    }
L_08871780:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088718F0;
      }
      goto L_08871788;
    }
L_08871788:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088717EC;
      }
      goto L_088717A0;
    }
L_088717A0:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x088717ACu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_088723E8;
L_088717AC:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_088717D0;
      }
      goto L_088717C8;
    }
L_088717C8:
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[9];
    // nop
      if (branch_taken) {
          goto L_088717F4;
      }
      goto L_088717D0;
    }
L_088717D0:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088717A0;
      }
      goto L_088717EC;
    }
L_088717EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088718F0;
      }
      goto L_088717F4;
    }
L_088717F4:
    ctx.gpr[2] = (ctx.gpr[4] << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 16u));
      if (branch_taken) {
          goto L_088718F4;
      }
      goto L_08871800;
    }
L_08871800:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(22)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08871864;
      }
      goto L_08871818;
    }
L_08871818:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08871824u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_088723CC;
L_08871824:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_08871848;
      }
      goto L_08871840;
    }
L_08871840:
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[9];
    // nop
      if (branch_taken) {
          goto L_0887186C;
      }
      goto L_08871848;
    }
L_08871848:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(22)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08871818;
      }
      goto L_08871864;
    }
L_08871864:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088718F0;
      }
      goto L_0887186C;
    }
L_0887186C:
    ctx.gpr[2] = (ctx.gpr[4] << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 16u));
      if (branch_taken) {
          goto L_088718F4;
      }
      goto L_08871878;
    }
L_08871878:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088718F0;
      }
      goto L_08871890;
    }
L_08871890:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x0887189Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08872404;
L_0887189C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_088718C0;
      }
      goto L_088718B8;
    }
L_088718B8:
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[9];
    // nop
      if (branch_taken) {
          goto L_088718E4;
      }
      goto L_088718C0;
    }
L_088718C0:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08871890;
      }
      goto L_088718DC;
    }
L_088718DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088718F0;
      }
      goto L_088718E4;
    }
L_088718E4:
    ctx.gpr[2] = (ctx.gpr[4] << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 16u));
      if (branch_taken) {
          goto L_088718F4;
      }
      goto L_088718F0;
    }
L_088718F0:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    goto L_088718F4;
L_088718F4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08871908:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(13828)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(13824)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x08871948u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 411u, 0x08AED6BCu>(ctx, &aot_mem) && ctx.pc == 0x08871948u) goto L_08871948;
    return;
L_08871948:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08871968;
      }
      goto L_08871958;
    }
L_08871958:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08871ADC;
      }
      goto L_08871960;
    }
L_08871960:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08871980;
      }
      goto L_08871968;
    }
L_08871968:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_088719F4;
      }
      goto L_08871970;
    }
L_08871970:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08871A68;
      }
      goto L_08871978;
    }
L_08871978:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08871ADC;
      }
      goto L_08871980;
    }
L_08871980:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088719E0;
      }
      goto L_08871994;
    }
L_08871994:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x088719A0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_088723E8;
L_088719A0:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_088719C4;
      }
      goto L_088719BC;
    }
L_088719BC:
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[9];
    // nop
      if (branch_taken) {
          goto L_088719E8;
      }
      goto L_088719C4;
    }
L_088719C4:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08871994;
      }
      goto L_088719E0;
    }
L_088719E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08871ADC;
      }
      goto L_088719E8;
    }
L_088719E8:
    ctx.gpr[2] = (ctx.gpr[4] << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 16u));
      if (branch_taken) {
          goto L_08871AE0;
      }
      goto L_088719F4;
    }
L_088719F4:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(22)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08871A54;
      }
      goto L_08871A08;
    }
L_08871A08:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08871A14u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_088723CC;
L_08871A14:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_08871A38;
      }
      goto L_08871A30;
    }
L_08871A30:
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[9];
    // nop
      if (branch_taken) {
          goto L_08871A5C;
      }
      goto L_08871A38;
    }
L_08871A38:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(22)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08871A08;
      }
      goto L_08871A54;
    }
L_08871A54:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08871ADC;
      }
      goto L_08871A5C;
    }
L_08871A5C:
    ctx.gpr[2] = (ctx.gpr[4] << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 16u));
      if (branch_taken) {
          goto L_08871AE0;
      }
      goto L_08871A68;
    }
L_08871A68:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08871ADC;
      }
      goto L_08871A7C;
    }
L_08871A7C:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08871A88u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08872404;
L_08871A88:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_08871AAC;
      }
      goto L_08871AA4;
    }
L_08871AA4:
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[9];
    // nop
      if (branch_taken) {
          goto L_08871AD0;
      }
      goto L_08871AAC;
    }
L_08871AAC:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08871A7C;
      }
      goto L_08871AC8;
    }
L_08871AC8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08871ADC;
      }
      goto L_08871AD0;
    }
L_08871AD0:
    ctx.gpr[2] = (ctx.gpr[4] << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 16u));
      if (branch_taken) {
          goto L_08871AE0;
      }
      goto L_08871ADC;
    }
L_08871ADC:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    goto L_08871AE0;
L_08871AE0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08871AF4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-176));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[31]);
    ctx.gpr[31] = (0x08871B2Cu);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    goto L_08871684;
L_08871B2C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08871B88;
      }
      goto L_08871B34;
    }
L_08871B34:
    ctx.gpr[4] = (2225u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08871B44u);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(-3564));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 377u, 0x08AF5D84u>(ctx, &aot_mem) && ctx.pc == 0x08871B44u) goto L_08871B44;
    return;
L_08871B44:
    ctx.gpr[21] = (ctx.gpr[3] | 0u);
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08871B54u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 377u, 0x08AF5D84u>(ctx, &aot_mem) && ctx.pc == 0x08871B54u) goto L_08871B54;
    return;
L_08871B54:
    ctx.gpr[23] = (ctx.gpr[3] | 0u);
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08871B64u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 377u, 0x08AF5D84u>(ctx, &aot_mem) && ctx.pc == 0x08871B64u) goto L_08871B64;
    return;
L_08871B64:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[9] = (ctx.gpr[23] | 0u);
    ctx.gpr[8] = (ctx.gpr[22] | 0u);
    ctx.gpr[11] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08871B88u);
    ctx.gpr[10] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 806u, 0x08AEB698u>(ctx, &aot_mem) && ctx.pc == 0x08871B88u) goto L_08871B88;
    return;
L_08871B88:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(104)));
    ctx.gpr[22] = (0u | 1u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[21] = (0u | 0u);
      if (branch_taken) {
          goto L_08871C30;
      }
      goto L_08871B9C;
    }
L_08871B9C:
    ctx.gpr[18] = (0u | 4u);
    ctx.gpr[19] = (2230u << 16u);
    goto L_08871BA4;
L_08871BA4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    ctx.gpr[20] = (ctx.gpr[22] << 6u);
    ctx.gpr[4] = (ctx.gpr[22] << 3u);
    ctx.gpr[20] = (ctx.gpr[20] - ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[20]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08871BC4u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08871684;
L_08871BC4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08871C18;
      }
      goto L_08871BCC;
    }
L_08871BCC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    ctx.gpr[2] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-7060)));
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08871BF4;
      }
      goto L_08871BE4;
    }
L_08871BE4:
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08871BFC;
      }
      goto L_08871BEC;
    }
L_08871BEC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08871C18;
      }
      goto L_08871BF4;
    }
L_08871BF4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08871C34;
      }
      goto L_08871BFC;
    }
L_08871BFC:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08871C14;
      }
      goto L_08871C04;
    }
L_08871C04:
    { const bool branch_taken = ctx.gpr[21] != 0u;
    // nop
      if (branch_taken) {
          goto L_08871C18;
      }
      goto L_08871C0C;
    }
L_08871C0C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08871C18;
      }
      goto L_08871C14;
    }
L_08871C14:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    goto L_08871C18;
L_08871C18:
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(104)));
    ctx.gpr[22] = (ctx.gpr[22] & 65535u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08871BA4;
      }
      goto L_08871C30;
    }
L_08871C30:
    ctx.gpr[2] = (ctx.gpr[21] | 0u);
    goto L_08871C34;
L_08871C34:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08871C60:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-176));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[31]);
    ctx.gpr[31] = (0x08871C98u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    goto L_08871684;
L_08871C98:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08871CF4;
      }
      goto L_08871CA0;
    }
L_08871CA0:
    ctx.gpr[4] = (2225u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08871CB0u);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(-3564));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 377u, 0x08AF5D84u>(ctx, &aot_mem) && ctx.pc == 0x08871CB0u) goto L_08871CB0;
    return;
L_08871CB0:
    ctx.gpr[21] = (ctx.gpr[3] | 0u);
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08871CC0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 377u, 0x08AF5D84u>(ctx, &aot_mem) && ctx.pc == 0x08871CC0u) goto L_08871CC0;
    return;
L_08871CC0:
    ctx.gpr[23] = (ctx.gpr[3] | 0u);
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08871CD0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 377u, 0x08AF5D84u>(ctx, &aot_mem) && ctx.pc == 0x08871CD0u) goto L_08871CD0;
    return;
L_08871CD0:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[9] = (ctx.gpr[23] | 0u);
    ctx.gpr[8] = (ctx.gpr[22] | 0u);
    ctx.gpr[11] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08871CF4u);
    ctx.gpr[10] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 806u, 0x08AEB698u>(ctx, &aot_mem) && ctx.pc == 0x08871CF4u) goto L_08871CF4;
    return;
L_08871CF4:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(22)));
    ctx.gpr[19] = (0u | 1u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08871D54;
      }
      goto L_08871D08;
    }
L_08871D08:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[18] = (ctx.gpr[19] << 6u);
    ctx.gpr[4] = (ctx.gpr[19] << 3u);
    ctx.gpr[18] = (ctx.gpr[18] - ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08871D28u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08871684;
L_08871D28:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08871D3C;
      }
      goto L_08871D30;
    }
L_08871D30:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[20] + ctx.gpr[18]);
      if (branch_taken) {
          goto L_08871D54;
      }
      goto L_08871D3C;
    }
L_08871D3C:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(22)));
    ctx.gpr[19] = (ctx.gpr[19] & 65535u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08871D08;
      }
      goto L_08871D54;
    }
L_08871D54:
    ctx.gpr[2] = (ctx.gpr[20] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08871D84:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[23]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[23] = (ctx.gpr[6] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    ctx.gpr[31] = (0x08871DC4u);
    ctx.gpr[22] = (ctx.gpr[7] & 255u);
    goto L_08871684;
L_08871DC4:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[23] == 0u;
    ctx.gpr[21] = (0u | 1u);
      if (branch_taken) {
          goto L_08871DDC;
      }
      goto L_08871DD0;
    }
L_08871DD0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08871DF0;
      }
      goto L_08871DDC;
    }
L_08871DDC:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_08871DF8;
      }
      goto L_08871DE4;
    }
L_08871DE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_08871DF8;
      }
      goto L_08871DF0;
    }
L_08871DF0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_08871DFC;
      }
      goto L_08871DF8;
    }
L_08871DF8:
    ctx.gpr[20] = (0u | 0u);
    goto L_08871DFC;
L_08871DFC:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(44)));
    ctx.gpr[18] = (0u | 0u);
    goto L_08871E04;
L_08871E04:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_08871E14;
      }
      goto L_08871E0C;
    }
L_08871E0C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[21] | 0u);
      if (branch_taken) {
          goto L_08871E64;
      }
      goto L_08871E14;
    }
L_08871E14:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08871E24u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    goto L_08871684;
L_08871E24:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08871E60;
      }
      goto L_08871E2C;
    }
L_08871E2C:
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_08871E40;
      }
      goto L_08871E34;
    }
L_08871E34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08871E54;
      }
      goto L_08871E40;
    }
L_08871E40:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_08871E58;
      }
      goto L_08871E48;
    }
L_08871E48:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_08871E58;
      }
      goto L_08871E54;
    }
L_08871E54:
    ctx.gpr[20] = (ctx.gpr[19] | 0u);
    goto L_08871E58;
L_08871E58:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(44)));
      if (branch_taken) {
          goto L_08871E64;
      }
      goto L_08871E60;
    }
L_08871E60:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(52)));
    goto L_08871E64;
L_08871E64:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08871E04;
      }
      goto L_08871E6C;
    }
L_08871E6C:
    ctx.gpr[2] = (ctx.gpr[20] | 0u);
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
L_08871E9C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08871EB8u);
    ctx.gpr[16] = (ctx.gpr[6] & 255u);
    goto L_08871C60;
L_08871EB8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08871EFC;
      }
      goto L_08871EC4;
    }
L_08871EC4:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08871EE4;
      }
      goto L_08871ECC;
    }
L_08871ECC:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_08871EFC;
      }
      goto L_08871EE4;
    }
L_08871EE4:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(42)));
    ctx.gpr[5] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_08871EFC;
      }
      goto L_08871EFC;
    }
L_08871EFC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08871F10:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[17] = (ctx.gpr[8] | 0u);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[16] = (ctx.gpr[7] | 0u);
    ctx.gpr[19] = (ctx.gpr[6] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x08871F40u);
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    goto L_088723CC;
L_08871F40:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08871F64;
      }
      goto L_08871F4C;
    }
L_08871F4C:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.gpr[6] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_08871F78;
      }
      goto L_08871F64;
    }
L_08871F64:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(42)));
    ctx.gpr[6] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_08871F78;
L_08871F78:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(2));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
    goto L_08871F8C;
L_08871F8C:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[8] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(2));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08871F8C;
      }
      goto L_08871FB0;
    }
L_08871FB0:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(20), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(2));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2));
    goto L_08871FC8;
L_08871FC8:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(18)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(20), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(2));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08871FC8;
      }
      goto L_08871FEC;
    }
L_08871FEC:
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
L_08872008:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[7] << 16u);
    ctx.gpr[17] = (ctx.gpr[8] << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    ctx.gpr[16] = (ctx.gpr[9] | 0u);
    ctx.gpr[20] = (ctx.gpr[6] & 255u);
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[18]) >> 16u));
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 16u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x08872048u);
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    goto L_088723CC;
L_08872048:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_0887206C;
      }
      goto L_08872054;
    }
L_08872054:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(40)));
    ctx.gpr[6] = (ctx.gpr[5] << 6u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
      if (branch_taken) {
          goto L_08872080;
      }
      goto L_0887206C;
    }
L_0887206C:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(42)));
    ctx.gpr[6] = (ctx.gpr[5] << 6u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    goto L_08872080;
L_08872080:
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[18]));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(42), static_cast<std::uint16_t>(ctx.gpr[17]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(24), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(2));
    ctx.gpr[16] = (ctx.gpr[5] + static_cast<std::uint32_t>(2));
    goto L_088720A0;
L_088720A0:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(22)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(24), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[18]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_088720A0;
      }
      goto L_088720C4;
    }
L_088720C4:
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
L_088720E4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[7] << 16u);
    ctx.gpr[16] = (ctx.gpr[6] & 255u);
    ctx.gpr[6] = (ctx.gpr[8] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 16u));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(ctx.gpr[6]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[21]);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[20]);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[30]);
    ctx.gpr[30] = (ctx.gpr[9] << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    ctx.gpr[23] = (ctx.gpr[10] << 16u);
    ctx.gpr[22] = (ctx.gpr[11] << 16u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[30] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[30]) >> 16u));
    ctx.gpr[23] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[23]) >> 16u));
    ctx.gpr[22] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[22]) >> 16u));
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[31]);
    ctx.gpr[31] = (0x0887217Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_088723CC;
L_0887217C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_088721A8;
      }
      goto L_08872190;
    }
L_08872190:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.gpr[6] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_088721BC;
      }
      goto L_088721A8;
    }
L_088721A8:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(42)));
    ctx.gpr[6] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_088721BC;
L_088721BC:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(16))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(18))))));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(64), static_cast<std::uint16_t>(ctx.gpr[16]));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(46), static_cast<std::uint16_t>(ctx.gpr[5]));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(44), static_cast<std::uint16_t>(ctx.gpr[6]));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(48), static_cast<std::uint16_t>(ctx.gpr[30]));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(50), static_cast<std::uint16_t>(ctx.gpr[23]));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(52), static_cast<std::uint16_t>(ctx.gpr[22]));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(54), static_cast<std::uint16_t>(ctx.gpr[21]));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(56), static_cast<std::uint16_t>(ctx.gpr[20]));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(58), static_cast<std::uint16_t>(ctx.gpr[19]));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(46)));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(60), static_cast<std::uint16_t>(ctx.gpr[18]));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(64)));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(62), static_cast<std::uint16_t>(ctx.gpr[17]));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(46), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[30] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
    goto L_08872208;
L_08872208:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(46)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(46), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[30]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08872208;
      }
      goto L_08872228;
    }
L_08872228:
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
L_08872258:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[18] = (ctx.gpr[6] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x08872280u);
    ctx.gpr[16] = (ctx.gpr[7] & 65535u);
    goto L_088723CC;
L_08872280:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_088722A4;
      }
      goto L_0887228C;
    }
L_0887228C:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(40)));
    ctx.gpr[6] = (ctx.gpr[5] << 6u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
      if (branch_taken) {
          goto L_088722B8;
      }
      goto L_088722A4;
    }
L_088722A4:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(42)));
    ctx.gpr[6] = (ctx.gpr[5] << 6u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    goto L_088722B8;
L_088722B8:
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[16]));
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
L_088722D4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[18] = (ctx.gpr[6] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x088722FCu);
    ctx.gpr[16] = (ctx.gpr[7] & 65535u);
    goto L_088723CC;
L_088722FC:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08872320;
      }
      goto L_08872308;
    }
L_08872308:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(40)));
    ctx.gpr[6] = (ctx.gpr[5] << 6u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
      if (branch_taken) {
          goto L_08872334;
      }
      goto L_08872320;
    }
L_08872320:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(42)));
    ctx.gpr[6] = (ctx.gpr[5] << 6u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    goto L_08872334;
L_08872334:
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(44), static_cast<std::uint16_t>(ctx.gpr[16]));
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
L_08872350:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[18] = (ctx.gpr[6] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x08872378u);
    ctx.gpr[16] = (ctx.gpr[7] & 65535u);
    goto L_088723CC;
L_08872378:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_0887239C;
      }
      goto L_08872384;
    }
L_08872384:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(40)));
    ctx.gpr[6] = (ctx.gpr[5] << 6u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
      if (branch_taken) {
          goto L_088723B0;
      }
      goto L_0887239C;
    }
L_0887239C:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(42)));
    ctx.gpr[6] = (ctx.gpr[5] << 6u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    goto L_088723B0;
L_088723B0:
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(66), static_cast<std::uint16_t>(ctx.gpr[16]));
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
L_088723CC:
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[5] << 6u);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088723E8:
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[5] << 6u);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08872404:
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (ctx.gpr[5] << 6u);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08872420:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(106)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08872494;
      }
      goto L_0887244C;
    }
L_0887244C:
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(32))))));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08872464u);
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    goto L_088723E8;
L_08872464:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08872474u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    goto L_08871684;
L_08872474:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887249C;
      }
      goto L_0887247C;
    }
L_0887247C:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(106)));
    ctx.gpr[18] = (ctx.gpr[18] & 65535u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887244C;
      }
      goto L_08872494;
    }
L_08872494:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088724A4;
      }
      goto L_0887249C;
    }
L_0887249C:
    ctx.gpr[2] = (ctx.gpr[18] << 16u);
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 16u));
    goto L_088724A4;
L_088724A4:
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
L_088724BC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x088724E8u);
    ctx.gpr[6] = (0u | 1u);
    goto L_08871E9C;
L_088724E8:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088724FCu);
    ctx.gpr[6] = (0u | 0u);
    goto L_08871E9C;
L_088724FC:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[31] = (0x0887250Cu);
    ctx.gpr[5] = (0u | 19u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 81u, 0x0883C5F8u>(ctx, &aot_mem) && ctx.pc == 0x0887250Cu) goto L_0887250C;
    return;
L_0887250C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088725DC;
      }
      goto L_08872514;
    }
L_08872514:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08872528;
L_08872528:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(2)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(2));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08872528;
      }
      goto L_08872544;
    }
L_08872544:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08872550;
L_08872550:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(20), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(2));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08872550;
      }
      goto L_0887256C;
    }
L_0887256C:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08872578;
L_08872578:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(24), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(2));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08872578;
      }
      goto L_08872594;
    }
L_08872594:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(42)));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(42), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(44)));
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(64)));
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(64), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_088725B8;
L_088725B8:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(46)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(46), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(2));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_088725B8;
      }
      goto L_088725D4;
    }
L_088725D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088728E4;
      }
      goto L_088725DC;
    }
L_088725DC:
    ctx.gpr[4] = (0u | 22u);
    ctx.gpr[31] = (0x088725E8u);
    ctx.gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 81u, 0x0883C5F8u>(ctx, &aot_mem) && ctx.pc == 0x088725E8u) goto L_088725E8;
    return;
L_088725E8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088726B8;
      }
      goto L_088725F0;
    }
L_088725F0:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    goto L_08872604;
L_08872604:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(2)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08872604;
      }
      goto L_08872620;
    }
L_08872620:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    goto L_0887262C;
L_0887262C:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(20), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0887262C;
      }
      goto L_08872648;
    }
L_08872648:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    goto L_08872654;
L_08872654:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(24), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08872654;
      }
      goto L_08872670;
    }
L_08872670:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(42)));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(42), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(44)));
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(64)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(64), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    goto L_08872694;
L_08872694:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(46)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(46), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08872694;
      }
      goto L_088726B0;
    }
L_088726B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088728E4;
      }
      goto L_088726B8;
    }
L_088726B8:
    ctx.gpr[4] = (0u | 19u);
    ctx.gpr[31] = (0x088726C4u);
    ctx.gpr[5] = (0u | 22u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 81u, 0x0883C5F8u>(ctx, &aot_mem) && ctx.pc == 0x088726C4u) goto L_088726C4;
    return;
L_088726C4:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (16448u << 16u);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-7768)));
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
      if (branch_taken) {
          goto L_08872730;
      }
      goto L_088726F8;
    }
L_088726F8:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-19));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[17])));
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[15];
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[13];
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    ctx.fpr[16] = ctx.fpr[16] + ctx.fpr[18];
    ctx.fpr[16] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[16]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
      if (branch_taken) {
          goto L_08872764;
      }
      goto L_08872730;
    }
L_08872730:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[17])));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[15];
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = ctx.fpr[14] - ctx.fpr[12];
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    ctx.fpr[16] = ctx.fpr[18] + ctx.fpr[16];
    ctx.fpr[16] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[16]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    goto L_08872764;
L_08872764:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    goto L_08872774;
L_08872774:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(2)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(2));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < 9 ? 1u : 0u);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[14] = ctx.fpr[15] + ctx.fpr[14];
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[8]));
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08872774;
      }
      goto L_088727AC;
    }
L_088727AC:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    goto L_088727B8;
L_088727B8:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(2));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < 2 ? 1u : 0u);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[14] = ctx.fpr[15] + ctx.fpr[14];
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(20), static_cast<std::uint16_t>(ctx.gpr[8]));
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_088727B8;
      }
      goto L_088727F0;
    }
L_088727F0:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    goto L_088727FC;
L_088727FC:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(24)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(2));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < 9 ? 1u : 0u);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[14] = ctx.fpr[15] + ctx.fpr[14];
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(24), static_cast<std::uint16_t>(ctx.gpr[8]));
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_088727FC;
      }
      goto L_08872834;
    }
L_08872834:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(42)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[14] = ctx.fpr[15] + ctx.fpr[14];
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(42), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(44)));
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[16] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[16])));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[15] = ctx.fpr[17] + ctx.fpr[15];
    ctx.gpr[5] = (0u | 0u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[15]));
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(64)));
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[18] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[18])));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[14] = ctx.fpr[15] + ctx.fpr[14];
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(64), static_cast<std::uint16_t>(ctx.gpr[7]));
    goto L_088728AC;
L_088728AC:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(46)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(2));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < 9 ? 1u : 0u);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[14] = ctx.fpr[15] + ctx.fpr[14];
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(46), static_cast<std::uint16_t>(ctx.gpr[8]));
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_088728AC;
      }
      goto L_088728E4;
    }
L_088728E4:
    ctx.gpr[4] = (0u | 5u);
    ctx.gpr[31] = (0x088728F0u);
    ctx.gpr[5] = (0u | 19u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 81u, 0x0883C5F8u>(ctx, &aot_mem) && ctx.pc == 0x088728F0u) goto L_088728F0;
    return;
L_088728F0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08872904;
      }
      goto L_088728F8;
    }
L_088728F8:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(66)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(66), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0887290C;
      }
      goto L_08872904;
    }
L_08872904:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(66)));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(66), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_0887290C;
L_0887290C:
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
L_08872928:
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(13788)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[5] = (2227u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(13784)));
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.gpr[9] = (2227u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(13812)));
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
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(13792), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[12] = (2227u << 16u);
    ctx.fpr[14] = ctx.fpr[17] / ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(13800), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[19] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(13796), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[8]);
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(13804), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(13808), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(13816), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088729BC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(-21008));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7056));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[19]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7056)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[31]);
    ctx.gpr[31] = (0x08872A00u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 498u, 0x08AEDD14u>(ctx, &aot_mem) && ctx.pc == 0x08872A00u) goto L_08872A00;
    return;
L_08872A00:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08872A18u);
    ctx.gpr[8] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 747u, 0x08AFB1E0u>(ctx, &aot_mem) && ctx.pc == 0x08872A18u) goto L_08872A18;
    return;
L_08872A18:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (0x08872A28u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 685u, 0x08AFAE2Cu>(ctx, &aot_mem) && ctx.pc == 0x08872A28u) goto L_08872A28;
    return;
L_08872A28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_08872A40;
      }
      goto L_08872A34;
    }
L_08872A34:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (0x08872A40u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5696));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 730u, 0x08AA367Cu>(ctx, &aot_mem) && ctx.pc == 0x08872A40u) goto L_08872A40;
    return;
L_08872A40:
    ctx.gpr[31] = (0x08872A48u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 432u, 0x08AC6FE4u>(ctx, &aot_mem) && ctx.pc == 0x08872A48u) goto L_08872A48;
    return;
L_08872A48:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08872A9C;
      }
      goto L_08872A54;
    }
L_08872A54:
    ctx.gpr[31] = (0x08872A5Cu);
    ctx.gpr[4] = (0u | 20u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08872A5Cu) goto L_08872A5C;
    return;
L_08872A5C:
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(16), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21008));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08872A94;
      }
      goto L_08872A84;
    }
L_08872A84:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (0x08872A94u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5696));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 730u, 0x08AA367Cu>(ctx, &aot_mem) && ctx.pc == 0x08872A94u) goto L_08872A94;
    return;
L_08872A94:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08872AC0;
      }
      goto L_08872A9C;
    }
L_08872A9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21008));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_08872ABC;
      }
      goto L_08872AB0;
    }
L_08872AB0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (0x08872ABCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5696));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 730u, 0x08AA367Cu>(ctx, &aot_mem) && ctx.pc == 0x08872ABCu) goto L_08872ABC;
    return;
L_08872ABC:
    ctx.gpr[2] = (0u | 0u);
    goto L_08872AC0;
L_08872AC0:
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
L_08872ADC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08872AFCu);
    ctx.gpr[17] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 436u, 0x08AC702Cu>(ctx, &aot_mem) && ctx.pc == 0x08872AFCu) goto L_08872AFC;
    return;
L_08872AFC:
    ctx.gpr[31] = (0x08872B04u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 658u, 0x08AA314Cu>(ctx, &aot_mem) && ctx.pc == 0x08872B04u) goto L_08872B04;
    return;
L_08872B04:
    ctx.gpr[31] = (0x08872B0Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 656u, 0x08AA3128u>(ctx, &aot_mem) && ctx.pc == 0x08872B0Cu) goto L_08872B0C;
    return;
L_08872B0C:
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
L_08872B24:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08872B34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 432u, 0x08AC6FE4u>(ctx, &aot_mem) && ctx.pc == 0x08872B34u) goto L_08872B34;
    return;
L_08872B34:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08872B50;
      }
      goto L_08872B40;
    }
L_08872B40:
    ctx.gpr[31] = (0x08872B48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 436u, 0x08AC702Cu>(ctx, &aot_mem) && ctx.pc == 0x08872B48u) goto L_08872B48;
    return;
L_08872B48:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08872B54;
      }
      goto L_08872B50;
    }
L_08872B50:
    ctx.gpr[2] = (0u | 0u);
    goto L_08872B54;
L_08872B54:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08872B60:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[19] = (ctx.lo);
    ctx.gpr[4] = (ctx.gpr[18] < ctx.gpr[19] ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08872C7C;
      }
      goto L_08872B9C;
    }
L_08872B9C:
    ctx.gpr[20] = (0u + static_cast<std::uint32_t>(-16384));
    goto L_08872BA0;
L_08872BA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[4] & ctx.gpr[20]);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08872C20;
      }
      goto L_08872BB4;
    }
L_08872BB4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08872BD0;
      }
      goto L_08872BC0;
    }
L_08872BC0:
    ctx.gpr[31] = (0x08872BC8u);
    ctx.gpr[4] = (0u | 16384u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 654u, 0x08AA3104u>(ctx, &aot_mem) && ctx.pc == 0x08872BC8u) goto L_08872BC8;
    return;
L_08872BC8:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    goto L_08872BD0;
L_08872BD0:
    ctx.gpr[5] = (ctx.gpr[4] & ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[31] = (0x08872BE4u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 440u, 0x08AC7074u>(ctx, &aot_mem) && ctx.pc == 0x08872BE4u) goto L_08872BE4;
    return;
L_08872BE4:
    ctx.gpr[31] = (0x08872BECu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 444u, 0x08AC70DCu>(ctx, &aot_mem) && ctx.pc == 0x08872BECu) goto L_08872BEC;
    return;
L_08872BEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[2] - ctx.gpr[4]);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 16385 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08872C04;
      }
      goto L_08872C00;
    }
L_08872C00:
    ctx.gpr[4] = (0u | 16384u);
    goto L_08872C04;
L_08872C04:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08872C14u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 452u, 0x08AC716Cu>(ctx, &aot_mem) && ctx.pc == 0x08872C14u) goto L_08872C14;
    return;
L_08872C14:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    goto L_08872C20;
L_08872C20:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08872C3C;
      }
      goto L_08872C34;
    }
L_08872C34:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08872C7C;
      }
      goto L_08872C3C;
    }
L_08872C3C:
    ctx.gpr[21] = (ctx.gpr[19] - ctx.gpr[18]);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08872C50;
      }
      goto L_08872C4C;
    }
L_08872C4C:
    ctx.gpr[21] = (ctx.gpr[5] | 0u);
    goto L_08872C50;
L_08872C50:
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[18]);
    ctx.gpr[31] = (0x08872C60u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08872C60u) goto L_08872C60;
    return;
L_08872C60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (ctx.gpr[18] + ctx.gpr[21]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[18] < ctx.gpr[19] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08872BA0;
      }
      goto L_08872C7C;
    }
L_08872C7C:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
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
L_08872CA4:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08872CAC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08872CC4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 444u, 0x08AC70DCu>(ctx, &aot_mem) && ctx.pc == 0x08872CC4u) goto L_08872CC4;
    return;
L_08872CC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[2] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    ctx.gpr[2] = (ctx.gpr[2] ^ 1u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08872CE0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08872D38;
      }
      goto L_08872D14;
    }
L_08872D14:
    ctx.gpr[31] = (0x08872D1Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08872CAC;
L_08872D1C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08872D38;
      }
      goto L_08872D24;
    }
L_08872D24:
    ctx.gpr[22] = (ctx.gpr[18] | 0u);
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[20] = (0u | 10u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 13u);
      if (branch_taken) {
          goto L_08872D40;
      }
      goto L_08872D38;
    }
L_08872D38:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08872D90;
      }
      goto L_08872D40;
    }
L_08872D40:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08872D58u);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    goto L_08872B60;
L_08872D58:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16))))));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) <= 0;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16))))));
      if (branch_taken) {
          goto L_08872D70;
      }
      goto L_08872D6C;
    }
L_08872D6C:
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
    goto L_08872D70;
L_08872D70:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08872D88;
      }
      goto L_08872D78;
    }
L_08872D78:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_08872D88;
      }
      goto L_08872D80;
    }
L_08872D80:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08872D40;
      }
      goto L_08872D88;
    }
L_08872D88:
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    goto L_08872D90;
L_08872D90:
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
L_08872DB8:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08872DC0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08872DE8;
      }
      goto L_08872DE0;
    }
L_08872DE0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
      if (branch_taken) {
          goto L_08872E24;
      }
      goto L_08872DE8;
    }
L_08872DE8:
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08872E04;
      }
      goto L_08872DF4;
    }
L_08872DF4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[17]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08872E24;
      }
      goto L_08872E04;
    }
L_08872E04:
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08872E24;
      }
      goto L_08872E10;
    }
L_08872E10:
    ctx.gpr[31] = (0x08872E18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 444u, 0x08AC70DCu>(ctx, &aot_mem) && ctx.pc == 0x08872E18u) goto L_08872E18;
    return;
L_08872E18:
    ctx.gpr[4] = (ctx.gpr[2] - ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08872E24;
L_08872E24:
    ctx.gpr[31] = (0x08872E2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 444u, 0x08AC70DCu>(ctx, &aot_mem) && ctx.pc == 0x08872E2Cu) goto L_08872E2C;
    return;
L_08872E2C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 0 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08872E50;
      }
      goto L_08872E40;
    }
L_08872E40:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
        goto L_08872E50;
    }
    goto L_08872E50;
L_08872E50:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08872E6C:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08872E74:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08872E7C:
    ctx.gpr[2] = (2227u << 16u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(13832));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08872E88:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[17] = (2230u << 16u);
      if (branch_taken) {
          goto L_08872EB4;
      }
      goto L_08872EA8;
    }
L_08872EA8:
    ctx.gpr[31] = (0x08872EB0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 498u, 0x08AEDD14u>(ctx, &aot_mem) && ctx.pc == 0x08872EB0u) goto L_08872EB0;
    return;
L_08872EB0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_08872EB4;
L_08872EB4:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(-7056));
    ctx.gpr[31] = (0x08872EC4u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 685u, 0x08AFAE2Cu>(ctx, &aot_mem) && ctx.pc == 0x08872EC4u) goto L_08872EC4;
    return;
L_08872EC4:
    ctx.gpr[31] = (0x08872ECCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 48u, 0x08A8C3A0u>(ctx, &aot_mem) && ctx.pc == 0x08872ECCu) goto L_08872ECC;
    return;
L_08872ECC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08872EE0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08872EE8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    ctx.gpr[7] = (0u | 2u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[7];
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08872F6C;
      }
      goto L_08872F08;
    }
L_08872F08:
    ctx.gpr[5] = (ctx.gpr[17] & 1u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08872F20;
      }
      goto L_08872F14;
    }
L_08872F14:
    ctx.gpr[5] = (0u | 114u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    goto L_08872F20;
L_08872F20:
    ctx.gpr[5] = (ctx.gpr[17] & 2u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08872F38;
      }
      goto L_08872F2C;
    }
L_08872F2C:
    ctx.gpr[5] = (0u | 119u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    goto L_08872F38;
L_08872F38:
    ctx.gpr[5] = (0u | 98u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08872F54u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_088729BC;
L_08872F54:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08872F68;
      }
      goto L_08872F60;
    }
L_08872F60:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08872FD4;
      }
      goto L_08872F68;
    }
L_08872F68:
    ctx.gpr[4] = (0u | 1u);
    goto L_08872F6C;
L_08872F6C:
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08872F8C;
      }
      goto L_08872F78;
    }
L_08872F78:
    ctx.gpr[5] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08872FA8;
      }
      goto L_08872F84;
    }
L_08872F84:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08872FD4;
      }
      goto L_08872F8C;
    }
L_08872F8C:
    ctx.gpr[31] = (0x08872F94u);
    ctx.gpr[4] = (0u | 28u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08872F94u) goto L_08872F94;
    return;
L_08872F94:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
      if (branch_taken) {
          goto L_08872FD4;
      }
      goto L_08872FA8;
    }
L_08872FA8:
    ctx.gpr[31] = (0x08872FB0u);
    ctx.gpr[4] = (0u | 28u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08872FB0u) goto L_08872FB0;
    return;
L_08872FB0:
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(12), 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08872FD4;
      }
      goto L_08872FD4;
    }
L_08872FD4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08872FE8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08873044;
      }
      goto L_08873004;
    }
L_08873004:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_0887302C;
      }
      goto L_08873010;
    }
L_08873010:
    ctx.gpr[5] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0887304C;
      }
      goto L_0887301C;
    }
L_0887301C:
    ctx.gpr[31] = (0x08873024u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 656u, 0x08AA3128u>(ctx, &aot_mem) && ctx.pc == 0x08873024u) goto L_08873024;
    return;
L_08873024:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08873050;
      }
      goto L_0887302C;
    }
L_0887302C:
    ctx.gpr[31] = (0x08873034u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    goto L_08872ADC;
L_08873034:
    ctx.gpr[31] = (0x0887303Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 656u, 0x08AA3128u>(ctx, &aot_mem) && ctx.pc == 0x0887303Cu) goto L_0887303C;
    return;
L_0887303C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08873050;
      }
      goto L_08873044;
    }
L_08873044:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08873050;
      }
      goto L_0887304C;
    }
L_0887304C:
    ctx.gpr[2] = (0u | 0u);
    goto L_08873050;
L_08873050:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08873064:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[7] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_0887309C;
      }
      goto L_08873084;
    }
L_08873084:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088730B4;
      }
      goto L_08873094;
    }
L_08873094:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088730E4;
      }
      goto L_0887309C;
    }
L_0887309C:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[31] = (0x088730ACu);
    ctx.gpr[6] = (0u | 1u);
    goto L_08872DC0;
L_088730AC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_088730E4;
      }
      goto L_088730B4;
    }
L_088730B4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088730D0;
      }
      goto L_088730CC;
    }
L_088730CC:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    goto L_088730D0;
L_088730D0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088730E4;
      }
      goto L_088730E4;
    }
L_088730E4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088730F4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[8];
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08873134;
      }
      goto L_0887311C;
    }
L_0887311C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0887314C;
      }
      goto L_0887312C;
    }
L_0887312C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08873190;
      }
      goto L_08873134;
    }
L_08873134:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08873144u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    goto L_08872B60;
L_08873144:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08873190;
      }
      goto L_0887314C;
    }
L_0887314C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[5] < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08873168;
      }
      goto L_08873164;
    }
L_08873164:
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    goto L_08873168;
L_08873168:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[31] = (0x0887317Cu);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x0887317Cu) goto L_0887317C;
    return;
L_0887317C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08873190;
      }
      goto L_08873190;
    }
L_08873190:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088731A4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7056), 0u);
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7056));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21008));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x088731D0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13876));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 251u, 0x08AF5420u>(ctx, &aot_mem) && ctx.pc == 0x088731D0u) goto L_088731D0;
    return;
L_088731D0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088731DC:
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
L_08873208:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0887323C;
      }
      goto L_08873224;
    }
L_08873224:
    ctx.gpr[31] = (0x0887322Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08873F1C;
L_0887322C:
    ctx.gpr[31] = (0x08873234u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 2u, 0x088740C4u>(ctx, &aot_mem) && ctx.pc == 0x08873234u) goto L_08873234;
    return;
L_08873234:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887324C;
      }
      goto L_0887323C;
    }
L_0887323C:
    ctx.gpr[31] = (0x08873244u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 6u, 0x088749FCu>(ctx, &aot_mem) && ctx.pc == 0x08873244u) goto L_08873244;
    return;
L_08873244:
    ctx.gpr[31] = (0x0887324Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 8u, 0x08874BA0u>(ctx, &aot_mem) && ctx.pc == 0x0887324Cu) goto L_0887324C;
    return;
L_0887324C:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(272));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(296));
    ctx.gpr[31] = (0x0887325Cu);
    ctx.gpr[6] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 621u, 0x088B7CA0u>(ctx, &aot_mem) && ctx.pc == 0x0887325Cu) goto L_0887325C;
    return;
L_0887325C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887326C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(132)));
    ctx.gpr[6] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(128)));
      if (branch_taken) {
          goto L_08873294;
      }
      goto L_08873284;
    }
L_08873284:
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = ctx.fpr[14] - ctx.fpr[12];
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
      if (branch_taken) {
          goto L_088732AC;
      }
      goto L_08873294;
    }
L_08873294:
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[15] = ctx.fpr[14] / ctx.fpr[13];
    ctx.fpr[12] = ctx.fpr[14] / ctx.fpr[12];
    ctx.fpr[13] = ctx.fpr[15] - ctx.fpr[12];
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[15];
    goto L_088732AC;
L_088732AC:
    ctx.gpr[5] = (18303u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (ctx.gpr[5] | 64000u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[16] = ctx.fpr[14] - ctx.fpr[15];
    ctx.gpr[5] = (14545u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 46871u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[16];
    ctx.fpr[15] = ctx.fpr[16] + ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[18] = ctx.fpr[14] - ctx.fpr[15];
    ctx.fpr[18] = ctx.fpr[18] / ctx.fpr[13];
    ctx.gpr[5] = (16128u << 16u);
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = ctx.fpr[15] + ctx.fpr[14];
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(140), std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08873310:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[6] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(13924), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(19100)));
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887332C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08873348u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(13928)));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 654u, 0x08AA3104u>(ctx, &aot_mem) && ctx.pc == 0x08873348u) goto L_08873348;
    return;
L_08873348:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (0u | 4u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[4] = (2183u << 16u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20704));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[4] = (2183u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13072));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(108), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (15692u << 16u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16672u << 16u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16544u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(96), 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(100), 0u);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[31] = (0x088733E4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_0887326C;
L_088733E4:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(44), 0u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(13928));
    ctx.gpr[31] = (0x088733F4u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 314u, 0x08A35F44u>(ctx, &aot_mem) && ctx.pc == 0x088733F4u) goto L_088733F4;
    return;
L_088733F4:
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
L_0887340C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(104));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(104)));
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.gpr[7] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(108)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[15]) || std::isnan(ctx.fpr[14])) && ctx.fpr[15] == ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08873458;
      }
      goto L_08873454;
    }
L_08873454:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_08873458;
L_08873458:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[14])) && ctx.fpr[12] == ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08873470;
      }
      goto L_08873468;
    }
L_08873468:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(108), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_08873470;
L_08873470:
    ctx.fpr[12] = ctx.fpr[13] / ctx.fpr[12];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_08873494;
      }
      goto L_0887348C;
    }
L_0887348C:
    ctx.gpr[31] = (0x08873494u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 115u, 0x08A5CFD0u>(ctx, &aot_mem) && ctx.pc == 0x08873494u) goto L_08873494;
    return;
L_08873494:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088734A8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x088734C8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13928));
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 324u, 0x08A35FE0u>(ctx, &aot_mem) && ctx.pc == 0x088734C8u) goto L_088734C8;
    return;
L_088734C8:
    ctx.gpr[31] = (0x088734D0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 174u, 0x08A5D3D4u>(ctx, &aot_mem) && ctx.pc == 0x088734D0u) goto L_088734D0;
    return;
L_088734D0:
    ctx.gpr[31] = (0x088734D8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 658u, 0x08AA314Cu>(ctx, &aot_mem) && ctx.pc == 0x088734D8u) goto L_088734D8;
    return;
L_088734D8:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088734EC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08873500u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 169u, 0x08A5D36Cu>(ctx, &aot_mem) && ctx.pc == 0x08873500u) goto L_08873500;
    return;
L_08873500:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08873514:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(96), ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08873520:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(100), ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887352C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08873544u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0887326C;
L_08873544:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08873558;
      }
      goto L_08873550;
    }
L_08873550:
    ctx.gpr[31] = (0x08873558u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 115u, 0x08A5CFD0u>(ctx, &aot_mem) && ctx.pc == 0x08873558u) goto L_08873558;
    return;
L_08873558:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887356C:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08873574:
    jump_target = ctx.gpr[31];
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(132)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887357C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08873594u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0887326C;
L_08873594:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088735A8;
      }
      goto L_088735A0;
    }
L_088735A0:
    ctx.gpr[31] = (0x088735A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 115u, 0x08A5CFD0u>(ctx, &aot_mem) && ctx.pc == 0x088735A8u) goto L_088735A8;
    return;
L_088735A8:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088735BC:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088735C4:
    jump_target = ctx.gpr[31];
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(128)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088735CC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088735E0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088735E0u) goto L_088735E0;
    return;
L_088735E0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088735EC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08873600u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08873600u) goto L_08873600;
    return;
L_08873600:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887360C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(13972)));
    ctx.gpr[5] = (0u | 100u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08873818;
      }
      goto L_08873658;
    }
L_08873658:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[16]);
    ctx.gpr[31] = (0x08873664u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[17]);
    ctx.pc = 0x08B0BBC4u;
    return;
L_08873664:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4804)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4800)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4804), ctx.gpr[3]);
    ctx.gpr[5] = (ctx.gpr[2] < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[8] = (ctx.gpr[3] - ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[8] - ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4800), ctx.gpr[2]);
    ctx.gpr[8] = (2230u << 16u);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4808)));
    ctx.gpr[10] = (2230u << 16u);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(-7820)));
    ctx.gpr[4] = (ctx.gpr[2] - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(68));
    ctx.gpr[18] = (ctx.gpr[10] - ctx.gpr[9]);
    ctx.gpr[31] = (0x088736ACu);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(4808), ctx.gpr[10]);
    ctx.pc = 0x08B0BAECu;
    return;
L_088736AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (13702u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 14269u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (2229u << 16u);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(27216)));
    ctx.gpr[6] = (17096u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[18]);
    ctx.gpr[4] = (2232u << 16u);
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(5696));
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    ctx.gpr[7] = (2225u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[20] = ctx.fpr[15] / ctx.fpr[12];
    ctx.gpr[19] = (ctx.gpr[7] + static_cast<std::uint32_t>(-3536));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[22] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[31] = (0x0887371Cu);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(27216), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 827u, 0x08AA3EBCu>(ctx, &aot_mem) && ctx.pc == 0x0887371Cu) goto L_0887371C;
    return;
L_0887371C:
    ctx.gpr[20] = (ctx.gpr[2] >> 10u);
    ctx.gpr[31] = (0x08873728u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 828u, 0x08AA3ED4u>(ctx, &aot_mem) && ctx.pc == 0x08873728u) goto L_08873728;
    return;
L_08873728:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.gpr[18] = (ctx.gpr[2] >> 10u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[21] = (ctx.gpr[4] >> 10u);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[22] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26512));
    ctx.gpr[31] = (0x0887374Cu);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 827u, 0x08AA3EBCu>(ctx, &aot_mem) && ctx.pc == 0x0887374Cu) goto L_0887374C;
    return;
L_0887374C:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08873758u);
    ctx.gpr[22] = (ctx.gpr[2] >> 10u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 828u, 0x08AA3ED4u>(ctx, &aot_mem) && ctx.pc == 0x08873758u) goto L_08873758;
    return;
L_08873758:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[30] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26208));
    ctx.gpr[23] = (ctx.gpr[2] >> 10u);
    ctx.gpr[31] = (0x0887376Cu);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 827u, 0x08AA3EBCu>(ctx, &aot_mem) && ctx.pc == 0x0887376Cu) goto L_0887376C;
    return;
L_0887376C:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x08873778u);
    ctx.gpr[30] = (ctx.gpr[2] >> 10u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 828u, 0x08AA3ED4u>(ctx, &aot_mem) && ctx.pc == 0x08873778u) goto L_08873778;
    return;
L_08873778:
    ctx.gpr[17] = (ctx.gpr[2] >> 10u);
    ctx.gpr[31] = (0x08873784u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[17]);
    ctx.pc = 0x08B0BC24u;
    return;
L_08873784:
    ctx.gpr[16] = (ctx.gpr[2] >> 10u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08873794u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 377u, 0x08AF5D84u>(ctx, &aot_mem) && ctx.pc == 0x08873794u) goto L_08873794;
    return;
L_08873794:
    ctx.gpr[17] = (ctx.gpr[3] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[17]);
    ctx.gpr[31] = (0x088737ACu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 377u, 0x08AF5D84u>(ctx, &aot_mem) && ctx.pc == 0x088737ACu) goto L_088737AC;
    return;
L_088737AC:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[17] = (ctx.gpr[3] | 0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088737C0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15052)));
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 442u, 0x08AFDD94u>(ctx, &aot_mem) && ctx.pc == 0x088737C0u) goto L_088737C0;
    return;
L_088737C0:
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[12] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[13]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[12]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    ctx.gpr[8] = (ctx.gpr[22] | 0u);
    ctx.gpr[9] = (ctx.gpr[23] | 0u);
    ctx.gpr[10] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x08873808u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    goto L_088731DC;
L_08873808:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(13972), 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
      if (branch_taken) {
          goto L_08873820;
      }
      goto L_08873818;
    }
L_08873818:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(13972), ctx.gpr[4]);
    goto L_08873820;
L_08873820:
    ctx.gpr[31] = (0x08873828u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 561u, 0x08AB327Cu>(ctx, &aot_mem) && ctx.pc == 0x08873828u) goto L_08873828;
    return;
L_08873828:
    ctx.gpr[31] = (0x08873830u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 74u, 0x08A2896Cu>(ctx, &aot_mem) && ctx.pc == 0x08873830u) goto L_08873830;
    return;
L_08873830:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(19092)));
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] ^ 1u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(19092), ctx.gpr[5]);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887387C:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(96)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08873884:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    ctx.gpr[7] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(13924)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    ctx.gpr[19] = (0u | 1u);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_088738C4;
      }
      goto L_088738B8;
    }
L_088738B8:
    ctx.gpr[31] = (0x088738C0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_088735CC;
L_088738C0:
    ctx.gpr[19] = (0u | 0u);
    goto L_088738C4;
L_088738C4:
    ctx.gpr[4] = (ctx.gpr[16] & 4u);
    ctx.gpr[6] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[16] & 2u);
    ctx.gpr[7] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] & 1u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[31] = (0x088738F4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4912));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 407u, 0x08A7F278u>(ctx, &aot_mem) && ctx.pc == 0x088738F4u) goto L_088738F4;
    return;
L_088738F4:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_08873904;
      }
      goto L_088738FC;
    }
L_088738FC:
    ctx.gpr[31] = (0x08873904u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_088735EC;
L_08873904:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
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
L_08873924:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08873930:
    jump_target = ctx.gpr[31];
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(136)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08873938:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] + static_cast<std::uint32_t>(104));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08873940:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08873948:
    ctx.gpr[4] = (2227u << 16u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(13924)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08873954:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (15872u << 16u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (16128u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[8] = (ctx.gpr[8] >> 8u);
    ctx.gpr[8] = (ctx.gpr[8] | ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[8] = (ctx.gpr[8] >> 8u);
    ctx.gpr[8] = (ctx.gpr[8] | ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[8] = (ctx.gpr[8] >> 8u);
    ctx.gpr[8] = (ctx.gpr[8] | ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[8] = (ctx.gpr[8] >> 8u);
    ctx.gpr[8] = (ctx.gpr[8] | ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[8] = (ctx.gpr[8] >> 8u);
    ctx.gpr[8] = (ctx.gpr[8] | ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[8] = (ctx.gpr[8] >> 8u);
    ctx.gpr[8] = (ctx.gpr[8] | ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[8] = (ctx.gpr[8] >> 8u);
    ctx.gpr[8] = (ctx.gpr[8] | ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[8] = (ctx.gpr[8] >> 8u);
    ctx.gpr[8] = (ctx.gpr[8] | ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[8] = (ctx.gpr[8] >> 8u);
    ctx.gpr[8] = (ctx.gpr[8] | ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(36)));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[8] = (ctx.gpr[8] >> 8u);
    ctx.gpr[8] = (ctx.gpr[8] | ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(40)));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[8] = (ctx.gpr[8] >> 8u);
    ctx.gpr[8] = (ctx.gpr[8] | ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(44)));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[8] = (ctx.gpr[8] >> 8u);
    ctx.gpr[8] = (ctx.gpr[8] | ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(48)));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[8] = (ctx.gpr[8] >> 8u);
    ctx.gpr[8] = (ctx.gpr[8] | ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[8] = (ctx.gpr[8] >> 8u);
    ctx.gpr[8] = (ctx.gpr[8] | ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(56)));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[8] = (ctx.gpr[8] >> 8u);
    ctx.gpr[8] = (ctx.gpr[8] | ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(60)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (ctx.gpr[5] >> 8u);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08873B74:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(128)));
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(13968)));
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[20];
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[7] = (49152u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(112)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[16]);
    ctx.fpr[14] = ctx.fpr[22] + ctx.fpr[20];
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(116)));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[28] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[28] = fs * ft; }
    ctx.gpr[6] = (0u | 64u);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(13976));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[31]);
    ctx.gpr[31] = (0x08873BF4u);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[30] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[30] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08873BF4u) goto L_08873BF4;
    return;
L_08873BF4:
    ctx.gpr[4] = (18303u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 57344u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[14] / ctx.fpr[22];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(-488));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-488), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-488)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-488), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (0u | 65520u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-488)));
    ctx.gpr[6] = (ctx.gpr[7] - ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-488), ctx.gpr[5]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-488)));
    ctx.gpr[6] = (16128u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[8] = (18303u << 16u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-488), ctx.gpr[5]);
    ctx.gpr[8] = (ctx.gpr[8] | 61440u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), 0u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-488)));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (17408u << 16u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[15];
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[8] = (ctx.gpr[8] >> 8u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-488), ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[8] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-488)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[8] = (18176u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (ctx.gpr[6] >> 8u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-488), ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-488)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (54784u << 16u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-488), ctx.gpr[5]);
    ctx.gpr[7] = (ctx.gpr[7] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-488)));
    ctx.gpr[7] = (55041u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-488), ctx.gpr[5]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-488)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-488), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-488)));
    ctx.gpr[6] = (55041u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-488), ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-488)));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x08873D4Cu);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-488), ctx.gpr[6]);
    goto L_08873954;
L_08873D4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-488)));
    ctx.gpr[5] = (2816u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-488)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-488), ctx.gpr[4]);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08873D90:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-7044)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (2269u << 16u);
      if (branch_taken) {
          goto L_08873E08;
      }
      goto L_08873DA0;
    }
L_08873DA0:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-640));
    ctx.gpr[6] = (ctx.gpr[5] >> 8u);
    ctx.gpr[7] = (15u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[7]);
    ctx.gpr[7] = (2233u << 16u);
    ctx.gpr[8] = (ctx.gpr[7] + static_cast<std::uint32_t>(-4912));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
    ctx.gpr[9] = (4096u << 16u);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[9] = (256u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[9]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    ctx.gpr[9] = (2560u << 16u);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(-4912), ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(-4912), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-7044), static_cast<std::uint8_t>(0u));
    goto L_08873E08;
L_08873E08:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08873E10:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08873E64;
      }
      goto L_08873E2C;
    }
L_08873E2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
      if (branch_taken) {
          goto L_08873E54;
      }
      goto L_08873E3C;
    }
L_08873E3C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(64)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
        goto L_08873E54;
    }
    goto L_08873E48;
L_08873E48:
    ctx.gpr[31] = (0x08873E50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x08873E50u) goto L_08873E50;
    return;
L_08873E50:
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    goto L_08873E54;
L_08873E54:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08873E64;
      }
      goto L_08873E5C;
    }
L_08873E5C:
    ctx.gpr[31] = (0x08873E64u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 656u, 0x08AA3128u>(ctx, &aot_mem) && ctx.pc == 0x08873E64u) goto L_08873E64;
    return;
L_08873E64:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08873E78:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (rt.memory().aot_load_word_right(ctx.gpr[6] + static_cast<std::uint32_t>(1), ctx.gpr[8]));
    ctx.gpr[9] = (rt.memory().aot_load_word_right(ctx.gpr[6] + static_cast<std::uint32_t>(5), ctx.gpr[9]));
    ctx.gpr[10] = (rt.memory().aot_load_word_right(ctx.gpr[6] + static_cast<std::uint32_t>(9), ctx.gpr[10]));
    ctx.gpr[11] = (rt.memory().aot_load_word_right(ctx.gpr[6] + static_cast<std::uint32_t>(17), ctx.gpr[11]));
    ctx.gpr[12] = (rt.memory().aot_load_word_right(ctx.gpr[6] + static_cast<std::uint32_t>(21), ctx.gpr[12]));
    ctx.gpr[13] = (rt.memory().aot_load_word_right(ctx.gpr[6] + static_cast<std::uint32_t>(25), ctx.gpr[13]));
    ctx.gpr[14] = (rt.memory().aot_load_word_right(ctx.gpr[6] + static_cast<std::uint32_t>(33), ctx.gpr[14]));
    ctx.gpr[15] = (rt.memory().aot_load_word_right(ctx.gpr[6] + static_cast<std::uint32_t>(37), ctx.gpr[15]));
    ctx.gpr[24] = (rt.memory().aot_load_word_right(ctx.gpr[6] + static_cast<std::uint32_t>(41), ctx.gpr[24]));
    ctx.gpr[25] = (rt.memory().aot_load_word_right(ctx.gpr[6] + static_cast<std::uint32_t>(49), ctx.gpr[25]));
    ctx.gpr[2] = (rt.memory().aot_load_word_right(ctx.gpr[6] + static_cast<std::uint32_t>(53), ctx.gpr[2]));
    ctx.gpr[3] = (rt.memory().aot_load_word_right(ctx.gpr[6] + static_cast<std::uint32_t>(57), ctx.gpr[3]));
    ctx.gpr[8] = ((ctx.gpr[8] & ~0xFF000000u) | ((ctx.gpr[5] & 0x000000FFu) << 24u));
    ctx.gpr[9] = ((ctx.gpr[9] & ~0xFF000000u) | ((ctx.gpr[5] & 0x000000FFu) << 24u));
    ctx.gpr[10] = ((ctx.gpr[10] & ~0xFF000000u) | ((ctx.gpr[5] & 0x000000FFu) << 24u));
    ctx.gpr[11] = ((ctx.gpr[11] & ~0xFF000000u) | ((ctx.gpr[5] & 0x000000FFu) << 24u));
    ctx.gpr[12] = ((ctx.gpr[12] & ~0xFF000000u) | ((ctx.gpr[5] & 0x000000FFu) << 24u));
    ctx.gpr[13] = ((ctx.gpr[13] & ~0xFF000000u) | ((ctx.gpr[5] & 0x000000FFu) << 24u));
    ctx.gpr[14] = ((ctx.gpr[14] & ~0xFF000000u) | ((ctx.gpr[5] & 0x000000FFu) << 24u));
    ctx.gpr[15] = ((ctx.gpr[15] & ~0xFF000000u) | ((ctx.gpr[5] & 0x000000FFu) << 24u));
    ctx.gpr[24] = ((ctx.gpr[24] & ~0xFF000000u) | ((ctx.gpr[5] & 0x000000FFu) << 24u));
    ctx.gpr[25] = ((ctx.gpr[25] & ~0xFF000000u) | ((ctx.gpr[5] & 0x000000FFu) << 24u));
    ctx.gpr[2] = ((ctx.gpr[2] & ~0xFF000000u) | ((ctx.gpr[5] & 0x000000FFu) << 24u));
    ctx.gpr[3] = ((ctx.gpr[3] & ~0xFF000000u) | ((ctx.gpr[5] & 0x000000FFu) << 24u));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(8), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(12), ctx.gpr[11]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(16), ctx.gpr[12]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(20), ctx.gpr[13]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(24), ctx.gpr[14]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(28), ctx.gpr[15]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(32), ctx.gpr[24]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(36), ctx.gpr[25]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(44), ctx.gpr[3]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08873F1C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x08873F3Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 213u, 0x08A5D6F0u>(ctx, &aot_mem) && ctx.pc == 0x08873F3Cu) goto L_08873F3C;
    return;
L_08873F3C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    ctx.gpr[4] = (48896u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(80));
    ctx.gpr[5] = (16128u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = ctx.fpr[18] - ctx.fpr[14];
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.fpr[2] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    { const float fs = ctx.fpr[19]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[19] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[19] = fs * ft; }
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[2] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[19];
    ctx.fpr[16] = ctx.fpr[16] + ctx.fpr[0];
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[2];
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.fpr[1] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[3] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[16];
    ctx.fpr[12] = ctx.fpr[15] + ctx.fpr[12];
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[12] = ctx.fpr[18] - ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(124)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.fpr[17] = ctx.fpr[17] + ctx.fpr[18];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.pc = 0x08874000u; return;
}

void recomp_unit_0027(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0027_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_27(Runtime &runtime) {
    runtime.register_generated_unit(27u, 0x08870000u, 16384u, &recomp_unit_0027, &recomp_unit_0027_entry);
    runtime.register_function(0x08870000u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870008u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870038u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887005Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887009Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088700B8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088700C4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088700F0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887010Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870120u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887013Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870144u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870164u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870180u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870188u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870190u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088701C4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088701D8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088701E4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870208u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870218u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870224u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887022Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887023Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870250u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887026Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887028Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088702ACu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088702B4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088702C0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088702DCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088702E4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870304u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870314u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887031Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887034Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887035Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870364u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870398u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088703A4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088703B8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088703C0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088703F0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088704E0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088704FCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887050Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887051Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887055Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870568u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088705CCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088705ECu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870604u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887064Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887067Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088706A0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088706C4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088706D4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088706E4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088706F4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870704u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887071Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870740u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870760u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887077Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870798u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088707B4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088707C0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088707D4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088707F0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887080Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870814u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887081Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870838u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870848u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870858u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870868u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870880u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088708A4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088708C4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088708ECu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088708FCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887092Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870938u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887095Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887096Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870998u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088709A0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088709A8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088709B0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088709B8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870A10u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870A1Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870A48u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870A50u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870A60u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870AC0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870AD8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870AF0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870B78u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870B88u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870BA0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870BB0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870BC0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870BD0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870BD4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870BD8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870BE8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870BF8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870C00u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870C08u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870C14u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870C64u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870C74u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870C9Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870CA8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870CD4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870CDCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870CECu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870CF4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870D04u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870D1Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870D24u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870D30u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870D40u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870D54u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870D6Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870D80u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870D90u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870DA4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870DBCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870DD0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870DF4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870DFCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870E10u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870E28u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870E44u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870E4Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870E5Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870E70u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870E88u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870E9Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870EC0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870EC4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870EF4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870F10u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870F5Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870F64u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870F74u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870F8Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870FA8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870FB0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870FC4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870FCCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870FD4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870FDCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871000u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871080u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887109Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088710ACu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088710CCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088710E0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088711A4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088711ACu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088711C0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088711E0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871204u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871214u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887123Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871258u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871260u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887126Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871278u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088712A4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088712D4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088712DCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088712E4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088712F8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871318u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871324u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871348u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887136Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871374u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887137Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871380u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871394u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088713A0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088713A8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088713D8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871448u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871478u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088714CCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088714F4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871500u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887150Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871514u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871518u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887151Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871528u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871544u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871590u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088715B8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088715C0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088715C8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088715F8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887162Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871638u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871648u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871654u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887165Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871668u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887166Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871684u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887169Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088716B0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088716C8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088716DCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088716F4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871708u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871710u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871714u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887171Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871750u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871760u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871768u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871770u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871778u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871780u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871788u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088717A0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088717ACu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088717C8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088717D0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088717ECu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088717F4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871800u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871818u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871824u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871840u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871848u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871864u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887186Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871878u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871890u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887189Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088718B8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088718C0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088718DCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088718E4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088718F0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088718F4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871908u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871948u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871958u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871960u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871968u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871970u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871978u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871980u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871994u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088719A0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088719BCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088719C4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088719E0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088719E8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088719F4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871A08u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871A14u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871A30u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871A38u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871A54u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871A5Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871A68u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871A7Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871A88u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871AA4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871AACu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871AC8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871AD0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871ADCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871AE0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871AF4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871B2Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871B34u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871B44u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871B54u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871B64u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871B88u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871B9Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871BA4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871BC4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871BCCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871BE4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871BECu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871BF4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871BFCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871C04u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871C0Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871C14u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871C18u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871C30u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871C34u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871C60u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871C98u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871CA0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871CB0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871CC0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871CD0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871CF4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871D08u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871D28u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871D30u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871D3Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871D54u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871D84u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871DC4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871DD0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871DDCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871DE4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871DF0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871DF8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871DFCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871E04u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871E0Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871E14u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871E24u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871E2Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871E34u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871E40u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871E48u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871E54u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871E58u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871E60u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871E64u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871E6Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871E9Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871EB8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871EC4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871ECCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871EE4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871EFCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871F10u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871F40u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871F4Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871F64u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871F78u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871F8Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871FB0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871FC8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871FECu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872008u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872048u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872054u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887206Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872080u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088720A0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088720C4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088720E4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887217Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872190u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088721A8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088721BCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872208u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872228u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872258u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872280u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887228Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088722A4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088722B8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088722D4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088722FCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872308u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872320u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872334u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872350u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872378u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872384u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887239Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088723B0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088723CCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088723E8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872404u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872420u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887244Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872464u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872474u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887247Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872494u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887249Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088724A4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088724BCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088724E8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088724FCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887250Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872514u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872528u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872544u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872550u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887256Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872578u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872594u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088725B8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088725D4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088725DCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088725E8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088725F0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872604u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872620u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887262Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872648u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872654u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872670u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872694u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088726B0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088726B8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088726C4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088726F8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872730u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872764u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872774u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088727ACu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088727B8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088727F0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088727FCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872834u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088728ACu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088728E4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088728F0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088728F8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872904u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887290Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872928u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088729BCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872A00u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872A18u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872A28u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872A34u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872A40u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872A48u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872A54u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872A5Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872A84u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872A94u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872A9Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872AB0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872ABCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872AC0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872ADCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872AFCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872B04u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872B0Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872B24u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872B34u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872B40u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872B48u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872B50u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872B54u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872B60u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872B9Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872BA0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872BB4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872BC0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872BC8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872BD0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872BE4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872BECu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872C00u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872C04u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872C14u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872C20u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872C34u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872C3Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872C4Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872C50u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872C60u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872C7Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872CA4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872CACu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872CC4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872CE0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872D14u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872D1Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872D24u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872D38u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872D40u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872D58u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872D6Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872D70u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872D78u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872D80u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872D88u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872D90u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872DB8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872DC0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872DE0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872DE8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872DF4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872E04u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872E10u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872E18u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872E24u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872E2Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872E40u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872E50u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872E6Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872E74u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872E7Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872E88u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872EA8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872EB0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872EB4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872EC4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872ECCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872EE0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872EE8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872F08u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872F14u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872F20u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872F2Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872F38u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872F54u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872F60u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872F68u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872F6Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872F78u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872F84u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872F8Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872F94u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872FA8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872FB0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872FD4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872FE8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873004u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873010u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887301Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873024u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887302Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873034u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887303Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873044u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887304Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873050u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873064u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873084u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873094u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887309Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088730ACu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088730B4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088730CCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088730D0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088730E4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088730F4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887311Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887312Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873134u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873144u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887314Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873164u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873168u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887317Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873190u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088731A4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088731D0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088731DCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873208u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873224u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887322Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873234u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887323Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873244u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887324Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887325Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887326Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873284u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873294u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088732ACu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873310u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887332Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873348u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088733E4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088733F4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887340Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873454u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873458u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873468u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873470u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887348Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873494u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088734A8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088734C8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088734D0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088734D8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088734ECu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873500u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873514u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873520u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887352Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873544u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873550u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873558u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887356Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873574u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887357Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873594u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088735A0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088735A8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088735BCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088735C4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088735CCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088735E0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088735ECu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873600u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887360Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873658u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873664u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088736ACu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887371Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873728u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887374Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873758u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887376Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873778u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873784u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873794u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088737ACu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088737C0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873808u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873818u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873820u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873828u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873830u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887387Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873884u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088738B8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088738C0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088738C4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088738F4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088738FCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873904u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873924u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873930u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873938u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873940u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873948u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873954u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873B74u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873BF4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873D4Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873D90u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873DA0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873E08u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873E10u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873E2Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873E3Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873E48u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873E50u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873E54u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873E5Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873E64u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873E78u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873F1Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873F3Cu, &recomp_unit_0027, "recomp_unit_0027");
}
} // namespace psprecomp
