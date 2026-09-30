#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0072[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    4, 0, 0, 0, 5, 0, 0, 6, 0, 0, 0, 7, 0, 8, 0, 0, 0, 9, 0, 0, 0, 0, 10, 0, 0, 0, 11, 0, 0, 12, 0, 0,
    0, 0, 13, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15,
    0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 18,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 20, 0, 0, 0,
    0, 0, 0, 0, 0, 21, 0, 0, 0, 22, 0, 0, 0, 0, 23, 0, 0, 24, 0, 0, 0, 0, 25, 0, 0, 26, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 31, 32, 0, 0, 33, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 35, 0, 0, 0, 0,
    36, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    39, 0, 0, 0, 40, 0, 0, 0, 0, 41, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 46, 0, 0, 0, 0,
    0, 47, 0, 48, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 50, 51, 52, 0, 53, 0, 54, 0, 55, 0, 0, 0, 0, 0, 0, 56,
    0, 0, 0, 0, 0, 0, 57, 58, 59, 0, 60, 0, 61, 0, 62, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 64, 65, 66, 0,
    67, 0, 68, 0, 69, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 71, 72, 73, 0, 74, 0, 75, 0, 76, 0, 0, 77, 0, 78,
    0, 0, 79, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 83, 0, 0, 0, 0, 0, 0, 84, 85, 86, 0, 87, 0, 88, 0, 89, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 91, 92,
    93, 0, 94, 0, 95, 0, 96, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 98, 99, 100, 0, 101, 0, 102, 0, 103, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 105, 106, 107,
    0, 108, 0, 109, 0, 110, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 112, 113, 114, 0, 115, 0, 116, 0, 117, 0, 0, 0, 0,
    0, 0, 118, 0, 0, 0, 0, 0, 0, 119, 120, 121, 0, 122, 0, 123, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 125, 0, 0, 0, 0, 0, 0, 126, 127, 128, 0, 129, 0, 130, 0, 131, 0, 0, 0, 132, 0, 133, 0, 134, 0, 0, 0, 135, 0, 136,
    0, 137, 0, 0, 0, 138, 0, 0, 139, 0, 140, 0, 0, 0, 141, 0, 0, 142, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 146, 0, 0, 0, 147, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 149, 0, 150, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 152, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 155, 0, 156, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 161, 0, 162, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0,
    0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 167, 0, 168, 0, 0, 0, 0, 169, 0, 0,
    0, 0, 0, 0, 170, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 173, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 178, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 185, 186, 0, 0,
    0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 190, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0,
    0, 0, 193, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 200, 0, 0, 201, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 203, 0, 0, 0, 0, 0, 204, 0, 205, 0, 206, 0, 207, 0, 208, 0,
    209, 0, 210, 211, 0, 212, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0,
    216, 0, 0, 0, 0, 0, 0, 217, 0, 218, 0, 0, 0, 219, 0, 220, 0, 221, 0, 222, 223, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 225, 0, 226, 0, 0, 227, 0, 0, 228, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0,
    0, 232, 0, 233, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 238,
    0, 239, 240, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 248, 0, 0, 249, 0, 0, 250, 0, 0, 251, 0, 0, 252, 0, 0, 253,
    0, 0, 254, 0, 0, 255, 0, 0, 256, 0, 0, 257, 0, 0, 258, 0, 0, 259, 0, 0, 260, 0, 0, 261, 0, 0, 262, 0, 0, 263, 0, 0,
    264, 0, 0, 265, 0, 0, 266, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 268, 0, 0, 269, 0, 0, 0, 0, 270, 0, 0, 271, 0, 0, 0,
    0, 0, 0, 0, 0, 272, 0, 273, 0, 0, 274, 0, 0, 0, 0, 275, 0, 0, 0, 0, 276, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 278, 0, 0, 279, 0, 0, 0, 280, 0, 0, 0, 0, 281, 0, 0, 0, 282, 0, 0, 283, 0, 0, 0, 284, 0, 0, 285, 0, 286,
    0, 0, 287, 0, 0, 0, 288, 0, 0, 289, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 292, 0,
    0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 295, 0, 296, 0, 0, 0, 0, 297, 0, 0, 0, 298, 0, 299, 0, 0, 0, 300,
    0, 0, 301, 302, 0, 303, 0, 0, 0, 304, 0, 0, 0, 0, 305, 0, 306, 0, 307, 0, 0, 0, 0, 308, 0, 309, 0, 0, 0, 310, 0, 0,
    0, 0, 311, 0, 312, 0, 0, 0, 0, 313, 0, 0, 0, 0, 314, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 316, 0, 0, 317, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 319, 0, 320, 0, 0, 0, 321, 0,
    322, 0, 323, 0, 324, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 327, 0, 0, 328, 0, 0, 0, 0, 329, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 332, 0, 0, 333, 0, 0, 0, 0,
    0, 0, 0, 334, 0, 0, 335, 0, 0, 336, 0, 0, 0, 337, 0, 0, 0, 0, 0, 338, 0, 339, 0, 0, 0, 0, 0, 0, 0, 0, 340, 0,
    341, 0, 342, 343, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0,
    346, 0, 0, 347, 0, 0, 348, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 350, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0,
    0, 353, 0, 354, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 356, 0, 357, 0, 358, 0, 0, 0, 0, 0, 359, 0, 360, 0, 361, 0, 362, 0,
    0, 363, 0, 364, 0, 365, 366, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0,
    0, 369, 0, 0, 0, 0, 0, 0, 370, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 372, 0, 0, 373, 0, 0, 374, 0, 0, 0, 375, 0, 0,
    0, 0, 0, 376, 0, 377, 0, 0, 0, 0, 0, 0, 0, 0, 378, 0, 379, 0, 380, 381, 0, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 383, 0, 0, 0, 0, 0, 384, 0, 0, 385, 0, 0, 386, 0, 0, 0, 387, 0, 0, 0, 0, 0,
    0, 388, 0, 0, 389, 0, 0, 0, 0, 0, 0, 0, 390, 0, 0, 0, 0, 391, 0, 392, 0, 0, 0, 0, 0, 0, 0, 393, 0, 0, 394, 0,
    395, 0, 396, 0, 0, 397, 0, 398, 0, 399, 0, 400, 0, 0, 401, 0, 402, 0, 403, 404, 0, 0, 0, 0, 0, 0, 0, 405, 0, 0, 0, 0,
    406, 0, 0, 0, 0, 407, 0, 0, 408, 0, 0, 0, 409, 0, 0, 0, 410, 0, 411, 0, 0, 0, 0, 412, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 413, 0, 0, 0, 0, 414, 0, 0, 415, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 416, 0, 417, 0, 418, 0, 0, 0, 0, 0, 0, 0, 419, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 420, 0, 0, 0, 0, 421, 0, 0, 422, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 423, 0, 424, 0, 425, 0, 0, 0, 0, 0, 0, 0, 426, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 427, 0,
    428, 0, 0, 0, 0, 429, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 430, 0, 0, 0, 0, 431, 0, 0, 0, 0, 0, 0, 432, 0,
    433, 0, 0, 434, 0, 0, 0, 0, 0, 0, 0, 435, 0, 0, 436, 0, 0, 437, 0, 0, 438, 0, 0, 0, 439, 0, 0, 0, 0, 440, 0, 441,
    0, 442, 443, 0, 0, 0, 0, 0, 444, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 445, 0, 0, 0, 0, 0, 0, 446, 0, 447, 0,
    0, 448, 0, 0, 0, 0, 0, 0, 0, 449, 0, 0, 450, 0, 0, 451, 0, 0, 452, 0, 0, 0, 453, 0, 0, 0, 0, 454, 0, 455, 0, 456,
    457, 0, 0, 0, 0, 0, 458, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 459, 0, 0, 0, 0, 460, 0, 0, 0, 0, 0,
    461, 0, 0, 462, 0, 0, 463, 0, 0, 0, 464, 0, 0, 0, 0, 0, 465, 0, 0, 0, 0, 0, 466, 0, 467, 0, 0, 0, 0, 0, 0, 0,
    468, 0, 0, 469, 0, 470, 0, 471, 0, 472, 0, 473, 474, 0, 0, 0, 0, 0, 0, 0, 475, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 476, 0, 0, 0, 0, 0, 477, 0, 0, 478, 0, 0, 479, 0, 0, 0, 480, 0, 0, 0, 0, 0, 0, 481, 0, 0, 482, 0, 0,
    0, 0, 0, 0, 0, 483, 0, 0, 0, 0, 484, 0, 485, 0, 0, 0, 0, 0, 0, 0, 486, 0, 0, 487, 0, 488, 0, 489, 0, 490, 0, 491,
    492, 0, 0, 0, 0, 0, 0, 0, 493, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 494, 0, 495, 0, 0, 0, 0, 496, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 497, 0, 498, 0, 0, 499, 0, 0, 0, 0, 500, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 501, 0, 502,
    0, 0, 0, 0, 503, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 504, 0, 505, 0, 0, 506, 0, 0, 0, 0, 507, 0, 0, 0, 0, 0,
    0, 0, 508, 0, 0, 0, 0, 0, 509, 0, 510, 0, 0, 511, 0, 0, 0, 0, 0, 512, 0, 513, 0, 514, 0, 515, 0, 516, 0, 517, 0, 0,
    0, 0, 518, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 519, 0, 0, 520, 0, 0, 0, 0, 521, 0, 0,
    0, 522, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 523, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 524, 0, 0, 0, 0, 525, 0, 0, 0, 0,
    0, 526, 0, 527, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 528, 0, 0, 0, 0, 0, 0, 0, 529, 0, 530, 0, 0, 0, 0, 0, 531,
    0, 0, 0, 0, 0, 0, 0, 532, 0, 533, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 534, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    535, 0, 536, 0, 0, 0, 0, 537, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 538, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 539, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 540, 0, 0, 541, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 542, 543, 0, 0, 544, 545, 0, 0, 546, 0, 0, 547, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 548, 0, 0, 549, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 550, 0, 0, 0, 551, 0, 0, 0, 552, 553, 0, 0, 0, 554, 0, 0, 0,
    555, 556, 0, 557, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 558, 0, 0, 0, 0, 0, 559, 0, 0, 0, 0, 0, 560, 0, 0, 0, 0, 0,
    561, 562, 0, 563, 0, 0, 0, 564, 0, 0, 0, 565, 0, 0, 0, 0, 0, 566, 0, 0, 0, 0, 0, 567, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 568, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 569, 0, 0, 0, 0, 0, 0, 0, 570, 0, 0, 0,
    0, 0, 571, 0, 0, 572, 0, 0, 0, 0, 0, 0, 573, 0, 0, 574, 0, 0, 0, 0, 0, 0, 575, 0, 0, 0, 0, 0, 0, 0, 576, 0,
    0, 577, 0, 578, 0, 0, 0, 0, 0, 0, 0, 579, 0, 0, 0, 0, 0, 0, 0, 580, 0, 0, 581, 0, 0, 0, 582, 0, 0, 0, 0, 0,
    0, 0, 0, 583, 0, 584, 0, 0, 585, 0, 586, 587, 0, 588, 0, 0, 0, 0, 0, 0, 0, 0, 0, 589, 0, 590, 0, 0, 591, 0, 592, 0,
    593, 0, 0, 594, 0, 595, 0, 0, 596, 0, 0, 0, 0, 597, 0, 0, 0, 598, 599, 0, 0, 0, 0, 0, 0, 0, 600, 0, 0, 0, 0, 0,
    601, 0, 0, 0, 0, 0, 0, 602, 0, 0, 0, 0, 0, 603, 0, 0, 604, 0, 0, 605, 0, 0, 0, 0, 0, 606, 0, 607, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 608, 0, 0, 0, 0, 0, 609, 0, 0, 0, 0, 610, 0, 0, 611, 0, 0, 0, 0, 612, 0,
    613, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 614, 0, 0, 0, 0, 615, 0, 0, 0, 0, 0, 0, 0, 616,
    0, 0, 0, 617, 0, 618, 0, 0, 0, 619, 0, 0, 620, 0, 0, 0, 621, 0, 622, 0, 0, 623, 0, 0, 0, 0, 0, 624, 0, 625, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 626, 0, 0, 0, 627, 0, 0, 0, 628, 0, 629, 0, 0, 630, 0,
    631, 0, 0, 632, 0, 0, 0, 633, 0, 0, 0, 634, 0, 0, 0, 635, 0, 636, 0, 0, 0, 0, 637, 0, 0, 0, 0, 0, 638, 0, 0, 639,
    0, 0, 0, 0, 640, 0, 641, 0, 0, 642, 0, 643, 0, 0, 0, 0, 0, 0, 0, 0, 644, 645, 0, 0, 0, 0, 646, 0, 0, 0, 0, 647,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 648, 0, 0, 0, 0, 0, 0, 0, 0, 0, 649, 0, 0, 0, 0, 0, 0, 650, 0, 0, 0, 0, 0,
    0, 651, 0, 0, 0, 652, 0, 0, 0, 0, 0, 653, 0, 0, 0, 0, 0, 0, 654, 0, 0, 0, 655, 0, 656, 0, 0, 0, 657, 0, 0, 0,
    0, 0, 0, 0, 0, 658, 0, 0, 0, 0, 0, 0, 0, 659, 660, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 661, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 662, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 663, 0, 664, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 665, 0, 0, 666, 0, 0, 0, 667, 0, 0, 0, 668, 0, 0, 669, 0, 0, 0,
    0, 670, 671, 0, 0, 0, 672, 0, 0, 0, 0, 0, 673, 0, 0, 0, 0, 0, 0, 0, 0, 674, 0, 0, 675, 0, 0, 0, 0, 676, 677, 0,
    0, 678, 0, 0, 679, 0, 0, 0, 680, 0, 0, 0, 0, 681, 0, 0, 0, 0, 0, 0, 682, 0, 0, 683, 0, 684, 0, 0, 0, 0, 0, 0,
    685, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 686, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 687, 0, 0, 688, 0, 0, 0, 0, 689,
    0, 0, 0, 0, 0, 690, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 691, 0, 0, 0, 0, 692, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 693, 0, 0, 0, 694, 0, 0, 0, 0, 0, 0, 0, 695, 0, 0, 0, 0, 696, 0, 0, 0, 0, 0, 0, 0, 0, 0, 697,
};
void recomp_unit_0072_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08924000u;
        entry_id = (entry_delta < 16384u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0072[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08924000;
    case 2u: goto L_0892403C;
    case 3u: goto L_08924064;
    case 4u: goto L_08924100;
    case 5u: goto L_08924110;
    case 6u: goto L_0892411C;
    case 7u: goto L_0892412C;
    case 8u: goto L_08924134;
    case 9u: goto L_08924144;
    case 10u: goto L_08924158;
    case 11u: goto L_08924168;
    case 12u: goto L_08924174;
    case 13u: goto L_08924188;
    case 14u: goto L_08924194;
    case 15u: goto L_089241FC;
    case 16u: goto L_08924208;
    case 17u: goto L_08924270;
    case 18u: goto L_0892427C;
    case 19u: goto L_089242E4;
    case 20u: goto L_089242F0;
    case 21u: goto L_08924314;
    case 22u: goto L_08924324;
    case 23u: goto L_08924338;
    case 24u: goto L_08924344;
    case 25u: goto L_08924358;
    case 26u: goto L_08924364;
    case 27u: goto L_089243CC;
    case 28u: goto L_089243D8;
    case 29u: goto L_089244B4;
    case 30u: goto L_089244C4;
    case 31u: goto L_089244E4;
    case 32u: goto L_089244E8;
    case 33u: goto L_089244F4;
    case 34u: goto L_0892455C;
    case 35u: goto L_0892456C;
    case 36u: goto L_08924580;
    case 37u: goto L_0892458C;
    case 38u: goto L_089245D8;
    case 39u: goto L_08924600;
    case 40u: goto L_08924610;
    case 41u: goto L_08924624;
    case 42u: goto L_08924634;
    case 43u: goto L_089246B0;
    case 44u: goto L_089246D8;
    case 45u: goto L_08924768;
    case 46u: goto L_0892476C;
    case 47u: goto L_08924784;
    case 48u: goto L_0892478C;
    case 49u: goto L_089247A4;
    case 50u: goto L_089247C0;
    case 51u: goto L_089247C4;
    case 52u: goto L_089247C8;
    case 53u: goto L_089247D0;
    case 54u: goto L_089247D8;
    case 55u: goto L_089247E0;
    case 56u: goto L_089247FC;
    case 57u: goto L_08924818;
    case 58u: goto L_0892481C;
    case 59u: goto L_08924820;
    case 60u: goto L_08924828;
    case 61u: goto L_08924830;
    case 62u: goto L_08924838;
    case 63u: goto L_08924854;
    case 64u: goto L_08924870;
    case 65u: goto L_08924874;
    case 66u: goto L_08924878;
    case 67u: goto L_08924880;
    case 68u: goto L_08924888;
    case 69u: goto L_08924890;
    case 70u: goto L_089248AC;
    case 71u: goto L_089248C8;
    case 72u: goto L_089248CC;
    case 73u: goto L_089248D0;
    case 74u: goto L_089248D8;
    case 75u: goto L_089248E0;
    case 76u: goto L_089248E8;
    case 77u: goto L_089248F4;
    case 78u: goto L_089248FC;
    case 79u: goto L_08924908;
    case 80u: goto L_08924910;
    case 81u: goto L_08924940;
    case 82u: goto L_08924944;
    case 83u: goto L_08924984;
    case 84u: goto L_089249A0;
    case 85u: goto L_089249A4;
    case 86u: goto L_089249A8;
    case 87u: goto L_089249B0;
    case 88u: goto L_089249B8;
    case 89u: goto L_089249C0;
    case 90u: goto L_089249DC;
    case 91u: goto L_089249F8;
    case 92u: goto L_089249FC;
    case 93u: goto L_08924A00;
    case 94u: goto L_08924A08;
    case 95u: goto L_08924A10;
    case 96u: goto L_08924A18;
    case 97u: goto L_08924A34;
    case 98u: goto L_08924A50;
    case 99u: goto L_08924A54;
    case 100u: goto L_08924A58;
    case 101u: goto L_08924A60;
    case 102u: goto L_08924A68;
    case 103u: goto L_08924A70;
    case 104u: goto L_08924AD8;
    case 105u: goto L_08924AF4;
    case 106u: goto L_08924AF8;
    case 107u: goto L_08924AFC;
    case 108u: goto L_08924B04;
    case 109u: goto L_08924B0C;
    case 110u: goto L_08924B14;
    case 111u: goto L_08924B30;
    case 112u: goto L_08924B4C;
    case 113u: goto L_08924B50;
    case 114u: goto L_08924B54;
    case 115u: goto L_08924B5C;
    case 116u: goto L_08924B64;
    case 117u: goto L_08924B6C;
    case 118u: goto L_08924B88;
    case 119u: goto L_08924BA4;
    case 120u: goto L_08924BA8;
    case 121u: goto L_08924BAC;
    case 122u: goto L_08924BB4;
    case 123u: goto L_08924BBC;
    case 124u: goto L_08924BC4;
    case 125u: goto L_08924C08;
    case 126u: goto L_08924C24;
    case 127u: goto L_08924C28;
    case 128u: goto L_08924C2C;
    case 129u: goto L_08924C34;
    case 130u: goto L_08924C3C;
    case 131u: goto L_08924C44;
    case 132u: goto L_08924C54;
    case 133u: goto L_08924C5C;
    case 134u: goto L_08924C64;
    case 135u: goto L_08924C74;
    case 136u: goto L_08924C7C;
    case 137u: goto L_08924C84;
    case 138u: goto L_08924C94;
    case 139u: goto L_08924CA0;
    case 140u: goto L_08924CA8;
    case 141u: goto L_08924CB8;
    case 142u: goto L_08924CC4;
    case 143u: goto L_08924CCC;
    case 144u: goto L_08924CFC;
    case 145u: goto L_08924D24;
    case 146u: goto L_08924D34;
    case 147u: goto L_08924D44;
    case 148u: goto L_08924D58;
    case 149u: goto L_08924D70;
    case 150u: goto L_08924D78;
    case 151u: goto L_08924DDC;
    case 152u: goto L_08924DF8;
    case 153u: goto L_08924E20;
    case 154u: goto L_08924E5C;
    case 155u: goto L_08924E6C;
    case 156u: goto L_08924E74;
    case 157u: goto L_08924ED4;
    case 158u: goto L_08924EF0;
    case 159u: goto L_08924F18;
    case 160u: goto L_08924F54;
    case 161u: goto L_08924F64;
    case 162u: goto L_08924F6C;
    case 163u: goto L_08924FD4;
    case 164u: goto L_08924FF0;
    case 165u: goto L_0892500C;
    case 166u: goto L_08925048;
    case 167u: goto L_08925058;
    case 168u: goto L_08925060;
    case 169u: goto L_08925074;
    case 170u: goto L_08925090;
    case 171u: goto L_089250A4;
    case 172u: goto L_089250C8;
    case 173u: goto L_089250D0;
    case 174u: goto L_089250D4;
    case 175u: goto L_08925134;
    case 176u: goto L_08925174;
    case 177u: goto L_089251B0;
    case 178u: goto L_089251C0;
    case 179u: goto L_089251C8;
    case 180u: goto L_089251EC;
    case 181u: goto L_08925240;
    case 182u: goto L_08925280;
    case 183u: goto L_089252B4;
    case 184u: goto L_089252E8;
    case 185u: goto L_089252F0;
    case 186u: goto L_089252F4;
    case 187u: goto L_08925314;
    case 188u: goto L_089253D4;
    case 189u: goto L_089253F4;
    case 190u: goto L_0892541C;
    case 191u: goto L_08925424;
    case 192u: goto L_0892546C;
    case 193u: goto L_08925488;
    case 194u: goto L_08925494;
    case 195u: goto L_0892566C;
    case 196u: goto L_089256A4;
    case 197u: goto L_089256B0;
    case 198u: goto L_089256DC;
    case 199u: goto L_08925754;
    case 200u: goto L_0892576C;
    case 201u: goto L_08925778;
    case 202u: goto L_089257B0;
    case 203u: goto L_089257C0;
    case 204u: goto L_089257D8;
    case 205u: goto L_089257E0;
    case 206u: goto L_089257E8;
    case 207u: goto L_089257F0;
    case 208u: goto L_089257F8;
    case 209u: goto L_08925800;
    case 210u: goto L_08925808;
    case 211u: goto L_0892580C;
    case 212u: goto L_08925814;
    case 213u: goto L_08925828;
    case 214u: goto L_08925840;
    case 215u: goto L_08925860;
    case 216u: goto L_08925880;
    case 217u: goto L_0892589C;
    case 218u: goto L_089258A4;
    case 219u: goto L_089258B4;
    case 220u: goto L_089258BC;
    case 221u: goto L_089258C4;
    case 222u: goto L_089258CC;
    case 223u: goto L_089258D0;
    case 224u: goto L_089258D8;
    case 225u: goto L_08925908;
    case 226u: goto L_08925910;
    case 227u: goto L_0892591C;
    case 228u: goto L_08925928;
    case 229u: goto L_08925944;
    case 230u: goto L_08925954;
    case 231u: goto L_08925978;
    case 232u: goto L_08925984;
    case 233u: goto L_0892598C;
    case 234u: goto L_08925994;
    case 235u: goto L_089259B8;
    case 236u: goto L_089259C0;
    case 237u: goto L_089259F0;
    case 238u: goto L_089259FC;
    case 239u: goto L_08925A04;
    case 240u: goto L_08925A08;
    case 241u: goto L_08925A14;
    case 242u: goto L_08925A48;
    case 243u: goto L_08925A78;
    case 244u: goto L_08925AA8;
    case 245u: goto L_08925AD8;
    case 246u: goto L_08925B00;
    case 247u: goto L_08925B2C;
    case 248u: goto L_08925B40;
    case 249u: goto L_08925B4C;
    case 250u: goto L_08925B58;
    case 251u: goto L_08925B64;
    case 252u: goto L_08925B70;
    case 253u: goto L_08925B7C;
    case 254u: goto L_08925B88;
    case 255u: goto L_08925B94;
    case 256u: goto L_08925BA0;
    case 257u: goto L_08925BAC;
    case 258u: goto L_08925BB8;
    case 259u: goto L_08925BC4;
    case 260u: goto L_08925BD0;
    case 261u: goto L_08925BDC;
    case 262u: goto L_08925BE8;
    case 263u: goto L_08925BF4;
    case 264u: goto L_08925C00;
    case 265u: goto L_08925C0C;
    case 266u: goto L_08925C18;
    case 267u: goto L_08925C30;
    case 268u: goto L_08925C44;
    case 269u: goto L_08925C50;
    case 270u: goto L_08925C64;
    case 271u: goto L_08925C70;
    case 272u: goto L_08925C94;
    case 273u: goto L_08925C9C;
    case 274u: goto L_08925CA8;
    case 275u: goto L_08925CBC;
    case 276u: goto L_08925CD0;
    case 277u: goto L_08925CDC;
    case 278u: goto L_08925D0C;
    case 279u: goto L_08925D18;
    case 280u: goto L_08925D28;
    case 281u: goto L_08925D3C;
    case 282u: goto L_08925D4C;
    case 283u: goto L_08925D58;
    case 284u: goto L_08925D68;
    case 285u: goto L_08925D74;
    case 286u: goto L_08925D7C;
    case 287u: goto L_08925D88;
    case 288u: goto L_08925D98;
    case 289u: goto L_08925DA4;
    case 290u: goto L_08925DB0;
    case 291u: goto L_08925DD8;
    case 292u: goto L_08925DF8;
    case 293u: goto L_08925E08;
    case 294u: goto L_08925E28;
    case 295u: goto L_08925E38;
    case 296u: goto L_08925E40;
    case 297u: goto L_08925E54;
    case 298u: goto L_08925E64;
    case 299u: goto L_08925E6C;
    case 300u: goto L_08925E7C;
    case 301u: goto L_08925E88;
    case 302u: goto L_08925E8C;
    case 303u: goto L_08925E94;
    case 304u: goto L_08925EA4;
    case 305u: goto L_08925EB8;
    case 306u: goto L_08925EC0;
    case 307u: goto L_08925EC8;
    case 308u: goto L_08925EDC;
    case 309u: goto L_08925EE4;
    case 310u: goto L_08925EF4;
    case 311u: goto L_08925F08;
    case 312u: goto L_08925F10;
    case 313u: goto L_08925F24;
    case 314u: goto L_08925F38;
    case 315u: goto L_08925F4C;
    case 316u: goto L_08925F68;
    case 317u: goto L_08925F74;
    case 318u: goto L_08925FD8;
    case 319u: goto L_08925FE0;
    case 320u: goto L_08925FE8;
    case 321u: goto L_08925FF8;
    case 322u: goto L_08926000;
    case 323u: goto L_08926008;
    case 324u: goto L_08926010;
    case 325u: goto L_08926020;
    case 326u: goto L_08926050;
    case 327u: goto L_08926058;
    case 328u: goto L_08926064;
    case 329u: goto L_08926078;
    case 330u: goto L_089260B4;
    case 331u: goto L_089260C4;
    case 332u: goto L_089260E0;
    case 333u: goto L_089260EC;
    case 334u: goto L_0892610C;
    case 335u: goto L_08926118;
    case 336u: goto L_08926124;
    case 337u: goto L_08926134;
    case 338u: goto L_0892614C;
    case 339u: goto L_08926154;
    case 340u: goto L_08926178;
    case 341u: goto L_08926180;
    case 342u: goto L_08926188;
    case 343u: goto L_0892618C;
    case 344u: goto L_089261AC;
    case 345u: goto L_089261E8;
    case 346u: goto L_08926200;
    case 347u: goto L_0892620C;
    case 348u: goto L_08926218;
    case 349u: goto L_08926228;
    case 350u: goto L_08926244;
    case 351u: goto L_08926250;
    case 352u: goto L_08926270;
    case 353u: goto L_08926284;
    case 354u: goto L_0892628C;
    case 355u: goto L_089262AC;
    case 356u: goto L_089262B8;
    case 357u: goto L_089262C0;
    case 358u: goto L_089262C8;
    case 359u: goto L_089262E0;
    case 360u: goto L_089262E8;
    case 361u: goto L_089262F0;
    case 362u: goto L_089262F8;
    case 363u: goto L_08926304;
    case 364u: goto L_0892630C;
    case 365u: goto L_08926314;
    case 366u: goto L_08926318;
    case 367u: goto L_08926338;
    case 368u: goto L_08926374;
    case 369u: goto L_08926384;
    case 370u: goto L_089263A0;
    case 371u: goto L_089263AC;
    case 372u: goto L_089263CC;
    case 373u: goto L_089263D8;
    case 374u: goto L_089263E4;
    case 375u: goto L_089263F4;
    case 376u: goto L_0892640C;
    case 377u: goto L_08926414;
    case 378u: goto L_08926438;
    case 379u: goto L_08926440;
    case 380u: goto L_08926448;
    case 381u: goto L_0892644C;
    case 382u: goto L_0892646C;
    case 383u: goto L_089264A8;
    case 384u: goto L_089264C0;
    case 385u: goto L_089264CC;
    case 386u: goto L_089264D8;
    case 387u: goto L_089264E8;
    case 388u: goto L_08926504;
    case 389u: goto L_08926510;
    case 390u: goto L_08926530;
    case 391u: goto L_08926544;
    case 392u: goto L_0892654C;
    case 393u: goto L_0892656C;
    case 394u: goto L_08926578;
    case 395u: goto L_08926580;
    case 396u: goto L_08926588;
    case 397u: goto L_08926594;
    case 398u: goto L_0892659C;
    case 399u: goto L_089265A4;
    case 400u: goto L_089265AC;
    case 401u: goto L_089265B8;
    case 402u: goto L_089265C0;
    case 403u: goto L_089265C8;
    case 404u: goto L_089265CC;
    case 405u: goto L_089265EC;
    case 406u: goto L_08926600;
    case 407u: goto L_08926614;
    case 408u: goto L_08926620;
    case 409u: goto L_08926630;
    case 410u: goto L_08926640;
    case 411u: goto L_08926648;
    case 412u: goto L_0892665C;
    case 413u: goto L_08926694;
    case 414u: goto L_089266A8;
    case 415u: goto L_089266B4;
    case 416u: goto L_08926720;
    case 417u: goto L_08926728;
    case 418u: goto L_08926730;
    case 419u: goto L_08926750;
    case 420u: goto L_08926788;
    case 421u: goto L_0892679C;
    case 422u: goto L_089267A8;
    case 423u: goto L_08926818;
    case 424u: goto L_08926820;
    case 425u: goto L_08926828;
    case 426u: goto L_08926848;
    case 427u: goto L_08926878;
    case 428u: goto L_08926880;
    case 429u: goto L_08926894;
    case 430u: goto L_089268C8;
    case 431u: goto L_089268DC;
    case 432u: goto L_089268F8;
    case 433u: goto L_08926900;
    case 434u: goto L_0892690C;
    case 435u: goto L_0892692C;
    case 436u: goto L_08926938;
    case 437u: goto L_08926944;
    case 438u: goto L_08926950;
    case 439u: goto L_08926960;
    case 440u: goto L_08926974;
    case 441u: goto L_0892697C;
    case 442u: goto L_08926984;
    case 443u: goto L_08926988;
    case 444u: goto L_089269A0;
    case 445u: goto L_089269D4;
    case 446u: goto L_089269F0;
    case 447u: goto L_089269F8;
    case 448u: goto L_08926A04;
    case 449u: goto L_08926A24;
    case 450u: goto L_08926A30;
    case 451u: goto L_08926A3C;
    case 452u: goto L_08926A48;
    case 453u: goto L_08926A58;
    case 454u: goto L_08926A6C;
    case 455u: goto L_08926A74;
    case 456u: goto L_08926A7C;
    case 457u: goto L_08926A80;
    case 458u: goto L_08926A98;
    case 459u: goto L_08926AD4;
    case 460u: goto L_08926AE8;
    case 461u: goto L_08926B00;
    case 462u: goto L_08926B0C;
    case 463u: goto L_08926B18;
    case 464u: goto L_08926B28;
    case 465u: goto L_08926B40;
    case 466u: goto L_08926B58;
    case 467u: goto L_08926B60;
    case 468u: goto L_08926B80;
    case 469u: goto L_08926B8C;
    case 470u: goto L_08926B94;
    case 471u: goto L_08926B9C;
    case 472u: goto L_08926BA4;
    case 473u: goto L_08926BAC;
    case 474u: goto L_08926BB0;
    case 475u: goto L_08926BD0;
    case 476u: goto L_08926C0C;
    case 477u: goto L_08926C24;
    case 478u: goto L_08926C30;
    case 479u: goto L_08926C3C;
    case 480u: goto L_08926C4C;
    case 481u: goto L_08926C68;
    case 482u: goto L_08926C74;
    case 483u: goto L_08926C94;
    case 484u: goto L_08926CA8;
    case 485u: goto L_08926CB0;
    case 486u: goto L_08926CD0;
    case 487u: goto L_08926CDC;
    case 488u: goto L_08926CE4;
    case 489u: goto L_08926CEC;
    case 490u: goto L_08926CF4;
    case 491u: goto L_08926CFC;
    case 492u: goto L_08926D00;
    case 493u: goto L_08926D20;
    case 494u: goto L_08926D50;
    case 495u: goto L_08926D58;
    case 496u: goto L_08926D6C;
    case 497u: goto L_08926D9C;
    case 498u: goto L_08926DA4;
    case 499u: goto L_08926DB0;
    case 500u: goto L_08926DC4;
    case 501u: goto L_08926DF4;
    case 502u: goto L_08926DFC;
    case 503u: goto L_08926E10;
    case 504u: goto L_08926E40;
    case 505u: goto L_08926E48;
    case 506u: goto L_08926E54;
    case 507u: goto L_08926E68;
    case 508u: goto L_08926E88;
    case 509u: goto L_08926EA0;
    case 510u: goto L_08926EA8;
    case 511u: goto L_08926EB4;
    case 512u: goto L_08926ECC;
    case 513u: goto L_08926ED4;
    case 514u: goto L_08926EDC;
    case 515u: goto L_08926EE4;
    case 516u: goto L_08926EEC;
    case 517u: goto L_08926EF4;
    case 518u: goto L_08926F08;
    case 519u: goto L_08926F54;
    case 520u: goto L_08926F60;
    case 521u: goto L_08926F74;
    case 522u: goto L_08926F84;
    case 523u: goto L_08927014;
    case 524u: goto L_08927058;
    case 525u: goto L_0892706C;
    case 526u: goto L_08927084;
    case 527u: goto L_0892708C;
    case 528u: goto L_089270BC;
    case 529u: goto L_089270DC;
    case 530u: goto L_089270E4;
    case 531u: goto L_089270FC;
    case 532u: goto L_0892711C;
    case 533u: goto L_08927124;
    case 534u: goto L_08927154;
    case 535u: goto L_08927180;
    case 536u: goto L_08927188;
    case 537u: goto L_0892719C;
    case 538u: goto L_089271F4;
    case 539u: goto L_08927238;
    case 540u: goto L_08927268;
    case 541u: goto L_08927274;
    case 542u: goto L_089272A4;
    case 543u: goto L_089272A8;
    case 544u: goto L_089272B4;
    case 545u: goto L_089272B8;
    case 546u: goto L_089272C4;
    case 547u: goto L_089272D0;
    case 548u: goto L_08927304;
    case 549u: goto L_08927310;
    case 550u: goto L_0892733C;
    case 551u: goto L_0892734C;
    case 552u: goto L_0892735C;
    case 553u: goto L_08927360;
    case 554u: goto L_08927370;
    case 555u: goto L_08927380;
    case 556u: goto L_08927384;
    case 557u: goto L_0892738C;
    case 558u: goto L_08927438;
    case 559u: goto L_08927450;
    case 560u: goto L_08927468;
    case 561u: goto L_08927480;
    case 562u: goto L_08927484;
    case 563u: goto L_0892748C;
    case 564u: goto L_0892749C;
    case 565u: goto L_089274AC;
    case 566u: goto L_089274C4;
    case 567u: goto L_089274DC;
    case 568u: goto L_0892750C;
    case 569u: goto L_08927550;
    case 570u: goto L_08927570;
    case 571u: goto L_08927588;
    case 572u: goto L_08927594;
    case 573u: goto L_089275B0;
    case 574u: goto L_089275BC;
    case 575u: goto L_089275D8;
    case 576u: goto L_089275F8;
    case 577u: goto L_08927604;
    case 578u: goto L_0892760C;
    case 579u: goto L_0892762C;
    case 580u: goto L_0892764C;
    case 581u: goto L_08927658;
    case 582u: goto L_08927668;
    case 583u: goto L_0892768C;
    case 584u: goto L_08927694;
    case 585u: goto L_089276A0;
    case 586u: goto L_089276A8;
    case 587u: goto L_089276AC;
    case 588u: goto L_089276B4;
    case 589u: goto L_089276DC;
    case 590u: goto L_089276E4;
    case 591u: goto L_089276F0;
    case 592u: goto L_089276F8;
    case 593u: goto L_08927700;
    case 594u: goto L_0892770C;
    case 595u: goto L_08927714;
    case 596u: goto L_08927720;
    case 597u: goto L_08927734;
    case 598u: goto L_08927744;
    case 599u: goto L_08927748;
    case 600u: goto L_08927768;
    case 601u: goto L_08927780;
    case 602u: goto L_0892779C;
    case 603u: goto L_089277B4;
    case 604u: goto L_089277C0;
    case 605u: goto L_089277CC;
    case 606u: goto L_089277E4;
    case 607u: goto L_089277EC;
    case 608u: goto L_0892782C;
    case 609u: goto L_08927844;
    case 610u: goto L_08927858;
    case 611u: goto L_08927864;
    case 612u: goto L_08927878;
    case 613u: goto L_08927880;
    case 614u: goto L_089278C8;
    case 615u: goto L_089278DC;
    case 616u: goto L_089278FC;
    case 617u: goto L_0892790C;
    case 618u: goto L_08927914;
    case 619u: goto L_08927924;
    case 620u: goto L_08927930;
    case 621u: goto L_08927940;
    case 622u: goto L_08927948;
    case 623u: goto L_08927954;
    case 624u: goto L_0892796C;
    case 625u: goto L_08927974;
    case 626u: goto L_089279C4;
    case 627u: goto L_089279D4;
    case 628u: goto L_089279E4;
    case 629u: goto L_089279EC;
    case 630u: goto L_089279F8;
    case 631u: goto L_08927A00;
    case 632u: goto L_08927A0C;
    case 633u: goto L_08927A1C;
    case 634u: goto L_08927A2C;
    case 635u: goto L_08927A3C;
    case 636u: goto L_08927A44;
    case 637u: goto L_08927A58;
    case 638u: goto L_08927A70;
    case 639u: goto L_08927A7C;
    case 640u: goto L_08927A90;
    case 641u: goto L_08927A98;
    case 642u: goto L_08927AA4;
    case 643u: goto L_08927AAC;
    case 644u: goto L_08927AD0;
    case 645u: goto L_08927AD4;
    case 646u: goto L_08927AE8;
    case 647u: goto L_08927AFC;
    case 648u: goto L_08927B24;
    case 649u: goto L_08927B4C;
    case 650u: goto L_08927B68;
    case 651u: goto L_08927B84;
    case 652u: goto L_08927B94;
    case 653u: goto L_08927BAC;
    case 654u: goto L_08927BC8;
    case 655u: goto L_08927BD8;
    case 656u: goto L_08927BE0;
    case 657u: goto L_08927BF0;
    case 658u: goto L_08927C14;
    case 659u: goto L_08927C34;
    case 660u: goto L_08927C38;
    case 661u: goto L_08927C6C;
    case 662u: goto L_08927C94;
    case 663u: goto L_08927CE8;
    case 664u: goto L_08927CF0;
    case 665u: goto L_08927D38;
    case 666u: goto L_08927D44;
    case 667u: goto L_08927D54;
    case 668u: goto L_08927D64;
    case 669u: goto L_08927D70;
    case 670u: goto L_08927D84;
    case 671u: goto L_08927D88;
    case 672u: goto L_08927D98;
    case 673u: goto L_08927DB0;
    case 674u: goto L_08927DD4;
    case 675u: goto L_08927DE0;
    case 676u: goto L_08927DF4;
    case 677u: goto L_08927DF8;
    case 678u: goto L_08927E04;
    case 679u: goto L_08927E10;
    case 680u: goto L_08927E20;
    case 681u: goto L_08927E34;
    case 682u: goto L_08927E50;
    case 683u: goto L_08927E5C;
    case 684u: goto L_08927E64;
    case 685u: goto L_08927E80;
    case 686u: goto L_08927EB0;
    case 687u: goto L_08927EDC;
    case 688u: goto L_08927EE8;
    case 689u: goto L_08927EFC;
    case 690u: goto L_08927F14;
    case 691u: goto L_08927F48;
    case 692u: goto L_08927F5C;
    case 693u: goto L_08927F90;
    case 694u: goto L_08927FA0;
    case 695u: goto L_08927FC0;
    case 696u: goto L_08927FD4;
    case 697u: goto L_08927FFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08924000:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(464))))));
    ctx.gpr[5] = (rt.memory().aot_load_word_right(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[5]));
    ctx.gpr[5] = (rt.memory().aot_load_word_left(ctx.gpr[17] + static_cast<std::uint32_t>(3), ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[4] << 24u);
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 24u));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0892403C;
L_0892403C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08924064:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[10]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] << 8u);
    ctx.gpr[8] = (ctx.gpr[8] << 8u);
    ctx.gpr[6] = (ctx.gpr[9] | ctx.gpr[6]);
    ctx.gpr[7] = (ctx.gpr[7] | ctx.gpr[8]);
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[7] & 65535u);
    ctx.gpr[6] = (ctx.gpr[6] << 16u);
    ctx.gpr[17] = (ctx.gpr[17] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[6] = (ctx.gpr[17] & 8192u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[20] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08924110;
      }
      goto L_08924100;
    }
