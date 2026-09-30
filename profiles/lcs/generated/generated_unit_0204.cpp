#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0204[4037] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 4,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 9, 0, 10, 0, 0, 0, 0,
    0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 14, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 19, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 22, 23, 24, 0, 25, 0, 26, 0, 27, 0, 28, 0, 29, 0,
    30, 0, 31, 0, 32, 0, 33, 0, 34, 0, 35, 0, 36, 0, 37, 0, 38, 0, 39, 0, 40, 0, 41, 42, 43, 0, 44, 0, 45, 0, 46, 0,
    47, 0, 48, 0, 49, 0, 50, 0, 51, 0, 52, 0, 53, 0, 54, 0, 55, 0, 56, 0, 57, 0, 58, 0, 59, 0, 60, 0, 61, 0, 62, 0,
    63, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 71, 0, 72, 0, 73, 0, 74, 0, 75, 0, 76, 0, 77, 0, 78, 0, 79, 0, 80, 0, 81,
    0, 82, 0, 83, 0, 84, 0, 85, 0, 86, 0, 87, 0, 88, 0, 89, 0, 90, 0, 91, 0, 92, 0, 93, 0, 94, 0, 95, 0, 96, 0, 97,
    0, 98, 0, 99, 0, 100, 0, 101, 0, 102, 103, 104, 0, 105, 0, 106, 0, 107, 0, 108, 0, 109, 0, 110, 0, 111, 0, 112, 0, 113, 0, 114,
    0, 115, 0, 116, 0, 117, 0, 118, 0, 119, 0, 120, 0, 121, 0, 122, 0, 123, 0, 124, 0, 125, 0, 126, 127, 128, 0, 129, 0, 130, 0, 131,
    0, 132, 0, 133, 0, 134, 0, 135, 0, 136, 0, 137, 0, 138, 0, 139, 0, 140, 0, 141, 0, 142, 0, 143, 0, 144, 0, 145, 0, 146, 0, 147,
    0, 148, 0, 149, 0, 150, 0, 151, 0, 152, 0, 153, 0, 154, 0, 155, 0, 156, 0, 157, 0, 158, 0, 159, 0, 160, 0, 161, 0, 162, 0, 163,
    0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 167, 0, 0, 168, 0,
    0, 0, 169, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 177, 0, 0, 178, 0,
    0, 179, 0, 0, 180, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 183, 0, 0, 0, 0,
    184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 186, 0, 0, 187, 0, 0, 188, 0, 189, 190, 0, 0, 191, 0, 0, 192,
    0, 0, 193, 0, 0, 194, 0, 0, 195, 0, 0, 196, 197, 0, 198, 0, 199, 0, 200, 0, 201, 0, 202, 0, 203, 0, 204, 0, 205, 0, 206, 0,
    207, 0, 208, 0, 209, 0, 210, 0, 211, 0, 212, 0, 213, 0, 214, 0, 215, 0, 216, 0, 217, 0, 218, 0, 219, 0, 220, 0, 221, 0, 222, 0,
    223, 0, 224, 0, 225, 0, 226, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 232, 0, 0, 0, 0, 233,
    0, 0, 0, 0, 234, 0, 0, 0, 0, 235, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 237, 238, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 246, 0, 247, 0, 248, 0, 249, 0, 250, 0, 251, 0, 252, 0, 253, 0, 254, 0, 255, 0, 256, 0, 257, 0, 258, 0, 259, 0, 260, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 264,
    0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 267, 0, 268, 0, 269, 0, 270, 0, 271, 0, 272, 0, 273, 0, 274, 0, 275, 0, 276, 277, 278, 0, 279, 0, 280, 0, 281, 0, 282, 283, 284,
    0, 285, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290,
    0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 292, 0, 0, 293, 294, 0, 0, 295, 0, 0, 0, 296, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 300, 0, 301, 0, 302, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 304, 0, 305, 0, 306, 0,
    0, 0, 0, 0, 0, 0, 307, 0, 0, 308, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 311, 0, 0, 0,
    0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 314, 0, 0, 0, 0, 0, 0, 0, 315, 0, 316, 317, 0, 0, 0, 0,
    0, 0, 318, 0, 0, 319, 0, 0, 0, 0, 0, 0, 320, 0, 0, 321, 0, 322, 0, 0, 0, 0, 323, 0, 324, 0, 0, 0, 0, 0, 0, 0,
    325, 0, 0, 326, 0, 0, 0, 0, 0, 0, 327, 0, 0, 328, 0, 0, 0, 0, 0, 0, 329, 0, 330, 0, 0, 0, 0, 0, 0, 0, 331, 0,
    332, 0, 0, 0, 0, 0, 0, 0, 333, 0, 334, 335, 0, 0, 0, 0, 0, 0, 336, 0, 337, 0, 0, 338, 0, 339, 0, 340, 341, 342, 343, 0,
    0, 0, 0, 0, 0, 0, 344, 0, 345, 0, 0, 0, 0, 0, 0, 0, 346, 0, 347, 0, 0, 0, 0, 0, 0, 0, 348, 0, 349, 0, 350, 0,
    351, 0, 352, 0, 353, 0, 0, 0, 0, 0, 0, 0, 0, 0, 354, 0, 355, 0, 0, 0, 0, 0, 0, 0, 356, 0, 357, 0, 0, 0, 0, 0,
    0, 0, 358, 0, 359, 0, 0, 0, 0, 0, 0, 0, 360, 0, 361, 0, 0, 0, 0, 0, 0, 0, 362, 0, 363, 0, 0, 0, 0, 0, 0, 0,
    364, 0, 365, 0, 0, 0, 0, 0, 0, 0, 366, 0, 367, 0, 0, 0, 0, 368, 0, 0, 369, 0, 370, 0, 0, 0, 0, 0, 0, 0, 371, 0,
    372, 0, 0, 0, 0, 0, 0, 0, 373, 0, 374, 0, 0, 0, 0, 0, 0, 0, 375, 0, 376, 0, 0, 0, 0, 0, 0, 0, 377, 0, 378, 0,
    0, 0, 0, 0, 0, 0, 379, 0, 380, 0, 0, 0, 0, 0, 0, 0, 381, 0, 382, 0, 0, 0, 0, 0, 0, 0, 383, 0, 0, 384, 0, 0,
    0, 0, 0, 0, 385, 0, 0, 386, 0, 0, 0, 0, 0, 0, 387, 0, 0, 0, 0, 0, 0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 389, 0, 0, 0, 0, 0, 0, 0, 0, 0, 390, 0, 0, 391, 0, 0, 0, 0, 0, 0, 392, 0, 0, 0, 0, 0, 0, 0, 393, 0,
    394, 0, 0, 0, 395, 0, 0, 0, 0, 0, 396, 397, 0, 398, 0, 0, 0, 0, 0, 0, 399, 0, 0, 0, 0, 0, 0, 0, 0, 0, 400, 0,
    0, 401, 0, 0, 0, 0, 0, 0, 402, 0, 0, 0, 0, 0, 0, 0, 0, 0, 403, 0, 0, 0, 0, 0, 0, 0, 0, 0, 404, 0, 0, 405,
    0, 0, 0, 0, 0, 0, 406, 0, 0, 0, 0, 0, 0, 0, 0, 0, 407, 0, 0, 0, 0, 0, 0, 0, 0, 0, 408, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 409, 0, 410, 411, 412, 0, 413, 0, 414, 0, 415, 0, 416, 0, 417, 0, 418, 0, 419, 0, 420, 0, 421, 0, 422, 0, 423, 0,
    424, 0, 425, 0, 426, 0, 427, 0, 428, 0, 429, 0, 430, 0, 431, 0, 432, 0, 433, 0, 434, 0, 435, 0, 436, 0, 437, 0, 438, 0, 439, 0,
    440, 0, 441, 0, 442, 0, 443, 0, 444, 0, 445, 0, 446, 0, 447, 0, 448, 0, 449, 0, 450, 0, 451, 0, 452, 0, 453, 0, 454, 0, 455, 0,
    456, 0, 457, 0, 458, 0, 459, 0, 460, 0, 461, 0, 462, 0, 463, 0, 464, 0, 465, 0, 466, 0, 467, 0, 468, 0, 469, 0, 470, 0, 471, 0,
    472, 0, 473, 0, 474, 0, 475, 0, 476, 0, 477, 478, 479, 0, 0, 0, 0, 0, 0, 0, 0, 0, 480, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 481, 0, 482, 0, 483, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 484, 0, 0, 0, 485, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 486, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 487, 0,
    0, 488, 0, 0, 489, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 490, 0, 0, 491, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 492, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 493, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 494, 495, 496,
    0, 497, 0, 498, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 499, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 500, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 501, 0, 0, 0, 502, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 503, 0, 504, 0, 505, 0, 0, 0, 506, 0, 507, 0, 0, 0, 508, 0, 0, 0, 509, 0, 510, 0, 0, 0, 0, 0, 0, 0,
    511, 0, 0, 0, 0, 0, 512, 0, 513, 0, 0, 0, 514, 0, 0, 0, 0, 0, 515, 0, 0, 0, 516, 0, 0, 0, 517, 0, 518, 0, 519, 0,
    0, 0, 520, 0, 0, 0, 0, 0, 521, 0, 522, 0, 0, 0, 0, 0, 523, 0, 524, 0, 525, 0, 0, 0, 0, 526, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 527, 0, 0, 0, 0, 0, 0, 0, 528, 529, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 530, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 531, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 532,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 533, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 534, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 535, 0, 0, 536, 0, 0, 0, 0, 537, 0, 0, 0, 0, 538, 0, 0, 0, 0, 539, 0, 0, 0, 0, 540, 0,
    0, 541, 0, 0, 0, 542, 0, 0, 0, 0, 543, 0, 544, 0, 0, 545, 0, 0, 0, 546, 0, 0, 0, 547, 548, 0, 549, 550, 551, 0, 552, 0,
    553, 554, 555, 0, 556, 557, 558, 0, 559, 0, 560, 0, 561, 0, 562, 0, 563, 0, 564, 0, 565, 0, 566, 0, 567, 0, 568, 0, 569, 0, 570, 0,
    0, 0, 0, 0, 0, 0, 571, 0, 0, 0, 572, 573, 0, 0, 0, 0, 0, 0, 0, 574, 575, 0, 576, 0, 0, 0, 577, 0, 0, 0, 0, 0,
    0, 0, 578, 0, 0, 0, 0, 0, 0, 579, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 580, 0, 0, 0, 0, 0, 0, 581, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 582, 0, 0, 0, 0, 583, 0, 0, 0, 0, 584, 0, 0, 0, 0, 585, 0, 0, 0, 0,
    586, 0, 0, 0, 0, 587, 0, 0, 0, 0, 588, 0, 0, 0, 0, 589, 0, 0, 0, 0, 590, 0, 0, 0, 0, 591, 0, 0, 0, 0, 592, 0,
    0, 0, 0, 593, 0, 0, 0, 0, 594, 0, 595, 0, 0, 0, 0, 0, 0, 0, 596, 597, 598, 0, 599, 600, 0, 601, 0, 602, 603, 0, 0, 0,
    604, 0, 0, 605, 606, 0, 607, 0, 0, 608, 0, 609, 0, 610, 611, 612, 0, 613, 0, 0, 614, 615, 0, 0, 616, 617, 618, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 619, 0, 0, 0, 620, 0, 621, 0, 622, 0, 0, 0, 623, 0, 0, 0, 624, 0, 0, 0, 625, 0, 0, 0, 626, 0, 0, 0,
    627, 0, 0, 0, 628, 0, 0, 0, 629, 0, 0, 0, 630, 0, 0, 0, 631, 0, 0, 0, 632, 0, 0, 0, 633, 0, 0, 0, 634, 0, 0, 0,
    635, 0, 0, 0, 636,
};
void recomp_unit_0204_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08B34024u;
        entry_id = (entry_delta < 16148u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0204[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08B34024;
    case 2u: goto L_08B34064;
    case 3u: goto L_08B34094;
    case 4u: goto L_08B340A0;
    case 5u: goto L_08B340CC;
    case 6u: goto L_08B340E8;
    case 7u: goto L_08B34158;
    case 8u: goto L_08B3417C;
    case 9u: goto L_08B34188;
    case 10u: goto L_08B34190;
    case 11u: goto L_08B341B0;
    case 12u: goto L_08B341D4;
    case 13u: goto L_08B34200;
    case 14u: goto L_08B34214;
    case 15u: goto L_08B34258;
    case 16u: goto L_08B342E8;
    case 17u: goto L_08B34318;
    case 18u: goto L_08B34368;
    case 19u: goto L_08B343C0;
    case 20u: goto L_08B343C8;
    case 21u: goto L_08B344E4;
    case 22u: goto L_08B344EC;
    case 23u: goto L_08B344F0;
    case 24u: goto L_08B344F4;
    case 25u: goto L_08B344FC;
    case 26u: goto L_08B34504;
    case 27u: goto L_08B3450C;
    case 28u: goto L_08B34514;
    case 29u: goto L_08B3451C;
    case 30u: goto L_08B34524;
    case 31u: goto L_08B3452C;
    case 32u: goto L_08B34534;
    case 33u: goto L_08B3453C;
    case 34u: goto L_08B34544;
    case 35u: goto L_08B3454C;
    case 36u: goto L_08B34554;
    case 37u: goto L_08B3455C;
    case 38u: goto L_08B34564;
    case 39u: goto L_08B3456C;
    case 40u: goto L_08B34574;
    case 41u: goto L_08B3457C;
    case 42u: goto L_08B34580;
    case 43u: goto L_08B34584;
    case 44u: goto L_08B3458C;
    case 45u: goto L_08B34594;
    case 46u: goto L_08B3459C;
    case 47u: goto L_08B345A4;
    case 48u: goto L_08B345AC;
    case 49u: goto L_08B345B4;
    case 50u: goto L_08B345BC;
    case 51u: goto L_08B345C4;
    case 52u: goto L_08B345CC;
    case 53u: goto L_08B345D4;
    case 54u: goto L_08B345DC;
    case 55u: goto L_08B345E4;
    case 56u: goto L_08B345EC;
    case 57u: goto L_08B345F4;
    case 58u: goto L_08B345FC;
    case 59u: goto L_08B34604;
    case 60u: goto L_08B3460C;
    case 61u: goto L_08B34614;
    case 62u: goto L_08B3461C;
    case 63u: goto L_08B34624;
    case 64u: goto L_08B34648;
    case 65u: goto L_08B34738;
    case 66u: goto L_08B34868;
    case 67u: goto L_08B348CC;
    case 68u: goto L_08B348DC;
    case 69u: goto L_08B34ACC;
    case 70u: goto L_08B34C48;
    case 71u: goto L_08B34C50;
    case 72u: goto L_08B34C58;
    case 73u: goto L_08B34C60;
    case 74u: goto L_08B34C68;
    case 75u: goto L_08B34C70;
    case 76u: goto L_08B34C78;
    case 77u: goto L_08B34C80;
    case 78u: goto L_08B34C88;
    case 79u: goto L_08B34C90;
    case 80u: goto L_08B34C98;
    case 81u: goto L_08B34CA0;
    case 82u: goto L_08B34CA8;
    case 83u: goto L_08B34CB0;
    case 84u: goto L_08B34CB8;
    case 85u: goto L_08B34CC0;
    case 86u: goto L_08B34CC8;
    case 87u: goto L_08B34CD0;
    case 88u: goto L_08B34CD8;
    case 89u: goto L_08B34CE0;
    case 90u: goto L_08B34CE8;
    case 91u: goto L_08B34CF0;
    case 92u: goto L_08B34CF8;
    case 93u: goto L_08B34D00;
    case 94u: goto L_08B34D08;
    case 95u: goto L_08B34D10;
    case 96u: goto L_08B34D18;
    case 97u: goto L_08B34D20;
    case 98u: goto L_08B34D28;
    case 99u: goto L_08B34D30;
    case 100u: goto L_08B34D38;
    case 101u: goto L_08B34D40;
    case 102u: goto L_08B34D48;
    case 103u: goto L_08B34D4C;
    case 104u: goto L_08B34D50;
    case 105u: goto L_08B34D58;
    case 106u: goto L_08B34D60;
    case 107u: goto L_08B34D68;
    case 108u: goto L_08B34D70;
    case 109u: goto L_08B34D78;
    case 110u: goto L_08B34D80;
    case 111u: goto L_08B34D88;
    case 112u: goto L_08B34D90;
    case 113u: goto L_08B34D98;
    case 114u: goto L_08B34DA0;
    case 115u: goto L_08B34DA8;
    case 116u: goto L_08B34DB0;
    case 117u: goto L_08B34DB8;
    case 118u: goto L_08B34DC0;
    case 119u: goto L_08B34DC8;
    case 120u: goto L_08B34DD0;
    case 121u: goto L_08B34DD8;
    case 122u: goto L_08B34DE0;
    case 123u: goto L_08B34DE8;
    case 124u: goto L_08B34DF0;
    case 125u: goto L_08B34DF8;
    case 126u: goto L_08B34E00;
    case 127u: goto L_08B34E04;
    case 128u: goto L_08B34E08;
    case 129u: goto L_08B34E10;
    case 130u: goto L_08B34E18;
    case 131u: goto L_08B34E20;
    case 132u: goto L_08B34E28;
    case 133u: goto L_08B34E30;
    case 134u: goto L_08B34E38;
    case 135u: goto L_08B34E40;
    case 136u: goto L_08B34E48;
    case 137u: goto L_08B34E50;
    case 138u: goto L_08B34E58;
    case 139u: goto L_08B34E60;
    case 140u: goto L_08B34E68;
    case 141u: goto L_08B34E70;
    case 142u: goto L_08B34E78;
    case 143u: goto L_08B34E80;
    case 144u: goto L_08B34E88;
    case 145u: goto L_08B34E90;
    case 146u: goto L_08B34E98;
    case 147u: goto L_08B34EA0;
    case 148u: goto L_08B34EA8;
    case 149u: goto L_08B34EB0;
    case 150u: goto L_08B34EB8;
    case 151u: goto L_08B34EC0;
    case 152u: goto L_08B34EC8;
    case 153u: goto L_08B34ED0;
    case 154u: goto L_08B34ED8;
    case 155u: goto L_08B34EE0;
    case 156u: goto L_08B34EE8;
    case 157u: goto L_08B34EF0;
    case 158u: goto L_08B34EF8;
    case 159u: goto L_08B34F00;
    case 160u: goto L_08B34F08;
    case 161u: goto L_08B34F10;
    case 162u: goto L_08B34F18;
    case 163u: goto L_08B34F20;
    case 164u: goto L_08B34F28;
    case 165u: goto L_08B34FD4;
    case 166u: goto L_08B35004;
    case 167u: goto L_08B35010;
    case 168u: goto L_08B3501C;
    case 169u: goto L_08B3502C;
    case 170u: goto L_08B35030;
    case 171u: goto L_08B350D4;
    case 172u: goto L_08B350E8;
    case 173u: goto L_08B35150;
    case 174u: goto L_08B3516C;
    case 175u: goto L_08B351B0;
    case 176u: goto L_08B351FC;
    case 177u: goto L_08B35210;
    case 178u: goto L_08B3521C;
    case 179u: goto L_08B35228;
    case 180u: goto L_08B35234;
    case 181u: goto L_08B3524C;
    case 182u: goto L_08B35280;
    case 183u: goto L_08B35290;
    case 184u: goto L_08B352A4;
    case 185u: goto L_08B352D8;
    case 186u: goto L_08B352E4;
    case 187u: goto L_08B352F0;
    case 188u: goto L_08B352FC;
    case 189u: goto L_08B35304;
    case 190u: goto L_08B35308;
    case 191u: goto L_08B35314;
    case 192u: goto L_08B35320;
    case 193u: goto L_08B3532C;
    case 194u: goto L_08B35338;
    case 195u: goto L_08B35344;
    case 196u: goto L_08B35350;
    case 197u: goto L_08B35354;
    case 198u: goto L_08B3535C;
    case 199u: goto L_08B35364;
    case 200u: goto L_08B3536C;
    case 201u: goto L_08B35374;
    case 202u: goto L_08B3537C;
    case 203u: goto L_08B35384;
    case 204u: goto L_08B3538C;
    case 205u: goto L_08B35394;
    case 206u: goto L_08B3539C;
    case 207u: goto L_08B353A4;
    case 208u: goto L_08B353AC;
    case 209u: goto L_08B353B4;
    case 210u: goto L_08B353BC;
    case 211u: goto L_08B353C4;
    case 212u: goto L_08B353CC;
    case 213u: goto L_08B353D4;
    case 214u: goto L_08B353DC;
    case 215u: goto L_08B353E4;
    case 216u: goto L_08B353EC;
    case 217u: goto L_08B353F4;
    case 218u: goto L_08B353FC;
    case 219u: goto L_08B35404;
    case 220u: goto L_08B3540C;
    case 221u: goto L_08B35414;
    case 222u: goto L_08B3541C;
    case 223u: goto L_08B35424;
    case 224u: goto L_08B3542C;
    case 225u: goto L_08B35434;
    case 226u: goto L_08B3543C;
    case 227u: goto L_08B35444;
    case 228u: goto L_08B355A8;
    case 229u: goto L_08B355DC;
    case 230u: goto L_08B3562C;
    case 231u: goto L_08B35778;
    case 232u: goto L_08B3578C;
    case 233u: goto L_08B357A0;
    case 234u: goto L_08B357B4;
    case 235u: goto L_08B357C8;
    case 236u: goto L_08B357DC;
    case 237u: goto L_08B35828;
    case 238u: goto L_08B3582C;
    case 239u: goto L_08B35850;
    case 240u: goto L_08B358A8;
    case 241u: goto L_08B358F4;
    case 242u: goto L_08B358F8;
    case 243u: goto L_08B35938;
    case 244u: goto L_08B359BC;
    case 245u: goto L_08B35A74;
    case 246u: goto L_08B35B2C;
    case 247u: goto L_08B35B34;
    case 248u: goto L_08B35B3C;
    case 249u: goto L_08B35B44;
    case 250u: goto L_08B35B4C;
    case 251u: goto L_08B35B54;
    case 252u: goto L_08B35B5C;
    case 253u: goto L_08B35B64;
    case 254u: goto L_08B35B6C;
    case 255u: goto L_08B35B74;
    case 256u: goto L_08B35B7C;
    case 257u: goto L_08B35B84;
    case 258u: goto L_08B35B8C;
    case 259u: goto L_08B35B94;
    case 260u: goto L_08B35B9C;
    case 261u: goto L_08B35C30;
    case 262u: goto L_08B35C4C;
    case 263u: goto L_08B35C88;
    case 264u: goto L_08B35CA0;
    case 265u: goto L_08B35CA8;
    case 266u: goto L_08B35CF4;
    case 267u: goto L_08B35E28;
    case 268u: goto L_08B35E30;
    case 269u: goto L_08B35E38;
    case 270u: goto L_08B35E40;
    case 271u: goto L_08B35E48;
    case 272u: goto L_08B35E50;
    case 273u: goto L_08B35E58;
    case 274u: goto L_08B35E60;
    case 275u: goto L_08B35E68;
    case 276u: goto L_08B35E70;
    case 277u: goto L_08B35E74;
    case 278u: goto L_08B35E78;
    case 279u: goto L_08B35E80;
    case 280u: goto L_08B35E88;
    case 281u: goto L_08B35E90;
    case 282u: goto L_08B35E98;
    case 283u: goto L_08B35E9C;
    case 284u: goto L_08B35EA0;
    case 285u: goto L_08B35EA8;
    case 286u: goto L_08B35EBC;
    case 287u: goto L_08B35F54;
    case 288u: goto L_08B35FC0;
    case 289u: goto L_08B35FEC;
    case 290u: goto L_08B36020;
    case 291u: goto L_08B3602C;
    case 292u: goto L_08B360BC;
    case 293u: goto L_08B360C8;
    case 294u: goto L_08B360CC;
    case 295u: goto L_08B360D8;
    case 296u: goto L_08B360E8;
    case 297u: goto L_08B360F4;
    case 298u: goto L_08B3611C;
    case 299u: goto L_08B36144;
    case 300u: goto L_08B36150;
    case 301u: goto L_08B36158;
    case 302u: goto L_08B36160;
    case 303u: goto L_08B3616C;
    case 304u: goto L_08B3618C;
    case 305u: goto L_08B36194;
    case 306u: goto L_08B3619C;
    case 307u: goto L_08B361BC;
    case 308u: goto L_08B361C8;
    case 309u: goto L_08B361E4;
    case 310u: goto L_08B3620C;
    case 311u: goto L_08B36214;
    case 312u: goto L_08B36234;
    case 313u: goto L_08B3625C;
    case 314u: goto L_08B36264;
    case 315u: goto L_08B36284;
    case 316u: goto L_08B3628C;
    case 317u: goto L_08B36290;
    case 318u: goto L_08B362AC;
    case 319u: goto L_08B362B8;
    case 320u: goto L_08B362D4;
    case 321u: goto L_08B362E0;
    case 322u: goto L_08B362E8;
    case 323u: goto L_08B362FC;
    case 324u: goto L_08B36304;
    case 325u: goto L_08B36324;
    case 326u: goto L_08B36330;
    case 327u: goto L_08B3634C;
    case 328u: goto L_08B36358;
    case 329u: goto L_08B36374;
    case 330u: goto L_08B3637C;
    case 331u: goto L_08B3639C;
    case 332u: goto L_08B363A4;
    case 333u: goto L_08B363C4;
    case 334u: goto L_08B363CC;
    case 335u: goto L_08B363D0;
    case 336u: goto L_08B363EC;
    case 337u: goto L_08B363F4;
    case 338u: goto L_08B36400;
    case 339u: goto L_08B36408;
    case 340u: goto L_08B36410;
    case 341u: goto L_08B36414;
    case 342u: goto L_08B36418;
    case 343u: goto L_08B3641C;
    case 344u: goto L_08B3643C;
    case 345u: goto L_08B36444;
    case 346u: goto L_08B36464;
    case 347u: goto L_08B3646C;
    case 348u: goto L_08B3648C;
    case 349u: goto L_08B36494;
    case 350u: goto L_08B3649C;
    case 351u: goto L_08B364A4;
    case 352u: goto L_08B364AC;
    case 353u: goto L_08B364B4;
    case 354u: goto L_08B364DC;
    case 355u: goto L_08B364E4;
    case 356u: goto L_08B36504;
    case 357u: goto L_08B3650C;
    case 358u: goto L_08B3652C;
    case 359u: goto L_08B36534;
    case 360u: goto L_08B36554;
    case 361u: goto L_08B3655C;
    case 362u: goto L_08B3657C;
    case 363u: goto L_08B36584;
    case 364u: goto L_08B365A4;
    case 365u: goto L_08B365AC;
    case 366u: goto L_08B365CC;
    case 367u: goto L_08B365D4;
    case 368u: goto L_08B365E8;
    case 369u: goto L_08B365F4;
    case 370u: goto L_08B365FC;
    case 371u: goto L_08B3661C;
    case 372u: goto L_08B36624;
    case 373u: goto L_08B36644;
    case 374u: goto L_08B3664C;
    case 375u: goto L_08B3666C;
    case 376u: goto L_08B36674;
    case 377u: goto L_08B36694;
    case 378u: goto L_08B3669C;
    case 379u: goto L_08B366BC;
    case 380u: goto L_08B366C4;
    case 381u: goto L_08B366E4;
    case 382u: goto L_08B366EC;
    case 383u: goto L_08B3670C;
    case 384u: goto L_08B36718;
    case 385u: goto L_08B36734;
    case 386u: goto L_08B36740;
    case 387u: goto L_08B3675C;
    case 388u: goto L_08B36784;
    case 389u: goto L_08B367AC;
    case 390u: goto L_08B367D4;
    case 391u: goto L_08B367E0;
    case 392u: goto L_08B367FC;
    case 393u: goto L_08B3681C;
    case 394u: goto L_08B36824;
    case 395u: goto L_08B36834;
    case 396u: goto L_08B3684C;
    case 397u: goto L_08B36850;
    case 398u: goto L_08B36858;
    case 399u: goto L_08B36874;
    case 400u: goto L_08B3689C;
    case 401u: goto L_08B368A8;
    case 402u: goto L_08B368C4;
    case 403u: goto L_08B368EC;
    case 404u: goto L_08B36914;
    case 405u: goto L_08B36920;
    case 406u: goto L_08B3693C;
    case 407u: goto L_08B36964;
    case 408u: goto L_08B3698C;
    case 409u: goto L_08B369B4;
    case 410u: goto L_08B369BC;
    case 411u: goto L_08B369C0;
    case 412u: goto L_08B369C4;
    case 413u: goto L_08B369CC;
    case 414u: goto L_08B369D4;
    case 415u: goto L_08B369DC;
    case 416u: goto L_08B369E4;
    case 417u: goto L_08B369EC;
    case 418u: goto L_08B369F4;
    case 419u: goto L_08B369FC;
    case 420u: goto L_08B36A04;
    case 421u: goto L_08B36A0C;
    case 422u: goto L_08B36A14;
    case 423u: goto L_08B36A1C;
    case 424u: goto L_08B36A24;
    case 425u: goto L_08B36A2C;
    case 426u: goto L_08B36A34;
    case 427u: goto L_08B36A3C;
    case 428u: goto L_08B36A44;
    case 429u: goto L_08B36A4C;
    case 430u: goto L_08B36A54;
    case 431u: goto L_08B36A5C;
    case 432u: goto L_08B36A64;
    case 433u: goto L_08B36A6C;
    case 434u: goto L_08B36A74;
    case 435u: goto L_08B36A7C;
    case 436u: goto L_08B36A84;
    case 437u: goto L_08B36A8C;
    case 438u: goto L_08B36A94;
    case 439u: goto L_08B36A9C;
    case 440u: goto L_08B36AA4;
    case 441u: goto L_08B36AAC;
    case 442u: goto L_08B36AB4;
    case 443u: goto L_08B36ABC;
    case 444u: goto L_08B36AC4;
    case 445u: goto L_08B36ACC;
    case 446u: goto L_08B36AD4;
    case 447u: goto L_08B36ADC;
    case 448u: goto L_08B36AE4;
    case 449u: goto L_08B36AEC;
    case 450u: goto L_08B36AF4;
    case 451u: goto L_08B36AFC;
    case 452u: goto L_08B36B04;
    case 453u: goto L_08B36B0C;
    case 454u: goto L_08B36B14;
    case 455u: goto L_08B36B1C;
    case 456u: goto L_08B36B24;
    case 457u: goto L_08B36B2C;
    case 458u: goto L_08B36B34;
    case 459u: goto L_08B36B3C;
    case 460u: goto L_08B36B44;
    case 461u: goto L_08B36B4C;
    case 462u: goto L_08B36B54;
    case 463u: goto L_08B36B5C;
    case 464u: goto L_08B36B64;
    case 465u: goto L_08B36B6C;
    case 466u: goto L_08B36B74;
    case 467u: goto L_08B36B7C;
    case 468u: goto L_08B36B84;
    case 469u: goto L_08B36B8C;
    case 470u: goto L_08B36B94;
    case 471u: goto L_08B36B9C;
    case 472u: goto L_08B36BA4;
    case 473u: goto L_08B36BAC;
    case 474u: goto L_08B36BB4;
    case 475u: goto L_08B36BBC;
    case 476u: goto L_08B36BC4;
    case 477u: goto L_08B36BCC;
    case 478u: goto L_08B36BD0;
    case 479u: goto L_08B36BD4;
    case 480u: goto L_08B36BFC;
    case 481u: goto L_08B36C3C;
    case 482u: goto L_08B36C44;
    case 483u: goto L_08B36C4C;
    case 484u: goto L_08B36C88;
    case 485u: goto L_08B36C98;
    case 486u: goto L_08B36CFC;
    case 487u: goto L_08B36D9C;
    case 488u: goto L_08B36DA8;
    case 489u: goto L_08B36DB4;
    case 490u: goto L_08B36DEC;
    case 491u: goto L_08B36DF8;
    case 492u: goto L_08B36E38;
    case 493u: goto L_08B36F80;
    case 494u: goto L_08B37098;
    case 495u: goto L_08B3709C;
    case 496u: goto L_08B370A0;
    case 497u: goto L_08B370A8;
    case 498u: goto L_08B370B0;
    case 499u: goto L_08B37254;
    case 500u: goto L_08B372C0;
    case 501u: goto L_08B375E4;
    case 502u: goto L_08B375F4;
    case 503u: goto L_08B37634;
    case 504u: goto L_08B3763C;
    case 505u: goto L_08B37644;
    case 506u: goto L_08B37654;
    case 507u: goto L_08B3765C;
    case 508u: goto L_08B3766C;
    case 509u: goto L_08B3767C;
    case 510u: goto L_08B37684;
    case 511u: goto L_08B376A4;
    case 512u: goto L_08B376BC;
    case 513u: goto L_08B376C4;
    case 514u: goto L_08B376D4;
    case 515u: goto L_08B376EC;
    case 516u: goto L_08B376FC;
    case 517u: goto L_08B3770C;
    case 518u: goto L_08B37714;
    case 519u: goto L_08B3771C;
    case 520u: goto L_08B3772C;
    case 521u: goto L_08B37744;
    case 522u: goto L_08B3774C;
    case 523u: goto L_08B37764;
    case 524u: goto L_08B3776C;
    case 525u: goto L_08B37774;
    case 526u: goto L_08B37788;
    case 527u: goto L_08B377B0;
    case 528u: goto L_08B377D0;
    case 529u: goto L_08B377D4;
    case 530u: goto L_08B37810;
    case 531u: goto L_08B37858;
    case 532u: goto L_08B378A0;
    case 533u: goto L_08B378E8;
    case 534u: goto L_08B37930;
    case 535u: goto L_08B379C0;
    case 536u: goto L_08B379CC;
    case 537u: goto L_08B379E0;
    case 538u: goto L_08B379F4;
    case 539u: goto L_08B37A08;
    case 540u: goto L_08B37A1C;
    case 541u: goto L_08B37A28;
    case 542u: goto L_08B37A38;
    case 543u: goto L_08B37A4C;
    case 544u: goto L_08B37A54;
    case 545u: goto L_08B37A60;
    case 546u: goto L_08B37A70;
    case 547u: goto L_08B37A80;
    case 548u: goto L_08B37A84;
    case 549u: goto L_08B37A8C;
    case 550u: goto L_08B37A90;
    case 551u: goto L_08B37A94;
    case 552u: goto L_08B37A9C;
    case 553u: goto L_08B37AA4;
    case 554u: goto L_08B37AA8;
    case 555u: goto L_08B37AAC;
    case 556u: goto L_08B37AB4;
    case 557u: goto L_08B37AB8;
    case 558u: goto L_08B37ABC;
    case 559u: goto L_08B37AC4;
    case 560u: goto L_08B37ACC;
    case 561u: goto L_08B37AD4;
    case 562u: goto L_08B37ADC;
    case 563u: goto L_08B37AE4;
    case 564u: goto L_08B37AEC;
    case 565u: goto L_08B37AF4;
    case 566u: goto L_08B37AFC;
    case 567u: goto L_08B37B04;
    case 568u: goto L_08B37B0C;
    case 569u: goto L_08B37B14;
    case 570u: goto L_08B37B1C;
    case 571u: goto L_08B37B3C;
    case 572u: goto L_08B37B4C;
    case 573u: goto L_08B37B50;
    case 574u: goto L_08B37B70;
    case 575u: goto L_08B37B74;
    case 576u: goto L_08B37B7C;
    case 577u: goto L_08B37B8C;
    case 578u: goto L_08B37BAC;
    case 579u: goto L_08B37BC8;
    case 580u: goto L_08B37C00;
    case 581u: goto L_08B37C1C;
    case 582u: goto L_08B37C54;
    case 583u: goto L_08B37C68;
    case 584u: goto L_08B37C7C;
    case 585u: goto L_08B37C90;
    case 586u: goto L_08B37CA4;
    case 587u: goto L_08B37CB8;
    case 588u: goto L_08B37CCC;
    case 589u: goto L_08B37CE0;
    case 590u: goto L_08B37CF4;
    case 591u: goto L_08B37D08;
    case 592u: goto L_08B37D1C;
    case 593u: goto L_08B37D30;
    case 594u: goto L_08B37D44;
    case 595u: goto L_08B37D4C;
    case 596u: goto L_08B37D6C;
    case 597u: goto L_08B37D70;
    case 598u: goto L_08B37D74;
    case 599u: goto L_08B37D7C;
    case 600u: goto L_08B37D80;
    case 601u: goto L_08B37D88;
    case 602u: goto L_08B37D90;
    case 603u: goto L_08B37D94;
    case 604u: goto L_08B37DA4;
    case 605u: goto L_08B37DB0;
    case 606u: goto L_08B37DB4;
    case 607u: goto L_08B37DBC;
    case 608u: goto L_08B37DC8;
    case 609u: goto L_08B37DD0;
    case 610u: goto L_08B37DD8;
    case 611u: goto L_08B37DDC;
    case 612u: goto L_08B37DE0;
    case 613u: goto L_08B37DE8;
    case 614u: goto L_08B37DF4;
    case 615u: goto L_08B37DF8;
    case 616u: goto L_08B37E04;
    case 617u: goto L_08B37E08;
    case 618u: goto L_08B37E0C;
    case 619u: goto L_08B37E34;
    case 620u: goto L_08B37E44;
    case 621u: goto L_08B37E4C;
    case 622u: goto L_08B37E54;
    case 623u: goto L_08B37E64;
    case 624u: goto L_08B37E74;
    case 625u: goto L_08B37E84;
    case 626u: goto L_08B37E94;
    case 627u: goto L_08B37EA4;
    case 628u: goto L_08B37EB4;
    case 629u: goto L_08B37EC4;
    case 630u: goto L_08B37ED4;
    case 631u: goto L_08B37EE4;
    case 632u: goto L_08B37EF4;
    case 633u: goto L_08B37F04;
    case 634u: goto L_08B37F14;
    case 635u: goto L_08B37F24;
    case 636u: goto L_08B37F34;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08B34024:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B34064;
L_08B34064:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B34094;
L_08B34094:
    // nop
    // nop
    // nop
    ctx.pc = 0x022AF090u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B340A0:
    // nop
    // nop
    // nop
    ctx.pc = 0x022AF0B0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B340CC:
    // nop
    rt.unsupported(0x08B340D4u, 0x088B0058u, "control flow in delay slot"); return;
L_08B340E8:
    (void)(ctx.hi);
    ctx.hi = 0u;
    (void)(ctx.lo);
    ctx.lo = 0u;
    rt.unsupported(0x08B340F8u, 0x00000038u, "special? not lowered yet"); return;
L_08B34158:
    // nop
    // nop
    // nop
    // nop
    // nop
    (void)(static_cast<std::uint32_t>(std::countl_zero(0u)));
    // nop
    // nop
    // vflush: architectural no-op that retains VFPU prefixes
    goto L_08B3417C;
L_08B3417C:
    ctx.fpr[10] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(21872)));
    ctx.gpr[31] = (0x08B34188u);
    rt.unsupported(0x08B34184u, 0x71C2E0B0u, "unknown not lowered yet"); return;
    ctx.pc = 0x011EDECCu;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B34188u) goto L_08B34188;
    return;
