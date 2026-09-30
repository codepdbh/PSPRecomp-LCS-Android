#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0177[4094] = {
    1, 0, 0, 0, 0, 0, 2, 0, 0, 3, 0, 0, 0, 4, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    6, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 9, 0, 0, 0, 10, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 11, 0, 12, 0, 0, 0, 0, 0, 13, 14, 0, 0, 0, 0, 0, 0, 0, 15, 16, 0, 0, 0, 17, 0, 0, 0,
    18, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 23, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 28, 0,
    0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 30, 0, 31, 0, 0, 32, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0,
    0, 0, 0, 35, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 39, 0, 0, 0, 0, 0, 40, 0, 0, 41, 0, 0, 0, 42, 0, 0, 43, 0, 0, 0, 0, 44, 0, 0, 45, 0, 0, 0, 46,
    0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 51,
    0, 0, 52, 0, 53, 0, 54, 0, 0, 55, 0, 0, 56, 0, 57, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 59, 0, 60, 0, 0, 61, 0,
    62, 0, 0, 0, 63, 0, 0, 64, 65, 0, 66, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 68, 0, 69, 0, 0, 70, 0, 71, 0, 0, 72,
    0, 73, 0, 0, 74, 75, 0, 0, 0, 76, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 79, 0, 80, 0, 0,
    81, 0, 0, 0, 82, 0, 83, 0, 0, 0, 0, 0, 0, 84, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 87, 0, 88, 0, 89, 0,
    90, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 97, 0, 0, 0, 0, 98, 0, 0,
    0, 0, 99, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0,
    0, 0, 0, 102, 0, 0, 0, 0, 103, 0, 0, 0, 0, 104, 0, 105, 0, 0, 0, 0, 106, 0, 107, 0, 108, 0, 109, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 110, 0, 111, 0, 0, 0, 0, 112, 0, 113, 0, 0, 0, 0, 114, 0, 115, 0, 0, 0, 0, 116, 0, 117, 0,
    0, 0, 0, 118, 0, 119, 0, 0, 0, 0, 120, 0, 121, 0, 0, 0, 0, 122, 0, 123, 0, 0, 0, 0, 124, 0, 125, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 126, 0, 127, 0, 128, 0, 129, 0, 130, 0, 0, 0, 0, 0, 131, 0, 132, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0,
    134, 0, 0, 135, 0, 0, 0, 136, 0, 137, 0, 0, 138, 0, 0, 0, 139, 0, 0, 0, 0, 140, 141, 0, 0, 0, 0, 0, 0, 142, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 145, 0,
    0, 0, 146, 0, 147, 148, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 150, 0, 151, 0, 0, 152, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 154, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0,
    0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 161, 0, 162, 0, 163,
    164, 0, 165, 0, 0, 0, 0, 0, 0, 166, 0, 167, 168, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 170, 0, 0, 171, 0, 172, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 174, 0, 0, 175, 0, 0, 0, 0, 0, 0, 176, 177, 0, 0, 0, 0, 178, 0,
    0, 0, 0, 0, 179, 0, 0, 0, 180, 0, 0, 0, 181, 0, 182, 0, 183, 0, 0, 0, 0, 184, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0,
    0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 192, 0, 0, 0, 0, 0, 193, 0, 0, 194, 0, 0, 0, 0, 0, 0, 195, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0,
    0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 200, 0, 0, 201, 0, 0, 0, 202, 0, 203, 0, 0, 204, 0, 205, 0, 0, 0, 206, 0, 0, 0, 207, 0, 208, 0, 209,
    0, 210, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 214, 0, 215, 0, 0, 216, 0, 0, 0, 217, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 219, 0, 0, 220, 0, 221,
    0, 0, 0, 222, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 225, 0, 0, 226, 0, 227, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 229, 0, 0, 0, 230, 0, 231, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0,
    233, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 238, 0, 0, 239, 0, 0, 240, 0, 0, 0, 241, 0,
    0, 0, 242, 0, 0, 0, 243, 0, 244, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 248, 0, 0, 249, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251,
    0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0,
    255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0,
    0, 0, 258, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 261, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 264, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0,
    0, 0, 0, 0, 0, 0, 269, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 271, 0, 272, 0, 0, 273, 0, 274, 0, 0, 275, 0, 276, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 279, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0,
    0, 282, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 285, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 288, 0, 0, 289, 0, 290, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 292, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0,
    0, 0, 0, 296, 0, 0, 297, 0, 0, 0, 298, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0,
    0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 306, 0, 307, 0, 308, 0, 309, 310, 0, 311, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 314, 0, 315, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0,
    317, 0, 0, 0, 0, 318, 0, 319, 320, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 322, 0, 323, 0, 324, 0, 0, 325, 0, 326, 0, 327, 0,
    328, 0, 329, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 332, 0, 0, 0, 0, 333, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0,
    0, 335, 0, 336, 0, 0, 0, 337, 0, 338, 0, 0, 339, 340, 0, 0, 0, 0, 341, 342, 0, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0,
    0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0,
    0, 0, 348, 0, 0, 349, 0, 0, 0, 0, 0, 350, 0, 351, 352, 0, 0, 0, 0, 353, 0, 354, 0, 0, 0, 355, 0, 0, 0, 0, 0, 356,
    0, 0, 0, 0, 0, 357, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 361, 0,
    0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 365, 0, 366, 367, 0, 0, 368, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 371, 0, 372, 373, 0, 374, 0, 0, 0, 375,
    0, 0, 0, 376, 0, 0, 0, 0, 377, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 380, 0, 381, 382, 0, 383, 0,
    0, 0, 384, 0, 0, 0, 385, 0, 0, 0, 0, 386, 0, 0, 0, 387, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 388, 0, 0,
    0, 0, 0, 389, 0, 390, 391, 0, 392, 0, 0, 393, 0, 0, 394, 0, 0, 0, 395, 0, 0, 0, 0, 396, 0, 397, 0, 0, 0, 0, 398, 0,
    399, 400, 0, 401, 0, 0, 0, 0, 402, 0, 403, 404, 0, 405, 0, 0, 0, 0, 406, 0, 407, 408, 0, 409, 0, 0, 0, 0, 410, 0, 411, 412,
    0, 413, 0, 0, 0, 0, 414, 0, 415, 416, 0, 417, 0, 0, 0, 0, 418, 0, 419, 420, 0, 421, 0, 0, 0, 0, 422, 0, 423, 424, 0, 425,
    0, 0, 0, 0, 426, 0, 427, 428, 0, 429, 0, 0, 430, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 431, 0, 0, 0, 0, 432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 433, 0, 0, 0, 0, 0, 0, 0, 0, 434, 0,
    0, 0, 435, 0, 0, 436, 0, 437, 0, 0, 0, 0, 0, 438, 0, 439, 0, 440, 0, 441, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 442, 0,
    0, 0, 443, 0, 0, 0, 444, 0, 0, 0, 0, 0, 445, 0, 0, 0, 446, 0, 0, 0, 447, 448, 0, 0, 449, 450, 0, 0, 451, 0, 0, 0,
    0, 0, 452, 0, 453, 0, 0, 0, 0, 454, 0, 0, 0, 0, 0, 0, 0, 455, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 456, 0,
    0, 0, 0, 457, 0, 0, 0, 0, 458, 0, 0, 459, 0, 0, 0, 460, 0, 461, 462, 0, 0, 0, 0, 0, 0, 463, 0, 464, 0, 0, 0, 0,
    0, 0, 0, 0, 465, 0, 466, 0, 0, 0, 0, 0, 0, 0, 0, 0, 467, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 468, 0, 0,
    0, 0, 469, 0, 0, 0, 0, 470, 0, 0, 471, 0, 0, 0, 472, 0, 473, 474, 0, 0, 0, 0, 0, 0, 475, 0, 476, 0, 0, 0, 0, 0,
    0, 0, 0, 477, 0, 478, 0, 0, 0, 0, 0, 0, 0, 0, 0, 479, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 480, 0, 0, 0,
    481, 0, 0, 0, 0, 0, 482, 0, 0, 483, 0, 0, 0, 484, 0, 0, 0, 485, 0, 486, 0, 0, 0, 0, 0, 0, 0, 0, 0, 487, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 488, 0, 0, 0, 0, 0, 489, 0, 0, 0, 490, 0, 0, 491, 0, 0, 0, 492, 0, 493, 0, 0, 0, 0, 0,
    0, 494, 495, 0, 0, 0, 0, 0, 496, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 497, 0, 0, 0, 0, 498, 0, 0, 499, 0, 0, 500, 0,
    0, 501, 0, 0, 0, 0, 502, 0, 0, 503, 0, 0, 0, 504, 0, 505, 0, 0, 0, 0, 0, 0, 0, 506, 0, 507, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 508, 0, 0, 0, 509, 0, 0, 0, 510, 0, 0, 0, 0, 0, 0, 0, 0, 0, 511, 0, 0, 0, 512, 0, 0, 0, 0, 513,
    0, 514, 0, 0, 0, 515, 0, 516, 0, 0, 0, 0, 0, 0, 517, 0, 0, 0, 0, 518, 0, 0, 0, 519, 0, 0, 0, 0, 520, 0, 0, 0,
    521, 0, 522, 0, 0, 523, 0, 0, 0, 0, 0, 0, 524, 0, 525, 0, 0, 526, 0, 0, 0, 527, 0, 0, 0, 528, 0, 529, 0, 0, 530, 0,
    0, 0, 0, 0, 531, 0, 0, 532, 0, 0, 533, 0, 534, 0, 0, 535, 0, 0, 0, 536, 0, 537, 0, 538, 0, 0, 0, 0, 539, 540, 0, 541,
    0, 0, 542, 0, 0, 0, 543, 0, 544, 0, 0, 0, 0, 0, 0, 545, 0, 0, 0, 0, 0, 546, 0, 0, 0, 0, 547, 0, 548, 0, 0, 549,
    0, 550, 0, 0, 551, 0, 0, 0, 0, 0, 0, 0, 552, 0, 553, 0, 0, 0, 554, 0, 0, 0, 0, 0, 555, 0, 0, 0, 0, 556, 0, 0,
    0, 0, 557, 0, 0, 0, 0, 558, 0, 0, 0, 0, 559, 0, 0, 0, 0, 560, 0, 0, 0, 0, 561, 0, 0, 0, 0, 562, 0, 0, 0, 0,
    563, 0, 0, 0, 0, 564, 0, 0, 565, 0, 0, 566, 0, 0, 567, 0, 568, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 569,
    0, 570, 0, 0, 0, 571, 572, 0, 0, 573, 0, 0, 0, 574, 0, 575, 0, 0, 0, 576, 0, 577, 0, 578, 0, 0, 579, 0, 0, 580, 0, 0,
    0, 0, 0, 581, 0, 0, 0, 0, 582, 0, 583, 0, 0, 584, 585, 0, 0, 0, 0, 0, 0, 0, 0, 586, 0, 0, 0, 0, 0, 0, 0, 587,
    0, 0, 588, 0, 589, 0, 0, 590, 0, 591, 0, 592, 0, 0, 0, 593, 0, 594, 0, 0, 595, 0, 0, 596, 0, 0, 0, 0, 597, 0, 0, 598,
    0, 0, 0, 0, 0, 0, 599, 0, 0, 0, 600, 0, 0, 601, 0, 602, 0, 0, 0, 0, 0, 603, 0, 0, 0, 604, 0, 0, 605, 0, 0, 606,
    0, 607, 0, 608, 0, 609, 0, 610, 611, 0, 0, 612, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 613, 0, 614, 0, 0, 0,
    0, 615, 0, 616, 0, 0, 0, 0, 617, 0, 618, 0, 0, 0, 619, 0, 620, 0, 621, 0, 0, 622, 623, 0, 0, 0, 0, 0, 0, 0, 624, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 625, 0, 0, 0, 626, 0, 627, 0, 0, 0, 628, 0, 0, 0, 0, 629, 0, 630, 0, 631, 0, 632,
    0, 633, 0, 634, 0, 0, 0, 0, 0, 0, 0, 635, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 636, 0, 0, 0, 0, 0, 0, 0, 637,
    0, 0, 0, 638, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 639, 0, 640, 0, 0, 641, 0, 0, 0, 642, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 643, 0, 0, 0, 0, 0, 0, 0, 0, 644, 0, 645, 0, 646, 0, 0, 0, 0, 0, 0, 647, 0, 0, 0, 0, 0, 0, 0, 648, 0, 0,
    0, 0, 0, 0, 0, 649, 0, 0, 0, 650, 0, 651, 0, 652, 653, 0, 0, 0, 0, 654, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 655,
    0, 0, 656, 0, 657, 0, 658, 0, 659, 0, 660, 0, 0, 0, 661, 0, 0, 662, 0, 0, 0, 0, 663, 0, 664, 0, 0, 0, 665, 0, 666, 0,
    667, 0, 0, 0, 0, 0, 0, 0, 668, 0, 0, 0, 0, 0, 0, 0, 669, 0, 0, 0, 0, 0, 0, 0, 670, 0, 0, 0, 671, 0, 0, 672,
    0, 0, 0, 0, 0, 0, 673, 0, 674, 0, 0, 675, 0, 0, 676, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 677, 0, 0, 678, 0,
    679, 0, 0, 0, 680, 0, 681, 0, 0, 0, 682, 0, 683, 0, 0, 684, 0, 0, 0, 0, 685, 0, 0, 0, 0, 0, 686, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 687, 0, 0, 0, 0, 0, 688, 0, 0, 0, 0, 0, 689, 0, 0, 0, 690, 0, 0, 691, 0, 692, 0,
    0, 0, 693, 694, 0, 0, 695, 0, 696, 0, 0, 0, 697, 0, 698, 0, 0, 0, 0, 0, 699, 0, 0, 700, 0, 0, 0, 0, 0, 701, 0, 0,
    0, 0, 702, 0, 0, 703, 0, 704, 0, 705, 0, 706, 0, 0, 0, 0, 0, 707, 0, 708, 0, 0, 0, 709, 0, 0, 0, 0, 710, 0, 0, 711,
    0, 0, 0, 0, 0, 712, 0, 0, 0, 0, 713, 0, 0, 0, 714, 0, 715, 0, 0, 0, 0, 716, 0, 717, 0, 718, 719, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 720, 0, 0, 0, 0, 0, 0, 0, 0, 0, 721, 0, 0, 0, 722, 0, 0, 0, 723, 0, 0, 0, 0, 0, 0, 0, 724,
    0, 0, 0, 0, 0, 0, 725, 0, 0, 726, 0, 0, 0, 0, 0, 727, 0, 0, 0, 0, 728, 0, 0, 0, 0, 729, 0, 0, 730, 0, 731, 732,
    0, 0, 0, 733, 0, 0, 734, 0, 0, 0, 735, 0, 736, 0, 0, 0, 0, 737, 738, 0, 0, 0, 0, 0, 0, 0, 739, 0, 0, 0, 0, 0,
    0, 0, 0, 740, 0, 0, 0, 741, 0, 0, 742, 0, 0, 743, 0, 0, 0, 0, 744, 0, 0, 0, 0, 0, 745, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 746, 0, 747, 0, 0, 748, 0, 0, 0, 749, 0, 0, 0, 0, 750, 0, 0, 0, 751,
};
void recomp_unit_0177_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08AC8000u;
        entry_id = (entry_delta < 16376u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0177[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08AC8000;
    case 2u: goto L_08AC8018;
    case 3u: goto L_08AC8024;
    case 4u: goto L_08AC8034;
    case 5u: goto L_08AC803C;
    case 6u: goto L_08AC8080;
    case 7u: goto L_08AC809C;
    case 8u: goto L_08AC80C8;
    case 9u: goto L_08AC80E0;
    case 10u: goto L_08AC80F0;
    case 11u: goto L_08AC8118;
    case 12u: goto L_08AC8120;
    case 13u: goto L_08AC8138;
    case 14u: goto L_08AC813C;
    case 15u: goto L_08AC815C;
    case 16u: goto L_08AC8160;
    case 17u: goto L_08AC8170;
    case 18u: goto L_08AC8180;
    case 19u: goto L_08AC8198;
    case 20u: goto L_08AC81AC;
    case 21u: goto L_08AC81C8;
    case 22u: goto L_08AC81E8;
    case 23u: goto L_08AC8210;
    case 24u: goto L_08AC8220;
    case 25u: goto L_08AC824C;
    case 26u: goto L_08AC8268;
    case 27u: goto L_08AC82F4;
    case 28u: goto L_08AC82F8;
    case 29u: goto L_08AC831C;
    case 30u: goto L_08AC832C;
    case 31u: goto L_08AC8334;
    case 32u: goto L_08AC8340;
    case 33u: goto L_08AC8348;
    case 34u: goto L_08AC836C;
    case 35u: goto L_08AC838C;
    case 36u: goto L_08AC8394;
    case 37u: goto L_08AC83CC;
    case 38u: goto L_08AC83DC;
    case 39u: goto L_08AC840C;
    case 40u: goto L_08AC8424;
    case 41u: goto L_08AC8430;
    case 42u: goto L_08AC8440;
    case 43u: goto L_08AC844C;
    case 44u: goto L_08AC8460;
    case 45u: goto L_08AC846C;
    case 46u: goto L_08AC847C;
    case 47u: goto L_08AC8488;
    case 48u: goto L_08AC84B4;
    case 49u: goto L_08AC84D0;
    case 50u: goto L_08AC84E8;
    case 51u: goto L_08AC84FC;
    case 52u: goto L_08AC8508;
    case 53u: goto L_08AC8510;
    case 54u: goto L_08AC8518;
    case 55u: goto L_08AC8524;
    case 56u: goto L_08AC8530;
    case 57u: goto L_08AC8538;
    case 58u: goto L_08AC8558;
    case 59u: goto L_08AC8564;
    case 60u: goto L_08AC856C;
    case 61u: goto L_08AC8578;
    case 62u: goto L_08AC8580;
    case 63u: goto L_08AC8590;
    case 64u: goto L_08AC859C;
    case 65u: goto L_08AC85A0;
    case 66u: goto L_08AC85A8;
    case 67u: goto L_08AC85B4;
    case 68u: goto L_08AC85D4;
    case 69u: goto L_08AC85DC;
    case 70u: goto L_08AC85E8;
    case 71u: goto L_08AC85F0;
    case 72u: goto L_08AC85FC;
    case 73u: goto L_08AC8604;
    case 74u: goto L_08AC8610;
    case 75u: goto L_08AC8614;
    case 76u: goto L_08AC8624;
    case 77u: goto L_08AC8630;
    case 78u: goto L_08AC8664;
    case 79u: goto L_08AC866C;
    case 80u: goto L_08AC8674;
    case 81u: goto L_08AC8680;
    case 82u: goto L_08AC8690;
    case 83u: goto L_08AC8698;
    case 84u: goto L_08AC86B4;
    case 85u: goto L_08AC86BC;
    case 86u: goto L_08AC86E0;
    case 87u: goto L_08AC86E8;
    case 88u: goto L_08AC86F0;
    case 89u: goto L_08AC86F8;
    case 90u: goto L_08AC8700;
    case 91u: goto L_08AC8724;
    case 92u: goto L_08AC874C;
    case 93u: goto L_08AC8754;
    case 94u: goto L_08AC879C;
    case 95u: goto L_08AC87B0;
    case 96u: goto L_08AC87CC;
    case 97u: goto L_08AC87E0;
    case 98u: goto L_08AC87F4;
    case 99u: goto L_08AC8808;
    case 100u: goto L_08AC8810;
    case 101u: goto L_08AC8878;
    case 102u: goto L_08AC888C;
    case 103u: goto L_08AC88A0;
    case 104u: goto L_08AC88B4;
    case 105u: goto L_08AC88BC;
    case 106u: goto L_08AC88D0;
    case 107u: goto L_08AC88D8;
    case 108u: goto L_08AC88E0;
    case 109u: goto L_08AC88E8;
    case 110u: goto L_08AC891C;
    case 111u: goto L_08AC8924;
    case 112u: goto L_08AC8938;
    case 113u: goto L_08AC8940;
    case 114u: goto L_08AC8954;
    case 115u: goto L_08AC895C;
    case 116u: goto L_08AC8970;
    case 117u: goto L_08AC8978;
    case 118u: goto L_08AC898C;
    case 119u: goto L_08AC8994;
    case 120u: goto L_08AC89A8;
    case 121u: goto L_08AC89B0;
    case 122u: goto L_08AC89C4;
    case 123u: goto L_08AC89CC;
    case 124u: goto L_08AC89E0;
    case 125u: goto L_08AC89E8;
    case 126u: goto L_08AC8A14;
    case 127u: goto L_08AC8A1C;
    case 128u: goto L_08AC8A24;
    case 129u: goto L_08AC8A2C;
    case 130u: goto L_08AC8A34;
    case 131u: goto L_08AC8A4C;
    case 132u: goto L_08AC8A54;
    case 133u: goto L_08AC8A6C;
    case 134u: goto L_08AC8A80;
    case 135u: goto L_08AC8A8C;
    case 136u: goto L_08AC8A9C;
    case 137u: goto L_08AC8AA4;
    case 138u: goto L_08AC8AB0;
    case 139u: goto L_08AC8AC0;
    case 140u: goto L_08AC8AD4;
    case 141u: goto L_08AC8AD8;
    case 142u: goto L_08AC8AF4;
    case 143u: goto L_08AC8BB8;
    case 144u: goto L_08AC8BF0;
    case 145u: goto L_08AC8BF8;
    case 146u: goto L_08AC8C08;
    case 147u: goto L_08AC8C10;
    case 148u: goto L_08AC8C14;
    case 149u: goto L_08AC8C34;
    case 150u: goto L_08AC8C40;
    case 151u: goto L_08AC8C48;
    case 152u: goto L_08AC8C54;
    case 153u: goto L_08AC8C5C;
    case 154u: goto L_08AC8C88;
    case 155u: goto L_08AC8C9C;
    case 156u: goto L_08AC8CBC;
    case 157u: goto L_08AC8CF0;
    case 158u: goto L_08AC8D08;
    case 159u: goto L_08AC8D30;
    case 160u: goto L_08AC8D4C;
    case 161u: goto L_08AC8D6C;
    case 162u: goto L_08AC8D74;
    case 163u: goto L_08AC8D7C;
    case 164u: goto L_08AC8D80;
    case 165u: goto L_08AC8D88;
    case 166u: goto L_08AC8DA4;
    case 167u: goto L_08AC8DAC;
    case 168u: goto L_08AC8DB0;
    case 169u: goto L_08AC8DC8;
    case 170u: goto L_08AC8DE0;
    case 171u: goto L_08AC8DEC;
    case 172u: goto L_08AC8DF4;
    case 173u: goto L_08AC8E28;
    case 174u: goto L_08AC8E38;
    case 175u: goto L_08AC8E44;
    case 176u: goto L_08AC8E60;
    case 177u: goto L_08AC8E64;
    case 178u: goto L_08AC8E78;
    case 179u: goto L_08AC8E90;
    case 180u: goto L_08AC8EA0;
    case 181u: goto L_08AC8EB0;
    case 182u: goto L_08AC8EB8;
    case 183u: goto L_08AC8EC0;
    case 184u: goto L_08AC8ED4;
    case 185u: goto L_08AC8EE8;
    case 186u: goto L_08AC8F08;
    case 187u: goto L_08AC8F2C;
    case 188u: goto L_08AC8F54;
    case 189u: goto L_08AC8F60;
    case 190u: goto L_08AC9004;
    case 191u: goto L_08AC9104;
    case 192u: goto L_08AC9188;
    case 193u: goto L_08AC91A0;
    case 194u: goto L_08AC91AC;
    case 195u: goto L_08AC91C8;
    case 196u: goto L_08AC91D4;
    case 197u: goto L_08AC91F8;
    case 198u: goto L_08AC9208;
    case 199u: goto L_08AC926C;
    case 200u: goto L_08AC9294;
    case 201u: goto L_08AC92A0;
    case 202u: goto L_08AC92B0;
    case 203u: goto L_08AC92B8;
    case 204u: goto L_08AC92C4;
    case 205u: goto L_08AC92CC;
    case 206u: goto L_08AC92DC;
    case 207u: goto L_08AC92EC;
    case 208u: goto L_08AC92F4;
    case 209u: goto L_08AC92FC;
    case 210u: goto L_08AC9304;
    case 211u: goto L_08AC9314;
    case 212u: goto L_08AC9344;
    case 213u: goto L_08AC934C;
    case 214u: goto L_08AC9394;
    case 215u: goto L_08AC939C;
    case 216u: goto L_08AC93A8;
    case 217u: goto L_08AC93B8;
    case 218u: goto L_08AC93D0;
    case 219u: goto L_08AC93E8;
    case 220u: goto L_08AC93F4;
    case 221u: goto L_08AC93FC;
    case 222u: goto L_08AC940C;
    case 223u: goto L_08AC9414;
    case 224u: goto L_08AC943C;
    case 225u: goto L_08AC9454;
    case 226u: goto L_08AC9460;
    case 227u: goto L_08AC9468;
    case 228u: goto L_08AC9490;
    case 229u: goto L_08AC94A8;
    case 230u: goto L_08AC94B8;
    case 231u: goto L_08AC94C0;
    case 232u: goto L_08AC94E0;
    case 233u: goto L_08AC9500;
    case 234u: goto L_08AC950C;
    case 235u: goto L_08AC9540;
    case 236u: goto L_08AC95A0;
    case 237u: goto L_08AC95C8;
    case 238u: goto L_08AC95D0;
    case 239u: goto L_08AC95DC;
    case 240u: goto L_08AC95E8;
    case 241u: goto L_08AC95F8;
    case 242u: goto L_08AC9608;
    case 243u: goto L_08AC9618;
    case 244u: goto L_08AC9620;
    case 245u: goto L_08AC9624;
    case 246u: goto L_08AC9694;
    case 247u: goto L_08AC9730;
    case 248u: goto L_08AC9738;
    case 249u: goto L_08AC9744;
    case 250u: goto L_08AC9748;
    case 251u: goto L_08AC977C;
    case 252u: goto L_08AC978C;
    case 253u: goto L_08AC97AC;
    case 254u: goto L_08AC97F8;
    case 255u: goto L_08AC9800;
    case 256u: goto L_08AC9850;
    case 257u: goto L_08AC986C;
    case 258u: goto L_08AC9888;
    case 259u: goto L_08AC9890;
    case 260u: goto L_08AC98E0;
    case 261u: goto L_08AC98EC;
    case 262u: goto L_08AC9914;
    case 263u: goto L_08AC9B2C;
    case 264u: goto L_08AC9B44;
    case 265u: goto L_08AC9B50;
    case 266u: goto L_08AC9C20;
    case 267u: goto L_08AC9C38;
    case 268u: goto L_08AC9C74;
    case 269u: goto L_08AC9C98;
    case 270u: goto L_08AC9CA4;
    case 271u: goto L_08AC9CC4;
    case 272u: goto L_08AC9CCC;
    case 273u: goto L_08AC9CD8;
    case 274u: goto L_08AC9CE0;
    case 275u: goto L_08AC9CEC;
    case 276u: goto L_08AC9CF4;
    case 277u: goto L_08AC9D1C;
    case 278u: goto L_08AC9D30;
    case 279u: goto L_08AC9D4C;
    case 280u: goto L_08AC9D50;
    case 281u: goto L_08AC9DF4;
    case 282u: goto L_08AC9E04;
    case 283u: goto L_08AC9E24;
    case 284u: goto L_08AC9E64;
    case 285u: goto L_08AC9E6C;
    case 286u: goto L_08AC9EB0;
    case 287u: goto L_08AC9EC8;
    case 288u: goto L_08AC9EE0;
    case 289u: goto L_08AC9EEC;
    case 290u: goto L_08AC9EF4;
    case 291u: goto L_08AC9F2C;
    case 292u: goto L_08AC9F84;
    case 293u: goto L_08AC9FA0;
    case 294u: goto L_08AC9FE4;
    case 295u: goto L_08ACA078;
    case 296u: goto L_08ACA08C;
    case 297u: goto L_08ACA098;
    case 298u: goto L_08ACA0A8;
    case 299u: goto L_08ACA0C0;
    case 300u: goto L_08ACA0EC;
    case 301u: goto L_08ACA108;
    case 302u: goto L_08ACA13C;
    case 303u: goto L_08ACA168;
    case 304u: goto L_08ACA194;
    case 305u: goto L_08ACA1C0;
    case 306u: goto L_08ACA1C8;
    case 307u: goto L_08ACA1D0;
    case 308u: goto L_08ACA1D8;
    case 309u: goto L_08ACA1E0;
    case 310u: goto L_08ACA1E4;
    case 311u: goto L_08ACA1EC;
    case 312u: goto L_08ACA220;
    case 313u: goto L_08ACA244;
    case 314u: goto L_08ACA24C;
    case 315u: goto L_08ACA254;
    case 316u: goto L_08ACA260;
    case 317u: goto L_08ACA280;
    case 318u: goto L_08ACA294;
    case 319u: goto L_08ACA29C;
    case 320u: goto L_08ACA2A0;
    case 321u: goto L_08ACA2B0;
    case 322u: goto L_08ACA2CC;
    case 323u: goto L_08ACA2D4;
    case 324u: goto L_08ACA2DC;
    case 325u: goto L_08ACA2E8;
    case 326u: goto L_08ACA2F0;
    case 327u: goto L_08ACA2F8;
    case 328u: goto L_08ACA300;
    case 329u: goto L_08ACA308;
    case 330u: goto L_08ACA314;
    case 331u: goto L_08ACA338;
    case 332u: goto L_08ACA340;
    case 333u: goto L_08ACA354;
    case 334u: goto L_08ACA360;
    case 335u: goto L_08ACA384;
    case 336u: goto L_08ACA38C;
    case 337u: goto L_08ACA39C;
    case 338u: goto L_08ACA3A4;
    case 339u: goto L_08ACA3B0;
    case 340u: goto L_08ACA3B4;
    case 341u: goto L_08ACA3C8;
    case 342u: goto L_08ACA3CC;
    case 343u: goto L_08ACA3F4;
    case 344u: goto L_08ACA410;
    case 345u: goto L_08ACA430;
    case 346u: goto L_08ACA44C;
    case 347u: goto L_08ACA46C;
    case 348u: goto L_08ACA488;
    case 349u: goto L_08ACA494;
    case 350u: goto L_08ACA4AC;
    case 351u: goto L_08ACA4B4;
    case 352u: goto L_08ACA4B8;
    case 353u: goto L_08ACA4CC;
    case 354u: goto L_08ACA4D4;
    case 355u: goto L_08ACA4E4;
    case 356u: goto L_08ACA4FC;
    case 357u: goto L_08ACA514;
    case 358u: goto L_08ACA524;
    case 359u: goto L_08ACA540;
    case 360u: goto L_08ACA55C;
    case 361u: goto L_08ACA578;
    case 362u: goto L_08ACA594;
    case 363u: goto L_08ACA5B0;
    case 364u: goto L_08ACA5CC;
    case 365u: goto L_08ACA5E0;
    case 366u: goto L_08ACA5E8;
    case 367u: goto L_08ACA5EC;
    case 368u: goto L_08ACA5F8;
    case 369u: goto L_08ACA624;
    case 370u: goto L_08ACA640;
    case 371u: goto L_08ACA658;
    case 372u: goto L_08ACA660;
    case 373u: goto L_08ACA664;
    case 374u: goto L_08ACA66C;
    case 375u: goto L_08ACA67C;
    case 376u: goto L_08ACA68C;
    case 377u: goto L_08ACA6A0;
    case 378u: goto L_08ACA6B0;
    case 379u: goto L_08ACA6CC;
    case 380u: goto L_08ACA6E4;
    case 381u: goto L_08ACA6EC;
    case 382u: goto L_08ACA6F0;
    case 383u: goto L_08ACA6F8;
    case 384u: goto L_08ACA708;
    case 385u: goto L_08ACA718;
    case 386u: goto L_08ACA72C;
    case 387u: goto L_08ACA73C;
    case 388u: goto L_08ACA774;
    case 389u: goto L_08ACA78C;
    case 390u: goto L_08ACA794;
    case 391u: goto L_08ACA798;
    case 392u: goto L_08ACA7A0;
    case 393u: goto L_08ACA7AC;
    case 394u: goto L_08ACA7B8;
    case 395u: goto L_08ACA7C8;
    case 396u: goto L_08ACA7DC;
    case 397u: goto L_08ACA7E4;
    case 398u: goto L_08ACA7F8;
    case 399u: goto L_08ACA800;
    case 400u: goto L_08ACA804;
    case 401u: goto L_08ACA80C;
    case 402u: goto L_08ACA820;
    case 403u: goto L_08ACA828;
    case 404u: goto L_08ACA82C;
    case 405u: goto L_08ACA834;
    case 406u: goto L_08ACA848;
    case 407u: goto L_08ACA850;
    case 408u: goto L_08ACA854;
    case 409u: goto L_08ACA85C;
    case 410u: goto L_08ACA870;
    case 411u: goto L_08ACA878;
    case 412u: goto L_08ACA87C;
    case 413u: goto L_08ACA884;
    case 414u: goto L_08ACA898;
    case 415u: goto L_08ACA8A0;
    case 416u: goto L_08ACA8A4;
    case 417u: goto L_08ACA8AC;
    case 418u: goto L_08ACA8C0;
    case 419u: goto L_08ACA8C8;
    case 420u: goto L_08ACA8CC;
    case 421u: goto L_08ACA8D4;
    case 422u: goto L_08ACA8E8;
    case 423u: goto L_08ACA8F0;
    case 424u: goto L_08ACA8F4;
    case 425u: goto L_08ACA8FC;
    case 426u: goto L_08ACA910;
    case 427u: goto L_08ACA918;
    case 428u: goto L_08ACA91C;
    case 429u: goto L_08ACA924;
    case 430u: goto L_08ACA930;
    case 431u: goto L_08ACA9AC;
    case 432u: goto L_08ACA9C0;
    case 433u: goto L_08ACAA54;
    case 434u: goto L_08ACAA78;
    case 435u: goto L_08ACAA88;
    case 436u: goto L_08ACAA94;
    case 437u: goto L_08ACAA9C;
    case 438u: goto L_08ACAAB4;
    case 439u: goto L_08ACAABC;
    case 440u: goto L_08ACAAC4;
    case 441u: goto L_08ACAACC;
    case 442u: goto L_08ACAAF8;
    case 443u: goto L_08ACAB08;
    case 444u: goto L_08ACAB18;
    case 445u: goto L_08ACAB30;
    case 446u: goto L_08ACAB40;
    case 447u: goto L_08ACAB50;
    case 448u: goto L_08ACAB54;
    case 449u: goto L_08ACAB60;
    case 450u: goto L_08ACAB64;
    case 451u: goto L_08ACAB70;
    case 452u: goto L_08ACAB88;
    case 453u: goto L_08ACAB90;
    case 454u: goto L_08ACABA4;
    case 455u: goto L_08ACABC4;
    case 456u: goto L_08ACABF8;
    case 457u: goto L_08ACAC0C;
    case 458u: goto L_08ACAC20;
    case 459u: goto L_08ACAC2C;
    case 460u: goto L_08ACAC3C;
    case 461u: goto L_08ACAC44;
    case 462u: goto L_08ACAC48;
    case 463u: goto L_08ACAC64;
    case 464u: goto L_08ACAC6C;
    case 465u: goto L_08ACAC90;
    case 466u: goto L_08ACAC98;
    case 467u: goto L_08ACACC0;
    case 468u: goto L_08ACACF4;
    case 469u: goto L_08ACAD08;
    case 470u: goto L_08ACAD1C;
    case 471u: goto L_08ACAD28;
    case 472u: goto L_08ACAD38;
    case 473u: goto L_08ACAD40;
    case 474u: goto L_08ACAD44;
    case 475u: goto L_08ACAD60;
    case 476u: goto L_08ACAD68;
    case 477u: goto L_08ACAD8C;
    case 478u: goto L_08ACAD94;
    case 479u: goto L_08ACADBC;
    case 480u: goto L_08ACADF0;
    case 481u: goto L_08ACAE00;
    case 482u: goto L_08ACAE18;
    case 483u: goto L_08ACAE24;
    case 484u: goto L_08ACAE34;
    case 485u: goto L_08ACAE44;
    case 486u: goto L_08ACAE4C;
    case 487u: goto L_08ACAE74;
    case 488u: goto L_08ACAE9C;
    case 489u: goto L_08ACAEB4;
    case 490u: goto L_08ACAEC4;
    case 491u: goto L_08ACAED0;
    case 492u: goto L_08ACAEE0;
    case 493u: goto L_08ACAEE8;
    case 494u: goto L_08ACAF04;
    case 495u: goto L_08ACAF08;
    case 496u: goto L_08ACAF20;
    case 497u: goto L_08ACAF4C;
    case 498u: goto L_08ACAF60;
    case 499u: goto L_08ACAF6C;
    case 500u: goto L_08ACAF78;
    case 501u: goto L_08ACAF84;
    case 502u: goto L_08ACAF98;
    case 503u: goto L_08ACAFA4;
    case 504u: goto L_08ACAFB4;
    case 505u: goto L_08ACAFBC;
    case 506u: goto L_08ACAFDC;
    case 507u: goto L_08ACAFE4;
    case 508u: goto L_08ACB010;
    case 509u: goto L_08ACB020;
    case 510u: goto L_08ACB030;
    case 511u: goto L_08ACB058;
    case 512u: goto L_08ACB068;
    case 513u: goto L_08ACB07C;
    case 514u: goto L_08ACB084;
    case 515u: goto L_08ACB094;
    case 516u: goto L_08ACB09C;
    case 517u: goto L_08ACB0B8;
    case 518u: goto L_08ACB0CC;
    case 519u: goto L_08ACB0DC;
    case 520u: goto L_08ACB0F0;
    case 521u: goto L_08ACB100;
    case 522u: goto L_08ACB108;
    case 523u: goto L_08ACB114;
    case 524u: goto L_08ACB130;
    case 525u: goto L_08ACB138;
    case 526u: goto L_08ACB144;
    case 527u: goto L_08ACB154;
    case 528u: goto L_08ACB164;
    case 529u: goto L_08ACB16C;
    case 530u: goto L_08ACB178;
    case 531u: goto L_08ACB190;
    case 532u: goto L_08ACB19C;
    case 533u: goto L_08ACB1A8;
    case 534u: goto L_08ACB1B0;
    case 535u: goto L_08ACB1BC;
    case 536u: goto L_08ACB1CC;
    case 537u: goto L_08ACB1D4;
    case 538u: goto L_08ACB1DC;
    case 539u: goto L_08ACB1F0;
    case 540u: goto L_08ACB1F4;
    case 541u: goto L_08ACB1FC;
    case 542u: goto L_08ACB208;
    case 543u: goto L_08ACB218;
    case 544u: goto L_08ACB220;
    case 545u: goto L_08ACB23C;
    case 546u: goto L_08ACB254;
    case 547u: goto L_08ACB268;
    case 548u: goto L_08ACB270;
    case 549u: goto L_08ACB27C;
    case 550u: goto L_08ACB284;
    case 551u: goto L_08ACB290;
    case 552u: goto L_08ACB2B0;
    case 553u: goto L_08ACB2B8;
    case 554u: goto L_08ACB2C8;
    case 555u: goto L_08ACB2E0;
    case 556u: goto L_08ACB2F4;
    case 557u: goto L_08ACB308;
    case 558u: goto L_08ACB31C;
    case 559u: goto L_08ACB330;
    case 560u: goto L_08ACB344;
    case 561u: goto L_08ACB358;
    case 562u: goto L_08ACB36C;
    case 563u: goto L_08ACB380;
    case 564u: goto L_08ACB394;
    case 565u: goto L_08ACB3A0;
    case 566u: goto L_08ACB3AC;
    case 567u: goto L_08ACB3B8;
    case 568u: goto L_08ACB3C0;
    case 569u: goto L_08ACB3FC;
    case 570u: goto L_08ACB404;
    case 571u: goto L_08ACB414;
    case 572u: goto L_08ACB418;
    case 573u: goto L_08ACB424;
    case 574u: goto L_08ACB434;
    case 575u: goto L_08ACB43C;
    case 576u: goto L_08ACB44C;
    case 577u: goto L_08ACB454;
    case 578u: goto L_08ACB45C;
    case 579u: goto L_08ACB468;
    case 580u: goto L_08ACB474;
    case 581u: goto L_08ACB48C;
    case 582u: goto L_08ACB4A0;
    case 583u: goto L_08ACB4A8;
    case 584u: goto L_08ACB4B4;
    case 585u: goto L_08ACB4B8;
    case 586u: goto L_08ACB4DC;
    case 587u: goto L_08ACB4FC;
    case 588u: goto L_08ACB508;
    case 589u: goto L_08ACB510;
    case 590u: goto L_08ACB51C;
    case 591u: goto L_08ACB524;
    case 592u: goto L_08ACB52C;
    case 593u: goto L_08ACB53C;
    case 594u: goto L_08ACB544;
    case 595u: goto L_08ACB550;
    case 596u: goto L_08ACB55C;
    case 597u: goto L_08ACB570;
    case 598u: goto L_08ACB57C;
    case 599u: goto L_08ACB598;
    case 600u: goto L_08ACB5A8;
    case 601u: goto L_08ACB5B4;
    case 602u: goto L_08ACB5BC;
    case 603u: goto L_08ACB5D4;
    case 604u: goto L_08ACB5E4;
    case 605u: goto L_08ACB5F0;
    case 606u: goto L_08ACB5FC;
    case 607u: goto L_08ACB604;
    case 608u: goto L_08ACB60C;
    case 609u: goto L_08ACB614;
    case 610u: goto L_08ACB61C;
    case 611u: goto L_08ACB620;
    case 612u: goto L_08ACB62C;
    case 613u: goto L_08ACB668;
    case 614u: goto L_08ACB670;
    case 615u: goto L_08ACB684;
    case 616u: goto L_08ACB68C;
    case 617u: goto L_08ACB6A0;
    case 618u: goto L_08ACB6A8;
    case 619u: goto L_08ACB6B8;
    case 620u: goto L_08ACB6C0;
    case 621u: goto L_08ACB6C8;
    case 622u: goto L_08ACB6D4;
    case 623u: goto L_08ACB6D8;
    case 624u: goto L_08ACB6F8;
    case 625u: goto L_08ACB728;
    case 626u: goto L_08ACB738;
    case 627u: goto L_08ACB740;
    case 628u: goto L_08ACB750;
    case 629u: goto L_08ACB764;
    case 630u: goto L_08ACB76C;
    case 631u: goto L_08ACB774;
    case 632u: goto L_08ACB77C;
    case 633u: goto L_08ACB784;
    case 634u: goto L_08ACB78C;
    case 635u: goto L_08ACB7AC;
    case 636u: goto L_08ACB7DC;
    case 637u: goto L_08ACB7FC;
    case 638u: goto L_08ACB80C;
    case 639u: goto L_08ACB838;
    case 640u: goto L_08ACB840;
    case 641u: goto L_08ACB84C;
    case 642u: goto L_08ACB85C;
    case 643u: goto L_08ACB884;
    case 644u: goto L_08ACB8A8;
    case 645u: goto L_08ACB8B0;
    case 646u: goto L_08ACB8B8;
    case 647u: goto L_08ACB8D4;
    case 648u: goto L_08ACB8F4;
    case 649u: goto L_08ACB914;
    case 650u: goto L_08ACB924;
    case 651u: goto L_08ACB92C;
    case 652u: goto L_08ACB934;
    case 653u: goto L_08ACB938;
    case 654u: goto L_08ACB94C;
    case 655u: goto L_08ACB97C;
    case 656u: goto L_08ACB988;
    case 657u: goto L_08ACB990;
    case 658u: goto L_08ACB998;
    case 659u: goto L_08ACB9A0;
    case 660u: goto L_08ACB9A8;
    case 661u: goto L_08ACB9B8;
    case 662u: goto L_08ACB9C4;
    case 663u: goto L_08ACB9D8;
    case 664u: goto L_08ACB9E0;
    case 665u: goto L_08ACB9F0;
    case 666u: goto L_08ACB9F8;
    case 667u: goto L_08ACBA00;
    case 668u: goto L_08ACBA20;
    case 669u: goto L_08ACBA40;
    case 670u: goto L_08ACBA60;
    case 671u: goto L_08ACBA70;
    case 672u: goto L_08ACBA7C;
    case 673u: goto L_08ACBA98;
    case 674u: goto L_08ACBAA0;
    case 675u: goto L_08ACBAAC;
    case 676u: goto L_08ACBAB8;
    case 677u: goto L_08ACBAEC;
    case 678u: goto L_08ACBAF8;
    case 679u: goto L_08ACBB00;
    case 680u: goto L_08ACBB10;
    case 681u: goto L_08ACBB18;
    case 682u: goto L_08ACBB28;
    case 683u: goto L_08ACBB30;
    case 684u: goto L_08ACBB3C;
    case 685u: goto L_08ACBB50;
    case 686u: goto L_08ACBB68;
    case 687u: goto L_08ACBBA4;
    case 688u: goto L_08ACBBBC;
    case 689u: goto L_08ACBBD4;
    case 690u: goto L_08ACBBE4;
    case 691u: goto L_08ACBBF0;
    case 692u: goto L_08ACBBF8;
    case 693u: goto L_08ACBC08;
    case 694u: goto L_08ACBC0C;
    case 695u: goto L_08ACBC18;
    case 696u: goto L_08ACBC20;
    case 697u: goto L_08ACBC30;
    case 698u: goto L_08ACBC38;
    case 699u: goto L_08ACBC50;
    case 700u: goto L_08ACBC5C;
    case 701u: goto L_08ACBC74;
    case 702u: goto L_08ACBC88;
    case 703u: goto L_08ACBC94;
    case 704u: goto L_08ACBC9C;
    case 705u: goto L_08ACBCA4;
    case 706u: goto L_08ACBCAC;
    case 707u: goto L_08ACBCC4;
    case 708u: goto L_08ACBCCC;
    case 709u: goto L_08ACBCDC;
    case 710u: goto L_08ACBCF0;
    case 711u: goto L_08ACBCFC;
    case 712u: goto L_08ACBD14;
    case 713u: goto L_08ACBD28;
    case 714u: goto L_08ACBD38;
    case 715u: goto L_08ACBD40;
    case 716u: goto L_08ACBD54;
    case 717u: goto L_08ACBD5C;
    case 718u: goto L_08ACBD64;
    case 719u: goto L_08ACBD68;
    case 720u: goto L_08ACBD94;
    case 721u: goto L_08ACBDBC;
    case 722u: goto L_08ACBDCC;
    case 723u: goto L_08ACBDDC;
    case 724u: goto L_08ACBDFC;
    case 725u: goto L_08ACBE18;
    case 726u: goto L_08ACBE24;
    case 727u: goto L_08ACBE3C;
    case 728u: goto L_08ACBE50;
    case 729u: goto L_08ACBE64;
    case 730u: goto L_08ACBE70;
    case 731u: goto L_08ACBE78;
    case 732u: goto L_08ACBE7C;
    case 733u: goto L_08ACBE8C;
    case 734u: goto L_08ACBE98;
    case 735u: goto L_08ACBEA8;
    case 736u: goto L_08ACBEB0;
    case 737u: goto L_08ACBEC4;
    case 738u: goto L_08ACBEC8;
    case 739u: goto L_08ACBEE8;
    case 740u: goto L_08ACBF0C;
    case 741u: goto L_08ACBF1C;
    case 742u: goto L_08ACBF28;
    case 743u: goto L_08ACBF34;
    case 744u: goto L_08ACBF48;
    case 745u: goto L_08ACBF60;
    case 746u: goto L_08ACBFAC;
    case 747u: goto L_08ACBFB4;
    case 748u: goto L_08ACBFC0;
    case 749u: goto L_08ACBFD0;
    case 750u: goto L_08ACBFE4;
    case 751u: goto L_08ACBFF4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08AC8000:
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[12];
        goto L_08AC8024;
    }
    goto L_08AC8018;
L_08AC8018:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08AC8034;
      }
      goto L_08AC8024;
    }