L_08924100:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08924110u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 283u, 0x08A4A750u>(ctx, &aot_mem) && ctx.pc == 0x08924110u) goto L_08924110;
    return;
L_08924110:
    ctx.gpr[4] = (ctx.gpr[17] & 32768u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892412C;
      }
      goto L_0892411C;
    }
L_0892411C:
    ctx.gpr[6] = (ctx.gpr[19] + static_cast<std::uint32_t>(468));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0892412Cu);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0071_entry, 71u, 222u, 0x089224B4u>(ctx, &aot_mem) && ctx.pc == 0x0892412Cu) goto L_0892412C;
    return;
L_0892412C:
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[21] = (0u | 128u);
    goto L_08924134;
L_08924134:
    ctx.gpr[4] = (ctx.gpr[21] << (ctx.gpr[22] & 31u));
    ctx.gpr[4] = (ctx.gpr[17] & ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08924158;
      }
      goto L_08924144;
    }
L_08924144:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08924158u);
    ctx.gpr[7] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0071_entry, 71u, 148u, 0x08921604u>(ctx, &aot_mem) && ctx.pc == 0x08924158u) goto L_08924158;
    return;
L_08924158:
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[22]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08924134;
      }
      goto L_08924168;
    }
L_08924168:
    ctx.gpr[4] = (ctx.gpr[17] & 2048u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08924188;
      }
      goto L_08924174;
    }