L_08B34188:
    if (ctx.gpr[21] != ctx.gpr[26]) {
    // nop
        (void)rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 219u, 0x08B318CCu>(ctx, &aot_mem); return;
    }
    goto L_08B34190;
L_08B34190:
    // nop
    // nop
    // nop
    ctx.gpr[10] = (ctx.gpr[16] << 12u);
    // nop
    // nop
    // nop
    // nop
    goto L_08B341B0;
L_08B341B0:
    ctx.gpr[10] = (ctx.gpr[17] << 12u);
    // nop
    // nop
    // nop
    // nop
    ctx.gpr[10] = (ctx.gpr[18] << 12u);
    // nop
    // nop
    // nop
    goto L_08B341D4;
L_08B341D4:
    // nop
    ctx.gpr[10] = (ctx.gpr[19] << 12u);
    // nop
    // nop
    // nop
    // nop
    ctx.gpr[10] = (ctx.gpr[20] << 12u);
    // nop
    // nop
    // nop
    // nop
    goto L_08B34200;
L_08B34200:
    ctx.gpr[10] = (ctx.gpr[21] << 12u);
    // nop
    // nop
    // nop
    // nop
    goto L_08B34214;
L_08B34214:
    ctx.gpr[10] = (ctx.gpr[22] << 12u);
    // nop
    // nop
    // nop
    // nop
    ctx.gpr[10] = (ctx.gpr[23] << 12u);
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    rt.unsupported(0x08B34250u, 0x4F4C5300u, "unknown not lowered yet"); return;
L_08B34258:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    rt.unsupported(0x08B34270u, 0x46415300u, "cop1? not lowered yet"); return;
L_08B342E8:
    (void)(0u << 3u);
    rt.unsupported(0x08B342ECu, 0x000000C1u, "special? not lowered yet"); return;