L_08AC8024:
    ctx.gpr[2] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[2] = (ctx.gpr[4] + ctx.gpr[2]);
    goto L_08AC8034;
L_08AC8034:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC803C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(3316));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[16]);
    ctx.gpr[17] = (ctx.gpr[17] - 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[31]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7924));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[7] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(240));
    ctx.gpr[5] = (0u | 64u);
    ctx.gpr[6] = (0u | 48u);
    ctx.gpr[31] = (0x08AC8080u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-20048));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 341u, 0x08AF5A1Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC8080u) goto L_08AC8080;
    return;
L_08AC8080:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(3324));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3320), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3316), ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[4] - 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3328), ctx.gpr[4]);
    ctx.gpr[31] = (0x08AC809Cu);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3324), ctx.gpr[4]);
    ctx.pc = 0x08B0BB2Cu;
    return;
L_08AC809C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(42), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(41), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(43), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3312), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(60));
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    goto L_08AC80C8;
L_08AC80C8:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < 15 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08AC80C8;
      }
      goto L_08AC80E0;
    }
L_08AC80E0:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(228));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(240));
    goto L_08AC80F0;
L_08AC80F0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 64 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_08AC80F0;
      }
      goto L_08AC8118;
    }
L_08AC8118:
    ctx.gpr[31] = (0x08AC8120u);
    ctx.gpr[17] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 129u, 0x08A58A70u>(ctx, &aot_mem) && ctx.pc == 0x08AC8120u) goto L_08AC8120;
    return;