L_08924174:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(448), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08924188;
L_08924188:
    ctx.gpr[4] = (ctx.gpr[17] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089241FC;
      }
      goto L_08924194;
    }
L_08924194:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] << 8u);
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[5] = (ctx.gpr[5] << 8u);
    ctx.gpr[5] = (ctx.gpr[6] | ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(180), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089241FC;
L_089241FC:
    ctx.gpr[4] = (ctx.gpr[17] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08924270;
      }
      goto L_08924208;
    }
L_08924208:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] << 8u);
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[5] = (ctx.gpr[5] << 8u);
    ctx.gpr[5] = (ctx.gpr[6] | ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08924270;
L_08924270:
    ctx.gpr[4] = (ctx.gpr[17] & 4u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089242E4;
      }
      goto L_0892427C;
    }
L_0892427C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] << 8u);
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[5] = (ctx.gpr[5] << 8u);
    ctx.gpr[5] = (ctx.gpr[6] | ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(188), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089242E4;
L_089242E4:
    ctx.gpr[4] = (ctx.gpr[17] & 8u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08924314;
      }
      goto L_089242F0;
    }
L_089242F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] & 127u);
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(195), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(192), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08924314;
L_08924314:
    ctx.gpr[4] = (16u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] & ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08924338;
      }
      goto L_08924324;
    }
L_08924324:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(176), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08924338;
L_08924338:
    ctx.gpr[4] = (ctx.gpr[17] & 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08924358;
      }
      goto L_08924344;
    }
L_08924344:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(194), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08924358;
L_08924358:
    ctx.gpr[4] = (ctx.gpr[17] & 32u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089243CC;
      }
      goto L_08924364;
    }
L_08924364:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] << 8u);
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[5] = (ctx.gpr[5] << 8u);
    ctx.gpr[5] = (ctx.gpr[6] | ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089243CC;
L_089243CC:
    ctx.gpr[4] = (ctx.gpr[17] & 64u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089244B4;
      }
      goto L_089243D8;
    }
L_089243D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[5] = (ctx.gpr[5] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[6] = (ctx.gpr[4] & 64u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(204))))));
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[6] & 1u);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(204), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[6] = (ctx.gpr[4] & 128u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(204))))));
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-3));
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[6] & 1u);
    ctx.gpr[7] = (ctx.gpr[4] & 63u);
    ctx.gpr[6] = (ctx.gpr[6] << 1u);
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(196), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(204), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(204))))));
    ctx.gpr[6] = (ctx.gpr[4] & 512u);
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-5));
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    ctx.gpr[7] = (ctx.gpr[4] & 256u);
    ctx.gpr[6] = (ctx.gpr[6] & 1u);
    ctx.gpr[7] = (0u < ctx.gpr[7] ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(193), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] & 1024u);
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(204), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(204))))));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-9));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(204), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_089244B4;
L_089244B4:
    ctx.gpr[4] = (1u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] & ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089244E8;
      }
      goto L_089244C4;
    }
L_089244C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(206), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(206))))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_089244E8;
      }
      goto L_089244E4;
    }
L_089244E4:
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(208), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_089244E8;
L_089244E8:
    ctx.gpr[4] = (ctx.gpr[17] & 16384u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892455C;
      }
      goto L_089244F4;
    }
L_089244F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] << 8u);
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[5] = (ctx.gpr[5] << 8u);
    ctx.gpr[5] = (ctx.gpr[6] | ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(456), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0892455C;
L_0892455C:
    ctx.gpr[4] = (2u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] & ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08924580;
      }
      goto L_0892456C;
    }
L_0892456C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(207), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08924580;
L_08924580:
    ctx.gpr[4] = (ctx.gpr[17] & 4096u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08924600;
      }
      goto L_0892458C;
    }
L_0892458C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(40));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (ctx.gpr[7] << 8u);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[8]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089245D8u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089245D8u) goto L_089245D8;
    return;
L_089245D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(128), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(129), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08924600;
L_08924600:
    ctx.gpr[4] = (4u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] & ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08924624;
      }
      goto L_08924610;
    }
L_08924610:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(205), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08924624;
L_08924624:
    ctx.gpr[4] = (8u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] & ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089246B0;
      }
      goto L_08924634;
    }
L_08924634:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] << 8u);
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[5] = (ctx.gpr[5] << 8u);
    ctx.gpr[5] = (ctx.gpr[6] | ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(460), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(464), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_089246B0;
L_089246B0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089246D8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[7] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(209));
    ctx.gpr[11] = (46470u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[18]);
    ctx.gpr[11] = (ctx.gpr[11] | 14269u);
    ctx.gpr[6] = (ctx.gpr[18] + ctx.gpr[16]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[11]);
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(209)));
    ctx.gpr[11] = (47747u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[20]);
    ctx.gpr[20] = (ctx.gpr[18] << 2u);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(232));
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(248));
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(264));
    ctx.gpr[11] = (ctx.gpr[11] | 4719u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[21]);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[11]);
    ctx.gpr[8] = (ctx.gpr[17] + static_cast<std::uint32_t>(280));
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[21] = (ctx.gpr[16] + ctx.gpr[20]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[20]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[20]);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[9] == ctx.gpr[10];
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[20]);
      if (branch_taken) {
          goto L_0892476C;
      }
      goto L_08924768;
    }
L_08924768:
    ctx.gpr[19] = (0u | 1u);
    goto L_0892476C;
L_0892476C:
    ctx.gpr[9] = (ctx.gpr[17] + static_cast<std::uint32_t>(216));
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[20]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(216)));
    if (ctx.gpr[9] == ctx.gpr[10]) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
        goto L_0892478C;
    }
    goto L_08924784;
L_08924784:
    ctx.gpr[19] = (ctx.gpr[19] | 2u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    goto L_0892478C;
L_0892478C:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(232)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[9] = (0u | 0u);
      if (branch_taken) {
          goto L_089247C4;
      }
      goto L_089247A4;
    }
L_089247A4:
    ctx.gpr[10] = (13702u << 16u);
    ctx.gpr[10] = (ctx.gpr[10] | 14269u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[10]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[9] = (ctx.gpr[9] & 255u);
      if (branch_taken) {
          goto L_089247C8;
      }
      goto L_089247C0;
    }
L_089247C0:
    ctx.gpr[9] = (0u | 1u);
    goto L_089247C4;
L_089247C4:
    ctx.gpr[9] = (ctx.gpr[9] & 255u);
    goto L_089247C8;
L_089247C8:
    { const bool branch_taken = ctx.gpr[9] != 0u;
    // nop
      if (branch_taken) {
          goto L_089247D8;
      }
      goto L_089247D0;
    }
L_089247D0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[19] | 4u);
      if (branch_taken) {
          goto L_089247E0;
      }
      goto L_089247D8;
    }
L_089247D8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(232), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089247E0;
L_089247E0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(248)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_0892481C;
      }
      goto L_089247FC;
    }
L_089247FC:
    ctx.gpr[9] = (14979u << 16u);
    ctx.gpr[9] = (ctx.gpr[9] | 4719u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_08924820;
      }
      goto L_08924818;
    }
L_08924818:
    ctx.gpr[5] = (0u | 1u);
    goto L_0892481C;
L_0892481C:
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    goto L_08924820;
L_08924820:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08924830;
      }
      goto L_08924828;
    }
L_08924828:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[19] | 8u);
      if (branch_taken) {
          goto L_08924838;
      }
      goto L_08924830;
    }
L_08924830:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(248), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08924838;
L_08924838:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(264)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08924874;
      }
      goto L_08924854;
    }
L_08924854:
    ctx.gpr[6] = (13702u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 14269u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_08924878;
      }
      goto L_08924870;
    }
L_08924870:
    ctx.gpr[5] = (0u | 1u);
    goto L_08924874;
L_08924874:
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    goto L_08924878;
L_08924878:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08924888;
      }
      goto L_08924880;
    }
L_08924880:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[19] | 16u);
      if (branch_taken) {
          goto L_08924890;
      }
      goto L_08924888;
    }
L_08924888:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(264), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08924890;
L_08924890:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(280)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_089248CC;
      }
      goto L_089248AC;
    }
L_089248AC:
    ctx.gpr[6] = (14979u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 4719u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_089248D0;
      }
      goto L_089248C8;
    }
L_089248C8:
    ctx.gpr[5] = (0u | 1u);
    goto L_089248CC;
L_089248CC:
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    goto L_089248D0;
L_089248D0:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089248E0;
      }
      goto L_089248D8;
    }
L_089248D8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[19] | 32u);
      if (branch_taken) {
          goto L_089248E8;
      }
      goto L_089248E0;
    }
L_089248E0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(280), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089248E8;
L_089248E8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(104)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08924CCC;
      }
      goto L_089248F4;
    }
L_089248F4:
    ctx.gpr[31] = (0x089248FCu);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(104)));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x089248FCu) goto L_089248FC;
    return;
L_089248FC:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08924908u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 786u, 0x0889FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x08924908u) goto L_08924908;
    return;
L_08924908:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08924CCC;
      }
      goto L_08924910;
    }
L_08924910:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(432));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[18] << 5u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(304));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(432)));
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(304));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          goto L_08924944;
      }
      goto L_08924940;
    }
L_08924940:
    ctx.gpr[19] = (ctx.gpr[19] | 64u);
    goto L_08924944;
L_08924944:
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_089249A4;
      }
      goto L_08924984;
    }
L_08924984:
    ctx.gpr[7] = (14979u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] | 4719u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
      if (branch_taken) {
          goto L_089249A8;
      }
      goto L_089249A0;
    }
L_089249A0:
    ctx.gpr[6] = (0u | 1u);
    goto L_089249A4;
L_089249A4:
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    goto L_089249A8;
L_089249A8:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_089249B8;
      }
      goto L_089249B0;
    }
L_089249B0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[19] | 128u);
      if (branch_taken) {
          goto L_089249C0;
      }
      goto L_089249B8;
    }