L_08B34318:
    if (ctx.gpr[11] == 0u) (void)(ctx.gpr[6]);
    (void)(ctx.gpr[12] << 0u);
    rt.unsupported(0x08B34320u, 0x000000CDu, "special? not lowered yet"); return;
L_08B34368:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    (void)(0u << 0u);
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    rt.unsupported(0x08B343B8u, 0x000000B1u, "special? not lowered yet"); return;
L_08B343C0:
    // nop
    // nop
    goto L_08B343C8;
L_08B343C8:
    // nop
    // nop
    // nop
    // nop
    (void)(ctx.lo);
    // nop
    // nop
    // nop
    rt.unsupported(0x08B343E8u, 0x00D000C1u, "special? not lowered yet"); return;
L_08B344E4:
    rt.unsupported(0x08B344E4u, 0x00000001u, "special? not lowered yet"); return;
L_08B344EC:
    ctx.gpr[16] = (0u << 16u);
    goto L_08B344F0;
L_08B344F0:
    // nop
    goto L_08B344F4;
L_08B344F4:
    rt.unsupported(0x08B344F8u, 0x088B57E8u, "control flow in delay slot"); return;
L_08B344FC:
    // nop
    // nop
    goto L_08B34504;
L_08B34504:
    // nop
    rt.unsupported(0x08B34508u, 0x40666666u, "unknown not lowered yet"); return;
L_08B3450C:
    rt.unsupported(0x08B3450Cu, 0x42480000u, "unknown not lowered yet"); return;
L_08B34514:
    // nop
    // nop
    goto L_08B3451C;
L_08B3451C:
    // nop
    // nop
    goto L_08B34524;
L_08B34524:
    ctx.gpr[3] = (ctx.gpr[29] ^ 55050u);
    // nop
    goto L_08B3452C;
L_08B3452C:
    rt.unsupported(0x08B3452Cu, 0x000001F4u, "special? not lowered yet"); return;
L_08B34534:
    rt.unsupported(0x08B34534u, 0x000001F4u, "special? not lowered yet"); return;
L_08B3453C:
    rt.unsupported(0x08B3453Cu, 0x00000BB8u, "special? not lowered yet"); return;
L_08B34544:
    rt.unsupported(0x08B34544u, 0x000001F4u, "special? not lowered yet"); return;
L_08B3454C:
    rt.unsupported(0x08B3454Cu, 0x000001F4u, "special? not lowered yet"); return;
L_08B34554:
    rt.unsupported(0x08B34554u, 0x000003E8u, "special? not lowered yet"); return;
L_08B3455C:
    rt.unsupported(0x08B3455Cu, 0x000001F4u, "special? not lowered yet"); return;
L_08B34564:
    rt.unsupported(0x08B34564u, 0x000001F4u, "special? not lowered yet"); return;
L_08B3456C:
    rt.unsupported(0x08B3456Cu, 0x000003E8u, "special? not lowered yet"); return;
L_08B34574:
    rt.unsupported(0x08B34574u, 0x000001F4u, "special? not lowered yet"); return;
L_08B3457C:
    rt.unsupported(0x08B3457Cu, 0x000001F4u, "special? not lowered yet"); return;
L_08B34580:
    (void)(0u >> 0u);
    goto L_08B34584;
L_08B34584:
    rt.unsupported(0x08B34584u, 0x000003E8u, "special? not lowered yet"); return;
L_08B3458C:
    (void)(0u & 0u);
    (void)(0u >> 0u);
    goto L_08B34594;
L_08B34594:
    (void)(0u & 0u);
    (void)(0u >> 0u);
    goto L_08B3459C;
L_08B3459C:
    rt.unsupported(0x08B3459Cu, 0x000003E8u, "special? not lowered yet"); return;
L_08B345A4:
    rt.unsupported(0x08B345A4u, 0x000005DCu, "special? not lowered yet"); return;
L_08B345AC:
    rt.unsupported(0x08B345ACu, 0x000005DCu, "special? not lowered yet"); return;
L_08B345B4:
    rt.unsupported(0x08B345B4u, 0x00000BB8u, "special? not lowered yet"); return;
L_08B345BC:
    (void)(ctx.hi);
    rt.unsupported(0x08B345C0u, 0x00000032u, "special? not lowered yet"); return;
L_08B345C4:
    ctx.gpr[1] = (0u >> 0u);
    rt.unsupported(0x08B345C8u, 0x000003E8u, "special? not lowered yet"); return;
L_08B345CC:
    rt.unsupported(0x08B345CCu, 0x00000BB8u, "special? not lowered yet"); return;
L_08B345D4:
    jump_target = 0u;
    (void)(ctx.hi);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B345DC:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(0u)) * static_cast<std::int64_t>(static_cast<std::int32_t>(0u)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    rt.unsupported(0x08B345E0u, 0x00000BB8u, "special? not lowered yet"); return;
L_08B345E4:
    ctx.gpr[1] = (0u << (0u & 31u));
    // nop
    goto L_08B345EC;
L_08B345EC:
    jump_target = 0u;
    (void)(ctx.hi);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B345F4:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(0u)) * static_cast<std::int64_t>(static_cast<std::int32_t>(0u)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    rt.unsupported(0x08B345F8u, 0x00000BB8u, "special? not lowered yet"); return;
L_08B345FC:
    ctx.gpr[1] = (0u & 0u);
    // nop
    goto L_08B34604;
L_08B34604:
    (void)(static_cast<std::int32_t>(0u) > static_cast<std::int32_t>(0u) ? 0u : 0u);
    jump_target = 0u;
    rt.unsupported(0x08B3460Cu, 0x000001F4u, "special? not lowered yet"); return;
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B3460C:
    rt.unsupported(0x08B3460Cu, 0x000001F4u, "special? not lowered yet"); return;
L_08B34614:
    ctx.gpr[1] = (ctx.hi);
    // nop
    goto L_08B3461C;
L_08B3461C:
    rt.unsupported(0x08B3461Cu, 0x00000BB8u, "special? not lowered yet"); return;
L_08B34624:
    { const bool signed_ok = ctx.execute_signed_add(1u, 0u, 0u);
      if (!signed_ok) { rt.arithmetic_overflow(0x08B34624u, 0x00000FA0u); return; } }
    rt.unsupported(0x08B34628u, 0x000003E8u, "special? not lowered yet"); return;
L_08B34648:
    // nop
    rt.unsupported(0x08B3464Cu, 0x00001770u, "special? not lowered yet"); return;
L_08B34738:
    // nop
    (void)(ctx.hi);
    (void)(ctx.hi);
    { const bool signed_ok = ctx.execute_signed_add(1u, 0u, 0u);
      if (!signed_ok) { rt.arithmetic_overflow(0x08B34744u, 0x00000FA0u); return; } }
    { const bool signed_ok = ctx.execute_signed_add(1u, 0u, 0u);
      if (!signed_ok) { rt.arithmetic_overflow(0x08B34748u, 0x00000FA0u); return; } }
    jump_target = 0u;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B34868:
    rt.unsupported(0x08B34868u, 0x000003E8u, "special? not lowered yet"); return;
L_08B348CC:
    { const bool signed_ok = ctx.execute_signed_add(1u, 0u, 0u);
      if (!signed_ok) { rt.arithmetic_overflow(0x08B348CCu, 0x00000FA0u); return; } }
    // nop
    rt.unsupported(0x08B348D4u, 0x000003E8u, "special? not lowered yet"); return;
L_08B348DC:
    rt.unsupported(0x08B348DCu, 0x00000BB8u, "special? not lowered yet"); return;
L_08B34ACC:
    rt.unsupported(0x08B34AD0u, 0x08B1254Cu, "control flow in delay slot"); return;
L_08B34C48:
    rt.unsupported(0x08B34C4Cu, 0x08B1267Cu, "control flow in delay slot"); return;
L_08B34C50:
    rt.unsupported(0x08B34C50u, 0x00000001u, "special? not lowered yet"); return;
L_08B34C58:
    // nop
    rt.unsupported(0x08B34C60u, 0x08B1268Cu, "control flow in delay slot"); return;
L_08B34C60:
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> 0u));
    ctx.pc = 0x02C49A30u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B34C68:
    if (0u != 0u) (void)(0u);
    // nop
    goto L_08B34C70;
L_08B34C70:
    rt.unsupported(0x08B34C74u, 0x08B1269Cu, "control flow in delay slot"); return;
L_08B34C78:
    rt.unsupported(0x08B34C78u, 0x00000001u, "special? not lowered yet"); return;
L_08B34C80:
    rt.unsupported(0x08B34C80u, 0x00000001u, "special? not lowered yet"); return;
L_08B34C88:
    rt.unsupported(0x08B34C8Cu, 0x00000001u, "special? not lowered yet"); return;
    ctx.pc = 0x02C49AB0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B34C90:
    if (0u != 0u) (void)(0u);
    // nop
    goto L_08B34C98;
L_08B34C98:
    rt.unsupported(0x08B34C9Cu, 0x08B126BCu, "control flow in delay slot"); return;
L_08B34CA0:
    (void)(0u >> 0u);
    if (0u != 0u) (void)(0u);
    goto L_08B34CA8;
L_08B34CA8:
    // nop
    rt.unsupported(0x08B34CB0u, 0x08B126CCu, "control flow in delay slot"); return;
L_08B34CB0:
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> 0u));
    ctx.pc = 0x02C49B30u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B34CB8:
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> (0u & 31u)));
    // nop
    goto L_08B34CC0;
L_08B34CC0:
    rt.unsupported(0x08B34CC4u, 0x08B126DCu, "control flow in delay slot"); return;
L_08B34CC8:
    (void)(0u >> 0u);
    if (0u != 0u) (void)(0u);
    goto L_08B34CD0;
L_08B34CD0:
    // nop
    rt.unsupported(0x08B34CD8u, 0x08B126ECu, "control flow in delay slot"); return;
L_08B34CD8:
    // nop
    ctx.pc = 0x02C49BB0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B34CE0:
    (void)(0u >> 0u);
    // nop
    goto L_08B34CE8;
L_08B34CE8:
    rt.unsupported(0x08B34CECu, 0x08B126FCu, "control flow in delay slot"); return;
L_08B34CF0:
    rt.unsupported(0x08B34CF0u, 0x00000001u, "special? not lowered yet"); return;
L_08B34CF8:
    // nop
    rt.unsupported(0x08B34D00u, 0x08B1270Cu, "control flow in delay slot"); return;
L_08B34D00:
    rt.unsupported(0x08B34D04u, 0x00000001u, "special? not lowered yet"); return;
    ctx.pc = 0x02C49C30u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B34D08:
    (void)(0u << (0u & 31u));
    // nop
    goto L_08B34D10;
L_08B34D10:
    rt.unsupported(0x08B34D14u, 0x08B1271Cu, "control flow in delay slot"); return;
L_08B34D18:
    (void)(0u >> 0u);
    rt.unsupported(0x08B34D1Cu, 0x00000005u, "special? not lowered yet"); return;
L_08B34D20:
    // nop
    rt.unsupported(0x08B34D28u, 0x08B1272Cu, "control flow in delay slot"); return;
L_08B34D28:
    (void)(0u >> 0u);
    ctx.pc = 0x02C49CB0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B34D30:
    (void)(0u >> (0u & 31u));
    // nop
    goto L_08B34D38;
L_08B34D38:
    rt.unsupported(0x08B34D3Cu, 0x08B1273Cu, "control flow in delay slot"); return;
L_08B34D40:
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> 0u));
    jump_target = 0u;
    ctx.gpr[31] = (0x08B34D4Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B34D4Cu) goto L_08B34D4C;
    return;
L_08B34D48:
    // nop
    goto L_08B34D4C;
L_08B34D4C:
    rt.unsupported(0x08B34D50u, 0x08B1274Cu, "control flow in delay slot"); return;
L_08B34D50:
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> 0u));
    ctx.pc = 0x02C49D30u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B34D58:
    jump_target = 0u;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B34D60:
    rt.unsupported(0x08B34D64u, 0x08B1275Cu, "control flow in delay slot"); return;
L_08B34D68:
    // nop
    rt.unsupported(0x08B34D6Cu, 0x00000001u, "special? not lowered yet"); return;
L_08B34D70:
    // nop
    rt.unsupported(0x08B34D78u, 0x08B1276Cu, "control flow in delay slot"); return;
L_08B34D78:
    // nop
    ctx.pc = 0x02C49DB0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B34D80:
    // nop
    // nop
    goto L_08B34D88;
L_08B34D88:
    rt.unsupported(0x08B34D8Cu, 0x08B12778u, "control flow in delay slot"); return;
L_08B34D90:
    // nop
    if (0u != 0u) (void)(0u);
    goto L_08B34D98;
L_08B34D98:
    // nop
    rt.unsupported(0x08B34DA0u, 0x08B12788u, "control flow in delay slot"); return;
L_08B34DA0:
    (void)(0u >> 0u);
    ctx.pc = 0x02C49E20u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B34DA8:
    if (0u != 0u) (void)(0u);
    // nop
    goto L_08B34DB0;
L_08B34DB0:
    rt.unsupported(0x08B34DB4u, 0x08B12794u, "control flow in delay slot"); return;
L_08B34DB8:
    (void)(0u >> 0u);
    if (0u != 0u) (void)(0u);
    goto L_08B34DC0;
L_08B34DC0:
    // nop
    rt.unsupported(0x08B34DC8u, 0x08B127A4u, "control flow in delay slot"); return;