L_08AC8120:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC8170;
      }
      goto L_08AC8138;
    }
L_08AC8138:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    goto L_08AC813C;
L_08AC813C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(2047));
    ctx.gpr[7] = (ctx.gpr[7] >> 11u);
    ctx.gpr[7] = (ctx.gpr[8] + ctx.gpr[7]);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC8160;
      }
      goto L_08AC815C;
    }
L_08AC815C:
    ctx.gpr[17] = (ctx.gpr[7] | 0u);
    goto L_08AC8160;
L_08AC8160:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08AC813C;
      }
      goto L_08AC8170;
    }
L_08AC8170:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AC8180u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-15684));
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 418u, 0x08AC6F2Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC8180u) goto L_08AC8180;
    return;
L_08AC8180:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[6] = (ctx.gpr[17] << 3u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AC8198u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-15668));
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 806u, 0x08AEB698u>(ctx, &aot_mem) && ctx.pc == 0x08AC8198u) goto L_08AC8198;
    return;
L_08AC8198:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3332), 0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08AC81ACu);
    ctx.gpr[6] = (0u | 511u);
    ctx.pc = 0x08B0BD24u;
    return;
L_08AC81AC:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.gpr[5] = (0u | 512u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08AC81C8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-15636));
    ctx.pc = 0x08B0BB74u;
    return;
L_08AC81C8:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[31] = (0x08AC81E8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-15616));
    ctx.pc = 0x08B0BAD4u;
    return;
L_08AC81E8:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (2220u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    ctx.gpr[7] = (0u | 32768u);
    ctx.gpr[6] = (0u | 32u);
    ctx.gpr[8] = (0u | 16384u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-15600));
    ctx.gpr[31] = (0x08AC8210u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(28504));
    ctx.pc = 0x08B0BB64u;
    return;
L_08AC8210:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.gpr[31] = (0x08AC8220u);
    ctx.gpr[5] = (0u | 4u);
    ctx.pc = 0x08B0BBE4u;
    return;
L_08AC8220:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-30260)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-30264)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[16]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[31] = (0x08AC824Cu);
    ctx.gpr[5] = (0u | 4u);
    ctx.pc = 0x08B0BB1Cu;
    return;
L_08AC824C:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC8268:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[23]);
    ctx.gpr[23] = (ctx.gpr[4] + static_cast<std::uint32_t>(3324));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[21]);
    ctx.gpr[23] = (ctx.gpr[23] - 0u);
    ctx.gpr[21] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[31]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(3324)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[20] = (32768u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[30] = (0u | 0u);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08AC83CC;
      }
      goto L_08AC82F4;
    }
L_08AC82F4:
    ctx.gpr[22] = (2227u << 16u);
    goto L_08AC82F8;
L_08AC82F8:
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[5] >> 11u);
    ctx.gpr[18] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08AC831Cu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 636u, 0x08AC7E70u>(ctx, &aot_mem) && ctx.pc == 0x08AC831Cu) goto L_08AC831C;
    return;
L_08AC831C:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC8334;
      }
      goto L_08AC832C;
    }
L_08AC832C:
    ctx.gpr[30] = (ctx.gpr[16] | 0u);
    ctx.gpr[20] = (ctx.gpr[17] | 0u);
    goto L_08AC8334;
L_08AC8334:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
        goto L_08AC8348;
    }
    goto L_08AC8340;
L_08AC8340:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_08AC8394;
      }
      goto L_08AC8348;
    }
L_08AC8348:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(2047));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 11u));
    ctx.gpr[5] = (ctx.gpr[5] >> 21u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2047));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 11u));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08AC836Cu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 646u, 0x08AC7F74u>(ctx, &aot_mem) && ctx.pc == 0x08AC836Cu) goto L_08AC836C;
    return;
L_08AC836C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(27580)));
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[17]);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_08AC8394;
      }
      goto L_08AC838C;
    }
L_08AC838C:
    ctx.gpr[19] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    goto L_08AC8394;
L_08AC8394:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[23]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC82F8;
      }
      goto L_08AC83CC;
    }
L_08AC83CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[2] = (ctx.gpr[30] | 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
        goto L_08AC83DC;
    }
    goto L_08AC83DC;
L_08AC83DC:
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
L_08AC840C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AC8424u);
    ctx.gpr[6] = (0u | 0u);
    ctx.pc = 0x08B0BB6Cu;
    return;
L_08AC8424:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08AC8440;
      }
      goto L_08AC8430;
    }
L_08AC8430:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08AC8440u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-15584));
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 418u, 0x08AC6F2Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC8440u) goto L_08AC8440;
    return;
L_08AC8440:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC844C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AC8460u);
    ctx.gpr[5] = (0u | 1u);
    ctx.pc = 0x08B0BB54u;
    return;
L_08AC8460:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08AC847C;
      }
      goto L_08AC846C;
    }
L_08AC846C:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08AC847Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-15548));
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 418u, 0x08AC6F2Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC847Cu) goto L_08AC847C;
    return;
L_08AC847C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC8488:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-176));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[22]);
    ctx.gpr[22] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[31]);
    goto L_08AC84B4;
L_08AC84B4:
    ctx.gpr[16] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-30276)));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-129));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-30276), ctx.gpr[4]);
    ctx.gpr[31] = (0x08AC84D0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.pc = 0x08B0BA9Cu;
    return;
L_08AC84D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08AC84E8u);
    ctx.gpr[8] = (0u | 0u);
    ctx.pc = 0x08B0BB5Cu;
    return;
L_08AC84E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-30276)));
    ctx.gpr[4] = (ctx.gpr[4] | 128u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-30276), ctx.gpr[4]);
    ctx.gpr[31] = (0x08AC84FCu);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.pc = 0x08B0BA9Cu;
    return;
L_08AC84FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(3332)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC8524;
      }
      goto L_08AC8508;
    }
L_08AC8508:
    ctx.gpr[31] = (0x08AC8510u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    goto L_08AC840C;
L_08AC8510:
    ctx.gpr[31] = (0x08AC8518u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    goto L_08AC8268;
L_08AC8518:
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(3332), ctx.gpr[2]);
    ctx.gpr[31] = (0x08AC8524u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    goto L_08AC844C;
L_08AC8524:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(3332)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC8580;
      }
      goto L_08AC8530;
    }
L_08AC8530:
    ctx.gpr[31] = (0x08AC8538u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    goto L_08AC840C;
L_08AC8538:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(3324)));
    ctx.gpr[5] = (ctx.gpr[22] + static_cast<std::uint32_t>(3324));
    ctx.gpr[5] = (ctx.gpr[5] - 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC8564;
      }
      goto L_08AC8558;
    }
L_08AC8558:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x08AC8564u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    ctx.pc = 0x08B0BBACu;
    return;
L_08AC8564:
    ctx.gpr[31] = (0x08AC856Cu);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    goto L_08AC844C;
L_08AC856C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x08AC8578u);
    ctx.gpr[5] = (0u | 2u);
    ctx.pc = 0x08B0BBE4u;
    return;
L_08AC8578:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC8C54;
      }
      goto L_08AC8580;
    }
L_08AC8580:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(3332)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(3336)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AC85A0;
      }
      goto L_08AC8590;
    }
L_08AC8590:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08AC859Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-15512));
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 418u, 0x08AC6F2Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC859Cu) goto L_08AC859C;
    return;
L_08AC859C:
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(3336), 0u);
    goto L_08AC85A0;
L_08AC85A0:
    ctx.gpr[31] = (0x08AC85A8u);
    // nop
    ctx.pc = 0x08B0B7BCu;
    return;
L_08AC85A8:
    ctx.gpr[4] = (ctx.gpr[2] & 32u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC86F8;
      }
      goto L_08AC85B4;
    }
L_08AC85B4:
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(3332), 0u);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(41), static_cast<std::uint8_t>(0u));
    ctx.gpr[6] = (0u | 776u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-15472));
    ctx.gpr[31] = (0x08AC85D4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-30256));
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 418u, 0x08AC6F2Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC85D4u) goto L_08AC85D4;
    return;
L_08AC85D4:
    ctx.gpr[31] = (0x08AC85DCu);
    ctx.gpr[16] = (0u | 0u);
    ctx.pc = 0x08B0B7BCu;
    return;
L_08AC85DC:
    ctx.gpr[4] = (ctx.gpr[2] & 1u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[16] = (0u | 1u);
        goto L_08AC8614;
    }
    goto L_08AC85E8;
L_08AC85E8:
    ctx.gpr[31] = (0x08AC85F0u);
    // nop
    ctx.pc = 0x08B0B7BCu;
    return;
L_08AC85F0:
    ctx.gpr[4] = (ctx.gpr[2] & 32u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[16] = (0u | 1u);
        goto L_08AC8614;
    }
    goto L_08AC85FC;
L_08AC85FC:
    ctx.gpr[31] = (0x08AC8604u);
    // nop
    ctx.pc = 0x08B0B7BCu;
    return;
L_08AC8604:
    ctx.gpr[4] = (ctx.gpr[2] & 8u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC8614;
      }
      goto L_08AC8610;
    }
L_08AC8610:
    ctx.gpr[16] = (0u | 1u);
    goto L_08AC8614;
L_08AC8614:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[31] = (0x08AC8624u);
    ctx.gpr[5] = (0u | 2u);
    ctx.pc = 0x08B0BBE4u;
    return;
L_08AC8624:
    ctx.gpr[4] = (0u | 32u);
    ctx.gpr[31] = (0x08AC8630u);
    ctx.gpr[5] = (0u | 1000u);
    ctx.pc = 0x08B0B7B4u;
    return;
L_08AC8630:
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-30260)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-30264)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[8] = (ctx.gpr[5] ^ ctx.gpr[7]);
    ctx.gpr[8] = (ctx.gpr[8] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[8] & ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[9]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC866C;
      }
      goto L_08AC8664;
    }
L_08AC8664:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC86F0;
      }
      goto L_08AC866C;
    }
L_08AC866C:
    ctx.gpr[31] = (0x08AC8674u);
    // nop
    ctx.pc = 0x08B0B7BCu;
    return;
L_08AC8674:
    ctx.gpr[4] = (ctx.gpr[2] & 32u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC86F0;
      }
      goto L_08AC8680;
    }
L_08AC8680:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.gpr[31] = (0x08AC8690u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-15452));
    ctx.pc = 0x08B0BCE4u;
    return;
L_08AC8690:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC86E8;
      }
      goto L_08AC8698;
    }
L_08AC8698:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-30236)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-30240)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08AC86E8;
      }
      goto L_08AC86B4;
    }
L_08AC86B4:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08AC86E8;
      }
      goto L_08AC86BC;
    }
L_08AC86BC:
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(43), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(41), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[6] = (0u | 806u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-15400));
    ctx.gpr[31] = (0x08AC86E0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-30256));
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 418u, 0x08AC6F2Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC86E0u) goto L_08AC86E0;
    return;
L_08AC86E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC8C54;
      }
      goto L_08AC86E8;
    }
L_08AC86E8:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(43), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08AC86F0;
L_08AC86F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC85D4;
      }
      goto L_08AC86F8;
    }
L_08AC86F8:
    ctx.gpr[31] = (0x08AC8700u);
    // nop
    ctx.pc = 0x08B0BB44u;
    return;
L_08AC8700:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(3332)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-30228)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-30232)));
    ctx.gpr[31] = (0x08AC8724u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 360u, 0x08AF5BFCu>(ctx, &aot_mem) && ctx.pc == 0x08AC8724u) goto L_08AC8724;
    return;
L_08AC8724:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[16] = (ctx.gpr[2] + ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[16] < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[3]);
    ctx.gpr[17] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AC8754;
      }
      goto L_08AC874C;
    }
L_08AC874C:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AC87CC;
      }
      goto L_08AC8754;
    }
L_08AC8754:
    ctx.gpr[1] = (ctx.gpr[17] << 21u);
    ctx.gpr[4] = (ctx.gpr[16] >> 11u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 11u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] >> 21u);
    ctx.gpr[6] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[6] < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[1] = (ctx.gpr[5] << 21u);
    ctx.gpr[4] = (ctx.gpr[4] >> 11u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 11u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08AC879Cu);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 636u, 0x08AC7E70u>(ctx, &aot_mem) && ctx.pc == 0x08AC879Cu) goto L_08AC879C;
    return;
L_08AC879C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AC87B0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.pc = 0x08B0BD2Cu;
    return;
L_08AC87B0:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[19] = (ctx.gpr[3] | 0u);
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[21] = (ctx.gpr[17] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08AC88B4;
      }
      goto L_08AC87CC;
    }
L_08AC87CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(3332)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] & 2047u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (1u << 16u);
      if (branch_taken) {
          goto L_08AC87F4;
      }
      goto L_08AC87E0;
    }
L_08AC87E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(3332)));
    ctx.gpr[16] = (0u | 2048u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] & 2047u);
    ctx.gpr[16] = (ctx.gpr[16] - ctx.gpr[4]);
    goto L_08AC87F4;
L_08AC87F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(3332)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC8810;
      }
      goto L_08AC8808;
    }
L_08AC8808:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(3332)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    goto L_08AC8810;
L_08AC8810:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(32)));
    ctx.gpr[1] = (ctx.gpr[5] << 21u);
    ctx.gpr[6] = (ctx.gpr[4] >> 11u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 11u));
    ctx.gpr[6] = (ctx.gpr[1] | ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[7] >> 21u);
    ctx.gpr[8] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[9] = (ctx.gpr[8] < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[9] + ctx.gpr[5]);
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(2047));
    ctx.gpr[6] = (ctx.gpr[8] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 11u));
    ctx.gpr[1] = (ctx.gpr[7] << 21u);
    ctx.gpr[6] = (ctx.gpr[6] >> 11u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 11u));
    ctx.gpr[6] = (ctx.gpr[1] | ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] >> 21u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2047));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 11u));
    ctx.gpr[31] = (0x08AC8878u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 646u, 0x08AC7F74u>(ctx, &aot_mem) && ctx.pc == 0x08AC8878u) goto L_08AC8878;
    return;
L_08AC8878:
    ctx.gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 31u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(24)));
    ctx.gpr[20] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AC888Cu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-5));
    ctx.pc = 0x08B0BBACu;
    return;
L_08AC888C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(3332)));
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x08AC88A0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(16)));
    ctx.pc = 0x08B0BCB4u;
    return;
L_08AC88A0:
    ctx.gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 31u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AC88B4u);
    ctx.gpr[5] = (0u | 4u);
    ctx.pc = 0x08B0BBE4u;
    return;
L_08AC88B4:
    ctx.gpr[31] = (0x08AC88BCu);
    // nop
    ctx.pc = 0x08B0BB44u;
    return;
L_08AC88BC:
    ctx.gpr[4] = (ctx.gpr[2] - ctx.gpr[23]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x08AC88D0u);
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.pc = 0x08B0BAECu;
    return;
L_08AC88D0:
    ctx.gpr[31] = (0x08AC88D8u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    goto L_08AC840C;
L_08AC88D8:
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08AC88E8;
      }
      goto L_08AC88E0;
    }
L_08AC88E0:
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08AC8AA4;
      }
      goto L_08AC88E8;
    }
L_08AC88E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(3332)));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-30220)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-30224)));
    ctx.gpr[6] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-30212)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-30216)));
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AC8924;
      }
      goto L_08AC891C;
    }
L_08AC891C:
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AC89E8;
      }
      goto L_08AC8924;
    }
L_08AC8924:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-30204)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-30208)));
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AC8940;
      }
      goto L_08AC8938;
    }
L_08AC8938:
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AC89E8;
      }
      goto L_08AC8940;
    }
L_08AC8940:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-30196)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-30200)));
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AC895C;
      }
      goto L_08AC8954;
    }
L_08AC8954:
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AC89E8;
      }
      goto L_08AC895C;
    }