L_089249B8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089249C0;
L_089249C0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_089249FC;
      }
      goto L_089249DC;
    }
L_089249DC:
    ctx.gpr[7] = (14979u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] | 4719u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
      if (branch_taken) {
          goto L_08924A00;
      }
      goto L_089249F8;
    }
L_089249F8:
    ctx.gpr[6] = (0u | 1u);
    goto L_089249FC;
L_089249FC:
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    goto L_08924A00;
L_08924A00:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08924A10;
      }
      goto L_08924A08;
    }
L_08924A08:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[19] | 256u);
      if (branch_taken) {
          goto L_08924A18;
      }
      goto L_08924A10;
    }
L_08924A10:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08924A18;
L_08924A18:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_08924A54;
      }
      goto L_08924A34;
    }
L_08924A34:
    ctx.gpr[7] = (14979u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] | 4719u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
      if (branch_taken) {
          goto L_08924A58;
      }
      goto L_08924A50;
    }
L_08924A50:
    ctx.gpr[6] = (0u | 1u);
    goto L_08924A54;
L_08924A54:
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    goto L_08924A58;
L_08924A58:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08924A68;
      }
      goto L_08924A60;
    }
L_08924A60:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[19] | 512u);
      if (branch_taken) {
          goto L_08924A70;
      }
      goto L_08924A68;
    }
L_08924A68:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08924A70;
L_08924A70:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08924AF8;
      }
      goto L_08924AD8;
    }
L_08924AD8:
    ctx.gpr[6] = (14979u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 4719u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08924AFC;
      }
      goto L_08924AF4;
    }
L_08924AF4:
    ctx.gpr[4] = (0u | 1u);
    goto L_08924AF8;
L_08924AF8:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08924AFC;
L_08924AFC:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08924B0C;
      }
      goto L_08924B04;
    }
L_08924B04:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[19] | 1024u);
      if (branch_taken) {
          goto L_08924B14;
      }
      goto L_08924B0C;
    }
L_08924B0C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08924B14;
L_08924B14:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08924B50;
      }
      goto L_08924B30;
    }
L_08924B30:
    ctx.gpr[6] = (14979u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 4719u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08924B54;
      }
      goto L_08924B4C;
    }
L_08924B4C:
    ctx.gpr[4] = (0u | 1u);
    goto L_08924B50;
L_08924B50:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08924B54;
L_08924B54:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08924B64;
      }
      goto L_08924B5C;
    }
L_08924B5C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[19] | 2048u);
      if (branch_taken) {
          goto L_08924B6C;
      }
      goto L_08924B64;
    }
L_08924B64:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08924B6C;
L_08924B6C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08924BA8;
      }
      goto L_08924B88;
    }
L_08924B88:
    ctx.gpr[6] = (14979u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 4719u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08924BAC;
      }
      goto L_08924BA4;
    }
L_08924BA4:
    ctx.gpr[4] = (0u | 1u);
    goto L_08924BA8;
L_08924BA8:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08924BAC;
L_08924BAC:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08924BBC;
      }
      goto L_08924BB4;
    }
L_08924BB4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[19] | 4096u);
      if (branch_taken) {
          goto L_08924BC4;
      }
      goto L_08924BBC;
    }
L_08924BBC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08924BC4;
L_08924BC4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[15];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08924C28;
      }
      goto L_08924C08;
    }
L_08924C08:
    ctx.gpr[4] = (14979u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4719u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_08924C2C;
      }
      goto L_08924C24;
    }
L_08924C24:
    ctx.gpr[5] = (0u | 1u);
    goto L_08924C28;
L_08924C28:
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
    goto L_08924C2C;
L_08924C2C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08924C3C;
      }
      goto L_08924C34;
    }
L_08924C34:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[19] | 8192u);
      if (branch_taken) {
          goto L_08924C44;
      }
      goto L_08924C3C;
    }
L_08924C3C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08924C44;
L_08924C44:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08924C5C;
      }
      goto L_08924C54;
    }
L_08924C54:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[19] | 16384u);
      if (branch_taken) {
          goto L_08924C64;
      }
      goto L_08924C5C;
    }
L_08924C5C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(29)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(29), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08924C64;
L_08924C64:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(29)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(29)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08924C7C;
      }
      goto L_08924C74;
    }
L_08924C74:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[19] | 32768u);
      if (branch_taken) {
          goto L_08924C84;
      }
      goto L_08924C7C;
    }
L_08924C7C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(29)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(29), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08924C84;
L_08924C84:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(30)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(30)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08924CA0;
      }
      goto L_08924C94;
    }
L_08924C94:
    ctx.gpr[4] = (1u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[19] | ctx.gpr[4]);
      if (branch_taken) {
          goto L_08924CA8;
      }
      goto L_08924CA0;
    }
L_08924CA0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(31)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(31), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08924CA8;
L_08924CA8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(31)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(31)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08924CC4;
      }
      goto L_08924CB8;
    }
L_08924CB8:
    ctx.gpr[4] = (2u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[19] | ctx.gpr[4]);
      if (branch_taken) {
          goto L_08924CCC;
      }
      goto L_08924CC4;
    }
L_08924CC4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(31)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(31), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08924CCC;
L_08924CCC:
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08924CFC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-336));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(320), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(304), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(308), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(312), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(316), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(324), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08924D44;
      }
      goto L_08924D24;
    }
L_08924D24:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(30)));
    ctx.gpr[5] = (0u | 18u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08924D44;
      }
      goto L_08924D34;
    }
L_08924D34:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(30)));
    ctx.gpr[5] = (0u | 33u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08924D70;
      }
      goto L_08924D44;
    }
L_08924D44:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(30)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2));
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(32) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2));
      if (branch_taken) {
          goto L_089251C8;
      }
      goto L_08924D58;
    }
L_08924D58:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2225u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(20216)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08924D70:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089252F4;
      }
      goto L_08924D78;
    }
L_08924D78:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(112)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (48460u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(116)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[5] = (0u | 24u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(80), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(81), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (0u | 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(82), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(83), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08924E6C;
      }
      goto L_08924DDC;
    }
L_08924DDC:
    ctx.gpr[4] = (15523u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.gpr[31] = (0x08924DF8u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x08924DF8u) goto L_08924DF8;
    return;
L_08924DF8:
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[20];
    ctx.gpr[4] = (15605u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 49807u);
    ctx.gpr[5] = (15733u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] | 49807u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x08924E20u);
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[12];
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x08924E20u) goto L_08924E20;
    return;
L_08924E20:
    ctx.fpr[13] = ctx.fpr[22] - ctx.fpr[24];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[4] = (0u | 3u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.fpr[13] = ctx.fpr[24] + ctx.fpr[13];
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x08924E5Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 269u, 0x089998F8u>(ctx, &aot_mem) && ctx.pc == 0x08924E5Cu) goto L_08924E5C;
    return;
L_08924E5C:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08924DDC;
      }
      goto L_08924E6C;
    }
L_08924E6C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089252F4;
      }
      goto L_08924E74;
    }
L_08924E74:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(112)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (48460u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(116)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (0u | 64u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(128), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(129), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (0u | 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(130), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(131), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08924F64;
      }
      goto L_08924ED4;
    }
L_08924ED4:
    ctx.gpr[4] = (15651u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (15800u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 20972u);
    ctx.gpr[31] = (0x08924EF0u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x08924EF0u) goto L_08924EF0;
    return;
L_08924EF0:
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[20];
    ctx.gpr[4] = (15605u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 49807u);
    ctx.gpr[5] = (15733u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] | 49807u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x08924F18u);
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[12];
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x08924F18u) goto L_08924F18;
    return;
L_08924F18:
    ctx.fpr[13] = ctx.fpr[22] - ctx.fpr[24];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    ctx.gpr[4] = (0u | 3u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.fpr[13] = ctx.fpr[24] + ctx.fpr[13];
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x08924F54u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 269u, 0x089998F8u>(ctx, &aot_mem) && ctx.pc == 0x08924F54u) goto L_08924F54;
    return;
L_08924F54:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08924ED4;
      }
      goto L_08924F64;
    }
L_08924F64:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089252F4;
      }
      goto L_08924F6C;
    }
L_08924F6C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(112)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (48460u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(116)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (0u | 64u);
    ctx.gpr[5] = (0u | 32u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(176), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (0u | 16u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(177), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (0u | 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(178), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(179), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08925058;
      }
      goto L_08924FD4;
    }
L_08924FD4:
    ctx.gpr[4] = (15523u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (15733u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 49807u);
    ctx.gpr[31] = (0x08924FF0u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x08924FF0u) goto L_08924FF0;
    return;
L_08924FF0:
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[20];
    ctx.gpr[4] = (15605u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 49807u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[31] = (0x0892500Cu);
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[12];
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x0892500Cu) goto L_0892500C;
    return;
L_0892500C:
    ctx.fpr[13] = ctx.fpr[22] - ctx.fpr[24];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    ctx.gpr[4] = (0u | 3u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.fpr[13] = ctx.fpr[24] + ctx.fpr[13];
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x08925048u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 269u, 0x089998F8u>(ctx, &aot_mem) && ctx.pc == 0x08925048u) goto L_08925048;
    return;
L_08925048:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08924FD4;
      }
      goto L_08925058;
    }
L_08925058:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089252F4;
      }
      goto L_08925060;
    }
L_08925060:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7820)));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089251C0;
      }
      goto L_08925074;
    }
L_08925074:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7816)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (16257u << 16u);
      if (branch_taken) {
          goto L_089250D0;
      }
      goto L_08925090;
    }
L_08925090:
    ctx.gpr[4] = (ctx.gpr[4] | 18350u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x089250A4u);
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7816)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x089250A4u) goto L_089250A4;
    return;
L_089250A4:
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[22];
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[22] + ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_089250D4;
    }
    goto L_089250C8;
L_089250C8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089252F4;
      }
      goto L_089250D0;
    }
L_089250D0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_089250D4;
L_089250D4:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(112)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (16128u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(116)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (0u | 170u);
    ctx.gpr[5] = (0u | 165u);
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(224), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 140u);
    ctx.gpr[16] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(225), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (0u | 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(226), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 1 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(227), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_089251C0;
      }
      goto L_08925134;
    }
L_08925134:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(112));
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
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.gpr[4] = (15523u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (15713u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 18350u);
    ctx.gpr[31] = (0x08925174u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x08925174u) goto L_08925174;
    return;
L_08925174:
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[22];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[22] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
    ctx.gpr[4] = (0u | 4u);
    ctx.gpr[7] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x089251B0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 269u, 0x089998F8u>(ctx, &aot_mem) && ctx.pc == 0x089251B0u) goto L_089251B0;
    return;
L_089251B0:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 1 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08925134;
      }
      goto L_089251C0;
    }
L_089251C0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089252F4;
      }
      goto L_089251C8;
    }
L_089251C8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7816)));
    ctx.gpr[4] = (15395u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089252F0;
      }
      goto L_089251EC;
    }
L_089251EC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (16000u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (0u | 48u);
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(248), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(256), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(257), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (0u | 64u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(248), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(258), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(259), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7820)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089252E8;
      }
      goto L_08925240;
    }
L_08925240:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(280)));
    ctx.gpr[4] = (16000u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(280), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (15267u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (15651u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.gpr[31] = (0x08925280u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x08925280u) goto L_08925280;
    return;
L_08925280:
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[20];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    ctx.fpr[13] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(288), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(292), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(296), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16128u << 16u);
    ctx.gpr[31] = (0x089252B4u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x089252B4u) goto L_089252B4;
    return;
L_089252B4:
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[24];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[24] + ctx.fpr[12];
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(256));
    ctx.gpr[4] = (0u | 39u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(288));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x089252E8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 269u, 0x089998F8u>(ctx, &aot_mem) && ctx.pc == 0x089252E8u) goto L_089252E8;
    return;
L_089252E8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089252F4;
      }
      goto L_089252F0;
    }
L_089252F0:
    ctx.gpr[2] = (0u | 1u);
    goto L_089252F4;
L_089252F4:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(312)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(316)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(320)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(324)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(336));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08925314:
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27700)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[5] = (2227u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(27696)));
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.gpr[10] = (2227u << 16u);
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(27724)));
    ctx.gpr[5] = (16014u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 14571u);
    ctx.gpr[9] = (2230u << 16u);
    ctx.gpr[6] = (0u | 26u);
    ctx.gpr[11] = (2232u << 16u);
    ctx.gpr[2] = (2225u << 16u);
    ctx.gpr[12] = (2227u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[17];
    ctx.gpr[3] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(27704), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(-6921), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(-6921)));
    ctx.gpr[10] = (ctx.gpr[11] + static_cast<std::uint32_t>(6264));
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[9] = (ctx.gpr[2] + static_cast<std::uint32_t>(20188));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    ctx.gpr[7] = (16672u << 16u);
    ctx.gpr[8] = (15744u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[16] / ctx.fpr[15];
    ctx.gpr[13] = (2227u << 16u);
    ctx.gpr[14] = (2227u << 16u);
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(27712), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[17] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(27708), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[8]);
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[13] + static_cast<std::uint32_t>(27716), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[14] + static_cast<std::uint32_t>(27720), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(27728), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089253D4:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(128))))));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(128), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(128))))));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892541C;
      }
      goto L_089253F4;
    }
L_089253F4:
    ctx.gpr[7] = (ctx.gpr[5] << 2u);
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(96), ctx.gpr[8]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_089253F4;
      }
      goto L_0892541C;
    }
L_0892541C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08925424:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    ctx.gpr[6] = (15395u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (ctx.gpr[6] | 55050u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[16]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[17]);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[31]);
    if (ctx.fpu_condition()) {
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
        goto L_0892546C;
    }
    goto L_0892546C;
L_0892546C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[20])));
      if (branch_taken) {
          goto L_08925494;
      }
      goto L_08925488;
    }
L_08925488:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[15];
    goto L_08925494;
L_08925494:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-26612)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[8] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(6))))));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(7))))));
    ctx.fpr[20] = ctx.fpr[20] / ctx.fpr[12];
    ctx.gpr[11] = (15872u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(41))))));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(43))))));
    ctx.gpr[9] = (ctx.gpr[4] << 2u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[9]);
    ctx.fpr[17] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[17])));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.fpr[16] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[16])));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(6))))));
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(7))))));
    ctx.gpr[7] = (16128u << 16u);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[17] = ctx.fpr[17] + ctx.fpr[0];
    ctx.gpr[7] = (16544u << 16u);
    ctx.fpr[4] = std::bit_cast<float>(ctx.gpr[7]);
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[10]);
    ctx.fpr[18] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[18])));
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(42))))));
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[4]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(2))))));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[2] = std::bit_cast<float>(ctx.gpr[11]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(44))))));
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    ctx.fpr[5] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[5] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[5])));
    ctx.fpr[6] = std::bit_cast<float>(0u);
    ctx.fpr[15] = ctx.fpr[18] + ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[6]));
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    { const float fs = ctx.fpr[5]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[5] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[5] = fs * ft; }
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[1])));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[12] = ctx.fpr[5] - ctx.fpr[14];
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    ctx.fpr[3] = std::bit_cast<float>(ctx.gpr[10]);
    ctx.fpr[19] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[19])));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[3] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[3])));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[1] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[15] + ctx.fpr[0];
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[9]);
    { const float fs = ctx.fpr[19]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[19] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[19] = fs * ft; }
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[1] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(2))))));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[4]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[10]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[7]);
    { const float fs = ctx.fpr[19]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[19] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[19] = fs * ft; }
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[6]));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[17];
    ctx.fpr[12] = ctx.fpr[15] - ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[8]);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(7))))));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(6))))));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[9]);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(6))))));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(7))))));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[7]);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[17] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[17])));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.gpr[31] = (0x0892566Cu);
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 145u, 0x0891CACCu>(ctx, &aot_mem) && ctx.pc == 0x0892566Cu) goto L_0892566C;
    return;
L_0892566C:
    ctx.gpr[4] = (17530u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[14] / ctx.fpr[12];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-7868)));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
      if (branch_taken) {
          goto L_089256B0;
      }
      goto L_089256A4;
    }
L_089256A4:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[13];
    goto L_089256B0;
L_089256B0:
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[12];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
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
L_089256DC:
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27740)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(27736)));
    ctx.gpr[7] = (2227u << 16u);
    ctx.gpr[5] = (16014u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 14571u);
    ctx.gpr[9] = (2227u << 16u);
    ctx.gpr[8] = (2227u << 16u);
    ctx.gpr[6] = (16672u << 16u);
    ctx.gpr[10] = (2227u << 16u);
    ctx.gpr[11] = (2227u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[17];
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(27744), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = ctx.fpr[16] / ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(27752), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[18] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(27748), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(27756), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(27760), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08925754:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x0892576Cu);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    goto L_089257B0;
L_0892576C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(30)));
    ctx.gpr[31] = (0x08925778u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    goto L_089257B0;
L_08925778:
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[4]);
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-7072)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[16] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089257B0:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(35) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08925808;
      }
      goto L_089257C0;
    }
L_089257C0:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2225u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(20400)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089257D8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0892580C;
      }
      goto L_089257E0;
    }
L_089257E0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0892580C;
      }
      goto L_089257E8;
    }
L_089257E8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 2u);
      if (branch_taken) {
          goto L_0892580C;
      }
      goto L_089257F0;
    }
L_089257F0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 3u);
      if (branch_taken) {
          goto L_0892580C;
      }
      goto L_089257F8;
    }
L_089257F8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 4u);
      if (branch_taken) {
          goto L_0892580C;
      }
      goto L_08925800;
    }
L_08925800:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5u);
      if (branch_taken) {
          goto L_0892580C;
      }
      goto L_08925808;
    }
L_08925808:
    ctx.gpr[2] = (0u | 2u);
    goto L_0892580C;
L_0892580C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08925814:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[6] = (16256u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(35) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[6]);
      if (branch_taken) {
          goto L_0892589C;
      }
      goto L_08925828;
    }