L_08B34DC8:
    (void)(0u << (0u & 31u));
    ctx.pc = 0x02C49E90u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B34DD0:
    if (0u != 0u) (void)(0u);
    // nop
    goto L_08B34DD8;
L_08B34DD8:
    rt.unsupported(0x08B34DDCu, 0x08B127B4u, "control flow in delay slot"); return;
L_08B34DE0:
    (void)(0u >> 0u);
    if (0u != 0u) (void)(0u);
    goto L_08B34DE8;
L_08B34DE8:
    // nop
    rt.unsupported(0x08B34DF0u, 0x08B127C4u, "control flow in delay slot"); return;
L_08B34DF0:
    // nop
    ctx.pc = 0x02C49F10u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B34DF8:
    if (0u != 0u) (void)(0u);
    // nop
    goto L_08B34E00;
L_08B34E00:
    rt.unsupported(0x08B34E04u, 0x08B127D8u, "control flow in delay slot"); return;
L_08B34E04:
    (void)(0u << (0u & 31u));
    ctx.pc = 0x02C49F60u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B34E08:
    (void)(0u << (0u & 31u));
    if (0u != 0u) (void)(0u);
    goto L_08B34E10;
L_08B34E10:
    rt.unsupported(0x08B34E10u, 0x00000001u, "special? not lowered yet"); return;
L_08B34E18:
    (void)(0u << (0u & 31u));
    ctx.pc = 0x02C49FA0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B34E20:
    if (0u != 0u) (void)(0u);
    // nop
    goto L_08B34E28;
L_08B34E28:
    rt.unsupported(0x08B34E2Cu, 0x08B127F8u, "control flow in delay slot"); return;
L_08B34E30:
    rt.unsupported(0x08B34E30u, 0x00000001u, "special? not lowered yet"); return;
L_08B34E38:
    // nop
    rt.unsupported(0x08B34E40u, 0x08B12808u, "control flow in delay slot"); return;
L_08B34E40:
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> 0u));
    ctx.pc = 0x02C4A020u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B34E48:
    if (0u != 0u) (void)(0u);
    // nop
    goto L_08B34E50;
L_08B34E50:
    rt.unsupported(0x08B34E54u, 0x08B12818u, "control flow in delay slot"); return;
L_08B34E58:
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> 0u));
    if (0u != 0u) (void)(0u);
    goto L_08B34E60;
L_08B34E60:
    // nop
    rt.unsupported(0x08B34E68u, 0x08B12828u, "control flow in delay slot"); return;
L_08B34E68:
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> 0u));
    ctx.pc = 0x02C4A0A0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B34E70:
    if (0u != 0u) (void)(0u);
    rt.unsupported(0x08B34E74u, 0x00000001u, "special? not lowered yet"); return;
L_08B34E78:
    rt.unsupported(0x08B34E7Cu, 0x08B12838u, "control flow in delay slot"); return;
L_08B34E80:
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> 0u));
    if (0u != 0u) (void)(0u);
    goto L_08B34E88;
L_08B34E88:
    rt.unsupported(0x08B34E88u, 0x00000001u, "special? not lowered yet"); return;
L_08B34E90:
    (void)(0u << (0u & 31u));
    ctx.pc = 0x02C4A130u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B34E98:
    if (0u != 0u) (void)(0u);
    rt.unsupported(0x08B34E9Cu, 0x00000001u, "special? not lowered yet"); return;
L_08B34EA0:
    rt.unsupported(0x08B34EA4u, 0x08B1285Cu, "control flow in delay slot"); return;
L_08B34EA8:
    (void)(0u >> 0u);
    if (0u != 0u) (void)(0u);
    goto L_08B34EB0;
L_08B34EB0:
    // nop
    rt.unsupported(0x08B34EB8u, 0x08B1286Cu, "control flow in delay slot"); return;
L_08B34EB8:
    (void)(0u << (0u & 31u));
    ctx.pc = 0x02C4A1B0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B34EC0:
    if (0u != 0u) (void)(0u);
    // nop
    goto L_08B34EC8;
L_08B34EC8:
    rt.unsupported(0x08B34ECCu, 0x08B1287Cu, "control flow in delay slot"); return;
L_08B34ED0:
    // nop
    if (0u != 0u) (void)(0u);
    goto L_08B34ED8;
L_08B34ED8:
    rt.unsupported(0x08B34ED8u, 0x00000001u, "special? not lowered yet"); return;
L_08B34EE0:
    (void)(0u << (0u & 31u));
    ctx.pc = 0x02C4A230u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B34EE8:
    if (0u != 0u) (void)(0u);
    // nop
    goto L_08B34EF0;
L_08B34EF0:
    rt.unsupported(0x08B34EF4u, 0x08B1289Cu, "control flow in delay slot"); return;
L_08B34EF8:
    rt.unsupported(0x08B34EF8u, 0x00000001u, "special? not lowered yet"); return;
L_08B34F00:
    // nop
    rt.unsupported(0x08B34F08u, 0x08B128ACu, "control flow in delay slot"); return;
L_08B34F08:
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> 0u));
    ctx.pc = 0x02C4A2B0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B34F10:
    if (0u != 0u) (void)(0u);
    // nop
    goto L_08B34F18;
L_08B34F18:
    rt.unsupported(0x08B34F1Cu, 0x08B128C0u, "control flow in delay slot"); return;
L_08B34F20:
    (void)(0u << (0u & 31u));
    if (0u != 0u) (void)(0u);
    goto L_08B34F28;
L_08B34F28:
    rt.unsupported(0x08B34F28u, 0x00000001u, "special? not lowered yet"); return;
L_08B34FD4:
    // nop
    if (0u != 0u) (void)(0u);
    rt.unsupported(0x08B34FDCu, 0x00000001u, "special? not lowered yet"); return;
L_08B35004:
    // nop
    rt.unsupported(0x08B3500Cu, 0x08B00CB4u, "control flow in delay slot"); return;
L_08B35010:
    rt.unsupported(0x08B35010u, 0x43534944u, "unknown not lowered yet"); return;
L_08B3501C:
    ctx.gpr[5] = (ctx.gpr[26] < static_cast<std::uint32_t>(19777) ? 1u : 0u);
    rt.unsupported(0x08B35020u, 0x44525355u, "unsupported CFC1 control register"); return;
    jump_target = ctx.gpr[1];
    ctx.gpr[10] = (0x08B3502Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B3502Cu) goto L_08B3502C;
    return;
L_08B3502C:
    // nop
    goto L_08B35030;
L_08B35030:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    rt.unsupported(0x08B35090u, 0x40666666u, "unknown not lowered yet"); return;
L_08B350D4:
    ctx.gpr[8] = (ctx.gpr[15] << 9u);
    ctx.gpr[28] = (ctx.gpr[4] << 7u);
    ctx.gpr[22] = (ctx.gpr[15] << 6u);
    ctx.gpr[17] = (ctx.gpr[27] << 22u);
    ctx.gpr[29] = (ctx.gpr[1] << 11u);
    goto L_08B350E8;
L_08B350E8:
    ctx.gpr[17] = (ctx.gpr[23] << 9u);
    ctx.gpr[21] = (ctx.gpr[18] << 2u);
    ctx.gpr[23] = (ctx.gpr[12] << 10u);
    ctx.gpr[16] = (ctx.gpr[30] << 18u);
    ctx.gpr[19] = (ctx.gpr[21] << 30u);
    ctx.gpr[16] = (ctx.gpr[26] << 5u);
    ctx.gpr[18] = (ctx.gpr[24] << 26u);
    ctx.gpr[5] = (ctx.gpr[17] << 20u);
    ctx.gpr[25] = (ctx.gpr[6] << 18u);
    ctx.gpr[1] = (ctx.gpr[29] << 4u);
    ctx.gpr[12] = (ctx.gpr[3] << 25u);
    ctx.gpr[15] = (ctx.gpr[29] << 1u);
    (void)(ctx.gpr[25] << 23u);
    ctx.gpr[2] = (ctx.gpr[26] << 8u);
    ctx.gpr[4] = (ctx.gpr[20] << 16u);
    ctx.gpr[9] = (ctx.gpr[12] << 13u);
    ctx.gpr[6] = (ctx.gpr[14] << 24u);
    ctx.gpr[24] = (ctx.gpr[9] << 14u);
    ctx.gpr[25] = (ctx.gpr[10] << 31u);
    ctx.gpr[27] = (ctx.gpr[7] << 3u);
    ctx.gpr[13] = (0u << 29u);
    ctx.gpr[3] = (ctx.gpr[23] << 12u);
    ctx.gpr[24] = (ctx.gpr[13] << 27u);
    ctx.gpr[30] = (ctx.gpr[30] << 15u);
    // nop
    // nop
    goto L_08B35150;
L_08B35150:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    ctx.gpr[16] = (0u << 0u);
    goto L_08B3516C;
L_08B3516C:
    // nop
    rt.unsupported(0x08B35170u, 0x0000FFFFu, "special? not lowered yet"); return;
L_08B351B0:
    // nop
    rt.unsupported(0x08B351B8u, 0x088BA70Cu, "control flow in delay slot"); return;
L_08B351FC:
    // nop
    rt.unsupported(0x08B35204u, 0x08806498u, "control flow in delay slot"); return;
L_08B35210:
    // nop
    // nop
    // nop
    ctx.pc = 0x023169B0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B3521C:
    // nop
    rt.unsupported(0x08B35224u, 0x08B00D0Cu, "control flow in delay slot"); return;
L_08B35228:
    // nop
    rt.unsupported(0x08B35230u, 0x088CABA4u, "control flow in delay slot"); return;
L_08B35234:
    // nop
    rt.unsupported(0x08B3523Cu, 0x088CABA4u, "control flow in delay slot"); return;
L_08B3524C:
    // nop
    // nop
    // nop
    // nop
    (void)(0u << 16u);
    ctx.gpr[18] = (18725u << 16u);
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B35280;
L_08B35280:
    // nop
    // nop
    // nop
    // nop
    goto L_08B35290;
L_08B35290:
    (void)(0u << 16u);
    (void)(0u << 16u);
    (void)(0u << 16u);
    (void)(0u << 16u);
    (void)(0u << 16u);
    goto L_08B352A4;
L_08B352A4:
    // nop
    // nop
    // nop
    // nop
    // nop
    rt.unsupported(0x08B352B8u, 0x40666666u, "unknown not lowered yet"); return;
L_08B352D8:
    // nop
    // nop
    // nop
    ctx.pc = 0x023413A0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B352E4:
    // nop
    rt.unsupported(0x08B352ECu, 0x08806498u, "control flow in delay slot"); return;
L_08B352F0:
    // nop
    rt.unsupported(0x08B352F8u, 0x08806498u, "control flow in delay slot"); return;
L_08B352FC:
    // nop
    rt.unsupported(0x08B35304u, 0x08806498u, "control flow in delay slot"); return;
L_08B35304:
    // nop
    ctx.pc = 0x02019260u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B35308:
    // nop
    rt.unsupported(0x08B35310u, 0x08806498u, "control flow in delay slot"); return;
L_08B35314:
    // nop
    rt.unsupported(0x08B3531Cu, 0x08806498u, "control flow in delay slot"); return;
L_08B35320:
    // nop
    rt.unsupported(0x08B35328u, 0x08806498u, "control flow in delay slot"); return;
L_08B3532C:
    // nop
    rt.unsupported(0x08B35334u, 0x08806498u, "control flow in delay slot"); return;
L_08B35338:
    // nop
    rt.unsupported(0x08B35340u, 0x08806498u, "control flow in delay slot"); return;
L_08B35344:
    // nop
    rt.unsupported(0x08B3534Cu, 0x08806498u, "control flow in delay slot"); return;
L_08B35350:
    // nop
    goto L_08B35354;
L_08B35354:
    rt.unsupported(0x08B35358u, 0x08806498u, "control flow in delay slot"); return;
L_08B3535C:
    // nop
    rt.unsupported(0x08B35364u, 0x08806498u, "control flow in delay slot"); return;
L_08B35364:
    rt.unsupported(0x08B35368u, 0x40666666u, "unknown not lowered yet"); return;
    ctx.pc = 0x02019260u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B3536C:
    rt.unsupported(0x08B3536Cu, 0x42480000u, "unknown not lowered yet"); return;
L_08B35374:
    // nop
    // nop
    goto L_08B3537C;
L_08B3537C:
    // nop
    // nop
    goto L_08B35384;
L_08B35384:
    ctx.gpr[3] = (ctx.gpr[29] ^ 55050u);
    // nop
    goto L_08B3538C;
L_08B3538C:
    ctx.gpr[25] = (39322u << 16u);
    rt.unsupported(0x08B35390u, 0x40000000u, "unknown not lowered yet"); return;
L_08B35394:
    rt.unsupported(0x08B35394u, 0x40600000u, "unknown not lowered yet"); return;
L_08B3539C:
    // nop
    (void)(ctx.gpr[5] << 0u);
    goto L_08B353A4;
L_08B353A4:
    rt.unsupported(0x08B353A4u, 0x0029002Eu, "special? not lowered yet"); return;
L_08B353AC:
    rt.unsupported(0x08B353ACu, 0x0028002Eu, "special? not lowered yet"); return;
L_08B353B4:
    rt.unsupported(0x08B353B4u, 0x002E0028u, "special? not lowered yet"); return;
L_08B353BC:
    rt.unsupported(0x08B353BCu, 0x0025002Eu, "special? not lowered yet"); return;
L_08B353C4:
    (void)(ctx.gpr[1] ^ ctx.gpr[11]);
    (void)(ctx.gpr[1] ^ ctx.gpr[14]);
    goto L_08B353CC;
L_08B353CC:
    rt.unsupported(0x08B353CCu, 0x002E002Eu, "special? not lowered yet"); return;
L_08B353D4:
    rt.unsupported(0x08B353D4u, 0x0028002Eu, "special? not lowered yet"); return;
L_08B353DC:
    rt.unsupported(0x08B353DCu, 0x002E002Eu, "special? not lowered yet"); return;
L_08B353E4:
    rt.unsupported(0x08B353E4u, 0x0025002Eu, "special? not lowered yet"); return;
L_08B353EC:
    (void)(ctx.gpr[1] ^ ctx.gpr[11]);
    (void)(ctx.gpr[1] ^ ctx.gpr[14]);
    goto L_08B353F4;
L_08B353F4:
    rt.unsupported(0x08B353F4u, 0x002E002Eu, "special? not lowered yet"); return;
L_08B353FC:
    rt.unsupported(0x08B353FCu, 0x0028002Eu, "special? not lowered yet"); return;
L_08B35404:
    rt.unsupported(0x08B35404u, 0x002E002Eu, "special? not lowered yet"); return;
L_08B3540C:
    rt.unsupported(0x08B3540Cu, 0x002E002Eu, "special? not lowered yet"); return;
L_08B35414:
    rt.unsupported(0x08B35414u, 0x002B0029u, "special? not lowered yet"); return;
L_08B3541C:
    rt.unsupported(0x08B3541Cu, 0x002E002Eu, "special? not lowered yet"); return;
L_08B35424:
    rt.unsupported(0x08B35424u, 0x0028002Eu, "special? not lowered yet"); return;
L_08B3542C:
    rt.unsupported(0x08B3542Cu, 0x002E0028u, "special? not lowered yet"); return;
L_08B35434:
    rt.unsupported(0x08B35434u, 0x0025002Eu, "special? not lowered yet"); return;
L_08B3543C:
    rt.unsupported(0x08B3543Cu, 0x002B002Fu, "special? not lowered yet"); return;
L_08B35444:
    rt.unsupported(0x08B35444u, 0x002E002Eu, "special? not lowered yet"); return;
L_08B355A8:
    rt.unsupported(0x08B355ACu, 0x088E8C98u, "control flow in delay slot"); return;
L_08B355DC:
    rt.unsupported(0x08B355E0u, 0x088E8D9Cu, "control flow in delay slot"); return;
L_08B3562C:
    rt.unsupported(0x08B35630u, 0x088E967Cu, "control flow in delay slot"); return;
L_08B35778:
    // PSP CACHE is a no-op in coherent host memory.
    // PSP CACHE is a no-op in coherent host memory.
    rt.unsupported(0x08B35780u, 0xC04CCCCDu, "unknown not lowered yet"); return;
L_08B3578C:
    rt.unsupported(0x08B3578Cu, 0x40000000u, "unknown not lowered yet"); return;
L_08B357A0:
    rt.unsupported(0x08B357A0u, 0x40C00000u, "unknown not lowered yet"); return;
L_08B357B4:
    ctx.gpr[21] = (49807u << 16u);
    ctx.gpr[3] = (55050u << 16u);
    ctx.gpr[25] = (39322u << 16u);
    ctx.gpr[3] = (55050u << 16u);
    ctx.gpr[3] = (55050u << 16u);
    goto L_08B357C8;
L_08B357C8:
    ctx.gpr[12] = (52429u << 16u);
    ctx.gpr[3] = (55050u << 16u);
    ctx.gpr[25] = (39322u << 16u);
    ctx.gpr[3] = (55050u << 16u);
    ctx.gpr[3] = (55050u << 16u);
    goto L_08B357DC;
L_08B357DC:
    ctx.gpr[5] = (7864u << 16u);
    ctx.gpr[12] = (52429u << 16u);
    ctx.gpr[25] = (39322u << 16u);
    ctx.gpr[21] = (49807u << 16u);
    ctx.gpr[3] = (55050u << 16u);
    rt.unsupported(0x08B357F0u, 0x40C00000u, "unknown not lowered yet"); return;
L_08B35828:
    // nop
    goto L_08B3582C;
L_08B3582C:
    // nop
    ctx.gpr[12] = (52429u << 16u);
    ctx.gpr[19] = (13107u << 16u);
    ctx.gpr[25] = (39322u << 16u);
    rt.unsupported(0x08B3583Cu, 0x00000001u, "special? not lowered yet"); return;
L_08B35850:
    // nop
    // nop
    // nop
    // nop
    rt.unsupported(0x08B35860u, 0x41700000u, "unknown not lowered yet"); return;