L_08AC895C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-30188)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-30192)));
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AC8978;
      }
      goto L_08AC8970;
    }
L_08AC8970:
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AC89E8;
      }
      goto L_08AC8978;
    }
L_08AC8978:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-30180)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-30184)));
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AC8994;
      }
      goto L_08AC898C;
    }
L_08AC898C:
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AC89E8;
      }
      goto L_08AC8994;
    }
L_08AC8994:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-30172)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-30176)));
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AC89B0;
      }
      goto L_08AC89A8;
    }
L_08AC89A8:
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AC89E8;
      }
      goto L_08AC89B0;
    }
L_08AC89B0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-30164)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-30168)));
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AC89CC;
      }
      goto L_08AC89C4;
    }
L_08AC89C4:
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AC89E8;
      }
      goto L_08AC89CC;
    }
L_08AC89CC:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-30156)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-30160)));
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AC8A34;
      }
      goto L_08AC89E0;
    }
L_08AC89E0:
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AC8A34;
      }
      goto L_08AC89E8;
    }
L_08AC89E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(3332)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(3332)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC8A2C;
      }
      goto L_08AC8A14;
    }
L_08AC8A14:
    ctx.gpr[31] = (0x08AC8A1Cu);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    goto L_08AC844C;
L_08AC8A1C:
    jump_target = ctx.gpr[16];
    ctx.gpr[31] = (0x08AC8A24u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(3332)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AC8A24u) goto L_08AC8A24;
    return;
L_08AC8A24:
    ctx.gpr[31] = (0x08AC8A2Cu);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    goto L_08AC840C;
L_08AC8A2C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC8A9C;
      }
      goto L_08AC8A34;
    }
L_08AC8A34:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-30276)));
    ctx.gpr[5] = (ctx.gpr[5] | 64u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-30276), ctx.gpr[5]);
    ctx.gpr[31] = (0x08AC8A4Cu);
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
    ctx.pc = 0x08B0BA9Cu;
    return;
L_08AC8A4C:
    ctx.gpr[31] = (0x08AC8A54u);
    ctx.gpr[4] = (0u | 5000u);
    ctx.pc = 0x08B0BBF4u;
    return;
L_08AC8A54:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08AC8A6Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-15376));
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 418u, 0x08AC6F2Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC8A6Cu) goto L_08AC8A6C;
    return;
L_08AC8A6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(3332)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC8A8C;
      }
      goto L_08AC8A80;
    }
L_08AC8A80:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(42), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08AC8A9C;
      }
      goto L_08AC8A8C;
    }
L_08AC8A8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(3332)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
    goto L_08AC8A9C;
L_08AC8A9C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(3332), 0u);
      if (branch_taken) {
          goto L_08AC8C14;
      }
      goto L_08AC8AA4;
    }
L_08AC8AA4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC8AC0;
      }
      goto L_08AC8AB0;
    }
L_08AC8AB0:
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
      if (branch_taken) {
          goto L_08AC8C14;
      }
      goto L_08AC8AC0;
    }
L_08AC8AC0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(3332)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC8AD8;
      }
      goto L_08AC8AD4;
    }
L_08AC8AD4:
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(42), static_cast<std::uint8_t>(0u));
    goto L_08AC8AD8;
L_08AC8AD8:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-30276)));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-65));
    ctx.gpr[4] = (ctx.gpr[6] & ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-30276), ctx.gpr[4]);
    ctx.gpr[31] = (0x08AC8AF4u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.pc = 0x08B0BA9Cu;
    return;
L_08AC8AF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(3332)));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(3332)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(3332)));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[18]);
    ctx.gpr[8] = (ctx.gpr[5] < ctx.gpr[18] ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[8] + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[19]);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(3332)));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[18]);
    ctx.gpr[8] = (ctx.gpr[5] < ctx.gpr[18] ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[8] + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[19]);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(3332)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 31u));
    ctx.gpr[5] = (ctx.gpr[6] < ctx.gpr[18] ? 1u : 0u);
    ctx.gpr[8] = (ctx.gpr[7] - ctx.gpr[19]);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[18]);
    ctx.gpr[7] = (ctx.gpr[8] - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(32)));
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[7] = (ctx.gpr[6] < ctx.gpr[18] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(3332)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    // nop
      if (branch_taken) {
          goto L_08AC8C10;
      }
      goto L_08AC8BB8;
    }
L_08AC8BB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(3332)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(3332)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(3332)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC8C10;
      }
      goto L_08AC8BF0;
    }
L_08AC8BF0:
    ctx.gpr[31] = (0x08AC8BF8u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    goto L_08AC844C;
L_08AC8BF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(3332)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08AC8C08u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AC8C08u) goto L_08AC8C08;
    return;
L_08AC8C08:
    ctx.gpr[31] = (0x08AC8C10u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    goto L_08AC840C;
L_08AC8C10:
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(3332), 0u);
    goto L_08AC8C14;
L_08AC8C14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(3324)));
    ctx.gpr[5] = (ctx.gpr[22] + static_cast<std::uint32_t>(3324));
    ctx.gpr[5] = (ctx.gpr[5] - 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC8C40;
      }
      goto L_08AC8C34;
    }
L_08AC8C34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x08AC8C40u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    ctx.pc = 0x08B0BBACu;
    return;
L_08AC8C40:
    ctx.gpr[31] = (0x08AC8C48u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    goto L_08AC844C;
L_08AC8C48:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x08AC8C54u);
    ctx.gpr[5] = (0u | 2u);
    ctx.pc = 0x08B0BBE4u;
    return;
L_08AC8C54:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC84B4;
      }
      goto L_08AC8C5C;
    }
L_08AC8C5C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC8C88:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3)));
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] | 1u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC8C9C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AC8CBCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-30108)));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 654u, 0x08AA3104u>(ctx, &aot_mem) && ctx.pc == 0x08AC8CBCu) goto L_08AC8CBC;
    return;
L_08AC8CBC:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[18] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[18]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-29560));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AC8CF0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 295u, 0x08925E38u>(ctx, &aot_mem) && ctx.pc == 0x08AC8CF0u) goto L_08AC8CF0;
    return;
L_08AC8CF0:
    ctx.gpr[4] = (0u | 5u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AC8D08u);
    ctx.gpr[5] = (0u | 0u);
    goto L_08AC8ED4;
L_08AC8D08:
    ctx.gpr[4] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28412));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(32), 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(28), 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24), 0u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(-30108));
    ctx.gpr[31] = (0x08AC8D30u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 314u, 0x08A35F44u>(ctx, &aot_mem) && ctx.pc == 0x08AC8D30u) goto L_08AC8D30;
    return;
L_08AC8D30:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
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
L_08AC8D4C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AC8DB0;
      }
      goto L_08AC8D6C;
    }
L_08AC8D6C:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC8D80;
      }
      goto L_08AC8D74;
    }
L_08AC8D74:
    ctx.gpr[31] = (0x08AC8D7Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 330u, 0x089C5590u>(ctx, &aot_mem) && ctx.pc == 0x08AC8D7Cu) goto L_08AC8D7C;
    return;
L_08AC8D7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    goto L_08AC8D80;
L_08AC8D80:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC8DAC;
      }
      goto L_08AC8D88;
    }
L_08AC8D88:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8))))));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (ctx.gpr[5] << 16u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 16u));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) > 0;
    // nop
      if (branch_taken) {
          goto L_08AC8DAC;
      }
      goto L_08AC8DA4;
    }
L_08AC8DA4:
    ctx.gpr[31] = (0x08AC8DACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 317u, 0x089C5498u>(ctx, &aot_mem) && ctx.pc == 0x08AC8DACu) goto L_08AC8DAC;
    return;
L_08AC8DAC:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    goto L_08AC8DB0;
L_08AC8DB0:
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
L_08AC8DC8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AC8DE0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_08AC8C9C;
L_08AC8DE0:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    if (ctx.gpr[17] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_08AC8DF4;
    }
    goto L_08AC8DEC;
L_08AC8DEC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AC8E64;
      }
      goto L_08AC8DF4;
    }
L_08AC8DF4:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[31] = (0x08AC8E28u);
    ctx.gpr[5] = (0u | 0u);
    goto L_08AC8ED4;
L_08AC8E28:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AC8E38u);
    ctx.gpr[6] = (0u | 0u);
    goto L_08AC8D4C;
L_08AC8E38:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AC8E44u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 91u, 0x089C8788u>(ctx, &aot_mem) && ctx.pc == 0x08AC8E44u) goto L_08AC8E44;
    return;
L_08AC8E44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AC8E60u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-30108));
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 328u, 0x08A36040u>(ctx, &aot_mem) && ctx.pc == 0x08AC8E60u) goto L_08AC8E60;
    return;
L_08AC8E60:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    goto L_08AC8E64;
L_08AC8E64:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC8E78:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AC8E90u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 95u, 0x089C87E0u>(ctx, &aot_mem) && ctx.pc == 0x08AC8E90u) goto L_08AC8E90;
    return;
L_08AC8E90:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AC8EA0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-30108));
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 324u, 0x08A35FE0u>(ctx, &aot_mem) && ctx.pc == 0x08AC8EA0u) goto L_08AC8EA0;
    return;
L_08AC8EA0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08AC8EB0u);
    ctx.gpr[6] = (0u | 0u);
    goto L_08AC8D4C;
L_08AC8EB0:
    ctx.gpr[31] = (0x08AC8EB8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 174u, 0x08A5D3D4u>(ctx, &aot_mem) && ctx.pc == 0x08AC8EB8u) goto L_08AC8EB8;
    return;
L_08AC8EB8:
    ctx.gpr[31] = (0x08AC8EC0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 658u, 0x08AA314Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC8EC0u) goto L_08AC8EC0;
    return;
L_08AC8EC0:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC8ED4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AC8EE8u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 169u, 0x08A5D36Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC8EE8u) goto L_08AC8EE8;
    return;
L_08AC8EE8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3)));
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC8F08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-28264)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(15));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[2] = (ctx.gpr[4] + ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC8F2C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[9] = (ctx.gpr[8] | 0u);
    ctx.gpr[8] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AC8F54u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-30108));
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 284u, 0x08A35D30u>(ctx, &aot_mem) && ctx.pc == 0x08AC8F54u) goto L_08AC8F54;
    return;
L_08AC8F54:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC8F60:
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
L_08AC9004:
    { const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<15u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<24u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<25u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<26u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<27u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<8u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<27u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<15u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<3u, 3u>(vfpu_d); }
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 56u, 3u);
      ctx.read_vfpu_vector_ct<4u, 3u>(vfpu_target_raw);
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
      ctx.write_vfpu_vector_with_destination_prefix(vfpu_result, 5u, vfpu_side); }
    ctx.execute_vfpu_vscl_ct<0u, 24u, 8u, 3u>();
    ctx.execute_vfpu_vscl_ct<1u, 25u, 40u, 3u>();
    ctx.execute_vfpu_vscl_ct<2u, 26u, 72u, 3u>();
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<3u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<5u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<3u, 3u>(vfpu_d); }
    ctx.gpr[12] = (ctx.vfpu_scalar_bits_ct<0u>());
    ctx.gpr[13] = (ctx.vfpu_scalar_bits_ct<32u>());
    ctx.gpr[14] = (ctx.vfpu_scalar_bits_ct<64u>());
    ctx.gpr[12] = (ctx.gpr[12] >> 8u);
    ctx.gpr[13] = (ctx.gpr[13] >> 8u);
    ctx.gpr[14] = (ctx.gpr[14] >> 8u);
    ctx.gpr[12] = ((ctx.gpr[12] & ~0xFF000000u) | ((ctx.gpr[8] & 0x000000FFu) << 24u));
    ctx.gpr[13] = ((ctx.gpr[13] & ~0xFF000000u) | ((ctx.gpr[8] & 0x000000FFu) << 24u));
    ctx.gpr[14] = ((ctx.gpr[14] & ~0xFF000000u) | ((ctx.gpr[8] & 0x000000FFu) << 24u));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[12]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[13]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[14]);
    ctx.gpr[12] = (ctx.vfpu_scalar_bits_ct<1u>());
    ctx.gpr[13] = (ctx.vfpu_scalar_bits_ct<33u>());
    ctx.gpr[14] = (ctx.vfpu_scalar_bits_ct<65u>());
    ctx.gpr[12] = (ctx.gpr[12] >> 8u);
    ctx.gpr[13] = (ctx.gpr[13] >> 8u);
    ctx.gpr[14] = (ctx.gpr[14] >> 8u);
    ctx.gpr[12] = ((ctx.gpr[12] & ~0xFF000000u) | ((ctx.gpr[8] & 0x000000FFu) << 24u));
    ctx.gpr[13] = ((ctx.gpr[13] & ~0xFF000000u) | ((ctx.gpr[8] & 0x000000FFu) << 24u));
    ctx.gpr[14] = ((ctx.gpr[14] & ~0xFF000000u) | ((ctx.gpr[8] & 0x000000FFu) << 24u));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[12]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[13]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[14]);
    ctx.gpr[12] = (ctx.vfpu_scalar_bits_ct<2u>());
    ctx.gpr[13] = (ctx.vfpu_scalar_bits_ct<34u>());
    ctx.gpr[14] = (ctx.vfpu_scalar_bits_ct<66u>());
    ctx.gpr[12] = (ctx.gpr[12] >> 8u);
    ctx.gpr[13] = (ctx.gpr[13] >> 8u);
    ctx.gpr[14] = (ctx.gpr[14] >> 8u);
    ctx.gpr[12] = ((ctx.gpr[12] & ~0xFF000000u) | ((ctx.gpr[8] & 0x000000FFu) << 24u));
    ctx.gpr[13] = ((ctx.gpr[13] & ~0xFF000000u) | ((ctx.gpr[8] & 0x000000FFu) << 24u));
    ctx.gpr[14] = ((ctx.gpr[14] & ~0xFF000000u) | ((ctx.gpr[8] & 0x000000FFu) << 24u));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[12]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[13]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[14]);
    ctx.gpr[12] = (ctx.vfpu_scalar_bits_ct<3u>());
    ctx.gpr[13] = (ctx.vfpu_scalar_bits_ct<35u>());
    ctx.gpr[14] = (ctx.vfpu_scalar_bits_ct<67u>());
    ctx.gpr[12] = (ctx.gpr[12] >> 8u);
    ctx.gpr[13] = (ctx.gpr[13] >> 8u);
    ctx.gpr[14] = (ctx.gpr[14] >> 8u);
    ctx.gpr[12] = ((ctx.gpr[12] & ~0xFF000000u) | ((ctx.gpr[8] & 0x000000FFu) << 24u));
    ctx.gpr[13] = ((ctx.gpr[13] & ~0xFF000000u) | ((ctx.gpr[8] & 0x000000FFu) << 24u));
    ctx.gpr[14] = ((ctx.gpr[14] & ~0xFF000000u) | ((ctx.gpr[8] & 0x000000FFu) << 24u));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), ctx.gpr[12]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), ctx.gpr[13]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), ctx.gpr[14]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC9104:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-272));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(220), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(232), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(236), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(248), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(252), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), ctx.gpr[31]);
    ctx.gpr[8] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[6] = (2232u << 16u);
    ctx.gpr[7] = (2230u << 16u);
    ctx.gpr[16] = (2233u << 16u);
    ctx.gpr[19] = (2269u << 16u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-2528));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[8]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(20)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(16)));
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[10]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC91A0;
      }
      goto L_08AC9188;
    }
L_08AC9188:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(20)));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(16)));
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[10]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC9188;
      }
      goto L_08AC91A0;
    }
L_08AC91A0:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-13360)));
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[8] = (0u | 1u);
      if (branch_taken) {
          goto L_08AC91C8;
      }
      goto L_08AC91AC;
    }
L_08AC91AC:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-13360), ctx.gpr[8]);
    ctx.gpr[4] = (2232u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-13344), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13344));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08AC91C8;
L_08AC91C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-13356)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08AC91F8;
      }
      goto L_08AC91D4;
    }
L_08AC91D4:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-13356), ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (2232u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-13328), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13328));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (49024u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08AC91F8;
L_08AC91F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-13312)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-7820)));
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
        goto L_08AC926C;
    }
    goto L_08AC9208;
L_08AC9208:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-7820)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-13312), ctx.gpr[4]);
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13328));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    ctx.execute_vfpu_cross_quat(0u, 1u, 2u, 3u);
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
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13344));
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
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    goto L_08AC926C;
L_08AC926C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-28264)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(15));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[18] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[31] = (0x08AC9294u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 131u, 0x0890CB34u>(ctx, &aot_mem) && ctx.pc == 0x08AC9294u) goto L_08AC9294;
    return;
L_08AC9294:
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AC92A0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 303u, 0x08925E94u>(ctx, &aot_mem) && ctx.pc == 0x08AC92A0u) goto L_08AC92A0;
    return;
L_08AC92A0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[17] = (ctx.gpr[18] + static_cast<std::uint32_t>(32));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), ctx.gpr[18]);
      if (branch_taken) {
          goto L_08AC92B8;
      }
      goto L_08AC92B0;
    }
L_08AC92B0:
    ctx.gpr[31] = (0x08AC92B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 620u, 0x08AB374Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC92B8u) goto L_08AC92B8;
    return;
L_08AC92B8:
    ctx.gpr[30] = (0u | 0u);
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC9468;
      }
      goto L_08AC92C4;
    }
L_08AC92C4:
    ctx.gpr[31] = (0x08AC92CCu);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 183u, 0x0890CFF0u>(ctx, &aot_mem) && ctx.pc == 0x08AC92CCu) goto L_08AC92CC;
    return;
L_08AC92CC:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[31] = (0x08AC92DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 186u, 0x0890D018u>(ctx, &aot_mem) && ctx.pc == 0x08AC92DCu) goto L_08AC92DC;
    return;
L_08AC92DC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), ctx.gpr[18]);
        goto L_08AC92FC;
    }
    goto L_08AC92EC;
L_08AC92EC:
    ctx.gpr[31] = (0x08AC92F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 173u, 0x0890CF68u>(ctx, &aot_mem) && ctx.pc == 0x08AC92F4u) goto L_08AC92F4;
    return;
L_08AC92F4:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), ctx.gpr[18]);
    goto L_08AC92FC;
L_08AC92FC:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC9414;
      }
      goto L_08AC9304;
    }
L_08AC9304:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), ctx.gpr[17]);
      if (branch_taken) {
          goto L_08AC9414;
      }
      goto L_08AC9314;
    }
L_08AC9314:
    ctx.gpr[4] = (14848u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4912)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-4912), ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(-4912));
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-30080));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AC9344u);
    ctx.gpr[5] = (0u | 59u);
    goto L_08AC8F60;
L_08AC9344:
    ctx.gpr[31] = (0x08AC934Cu);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 132u, 0x0890CB48u>(ctx, &aot_mem) && ctx.pc == 0x08AC934Cu) goto L_08AC934C;
    return;
L_08AC934C:
    ctx.gpr[4] = (ctx.gpr[2] << 4u);
    ctx.gpr[5] = (ctx.gpr[2] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[30] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-4));
    ctx.gpr[30] = (ctx.gpr[30] & ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), ctx.gpr[30]);
    ctx.gpr[17] = (ctx.gpr[30] | 0u);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[22] = (2816u << 16u);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[18] + ctx.gpr[4]);
    goto L_08AC9394;
L_08AC9394:
    ctx.gpr[31] = (0x08AC939Cu);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 132u, 0x0890CB48u>(ctx, &aot_mem) && ctx.pc == 0x08AC939Cu) goto L_08AC939C;
    return;
L_08AC939C:
    ctx.gpr[4] = (ctx.gpr[20] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC940C;
      }
      goto L_08AC93A8;
    }
L_08AC93A8:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AC93B8u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 504u, 0x08A0649Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC93B8u) goto L_08AC93B8;
    return;
L_08AC93B8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08AC93D0u);
    ctx.gpr[8] = (0u | 43u);
    goto L_08AC9004;
L_08AC93D0:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), ctx.gpr[22]);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(52));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC93FC;
      }
      goto L_08AC93E8;
    }
L_08AC93E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC93FC;
      }
      goto L_08AC93F4;
    }
L_08AC93F4:
    ctx.gpr[31] = (0x08AC93FCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x08AC93FCu) goto L_08AC93FC;
    return;
L_08AC93FC:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(64));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          goto L_08AC9394;
      }
      goto L_08AC940C;
    }
L_08AC940C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC9460;
      }
      goto L_08AC9414;
    }
L_08AC9414:
    ctx.gpr[4] = (14848u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4912)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-4912), ctx.gpr[18]);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x08AC943Cu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 213u, 0x08A5D6F0u>(ctx, &aot_mem) && ctx.pc == 0x08AC943Cu) goto L_08AC943C;
    return;
L_08AC943C:
    ctx.gpr[5] = (ctx.gpr[20] + static_cast<std::uint32_t>(80));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08AC9454u);
    ctx.gpr[8] = (0u | 59u);
    goto L_08AC9004;
L_08AC9454:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-4912), ctx.gpr[4]);
    goto L_08AC9460;
L_08AC9460:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
      if (branch_taken) {
          goto L_08AC94B8;
      }
      goto L_08AC9468;
    }
L_08AC9468:
    ctx.gpr[4] = (14848u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4912)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-4912), ctx.gpr[18]);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x08AC9490u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 213u, 0x08A5D6F0u>(ctx, &aot_mem) && ctx.pc == 0x08AC9490u) goto L_08AC9490;
    return;
L_08AC9490:
    ctx.gpr[5] = (ctx.gpr[20] + static_cast<std::uint32_t>(80));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08AC94A8u);
    ctx.gpr[8] = (0u | 59u);
    goto L_08AC9004;
L_08AC94A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-4912), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    goto L_08AC94B8;
L_08AC94B8:
    ctx.gpr[31] = (0x08AC94C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0050_entry, 50u, 526u, 0x088CFD64u>(ctx, &aot_mem) && ctx.pc == 0x08AC94C0u) goto L_08AC94C0;
    return;