L_08925828:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2225u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(20544)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08925840:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7816)));
    ctx.gpr[4] = (16025u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = ctx.fpr[0] - ctx.fpr[12];
      if (branch_taken) {
          goto L_0892589C;
      }
      goto L_08925860;
    }
L_08925860:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7816)));
    ctx.gpr[4] = (15948u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = ctx.fpr[0] - ctx.fpr[12];
      if (branch_taken) {
          goto L_0892589C;
      }
      goto L_08925880;
    }
L_08925880:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7816)));
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = ctx.fpr[12] + ctx.fpr[0];
      if (branch_taken) {
          goto L_0892589C;
      }
      goto L_0892589C;
    }
L_0892589C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089258A4:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u | 33u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 18u);
      if (branch_taken) {
          goto L_089258C4;
      }
      goto L_089258B4;
    }
L_089258B4:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 2u);
      if (branch_taken) {
          goto L_089258C4;
      }
      goto L_089258BC;
    }
L_089258BC:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089258CC;
      }
      goto L_089258C4;
    }
L_089258C4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089258D0;
      }
      goto L_089258CC;
    }
L_089258CC:
    ctx.gpr[2] = (0u | 0u);
    goto L_089258D0;
L_089258D0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089258D8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(27768)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08925928;
      }
      goto L_08925908;
    }
L_08925908:
    ctx.gpr[31] = (0x08925910u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 320u, 0x08865768u>(ctx, &aot_mem) && ctx.pc == 0x08925910u) goto L_08925910;
    return;
L_08925910:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0892591Cu);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 597u, 0x08942BB8u>(ctx, &aot_mem) && ctx.pc == 0x0892591Cu) goto L_0892591C;
    return;
L_0892591C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(27768)));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    goto L_08925928;
L_08925928:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
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
L_08925944:
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), 0u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08925954:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x08925978u);
    ctx.gpr[4] = (0u | 20u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08925978u) goto L_08925978;
    return;
L_08925978:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08925994;
      }
      goto L_08925984;
    }
L_08925984:
    ctx.gpr[31] = (0x0892598Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 596u, 0x08942B9Cu>(ctx, &aot_mem) && ctx.pc == 0x0892598Cu) goto L_0892598C;
    return;
L_0892598C:
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (2227u << 16u);
    goto L_08925994;
L_08925994:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27768)));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
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
L_089259B8:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089259C0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[5] = (596u << 16u);
    ctx.gpr[6] = (2194u << 16u);
    ctx.gpr[7] = (2194u << 16u);
    ctx.gpr[8] = (2194u << 16u);
    ctx.gpr[4] = (0u | 4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-3331));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(22852));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(22744));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x089259F0u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(22968));
    if (rt.invoke_chained_direct<&recomp_unit_0168_entry, 168u, 209u, 0x08AA5060u>(ctx, &aot_mem) && ctx.pc == 0x089259F0u) goto L_089259F0;
    return;
L_089259F0:
    ctx.gpr[4] = (2227u << 16u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(27768), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08925A04;
      }
      goto L_089259FC;
    }
L_089259FC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08925A08;
      }
      goto L_08925A04;
    }
L_08925A04:
    ctx.gpr[2] = (0u | 1u);
    goto L_08925A08;
L_08925A08:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08925A14:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[5] = (37u << 16u);
    ctx.gpr[6] = (2194u << 16u);
    ctx.gpr[7] = (2194u << 16u);
    ctx.gpr[8] = (2194u << 16u);
    ctx.gpr[4] = (0u | 4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16160));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(28760));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(28804));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x08925A48u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(28780));
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 187u, 0x08AC8F2Cu>(ctx, &aot_mem) && ctx.pc == 0x08925A48u) goto L_08925A48;
    return;
L_08925A48:
    ctx.gpr[16] = (2227u << 16u);
    ctx.gpr[5] = (37u << 16u);
    ctx.gpr[6] = (2194u << 16u);
    ctx.gpr[7] = (2194u << 16u);
    ctx.gpr[8] = (2194u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(27816), ctx.gpr[2]);
    ctx.gpr[4] = (0u | 4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16162));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(28900));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(28956));
    ctx.gpr[31] = (0x08925A78u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(28924));
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 167u, 0x08A5D338u>(ctx, &aot_mem) && ctx.pc == 0x08925A78u) goto L_08925A78;
    return;
L_08925A78:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(27820), ctx.gpr[2]);
    ctx.gpr[5] = (37u << 16u);
    ctx.gpr[6] = (2194u << 16u);
    ctx.gpr[7] = (2194u << 16u);
    ctx.gpr[8] = (2194u << 16u);
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16161));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(28812));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(28892));
    ctx.gpr[31] = (0x08925AA8u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(28860));
    if (rt.invoke_chained_direct<&recomp_unit_0168_entry, 168u, 209u, 0x08AA5060u>(ctx, &aot_mem) && ctx.pc == 0x08925AA8u) goto L_08925AA8;
    return;
L_08925AA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(27816)));
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(27824), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.gpr[2] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[2] = (ctx.gpr[2] & ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08925AD8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2275u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(19024));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x08925B00u);
    ctx.gpr[5] = (0u | 20u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 291u, 0x08B01274u>(ctx, &aot_mem) && ctx.pc == 0x08925B00u) goto L_08925B00;
    return;
L_08925B00:
    ctx.gpr[4] = (19646u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[4] | 48160u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2233u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(-22224));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08925B2Cu);
    ctx.gpr[5] = (0u | 200u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 291u, 0x08B01274u>(ctx, &aot_mem) && ctx.pc == 0x08925B2Cu) goto L_08925B2C;
    return;
L_08925B2C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x08925B40u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28412));
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 580u, 0x0886B174u>(ctx, &aot_mem) && ctx.pc == 0x08925B40u) goto L_08925B40;
    return;
L_08925B40:
    ctx.gpr[4] = (2194u << 16u);
    ctx.gpr[31] = (0x08925B4Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(24608));
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 580u, 0x0886B174u>(ctx, &aot_mem) && ctx.pc == 0x08925B4Cu) goto L_08925B4C;
    return;
L_08925B4C:
    ctx.gpr[4] = (2194u << 16u);
    ctx.gpr[31] = (0x08925B58u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(24696));
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 580u, 0x0886B174u>(ctx, &aot_mem) && ctx.pc == 0x08925B58u) goto L_08925B58;
    return;
L_08925B58:
    ctx.gpr[4] = (2194u << 16u);
    ctx.gpr[31] = (0x08925B64u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(25004));
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 580u, 0x0886B174u>(ctx, &aot_mem) && ctx.pc == 0x08925B64u) goto L_08925B64;
    return;
L_08925B64:
    ctx.gpr[4] = (2194u << 16u);
    ctx.gpr[31] = (0x08925B70u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(25400));
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 580u, 0x0886B174u>(ctx, &aot_mem) && ctx.pc == 0x08925B70u) goto L_08925B70;
    return;
L_08925B70:
    ctx.gpr[4] = (2194u << 16u);
    ctx.gpr[31] = (0x08925B7Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(25708));
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 580u, 0x0886B174u>(ctx, &aot_mem) && ctx.pc == 0x08925B7Cu) goto L_08925B7C;
    return;
L_08925B7C:
    ctx.gpr[4] = (2194u << 16u);
    ctx.gpr[31] = (0x08925B88u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(26092));
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 580u, 0x0886B174u>(ctx, &aot_mem) && ctx.pc == 0x08925B88u) goto L_08925B88;
    return;
L_08925B88:
    ctx.gpr[4] = (2194u << 16u);
    ctx.gpr[31] = (0x08925B94u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(26204));
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 580u, 0x0886B174u>(ctx, &aot_mem) && ctx.pc == 0x08925B94u) goto L_08925B94;
    return;
L_08925B94:
    ctx.gpr[4] = (2194u << 16u);
    ctx.gpr[31] = (0x08925BA0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(26448));
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 580u, 0x0886B174u>(ctx, &aot_mem) && ctx.pc == 0x08925BA0u) goto L_08925BA0;
    return;
L_08925BA0:
    ctx.gpr[4] = (2194u << 16u);
    ctx.gpr[31] = (0x08925BACu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(26696));
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 580u, 0x0886B174u>(ctx, &aot_mem) && ctx.pc == 0x08925BACu) goto L_08925BAC;
    return;
L_08925BAC:
    ctx.gpr[4] = (2194u << 16u);
    ctx.gpr[31] = (0x08925BB8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(26772));
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 580u, 0x0886B174u>(ctx, &aot_mem) && ctx.pc == 0x08925BB8u) goto L_08925BB8;
    return;
L_08925BB8:
    ctx.gpr[4] = (2194u << 16u);
    ctx.gpr[31] = (0x08925BC4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(27040));
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 580u, 0x0886B174u>(ctx, &aot_mem) && ctx.pc == 0x08925BC4u) goto L_08925BC4;
    return;
L_08925BC4:
    ctx.gpr[4] = (2194u << 16u);
    ctx.gpr[31] = (0x08925BD0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(27288));
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 580u, 0x0886B174u>(ctx, &aot_mem) && ctx.pc == 0x08925BD0u) goto L_08925BD0;
    return;
L_08925BD0:
    ctx.gpr[4] = (2194u << 16u);
    ctx.gpr[31] = (0x08925BDCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(27600));
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 580u, 0x0886B174u>(ctx, &aot_mem) && ctx.pc == 0x08925BDCu) goto L_08925BDC;
    return;
L_08925BDC:
    ctx.gpr[4] = (2194u << 16u);
    ctx.gpr[31] = (0x08925BE8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(27936));
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 580u, 0x0886B174u>(ctx, &aot_mem) && ctx.pc == 0x08925BE8u) goto L_08925BE8;
    return;
L_08925BE8:
    ctx.gpr[4] = (2194u << 16u);
    ctx.gpr[31] = (0x08925BF4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(28012));
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 580u, 0x0886B174u>(ctx, &aot_mem) && ctx.pc == 0x08925BF4u) goto L_08925BF4;
    return;
L_08925BF4:
    ctx.gpr[4] = (2194u << 16u);
    ctx.gpr[31] = (0x08925C00u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(28100));
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 580u, 0x0886B174u>(ctx, &aot_mem) && ctx.pc == 0x08925C00u) goto L_08925C00;
    return;
L_08925C00:
    ctx.gpr[4] = (2194u << 16u);
    ctx.gpr[31] = (0x08925C0Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(28176));
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 580u, 0x0886B174u>(ctx, &aot_mem) && ctx.pc == 0x08925C0Cu) goto L_08925C0C;
    return;
L_08925C0C:
    ctx.gpr[4] = (2194u << 16u);
    ctx.gpr[31] = (0x08925C18u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(28264));
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 580u, 0x0886B174u>(ctx, &aot_mem) && ctx.pc == 0x08925C18u) goto L_08925C18;
    return;
L_08925C18:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08925C30:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2275u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08925C44u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(19024));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 297u, 0x08B01314u>(ctx, &aot_mem) && ctx.pc == 0x08925C44u) goto L_08925C44;
    return;
L_08925C44:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08925C50:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2233u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08925C64u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-22224));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 297u, 0x08B01314u>(ctx, &aot_mem) && ctx.pc == 0x08925C64u) goto L_08925C64;
    return;
L_08925C64:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08925C70:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2275u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(19024));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08925CA8;
      }
      goto L_08925C94;
    }
L_08925C94:
    ctx.gpr[31] = (0x08925C9Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 191u, 0x08AC9104u>(ctx, &aot_mem) && ctx.pc == 0x08925C9Cu) goto L_08925C9C;
    return;
L_08925C9C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08925C94;
      }
      goto L_08925CA8;
    }
L_08925CA8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08925CBC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2233u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08925CD0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-22224));
    goto L_08925CDC;
L_08925CD0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08925CDC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[4];
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08925DB0;
      }
      goto L_08925D0C;
    }
L_08925D0C:
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[19] = (2230u << 16u);
    ctx.gpr[18] = (2229u << 16u);
    goto L_08925D18;
L_08925D18:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08925DA4;
      }
      goto L_08925D28;
    }
L_08925D28:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-7872)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[22] = (0u | 0u);
      if (branch_taken) {
          goto L_08925D4C;
      }
      goto L_08925D3C;
    }
L_08925D3C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08925D4C;
L_08925D4C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08925D74;
      }
      goto L_08925D58;
    }
L_08925D58:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[22] + static_cast<std::uint32_t>(54)));
    ctx.gpr[4] = (ctx.gpr[4] & 1024u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08925D74;
      }
      goto L_08925D68;
    }
L_08925D68:
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[31] = (0x08925D74u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x08925D74u) goto L_08925D74;
    return;
L_08925D74:
    ctx.gpr[31] = (0x08925D7Cu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 317u, 0x08AAA0B4u>(ctx, &aot_mem) && ctx.pc == 0x08925D7Cu) goto L_08925D7C;
    return;
L_08925D7C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08925DA4;
      }
      goto L_08925D88;
    }
L_08925D88:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[22] + static_cast<std::uint32_t>(54)));
    ctx.gpr[4] = (ctx.gpr[4] & 1024u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08925DA4;
      }
      goto L_08925D98;
    }
L_08925D98:
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[31] = (0x08925DA4u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x08925DA4u) goto L_08925DA4;
    return;
L_08925DA4:
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[21] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08925D18;
      }
      goto L_08925DB0;
    }
L_08925DB0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08925DD8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (2275u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08925DF8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(19024));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 301u, 0x08B01364u>(ctx, &aot_mem) && ctx.pc == 0x08925DF8u) goto L_08925DF8;
    return;
L_08925DF8:
    ctx.gpr[2] = (0u < ctx.gpr[2] ? 1u : 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08925E08:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (2233u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08925E28u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-22224));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 301u, 0x08B01364u>(ctx, &aot_mem) && ctx.pc == 0x08925E28u) goto L_08925E28;
    return;
L_08925E28:
    ctx.gpr[2] = (0u < ctx.gpr[2] ? 1u : 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08925E38:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08925E7C;
      }
      goto L_08925E40;
    }
L_08925E40:
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[7] = (2230u << 16u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-7872)));
    goto L_08925E54;
L_08925E54:
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    if (ctx.gpr[10] != 0u) {
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
        goto L_08925E64;
    }
    goto L_08925E64;
L_08925E64:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_08925E88;
      }
      goto L_08925E6C;
    }
L_08925E6C:
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[9]) < 4900 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08925E54;
      }
      goto L_08925E7C;
    }
L_08925E7C:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(40), static_cast<std::uint16_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08925E8C;
      }
      goto L_08925E88;
    }
L_08925E88:
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(40), static_cast<std::uint16_t>(ctx.gpr[9]));
    goto L_08925E8C;
L_08925E8C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08925E94:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(40))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08925EC0;
      }
      goto L_08925EA4;
    }
L_08925EA4:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7872)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08925EC8;
      }
      goto L_08925EB8;
    }
L_08925EB8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08925EDC;
      }
      goto L_08925EC0;
    }
L_08925EC0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08925EDC;
      }
      goto L_08925EC8;
    }
L_08925EC8:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08925EDC;
L_08925EDC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08925EE4:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(42))))));
    ctx.gpr[5] = (ctx.gpr[6] | ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(42), static_cast<std::uint16_t>(ctx.gpr[5]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08925EF4:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(42))))));
    ctx.gpr[5] = (~(ctx.gpr[5] | 0u));
    ctx.gpr[5] = (ctx.gpr[6] & ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(42), static_cast<std::uint16_t>(ctx.gpr[5]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08925F08:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(42))))));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08925F10:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(27820)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08925F24:
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(27824)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08925F38:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(27824)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08925F4C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08925FE0;
      }
      goto L_08925F68;
    }
L_08925F68:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x08925F74u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08927188;
L_08925F74:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27836)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (2231u << 16u);
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-31596), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = ctx.fpr[16] - ctx.fpr[17];
    ctx.fpr[13] = ctx.fpr[18] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[13] = std::sqrt(ctx.fpr[13]);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[14]) || std::isnan(ctx.fpr[12])) && ctx.fpr[14] == ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08925FE8;
      }
      goto L_08925FD8;
    }
L_08925FD8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08925FF8;
      }
      goto L_08925FE0;
    }
L_08925FE0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08926010;
      }
      goto L_08925FE8;
    }
L_08925FE8:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[12])) && ctx.fpr[13] == ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08926008;
      }
      goto L_08925FF8;
    }
L_08925FF8:
    ctx.gpr[31] = (0x08926000u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 282u, 0x089D962Cu>(ctx, &aot_mem) && ctx.pc == 0x08926000u) goto L_08926000;
    return;
L_08926000:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08926008;
      }
      goto L_08926008;
    }
L_08926008:
    ctx.gpr[4] = (2231u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-31592), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08926010;
L_08926010:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08926020:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6716)));
    ctx.gpr[4] = (2231u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-31596)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08926064;
      }
      goto L_08926050;
    }
L_08926050:
    ctx.gpr[31] = (0x08926058u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    goto L_08925F38;
L_08926058:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08926064u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    goto L_08927124;
L_08926064:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08926078:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6716)));
    ctx.gpr[19] = (2231u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-31596)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08926188;
      }
      goto L_089260B4;
    }
L_089260B4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089260C4u);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    goto L_08925F08;
L_089260C4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-31596)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6688)));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08926180;
      }
      goto L_089260E0;
    }
L_089260E0:
    ctx.gpr[4] = (ctx.gpr[17] & 2048u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2231u << 16u);
      if (branch_taken) {
          goto L_08926180;
      }
      goto L_089260EC;
    }
L_089260EC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-31592)));
    ctx.gpr[4] = (15948u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08926180;
      }
      goto L_0892610C;
    }
L_0892610C:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x08926118u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 213u, 0x08A5D6F0u>(ctx, &aot_mem) && ctx.pc == 0x08926118u) goto L_08926118;
    return;