L_08B358A8:
    ctx.gpr[12] = (52429u << 16u);
    ctx.gpr[24] = (20972u << 16u);
    ctx.gpr[25] = (39322u << 16u);
    ctx.gpr[3] = (55050u << 16u);
    ctx.gpr[12] = (52429u << 16u);
    (void)(0u << 16u);
    ctx.gpr[24] = (20972u << 16u);
    ctx.gpr[25] = (39322u << 16u);
    ctx.gpr[25] = (39322u << 16u);
    rt.unsupported(0x08B358CCu, 0x40000000u, "unknown not lowered yet"); return;
L_08B358F4:
    // nop
    goto L_08B358F8;
L_08B358F8:
    // nop
    ctx.gpr[12] = (52429u << 16u);
    ctx.gpr[12] = (52429u << 16u);
    ctx.gpr[12] = (52429u << 16u);
    rt.unsupported(0x08B35908u, 0x40A00000u, "unknown not lowered yet"); return;
L_08B35938:
    rt.unsupported(0x08B35938u, 0x40200000u, "unknown not lowered yet"); return;
L_08B359BC:
    ctx.gpr[25] = (39322u << 16u);
    rt.unsupported(0x08B359C0u, 0x40000000u, "unknown not lowered yet"); return;
L_08B35A74:
    ctx.gpr[6] = (26214u << 16u);
    (void)(0u << 16u);
    ctx.gpr[12] = (52429u << 16u);
    rt.unsupported(0x08B35A80u, 0x41200000u, "unknown not lowered yet"); return;
L_08B35B2C:
    rt.unsupported(0x08B35B2Cu, 0x40600000u, "unknown not lowered yet"); return;
L_08B35B34:
    rt.unsupported(0x08B35B34u, 0x41200000u, "unknown not lowered yet"); return;
L_08B35B3C:
    (void)(0u << 16u);
    (void)(0u << 16u);
    goto L_08B35B44;
L_08B35B44:
    (void)(0u << 16u);
    (void)(0u << 16u);
    goto L_08B35B4C;
L_08B35B4C:
    ctx.gpr[12] = (52429u << 16u);
    ctx.gpr[3] = (ctx.gpr[29] ^ 55050u);
    goto L_08B35B54;
L_08B35B54:
    ctx.gpr[12] = (52429u << 16u);
    (void)(0u << 16u);
    goto L_08B35B5C;
L_08B35B5C:
    ctx.gpr[6] = (54258u << 16u);
    ctx.gpr[6] = (54258u << 16u);
    goto L_08B35B64;
L_08B35B64:
    ctx.gpr[6] = (26214u << 16u);
    (void)(0u << 16u);
    goto L_08B35B6C;
L_08B35B6C:
    ctx.gpr[12] = (52429u << 16u);
    rt.unsupported(0x08B35B70u, 0x41200000u, "unknown not lowered yet"); return;
L_08B35B74:
    rt.unsupported(0x08B35B74u, 0x41700000u, "unknown not lowered yet"); return;
L_08B35B7C:
    (void)(0u << 16u);
    // nop
    goto L_08B35B84;
L_08B35B84:
    ctx.gpr[6] = (26214u << 16u);
    ctx.gpr[12] = (52429u << 16u);
    goto L_08B35B8C;
L_08B35B8C:
    ctx.gpr[3] = (ctx.gpr[29] ^ 55050u);
    ctx.gpr[12] = (52429u << 16u);
    goto L_08B35B94;
L_08B35B94:
    (void)(0u << 16u);
    ctx.gpr[18] = (47299u << 16u);
    goto L_08B35B9C;
L_08B35B9C:
    ctx.gpr[28] = (25003u << 16u);
    ctx.gpr[12] = (52429u << 16u);
    (void)(0u << 16u);
    ctx.gpr[12] = (52429u << 16u);
    rt.unsupported(0x08B35BACu, 0x41200000u, "unknown not lowered yet"); return;
L_08B35C30:
    rt.unsupported(0x08B35C30u, 0x40000000u, "unknown not lowered yet"); return;
L_08B35C4C:
    // nop
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> (0u & 31u)));
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> 0u));
    rt.unsupported(0x08B35C58u, 0x00000001u, "special? not lowered yet"); return;
L_08B35C88:
    rt.unsupported(0x08B35C88u, 0x0000000Eu, "special? not lowered yet"); return;
L_08B35CA0:
    jump_target = 0u;
    ctx.gpr[31] = (0x08B35CA8u);
    if (0u == 0u) (void)(0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B35CA8u) goto L_08B35CA8;
    return;
L_08B35CA8:
    if (0u != 0u) (void)(0u);
    rt.unsupported(0x08B35CACu, 0x0000000Cu, "syscall not lowered yet"); return;
L_08B35CF4:
    rt.unsupported(0x08B35CF4u, 0x40200000u, "unknown not lowered yet"); return;
L_08B35E28:
    // nop
    // nop
    goto L_08B35E30;
L_08B35E30:
    // nop
    // nop
    goto L_08B35E38;
L_08B35E38:
    // nop
    // nop
    goto L_08B35E40;
L_08B35E40:
    // nop
    // nop
    goto L_08B35E48;
L_08B35E48:
    rt.unsupported(0x08B35E48u, 0x00000001u, "special? not lowered yet"); return;
L_08B35E50:
    // nop
    rt.unsupported(0x08B35E54u, 0x40000000u, "unknown not lowered yet"); return;
L_08B35E58:
    ctx.gpr[12] = (52429u << 16u);
    ctx.gpr[12] = (52429u << 16u);
    goto L_08B35E60;
L_08B35E60:
    rt.unsupported(0x08B35E60u, 0x000003E8u, "special? not lowered yet"); return;
L_08B35E68:
    (void)(0u << 16u);
    (void)(ctx.hi);
    goto L_08B35E70;
L_08B35E70:
    rt.unsupported(0x08B35E70u, 0x00000001u, "special? not lowered yet"); return;
L_08B35E74:
    // nop
    goto L_08B35E78;
L_08B35E78:
    rt.unsupported(0x08B35E7Cu, 0x08B00E7Cu, "control flow in delay slot"); return;
L_08B35E80:
    rt.unsupported(0x08B35E80u, 0x40666666u, "unknown not lowered yet"); return;
L_08B35E88:
    // nop
    // nop
    goto L_08B35E90;
L_08B35E90:
    // nop
    // nop
    goto L_08B35E98;
L_08B35E98:
    // nop
    goto L_08B35E9C;
L_08B35E9C:
    rt.unsupported(0x08B35EA0u, 0x0890AE20u, "control flow in delay slot"); return;
L_08B35EA0:
    rt.unsupported(0x08B35EA4u, 0x08B14070u, "control flow in delay slot"); return;
L_08B35EA8:
    rt.unsupported(0x08B35EACu, 0x08B14080u, "control flow in delay slot"); return;
L_08B35EBC:
    rt.unsupported(0x08B35EC0u, 0x0890AAB4u, "control flow in delay slot"); return;
L_08B35F54:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    (void)(0u ^ 0u);
    rt.unsupported(0x08B35F70u, 0x43340000u, "unknown not lowered yet"); return;
L_08B35FC0:
    ctx.gpr[12] = (52429u << 16u);
    (void)(0u << 16u);
    ctx.gpr[12] = (52429u << 16u);
    (void)(0u << 16u);
    ctx.gpr[12] = (52429u << 16u);
    ctx.gpr[12] = (52429u << 16u);
    rt.unsupported(0x08B35FD8u, 0x42800000u, "unknown not lowered yet"); return;
L_08B35FEC:
    // nop
    // nop
    // nop
    // nop
    // nop
    ctx.gpr[21] = (ctx.gpr[2] & 12897u);
    ctx.gpr[19] = (43306u << 16u);
    // nop
    // nop
    rt.unsupported(0x08B36010u, 0xC083126Fu, "unknown not lowered yet"); return;
L_08B36020:
    (void)(ctx.gpr[1] + static_cast<std::uint32_t>(24868));
    rt.unsupported(0x08B36024u, 0x41346120u, "unknown not lowered yet"); return;
L_08B3602C:
    ctx.gpr[24] = (ctx.gpr[1] ^ 14392u);
    ctx.gpr[4] = (ctx.gpr[1] | 9272u);
    ctx.gpr[24] = (rt.memory().aot_load_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(-26622), ctx.gpr[24]));
    (void)(0u & 0u);
    ctx.gpr[16] = (ctx.gpr[2] >> 0u);
    rt.unsupported(0x08B36040u, 0x00210001u, "special? not lowered yet"); return;
L_08B360BC:
    rt.unsupported(0x08B360BCu, 0x445A4000u, "unsupported CFC1 control register"); return;
    rt.unsupported(0x08B360C0u, 0x44BE4000u, "cop1? not lowered yet"); return;
L_08B360C8:
    rt.unsupported(0x08B360C8u, 0x42640000u, "unknown not lowered yet"); return;
L_08B360CC:
    rt.unsupported(0x08B360CCu, 0x44ADB000u, "cop1? not lowered yet"); return;
L_08B360D8:
    // nop
    // nop
    rt.unsupported(0x08B360E0u, 0x00000001u, "special? not lowered yet"); return;
L_08B360E8:
    rt.unsupported(0x08B360E8u, 0x49445541u, "cop2/vfpu not lowered yet"); return;
L_08B360F4:
    rt.unsupported(0x08B360F4u, 0x44414548u, "unsupported CFC1 control register"); return;
    ctx.gpr[20] = (ctx.gpr[26] & 16686u);
    // nop
    // nop
    // nop
    // nop
    // nop
    rt.unsupported(0x08B36110u, 0x49445541u, "cop2/vfpu not lowered yet"); return;
L_08B3611C:
    rt.unsupported(0x08B3611Cu, 0x42554F44u, "unknown not lowered yet"); return;
L_08B36144:
    rt.unsupported(0x08B36144u, 0x48414A4Bu, "cop2/vfpu not lowered yet"); return;
L_08B36150:
    // nop
    // nop
    goto L_08B36158;
L_08B36158:
    // nop
    // nop
    goto L_08B36160;
L_08B36160:
    rt.unsupported(0x08B36160u, 0x49445541u, "cop2/vfpu not lowered yet"); return;
L_08B3616C:
    rt.unsupported(0x08B3616Cu, 0x45534952u, "cop1? not lowered yet"); return;
L_08B3618C:
    if (ctx.gpr[10] != ctx.gpr[13]) {
    ctx.gpr[3] = (ctx.gpr[26] < static_cast<std::uint32_t>(18771) ? 1u : 0u);
        (void)rt.invoke_chained_direct<&recomp_unit_0207_entry, 207u, 33u, 0x08B41ECCu>(ctx, &aot_mem); return;
    }
    goto L_08B36194;
L_08B36194:
    if (ctx.gpr[26] == ctx.gpr[16]) {
    ctx.gpr[20] = (ctx.gpr[26] & 16686u);
        (void)rt.invoke_chained_direct<&recomp_unit_0209_entry, 209u, 4u, 0x08B486C8u>(ctx, &aot_mem); return;
    }
    goto L_08B3619C;
L_08B3619C:
    // nop
    // nop
    // nop
    // nop
    // nop
    rt.unsupported(0x08B361B0u, 0x49445541u, "cop2/vfpu not lowered yet"); return;