L_08AC94C0:
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(196), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08AC9888;
      }
      goto L_08AC94E0;
    }
L_08AC94E0:
    ctx.gpr[23] = (10752u << 16u);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.gpr[19] = (256u << 16u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-1));
    ctx.gpr[22] = (2560u << 16u);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(72));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(-4912));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[4]);
    goto L_08AC9500;
L_08AC9500:
    ctx.gpr[21] = (ctx.gpr[20] | 0u);
    { const bool branch_taken = ctx.gpr[30] == 0u;
    ctx.gpr[4] = (15u << 16u);
      if (branch_taken) {
          goto L_08AC95A0;
      }
      goto L_08AC950C;
    }
L_08AC950C:
    ctx.gpr[5] = (ctx.gpr[30] >> 8u);
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.gpr[6] = (4096u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4912)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-4912), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[2] = (0u | 0u);
    goto L_08AC9540;
L_08AC9540:
    ctx.gpr[5] = (ctx.gpr[20] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(40)));
    ctx.gpr[6] = (ctx.gpr[2] | ctx.gpr[23]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4912)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-4912), ctx.gpr[6]);
    ctx.gpr[7] = (ctx.gpr[5] << 4u);
    ctx.gpr[7] = (ctx.gpr[7] - ctx.gpr[5]);
    ctx.gpr[7] = (ctx.gpr[7] - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[7] - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[30] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[19]);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-4912), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(8) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08AC9540;
      }
      goto L_08AC95A0;
    }
L_08AC95A0:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(6)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), ctx.gpr[19]);
        goto L_08AC95D0;
    }
    goto L_08AC95C8;
L_08AC95C8:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), ctx.gpr[19]);
    goto L_08AC95D0;
L_08AC95D0:
    ctx.gpr[19] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AC95DCu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 510u, 0x08AD665Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC95DCu) goto L_08AC95DC;
    return;
L_08AC95DC:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08AC95E8u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 522u, 0x08AD6774u>(ctx, &aot_mem) && ctx.pc == 0x08AC95E8u) goto L_08AC95E8;
    return;
L_08AC95E8:
    ctx.gpr[5] = (ctx.gpr[2] & 2u);
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
      if (branch_taken) {
          goto L_08AC9620;
      }
      goto L_08AC95F8;
    }
L_08AC95F8:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-30011)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (21760u << 16u);
      if (branch_taken) {
          goto L_08AC9624;
      }
      goto L_08AC9608;
    }
L_08AC9608:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-30010)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(196), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08AC9620;
      }
      goto L_08AC9618;
    }
L_08AC9618:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
      if (branch_taken) {
          goto L_08AC986C;
      }
      goto L_08AC9620;
    }
L_08AC9620:
    ctx.gpr[5] = (21760u << 16u);
    goto L_08AC9624;
L_08AC9624:
    ctx.gpr[6] = (ctx.gpr[17] & ctx.gpr[19]);
    ctx.gpr[5] = (ctx.gpr[6] | ctx.gpr[5]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4912)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (22528u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-4912), ctx.gpr[5]);
    ctx.gpr[8] = (ctx.gpr[17] >> 24u);
    ctx.gpr[7] = (ctx.gpr[8] | ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[7] = (22016u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-4912), ctx.gpr[5]);
    ctx.gpr[7] = (ctx.gpr[6] | ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[7] = (22272u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-4912), ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-4912), ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC9738;
      }
      goto L_08AC9694;
    }
L_08AC9694:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[4] = (ctx.gpr[4] << (ctx.gpr[5] & 31u));
    ctx.gpr[5] = (2230u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7048)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (53248u << 16u);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] >> 8u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4912)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-4912), ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] >> 8u);
    ctx.gpr[6] = (18432u << 16u);
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[7] = (ctx.gpr[7] >> 8u);
    ctx.gpr[6] = (ctx.gpr[7] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[6] = (18688u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-4912), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-4912), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AC9730u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 420u, 0x0894E690u>(ctx, &aot_mem) && ctx.pc == 0x08AC9730u) goto L_08AC9730;
    return;
L_08AC9730:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
      if (branch_taken) {
          goto L_08AC9748;
      }
      goto L_08AC9738;
    }
L_08AC9738:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AC9744u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 420u, 0x0894E690u>(ctx, &aot_mem) && ctx.pc == 0x08AC9744u) goto L_08AC9744;
    return;
L_08AC9744:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    goto L_08AC9748;
L_08AC9748:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(60)));
    ctx.gpr[4] = (ctx.gpr[9] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[8] = (aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(2));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(64)));
    ctx.gpr[7] = (ctx.gpr[9] + ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] & 6144u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (4608u << 16u);
      if (branch_taken) {
          goto L_08AC978C;
      }
      goto L_08AC977C;
    }
L_08AC977C:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[5] = (4608u << 16u);
    goto L_08AC978C;
L_08AC978C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[6] | ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4912)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-4912), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08AC97F8;
      }
      goto L_08AC97AC;
    }
L_08AC97AC:
    ctx.gpr[5] = (15u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] >> 8u);
    ctx.gpr[5] = (ctx.gpr[6] & ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.gpr[9] = (4096u << 16u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[9]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4912)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (512u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-4912), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-4912), ctx.gpr[4]);
    goto L_08AC97F8;
L_08AC97F8:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[4] = (1028u << 16u);
      if (branch_taken) {
          goto L_08AC9850;
      }
      goto L_08AC9800;
    }
L_08AC9800:
    ctx.gpr[4] = (15u << 16u);
    ctx.gpr[5] = (ctx.gpr[7] >> 8u);
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.gpr[6] = (4096u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4912)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (256u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-4912), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[7] & ctx.gpr[19]);
    ctx.gpr[5] = (ctx.gpr[6] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-4912), ctx.gpr[4]);
    ctx.gpr[4] = (1028u << 16u);
    goto L_08AC9850;
L_08AC9850:
    ctx.gpr[4] = (ctx.gpr[8] | ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4912)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-4912), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    goto L_08AC986C;
L_08AC986C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_08AC9500;
      }
      goto L_08AC9888;
    }
L_08AC9888:
    ctx.gpr[31] = (0x08AC9890u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0050_entry, 50u, 484u, 0x088CF9ACu>(ctx, &aot_mem) && ctx.pc == 0x08AC9890u) goto L_08AC9890;
    return;
L_08AC9890:
    ctx.gpr[4] = (18432u << 16u);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[5] >> 8u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4912)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-4912), ctx.gpr[4]);
    ctx.gpr[5] = (18688u << 16u);
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[6] = (ctx.gpr[6] >> 8u);
    ctx.gpr[5] = (ctx.gpr[6] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-4912), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC9FA0;
      }
      goto L_08AC98E0;
    }
L_08AC98E0:
    ctx.gpr[4] = (0u | 14u);
    ctx.gpr[31] = (0x08AC98ECu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 567u, 0x088B78B0u>(ctx, &aot_mem) && ctx.pc == 0x08AC98ECu) goto L_08AC98EC;
    return;
L_08AC98EC:
    ctx.gpr[17] = (0u < ctx.gpr[2] ? 1u : 0u);
    ctx.gpr[4] = (8704u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4912)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-4912), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 14u);
    ctx.gpr[31] = (0x08AC9914u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x08AC9914u) goto L_08AC9914;
    return;
L_08AC9914:
    ctx.gpr[4] = (22016u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4912)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-4912), ctx.gpr[4]);
    ctx.gpr[5] = (22528u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(255));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-4912), ctx.gpr[4]);
    ctx.gpr[5] = (22272u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-4912), ctx.gpr[4]);
    ctx.gpr[5] = (22528u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-4912), ctx.gpr[4]);
    ctx.gpr[5] = (24320u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-4912), ctx.gpr[4]);
    ctx.gpr[5] = (2232u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-13344)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[6] >> 8u);
    ctx.gpr[7] = (25344u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-4912), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-13344));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[6] >> 8u);
    ctx.gpr[7] = (25600u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-4912), ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (ctx.gpr[5] >> 8u);
    ctx.gpr[6] = (25856u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-4912), ctx.gpr[4]);
    ctx.gpr[5] = (37120u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-4912), ctx.gpr[4]);
    ctx.gpr[5] = (6144u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-4912), ctx.gpr[4]);
    ctx.gpr[5] = (24576u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-4912), ctx.gpr[4]);
    ctx.gpr[5] = (2232u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-13328)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[6] >> 8u);
    ctx.gpr[7] = (26112u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-4912), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-13328));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[6] >> 8u);
    ctx.gpr[7] = (26368u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-4912), ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (ctx.gpr[5] >> 8u);
    ctx.gpr[6] = (26624u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-4912), ctx.gpr[4]);
    ctx.gpr[5] = (37888u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-4912), ctx.gpr[4]);
    ctx.gpr[5] = (6400u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-4912), ctx.gpr[4]);
    ctx.gpr[5] = (49152u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-4912), ctx.gpr[4]);
    ctx.gpr[5] = (49408u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(256));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-4912), ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-30012)));
    ctx.gpr[4] = (2230u << 16u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(197), static_cast<std::uint8_t>(ctx.gpr[17]));
      if (branch_taken) {
          goto L_08AC9B44;
      }
      goto L_08AC9B2C;
    }
L_08AC9B2C:
    ctx.gpr[5] = (8960u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4912)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-4912), ctx.gpr[5]);
    goto L_08AC9B44;
L_08AC9B44:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-30016)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC9C20;
      }
      goto L_08AC9B50;
    }
L_08AC9B50:
    ctx.gpr[5] = (7680u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4912)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-4912), ctx.gpr[5]);
    ctx.gpr[6] = (49664u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-4912), ctx.gpr[5]);
    ctx.gpr[6] = (49920u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-4912), ctx.gpr[5]);
    ctx.gpr[6] = (51968u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-4912), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-30016)));
    ctx.gpr[7] = (ctx.gpr[4] >> 8u);
    ctx.gpr[8] = (256u << 16u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[8]);
    ctx.gpr[8] = (40960u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-4912), ctx.gpr[4]);
    ctx.gpr[5] = (255u << 16u);
    ctx.gpr[5] = (ctx.gpr[7] & ctx.gpr[5]);
    ctx.gpr[7] = (43008u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(64));
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-4912), ctx.gpr[4]);
    ctx.gpr[5] = (47104u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1542));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-4912), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-4912), ctx.gpr[4]);
    goto L_08AC9C20;
L_08AC9C20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[21] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC9EE0;
      }
      goto L_08AC9C38;
    }
L_08AC9C38:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(72));
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[22] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (17279u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[22] = (1u << 16u);
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(257));
    ctx.gpr[19] = (256u << 16u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-1));
    ctx.gpr[30] = (15u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(-4912));
    ctx.gpr[23] = (4096u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[4]);
    goto L_08AC9C74;
L_08AC9C74:
    ctx.gpr[18] = (ctx.gpr[20] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.gpr[17] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(6)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[17] = (ctx.gpr[17] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08AC9C98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 522u, 0x08AD6774u>(ctx, &aot_mem) && ctx.pc == 0x08AC9C98u) goto L_08AC9C98;
    return;
L_08AC9C98:
    ctx.gpr[4] = (ctx.gpr[2] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC9EC8;
      }
      goto L_08AC9CA4;
    }
L_08AC9CA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-30016)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC9CEC;
      }
      goto L_08AC9CC4;
    }
L_08AC9CC4:
    ctx.gpr[31] = (0x08AC9CCCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 534u, 0x08AD6878u>(ctx, &aot_mem) && ctx.pc == 0x08AC9CCCu) goto L_08AC9CCC;
    return;
L_08AC9CCC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC9CE0;
      }
      goto L_08AC9CD8;
    }
L_08AC9CD8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC9EC8;
      }
      goto L_08AC9CE0;
    }
L_08AC9CE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08AC9CECu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 420u, 0x0894E690u>(ctx, &aot_mem) && ctx.pc == 0x08AC9CECu) goto L_08AC9CEC;
    return;
L_08AC9CEC:
    ctx.gpr[31] = (0x08AC9CF4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 533u, 0x08AD6860u>(ctx, &aot_mem) && ctx.pc == 0x08AC9CF4u) goto L_08AC9CF4;
    return;
L_08AC9CF4:
    ctx.gpr[4] = (2230u << 16u);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7764)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[3] = (0u | 255u);
      if (branch_taken) {
          goto L_08AC9D30;
      }
      goto L_08AC9D1C;
    }
L_08AC9D1C:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[20]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
        goto L_08AC9D30;
    }
    goto L_08AC9D30;
L_08AC9D30:
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-30010)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC9D50;
      }
      goto L_08AC9D4C;
    }
L_08AC9D4C:
    ctx.gpr[4] = (ctx.gpr[3] | 0u);
    goto L_08AC9D50;
L_08AC9D50:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[22])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[4] = (ctx.gpr[3] - ctx.gpr[4]);
    // nop
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[22])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[6] = (57088u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(170));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4912)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (57344u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-4912), ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[19]);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (57600u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-4912), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-4912), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(60)));
    ctx.gpr[4] = (ctx.gpr[11] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[10] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(2));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(64)));
    ctx.gpr[9] = (ctx.gpr[11] + ctx.gpr[9]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] & 6144u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (4608u << 16u);
      if (branch_taken) {
          goto L_08AC9E04;
      }
      goto L_08AC9DF4;
    }
L_08AC9DF4:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[5]);
    ctx.gpr[5] = (4608u << 16u);
    goto L_08AC9E04;
L_08AC9E04:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[6] | ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4912)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-4912), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08AC9E64;
      }
      goto L_08AC9E24;
    }
L_08AC9E24:
    ctx.gpr[5] = (ctx.gpr[4] >> 8u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[23]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4912)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (512u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-4912), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-4912), ctx.gpr[4]);
    goto L_08AC9E64;
L_08AC9E64:
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[4] = (1028u << 16u);
      if (branch_taken) {
          goto L_08AC9EB0;
      }
      goto L_08AC9E6C;
    }
L_08AC9E6C:
    ctx.gpr[4] = (ctx.gpr[9] >> 8u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[23]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4912)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (256u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-4912), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[9] & ctx.gpr[19]);
    ctx.gpr[5] = (ctx.gpr[6] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-4912), ctx.gpr[4]);
    ctx.gpr[4] = (1028u << 16u);
    goto L_08AC9EB0;
L_08AC9EB0:
    ctx.gpr[4] = (ctx.gpr[10] | ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4912)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-4912), ctx.gpr[4]);
    goto L_08AC9EC8;
L_08AC9EC8:
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[21] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_08AC9C74;
      }
      goto L_08AC9EE0;
    }
L_08AC9EE0:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x08AC9EECu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 420u, 0x0894E690u>(ctx, &aot_mem) && ctx.pc == 0x08AC9EECu) goto L_08AC9EEC;
    return;
L_08AC9EEC:
    ctx.gpr[31] = (0x08AC9EF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 588u, 0x088B79BCu>(ctx, &aot_mem) && ctx.pc == 0x08AC9EF4u) goto L_08AC9EF4;
    return;
L_08AC9EF4:
    ctx.gpr[4] = (6144u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4912)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-4912), ctx.gpr[4]);
    ctx.gpr[5] = (6400u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-4912), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(197)));
    ctx.gpr[31] = (0x08AC9F2Cu);
    ctx.gpr[4] = (0u | 14u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x08AC9F2Cu) goto L_08AC9F2C;
    return;
L_08AC9F2C:
    ctx.gpr[4] = (8704u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4912)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-4912), ctx.gpr[4]);
    ctx.gpr[5] = (49152u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-4912), ctx.gpr[4]);
    ctx.gpr[5] = (49408u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(256));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-4912), ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-30012)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC9FA0;
      }
      goto L_08AC9F84;
    }
L_08AC9F84:
    ctx.gpr[4] = (8960u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4912)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-4912), ctx.gpr[4]);
    goto L_08AC9FA0;
L_08AC9FA0:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(220)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(236)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(240)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(244)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(248)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(252)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC9FE4:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-30140)));
    ctx.fpr[14] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-30136), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-30144)));
    ctx.fpr[14] = ctx.fpr[14] / ctx.fpr[15];
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-30132), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-30128), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16672u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-30124), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16014u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 14571u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-30120), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-30116)));
    ctx.gpr[4] = (15744u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (2230u << 16u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-30112), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACA078:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ACA08Cu);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 498u, 0x08AEDD14u>(ctx, &aot_mem) && ctx.pc == 0x08ACA08Cu) goto L_08ACA08C;
    return;
L_08ACA08C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACA098u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    goto L_08ACA0A8;
L_08ACA098:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACA0A8:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (0u | 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08ACA0EC;
      }
      goto L_08ACA0C0;
    }
L_08ACA0C0:
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[6] << 10u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[6] >> 6u);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] ^ ctx.gpr[8]);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08ACA0C0;
      }
      goto L_08ACA0EC;
    }
L_08ACA0EC:
    ctx.gpr[4] = (ctx.gpr[6] << 3u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] >> 11u);
    ctx.gpr[2] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[2] << 15u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACA108:
    ctx.fpr[0] = ctx.fpr[12] - ctx.fpr[14];
    ctx.fpr[3] = ctx.fpr[17] - ctx.fpr[15];
    ctx.fpr[4] = ctx.fpr[13] - ctx.fpr[15];
    ctx.fpr[5] = ctx.fpr[16] - ctx.fpr[14];
    ctx.fpr[1] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[3] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[3] = fs * ft; }
    { const float fs = ctx.fpr[4]; const float ft = ctx.fpr[5]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[4] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[4] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(0u);
    ctx.fpr[3] = ctx.fpr[3] - ctx.fpr[4];
    ctx.set_fpu_condition((ctx.fpr[3] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[2] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08ACA1D8;
      }
      goto L_08ACA13C;
    }
L_08ACA13C:
    ctx.fpr[3] = ctx.fpr[12] - ctx.fpr[16];
    ctx.fpr[4] = ctx.fpr[19] - ctx.fpr[17];
    ctx.fpr[16] = ctx.fpr[18] - ctx.fpr[16];
    ctx.fpr[17] = ctx.fpr[13] - ctx.fpr[17];
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[4]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[3] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[3] = fs * ft; }
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[16] = ctx.fpr[3] - ctx.fpr[16];
    ctx.set_fpu_condition((ctx.fpr[16] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ACA1D0;
      }
      goto L_08ACA168;
    }
L_08ACA168:
    ctx.fpr[16] = ctx.fpr[12] - ctx.fpr[18];
    ctx.fpr[17] = ctx.fpr[2] - ctx.fpr[19];
    ctx.fpr[18] = ctx.fpr[1] - ctx.fpr[18];
    ctx.fpr[19] = ctx.fpr[13] - ctx.fpr[19];
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    { const float fs = ctx.fpr[19]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    ctx.fpr[16] = ctx.fpr[16] - ctx.fpr[18];
    ctx.set_fpu_condition((ctx.fpr[16] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ACA1C8;
      }
      goto L_08ACA194;
    }
L_08ACA194:
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[1];
    ctx.fpr[15] = ctx.fpr[15] - ctx.fpr[2];
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[2];
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[1];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ACA1E0;
      }
      goto L_08ACA1C0;
    }
L_08ACA1C0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08ACA1E4;
      }
      goto L_08ACA1C8;
    }
L_08ACA1C8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08ACA1E4;
      }
      goto L_08ACA1D0;
    }
L_08ACA1D0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08ACA1E4;
      }
      goto L_08ACA1D8;
    }
L_08ACA1D8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08ACA1E4;
      }
      goto L_08ACA1E0;
    }
L_08ACA1E0:
    ctx.gpr[2] = (0u | 1u);
    goto L_08ACA1E4;
L_08ACA1E4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACA1EC:
    ctx.gpr[6] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-5684), ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-5668), ctx.gpr[5]);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-5672), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-5676), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-5680), 0u);
    ctx.gpr[4] = (2230u << 16u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-5686), static_cast<std::uint8_t>(0u));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACA220:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7820)));
    ctx.gpr[5] = (0u | 6u);
    ctx.gpr[4] = (ctx.gpr[4] & 7u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 4u);
      if (branch_taken) {
          goto L_08ACA308;
      }
      goto L_08ACA244;
    }
L_08ACA244:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 2u);
      if (branch_taken) {
          goto L_08ACA2F8;
      }
      goto L_08ACA24C;
    }
L_08ACA24C:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ACA340;
      }
      goto L_08ACA254;
    }
L_08ACA254:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[31] = (0x08ACA260u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 555u, 0x088EF598u>(ctx, &aot_mem) && ctx.pc == 0x08ACA260u) goto L_08ACA260;
    return;
L_08ACA260:
    { const std::uint32_t vfpu_address = ctx.gpr[2] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[31] = (0x08ACA280u);
    ctx.gpr[5] = (0u | 0u);
    goto L_08ACA3A4;
L_08ACA280:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-5680), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[2] & 128u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACA29C;
      }
      goto L_08ACA294;
    }
L_08ACA294:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 1u);
      if (branch_taken) {
          goto L_08ACA2A0;
      }
      goto L_08ACA29C;
    }
L_08ACA29C:
    ctx.gpr[16] = (0u | 0u);
    goto L_08ACA2A0;
L_08ACA2A0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-5686)));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08ACA2F0;
      }
      goto L_08ACA2B0;
    }
L_08ACA2B0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (16544u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ACA2DC;
      }
      goto L_08ACA2CC;
    }
L_08ACA2CC:
    ctx.gpr[31] = (0x08ACA2D4u);
    ctx.gpr[4] = (0u | 1u);
    goto L_08ACA5F8;
L_08ACA2D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACA2E8;
      }
      goto L_08ACA2DC;
    }