L_08926118:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(80));
    ctx.gpr[31] = (0x08926124u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 213u, 0x08A5D6F0u>(ctx, &aot_mem) && ctx.pc == 0x08926124u) goto L_08926124;
    return;
L_08926124:
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(80));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08926134u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    goto L_089271F4;
L_08926134:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (ctx.gpr[17] & 256u);
      if (branch_taken) {
          goto L_08926180;
      }
      goto L_0892614C;
    }
L_0892614C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (15820u << 16u);
      if (branch_taken) {
          goto L_08926178;
      }
      goto L_08926154;
    }
L_08926154:
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-31596)));
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08926180;
      }
      goto L_08926178;
    }
L_08926178:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_0892618C;
      }
      goto L_08926180;
    }
L_08926180:
    ctx.gpr[31] = (0x08926188u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 191u, 0x08AC9104u>(ctx, &aot_mem) && ctx.pc == 0x08926188u) goto L_08926188;
    return;
L_08926188:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    goto L_0892618C;
L_0892618C:
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
L_089261AC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6716)));
    ctx.gpr[17] = (2231u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-31596)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08926314;
      }
      goto L_089261E8;
    }
L_089261E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x08926200u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 213u, 0x08A5D6F0u>(ctx, &aot_mem) && ctx.pc == 0x08926200u) goto L_08926200;
    return;
L_08926200:
    ctx.gpr[20] = (ctx.gpr[17] + static_cast<std::uint32_t>(80));
    ctx.gpr[31] = (0x0892620Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08925F08;
L_0892620C:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08926218u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 213u, 0x08A5D6F0u>(ctx, &aot_mem) && ctx.pc == 0x08926218u) goto L_08926218;
    return;
L_08926218:
    ctx.gpr[5] = (ctx.gpr[19] + static_cast<std::uint32_t>(80));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08926228u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    goto L_089271F4;
L_08926228:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-31596)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6688)));
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_089262AC;
      }
      goto L_08926244;
    }
L_08926244:
    ctx.gpr[4] = (ctx.gpr[17] & 2048u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2231u << 16u);
      if (branch_taken) {
          goto L_089262AC;
      }
      goto L_08926250;
    }
L_08926250:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-31592)));
    ctx.gpr[4] = (15948u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089262AC;
      }
      goto L_08926270;
    }
L_08926270:
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (ctx.gpr[17] & 256u);
      if (branch_taken) {
          goto L_089262AC;
      }
      goto L_08926284;
    }
L_08926284:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (15820u << 16u);
      if (branch_taken) {
          goto L_089262C0;
      }
      goto L_0892628C;
    }
L_0892628C:
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089262C0;
      }
      goto L_089262AC;
    }
L_089262AC:
    ctx.gpr[4] = (ctx.gpr[17] & 64u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089262C8;
      }
      goto L_089262B8;
    }
L_089262B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089262F8;
      }
      goto L_089262C0;
    }
L_089262C0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08926318;
      }
      goto L_089262C8;
    }
L_089262C8:
    ctx.gpr[4] = (14545u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 46871u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089262E0u);
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    goto L_08925DD8;
L_089262E0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089262F0;
      }
      goto L_089262E8;
    }
L_089262E8:
    ctx.gpr[31] = (0x089262F0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 191u, 0x08AC9104u>(ctx, &aot_mem) && ctx.pc == 0x089262F0u) goto L_089262F0;
    return;
L_089262F0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08926318;
      }
      goto L_089262F8;
    }
L_089262F8:
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[31] = (0x08926304u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08925DD8;
L_08926304:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08926314;
      }
      goto L_0892630C;
    }
L_0892630C:
    ctx.gpr[31] = (0x08926314u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 191u, 0x08AC9104u>(ctx, &aot_mem) && ctx.pc == 0x08926314u) goto L_08926314;
    return;
L_08926314:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    goto L_08926318;
L_08926318:
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
L_08926338:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6700)));
    ctx.gpr[19] = (2231u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-31596)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08926448;
      }
      goto L_08926374;
    }
L_08926374:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08926384u);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    goto L_08925F08;
L_08926384:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-31596)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6688)));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08926440;
      }
      goto L_089263A0;
    }
L_089263A0:
    ctx.gpr[4] = (ctx.gpr[17] & 2048u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2231u << 16u);
      if (branch_taken) {
          goto L_08926440;
      }
      goto L_089263AC;
    }
L_089263AC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-31592)));
    ctx.gpr[4] = (15948u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08926440;
      }
      goto L_089263CC;
    }
L_089263CC:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x089263D8u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 213u, 0x08A5D6F0u>(ctx, &aot_mem) && ctx.pc == 0x089263D8u) goto L_089263D8;
    return;
L_089263D8:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(80));
    ctx.gpr[31] = (0x089263E4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 213u, 0x08A5D6F0u>(ctx, &aot_mem) && ctx.pc == 0x089263E4u) goto L_089263E4;
    return;
L_089263E4:
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(80));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x089263F4u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    goto L_089271F4;
L_089263F4:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (ctx.gpr[17] & 256u);
      if (branch_taken) {
          goto L_08926440;
      }
      goto L_0892640C;
    }
L_0892640C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (15820u << 16u);
      if (branch_taken) {
          goto L_08926438;
      }
      goto L_08926414;
    }
L_08926414:
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-31596)));
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08926440;
      }
      goto L_08926438;
    }
L_08926438:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_0892644C;
      }
      goto L_08926440;
    }
L_08926440:
    ctx.gpr[31] = (0x08926448u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 191u, 0x08AC9104u>(ctx, &aot_mem) && ctx.pc == 0x08926448u) goto L_08926448;
    return;
L_08926448:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    goto L_0892644C;
L_0892644C:
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
L_0892646C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6700)));
    ctx.gpr[17] = (2231u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-31596)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089265C8;
      }
      goto L_089264A8;
    }
L_089264A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x089264C0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 213u, 0x08A5D6F0u>(ctx, &aot_mem) && ctx.pc == 0x089264C0u) goto L_089264C0;
    return;
L_089264C0:
    ctx.gpr[20] = (ctx.gpr[17] + static_cast<std::uint32_t>(80));
    ctx.gpr[31] = (0x089264CCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08925F08;
L_089264CC:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089264D8u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 213u, 0x08A5D6F0u>(ctx, &aot_mem) && ctx.pc == 0x089264D8u) goto L_089264D8;
    return;
L_089264D8:
    ctx.gpr[5] = (ctx.gpr[19] + static_cast<std::uint32_t>(80));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x089264E8u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    goto L_089271F4;
L_089264E8:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-31596)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6688)));
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_0892656C;
      }
      goto L_08926504;
    }
L_08926504:
    ctx.gpr[4] = (ctx.gpr[17] & 2048u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2231u << 16u);
      if (branch_taken) {
          goto L_0892656C;
      }
      goto L_08926510;
    }
L_08926510:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-31592)));
    ctx.gpr[4] = (15948u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0892656C;
      }
      goto L_08926530;
    }
L_08926530:
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (ctx.gpr[17] & 256u);
      if (branch_taken) {
          goto L_0892656C;
      }
      goto L_08926544;
    }
L_08926544:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (15820u << 16u);
      if (branch_taken) {
          goto L_08926580;
      }
      goto L_0892654C;
    }
L_0892654C:
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08926580;
      }
      goto L_0892656C;
    }
L_0892656C:
    ctx.gpr[4] = (ctx.gpr[17] & 64u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08926588;
      }
      goto L_08926578;
    }
L_08926578:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089265AC;
      }
      goto L_08926580;
    }
L_08926580:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_089265CC;
      }
      goto L_08926588;
    }
L_08926588:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08926594u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_08925DD8;
L_08926594:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089265A4;
      }
      goto L_0892659C;
    }
L_0892659C:
    ctx.gpr[31] = (0x089265A4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 191u, 0x08AC9104u>(ctx, &aot_mem) && ctx.pc == 0x089265A4u) goto L_089265A4;
    return;
L_089265A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_089265CC;
      }
      goto L_089265AC;
    }
L_089265AC:
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[31] = (0x089265B8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08925DD8;
L_089265B8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089265C8;
      }
      goto L_089265C0;
    }
L_089265C0:
    ctx.gpr[31] = (0x089265C8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 191u, 0x08AC9104u>(ctx, &aot_mem) && ctx.pc == 0x089265C8u) goto L_089265C8;
    return;
L_089265C8:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    goto L_089265CC;
L_089265CC:
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
L_089265EC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08926600u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_08925E94;
L_08926600:
    ctx.gpr[4] = (2231u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-31596)));
    ctx.fpr[12] = std::sqrt(ctx.fpr[12]);
    ctx.gpr[31] = (0x08926614u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 10u, 0x08A8C094u>(ctx, &aot_mem) && ctx.pc == 0x08926614u) goto L_08926614;
    return;
L_08926614:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08926648;
      }
      goto L_08926620;
    }
L_08926620:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08926640;
      }
      goto L_08926630;
    }
L_08926630:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08926640u);
    ctx.gpr[6] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 160u, 0x08AC8D4Cu>(ctx, &aot_mem) && ctx.pc == 0x08926640u) goto L_08926640;
    return;
L_08926640:
    ctx.gpr[31] = (0x08926648u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 191u, 0x08AC9104u>(ctx, &aot_mem) && ctx.pc == 0x08926648u) goto L_08926648;
    return;
L_08926648:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892665C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6700)));
    ctx.gpr[17] = (2231u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-31596)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08926730;
      }
      goto L_08926694;
    }
L_08926694:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x089266A8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 213u, 0x08A5D6F0u>(ctx, &aot_mem) && ctx.pc == 0x089266A8u) goto L_089266A8;
    return;
L_089266A8:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(80));
    ctx.gpr[31] = (0x089266B4u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 213u, 0x08A5D6F0u>(ctx, &aot_mem) && ctx.pc == 0x089266B4u) goto L_089266B4;
    return;
L_089266B4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27836)));
    ctx.gpr[5] = (ctx.gpr[19] + static_cast<std::uint32_t>(80));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(52)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(56)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[15];
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(36)));
    ctx.fpr[16] = ctx.fpr[16] - ctx.fpr[17];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[18] + ctx.fpr[12];
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-31596)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.gpr[31] = (0x08926720u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[16];
    goto L_08925DD8;
L_08926720:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08926730;
      }
      goto L_08926728;
    }
L_08926728:
    ctx.gpr[31] = (0x08926730u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 191u, 0x08AC9104u>(ctx, &aot_mem) && ctx.pc == 0x08926730u) goto L_08926730;
    return;
L_08926730:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08926750:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6716)));
    ctx.gpr[17] = (2231u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-31596)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08926828;
      }
      goto L_08926788;
    }
L_08926788:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x0892679Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 213u, 0x08A5D6F0u>(ctx, &aot_mem) && ctx.pc == 0x0892679Cu) goto L_0892679C;
    return;
L_0892679C:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(80));
    ctx.gpr[31] = (0x089267A8u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 213u, 0x08A5D6F0u>(ctx, &aot_mem) && ctx.pc == 0x089267A8u) goto L_089267A8;
    return;
L_089267A8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27836)));
    ctx.gpr[5] = (ctx.gpr[19] + static_cast<std::uint32_t>(80));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(52)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(56)));
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[15];
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[16] = ctx.fpr[16] - ctx.fpr[17];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[18] + ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-31596)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.gpr[31] = (0x08926818u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    goto L_08925DD8;
L_08926818:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08926828;
      }
      goto L_08926820;
    }
L_08926820:
    ctx.gpr[31] = (0x08926828u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 191u, 0x08AC9104u>(ctx, &aot_mem) && ctx.pc == 0x08926828u) goto L_08926828;
    return;
L_08926828:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08926848:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6700)));
    ctx.gpr[4] = (2231u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-31596)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08926880;
      }
      goto L_08926878;
    }
L_08926878:
    ctx.gpr[31] = (0x08926880u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 191u, 0x08AC9104u>(ctx, &aot_mem) && ctx.pc == 0x08926880u) goto L_08926880;
    return;
L_08926880:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08926894:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6704)));
    ctx.gpr[4] = (2231u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-31596)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_08926984;
      }
      goto L_089268C8;
    }
L_089268C8:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6700)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08926984;
      }
      goto L_089268DC;
    }
L_089268DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-6688)));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_0892697C;
      }
      goto L_089268F8;
    }
L_089268F8:
    ctx.gpr[31] = (0x08926900u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08925F08;
L_08926900:
    ctx.gpr[4] = (ctx.gpr[2] & 2048u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2231u << 16u);
      if (branch_taken) {
          goto L_0892697C;
      }
      goto L_0892690C;
    }
L_0892690C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-31592)));
    ctx.gpr[4] = (15948u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0892697C;
      }
      goto L_0892692C;
    }
L_0892692C:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x08926938u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 213u, 0x08A5D6F0u>(ctx, &aot_mem) && ctx.pc == 0x08926938u) goto L_08926938;
    return;
L_08926938:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(80));
    ctx.gpr[31] = (0x08926944u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 213u, 0x08A5D6F0u>(ctx, &aot_mem) && ctx.pc == 0x08926944u) goto L_08926944;
    return;
L_08926944:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(80));
    ctx.gpr[31] = (0x08926950u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08925F08;
L_08926950:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08926960u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    goto L_089271F4;
L_08926960:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0892697C;
      }
      goto L_08926974;
    }
L_08926974:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08926988;
      }
      goto L_0892697C;
    }
L_0892697C:
    ctx.gpr[31] = (0x08926984u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 191u, 0x08AC9104u>(ctx, &aot_mem) && ctx.pc == 0x08926984u) goto L_08926984;
    return;
L_08926984:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    goto L_08926988;
L_08926988:
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
L_089269A0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6704)));
    ctx.gpr[4] = (2231u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-31596)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08926A7C;
      }
      goto L_089269D4;
    }
L_089269D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-6688)));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08926A74;
      }
      goto L_089269F0;
    }
L_089269F0:
    ctx.gpr[31] = (0x089269F8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08925F08;
L_089269F8:
    ctx.gpr[4] = (ctx.gpr[2] & 2048u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2231u << 16u);
      if (branch_taken) {
          goto L_08926A74;
      }
      goto L_08926A04;
    }
L_08926A04:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-31592)));
    ctx.gpr[4] = (15948u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08926A74;
      }
      goto L_08926A24;
    }
L_08926A24:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x08926A30u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 213u, 0x08A5D6F0u>(ctx, &aot_mem) && ctx.pc == 0x08926A30u) goto L_08926A30;
    return;
L_08926A30:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(80));
    ctx.gpr[31] = (0x08926A3Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 213u, 0x08A5D6F0u>(ctx, &aot_mem) && ctx.pc == 0x08926A3Cu) goto L_08926A3C;
    return;
L_08926A3C:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(80));
    ctx.gpr[31] = (0x08926A48u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08925F08;
L_08926A48:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08926A58u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    goto L_089271F4;
L_08926A58:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08926A74;
      }
      goto L_08926A6C;
    }
L_08926A6C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08926A80;
      }
      goto L_08926A74;
    }
L_08926A74:
    ctx.gpr[31] = (0x08926A7Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 191u, 0x08AC9104u>(ctx, &aot_mem) && ctx.pc == 0x08926A7Cu) goto L_08926A7C;
    return;
L_08926A7C:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    goto L_08926A80;
L_08926A80:
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
L_08926A98:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6704)));
    ctx.gpr[17] = (2231u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-31596)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_08926BAC;
      }
      goto L_08926AD4;
    }
L_08926AD4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6700)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08926BAC;
      }
      goto L_08926AE8;
    }
L_08926AE8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x08926B00u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 213u, 0x08A5D6F0u>(ctx, &aot_mem) && ctx.pc == 0x08926B00u) goto L_08926B00;
    return;
L_08926B00:
    ctx.gpr[20] = (ctx.gpr[17] + static_cast<std::uint32_t>(80));
    ctx.gpr[31] = (0x08926B0Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08925F08;
L_08926B0C:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08926B18u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 213u, 0x08A5D6F0u>(ctx, &aot_mem) && ctx.pc == 0x08926B18u) goto L_08926B18;
    return;
L_08926B18:
    ctx.gpr[5] = (ctx.gpr[19] + static_cast<std::uint32_t>(80));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08926B28u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    goto L_089271F4;
L_08926B28:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-31596)));
      if (branch_taken) {
          goto L_08926B80;
      }
      goto L_08926B40;
    }
L_08926B40:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6688)));
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (ctx.gpr[17] & 2048u);
      if (branch_taken) {
          goto L_08926B80;
      }
      goto L_08926B58;
    }
L_08926B58:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2231u << 16u);
      if (branch_taken) {
          goto L_08926B80;
      }
      goto L_08926B60;
    }
L_08926B60:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-31592)));
    ctx.gpr[4] = (15948u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08926B9C;
      }
      goto L_08926B80;
    }
L_08926B80:
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[31] = (0x08926B8Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08925DD8;
L_08926B8C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08926BA4;
      }
      goto L_08926B94;
    }
L_08926B94:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08926BAC;
      }
      goto L_08926B9C;
    }
L_08926B9C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08926BB0;
      }
      goto L_08926BA4;
    }
L_08926BA4:
    ctx.gpr[31] = (0x08926BACu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 191u, 0x08AC9104u>(ctx, &aot_mem) && ctx.pc == 0x08926BACu) goto L_08926BAC;
    return;
L_08926BAC:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    goto L_08926BB0;
L_08926BB0:
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
L_08926BD0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6704)));
    ctx.gpr[17] = (2231u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-31596)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08926CFC;
      }
      goto L_08926C0C;
    }
L_08926C0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x08926C24u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 213u, 0x08A5D6F0u>(ctx, &aot_mem) && ctx.pc == 0x08926C24u) goto L_08926C24;
    return;