L_08B361BC:
    rt.unsupported(0x08B361BCu, 0x444E554Du, "unsupported CFC1 control register"); return;
    if (ctx.gpr[2] != ctx.gpr[1]) {
    rt.unsupported(0x08B361C4u, 0x00000033u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0207_entry, 207u, 19u, 0x08B41B00u>(ctx, &aot_mem); return;
    }
    goto L_08B361C8;
L_08B361C8:
    // nop
    // nop
    // nop
    // nop
    rt.unsupported(0x08B361D8u, 0x49445541u, "cop2/vfpu not lowered yet"); return;
L_08B361E4:
    ctx.gpr[24] = (ctx.gpr[18] < static_cast<std::uint32_t>(21325) ? 1u : 0u);
    rt.unsupported(0x08B361E8u, 0x00335441u, "special? not lowered yet"); return;
L_08B3620C:
    rt.unsupported(0x08B36210u, 0x54412E48u, "control flow in delay slot"); return;
L_08B36214:
    rt.unsupported(0x08B36214u, 0x00000033u, "special? not lowered yet"); return;
L_08B36234:
    ctx.gpr[10] = (ctx.gpr[18] < static_cast<std::uint32_t>(17228) ? 1u : 0u);
    rt.unsupported(0x08B36238u, 0x00335441u, "special? not lowered yet"); return;
L_08B3625C:
    if (ctx.gpr[18] == ctx.gpr[6]) {
    ctx.gpr[20] = (ctx.gpr[26] & 16686u);
        (void)rt.invoke_chained_direct<&recomp_unit_0208_entry, 208u, 30u, 0x08B46F90u>(ctx, &aot_mem); return;
    }
    goto L_08B36264;
L_08B36264:
    // nop
    // nop
    // nop
    // nop
    // nop
    rt.unsupported(0x08B36278u, 0x49445541u, "cop2/vfpu not lowered yet"); return;
L_08B36284:
    if (static_cast<std::int32_t>(ctx.gpr[10]) <= 0) {
    ctx.gpr[20] = (ctx.gpr[26] & 16686u);
        (void)rt.invoke_chained_direct<&recomp_unit_0209_entry, 209u, 5u, 0x08B48794u>(ctx, &aot_mem); return;
    }
    goto L_08B3628C;
L_08B3628C:
    // nop
    goto L_08B36290;
L_08B36290:
    // nop
    // nop
    // nop
    // nop
    rt.unsupported(0x08B362A0u, 0x49445541u, "cop2/vfpu not lowered yet"); return;
L_08B362AC:
    rt.unsupported(0x08B362ACu, 0x45544157u, "cop1? not lowered yet"); return;
L_08B362B8:
    // nop
    // nop
    // nop
    // nop
    rt.unsupported(0x08B362C8u, 0x49445541u, "cop2/vfpu not lowered yet"); return;
L_08B362D4:
    rt.unsupported(0x08B362D4u, 0x4D574153u, "unknown not lowered yet"); return;
L_08B362E0:
    rt.unsupported(0x08B362E4u, 0x504F4F4Cu, "control flow in delay slot"); return;
L_08B362E8:
    ctx.gpr[20] = (ctx.gpr[26] & 16686u);
    // nop
    rt.unsupported(0x08B362F0u, 0x49445541u, "cop2/vfpu not lowered yet"); return;
L_08B362FC:
    if (static_cast<std::int32_t>(ctx.gpr[10]) <= 0) {
    ctx.gpr[20] = (ctx.gpr[26] & 16686u);
        (void)rt.invoke_chained_direct<&recomp_unit_0209_entry, 209u, 8u, 0x08B4880Cu>(ctx, &aot_mem); return;
    }
    goto L_08B36304;
L_08B36304:
    // nop
    // nop
    // nop
    // nop
    // nop
    rt.unsupported(0x08B36318u, 0x49445541u, "cop2/vfpu not lowered yet"); return;
L_08B36324:
    rt.unsupported(0x08B36324u, 0x45544157u, "cop1? not lowered yet"); return;
L_08B36330:
    // nop
    // nop
    // nop
    // nop
    rt.unsupported(0x08B36340u, 0x49445541u, "cop2/vfpu not lowered yet"); return;
L_08B3634C:
    rt.unsupported(0x08B3634Cu, 0x45544157u, "cop1? not lowered yet"); return;
L_08B36358:
    // nop
    // nop
    // nop
    // nop
    rt.unsupported(0x08B36368u, 0x49445541u, "cop2/vfpu not lowered yet"); return;
L_08B36374:
    if (static_cast<std::int32_t>(ctx.gpr[10]) <= 0) {
    ctx.gpr[20] = (ctx.gpr[26] & 16686u);
        (void)rt.invoke_chained_direct<&recomp_unit_0209_entry, 209u, 11u, 0x08B48884u>(ctx, &aot_mem); return;
    }
    goto L_08B3637C;
L_08B3637C:
    // nop
    // nop
    // nop
    // nop
    // nop
    rt.unsupported(0x08B36390u, 0x49445541u, "cop2/vfpu not lowered yet"); return;
L_08B3639C:
    if (static_cast<std::int32_t>(ctx.gpr[10]) <= 0) {
    ctx.gpr[20] = (ctx.gpr[26] & 16686u);
        (void)rt.invoke_chained_direct<&recomp_unit_0209_entry, 209u, 12u, 0x08B488ACu>(ctx, &aot_mem); return;
    }
    goto L_08B363A4;
L_08B363A4:
    // nop
    // nop
    // nop
    // nop
    // nop
    rt.unsupported(0x08B363B8u, 0x49445541u, "cop2/vfpu not lowered yet"); return;
L_08B363C4:
    if (static_cast<std::int32_t>(ctx.gpr[10]) <= 0) {
    ctx.gpr[20] = (ctx.gpr[26] & 16686u);
        (void)rt.invoke_chained_direct<&recomp_unit_0209_entry, 209u, 14u, 0x08B488D4u>(ctx, &aot_mem); return;
    }
    goto L_08B363CC;
L_08B363CC:
    // nop
    goto L_08B363D0;
L_08B363D0:
    // nop
    // nop
    // nop
    // nop
    rt.unsupported(0x08B363E0u, 0x49445541u, "cop2/vfpu not lowered yet"); return;
L_08B363EC:
    if (static_cast<std::int32_t>(ctx.gpr[10]) <= 0) {
    ctx.gpr[20] = (ctx.gpr[26] & 16686u);
        (void)rt.invoke_chained_direct<&recomp_unit_0209_entry, 209u, 15u, 0x08B488FCu>(ctx, &aot_mem); return;
    }
    goto L_08B363F4;
L_08B363F4:
    // nop
    // nop
    // nop
    goto L_08B36400;
L_08B36400:
    // nop
    // nop
    goto L_08B36408;
L_08B36408:
    rt.unsupported(0x08B36408u, 0x49445541u, "cop2/vfpu not lowered yet"); return;
L_08B36410:
    ctx.gpr[3] = (ctx.gpr[26] < static_cast<std::uint32_t>(18771) ? 1u : 0u);
    goto L_08B36414;
L_08B36414:
    if (static_cast<std::int32_t>(ctx.gpr[10]) <= 0) {
    ctx.gpr[20] = (ctx.gpr[26] & 16686u);
        (void)rt.invoke_chained_direct<&recomp_unit_0209_entry, 209u, 16u, 0x08B48924u>(ctx, &aot_mem); return;
    }
    goto L_08B3641C;
L_08B36418:
    ctx.gpr[20] = (ctx.gpr[26] & 16686u);
    goto L_08B3641C;
L_08B3641C:
    // nop
    // nop
    // nop
    // nop
    // nop
    rt.unsupported(0x08B36430u, 0x49445541u, "cop2/vfpu not lowered yet"); return;
L_08B3643C:
    if (static_cast<std::int32_t>(ctx.gpr[10]) <= 0) {
    ctx.gpr[20] = (ctx.gpr[26] & 16686u);
        (void)rt.invoke_chained_direct<&recomp_unit_0209_entry, 209u, 17u, 0x08B4894Cu>(ctx, &aot_mem); return;
    }
    goto L_08B36444;
L_08B36444:
    // nop
    // nop
    // nop
    // nop
    // nop
    rt.unsupported(0x08B36458u, 0x49445541u, "cop2/vfpu not lowered yet"); return;
L_08B36464:
    if (static_cast<std::int32_t>(ctx.gpr[10]) <= 0) {
    ctx.gpr[20] = (ctx.gpr[26] & 16686u);
        (void)rt.invoke_chained_direct<&recomp_unit_0209_entry, 209u, 18u, 0x08B48974u>(ctx, &aot_mem); return;
    }
    goto L_08B3646C;
L_08B3646C:
    // nop
    // nop
    // nop
    // nop
    // nop
    rt.unsupported(0x08B36480u, 0x49445541u, "cop2/vfpu not lowered yet"); return;
L_08B3648C:
    rt.unsupported(0x08B3648Cu, 0x494C4F50u, "cop2/vfpu not lowered yet"); return;
L_08B36494:
    rt.unsupported(0x08B36494u, 0x00003354u, "special? not lowered yet"); return;
L_08B3649C:
    // nop
    // nop
    goto L_08B364A4;
L_08B364A4:
    // nop
    rt.unsupported(0x08B364A8u, 0x49445541u, "cop2/vfpu not lowered yet"); return;
L_08B364AC:
    if (ctx.gpr[10] != ctx.gpr[13]) {
    ctx.gpr[3] = (ctx.gpr[26] < static_cast<std::uint32_t>(18771) ? 1u : 0u);
        (void)rt.invoke_chained_direct<&recomp_unit_0207_entry, 207u, 56u, 0x08B421ECu>(ctx, &aot_mem); return;
    }
    goto L_08B364B4;
L_08B364B4:
    rt.unsupported(0x08B364B4u, 0x49584154u, "cop2/vfpu not lowered yet"); return;
L_08B364DC:
    if (ctx.gpr[26] == ctx.gpr[23]) {
    rt.unsupported(0x08B364E0u, 0x412E415Fu, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0208_entry, 208u, 42u, 0x08B47A18u>(ctx, &aot_mem); return;
    }
    goto L_08B364E4;
L_08B364E4:
    rt.unsupported(0x08B364E4u, 0x00003354u, "special? not lowered yet"); return;
L_08B36504:
    if (ctx.gpr[26] == ctx.gpr[23]) {
    rt.unsupported(0x08B36508u, 0x412E425Fu, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0208_entry, 208u, 43u, 0x08B47A40u>(ctx, &aot_mem); return;
    }
    goto L_08B3650C;
L_08B3650C:
    rt.unsupported(0x08B3650Cu, 0x00003354u, "special? not lowered yet"); return;
L_08B3652C:
    if (ctx.gpr[26] == ctx.gpr[23]) {
    rt.unsupported(0x08B36530u, 0x412E435Fu, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0208_entry, 208u, 44u, 0x08B47A68u>(ctx, &aot_mem); return;
    }
    goto L_08B36534;
L_08B36534:
    rt.unsupported(0x08B36534u, 0x00003354u, "special? not lowered yet"); return;
L_08B36554:
    if (ctx.gpr[26] == ctx.gpr[23]) {
    rt.unsupported(0x08B36558u, 0x412E445Fu, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0208_entry, 208u, 45u, 0x08B47A90u>(ctx, &aot_mem); return;
    }
    goto L_08B3655C;
L_08B3655C:
    rt.unsupported(0x08B3655Cu, 0x00003354u, "special? not lowered yet"); return;
L_08B3657C:
    if (ctx.gpr[26] == ctx.gpr[23]) {
    rt.unsupported(0x08B36580u, 0x412E455Fu, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0208_entry, 208u, 46u, 0x08B47AB8u>(ctx, &aot_mem); return;
    }
    goto L_08B36584;
L_08B36584:
    rt.unsupported(0x08B36584u, 0x00003354u, "special? not lowered yet"); return;
L_08B365A4:
    if (ctx.gpr[26] == ctx.gpr[23]) {
    rt.unsupported(0x08B365A8u, 0x412E465Fu, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0208_entry, 208u, 47u, 0x08B47AE0u>(ctx, &aot_mem); return;
    }
    goto L_08B365AC;
L_08B365AC:
    rt.unsupported(0x08B365ACu, 0x00003354u, "special? not lowered yet"); return;
L_08B365CC:
    if (ctx.gpr[26] == ctx.gpr[23]) {
    rt.unsupported(0x08B365D0u, 0x412E475Fu, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0208_entry, 208u, 48u, 0x08B47B08u>(ctx, &aot_mem); return;
    }
    goto L_08B365D4;
L_08B365D4:
    rt.unsupported(0x08B365D4u, 0x00003354u, "special? not lowered yet"); return;
L_08B365E8:
    rt.unsupported(0x08B365E8u, 0x49445541u, "cop2/vfpu not lowered yet"); return;
L_08B365F4:
    if (ctx.gpr[26] == ctx.gpr[23]) {
    rt.unsupported(0x08B365F8u, 0x412E485Fu, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0208_entry, 208u, 49u, 0x08B47B30u>(ctx, &aot_mem); return;
    }
    goto L_08B365FC;
L_08B365FC:
    rt.unsupported(0x08B365FCu, 0x00003354u, "special? not lowered yet"); return;
L_08B3661C:
    if (ctx.gpr[26] == ctx.gpr[23]) {
    rt.unsupported(0x08B36620u, 0x412E495Fu, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0208_entry, 208u, 50u, 0x08B47B58u>(ctx, &aot_mem); return;
    }
    goto L_08B36624;
L_08B36624:
    rt.unsupported(0x08B36624u, 0x00003354u, "special? not lowered yet"); return;
L_08B36644:
    if (ctx.gpr[26] == ctx.gpr[23]) {
    rt.unsupported(0x08B36648u, 0x412E4A5Fu, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0208_entry, 208u, 51u, 0x08B47B80u>(ctx, &aot_mem); return;
    }
    goto L_08B3664C;
L_08B3664C:
    rt.unsupported(0x08B3664Cu, 0x00003354u, "special? not lowered yet"); return;
L_08B3666C:
    if (ctx.gpr[26] == ctx.gpr[23]) {
    rt.unsupported(0x08B36670u, 0x412E4B5Fu, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0208_entry, 208u, 52u, 0x08B47BA8u>(ctx, &aot_mem); return;
    }
    goto L_08B36674;
L_08B36674:
    rt.unsupported(0x08B36674u, 0x00003354u, "special? not lowered yet"); return;
L_08B36694:
    if (ctx.gpr[26] == ctx.gpr[23]) {
    rt.unsupported(0x08B36698u, 0x412E4C5Fu, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0208_entry, 208u, 53u, 0x08B47BD0u>(ctx, &aot_mem); return;
    }
    goto L_08B3669C;
L_08B3669C:
    rt.unsupported(0x08B3669Cu, 0x00003354u, "special? not lowered yet"); return;
L_08B366BC:
    if (ctx.gpr[26] == ctx.gpr[23]) {
    rt.unsupported(0x08B366C0u, 0x412E4D5Fu, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0208_entry, 208u, 54u, 0x08B47BF8u>(ctx, &aot_mem); return;
    }
    goto L_08B366C4;
L_08B366C4:
    rt.unsupported(0x08B366C4u, 0x00003354u, "special? not lowered yet"); return;
L_08B366E4:
    if (ctx.gpr[26] == ctx.gpr[23]) {
    rt.unsupported(0x08B366E8u, 0x412E4E5Fu, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0208_entry, 208u, 55u, 0x08B47C20u>(ctx, &aot_mem); return;
    }
    goto L_08B366EC;
L_08B366EC:
    rt.unsupported(0x08B366ECu, 0x00003354u, "special? not lowered yet"); return;
L_08B3670C:
    rt.unsupported(0x08B3670Cu, 0x422F454Eu, "unknown not lowered yet"); return;
L_08B36718:
    // nop
    // nop
    // nop
    // nop
    rt.unsupported(0x08B36728u, 0x49445541u, "cop2/vfpu not lowered yet"); return;
L_08B36734:
    rt.unsupported(0x08B36734u, 0x422F454Eu, "unknown not lowered yet"); return;
L_08B36740:
    rt.unsupported(0x08B36740u, 0x00003354u, "special? not lowered yet"); return;
L_08B3675C:
    rt.unsupported(0x08B3675Cu, 0x432F454Eu, "unknown not lowered yet"); return;
L_08B36784:
    rt.unsupported(0x08B36784u, 0x432F454Eu, "unknown not lowered yet"); return;
L_08B367AC:
    rt.unsupported(0x08B367ACu, 0x432F454Eu, "unknown not lowered yet"); return;
L_08B367D4:
    rt.unsupported(0x08B367D4u, 0x432F454Eu, "unknown not lowered yet"); return;
L_08B367E0:
    rt.unsupported(0x08B367E0u, 0x00003354u, "special? not lowered yet"); return;
L_08B367FC:
    rt.unsupported(0x08B367FCu, 0x432F454Eu, "unknown not lowered yet"); return;
L_08B3681C:
    if (ctx.gpr[10] != ctx.gpr[3]) {
    rt.unsupported(0x08B36820u, 0x45435354u, "cop1? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0207_entry, 207u, 82u, 0x08B4255Cu>(ctx, &aot_mem); return;
    }
    goto L_08B36824;
L_08B36824:
    rt.unsupported(0x08B36824u, 0x442F454Eu, "cop1? not lowered yet"); return;
L_08B36834:
    // nop
    // nop
    // nop
    rt.unsupported(0x08B36840u, 0x49445541u, "cop2/vfpu not lowered yet"); return;
L_08B3684C:
    rt.unsupported(0x08B3684Cu, 0x442F454Eu, "cop1? not lowered yet"); return;
L_08B36850:
    if (ctx.gpr[18] == ctx.gpr[16]) {
    rt.unsupported(0x08B36854u, 0x412E424Fu, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0209_entry, 209u, 95u, 0x08B4A190u>(ctx, &aot_mem); return;
    }
    goto L_08B36858;
L_08B36858:
    rt.unsupported(0x08B36858u, 0x00003354u, "special? not lowered yet"); return;
L_08B36874:
    rt.unsupported(0x08B36874u, 0x442F454Eu, "cop1? not lowered yet"); return;
L_08B3689C:
    rt.unsupported(0x08B3689Cu, 0x452F454Eu, "cop1? not lowered yet"); return;
L_08B368A8:
    rt.unsupported(0x08B368A8u, 0x00003354u, "special? not lowered yet"); return;
L_08B368C4:
    rt.unsupported(0x08B368C4u, 0x462F454Eu, "cop1? not lowered yet"); return;
L_08B368EC:
    rt.unsupported(0x08B368ECu, 0x462F454Eu, "cop1? not lowered yet"); return;
L_08B36914:
    rt.unsupported(0x08B36914u, 0x482F454Eu, "cop2/vfpu not lowered yet"); return;
L_08B36920:
    rt.unsupported(0x08B36920u, 0x00003354u, "special? not lowered yet"); return;
L_08B3693C:
    rt.unsupported(0x08B3693Cu, 0x482F454Eu, "cop2/vfpu not lowered yet"); return;
L_08B36964:
    rt.unsupported(0x08B36964u, 0x4B2F454Eu, "cop2/vfpu not lowered yet"); return;
L_08B3698C:
    rt.unsupported(0x08B3698Cu, 0x4C2F454Eu, "unknown not lowered yet"); return;
L_08B369B4:
    rt.unsupported(0x08B369B4u, 0x4D2F454Eu, "unknown not lowered yet"); return;
L_08B369BC:
    if (ctx.gpr[2] != ctx.gpr[1]) {
    rt.unsupported(0x08B369C0u, 0x00000033u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0207_entry, 207u, 63u, 0x08B422D4u>(ctx, &aot_mem); return;
    }
    goto L_08B369C4;
L_08B369C0:
    rt.unsupported(0x08B369C0u, 0x00000033u, "special? not lowered yet"); return;
L_08B369C4:
    // nop
    // nop
    goto L_08B369CC;
L_08B369CC:
    // nop
    rt.unsupported(0x08B369D0u, 0x49445541u, "cop2/vfpu not lowered yet"); return;
L_08B369D4:
    if (ctx.gpr[10] != ctx.gpr[3]) {
    rt.unsupported(0x08B369D8u, 0x45435354u, "cop1? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0207_entry, 207u, 93u, 0x08B42714u>(ctx, &aot_mem); return;
    }
    goto L_08B369DC;
L_08B369DC:
    rt.unsupported(0x08B369DCu, 0x4F2F454Eu, "unknown not lowered yet"); return;
L_08B369E4:
    rt.unsupported(0x08B369E4u, 0x412E534Fu, "unknown not lowered yet"); return;
L_08B369EC:
    // nop
    // nop
    goto L_08B369F4;
L_08B369F4:
    // nop
    rt.unsupported(0x08B369F8u, 0x49445541u, "cop2/vfpu not lowered yet"); return;
L_08B369FC:
    if (ctx.gpr[10] != ctx.gpr[3]) {
    rt.unsupported(0x08B36A00u, 0x45435354u, "cop1? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0207_entry, 207u, 94u, 0x08B4273Cu>(ctx, &aot_mem); return;
    }
    goto L_08B36A04;
L_08B36A04:
    rt.unsupported(0x08B36A08u, 0x554A4655u, "control flow in delay slot"); return;
L_08B36A0C:
    rt.unsupported(0x08B36A0Cu, 0x412E5453u, "unknown not lowered yet"); return;
L_08B36A14:
    // nop
    // nop
    goto L_08B36A1C;
L_08B36A1C:
    // nop
    rt.unsupported(0x08B36A20u, 0x49445541u, "cop2/vfpu not lowered yet"); return;
L_08B36A24:
    if (ctx.gpr[10] != ctx.gpr[3]) {
    rt.unsupported(0x08B36A28u, 0x45435354u, "cop1? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0207_entry, 207u, 95u, 0x08B42764u>(ctx, &aot_mem); return;
    }
    goto L_08B36A2C;
L_08B36A2C:
    if (ctx.gpr[25] == ctx.gpr[15]) {
    rt.unsupported(0x08B36A30u, 0x4E4F5941u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0208_entry, 208u, 59u, 0x08B47F68u>(ctx, &aot_mem); return;
    }
    goto L_08B36A34;
L_08B36A34:
    rt.unsupported(0x08B36A34u, 0x412E5241u, "unknown not lowered yet"); return;
L_08B36A3C:
    // nop
    // nop
    goto L_08B36A44;
L_08B36A44:
    // nop
    rt.unsupported(0x08B36A48u, 0x49445541u, "cop2/vfpu not lowered yet"); return;
L_08B36A4C:
    if (ctx.gpr[10] != ctx.gpr[3]) {
    rt.unsupported(0x08B36A50u, 0x45435354u, "cop1? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0207_entry, 207u, 96u, 0x08B4278Cu>(ctx, &aot_mem); return;
    }
    goto L_08B36A54;
L_08B36A54:
    if (ctx.gpr[25] == ctx.gpr[15]) {
    rt.unsupported(0x08B36A58u, 0x4C494349u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0208_entry, 208u, 61u, 0x08B47F90u>(ctx, &aot_mem); return;
    }
    goto L_08B36A5C;
L_08B36A5C:
    rt.unsupported(0x08B36A5Cu, 0x412E4E41u, "unknown not lowered yet"); return;
L_08B36A64:
    // nop
    // nop
    goto L_08B36A6C;
L_08B36A6C:
    // nop
    rt.unsupported(0x08B36A70u, 0x49445541u, "cop2/vfpu not lowered yet"); return;
L_08B36A74:
    if (ctx.gpr[10] != ctx.gpr[3]) {
    rt.unsupported(0x08B36A78u, 0x45435354u, "cop1? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0207_entry, 207u, 98u, 0x08B427B4u>(ctx, &aot_mem); return;
    }
    goto L_08B36A7C;
L_08B36A7C:
    if (ctx.gpr[1] != ctx.gpr[15]) {
    rt.unsupported(0x08B36A80u, 0x464F4548u, "cop1? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0208_entry, 208u, 62u, 0x08B47FB8u>(ctx, &aot_mem); return;
    }
    goto L_08B36A84;
L_08B36A84:
    rt.unsupported(0x08B36A84u, 0x412E5245u, "unknown not lowered yet"); return;
L_08B36A8C:
    // nop
    // nop
    goto L_08B36A94;
L_08B36A94:
    // nop
    rt.unsupported(0x08B36A98u, 0x49445541u, "cop2/vfpu not lowered yet"); return;
L_08B36A9C:
    if (ctx.gpr[10] != ctx.gpr[3]) {
    rt.unsupported(0x08B36AA0u, 0x45435354u, "cop1? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0207_entry, 207u, 99u, 0x08B427DCu>(ctx, &aot_mem); return;
    }
    goto L_08B36AA4;
L_08B36AA4:
    rt.unsupported(0x08B36AA4u, 0x492F454Eu, "cop2/vfpu not lowered yet"); return;
L_08B36AAC:
    ctx.gpr[20] = (ctx.gpr[26] & 16686u);
    // nop
    goto L_08B36AB4;
L_08B36AB4:
    // nop
    // nop
    goto L_08B36ABC;
L_08B36ABC:
    // nop
    rt.unsupported(0x08B36AC0u, 0x49445541u, "cop2/vfpu not lowered yet"); return;
L_08B36AC4:
    if (ctx.gpr[10] != ctx.gpr[13]) {
    ctx.gpr[3] = (ctx.gpr[26] < static_cast<std::uint32_t>(18771) ? 1u : 0u);
        (void)rt.invoke_chained_direct<&recomp_unit_0207_entry, 207u, 100u, 0x08B42804u>(ctx, &aot_mem); return;
    }
    goto L_08B36ACC;
L_08B36ACC:
    rt.unsupported(0x08B36ACCu, 0x414E4946u, "unknown not lowered yet"); return;
L_08B36AD4:
    rt.unsupported(0x08B36AD4u, 0x00003354u, "special? not lowered yet"); return;
L_08B36ADC:
    // nop
    // nop
    goto L_08B36AE4;
L_08B36AE4:
    // nop
    rt.unsupported(0x08B36AE8u, 0x49445541u, "cop2/vfpu not lowered yet"); return;
L_08B36AEC:
    if (ctx.gpr[10] != ctx.gpr[13]) {
    ctx.gpr[3] = (ctx.gpr[26] < static_cast<std::uint32_t>(18771) ? 1u : 0u);
        (void)rt.invoke_chained_direct<&recomp_unit_0207_entry, 207u, 101u, 0x08B4282Cu>(ctx, &aot_mem); return;
    }
    goto L_08B36AF4;
L_08B36AF4:
    rt.unsupported(0x08B36AF4u, 0x4353494Du, "unknown not lowered yet"); return;
L_08B36AFC:
    rt.unsupported(0x08B36AFCu, 0x00335441u, "special? not lowered yet"); return;
L_08B36B04:
    // nop
    // nop
    goto L_08B36B0C;
L_08B36B0C:
    // nop
    rt.unsupported(0x08B36B10u, 0x49445541u, "cop2/vfpu not lowered yet"); return;
L_08B36B14:
    if (ctx.gpr[10] != ctx.gpr[13]) {
    ctx.gpr[3] = (ctx.gpr[26] < static_cast<std::uint32_t>(18771) ? 1u : 0u);
        (void)rt.invoke_chained_direct<&recomp_unit_0207_entry, 207u, 102u, 0x08B42854u>(ctx, &aot_mem); return;
    }
    goto L_08B36B1C;
L_08B36B1C:
    rt.unsupported(0x08B36B1Cu, 0x4353494Du, "unknown not lowered yet"); return;
L_08B36B24:
    rt.unsupported(0x08B36B24u, 0x00335441u, "special? not lowered yet"); return;
L_08B36B2C:
    // nop
    // nop
    goto L_08B36B34;
L_08B36B34:
    // nop
    rt.unsupported(0x08B36B38u, 0x40666666u, "unknown not lowered yet"); return;
L_08B36B3C:
    rt.unsupported(0x08B36B3Cu, 0x42480000u, "unknown not lowered yet"); return;
L_08B36B44:
    // nop
    // nop
    goto L_08B36B4C;
L_08B36B4C:
    // nop
    // nop
    goto L_08B36B54;
L_08B36B54:
    ctx.gpr[3] = (ctx.gpr[29] ^ 55050u);
    // nop
    goto L_08B36B5C;
L_08B36B5C:
    // nop
    rt.unsupported(0x08B36B60u, 0x40666666u, "unknown not lowered yet"); return;
L_08B36B64:
    rt.unsupported(0x08B36B64u, 0x42480000u, "unknown not lowered yet"); return;
L_08B36B6C:
    // nop
    // nop
    goto L_08B36B74;
L_08B36B74:
    // nop
    // nop
    goto L_08B36B7C;
L_08B36B7C:
    ctx.gpr[3] = (ctx.gpr[29] ^ 55050u);
    // nop
    goto L_08B36B84;
L_08B36B84:
    // nop
    rt.unsupported(0x08B36B88u, 0x40666666u, "unknown not lowered yet"); return;
L_08B36B8C:
    rt.unsupported(0x08B36B8Cu, 0x42480000u, "unknown not lowered yet"); return;
L_08B36B94:
    // nop
    // nop
    goto L_08B36B9C;
L_08B36B9C:
    // nop
    // nop
    goto L_08B36BA4;
L_08B36BA4:
    (void)(0u << 16u);
    ctx.gpr[18] = (18725u << 16u);
    goto L_08B36BAC;
L_08B36BAC:
    // nop
    // nop
    goto L_08B36BB4;
L_08B36BB4:
    // nop
    // nop
    goto L_08B36BBC;
L_08B36BBC:
    rt.unsupported(0x08B36BBCu, 0x00000001u, "special? not lowered yet"); return;
L_08B36BC4:
    // nop
    // nop
    goto L_08B36BCC;
L_08B36BCC:
    // nop
    goto L_08B36BD0;
L_08B36BD0:
    // nop
    goto L_08B36BD4;
L_08B36BD4:
    rt.unsupported(0x08B36BD8u, 0x089D98F0u, "control flow in delay slot"); return;
L_08B36BFC:
    // nop
    rt.unsupported(0x08B36C04u, 0x0891CEB0u, "control flow in delay slot"); return;
L_08B36C3C:
    // nop
    // nop
    goto L_08B36C44;
L_08B36C44:
    // nop
    // nop
    goto L_08B36C4C;
L_08B36C4C:
    ctx.gpr[3] = (ctx.gpr[29] ^ 55050u);
    // nop
    // nop
    rt.unsupported(0x08B36C58u, 0x40666666u, "unknown not lowered yet"); return;
L_08B36C88:
    // nop
    // nop
    // nop
    // nop
    goto L_08B36C98;
L_08B36C98:
    // nop
    ctx.gpr[3] = (ctx.gpr[29] ^ 55050u);
    // nop
    // nop
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // nop
    // nop
    // nop
    rt.unsupported(0x08B36CC0u, 0x40666666u, "unknown not lowered yet"); return;
L_08B36CFC:
    ctx.eat_vfpu_prefixes(); // VFPU sync/no-op consumes prefixes
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    rt.unsupported(0x08B36D40u, 0x40666666u, "unknown not lowered yet"); return;
L_08B36D9C:
    (void)(0u << 16u);
    // nop
    // nop
    goto L_08B36DA8;
L_08B36DA8:
    // nop
    (void)(0u << 16u);
    // nop
    goto L_08B36DB4;
L_08B36DB4:
    // nop
    // nop
    (void)(0u << 16u);
    // nop
    // nop
    rt.unsupported(0x08B36DC8u, 0x40666666u, "unknown not lowered yet"); return;
L_08B36DEC:
    // nop
    rt.unsupported(0x08B36DF4u, 0x08930208u, "control flow in delay slot"); return;
L_08B36DF8:
    rt.unsupported(0x08B36DFCu, 0x08B155A4u, "control flow in delay slot"); return;
L_08B36E38:
    rt.unsupported(0x08B36E3Cu, 0x08B1563Cu, "control flow in delay slot"); return;
L_08B36F80:
    rt.unsupported(0x08B36F84u, 0x08B15AB4u, "control flow in delay slot"); return;
L_08B37098:
    // nop
    ctx.pc = 0x02C57750u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B3709C:
    // nop
    goto L_08B370A0;
L_08B370A0:
    { const bool signed_ok = ctx.execute_signed_sub(0u, 0u, 0u);
      if (!signed_ok) { rt.arithmetic_overflow(0x08B370A0u, 0x00000162u); return; } }
    rt.unsupported(0x08B370A4u, 0x00000001u, "special? not lowered yet"); return;
L_08B370A8:
    { const bool signed_ok = ctx.execute_signed_sub(0u, 0u, 0u);
      if (!signed_ok) { rt.arithmetic_overflow(0x08B370A8u, 0x00000162u); return; } }
    (void)(0u >> 0u);
    goto L_08B370B0;
L_08B370B0:
    { const bool signed_ok = ctx.execute_signed_sub(0u, 0u, 0u);
      if (!signed_ok) { rt.arithmetic_overflow(0x08B370B0u, 0x00000162u); return; } }
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> 0u));
    (void)(0u >> 0u);
    (void)(0u << (0u & 31u));
    (void)(0u << 1u);
    rt.unsupported(0x08B370C4u, 0x00000005u, "special? not lowered yet"); return;
L_08B37254:
    rt.unsupported(0x08B37254u, 0x00000037u, "special? not lowered yet"); return;
L_08B372C0:
    rt.unsupported(0x08B372C0u, 0x00000014u, "special? not lowered yet"); return;
L_08B375E4:
    (void)(0u | 0u);
    (void)(ctx.hi);
    (void)(0u ^ 0u);
    (void)(ctx.lo);
    goto L_08B375F4;
L_08B375F4:
    (void)(~(0u | 0u));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(0u)) * static_cast<std::int64_t>(static_cast<std::int32_t>(0u)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    rt.unsupported(0x08B375FCu, 0x000000E8u, "special? not lowered yet"); return;
L_08B37634:
    rt.unsupported(0x08B37634u, 0x000000EFu, "special? not lowered yet"); return;
L_08B3763C:
    rt.unsupported(0x08B3763Cu, 0x000000F0u, "special? not lowered yet"); return;
L_08B37644:
    rt.unsupported(0x08B37644u, 0x000000F1u, "special? not lowered yet"); return;
L_08B37654:
    rt.unsupported(0x08B37654u, 0x000000F3u, "special? not lowered yet"); return;
L_08B3765C:
    rt.unsupported(0x08B3765Cu, 0x000000F4u, "special? not lowered yet"); return;
L_08B3766C:
    rt.unsupported(0x08B3766Cu, 0x000000F6u, "special? not lowered yet"); return;
L_08B3767C:
    rt.unsupported(0x08B3767Cu, 0x000000F8u, "special? not lowered yet"); return;
L_08B37684:
    rt.unsupported(0x08B37684u, 0x000000F9u, "special? not lowered yet"); return;
L_08B376A4:
    rt.unsupported(0x08B376A4u, 0x000000FDu, "special? not lowered yet"); return;
L_08B376BC:
    (void)(0u << 4u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(0u)) * static_cast<std::int64_t>(static_cast<std::int32_t>(0u)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    goto L_08B376C4;
L_08B376C4:
    rt.unsupported(0x08B376C4u, 0x00000101u, "special? not lowered yet"); return;
L_08B376D4:
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> 4u));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(0u)) * static_cast<std::int64_t>(static_cast<std::int32_t>(0u)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    (void)(0u << (0u & 31u));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(0u)) * static_cast<std::int64_t>(static_cast<std::int32_t>(0u)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    rt.unsupported(0x08B376E4u, 0x00000105u, "special? not lowered yet"); return;
L_08B376EC:
    (void)(0u >> (0u & 31u));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(0u)) * static_cast<std::int64_t>(static_cast<std::int32_t>(0u)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> (0u & 31u)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(0u)) * static_cast<std::int64_t>(static_cast<std::int32_t>(0u)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    goto L_08B376FC;
L_08B376FC:
    jump_target = 0u;
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(0u)) * static_cast<std::int64_t>(static_cast<std::int32_t>(0u)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B3770C:
    if (0u == 0u) (void)(0u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(0u)) * static_cast<std::int64_t>(static_cast<std::int32_t>(0u)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    goto L_08B37714;
L_08B37714:
    if (0u != 0u) (void)(0u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(0u)) * static_cast<std::int64_t>(static_cast<std::int32_t>(0u)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    goto L_08B3771C;
L_08B3771C:
    rt.unsupported(0x08B3771Cu, 0x0000010Cu, "syscall not lowered yet"); return;
L_08B3772C:
    rt.unsupported(0x08B3772Cu, 0x0000010Eu, "special? not lowered yet"); return;
L_08B37744:
    ctx.hi = 0u;
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(0u)) * static_cast<std::int64_t>(static_cast<std::int32_t>(0u)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    goto L_08B3774C;
L_08B3774C:
    (void)(ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(0u)) * static_cast<std::int64_t>(static_cast<std::int32_t>(0u)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.lo = 0u;
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(0u)) * static_cast<std::int64_t>(static_cast<std::int32_t>(0u)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    rt.unsupported(0x08B3775Cu, 0x00000114u, "special? not lowered yet"); return;
L_08B37764:
    rt.unsupported(0x08B37764u, 0x00000115u, "special? not lowered yet"); return;
L_08B3776C:
    (void)(static_cast<std::uint32_t>(std::countl_zero(0u)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(0u)) * static_cast<std::int64_t>(static_cast<std::int32_t>(0u)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    goto L_08B37774;
L_08B37774:
    rt.unsupported(0x08B37778u, 0x08B15DE8u, "control flow in delay slot"); return;
L_08B37788:
    rt.unsupported(0x08B37788u, 0x000000B2u, "special? not lowered yet"); return;
L_08B377B0:
    rt.unsupported(0x08B377B4u, 0x08B15E24u, "control flow in delay slot"); return;
L_08B377D0:
    (void)(static_cast<std::int32_t>(0u) < static_cast<std::int32_t>(0u) ? 1u : 0u);
    goto L_08B377D4;
L_08B377D4:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(0u)) * static_cast<std::int64_t>(static_cast<std::int32_t>(0u)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    (void)(0u < 0u ? 1u : 0u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(0u)) * static_cast<std::int64_t>(static_cast<std::int32_t>(0u)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    (void)(static_cast<std::int32_t>(0u) > static_cast<std::int32_t>(0u) ? 0u : 0u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(0u)) * static_cast<std::int64_t>(static_cast<std::int32_t>(0u)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    (void)(static_cast<std::int32_t>(0u) < static_cast<std::int32_t>(0u) ? 0u : 0u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(0u)) * static_cast<std::int64_t>(static_cast<std::int32_t>(0u)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    rt.unsupported(0x08B377F0u, 0x000000AEu, "special? not lowered yet"); return;
L_08B37810:
    rt.unsupported(0x08B37814u, 0x08B15E84u, "control flow in delay slot"); return;
L_08B37858:
    rt.unsupported(0x08B3785Cu, 0x08B15F90u, "control flow in delay slot"); return;
L_08B378A0:
    rt.unsupported(0x08B378A4u, 0x08B1609Cu, "control flow in delay slot"); return;
L_08B378E8:
    rt.unsupported(0x08B378ECu, 0x08B161A8u, "control flow in delay slot"); return;
L_08B37930:
    rt.unsupported(0x08B37930u, 0x000000B7u, "special? not lowered yet"); return;
L_08B379C0:
    rt.unsupported(0x08B379C4u, 0x08B15838u, "control flow in delay slot"); return;
L_08B379CC:
    rt.unsupported(0x08B379D0u, 0x08B1579Cu, "control flow in delay slot"); return;
L_08B379E0:
    rt.unsupported(0x08B379E4u, 0x08B162B8u, "control flow in delay slot"); return;
L_08B379F4:
    rt.unsupported(0x08B379F8u, 0x08B16308u, "control flow in delay slot"); return;
L_08B37A08:
    rt.unsupported(0x08B37A0Cu, 0x08B16324u, "control flow in delay slot"); return;
L_08B37A1C:
    rt.unsupported(0x08B37A20u, 0x08B16340u, "control flow in delay slot"); return;
L_08B37A28:
    rt.unsupported(0x08B37A2Cu, 0x08B16368u, "control flow in delay slot"); return;
L_08B37A38:
    rt.unsupported(0x08B37A3Cu, 0x08B163ACu, "control flow in delay slot"); return;
L_08B37A4C:
    rt.unsupported(0x08B37A50u, 0x08B16400u, "control flow in delay slot"); return;
L_08B37A54:
    rt.unsupported(0x08B37A58u, 0x08B16420u, "control flow in delay slot"); return;
L_08B37A60:
    rt.unsupported(0x08B37A64u, 0x08B16450u, "control flow in delay slot"); return;
L_08B37A70:
    rt.unsupported(0x08B37A74u, 0x08B1648Cu, "control flow in delay slot"); return;
L_08B37A80:
    rt.unsupported(0x08B37A84u, 0x08B164C8u, "control flow in delay slot"); return;
L_08B37A84:
    rt.unsupported(0x08B37A88u, 0x08B164DCu, "control flow in delay slot"); return;
L_08B37A8C:
    rt.unsupported(0x08B37A90u, 0x08B164FCu, "control flow in delay slot"); return;
L_08B37A90:
    rt.unsupported(0x08B37A94u, 0x08B164FCu, "control flow in delay slot"); return;
L_08B37A94:
    rt.unsupported(0x08B37A98u, 0x08B16508u, "control flow in delay slot"); return;
L_08B37A9C:
    rt.unsupported(0x08B37AA0u, 0x08B16514u, "control flow in delay slot"); return;
L_08B37AA4:
    rt.unsupported(0x08B37AA8u, 0x08B16530u, "control flow in delay slot"); return;
L_08B37AA8:
    rt.unsupported(0x08B37AACu, 0x08B15844u, "control flow in delay slot"); return;
L_08B37AAC:
    rt.unsupported(0x08B37AB0u, 0x08B16540u, "control flow in delay slot"); return;
L_08B37AB4:
    rt.unsupported(0x08B37AB8u, 0x08B16560u, "control flow in delay slot"); return;
L_08B37AB8:
    rt.unsupported(0x08B37ABCu, 0x08B16560u, "control flow in delay slot"); return;
L_08B37ABC:
    rt.unsupported(0x08B37AC0u, 0x08B1656Cu, "control flow in delay slot"); return;
L_08B37AC4:
    jump_target = 0u;
    ctx.gpr[31] = (0x08B37ACCu);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(0u)) * static_cast<std::int64_t>(static_cast<std::int32_t>(0u)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B37ACCu) goto L_08B37ACC;
    return;
L_08B37ACC:
    if (0u == 0u) (void)(0u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(0u)) * static_cast<std::int64_t>(static_cast<std::int32_t>(0u)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    goto L_08B37AD4;
L_08B37AD4:
    if (0u != 0u) (void)(0u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(0u)) * static_cast<std::int64_t>(static_cast<std::int32_t>(0u)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    goto L_08B37ADC;
L_08B37ADC:
    rt.unsupported(0x08B37ADCu, 0x000000CCu, "syscall not lowered yet"); return;
L_08B37AE4:
    rt.unsupported(0x08B37AE4u, 0x000000CDu, "special? not lowered yet"); return;
L_08B37AEC:
    jump_target = 0u;
    ctx.gpr[31] = (0x08B37AF4u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(0u)) * static_cast<std::int64_t>(static_cast<std::int32_t>(0u)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B37AF4u) goto L_08B37AF4;
    return;
L_08B37AF4:
    if (0u == 0u) (void)(0u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(0u)) * static_cast<std::int64_t>(static_cast<std::int32_t>(0u)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    goto L_08B37AFC;
L_08B37AFC:
    if (0u != 0u) (void)(0u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(0u)) * static_cast<std::int64_t>(static_cast<std::int32_t>(0u)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    goto L_08B37B04;
L_08B37B04:
    rt.unsupported(0x08B37B04u, 0x000000CCu, "syscall not lowered yet"); return;
L_08B37B0C:
    rt.unsupported(0x08B37B0Cu, 0x000000CDu, "special? not lowered yet"); return;
L_08B37B14:
    jump_target = 0u;
    ctx.gpr[31] = (0x08B37B1Cu);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(0u)) * static_cast<std::int64_t>(static_cast<std::int32_t>(0u)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B37B1Cu) goto L_08B37B1C;
    return;
L_08B37B1C:
    if (0u == 0u) (void)(0u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(0u)) * static_cast<std::int64_t>(static_cast<std::int32_t>(0u)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    if (0u != 0u) (void)(0u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(0u)) * static_cast<std::int64_t>(static_cast<std::int32_t>(0u)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    rt.unsupported(0x08B37B2Cu, 0x000000CCu, "syscall not lowered yet"); return;
L_08B37B3C:
    rt.unsupported(0x08B37B40u, 0x08B16584u, "control flow in delay slot"); return;
L_08B37B4C:
    rt.unsupported(0x08B37B50u, 0x000000CEu, "special? not lowered yet"); return;
    ctx.pc = 0x02C596A0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B37B50:
    rt.unsupported(0x08B37B50u, 0x000000CEu, "special? not lowered yet"); return;
L_08B37B70:
    (void)(ctx.lo);
    ctx.pc = 0x02C596C0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B37B74:
    (void)(ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(0u)) * static_cast<std::int64_t>(static_cast<std::int32_t>(0u)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    goto L_08B37B7C;
L_08B37B7C:
    rt.unsupported(0x08B37B80u, 0x08B165BCu, "control flow in delay slot"); return;
L_08B37B8C:
    ctx.lo = 0u;
    rt.unsupported(0x08B37B90u, 0x0000001Cu, "special? not lowered yet"); return;
L_08B37BAC:
    rt.unsupported(0x08B37BB0u, 0x08B165E0u, "control flow in delay slot"); return;
L_08B37BC8:
    (void)(static_cast<std::uint32_t>(std::countl_one(0u)));
    { const std::int32_t dividend = static_cast<std::int32_t>(0u); ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); }
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(0u)) * static_cast<std::int64_t>(static_cast<std::int32_t>(0u)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    { const std::int32_t dividend = static_cast<std::int32_t>(0u); ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); }
    { const std::uint64_t product = static_cast<std::uint64_t>(0u) * static_cast<std::uint64_t>(0u); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(product >> 32u); }
    { const std::int32_t dividend = static_cast<std::int32_t>(0u); ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); }
    { const std::int32_t dividend = static_cast<std::int32_t>(0u); ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); }
    { const std::int32_t dividend = static_cast<std::int32_t>(0u); ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); }
    { const std::uint32_t dividend = 0u; ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; }
    { const std::int32_t dividend = static_cast<std::int32_t>(0u); ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); }
    rt.unsupported(0x08B37BF0u, 0x000000DCu, "special? not lowered yet"); return;
L_08B37C00:
    rt.unsupported(0x08B37C04u, 0x08B1663Cu, "control flow in delay slot"); return;
L_08B37C1C:
    rt.unsupported(0x08B37C1Cu, 0x000000DEu, "special? not lowered yet"); return;
L_08B37C54:
    rt.unsupported(0x08B37C58u, 0x08B16678u, "control flow in delay slot"); return;
L_08B37C68:
    rt.unsupported(0x08B37C6Cu, 0x08B166A8u, "control flow in delay slot"); return;
L_08B37C7C:
    rt.unsupported(0x08B37C80u, 0x08B166E4u, "control flow in delay slot"); return;
L_08B37C90:
    rt.unsupported(0x08B37C94u, 0x08B166FCu, "control flow in delay slot"); return;
L_08B37CA4:
    rt.unsupported(0x08B37CA8u, 0x08B1673Cu, "control flow in delay slot"); return;
L_08B37CB8:
    rt.unsupported(0x08B37CBCu, 0x08B1677Cu, "control flow in delay slot"); return;
L_08B37CCC:
    rt.unsupported(0x08B37CD0u, 0x08B167A8u, "control flow in delay slot"); return;
L_08B37CE0:
    rt.unsupported(0x08B37CE4u, 0x08B167D0u, "control flow in delay slot"); return;
L_08B37CF4:
    rt.unsupported(0x08B37CF8u, 0x08B167F8u, "control flow in delay slot"); return;
L_08B37D08:
    rt.unsupported(0x08B37D0Cu, 0x08B1682Cu, "control flow in delay slot"); return;
L_08B37D1C:
    rt.unsupported(0x08B37D20u, 0x08B16864u, "control flow in delay slot"); return;
L_08B37D30:
    rt.unsupported(0x08B37D34u, 0x08B1689Cu, "control flow in delay slot"); return;
L_08B37D44:
    rt.unsupported(0x08B37D48u, 0x08B168CCu, "control flow in delay slot"); return;
L_08B37D4C:
    rt.unsupported(0x08B37D50u, 0x08B168E4u, "control flow in delay slot"); return;
L_08B37D6C:
    rt.unsupported(0x08B37D70u, 0x08B16954u, "control flow in delay slot"); return;
L_08B37D70:
    rt.unsupported(0x08B37D74u, 0x08B16960u, "control flow in delay slot"); return;
L_08B37D74:
    rt.unsupported(0x08B37D78u, 0x08B16974u, "control flow in delay slot"); return;
L_08B37D7C:
    rt.unsupported(0x08B37D80u, 0x08B16990u, "control flow in delay slot"); return;
L_08B37D80:
    rt.unsupported(0x08B37D84u, 0x08B169A0u, "control flow in delay slot"); return;
L_08B37D88:
    rt.unsupported(0x08B37D8Cu, 0x08B169B8u, "control flow in delay slot"); return;
L_08B37D90:
    rt.unsupported(0x08B37D94u, 0x08B169D4u, "control flow in delay slot"); return;
L_08B37D94:
    rt.unsupported(0x08B37D98u, 0x08B169E8u, "control flow in delay slot"); return;
L_08B37DA4:
    rt.unsupported(0x08B37DA8u, 0x08B16A24u, "control flow in delay slot"); return;
L_08B37DB0:
    rt.unsupported(0x08B37DB4u, 0x08B16A58u, "control flow in delay slot"); return;
L_08B37DB4:
    rt.unsupported(0x08B37DB8u, 0x08B16A6Cu, "control flow in delay slot"); return;
L_08B37DBC:
    rt.unsupported(0x08B37DC0u, 0x08B16A94u, "control flow in delay slot"); return;
L_08B37DC8:
    rt.unsupported(0x08B37DCCu, 0x08B16AC8u, "control flow in delay slot"); return;
L_08B37DD0:
    rt.unsupported(0x08B37DD4u, 0x08B16AECu, "control flow in delay slot"); return;
L_08B37DD8:
    rt.unsupported(0x08B37DDCu, 0x08B16B10u, "control flow in delay slot"); return;
L_08B37DDC:
    rt.unsupported(0x08B37DE0u, 0x08B16B24u, "control flow in delay slot"); return;
L_08B37DE0:
    rt.unsupported(0x08B37DE4u, 0x08B16B30u, "control flow in delay slot"); return;
L_08B37DE8:
    rt.unsupported(0x08B37DECu, 0x08B16B54u, "control flow in delay slot"); return;
L_08B37DF4:
    rt.unsupported(0x08B37DF8u, 0x08B16B84u, "control flow in delay slot"); return;
L_08B37DF8:
    rt.unsupported(0x08B37DFCu, 0x08B16B90u, "control flow in delay slot"); return;
L_08B37E04:
    rt.unsupported(0x08B37E08u, 0x08B16BB4u, "control flow in delay slot"); return;
L_08B37E08:
    // nop
    ctx.pc = 0x02C5AED0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B37E0C:
    // nop
    { const bool signed_ok = ctx.execute_signed_sub(0u, 0u, 0u);
      if (!signed_ok) { rt.arithmetic_overflow(0x08B37E10u, 0x000001E2u); return; } }
    rt.unsupported(0x08B37E14u, 0x00000001u, "special? not lowered yet"); return;
L_08B37E34:
    rt.unsupported(0x08B37E38u, 0x08B16BD8u, "control flow in delay slot"); return;
L_08B37E44:
    rt.unsupported(0x08B37E48u, 0x08B155A4u, "control flow in delay slot"); return;
L_08B37E4C:
    rt.unsupported(0x08B37E50u, 0x08B155C0u, "control flow in delay slot"); return;
L_08B37E54:
    rt.unsupported(0x08B37E58u, 0x08B16C08u, "control flow in delay slot"); return;
L_08B37E64:
    rt.unsupported(0x08B37E68u, 0x08B16C08u, "control flow in delay slot"); return;
L_08B37E74:
    rt.unsupported(0x08B37E78u, 0x08B155A4u, "control flow in delay slot"); return;
L_08B37E84:
    rt.unsupported(0x08B37E88u, 0x08B16C48u, "control flow in delay slot"); return;
L_08B37E94:
    rt.unsupported(0x08B37E98u, 0x08B155A4u, "control flow in delay slot"); return;
L_08B37EA4:
    rt.unsupported(0x08B37EA8u, 0x08B16C70u, "control flow in delay slot"); return;
L_08B37EB4:
    rt.unsupported(0x08B37EB8u, 0x08B16C70u, "control flow in delay slot"); return;
L_08B37EC4:
    rt.unsupported(0x08B37EC8u, 0x08B16C70u, "control flow in delay slot"); return;
L_08B37ED4:
    rt.unsupported(0x08B37ED8u, 0x08B16C70u, "control flow in delay slot"); return;
L_08B37EE4:
    rt.unsupported(0x08B37EE8u, 0x08B16C70u, "control flow in delay slot"); return;
L_08B37EF4:
    rt.unsupported(0x08B37EF8u, 0x08B16C70u, "control flow in delay slot"); return;
L_08B37F04:
    rt.unsupported(0x08B37F08u, 0x08B16C70u, "control flow in delay slot"); return;
L_08B37F14:
    rt.unsupported(0x08B37F18u, 0x08B16C2Cu, "control flow in delay slot"); return;
L_08B37F24:
    rt.unsupported(0x08B37F28u, 0x08B16CE8u, "control flow in delay slot"); return;
L_08B37F34:
    rt.unsupported(0x08B37F38u, 0x08B16D08u, "control flow in delay slot"); return;
}

void recomp_unit_0204(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0204_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_204(Runtime &runtime) {
    runtime.register_generated_unit(204u, 0x08B34000u, 16384u, &recomp_unit_0204, &recomp_unit_0204_entry);
    runtime.register_function(0x08B34024u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34064u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34094u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B340A0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B340CCu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B340E8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34158u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3417Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34188u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34190u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B341B0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B341D4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34200u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34214u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34258u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B342E8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34318u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34368u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B343C0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B343C8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B344E4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B344ECu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B344F0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B344F4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B344FCu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34504u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3450Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34514u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3451Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34524u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3452Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34534u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3453Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34544u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3454Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34554u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3455Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34564u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3456Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34574u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3457Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34580u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34584u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3458Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34594u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3459Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B345A4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B345ACu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B345B4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B345BCu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B345C4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B345CCu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B345D4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B345DCu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B345E4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B345ECu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B345F4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B345FCu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34604u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3460Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34614u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3461Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34624u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34648u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34738u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34868u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B348CCu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B348DCu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34ACCu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34C48u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34C50u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34C58u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34C60u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34C68u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34C70u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34C78u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34C80u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34C88u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34C90u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34C98u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34CA0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34CA8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34CB0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34CB8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34CC0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34CC8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34CD0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34CD8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34CE0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34CE8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34CF0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34CF8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34D00u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34D08u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34D10u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34D18u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34D20u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34D28u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34D30u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34D38u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34D40u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34D48u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34D4Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34D50u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34D58u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34D60u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34D68u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34D70u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34D78u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34D80u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34D88u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34D90u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34D98u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34DA0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34DA8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34DB0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34DB8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34DC0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34DC8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34DD0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34DD8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34DE0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34DE8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34DF0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34DF8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34E00u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34E04u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34E08u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34E10u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34E18u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34E20u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34E28u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34E30u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34E38u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34E40u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34E48u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34E50u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34E58u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34E60u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34E68u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34E70u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34E78u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34E80u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34E88u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34E90u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34E98u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34EA0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34EA8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34EB0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34EB8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34EC0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34EC8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34ED0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34ED8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34EE0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34EE8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34EF0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34EF8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34F00u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34F08u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34F10u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34F18u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34F20u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34F28u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34FD4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35004u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35010u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3501Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3502Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35030u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B350D4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B350E8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35150u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3516Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B351B0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B351FCu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35210u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3521Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35228u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35234u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3524Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35280u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35290u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B352A4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B352D8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B352E4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B352F0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B352FCu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35304u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35308u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35314u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35320u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3532Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35338u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35344u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35350u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35354u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3535Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35364u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3536Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35374u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3537Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35384u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3538Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35394u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3539Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B353A4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B353ACu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B353B4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B353BCu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B353C4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B353CCu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B353D4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B353DCu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B353E4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B353ECu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B353F4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B353FCu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35404u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3540Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35414u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3541Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35424u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3542Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35434u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3543Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35444u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B355A8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B355DCu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3562Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35778u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3578Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B357A0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B357B4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B357C8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B357DCu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35828u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3582Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35850u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B358A8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B358F4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B358F8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35938u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B359BCu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35A74u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35B2Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35B34u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35B3Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35B44u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35B4Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35B54u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35B5Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35B64u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35B6Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35B74u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35B7Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35B84u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35B8Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35B94u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35B9Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35C30u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35C4Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35C88u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35CA0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35CA8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35CF4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35E28u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35E30u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35E38u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35E40u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35E48u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35E50u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35E58u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35E60u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35E68u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35E70u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35E74u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35E78u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35E80u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35E88u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35E90u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35E98u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35E9Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35EA0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35EA8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35EBCu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35F54u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35FC0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35FECu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36020u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3602Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B360BCu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B360C8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B360CCu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B360D8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B360E8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B360F4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3611Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36144u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36150u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36158u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36160u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3616Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3618Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36194u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3619Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B361BCu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B361C8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B361E4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3620Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36214u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36234u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3625Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36264u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36284u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3628Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36290u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B362ACu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B362B8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B362D4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B362E0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B362E8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B362FCu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36304u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36324u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36330u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3634Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36358u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36374u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3637Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3639Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B363A4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B363C4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B363CCu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B363D0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B363ECu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B363F4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36400u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36408u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36410u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36414u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36418u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3641Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3643Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36444u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36464u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3646Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3648Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36494u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3649Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B364A4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B364ACu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B364B4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B364DCu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B364E4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36504u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3650Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3652Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36534u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36554u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3655Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3657Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36584u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B365A4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B365ACu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B365CCu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B365D4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B365E8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B365F4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B365FCu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3661Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36624u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36644u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3664Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3666Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36674u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36694u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3669Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B366BCu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B366C4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B366E4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B366ECu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3670Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36718u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36734u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36740u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3675Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36784u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B367ACu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B367D4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B367E0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B367FCu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3681Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36824u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36834u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3684Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36850u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36858u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36874u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3689Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B368A8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B368C4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B368ECu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36914u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36920u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3693Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36964u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3698Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B369B4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B369BCu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B369C0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B369C4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B369CCu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B369D4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B369DCu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B369E4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B369ECu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B369F4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B369FCu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36A04u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36A0Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36A14u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36A1Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36A24u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36A2Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36A34u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36A3Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36A44u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36A4Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36A54u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36A5Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36A64u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36A6Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36A74u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36A7Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36A84u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36A8Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36A94u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36A9Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36AA4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36AACu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36AB4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36ABCu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36AC4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36ACCu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36AD4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36ADCu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36AE4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36AECu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36AF4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36AFCu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36B04u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36B0Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36B14u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36B1Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36B24u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36B2Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36B34u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36B3Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36B44u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36B4Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36B54u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36B5Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36B64u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36B6Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36B74u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36B7Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36B84u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36B8Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36B94u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36B9Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36BA4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36BACu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36BB4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36BBCu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36BC4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36BCCu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36BD0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36BD4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36BFCu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36C3Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36C44u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36C4Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36C88u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36C98u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36CFCu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36D9Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36DA8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36DB4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36DECu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36DF8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36E38u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36F80u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37098u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3709Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B370A0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B370A8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B370B0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37254u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B372C0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B375E4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B375F4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37634u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3763Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37644u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37654u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3765Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3766Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3767Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37684u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B376A4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B376BCu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B376C4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B376D4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B376ECu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B376FCu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3770Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37714u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3771Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3772Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37744u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3774Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37764u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3776Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37774u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37788u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B377B0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B377D0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B377D4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37810u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37858u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B378A0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B378E8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37930u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B379C0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B379CCu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B379E0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B379F4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37A08u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37A1Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37A28u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37A38u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37A4Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37A54u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37A60u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37A70u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37A80u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37A84u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37A8Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37A90u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37A94u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37A9Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37AA4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37AA8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37AACu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37AB4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37AB8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37ABCu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37AC4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37ACCu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37AD4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37ADCu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37AE4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37AECu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37AF4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37AFCu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37B04u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37B0Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37B14u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37B1Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37B3Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37B4Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37B50u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37B70u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37B74u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37B7Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37B8Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37BACu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37BC8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37C00u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37C1Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37C54u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37C68u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37C7Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37C90u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37CA4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37CB8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37CCCu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37CE0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37CF4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37D08u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37D1Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37D30u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37D44u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37D4Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37D6Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37D70u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37D74u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37D7Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37D80u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37D88u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37D90u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37D94u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37DA4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37DB0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37DB4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37DBCu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37DC8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37DD0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37DD8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37DDCu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37DE0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37DE8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37DF4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37DF8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37E04u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37E08u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37E0Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37E34u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37E44u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37E4Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37E54u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37E64u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37E74u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37E84u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37E94u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37EA4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37EB4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37EC4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37ED4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37EE4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37EF4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37F04u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37F14u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37F24u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37F34u, &recomp_unit_0204, "recomp_unit_0204");
}
} // namespace psprecomp