L_08ACA2DC:
    ctx.gpr[4] = (ctx.gpr[16] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[31] = (0x08ACA2E8u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08ACA5F8;
L_08ACA2E8:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-5686), static_cast<std::uint8_t>(ctx.gpr[16]));
    goto L_08ACA2F0;
L_08ACA2F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACA340;
      }
      goto L_08ACA2F8;
    }
L_08ACA2F8:
    ctx.gpr[31] = (0x08ACA300u);
    // nop
    goto L_08ACA930;
L_08ACA300:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACA340;
      }
      goto L_08ACA308;
    }
L_08ACA308:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x08ACA314u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 166u, 0x089D568Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACA314u) goto L_08ACA314;
    return;
L_08ACA314:
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5672));
    ctx.gpr[31] = (0x08ACA338u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08ACA3A4;
L_08ACA338:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-5676), ctx.gpr[2]);
    goto L_08ACA340;
L_08ACA340:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(104)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACA38C;
      }
      goto L_08ACA354;
    }
L_08ACA354:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[31] = (0x08ACA360u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 166u, 0x089D568Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACA360u) goto L_08ACA360;
    return;
L_08ACA360:
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5672));
    ctx.gpr[31] = (0x08ACA384u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08ACA3A4;
L_08ACA384:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-5676), ctx.gpr[2]);
    goto L_08ACA38C;
L_08ACA38C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACA39C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACA3A4:
    ctx.gpr[2] = (0u | 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[10] = (2230u << 16u);
      if (branch_taken) {
          goto L_08ACA3B4;
      }
      goto L_08ACA3B0;
    }
L_08ACA3B0:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), 0u);
    goto L_08ACA3B4;
L_08ACA3B4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(-5684)));
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[11]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[9] = (0u | 0u);
      if (branch_taken) {
          goto L_08ACA4CC;
      }
      goto L_08ACA3C8;
    }
L_08ACA3C8:
    ctx.gpr[8] = (2230u << 16u);
    goto L_08ACA3CC;
L_08ACA3CC:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-5668)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[9]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ACA4B8;
      }
      goto L_08ACA3F4;
    }
L_08ACA3F4:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(2))))));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ACA4B8;
      }
      goto L_08ACA410;
    }
L_08ACA410:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(4))))));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ACA4B8;
      }
      goto L_08ACA430;
    }
L_08ACA430:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(6))))));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ACA4B8;
      }
      goto L_08ACA44C;
    }
L_08ACA44C:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(8))))));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ACA4B8;
      }
      goto L_08ACA46C;
    }
L_08ACA46C:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(10))))));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ACA4B8;
      }
      goto L_08ACA488;
    }
L_08ACA488:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(12))))));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[2] = (ctx.gpr[2] | ctx.gpr[6]);
      if (branch_taken) {
          goto L_08ACA4B8;
      }
      goto L_08ACA494;
    }
L_08ACA494:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(14));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[3] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACA4B4;
      }
      goto L_08ACA4AC;
    }
L_08ACA4AC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08ACA4B4;
      }
      goto L_08ACA4B4;
    }
L_08ACA4B4:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    goto L_08ACA4B8;
L_08ACA4B8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(-5684)));
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[11]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08ACA3CC;
      }
      goto L_08ACA4CC;
    }
L_08ACA4CC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACA4D4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ACA4E4u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 166u, 0x089D568Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACA4E4u) goto L_08ACA4E4;
    return;
L_08ACA4E4:
    ctx.gpr[7] = (2230u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-5684)));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_08ACA5E0;
      }
      goto L_08ACA4FC;
    }
L_08ACA4FC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-5668)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    goto L_08ACA514;
L_08ACA514:
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[9] = (ctx.gpr[9] & 2u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACA5CC;
      }
      goto L_08ACA524;
    }
L_08ACA524:
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ACA5CC;
      }
      goto L_08ACA540;
    }
L_08ACA540:
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(2))))));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ACA5CC;
      }
      goto L_08ACA55C;
    }
L_08ACA55C:
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4))))));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ACA5CC;
      }
      goto L_08ACA578;
    }
L_08ACA578:
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(6))))));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ACA5CC;
      }
      goto L_08ACA594;
    }
L_08ACA594:
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8))))));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ACA5CC;
      }
      goto L_08ACA5B0;
    }
L_08ACA5B0:
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(10))))));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ACA5E8;
      }
      goto L_08ACA5CC;
    }
L_08ACA5CC:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(16));
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08ACA514;
      }
      goto L_08ACA5E0;
    }
L_08ACA5E0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08ACA5EC;
      }
      goto L_08ACA5E8;
    }
L_08ACA5E8:
    ctx.gpr[2] = (ctx.gpr[5] + ctx.gpr[6]);
    goto L_08ACA5EC;
L_08ACA5EC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACA5F8:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[9] = (ctx.gpr[4] & 255u);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-15036)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15032)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08ACA6A0;
      }
      goto L_08ACA624;
    }
L_08ACA624:
    ctx.gpr[11] = (ctx.gpr[4] << 5u);
    ctx.gpr[8] = (ctx.gpr[11] + ctx.gpr[11]);
    ctx.gpr[11] = (ctx.gpr[11] + ctx.gpr[8]);
    ctx.gpr[7] = (ctx.gpr[9] & 1u);
    ctx.gpr[8] = (65528u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] << 19u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-1));
    goto L_08ACA640;
L_08ACA640:
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.gpr[3] = (ctx.gpr[3] + ctx.gpr[4]);
    ctx.gpr[3] = (aot_mem.aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.gpr[3] = (ctx.gpr[3] & 128u);
    if (ctx.gpr[3] == 0u) {
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
        goto L_08ACA660;
    }
    goto L_08ACA658;
L_08ACA658:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[3] = (0u | 0u);
      if (branch_taken) {
          goto L_08ACA664;
      }
      goto L_08ACA660;
    }
L_08ACA660:
    ctx.gpr[3] = (ctx.gpr[3] + ctx.gpr[11]);
    goto L_08ACA664;
L_08ACA664:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACA68C;
      }
      goto L_08ACA66C;
    }
L_08ACA66C:
    ctx.gpr[12] = (aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(72)));
    ctx.gpr[12] = (ctx.gpr[12] & 16u);
    { const bool branch_taken = ctx.gpr[12] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACA68C;
      }
      goto L_08ACA67C;
    }
L_08ACA67C:
    ctx.gpr[12] = (aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(68)));
    ctx.gpr[12] = (ctx.gpr[12] & ctx.gpr[8]);
    ctx.gpr[12] = (ctx.gpr[12] | ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(68), ctx.gpr[12]);
    goto L_08ACA68C;
L_08ACA68C:
    ctx.gpr[3] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(-96));
      if (branch_taken) {
          goto L_08ACA640;
      }
      goto L_08ACA6A0;
    }
L_08ACA6A0:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08ACA72C;
      }
      goto L_08ACA6B0;
    }
L_08ACA6B0:
    ctx.gpr[11] = (ctx.gpr[4] << 5u);
    ctx.gpr[8] = (ctx.gpr[11] + ctx.gpr[11]);
    ctx.gpr[11] = (ctx.gpr[11] + ctx.gpr[8]);
    ctx.gpr[7] = (ctx.gpr[9] & 1u);
    ctx.gpr[8] = (65528u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] << 19u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-1));
    goto L_08ACA6CC;
L_08ACA6CC:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(4)));
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[4]);
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (ctx.gpr[2] & 128u);
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
        goto L_08ACA6EC;
    }
    goto L_08ACA6E4;
L_08ACA6E4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08ACA6F0;
      }
      goto L_08ACA6EC;
    }
L_08ACA6EC:
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[11]);
    goto L_08ACA6F0;
L_08ACA6F0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACA718;
      }
      goto L_08ACA6F8;
    }
L_08ACA6F8:
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(72)));
    ctx.gpr[3] = (ctx.gpr[3] & 16u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACA718;
      }
      goto L_08ACA708;
    }
L_08ACA708:
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(68)));
    ctx.gpr[3] = (ctx.gpr[3] & ctx.gpr[8]);
    ctx.gpr[3] = (ctx.gpr[3] | ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(68), ctx.gpr[3]);
    goto L_08ACA718;
L_08ACA718:
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(-96));
      if (branch_taken) {
          goto L_08ACA6CC;
      }
      goto L_08ACA72C;
    }
L_08ACA72C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08ACA7DC;
      }
      goto L_08ACA73C;
    }
L_08ACA73C:
    ctx.gpr[8] = (ctx.gpr[4] << 5u);
    ctx.gpr[10] = (0u - ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] << 3u);
    ctx.gpr[10] = (ctx.gpr[10] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] << 1u);
    ctx.gpr[10] = (ctx.gpr[10] - ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] << 2u);
    ctx.gpr[7] = (ctx.gpr[9] | 0u);
    ctx.gpr[10] = (ctx.gpr[10] + ctx.gpr[8]);
    ctx.gpr[7] = (ctx.gpr[7] & 1u);
    ctx.gpr[8] = (65528u << 16u);
    ctx.gpr[9] = (0u | 2u);
    ctx.gpr[7] = (ctx.gpr[7] << 19u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-1));
    goto L_08ACA774;
L_08ACA774:
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[11] = (ctx.gpr[11] + ctx.gpr[4]);
    ctx.gpr[11] = (aot_mem.aot_load8(ctx.gpr[11] + static_cast<std::uint32_t>(0)));
    ctx.gpr[11] = (ctx.gpr[11] & 128u);
    if (ctx.gpr[11] == 0u) {
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
        goto L_08ACA794;
    }
    goto L_08ACA78C;
L_08ACA78C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[11] = (0u | 0u);
      if (branch_taken) {
          goto L_08ACA798;
      }
      goto L_08ACA794;
    }
L_08ACA794:
    ctx.gpr[11] = (ctx.gpr[11] + ctx.gpr[10]);
    goto L_08ACA798;
L_08ACA798:
    { const bool branch_taken = ctx.gpr[11] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACA7C8;
      }
      goto L_08ACA7A0;
    }
L_08ACA7A0:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(836)));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[9];
    // nop
      if (branch_taken) {
          goto L_08ACA7C8;
      }
      goto L_08ACA7AC;
    }
L_08ACA7AC:
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[11] + static_cast<std::uint32_t>(868)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACA7C8;
      }
      goto L_08ACA7B8;
    }
L_08ACA7B8:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(68)));
    ctx.gpr[2] = (ctx.gpr[2] & ctx.gpr[8]);
    ctx.gpr[2] = (ctx.gpr[2] | ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    goto L_08ACA7C8;
L_08ACA7C8:
    ctx.gpr[11] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[11] != 0u;
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(-1760));
      if (branch_taken) {
          goto L_08ACA774;
      }
      goto L_08ACA7DC;
    }
L_08ACA7DC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACA7E4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5676)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACA800;
      }
      goto L_08ACA7F8;
    }
L_08ACA7F8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08ACA804;
      }
      goto L_08ACA800;
    }
L_08ACA800:
    ctx.gpr[2] = (0u | 0u);
    goto L_08ACA804;
L_08ACA804:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACA80C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5676)));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACA828;
      }
      goto L_08ACA820;
    }
L_08ACA820:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08ACA82C;
      }
      goto L_08ACA828;
    }
L_08ACA828:
    ctx.gpr[2] = (0u | 0u);
    goto L_08ACA82C;
L_08ACA82C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACA834:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5676)));
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACA850;
      }
      goto L_08ACA848;
    }
L_08ACA848:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08ACA854;
      }
      goto L_08ACA850;
    }
L_08ACA850:
    ctx.gpr[2] = (0u | 0u);
    goto L_08ACA854;
L_08ACA854:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACA85C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5676)));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACA878;
      }
      goto L_08ACA870;
    }
L_08ACA870:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08ACA87C;
      }
      goto L_08ACA878;
    }
L_08ACA878:
    ctx.gpr[2] = (0u | 0u);
    goto L_08ACA87C;
L_08ACA87C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACA884:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5676)));
    ctx.gpr[4] = (ctx.gpr[4] & 256u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACA8A0;
      }
      goto L_08ACA898;
    }
L_08ACA898:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08ACA8A4;
      }
      goto L_08ACA8A0;
    }
L_08ACA8A0:
    ctx.gpr[2] = (0u | 0u);
    goto L_08ACA8A4;
L_08ACA8A4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACA8AC:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5680)));
    ctx.gpr[4] = (ctx.gpr[4] & 512u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACA8C8;
      }
      goto L_08ACA8C0;
    }
L_08ACA8C0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08ACA8CC;
      }
      goto L_08ACA8C8;
    }
L_08ACA8C8:
    ctx.gpr[2] = (0u | 0u);
    goto L_08ACA8CC;
L_08ACA8CC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACA8D4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5680)));
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACA8F0;
      }
      goto L_08ACA8E8;
    }
L_08ACA8E8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08ACA8F4;
      }
      goto L_08ACA8F0;
    }
L_08ACA8F0:
    ctx.gpr[2] = (0u | 0u);
    goto L_08ACA8F4;
L_08ACA8F4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACA8FC:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5676)));
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACA918;
      }
      goto L_08ACA910;
    }
L_08ACA910:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08ACA91C;
      }
      goto L_08ACA918;
    }
L_08ACA918:
    ctx.gpr[2] = (0u | 0u);
    goto L_08ACA91C;
L_08ACA91C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACA924:
    ctx.gpr[4] = (2230u << 16u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5672)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACA930:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[4] = (17490u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(13216));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (50394u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (50381u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[4] = (ctx.gpr[4] | 36045u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17467u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 63898u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17566u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 31130u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17522u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 63898u);
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17560u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 1638u);
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    ctx.gpr[4] = (17352u << 16u);
    ctx.gpr[31] = (0x08ACA9ACu);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_08ACA108;
L_08ACA9AC:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-29960), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACA9C0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29996)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[5] = (2230u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-30000)));
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.gpr[9] = (2230u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-29972)));
    ctx.gpr[5] = (16014u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 14571u);
    ctx.gpr[11] = (2230u << 16u);
    ctx.gpr[10] = (2230u << 16u);
    ctx.gpr[7] = (16672u << 16u);
    ctx.gpr[8] = (15744u << 16u);
    ctx.gpr[2] = (2230u << 16u);
    ctx.gpr[3] = (2230u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[18];
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(-29992), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[12] = (2230u << 16u);
    ctx.fpr[14] = ctx.fpr[17] / ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(-29984), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[19] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(-29988), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[8]);
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-29980), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-29976), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(-29968), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACAA54:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ACAA78u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 423u, 0x08A4B554u>(ctx, &aot_mem) && ctx.pc == 0x08ACAA78u) goto L_08ACAA78;
    return;
L_08ACAA78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_08ACAA94;
      }
      goto L_08ACAA88;
    }
L_08ACAA88:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_08ACAA94;
L_08ACAA94:
    ctx.gpr[31] = (0x08ACAA9Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BB6Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACAA9Cu) goto L_08ACAA9C;
    return;
L_08ACAA9C:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACAAB4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08ACAAC4;
      }
      goto L_08ACAABC;
    }
L_08ACAABC:
    ctx.gpr[2] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
    goto L_08ACAAC4;
L_08ACAAC4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACAACC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[19] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ACAAF8u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 423u, 0x08A4B554u>(ctx, &aot_mem) && ctx.pc == 0x08ACAAF8u) goto L_08ACAAF8;
    return;
L_08ACAAF8:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACAB08u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 440u, 0x08A4B658u>(ctx, &aot_mem) && ctx.pc == 0x08ACAB08u) goto L_08ACAB08;
    return;
L_08ACAB08:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x08ACAB18u);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08ACAAB4;
L_08ACAB18:
    ctx.gpr[6] = (49024u << 16u);
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACAB30u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 446u, 0x08A4B6CCu>(ctx, &aot_mem) && ctx.pc == 0x08ACAB30u) goto L_08ACAB30;
    return;
L_08ACAB30:
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x08ACAB40u);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_08ACAAB4;
L_08ACAB40:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[17]) < 1 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08ACAB54;
      }
      goto L_08ACAB50;
    }
L_08ACAB50:
    ctx.gpr[17] = (ctx.gpr[19] | 0u);
    goto L_08ACAB54;
L_08ACAB54:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACAB64;
      }
      goto L_08ACAB60;
    }
L_08ACAB60:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    goto L_08ACAB64;
L_08ACAB64:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACAB90;
      }
      goto L_08ACAB70;
    }
L_08ACAB70:
    ctx.gpr[5] = (ctx.gpr[18] + ctx.gpr[17]);
    ctx.gpr[6] = (ctx.gpr[4] - ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[31] = (0x08ACAB88u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 676u, 0x0890BB8Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACAB88u) goto L_08ACAB88;
    return;
L_08ACAB88:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACABA4;
      }
      goto L_08ACAB90;
    }
L_08ACAB90:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08ACABA4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-15260));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 676u, 0x0890BB8Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACABA4u) goto L_08ACABA4;
    return;
L_08ACABA4:
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
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
L_08ACABC4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-1088));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1056), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1076), ctx.gpr[21]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[21] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1060), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1064), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1068), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1072), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1080), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ACABF8u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 423u, 0x08A4B554u>(ctx, &aot_mem) && ctx.pc == 0x08ACABF8u) goto L_08ACABF8;
    return;
L_08ACABF8:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACAC0Cu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 2u, 0x08A4C020u>(ctx, &aot_mem) && ctx.pc == 0x08ACAC0Cu) goto L_08ACAC0C;
    return;
L_08ACAC0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[18] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_08ACAC90;
      }
      goto L_08ACAC20;
    }
L_08ACAC20:
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(-24896));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(1056));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_08ACAC2C;
L_08ACAC2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[17] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[18]);
      if (branch_taken) {
          goto L_08ACAC48;
      }
      goto L_08ACAC3C;
    }
L_08ACAC3C:
    ctx.gpr[31] = (0x08ACAC44u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 575u, 0x08A4BE44u>(ctx, &aot_mem) && ctx.pc == 0x08ACAC44u) goto L_08ACAC44;
    return;
L_08ACAC44:
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[18]);
    goto L_08ACAC48;
L_08ACAC48:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACAC6C;
      }
      goto L_08ACAC64;
    }
L_08ACAC64:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08ACAC6C;
      }
      goto L_08ACAC6C;
    }
L_08ACAC6C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[18] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACAC2C;
      }
      goto L_08ACAC90;
    }
L_08ACAC90:
    ctx.gpr[31] = (0x08ACAC98u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 585u, 0x08A4BF10u>(ctx, &aot_mem) && ctx.pc == 0x08ACAC98u) goto L_08ACAC98;
    return;
L_08ACAC98:
    ctx.gpr[2] = (ctx.gpr[21] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1056)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1060)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1064)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1068)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1072)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1076)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1080)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(1088));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACACC0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-1088));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1056), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1076), ctx.gpr[21]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[21] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1060), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1064), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1068), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1072), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1080), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ACACF4u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 423u, 0x08A4B554u>(ctx, &aot_mem) && ctx.pc == 0x08ACACF4u) goto L_08ACACF4;
    return;
L_08ACACF4:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACAD08u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 2u, 0x08A4C020u>(ctx, &aot_mem) && ctx.pc == 0x08ACAD08u) goto L_08ACAD08;
    return;
L_08ACAD08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[18] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_08ACAD8C;
      }
      goto L_08ACAD1C;
    }
L_08ACAD1C:
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(-24896));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(1056));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_08ACAD28;
L_08ACAD28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[17] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[18]);
      if (branch_taken) {
          goto L_08ACAD44;
      }
      goto L_08ACAD38;
    }
L_08ACAD38:
    ctx.gpr[31] = (0x08ACAD40u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 575u, 0x08A4BE44u>(ctx, &aot_mem) && ctx.pc == 0x08ACAD40u) goto L_08ACAD40;
    return;
L_08ACAD40:
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[18]);
    goto L_08ACAD44;
L_08ACAD44:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (ctx.gpr[5] & 2u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACAD68;
      }
      goto L_08ACAD60;
    }
L_08ACAD60:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-32));
      if (branch_taken) {
          goto L_08ACAD68;
      }
      goto L_08ACAD68;
    }
L_08ACAD68:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[18] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACAD28;
      }
      goto L_08ACAD8C;
    }
L_08ACAD8C:
    ctx.gpr[31] = (0x08ACAD94u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 585u, 0x08A4BF10u>(ctx, &aot_mem) && ctx.pc == 0x08ACAD94u) goto L_08ACAD94;
    return;
L_08ACAD94:
    ctx.gpr[2] = (ctx.gpr[21] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1056)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1060)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1064)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1068)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1072)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1076)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1080)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(1088));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACADBC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-1088));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1056), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1072), ctx.gpr[20]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[20] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1060), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1064), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1068), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1076), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1080), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ACADF0u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 423u, 0x08A4B554u>(ctx, &aot_mem) && ctx.pc == 0x08ACADF0u) goto L_08ACADF0;
    return;
L_08ACADF0:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACAE00u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 440u, 0x08A4B658u>(ctx, &aot_mem) && ctx.pc == 0x08ACAE00u) goto L_08ACAE00;
    return;
L_08ACAE00:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACAE18u);
    ctx.gpr[21] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 2u, 0x08A4C020u>(ctx, &aot_mem) && ctx.pc == 0x08ACAE18u) goto L_08ACAE18;
    return;
L_08ACAE18:
    ctx.gpr[16] = (ctx.gpr[21] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[21]) <= 0;
    ctx.gpr[18] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08ACAE44;
      }
      goto L_08ACAE24;
    }
L_08ACAE24:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACAE34u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 579u, 0x08A4BE7Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACAE34u) goto L_08ACAE34;
    return;
L_08ACAE34:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (ctx.gpr[18] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    ctx.gpr[18] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08ACAE24;
      }
      goto L_08ACAE44;
    }