L_08926C24:
    ctx.gpr[20] = (ctx.gpr[17] + static_cast<std::uint32_t>(80));
    ctx.gpr[31] = (0x08926C30u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08925F08;
L_08926C30:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08926C3Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 213u, 0x08A5D6F0u>(ctx, &aot_mem) && ctx.pc == 0x08926C3Cu) goto L_08926C3C;
    return;
L_08926C3C:
    ctx.gpr[5] = (ctx.gpr[19] + static_cast<std::uint32_t>(80));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08926C4Cu);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    goto L_089271F4;
L_08926C4C:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-31596)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6688)));
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08926CD0;
      }
      goto L_08926C68;
    }
L_08926C68:
    ctx.gpr[4] = (ctx.gpr[17] & 2048u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2231u << 16u);
      if (branch_taken) {
          goto L_08926CD0;
      }
      goto L_08926C74;
    }
L_08926C74:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-31592)));
    ctx.gpr[4] = (15948u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08926CD0;
      }
      goto L_08926C94;
    }
L_08926C94:
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (ctx.gpr[17] & 256u);
      if (branch_taken) {
          goto L_08926CD0;
      }
      goto L_08926CA8;
    }
L_08926CA8:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (15820u << 16u);
      if (branch_taken) {
          goto L_08926CEC;
      }
      goto L_08926CB0;
    }
L_08926CB0:
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08926CEC;
      }
      goto L_08926CD0;
    }
L_08926CD0:
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[31] = (0x08926CDCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08925DD8;
L_08926CDC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08926CF4;
      }
      goto L_08926CE4;
    }
L_08926CE4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08926CFC;
      }
      goto L_08926CEC;
    }
L_08926CEC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08926D00;
      }
      goto L_08926CF4;
    }
L_08926CF4:
    ctx.gpr[31] = (0x08926CFCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 191u, 0x08AC9104u>(ctx, &aot_mem) && ctx.pc == 0x08926CFCu) goto L_08926CFC;
    return;
L_08926CFC:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    goto L_08926D00;
L_08926D00:
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
L_08926D20:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6716)));
    ctx.gpr[4] = (2231u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-31596)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08926D58;
      }
      goto L_08926D50;
    }
L_08926D50:
    ctx.gpr[31] = (0x08926D58u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 191u, 0x08AC9104u>(ctx, &aot_mem) && ctx.pc == 0x08926D58u) goto L_08926D58;
    return;
L_08926D58:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08926D6C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6716)));
    ctx.gpr[4] = (2231u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-31596)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08926DB0;
      }
      goto L_08926D9C;
    }
L_08926D9C:
    ctx.gpr[31] = (0x08926DA4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    goto L_08925F38;
L_08926DA4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08926DB0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    goto L_08927124;
L_08926DB0:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08926DC4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6700)));
    ctx.gpr[4] = (2231u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-31596)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08926DFC;
      }
      goto L_08926DF4;
    }
L_08926DF4:
    ctx.gpr[31] = (0x08926DFCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 191u, 0x08AC9104u>(ctx, &aot_mem) && ctx.pc == 0x08926DFCu) goto L_08926DFC;
    return;
L_08926DFC:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08926E10:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6700)));
    ctx.gpr[4] = (2231u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-31596)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08926E54;
      }
      goto L_08926E40;
    }
L_08926E40:
    ctx.gpr[31] = (0x08926E48u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    goto L_08925F38;
L_08926E48:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08926E54u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    goto L_08927124;
L_08926E54:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08926E68:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08926E88u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    goto L_08927188;
L_08926E88:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6696)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08926EB4;
      }
      goto L_08926EA0;
    }
L_08926EA0:
    ctx.gpr[31] = (0x08926EA8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08925F38;
L_08926EA8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08926EB4u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    goto L_08927124;
L_08926EB4:
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
L_08926ECC:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08926EDC;
      }
      goto L_08926ED4;
    }
L_08926ED4:
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28412));
    goto L_08926EDC;
L_08926EDC:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08926EEC;
      }
      goto L_08926EE4;
    }
L_08926EE4:
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28412));
    goto L_08926EEC;
L_08926EEC:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08926EF4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08926F08u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(27832), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 606u, 0x088735BCu>(ctx, &aot_mem) && ctx.pc == 0x08926F08u) goto L_08926F08;
    return;
L_08926F08:
    ctx.gpr[6] = (2232u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(13216));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(127)));
    ctx.gpr[5] = (ctx.gpr[2] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    ctx.gpr[7] = (2227u << 16u);
    ctx.gpr[8] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(27836), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[8] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[7] = (0u | 1u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(224)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[7];
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_08926F60;
      }
      goto L_08926F54;
    }
L_08926F54:
    ctx.gpr[7] = (0u | 37u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[7];
    ctx.gpr[5] = (16800u << 16u);
      if (branch_taken) {
          goto L_08926F74;
      }
      goto L_08926F60;
    }
L_08926F60:
    ctx.gpr[5] = (18804u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 9216u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6688), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_08926F84;
      }
      goto L_08926F74;
    }
L_08926F74:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6688), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_08926F84;
L_08926F84:
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(228)));
    ctx.gpr[4] = (17036u << 16u);
    ctx.gpr[5] = (17076u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[10] = (17116u << 16u);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[10]);
    ctx.gpr[6] = (2230u << 16u);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[5] = (2230u << 16u);
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[7] = (2230u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[8] = (2230u << 16u);
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6716), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (2230u << 16u);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-6712), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6704), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6708), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.gpr[9] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(-6700), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(-6696), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(-6692), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08927014:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(27836)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[15];
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.fpr[16] = ctx.fpr[16] - ctx.fpr[17];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    jump_target = ctx.gpr[31];
    ctx.fpr[0] = ctx.fpr[12] + ctx.fpr[0];
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08927058:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(40), static_cast<std::uint16_t>(ctx.gpr[5]));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(42), static_cast<std::uint16_t>(0u));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892706C:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(40))))));
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(40), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(42))))));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(42), static_cast<std::uint16_t>(ctx.gpr[5]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08927084:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892708C:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(27824)));
    ctx.gpr[7] = (2194u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(29056));
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(27824)));
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089270BC:
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(27824)));
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089270DC:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089270E4:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(27820)));
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089270FC:
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(27820)));
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892711C:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08927124:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (23808u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    ctx.gpr[16] = (2233u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4912)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4912)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x08927154u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-4912), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 191u, 0x08AC9104u>(ctx, &aot_mem) && ctx.pc == 0x08927154u) goto L_08927154;
    return;
L_08927154:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[5] = (23808u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(255));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-4912), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08927180:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08927188:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x0892719Cu);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 213u, 0x08A5D6F0u>(ctx, &aot_mem) && ctx.pc == 0x0892719Cu) goto L_0892719C;
    return;
L_0892719C:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(80));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(27836)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[15];
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.fpr[16] = ctx.fpr[16] - ctx.fpr[17];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[0] = ctx.fpr[12] + ctx.fpr[0];
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089271F4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.gpr[7] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(27836)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[15];
    ctx.gpr[4] = (ctx.gpr[6] & 48u);
    ctx.fpr[16] = ctx.fpr[16] - ctx.fpr[17];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
      if (branch_taken) {
          goto L_08927268;
      }
      goto L_08927238;
    }
L_08927238:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = ctx.fpr[12] + ctx.fpr[0];
      if (branch_taken) {
          goto L_089272A8;
      }
      goto L_08927268;
    }
L_08927268:
    ctx.gpr[4] = (ctx.gpr[6] & 12u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089272A4;
      }
      goto L_08927274;
    }
L_08927274:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = ctx.fpr[12] + ctx.fpr[0];
      if (branch_taken) {
          goto L_089272A8;
      }
      goto L_089272A4;
    }
L_089272A4:
    ctx.fpr[0] = std::bit_cast<float>(0u);
    goto L_089272A8;
L_089272A8:
    ctx.gpr[4] = (ctx.gpr[6] & 36u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089272B8;
      }
      goto L_089272B4;
    }
L_089272B4:
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]) ^ 0x80000000u);
    goto L_089272B8;
L_089272B8:
    ctx.gpr[4] = (ctx.gpr[6] & 1536u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08927384;
      }
      goto L_089272C4;
    }
L_089272C4:
    ctx.gpr[4] = (ctx.gpr[6] & 512u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[13] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_08927304;
      }
      goto L_089272D0;
    }
L_089272D0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[15];
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[17];
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
      if (branch_taken) {
          goto L_0892733C;
      }
      goto L_08927304;
    }
L_08927304:
    ctx.gpr[4] = (ctx.gpr[6] & 1024u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892733C;
      }
      goto L_08927310;
    }
L_08927310:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[15];
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[17];
    goto L_0892733C;
L_0892733C:
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08927360;
      }
      goto L_0892734C;
    }
L_0892734C:
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08927360;
      }
      goto L_0892735C;
    }
L_0892735C:
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[12];
    goto L_08927360;
L_08927360:
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08927384;
      }
      goto L_08927370;
    }
L_08927370:
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08927384;
      }
      goto L_08927380;
    }
L_08927380:
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[12];
    goto L_08927384;
L_08927384:
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892738C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27780)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[5] = (2227u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(27776)));
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.gpr[9] = (2227u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(27804)));
    ctx.gpr[5] = (16014u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 14571u);
    ctx.gpr[11] = (2227u << 16u);
    ctx.gpr[10] = (2227u << 16u);
    ctx.gpr[7] = (16672u << 16u);
    ctx.gpr[8] = (15744u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[18];
    ctx.gpr[2] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(27784), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[3] = (2227u << 16u);
    ctx.gpr[12] = (2227u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[17] / ctx.fpr[15];
    ctx.gpr[4] = (2275u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(19024));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(64), 0u);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-22224));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(64), 0u);
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(27792), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[18] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(27788), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[8]);
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(27796), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(27800), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(27808), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08927438:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_08927484;
      }
      goto L_08927450;
    }
L_08927450:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08927484;
      }
      goto L_08927468;
    }
L_08927468:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08927484;
      }
      goto L_08927480;
    }
L_08927480:
    ctx.gpr[6] = (0u | 1u);
    goto L_08927484;
L_08927484:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[6] & 255u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892748C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x0892749Cu);
    // nop
    goto L_08927438;
L_0892749C:
    ctx.gpr[2] = (ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089274AC:
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
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089274C4:
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
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089274DC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (16256u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x0892750Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x0892750Cu) goto L_0892750C;
    return;
L_0892750C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(7)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[5] << (ctx.gpr[4] & 31u));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    { const std::uint32_t dividend = ctx.gpr[6]; const std::uint32_t divisor = ctx.gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08927550:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[6]) < 3 ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_089275B0;
      }
      goto L_08927570;
    }
L_08927570:
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(7)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[5] << (ctx.gpr[8] & 31u));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) <= 0;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0892762C;
      }
      goto L_08927588;
    }
L_08927588:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < 2 ? 1u : 0u);
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
        goto L_0892760C;
    }
    goto L_08927594;
L_08927594:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[2] = (ctx.gpr[5] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[7] + ctx.gpr[2]);
      if (branch_taken) {
          goto L_0892764C;
      }
      goto L_089275B0;
    }
L_089275B0:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_089275F8;
      }
      goto L_089275BC;
    }
L_089275BC:
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(7)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[5] << (ctx.gpr[8] & 31u));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0892762C;
      }
      goto L_089275D8;
    }
L_089275D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[2] = (ctx.gpr[5] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[7] + ctx.gpr[2]);
      if (branch_taken) {
          goto L_0892764C;
      }
      goto L_089275F8;
    }
L_089275F8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x08927604u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    goto L_089274DC;
L_08927604:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892764C;
      }
      goto L_0892760C;
    }
L_0892760C:
    ctx.gpr[5] = (ctx.gpr[5] | 1u);
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[2] = (ctx.gpr[5] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[7] + ctx.gpr[2]);
      if (branch_taken) {
          goto L_0892764C;
      }
      goto L_0892762C;
    }
L_0892762C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] | 1u);
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[2] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[2] = (ctx.gpr[7] + ctx.gpr[2]);
    goto L_0892764C;
L_0892764C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08927658:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089276A8;
      }
      goto L_08927668;
    }
L_08927668:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[2] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[14]) || std::isnan(ctx.fpr[12])) && ctx.fpr[14] == ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089276A8;
      }
      goto L_0892768C;
    }
L_0892768C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_089276A8;
      }
      goto L_08927694;
    }
L_08927694:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 24u));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089276A8;
      }
      goto L_089276A0;
    }
L_089276A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089276AC;
      }
      goto L_089276A8;
    }
L_089276A8:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    goto L_089276AC;
L_089276AC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089276B4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_089276F8;
      }
      goto L_089276DC;
    }
L_089276DC:
    ctx.gpr[31] = (0x089276E4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08927658;
L_089276E4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (static_cast<std::int32_t>(ctx.gpr[4]) >= 0) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
        goto L_08927700;
    }
    goto L_089276F0;
L_089276F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08927714;
      }
      goto L_089276F8;
    }
L_089276F8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08927768;
      }
      goto L_08927700;
    }
L_08927700:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08927714;
      }
      goto L_0892770C;
    }
L_0892770C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08927768;
      }
      goto L_08927714;
    }
L_08927714:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08927720u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 53u, 0x0892833Cu>(ctx, &aot_mem) && ctx.pc == 0x08927720u) goto L_08927720;
    return;
L_08927720:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7056));
    if (ctx.gpr[16] != ctx.gpr[4]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
        goto L_08927748;
    }
    goto L_08927734;
L_08927734:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08927744u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(20688));
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 350u, 0x08A018ACu>(ctx, &aot_mem) && ctx.pc == 0x08927744u) goto L_08927744;
    return;
L_08927744:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    goto L_08927748;
L_08927748:
    ctx.gpr[5] = (0u | 20u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    ctx.gpr[4] = (ctx.gpr[16] - ctx.gpr[4]);
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (ctx.lo);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[4] + ctx.gpr[2]);
      if (branch_taken) {
          goto L_08927768;
      }
      goto L_08927768;
    }
L_08927768:
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
L_08927780:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x0892779Cu);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    goto L_089276B4;
L_0892779C:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0892782C;
      }
      goto L_089277B4;
    }
L_089277B4:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[7] = (ctx.gpr[4] << 3u);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[7]);
    goto L_089277C0;
L_089277C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089277EC;
      }
      goto L_089277CC;
    }
L_089277CC:
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(8));
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_089277C0;
      }
      goto L_089277E4;
    }
L_089277E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892782C;
      }
      goto L_089277EC;
    }
L_089277EC:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_089278C8;
      }
      goto L_0892782C;
    }
L_0892782C:
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(7)));
    ctx.gpr[5] = (ctx.gpr[2] << (ctx.gpr[5] & 31u));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08927878;
      }
      goto L_08927844;
    }
L_08927844:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (ctx.gpr[4] << 4u);
    ctx.gpr[8] = (ctx.gpr[4] << 2u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[6] + ctx.gpr[7]);
    goto L_08927858;
L_08927858:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(8)));
    if (ctx.gpr[9] != 0u) {
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[7]);
        goto L_08927880;
    }
    goto L_08927864;
L_08927864:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(20));
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(20));
      if (branch_taken) {
          goto L_08927858;
      }
      goto L_08927878;
    }
L_08927878:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089278C8;
      }
      goto L_08927880;
    }
L_08927880:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(8));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    goto L_089278C8;
L_089278C8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089278DC:
    ctx.gpr[12] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (ctx.gpr[12] | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    ctx.gpr[8] = (0u | 1u);
    if (ctx.gpr[9] == 0u) {
    ctx.gpr[10] = (0u + static_cast<std::uint32_t>(-1));
        goto L_089278FC;
    }
    goto L_089278FC;
L_089278FC:
    ctx.gpr[13] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[10] | 0u);
    ctx.gpr[3] = (ctx.gpr[8] | 0u);
    ctx.gpr[10] = (ctx.gpr[13] + static_cast<std::uint32_t>(4));
    goto L_0892790C;
L_0892790C:
    { const bool branch_taken = ctx.gpr[11] == 0u;
    ctx.gpr[14] = (ctx.gpr[3] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08927954;
      }
      goto L_08927914;
    }
L_08927914:
    ctx.gpr[14] = (ctx.gpr[8] << (ctx.gpr[14] & 31u));
    ctx.gpr[13] = (static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[14]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[13] != 0u;
    // nop
      if (branch_taken) {
          goto L_08927954;
      }
      goto L_08927924;
    }
L_08927924:
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[13]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08927948;
      }
      goto L_08927930;
    }
L_08927930:
    ctx.gpr[12] = (ctx.gpr[12] + ctx.gpr[13]);
    ctx.gpr[13] = (static_cast<std::int32_t>(ctx.gpr[12]) < static_cast<std::int32_t>(ctx.gpr[14]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[13] != 0u;
    ctx.gpr[11] = (static_cast<std::int32_t>(ctx.gpr[12]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08927948;
      }
      goto L_08927940;
    }
L_08927940:
    ctx.gpr[4] = (ctx.gpr[3] | 0u);
    ctx.gpr[9] = (ctx.gpr[12] | 0u);
    goto L_08927948;
L_08927948:
    ctx.gpr[3] = (ctx.gpr[3] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0892790C;
      }
      goto L_08927954;
    }
L_08927954:
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[9] = (ctx.gpr[8] << (ctx.gpr[4] & 31u));
        goto L_0892796C;
    }
    goto L_0892796C;
L_0892796C:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08927974:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-160));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[20]);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[20] = (0u | 1u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[7] = (ctx.gpr[29] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[31]);
    goto L_089279C4;
L_089279C4:
    ctx.gpr[10] = (ctx.gpr[20] << (ctx.gpr[4] & 31u));
    ctx.gpr[11] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[10]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[11] == 0u;
    // nop
      if (branch_taken) {
          goto L_089279EC;
      }
      goto L_089279D4;
    }