L_08ACAE44:
    ctx.gpr[31] = (0x08ACAE4Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 585u, 0x08A4BF10u>(ctx, &aot_mem) && ctx.pc == 0x08ACAE4Cu) goto L_08ACAE4C;
    return;
L_08ACAE4C:
    ctx.gpr[2] = (ctx.gpr[20] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1056)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1060)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1064)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1068)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1072)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1076)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1080)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(1088));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACAE74:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ACAE9Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 423u, 0x08A4B554u>(ctx, &aot_mem) && ctx.pc == 0x08ACAE9Cu) goto L_08ACAE9C;
    return;
L_08ACAE9C:
    ctx.gpr[6] = (16256u << 16u);
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACAEB4u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 446u, 0x08A4B6CCu>(ctx, &aot_mem) && ctx.pc == 0x08ACAEB4u) goto L_08ACAEB4;
    return;
L_08ACAEB4:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x08ACAEC4u);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08ACAAB4;
L_08ACAEC4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08ACAEE0;
      }
      goto L_08ACAED0;
    }
L_08ACAED0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACAEE8;
      }
      goto L_08ACAEE0;
    }
L_08ACAEE0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08ACAF08;
      }
      goto L_08ACAEE8;
    }
L_08ACAEE8:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-1))))));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[31] = (0x08ACAF04u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BB6Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACAF04u) goto L_08ACAF04;
    return;
L_08ACAF04:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    goto L_08ACAF08;
L_08ACAF08:
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
L_08ACAF20:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-1088));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1052), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1056), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1060), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1064), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1068), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1072), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1076), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1080), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ACAF4Cu);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 552u, 0x0890B3DCu>(ctx, &aot_mem) && ctx.pc == 0x08ACAF4Cu) goto L_08ACAF4C;
    return;
L_08ACAF4C:
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACAF60u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 2u, 0x08A4C020u>(ctx, &aot_mem) && ctx.pc == 0x08ACAF60u) goto L_08ACAF60;
    return;
L_08ACAF60:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[22]) < 1 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (0u | 1u);
      if (branch_taken) {
          goto L_08ACAFDC;
      }
      goto L_08ACAF6C;
    }
L_08ACAF6C:
    ctx.gpr[18] = (2227u << 16u);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(1052));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-15256));
    goto L_08ACAF78;
L_08ACAF78:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACAF84u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 440u, 0x08A4B658u>(ctx, &aot_mem) && ctx.pc == 0x08ACAF84u) goto L_08ACAF84;
    return;
L_08ACAF84:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[19] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[19] & 255u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[19];
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08ACAFA4;
      }
      goto L_08ACAF98;
    }
L_08ACAF98:
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08ACAFA4u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 347u, 0x08A4B014u>(ctx, &aot_mem) && ctx.pc == 0x08ACAFA4u) goto L_08ACAFA4;
    return;
L_08ACAFA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[17] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACAFBC;
      }
      goto L_08ACAFB4;
    }
L_08ACAFB4:
    ctx.gpr[31] = (0x08ACAFBCu);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 575u, 0x08A4BE44u>(ctx, &aot_mem) && ctx.pc == 0x08ACAFBCu) goto L_08ACAFBC;
    return;
L_08ACAFBC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACAF78;
      }
      goto L_08ACAFDC;
    }
L_08ACAFDC:
    ctx.gpr[31] = (0x08ACAFE4u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 585u, 0x08A4BF10u>(ctx, &aot_mem) && ctx.pc == 0x08ACAFE4u) goto L_08ACAFE4;
    return;
L_08ACAFE4:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1052)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1056)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1060)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1064)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1068)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1072)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1076)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1080)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(1088));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACB010:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ACB020u);
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 579u, 0x08A4BE7Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACB020u) goto L_08ACB020;
    return;
L_08ACB020:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACB030:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-1072));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1052), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1060), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1056), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1064), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ACB058u);
    ctx.gpr[6] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 415u, 0x08A4B4B0u>(ctx, &aot_mem) && ctx.pc == 0x08ACB058u) goto L_08ACB058;
    return;
L_08ACB058:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACB068u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 2u, 0x08A4C020u>(ctx, &aot_mem) && ctx.pc == 0x08ACB068u) goto L_08ACB068;
    return;
L_08ACB068:
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACB07Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-20464));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 60u, 0x0890C54Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACB07Cu) goto L_08ACB07C;
    return;
L_08ACB07C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACB094;
      }
      goto L_08ACB084;
    }
L_08ACB084:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACB094u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-15240));
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 375u, 0x08A4B244u>(ctx, &aot_mem) && ctx.pc == 0x08ACB094u) goto L_08ACB094;
    return;
L_08ACB094:
    ctx.gpr[31] = (0x08ACB09Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 585u, 0x08A4BF10u>(ctx, &aot_mem) && ctx.pc == 0x08ACB09Cu) goto L_08ACB09C;
    return;
L_08ACB09C:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1052)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1056)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1060)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1064)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(1072));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACB0B8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[2] = (ctx.gpr[5] + static_cast<std::uint32_t>(-49));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_08ACB0F0;
      }
      goto L_08ACB0CC;
    }
L_08ACB0CC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[2] << 3u);
      if (branch_taken) {
          goto L_08ACB0F0;
      }
      goto L_08ACB0DC;
    }
L_08ACB0DC:
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08ACB108;
      }
      goto L_08ACB0F0;
    }
L_08ACB0F0:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x08ACB100u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-15208));
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 375u, 0x08A4B244u>(ctx, &aot_mem) && ctx.pc == 0x08ACB100u) goto L_08ACB100;
    return;
L_08ACB100:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACB108;
      }
      goto L_08ACB108;
    }
L_08ACB108:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACB114:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) < 0;
    ctx.gpr[6] = (ctx.gpr[2] << 3u);
      if (branch_taken) {
          goto L_08ACB154;
      }
      goto L_08ACB130;
    }
L_08ACB130:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    goto L_08ACB138;
L_08ACB138:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ACB16C;
      }
      goto L_08ACB144;
    }
L_08ACB144:
    ctx.gpr[2] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) >= 0;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-8));
      if (branch_taken) {
          goto L_08ACB138;
      }
      goto L_08ACB154;
    }
L_08ACB154:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x08ACB164u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-15184));
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 375u, 0x08A4B244u>(ctx, &aot_mem) && ctx.pc == 0x08ACB164u) goto L_08ACB164;
    return;
L_08ACB164:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACB16C;
      }
      goto L_08ACB16C;
    }
L_08ACB16C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACB178:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 38 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08ACB1B0;
      }
      goto L_08ACB190;
    }
L_08ACB190:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < 37 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACB1D4;
      }
      goto L_08ACB19C;
    }
L_08ACB19C:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[2] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08ACB1DC;
      }
      goto L_08ACB1A8;
    }
L_08ACB1A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACB1F4;
      }
      goto L_08ACB1B0;
    }
L_08ACB1B0:
    ctx.gpr[7] = (0u | 91u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08ACB1D4;
      }
      goto L_08ACB1BC;
    }
L_08ACB1BC:
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (0u | 94u);
    { const bool branch_taken = ctx.gpr[9] == ctx.gpr[6];
    ctx.gpr[2] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08ACB1FC;
      }
      goto L_08ACB1CC;
    }
L_08ACB1CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACB208;
      }
      goto L_08ACB1D4;
    }
L_08ACB1D4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08ACB284;
      }
      goto L_08ACB1DC;
    }
L_08ACB1DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.gpr[31] = (0x08ACB1F0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-15160));
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 375u, 0x08A4B244u>(ctx, &aot_mem) && ctx.pc == 0x08ACB1F0u) goto L_08ACB1F0;
    return;
L_08ACB1F0:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    goto L_08ACB1F4;
L_08ACB1F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACB284;
      }
      goto L_08ACB1FC;
    }
L_08ACB1FC:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[2] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    goto L_08ACB208;
L_08ACB208:
    ctx.gpr[8] = (2227u << 16u);
    ctx.gpr[7] = (0u | 37u);
    ctx.gpr[6] = (0u | 93u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-15124));
    goto L_08ACB218;
L_08ACB218:
    { const bool branch_taken = ctx.gpr[9] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACB254;
      }
      goto L_08ACB220;
    }
L_08ACB220:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x08ACB23Cu);
    ctx.gpr[5] = (ctx.gpr[8] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 375u, 0x08A4B244u>(ctx, &aot_mem) && ctx.pc == 0x08ACB23Cu) goto L_08ACB23C;
    return;
L_08ACB23C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (0u | 93u);
    ctx.gpr[7] = (0u | 37u);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    goto L_08ACB254;
L_08ACB254:
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[2] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[10] != ctx.gpr[7];
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_08ACB27C;
      }
      goto L_08ACB268;
    }
L_08ACB268:
    { const bool branch_taken = ctx.gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACB27C;
      }
      goto L_08ACB270;
    }
L_08ACB270:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[2] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    goto L_08ACB27C;
L_08ACB27C:
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08ACB218;
      }
      goto L_08ACB284;
    }
L_08ACB284:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACB290:
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-24896));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[8] = (ctx.gpr[6] & 1u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08ACB2B8;
      }
      goto L_08ACB2B0;
    }
L_08ACB2B0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (ctx.gpr[5] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08ACB2B8;
      }
      goto L_08ACB2B8;
    }
L_08ACB2B8:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-97));
    ctx.gpr[9] = (ctx.gpr[8] < static_cast<std::uint32_t>(26) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACB3A0;
      }
      goto L_08ACB2C8;
    }
L_08ACB2C8:
    ctx.gpr[8] = (ctx.gpr[8] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[8]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-14792)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACB2E0:
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (ctx.gpr[6] & 2u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 3u);
      if (branch_taken) {
          goto L_08ACB3AC;
      }
      goto L_08ACB2F4;
    }
L_08ACB2F4:
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (ctx.gpr[6] & 2u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 32u);
      if (branch_taken) {
          goto L_08ACB3AC;
      }
      goto L_08ACB308;
    }
L_08ACB308:
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (ctx.gpr[6] & 2u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
      if (branch_taken) {
          goto L_08ACB3AC;
      }
      goto L_08ACB31C;
    }
L_08ACB31C:
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (ctx.gpr[6] & 2u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
      if (branch_taken) {
          goto L_08ACB3AC;
      }
      goto L_08ACB330;
    }
L_08ACB330:
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (ctx.gpr[6] & 2u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
      if (branch_taken) {
          goto L_08ACB3AC;
      }
      goto L_08ACB344;
    }
L_08ACB344:
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (ctx.gpr[6] & 2u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
      if (branch_taken) {
          goto L_08ACB3AC;
      }
      goto L_08ACB358;
    }
L_08ACB358:
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (ctx.gpr[6] & 2u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
      if (branch_taken) {
          goto L_08ACB3AC;
      }
      goto L_08ACB36C;
    }
L_08ACB36C:
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (ctx.gpr[6] & 2u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 7u);
      if (branch_taken) {
          goto L_08ACB3AC;
      }
      goto L_08ACB380;
    }
L_08ACB380:
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (ctx.gpr[6] & 2u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 68u);
      if (branch_taken) {
          goto L_08ACB3AC;
      }
      goto L_08ACB394;
    }
L_08ACB394:
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[6] & 2u);
      if (branch_taken) {
          goto L_08ACB3AC;
      }
      goto L_08ACB3A0;
    }
L_08ACB3A0:
    ctx.gpr[2] = (ctx.gpr[4] ^ ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
      if (branch_taken) {
          goto L_08ACB3B8;
      }
      goto L_08ACB3AC;
    }
L_08ACB3AC:
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    if (ctx.gpr[7] == 0u) {
    ctx.gpr[2] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
        goto L_08ACB3B8;
    }
    goto L_08ACB3B8;
L_08ACB3B8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACB3C0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (0u | 1u);
    ctx.gpr[8] = (0u | 94u);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[8];
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08ACB404;
      }
      goto L_08ACB3FC;
    }
L_08ACB3FC:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    goto L_08ACB404;
L_08ACB404:
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[21] = (0u | 37u);
      if (branch_taken) {
          goto L_08ACB44C;
      }
      goto L_08ACB414;
    }
L_08ACB414:
    ctx.gpr[20] = (0u | 45u);
    goto L_08ACB418;
L_08ACB418:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_08ACB45C;
      }
      goto L_08ACB424;
    }
L_08ACB424:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[31] = (0x08ACB434u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_08ACB290;
L_08ACB434:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACB454;
      }
      goto L_08ACB43C;
    }
L_08ACB43C:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[17] < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACB418;
      }
      goto L_08ACB44C;
    }
L_08ACB44C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[19] < static_cast<std::uint32_t>(1) ? 1u : 0u);
      if (branch_taken) {
          goto L_08ACB4B8;
      }
      goto L_08ACB454;
    }
L_08ACB454:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_08ACB4B8;
      }
      goto L_08ACB45C;
    }
L_08ACB45C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1))))));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[20];
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08ACB4A8;
      }
      goto L_08ACB468;
    }
L_08ACB468:
    ctx.gpr[6] = (ctx.gpr[4] < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACB4A8;
      }
      goto L_08ACB474;
    }
L_08ACB474:
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(-2))))));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACB43C;
      }
      goto L_08ACB48C;
    }
L_08ACB48C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACB43C;
      }
      goto L_08ACB4A0;
    }
L_08ACB4A0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_08ACB4B8;
      }
      goto L_08ACB4A8;
    }
L_08ACB4A8:
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08ACB43C;
      }
      goto L_08ACB4B4;
    }
L_08ACB4B4:
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
    goto L_08ACB4B8;
L_08ACB4B8:
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
L_08ACB4DC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[8] = (ctx.gpr[6] | 0u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[9] = (0u | 91u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[9];
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_08ACB52C;
      }
      goto L_08ACB4FC;
    }
L_08ACB4FC:
    ctx.gpr[4] = (0u | 46u);
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 37u);
      if (branch_taken) {
          goto L_08ACB524;
      }
      goto L_08ACB508;
    }
L_08ACB508:
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08ACB544;
      }
      goto L_08ACB510;
    }
L_08ACB510:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1))))));
    ctx.gpr[31] = (0x08ACB51Cu);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    goto L_08ACB290;
L_08ACB51C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACB550;
      }
      goto L_08ACB524;
    }
L_08ACB524:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08ACB550;
      }
      goto L_08ACB52C;
    }
L_08ACB52C:
    ctx.gpr[7] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08ACB53Cu);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    goto L_08ACB3C0;
L_08ACB53C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACB550;
      }
      goto L_08ACB544;
    }
L_08ACB544:
    ctx.gpr[4] = (ctx.gpr[7] & 255u);
    ctx.gpr[2] = (ctx.gpr[4] ^ ctx.gpr[6]);
    ctx.gpr[2] = (ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    goto L_08ACB550;
L_08ACB550:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACB55C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACB57C;
      }
      goto L_08ACB570;
    }
L_08ACB570:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(1))))));
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACB5A8;
      }
      goto L_08ACB57C;
    }
L_08ACB57C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x08ACB598u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-15092));
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 375u, 0x08A4B244u>(ctx, &aot_mem) && ctx.pc == 0x08ACB598u) goto L_08ACB598;
    return;
L_08ACB598:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    goto L_08ACB5A8;
L_08ACB5A8:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_08ACB5BC;
      }
      goto L_08ACB5B4;
    }
L_08ACB5B4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08ACB620;
      }
      goto L_08ACB5BC;
    }
L_08ACB5BC:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(1))))));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[6] = (0u | 1u);
      if (branch_taken) {
          goto L_08ACB61C;
      }
      goto L_08ACB5D4;
    }
L_08ACB5D4:
    ctx.gpr[2] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[7];
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08ACB60C;
      }
      goto L_08ACB5E4;
    }
L_08ACB5E4:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACB604;
      }
      goto L_08ACB5F0;
    }
L_08ACB5F0:
    ctx.gpr[9] = (ctx.gpr[2] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08ACB5D4;
      }
      goto L_08ACB5FC;
    }
L_08ACB5FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACB61C;
      }
      goto L_08ACB604;
    }
L_08ACB604:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACB620;
      }
      goto L_08ACB60C;
    }
L_08ACB60C:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_08ACB5F0;
      }
      goto L_08ACB614;
    }
L_08ACB614:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08ACB5F0;
      }
      goto L_08ACB61C;
    }
L_08ACB61C:
    ctx.gpr[2] = (0u | 0u);
    goto L_08ACB620;
L_08ACB620:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACB62C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (ctx.gpr[18] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    ctx.gpr[4] = (ctx.gpr[8] < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[20] = (ctx.gpr[6] | 0u);
    ctx.gpr[19] = (ctx.gpr[7] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    goto L_08ACB668;
L_08ACB668:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[16]);
      if (branch_taken) {
          goto L_08ACB6A0;
      }
      goto L_08ACB670;
    }
L_08ACB670:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[31] = (0x08ACB684u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    goto L_08ACB4DC;
L_08ACB684:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACB6A0;
      }
      goto L_08ACB68C;
    }
L_08ACB68C:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[18] + ctx.gpr[16]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_08ACB668;
      }
      goto L_08ACB6A0;
    }
L_08ACB6A0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) < 0;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08ACB6D4;
      }
      goto L_08ACB6A8;
    }
L_08ACB6A8:
    ctx.gpr[5] = (ctx.gpr[18] + ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACB6B8u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 109u, 0x08ACC714u>(ctx, &aot_mem) && ctx.pc == 0x08ACB6B8u) goto L_08ACB6B8;
    return;
L_08ACB6B8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACB6C8;
      }
      goto L_08ACB6C0;
    }
L_08ACB6C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACB6D8;
      }
      goto L_08ACB6C8;
    }
L_08ACB6C8:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08ACB6A8;
      }
      goto L_08ACB6D4;
    }
L_08ACB6D4:
    ctx.gpr[2] = (0u | 0u);
    goto L_08ACB6D8;
L_08ACB6D8:
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
L_08ACB6F8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    ctx.gpr[20] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    ctx.gpr[16] = (ctx.gpr[7] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    goto L_08ACB728;
L_08ACB728:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08ACB738u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 109u, 0x08ACC714u>(ctx, &aot_mem) && ctx.pc == 0x08ACB738u) goto L_08ACB738;
    return;
L_08ACB738:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACB77C;
      }
      goto L_08ACB740;
    }
L_08ACB740:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[18] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACB774;
      }
      goto L_08ACB750;
    }
L_08ACB750:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[31] = (0x08ACB764u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    goto L_08ACB4DC;
L_08ACB764:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACB774;
      }
      goto L_08ACB76C;
    }
L_08ACB76C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08ACB784;
      }
      goto L_08ACB774;
    }
L_08ACB774:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08ACB78C;
      }
      goto L_08ACB77C;
    }
L_08ACB77C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACB78C;
      }
      goto L_08ACB784;
    }
L_08ACB784:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACB728;
      }
      goto L_08ACB78C;
    }
L_08ACB78C:
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
L_08ACB7AC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[8] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[9] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[7]) < 32 ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[9] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_08ACB80C;
      }
      goto L_08ACB7DC;
    }
L_08ACB7DC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[7]);
    ctx.gpr[31] = (0x08ACB7FCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-15072));
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 375u, 0x08A4B244u>(ctx, &aot_mem) && ctx.pc == 0x08ACB7FCu) goto L_08ACB7FC;
    return;
L_08ACB7FC:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    goto L_08ACB80C;
L_08ACB80C:
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] << 3u);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACB838u);
    ctx.gpr[6] = (ctx.gpr[8] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 109u, 0x08ACC714u>(ctx, &aot_mem) && ctx.pc == 0x08ACB838u) goto L_08ACB838;
    return;
L_08ACB838:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACB84C;
      }
      goto L_08ACB840;
    }
L_08ACB840:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    goto L_08ACB84C;
L_08ACB84C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACB85C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ACB884u);
    ctx.gpr[19] = (ctx.gpr[5] | 0u);
    goto L_08ACB114;
L_08ACB884:
    ctx.gpr[16] = (ctx.gpr[2] << 3u);
    ctx.gpr[16] = (ctx.gpr[18] + ctx.gpr[16]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[19] - ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08ACB8A8u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 109u, 0x08ACC714u>(ctx, &aot_mem) && ctx.pc == 0x08ACB8A8u) goto L_08ACB8A8;
    return;
L_08ACB8A8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACB8B8;
      }
      goto L_08ACB8B0;
    }
L_08ACB8B0:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    goto L_08ACB8B8;
L_08ACB8B8:
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
L_08ACB8D4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ACB8F4u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    goto L_08ACB0B8;
L_08ACB8F4:
    ctx.gpr[4] = (ctx.gpr[2] << 3u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[16]);
    ctx.gpr[5] = (ctx.gpr[5] < ctx.gpr[17] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACB934;
      }
      goto L_08ACB914;
    }
L_08ACB914:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACB924u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 371u, 0x08AED4A0u>(ctx, &aot_mem) && ctx.pc == 0x08ACB924u) goto L_08ACB924;
    return;
L_08ACB924:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACB934;
      }
      goto L_08ACB92C;
    }
L_08ACB92C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[16] + ctx.gpr[17]);
      if (branch_taken) {
          goto L_08ACB938;
      }
      goto L_08ACB934;
    }
L_08ACB934:
    ctx.gpr[2] = (0u | 0u);
    goto L_08ACB938;
L_08ACB938:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACB94C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[16] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08ACB990;
      }
      goto L_08ACB97C;
    }
L_08ACB97C:
    ctx.gpr[4] = (ctx.gpr[18] < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACB998;
      }
      goto L_08ACB988;
    }
L_08ACB988:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08ACBA00;
      }
      goto L_08ACB990;
    }
L_08ACB990:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_08ACBA00;
      }
      goto L_08ACB998;
    }