L_089279D4:
    ctx.gpr[10] = (ctx.gpr[6] | 0u);
    ctx.gpr[11] = (static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[10]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[11] != 0u;
    // nop
      if (branch_taken) {
          goto L_089279EC;
      }
      goto L_089279E4;
    }
L_089279E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08927A3C;
      }
      goto L_089279EC;
    }
L_089279EC:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[10]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(16), 0u);
      if (branch_taken) {
          goto L_08927A2C;
      }
      goto L_089279F8;
    }
L_089279F8:
    ctx.gpr[5] = (ctx.gpr[9] << 3u);
    ctx.gpr[5] = (ctx.gpr[8] + ctx.gpr[5]);
    goto L_08927A00;
L_08927A00:
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[11] == 0u;
    // nop
      if (branch_taken) {
          goto L_08927A1C;
      }
      goto L_08927A0C;
    }
L_08927A0C:
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(16)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(16), ctx.gpr[11]);
    goto L_08927A1C;
L_08927A1C:
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    ctx.gpr[11] = (static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[10]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[11] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08927A00;
      }
      goto L_08927A2C;
    }
L_08927A2C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 25 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089279C4;
      }
      goto L_08927A3C;
    }
L_08927A3C:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08927A58;
      }
      goto L_08927A44;
    }
L_08927A44:
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(16), 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 25 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08927A44;
      }
      goto L_08927A58;
    }
L_08927A58:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(7)));
    ctx.gpr[4] = (ctx.gpr[20] << (ctx.gpr[4] & 31u));
    ctx.gpr[21] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[20] = (ctx.gpr[21] | 0u);
      if (branch_taken) {
          goto L_08927AE8;
      }
      goto L_08927A70;
    }
L_08927A70:
    ctx.gpr[22] = (ctx.gpr[21] << 4u);
    ctx.gpr[4] = (ctx.gpr[21] << 2u);
    ctx.gpr[22] = (ctx.gpr[22] + ctx.gpr[4]);
    goto L_08927A7C;
L_08927A7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[22]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08927AD4;
      }
      goto L_08927A90;
    }
L_08927A90:
    ctx.gpr[31] = (0x08927A98u);
    // nop
    goto L_08927658;
L_08927A98:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08927AD0;
      }
      goto L_08927AA4;
    }
L_08927AA4:
    ctx.gpr[31] = (0x08927AACu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 174u, 0x08A5906Cu>(ctx, &aot_mem) && ctx.pc == 0x08927AACu) goto L_08927AAC;
    return;
L_08927AAC:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08927AD0;
L_08927AD0:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_08927AD4;
L_08927AD4:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[21] = (ctx.gpr[20] + static_cast<std::uint32_t>(-1));
    ctx.gpr[20] = (ctx.gpr[21] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(-20));
      if (branch_taken) {
          goto L_08927A7C;
      }
      goto L_08927AE8;
    }
L_08927AE8:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08927AFCu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    goto L_089278DC;
L_08927AFC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08927B24:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    ctx.gpr[7] = (ctx.gpr[6] << 3u);
    ctx.gpr[6] = (ctx.gpr[5] << 3u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08927B4Cu);
    ctx.gpr[5] = (ctx.gpr[8] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 322u, 0x0894DE0Cu>(ctx, &aot_mem) && ctx.pc == 0x08927B4Cu) goto L_08927B4C;
    return;
L_08927B4C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[7] = (ctx.gpr[6] << 3u);
      if (branch_taken) {
          goto L_08927B84;
      }
      goto L_08927B68;
    }
L_08927B68:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08927B68;
      }
      goto L_08927B84;
    }
L_08927B84:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08927B94:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 25 ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[8] = (ctx.gpr[8] << (ctx.gpr[6] & 31u));
      if (branch_taken) {
          goto L_08927BD8;
      }
      goto L_08927BAC;
    }
L_08927BAC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    ctx.gpr[5] = (2225u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[31] = (0x08927BC8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(20712));
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 350u, 0x08A018ACu>(ctx, &aot_mem) && ctx.pc == 0x08927BC8u) goto L_08927BC8;
    return;
L_08927BC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    goto L_08927BD8;
L_08927BD8:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08927BF0;
      }
      goto L_08927BE0;
    }
L_08927BE0:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(64));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), ctx.gpr[7]);
      if (branch_taken) {
          goto L_08927C6C;
      }
      goto L_08927BF0;
    }
L_08927BF0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[8] << 4u);
    ctx.gpr[7] = (ctx.gpr[8] << 2u);
    ctx.gpr[7] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08927C14u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 322u, 0x0894DE0Cu>(ctx, &aot_mem) && ctx.pc == 0x08927C14u) goto L_08927C14;
    return;
L_08927C14:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[7] = (ctx.gpr[2] | 0u);
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_08927C6C;
      }
      goto L_08927C34;
    }
L_08927C34:
    ctx.gpr[9] = (0u | 0u);
    goto L_08927C38;
L_08927C38:
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(16), 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(20));
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08927C38;
      }
      goto L_08927C6C;
    }
L_08927C6C:
    ctx.gpr[4] = (ctx.gpr[8] << 4u);
    ctx.gpr[8] = (ctx.gpr[8] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[8]);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(7), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-20));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08927C94:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[19]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[20]);
    ctx.gpr[20] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(7)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[30]);
    ctx.gpr[30] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[21]);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.gpr[30] = (ctx.gpr[30] << (ctx.gpr[20] & 31u));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    ctx.gpr[22] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08927CF0;
      }
      goto L_08927CE8;
    }
L_08927CE8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08927D38;
      }
      goto L_08927CF0;
    }
L_08927CF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[21] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(64));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(64));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    goto L_08927D38;
L_08927D38:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08927D54;
      }
      goto L_08927D44;
    }
L_08927D44:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08927D54u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    goto L_08927B24;
L_08927D54:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08927D64u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    goto L_08927B94;
L_08927D64:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08927DF8;
      }
      goto L_08927D70;
    }
L_08927D70:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    ctx.gpr[23] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[23]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08927DE0;
      }
      goto L_08927D84;
    }
L_08927D84:
    ctx.gpr[22] = (ctx.gpr[23] << 3u);
    goto L_08927D88;
L_08927D88:
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[22]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08927DD4;
      }
      goto L_08927D98;
    }
L_08927D98:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[30]);
    ctx.gpr[30] = (ctx.gpr[4] + ctx.gpr[22]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08927DB0u);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 75u, 0x089284A4u>(ctx, &aot_mem) && ctx.pc == 0x08927DB0u) goto L_08927DB0;
    return;
L_08927DB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[30] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    goto L_08927DD4;
L_08927DD4:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[23]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08927D88;
      }
      goto L_08927DE0;
    }
L_08927DE0:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] << 3u);
    ctx.gpr[7] = (ctx.gpr[18] << 3u);
    ctx.gpr[31] = (0x08927DF4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 322u, 0x0894DE0Cu>(ctx, &aot_mem) && ctx.pc == 0x08927DF4u) goto L_08927DF4;
    return;
L_08927DF4:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    goto L_08927DF8;
L_08927DF8:
    ctx.gpr[18] = (ctx.gpr[30] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) < 0;
    ctx.gpr[4] = (ctx.gpr[18] << 4u);
      if (branch_taken) {
          goto L_08927E5C;
      }
      goto L_08927E04;
    }
L_08927E04:
    ctx.gpr[5] = (ctx.gpr[18] << 2u);
    ctx.gpr[19] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[19] = (ctx.gpr[21] + ctx.gpr[19]);
    goto L_08927E10;
L_08927E10:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08927E50;
      }
      goto L_08927E20;
    }
L_08927E20:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[22] = (ctx.gpr[6] + static_cast<std::uint32_t>(8));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08927E34u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 64u, 0x089283E4u>(ctx, &aot_mem) && ctx.pc == 0x08927E34u) goto L_08927E34;
    return;
L_08927E34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[22] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    goto L_08927E50;
L_08927E50:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) >= 0;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-20));
      if (branch_taken) {
          goto L_08927E10;
      }
      goto L_08927E5C;
    }
L_08927E5C:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08927E80;
      }
      goto L_08927E64;
    }
L_08927E64:
    ctx.gpr[6] = (ctx.gpr[30] << 4u);
    ctx.gpr[4] = (ctx.gpr[30] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08927E80u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 322u, 0x0894DE0Cu>(ctx, &aot_mem) && ctx.pc == 0x08927E80u) goto L_08927E80;
    return;
L_08927E80:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08927EB0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x08927EDCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08927974;
L_08927EDC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (0x08927EE8u);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 174u, 0x08A5906Cu>(ctx, &aot_mem) && ctx.pc == 0x08927EE8u) goto L_08927EE8;
    return;
L_08927EE8:
    ctx.gpr[7] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08927EFCu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    goto L_08927C94;
L_08927EFC:
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
L_08927F14:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x08927F48u);
    ctx.gpr[7] = (0u | 32u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 322u, 0x0894DE0Cu>(ctx, &aot_mem) && ctx.pc == 0x08927F48u) goto L_08927F48;
    return;
L_08927F48:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08927F5Cu);
    ctx.gpr[6] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 107u, 0x0891C844u>(ctx, &aot_mem) && ctx.pc == 0x08927F5Cu) goto L_08927F5C;
    return;
L_08927F5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(12), 0u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(28), 0u);
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(7), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(16), 0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08927F90u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    goto L_08927B24;
L_08927F90:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08927FA0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    goto L_08927B94;
L_08927FA0:
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
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
L_08927FC0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(7)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 2u, 0x08928004u>(ctx, &aot_mem); return;
      }
      goto L_08927FD4;
    }
L_08927FD4:
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[7] << (ctx.gpr[6] & 31u));
    ctx.gpr[7] = (ctx.gpr[6] << 4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x08927FFCu);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 322u, 0x0894DE0Cu>(ctx, &aot_mem) && ctx.pc == 0x08927FFCu) goto L_08927FFC;
    return;
L_08927FFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.pc = 0x08928000u; return;
}

void recomp_unit_0072(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0072_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_72(Runtime &runtime) {
    runtime.register_generated_unit(72u, 0x08924000u, 16384u, &recomp_unit_0072, &recomp_unit_0072_entry);
    runtime.register_function(0x08924000u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892403Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924064u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924100u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924110u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892411Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892412Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924134u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924144u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924158u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924168u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924174u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924188u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924194u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089241FCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924208u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924270u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892427Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089242E4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089242F0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924314u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924324u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924338u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924344u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924358u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924364u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089243CCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089243D8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089244B4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089244C4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089244E4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089244E8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089244F4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892455Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892456Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924580u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892458Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089245D8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924600u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924610u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924624u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924634u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089246B0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089246D8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924768u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892476Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924784u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892478Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089247A4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089247C0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089247C4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089247C8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089247D0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089247D8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089247E0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089247FCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924818u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892481Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924820u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924828u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924830u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924838u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924854u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924870u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924874u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924878u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924880u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924888u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924890u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089248ACu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089248C8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089248CCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089248D0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089248D8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089248E0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089248E8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089248F4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089248FCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924908u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924910u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924940u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924944u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924984u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089249A0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089249A4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089249A8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089249B0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089249B8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089249C0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089249DCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089249F8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089249FCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924A00u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924A08u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924A10u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924A18u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924A34u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924A50u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924A54u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924A58u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924A60u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924A68u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924A70u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924AD8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924AF4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924AF8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924AFCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924B04u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924B0Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924B14u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924B30u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924B4Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924B50u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924B54u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924B5Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924B64u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924B6Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924B88u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924BA4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924BA8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924BACu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924BB4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924BBCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924BC4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924C08u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924C24u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924C28u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924C2Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924C34u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924C3Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924C44u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924C54u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924C5Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924C64u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924C74u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924C7Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924C84u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924C94u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924CA0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924CA8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924CB8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924CC4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924CCCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924CFCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924D24u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924D34u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924D44u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924D58u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924D70u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924D78u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924DDCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924DF8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924E20u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924E5Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924E6Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924E74u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924ED4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924EF0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924F18u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924F54u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924F64u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924F6Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924FD4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924FF0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892500Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925048u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925058u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925060u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925074u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925090u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089250A4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089250C8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089250D0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089250D4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925134u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925174u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089251B0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089251C0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089251C8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089251ECu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925240u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925280u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089252B4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089252E8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089252F0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089252F4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925314u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089253D4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089253F4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892541Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925424u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892546Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925488u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925494u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892566Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089256A4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089256B0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089256DCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925754u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892576Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925778u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089257B0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089257C0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089257D8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089257E0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089257E8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089257F0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089257F8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925800u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925808u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892580Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925814u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925828u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925840u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925860u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925880u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892589Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089258A4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089258B4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089258BCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089258C4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089258CCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089258D0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089258D8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925908u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925910u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892591Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925928u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925944u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925954u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925978u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925984u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892598Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925994u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089259B8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089259C0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089259F0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089259FCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925A04u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925A08u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925A14u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925A48u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925A78u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925AA8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925AD8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925B00u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925B2Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925B40u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925B4Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925B58u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925B64u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925B70u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925B7Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925B88u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925B94u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925BA0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925BACu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925BB8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925BC4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925BD0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925BDCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925BE8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925BF4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925C00u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925C0Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925C18u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925C30u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925C44u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925C50u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925C64u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925C70u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925C94u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925C9Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925CA8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925CBCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925CD0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925CDCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925D0Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925D18u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925D28u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925D3Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925D4Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925D58u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925D68u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925D74u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925D7Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925D88u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925D98u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925DA4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925DB0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925DD8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925DF8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925E08u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925E28u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925E38u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925E40u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925E54u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925E64u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925E6Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925E7Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925E88u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925E8Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925E94u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925EA4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925EB8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925EC0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925EC8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925EDCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925EE4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925EF4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925F08u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925F10u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925F24u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925F38u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925F4Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925F68u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925F74u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925FD8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925FE0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925FE8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925FF8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926000u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926008u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926010u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926020u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926050u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926058u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926064u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926078u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089260B4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089260C4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089260E0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089260ECu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892610Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926118u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926124u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926134u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892614Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926154u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926178u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926180u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926188u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892618Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089261ACu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089261E8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926200u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892620Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926218u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926228u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926244u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926250u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926270u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926284u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892628Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089262ACu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089262B8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089262C0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089262C8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089262E0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089262E8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089262F0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089262F8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926304u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892630Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926314u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926318u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926338u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926374u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926384u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089263A0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089263ACu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089263CCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089263D8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089263E4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089263F4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892640Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926414u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926438u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926440u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926448u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892644Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892646Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089264A8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089264C0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089264CCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089264D8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089264E8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926504u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926510u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926530u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926544u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892654Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892656Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926578u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926580u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926588u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926594u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892659Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089265A4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089265ACu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089265B8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089265C0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089265C8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089265CCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089265ECu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926600u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926614u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926620u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926630u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926640u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926648u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892665Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926694u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089266A8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089266B4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926720u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926728u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926730u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926750u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926788u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892679Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089267A8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926818u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926820u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926828u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926848u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926878u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926880u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926894u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089268C8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089268DCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089268F8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926900u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892690Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892692Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926938u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926944u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926950u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926960u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926974u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892697Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926984u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926988u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089269A0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089269D4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089269F0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089269F8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926A04u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926A24u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926A30u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926A3Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926A48u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926A58u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926A6Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926A74u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926A7Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926A80u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926A98u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926AD4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926AE8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926B00u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926B0Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926B18u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926B28u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926B40u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926B58u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926B60u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926B80u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926B8Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926B94u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926B9Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926BA4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926BACu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926BB0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926BD0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926C0Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926C24u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926C30u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926C3Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926C4Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926C68u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926C74u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926C94u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926CA8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926CB0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926CD0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926CDCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926CE4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926CECu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926CF4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926CFCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926D00u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926D20u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926D50u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926D58u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926D6Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926D9Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926DA4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926DB0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926DC4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926DF4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926DFCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926E10u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926E40u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926E48u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926E54u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926E68u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926E88u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926EA0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926EA8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926EB4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926ECCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926ED4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926EDCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926EE4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926EECu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926EF4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926F08u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926F54u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926F60u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926F74u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926F84u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927014u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927058u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892706Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927084u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892708Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089270BCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089270DCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089270E4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089270FCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892711Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927124u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927154u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927180u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927188u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892719Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089271F4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927238u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927268u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927274u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089272A4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089272A8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089272B4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089272B8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089272C4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089272D0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927304u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927310u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892733Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892734Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892735Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927360u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927370u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927380u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927384u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892738Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927438u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927450u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927468u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927480u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927484u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892748Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892749Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089274ACu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089274C4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089274DCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892750Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927550u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927570u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927588u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927594u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089275B0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089275BCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089275D8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089275F8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927604u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892760Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892762Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892764Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927658u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927668u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892768Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927694u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089276A0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089276A8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089276ACu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089276B4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089276DCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089276E4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089276F0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089276F8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927700u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892770Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927714u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927720u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927734u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927744u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927748u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927768u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927780u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892779Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089277B4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089277C0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089277CCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089277E4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089277ECu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892782Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927844u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927858u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927864u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927878u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927880u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089278C8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089278DCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089278FCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892790Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927914u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927924u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927930u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927940u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927948u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927954u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892796Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927974u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089279C4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089279D4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089279E4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089279ECu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089279F8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927A00u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927A0Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927A1Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927A2Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927A3Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927A44u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927A58u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927A70u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927A7Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927A90u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927A98u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927AA4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927AACu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927AD0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927AD4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927AE8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927AFCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927B24u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927B4Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927B68u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927B84u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927B94u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927BACu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927BC8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927BD8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927BE0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927BF0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927C14u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927C34u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927C38u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927C6Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927C94u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927CE8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927CF0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927D38u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927D44u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927D54u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927D64u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927D70u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927D84u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927D88u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927D98u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927DB0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927DD4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927DE0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927DF4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927DF8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927E04u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927E10u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927E20u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927E34u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927E50u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927E5Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927E64u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927E80u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927EB0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927EDCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927EE8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927EFCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927F14u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927F48u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927F5Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927F90u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927FA0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927FC0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927FD4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927FFCu, &recomp_unit_0072, "recomp_unit_0072");
}
} // namespace psprecomp