L_08ACB998:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-1));
    ctx.gpr[18] = (ctx.gpr[18] - ctx.gpr[16]);
    goto L_08ACB9A0;
L_08ACB9A0:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACB9F8;
      }
      goto L_08ACB9A8;
    }
L_08ACB9A8:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08ACB9B8u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 366u, 0x08AED45Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACB9B8u) goto L_08ACB9B8;
    return;
L_08ACB9B8:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACB9F8;
      }
      goto L_08ACB9C4;
    }
L_08ACB9C4:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08ACB9D8u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 371u, 0x08AED4A0u>(ctx, &aot_mem) && ctx.pc == 0x08ACB9D8u) goto L_08ACB9D8;
    return;
L_08ACB9D8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACB9F0;
      }
      goto L_08ACB9E0;
    }
L_08ACB9E0:
    ctx.gpr[4] = (ctx.gpr[20] - ctx.gpr[19]);
    ctx.gpr[18] = (ctx.gpr[18] - ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_08ACB9A0;
      }
      goto L_08ACB9F0;
    }
L_08ACB9F0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[20] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08ACBA00;
      }
      goto L_08ACB9F8;
    }
L_08ACB9F8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08ACBA00;
      }
      goto L_08ACBA00;
    }
L_08ACBA00:
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
L_08ACBA20:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[7] = (ctx.gpr[5] << 3u);
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(20)));
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[8];
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08ACBA70;
      }
      goto L_08ACBA40;
    }
L_08ACBA40:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(-15052));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08ACBA60u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 375u, 0x08A4B244u>(ctx, &aot_mem) && ctx.pc == 0x08ACBA60u) goto L_08ACBA60;
    return;
L_08ACBA60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    goto L_08ACBA70;
L_08ACBA70:
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(-2));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[8];
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08ACBAA0;
      }
      goto L_08ACBA7C;
    }
L_08ACBA7C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] - ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[31] = (0x08ACBA98u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BB6Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACBA98u) goto L_08ACBA98;
    return;
L_08ACBA98:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACBAAC;
      }
      goto L_08ACBAA0;
    }
L_08ACBAA0:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08ACBAACu);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 676u, 0x0890BB8Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACBAACu) goto L_08ACBAAC;
    return;
L_08ACBAAC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACBAB8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ACBAECu);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-15072));
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 411u, 0x08A4B464u>(ctx, &aot_mem) && ctx.pc == 0x08ACBAECu) goto L_08ACBAEC;
    return;
L_08ACBAEC:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACBB00;
      }
      goto L_08ACBAF8;
    }
L_08ACBAF8:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACBB18;
      }
      goto L_08ACBB00;
    }
L_08ACBB00:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACBB30;
      }
      goto L_08ACBB10;
    }
L_08ACBB10:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACBB50;
      }
      goto L_08ACBB18;
    }
L_08ACBB18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[17] - ctx.gpr[18]);
    ctx.gpr[31] = (0x08ACBB28u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 676u, 0x0890BB8Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACBB28u) goto L_08ACBB28;
    return;
L_08ACBB28:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08ACBB50;
      }
      goto L_08ACBB30;
    }
L_08ACBB30:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACBB3Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08ACBA20;
L_08ACBB3C:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACBB30;
      }
      goto L_08ACBB50;
    }
L_08ACBB50:
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
L_08ACBB68:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-336));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(296), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(300), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(304), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(308), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(312), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(316), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(320), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(324), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(328), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ACBBA4u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 423u, 0x08A4B554u>(ctx, &aot_mem) && ctx.pc == 0x08ACBBA4u) goto L_08ACBBA4;
    return;
L_08ACBBA4:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[21] = (0u | 2u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACBBBCu);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 423u, 0x08A4B554u>(ctx, &aot_mem) && ctx.pc == 0x08ACBBBCu) goto L_08ACBBBC;
    return;
L_08ACBBBC:
    ctx.gpr[6] = (16256u << 16u);
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACBBD4u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 446u, 0x08A4B6CCu>(ctx, &aot_mem) && ctx.pc == 0x08ACBBD4u) goto L_08ACBBD4;
    return;
L_08ACBBD4:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x08ACBBE4u);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08ACAAB4;
L_08ACBBE4:
    ctx.gpr[22] = (ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[22]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08ACBBF8;
      }
      goto L_08ACBBF0;
    }
L_08ACBBF0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (0u | 0u);
      if (branch_taken) {
          goto L_08ACBC0C;
      }
      goto L_08ACBBF8;
    }
L_08ACBBF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[4] < ctx.gpr[22] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACBC0C;
      }
      goto L_08ACBC08;
    }
L_08ACBC08:
    ctx.gpr[22] = (ctx.gpr[4] | 0u);
    goto L_08ACBC0C;
L_08ACBC0C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACBC18u);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 618u, 0x0890B88Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACBC18u) goto L_08ACBC18;
    return;
L_08ACBC18:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[20] = (ctx.gpr[22] + ctx.gpr[18]);
      if (branch_taken) {
          goto L_08ACBC38;
      }
      goto L_08ACBC20;
    }
L_08ACBC20:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08ACBC30u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-15032));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 556u, 0x08AEDFA0u>(ctx, &aot_mem) && ctx.pc == 0x08ACBC30u) goto L_08ACBC30;
    return;
L_08ACBC30:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACBCAC;
      }
      goto L_08ACBC38;
    }
L_08ACBC38:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[22]);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08ACBC50u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    goto L_08ACB94C;
L_08ACBC50:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACBCA4;
      }
      goto L_08ACBC5C;
    }
L_08ACBC5C:
    ctx.gpr[17] = (ctx.gpr[19] - ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACBC74u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BB6Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACBC74u) goto L_08ACBC74;
    return;
L_08ACBC74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_08ACBC94;
      }
      goto L_08ACBC88;
    }
L_08ACBC88:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_08ACBC94;
L_08ACBC94:
    ctx.gpr[31] = (0x08ACBC9Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BB6Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACBC9Cu) goto L_08ACBC9C;
    return;
L_08ACBC9C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[21] | 0u);
      if (branch_taken) {
          goto L_08ACBD68;
      }
      goto L_08ACBCA4;
    }
L_08ACBCA4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACBD5C;
      }
      goto L_08ACBCAC;
    }
L_08ACBCAC:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[6] = (0u | 94u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
      if (branch_taken) {
          goto L_08ACBCCC;
      }
      goto L_08ACBCC4;
    }
L_08ACBCC4:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[21] = (ctx.gpr[17] | 0u);
    goto L_08ACBCCC;
L_08ACBCCC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    goto L_08ACBCDC;
L_08ACBCDC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), 0u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08ACBCF0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 109u, 0x08ACC714u>(ctx, &aot_mem) && ctx.pc == 0x08ACBCF0u) goto L_08ACBCF0;
    return;
L_08ACBCF0:
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACBD40;
      }
      goto L_08ACBCFC;
    }
L_08ACBCFC:
    ctx.gpr[4] = (ctx.gpr[20] - ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACBD14u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BB6Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACBD14u) goto L_08ACBD14;
    return;
L_08ACBD14:
    ctx.gpr[4] = (ctx.gpr[23] - ctx.gpr[18]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACBD28u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BB6Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACBD28u) goto L_08ACBD28;
    return;
L_08ACBD28:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08ACBD38u);
    ctx.gpr[6] = (0u | 0u);
    goto L_08ACBAB8;
L_08ACBD38:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08ACBD68;
      }
      goto L_08ACBD40;
    }
L_08ACBD40:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08ACBD5C;
      }
      goto L_08ACBD54;
    }
L_08ACBD54:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACBCDC;
      }
      goto L_08ACBD5C;
    }
L_08ACBD5C:
    ctx.gpr[31] = (0x08ACBD64u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 674u, 0x0890BB54u>(ctx, &aot_mem) && ctx.pc == 0x08ACBD64u) goto L_08ACBD64;
    return;
L_08ACBD64:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    goto L_08ACBD68;
L_08ACBD68:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(296)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(300)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(312)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(316)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(320)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(324)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(328)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(336));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACBD94:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-320));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(288), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(292), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(296), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(300), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(304), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(308), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ACBDBCu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-10002));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 625u, 0x0890B8D8u>(ctx, &aot_mem) && ctx.pc == 0x08ACBDBCu) goto L_08ACBDBC;
    return;
L_08ACBDBC:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACBDCCu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-10002));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 637u, 0x0890B984u>(ctx, &aot_mem) && ctx.pc == 0x08ACBDCCu) goto L_08ACBDCC;
    return;
L_08ACBDCC:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACBDDCu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-10003));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 625u, 0x0890B8D8u>(ctx, &aot_mem) && ctx.pc == 0x08ACBDDCu) goto L_08ACBDDC;
    return;
L_08ACBDDC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACBDFCu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-10004));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 610u, 0x0890B834u>(ctx, &aot_mem) && ctx.pc == 0x08ACBDFCu) goto L_08ACBDFC;
    return;
L_08ACBDFC:
    ctx.gpr[4] = (20224u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (20224u << 16u);
      if (branch_taken) {
          goto L_08ACBE24;
      }
      goto L_08ACBE18;
    }
L_08ACBE18:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08ACBE3C;
      }
      goto L_08ACBE24;
    }
L_08ACBE24:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[17] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[17] = (ctx.gpr[4] + ctx.gpr[17]);
    goto L_08ACBE3C;
L_08ACBE3C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (ctx.gpr[18] + ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[17] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACBEC4;
      }
      goto L_08ACBE50;
    }
L_08ACBE50:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACBE64u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 109u, 0x08ACC714u>(ctx, &aot_mem) && ctx.pc == 0x08ACBE64u) goto L_08ACBE64;
    return;
L_08ACBE64:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACBEB0;
      }
      goto L_08ACBE70;
    }
L_08ACBE70:
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[17];
    ctx.gpr[18] = (ctx.gpr[19] - ctx.gpr[18]);
      if (branch_taken) {
          goto L_08ACBE7C;
      }
      goto L_08ACBE78;
    }
L_08ACBE78:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_08ACBE7C;
L_08ACBE7C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACBE8Cu);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BB6Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACBE8Cu) goto L_08ACBE8C;
    return;
L_08ACBE8C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACBE98u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-10004));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 570u, 0x0890B56Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACBE98u) goto L_08ACBE98;
    return;
L_08ACBE98:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACBEA8u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    goto L_08ACBAB8;
L_08ACBEA8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACBEC8;
      }
      goto L_08ACBEB0;
    }
L_08ACBEB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[17] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACBE50;
      }
      goto L_08ACBEC4;
    }
L_08ACBEC4:
    ctx.gpr[2] = (0u | 0u);
    goto L_08ACBEC8;
L_08ACBEC8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(288)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(292)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(296)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(300)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(320));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACBEE8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ACBF0Cu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 423u, 0x08A4B554u>(ctx, &aot_mem) && ctx.pc == 0x08ACBF0Cu) goto L_08ACBF0C;
    return;
L_08ACBF0C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[31] = (0x08ACBF1Cu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 423u, 0x08A4B554u>(ctx, &aot_mem) && ctx.pc == 0x08ACBF1Cu) goto L_08ACBF1C;
    return;
L_08ACBF1C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACBF28u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 553u, 0x0890B3FCu>(ctx, &aot_mem) && ctx.pc == 0x08ACBF28u) goto L_08ACBF28;
    return;
L_08ACBF28:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[31] = (0x08ACBF34u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BB6Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACBF34u) goto L_08ACBF34;
    return;
L_08ACBF34:
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[31] = (0x08ACBF48u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-17004));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 694u, 0x0890BD50u>(ctx, &aot_mem) && ctx.pc == 0x08ACBF48u) goto L_08ACBF48;
    return;
L_08ACBF48:
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
L_08ACBF60:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[20] = (ctx.gpr[7] | 0u);
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ACBFACu);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 594u, 0x0890B730u>(ctx, &aot_mem) && ctx.pc == 0x08ACBFACu) goto L_08ACBFAC;
    return;
L_08ACBFAC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 15u, 0x08ACC0B8u>(ctx, &aot_mem); return;
      }
      goto L_08ACBFB4;
    }
L_08ACBFB4:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08ACBFC0u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 625u, 0x0890B8D8u>(ctx, &aot_mem) && ctx.pc == 0x08ACBFC0u) goto L_08ACBFC0;
    return;
L_08ACBFC0:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08ACBFD0u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 637u, 0x0890B984u>(ctx, &aot_mem) && ctx.pc == 0x08ACBFD0u) goto L_08ACBFD0;
    return;
L_08ACBFD0:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[23] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[23] < ctx.gpr[19] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 14u, 0x08ACC0B0u>(ctx, &aot_mem); return;
      }
      goto L_08ACBFE4;
    }
L_08ACBFE4:
    ctx.gpr[30] = (ctx.gpr[4] + static_cast<std::uint32_t>(-24896));
    ctx.gpr[21] = (0u | 37u);
    ctx.gpr[22] = (ctx.gpr[17] + static_cast<std::uint32_t>(1036));
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(1));
    goto L_08ACBFF4;
L_08ACBFF4:
    ctx.gpr[20] = (ctx.gpr[18] + ctx.gpr[23]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[21];
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 5u, 0x08ACC034u>(ctx, &aot_mem); return;
      }
      (void)rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 1u, 0x08ACC004u>(ctx, &aot_mem); return;
    }
}

void recomp_unit_0177(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0177_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_177(Runtime &runtime) {
    runtime.register_generated_unit(177u, 0x08AC8000u, 16384u, &recomp_unit_0177, &recomp_unit_0177_entry);
    runtime.register_function(0x08AC8000u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8018u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8024u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8034u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC803Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8080u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC809Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC80C8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC80E0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC80F0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8118u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8120u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8138u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC813Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC815Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8160u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8170u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8180u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8198u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC81ACu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC81C8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC81E8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8210u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8220u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC824Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8268u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC82F4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC82F8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC831Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC832Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8334u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8340u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8348u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC836Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC838Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8394u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC83CCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC83DCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC840Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8424u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8430u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8440u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC844Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8460u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC846Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC847Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8488u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC84B4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC84D0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC84E8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC84FCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8508u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8510u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8518u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8524u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8530u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8538u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8558u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8564u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC856Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8578u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8580u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8590u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC859Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC85A0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC85A8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC85B4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC85D4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC85DCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC85E8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC85F0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC85FCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8604u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8610u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8614u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8624u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8630u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8664u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC866Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8674u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8680u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8690u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8698u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC86B4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC86BCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC86E0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC86E8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC86F0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC86F8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8700u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8724u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC874Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8754u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC879Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC87B0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC87CCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC87E0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC87F4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8808u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8810u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8878u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC888Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC88A0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC88B4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC88BCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC88D0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC88D8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC88E0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC88E8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC891Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8924u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8938u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8940u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8954u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC895Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8970u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8978u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC898Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8994u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC89A8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC89B0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC89C4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC89CCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC89E0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC89E8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8A14u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8A1Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8A24u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8A2Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8A34u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8A4Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8A54u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8A6Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8A80u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8A8Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8A9Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8AA4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8AB0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8AC0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8AD4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8AD8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8AF4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8BB8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8BF0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8BF8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8C08u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8C10u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8C14u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8C34u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8C40u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8C48u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8C54u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8C5Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8C88u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8C9Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8CBCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8CF0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8D08u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8D30u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8D4Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8D6Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8D74u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8D7Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8D80u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8D88u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8DA4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8DACu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8DB0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8DC8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8DE0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8DECu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8DF4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8E28u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8E38u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8E44u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8E60u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8E64u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8E78u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8E90u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8EA0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8EB0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8EB8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8EC0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8ED4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8EE8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8F08u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8F2Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8F54u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8F60u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9004u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9104u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9188u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC91A0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC91ACu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC91C8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC91D4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC91F8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9208u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC926Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9294u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC92A0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC92B0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC92B8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC92C4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC92CCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC92DCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC92ECu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC92F4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC92FCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9304u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9314u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9344u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC934Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9394u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC939Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC93A8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC93B8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC93D0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC93E8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC93F4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC93FCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC940Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9414u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC943Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9454u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9460u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9468u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9490u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC94A8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC94B8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC94C0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC94E0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9500u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC950Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9540u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC95A0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC95C8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC95D0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC95DCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC95E8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC95F8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9608u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9618u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9620u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9624u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9694u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9730u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9738u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9744u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9748u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC977Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC978Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC97ACu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC97F8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9800u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9850u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC986Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9888u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9890u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC98E0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC98ECu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9914u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9B2Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9B44u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9B50u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9C20u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9C38u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9C74u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9C98u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9CA4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9CC4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9CCCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9CD8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9CE0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9CECu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9CF4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9D1Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9D30u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9D4Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9D50u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9DF4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9E04u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9E24u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9E64u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9E6Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9EB0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9EC8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9EE0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9EECu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9EF4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9F2Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9F84u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9FA0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9FE4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA078u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA08Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA098u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA0A8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA0C0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA0ECu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA108u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA13Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA168u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA194u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA1C0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA1C8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA1D0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA1D8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA1E0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA1E4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA1ECu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA220u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA244u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA24Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA254u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA260u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA280u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA294u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA29Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA2A0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA2B0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA2CCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA2D4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA2DCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA2E8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA2F0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA2F8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA300u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA308u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA314u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA338u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA340u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA354u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA360u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA384u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA38Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA39Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA3A4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA3B0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA3B4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA3C8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA3CCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA3F4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA410u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA430u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA44Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA46Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA488u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA494u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA4ACu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA4B4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA4B8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA4CCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA4D4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA4E4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA4FCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA514u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA524u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA540u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA55Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA578u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA594u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA5B0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA5CCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA5E0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA5E8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA5ECu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA5F8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA624u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA640u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA658u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA660u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA664u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA66Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA67Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA68Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA6A0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA6B0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA6CCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA6E4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA6ECu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA6F0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA6F8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA708u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA718u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA72Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA73Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA774u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA78Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA794u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA798u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA7A0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA7ACu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA7B8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA7C8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA7DCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA7E4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA7F8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA800u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA804u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA80Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA820u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA828u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA82Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA834u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA848u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA850u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA854u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA85Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA870u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA878u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA87Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA884u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA898u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA8A0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA8A4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA8ACu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA8C0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA8C8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA8CCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA8D4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA8E8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA8F0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA8F4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA8FCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA910u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA918u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA91Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA924u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA930u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA9ACu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA9C0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAA54u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAA78u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAA88u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAA94u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAA9Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAAB4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAABCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAAC4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAACCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAAF8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAB08u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAB18u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAB30u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAB40u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAB50u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAB54u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAB60u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAB64u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAB70u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAB88u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAB90u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACABA4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACABC4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACABF8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAC0Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAC20u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAC2Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAC3Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAC44u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAC48u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAC64u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAC6Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAC90u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAC98u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACACC0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACACF4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAD08u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAD1Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAD28u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAD38u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAD40u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAD44u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAD60u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAD68u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAD8Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAD94u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACADBCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACADF0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAE00u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAE18u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAE24u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAE34u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAE44u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAE4Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAE74u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAE9Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAEB4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAEC4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAED0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAEE0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAEE8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAF04u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAF08u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAF20u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAF4Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAF60u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAF6Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAF78u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAF84u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAF98u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAFA4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAFB4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAFBCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAFDCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAFE4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB010u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB020u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB030u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB058u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB068u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB07Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB084u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB094u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB09Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB0B8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB0CCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB0DCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB0F0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB100u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB108u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB114u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB130u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB138u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB144u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB154u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB164u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB16Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB178u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB190u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB19Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB1A8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB1B0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB1BCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB1CCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB1D4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB1DCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB1F0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB1F4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB1FCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB208u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB218u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB220u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB23Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB254u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB268u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB270u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB27Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB284u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB290u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB2B0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB2B8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB2C8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB2E0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB2F4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB308u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB31Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB330u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB344u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB358u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB36Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB380u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB394u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB3A0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB3ACu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB3B8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB3C0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB3FCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB404u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB414u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB418u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB424u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB434u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB43Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB44Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB454u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB45Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB468u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB474u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB48Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB4A0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB4A8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB4B4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB4B8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB4DCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB4FCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB508u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB510u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB51Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB524u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB52Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB53Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB544u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB550u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB55Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB570u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB57Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB598u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB5A8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB5B4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB5BCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB5D4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB5E4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB5F0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB5FCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB604u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB60Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB614u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB61Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB620u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB62Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB668u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB670u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB684u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB68Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB6A0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB6A8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB6B8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB6C0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB6C8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB6D4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB6D8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB6F8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB728u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB738u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB740u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB750u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB764u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB76Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB774u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB77Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB784u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB78Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB7ACu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB7DCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB7FCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB80Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB838u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB840u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB84Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB85Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB884u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB8A8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB8B0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB8B8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB8D4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB8F4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB914u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB924u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB92Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB934u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB938u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB94Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB97Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB988u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB990u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB998u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB9A0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB9A8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB9B8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB9C4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB9D8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB9E0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB9F0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB9F8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBA00u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBA20u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBA40u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBA60u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBA70u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBA7Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBA98u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBAA0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBAACu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBAB8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBAECu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBAF8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBB00u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBB10u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBB18u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBB28u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBB30u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBB3Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBB50u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBB68u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBBA4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBBBCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBBD4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBBE4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBBF0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBBF8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBC08u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBC0Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBC18u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBC20u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBC30u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBC38u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBC50u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBC5Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBC74u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBC88u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBC94u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBC9Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBCA4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBCACu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBCC4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBCCCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBCDCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBCF0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBCFCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBD14u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBD28u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBD38u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBD40u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBD54u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBD5Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBD64u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBD68u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBD94u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBDBCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBDCCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBDDCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBDFCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBE18u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBE24u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBE3Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBE50u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBE64u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBE70u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBE78u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBE7Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBE8Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBE98u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBEA8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBEB0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBEC4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBEC8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBEE8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBF0Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBF1Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBF28u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBF34u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBF48u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBF60u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBFACu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBFB4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBFC0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBFD0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBFE4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBFF4u, &recomp_unit_0177, "recomp_unit_0177");
}
} // namespace psprecomp
