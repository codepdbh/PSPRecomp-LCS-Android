#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0029[4095] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 5, 0, 0, 6, 0, 7, 0, 8,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 11,
    0, 0, 0, 0, 12, 0, 0, 13, 0, 0, 0, 14, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 17, 0, 0, 18, 0,
    0, 0, 0, 19, 0, 0, 0, 20, 0, 21, 0, 0, 0, 0, 22, 0, 23, 0, 24, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 26, 0, 0,
    0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 28, 0, 29, 0, 30, 31, 0, 0, 0, 0, 32, 0, 0, 0, 0, 33, 0, 0, 0, 34, 0, 0,
    35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 37, 0, 38, 0, 0, 0, 39, 0, 40, 0, 0, 41, 0, 42,
    0, 0, 0, 0, 43, 0, 44, 45, 0, 0, 46, 0, 0, 47, 0, 0, 0, 48, 0, 0, 0, 49, 50, 0, 0, 0, 0, 0, 51, 0, 0, 52,
    0, 0, 0, 53, 54, 0, 55, 0, 0, 0, 56, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 59, 0, 60, 0, 61,
    0, 0, 62, 0, 0, 0, 63, 0, 0, 0, 0, 64, 0, 0, 0, 65, 0, 0, 66, 0, 67, 0, 68, 0, 0, 0, 0, 69, 70, 71, 0, 0,
    0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 77,
    0, 0, 0, 0, 78, 0, 0, 79, 0, 80, 81, 0, 0, 82, 0, 0, 83, 0, 0, 84, 0, 0, 0, 85, 0, 86, 0, 0, 0, 87, 0, 0,
    88, 0, 0, 0, 89, 0, 0, 0, 90, 0, 91, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 96, 0, 97, 0, 0, 98, 0, 99, 0, 100, 0, 101, 0, 102, 0, 103, 0,
    0, 0, 0, 104, 0, 105, 0, 0, 106, 0, 107, 0, 108, 0, 109, 0, 110, 0, 111, 0, 0, 0, 0, 112, 0, 0, 0, 0, 113, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 116, 0, 0, 117, 0, 118, 0, 0, 0, 0,
    119, 0, 0, 0, 0, 120, 0, 0, 121, 0, 0, 0, 0, 0, 122, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 125, 0, 0, 0, 0, 0, 0, 126,
    0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    133, 0, 0, 0, 134, 0, 0, 135, 0, 0, 0, 136, 0, 137, 0, 0, 138, 0, 139, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 141, 0, 0, 142, 0, 0, 0, 0, 0, 0, 143, 0, 0, 144, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 146, 0, 147, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 153, 0, 0,
    0, 0, 0, 154, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 158, 0, 0, 0,
    0, 159, 0, 0, 0, 0, 160, 0, 0, 0, 0, 161, 0, 0, 162, 0, 163, 0, 0, 164, 0, 0, 0, 165, 0, 166, 0, 0, 0, 167, 0, 0,
    0, 168, 0, 0, 169, 0, 0, 0, 170, 0, 0, 171, 172, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 174, 0, 175, 0, 0, 0, 176, 0, 0, 0, 0, 177, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0,
    0, 0, 0, 0, 180, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 183, 0, 0, 184, 0, 0, 185, 0, 0, 0,
    0, 186, 0, 187, 0, 0, 0, 0, 0, 0, 188, 0, 189, 0, 0, 0, 0, 0, 0, 190, 0, 191, 0, 192, 0, 0, 193, 0, 0, 0, 0, 0,
    0, 194, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 197, 0, 0, 198, 0, 199, 0, 200, 0, 0, 201, 0, 202, 0,
    203, 0, 204, 0, 0, 0, 205, 0, 0, 0, 0, 0, 206, 0, 207, 208, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 210,
    0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 213, 0, 214, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 217, 0, 0, 0,
    0, 218, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 221, 0, 222, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 225, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 230, 0, 0, 231, 0, 232, 0, 0, 233, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 236,
    0, 237, 0, 0, 238, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 241, 0, 242, 0, 0,
    0, 243, 0, 244, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 246, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 252, 0, 253, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 257, 0, 258, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 263, 0, 264, 0, 265, 0, 0, 0, 0, 0, 266, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 271, 0, 0, 272, 0, 0,
    0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 275, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 277, 0, 278, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 281, 0, 0, 282, 0, 0, 0, 0, 283, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 285, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    287, 0, 288, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0,
    0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 294, 0, 295, 0, 0,
    0, 0, 0, 0, 296, 0, 297, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 299, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 303, 0, 0, 304, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 305, 0, 306, 0, 0, 307, 0, 308, 0, 0, 0, 0, 309, 0, 310, 0, 311, 0, 0, 0, 0, 312, 0, 0, 0, 313,
    0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 315, 0, 316, 0, 0, 0, 0, 317, 0, 0, 318, 0, 0, 319, 0, 0, 0, 0, 320, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 324, 0, 0, 0, 0, 0, 0, 325,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 328, 0, 329, 0, 330, 0, 0, 331, 0, 0, 0, 0,
    0, 0, 332, 0, 333, 0, 0, 0, 334, 0, 0, 0, 335, 0, 336, 0, 337, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 339, 0, 0, 340,
    0, 0, 341, 0, 0, 342, 0, 0, 343, 0, 0, 344, 0, 0, 345, 0, 0, 346, 0, 0, 0, 0, 347, 0, 348, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 349, 0, 350, 0, 0, 351, 0, 352, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 354, 0, 0, 355, 0, 0, 0, 0, 356, 0,
    0, 357, 0, 0, 358, 0, 0, 0, 0, 0, 359, 0, 0, 0, 360, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 363, 0, 364, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 365, 0, 366, 0, 0, 0, 0, 367, 0, 0, 0, 0, 368,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 0, 0, 372, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 373, 0, 374, 0, 375,
    0, 0, 0, 0, 376, 0, 377, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 379, 0, 380, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 383, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 384, 0, 385,
    0, 386, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 387, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 390, 0, 391, 0, 392, 0, 0, 0, 0, 0, 393, 0, 0, 394, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 395, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 396, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 397, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 398, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 399, 0, 400, 0, 401, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 402, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 403, 0, 404, 0, 405, 0, 0, 0, 0, 0, 0, 0, 406, 0, 407, 0, 0, 0, 0, 0, 0, 408, 0, 0, 0,
    0, 409, 0, 410, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 411, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    412, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 413, 0, 0, 414, 0, 415, 0, 416, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 417, 0, 0, 0, 0, 0, 0, 0, 418, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 419, 0, 0, 0, 420, 0, 421, 0, 0, 0, 0, 0, 422, 0, 423, 0, 0, 424, 0, 425, 0, 426, 0, 0, 0, 0, 427, 0,
    428, 0, 429, 0, 430, 0, 431, 0, 0, 0, 432, 0, 433, 0, 434, 0, 435, 0, 0, 0, 0, 436, 0, 437, 0, 0, 438, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 439, 0, 0, 0, 0,
    0, 440, 0, 0, 0, 0, 0, 0, 0, 441, 0, 442, 0, 0, 0, 0, 0, 0, 0, 0, 0, 443, 0, 444, 0, 0, 445, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 446, 447, 0, 448, 0,
    0, 0, 0, 0, 0, 0, 0, 449, 0, 0, 0, 0, 450, 0, 0, 0, 0, 451, 0, 452, 0, 453, 0, 0, 0, 0, 0, 0, 0, 0, 0, 454,
    0, 455, 0, 0, 456, 0, 457, 0, 458, 0, 0, 0, 0, 459, 0, 460, 0, 461, 0, 462, 0, 463, 0, 0, 0, 0, 464, 0, 0, 0, 0, 465,
    0, 466, 0, 467, 0, 0, 0, 468, 0, 0, 0, 0, 0, 469, 0, 470, 0, 0, 471, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 472, 0, 0, 0, 473, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 474, 0, 475, 0, 0, 476, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 477, 478, 0, 479, 0, 480, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 481, 0,
    482, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 483, 0, 0, 0, 484, 0, 485, 0, 486, 0, 0, 487, 0, 0, 488, 0, 0,
    0, 0, 0, 0, 0, 0, 489, 0, 490, 0, 0, 0, 0, 0, 0, 0, 0, 0, 491, 0, 0, 492, 0, 493, 0, 0, 494, 0, 0, 0, 0, 495,
    0, 0, 0, 0, 0, 0, 496, 0, 497, 0, 498, 0, 499, 0, 0, 500, 0, 501, 0, 0, 502, 0, 503, 0, 504, 0, 0, 505, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 506, 507, 0, 0, 0, 0, 0, 0, 0, 508, 0, 0, 0, 0, 0, 509, 0, 510, 0,
    0, 0, 0, 0, 511, 0, 0, 512, 0, 513, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    514, 515, 0, 0, 0, 0, 0, 0, 516, 0, 0, 517, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 518, 0, 0, 0,
    0, 0, 0, 0, 0, 519, 0, 520, 0, 0, 0, 521, 0, 0, 0, 0, 0, 0, 522, 0, 523, 0, 524, 0, 0, 0, 0, 0, 0, 525, 0, 0,
    0, 0, 526, 0, 0, 0, 0, 0, 0, 527, 0, 0, 0, 0, 528, 0, 0, 0, 0, 529, 0, 0, 0, 530, 0, 0, 0, 531, 0, 0, 532, 0,
    533, 0, 534, 0, 535, 0, 536, 0, 537, 0, 538, 0, 539, 0, 540, 0, 541, 0, 542, 543, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 544, 0, 0, 0, 0, 0, 0, 0, 0, 0, 545, 0, 0, 0, 0, 0, 0, 0, 546, 0, 0, 547, 0, 548, 0, 549, 0, 550, 0, 551, 0,
    0, 552, 0, 553, 0, 0, 554, 0, 555, 0, 0, 556, 0, 557, 0, 0, 558, 0, 559, 0, 0, 560, 0, 561, 0, 562, 0, 563, 0, 0, 0, 564,
    0, 565, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 566, 0, 567, 0, 0, 568, 0, 0, 0, 0,
    0, 0, 0, 0, 569, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 570, 0, 0, 0, 571, 0, 0, 0, 0, 0, 0,
    572, 0, 0, 0, 0, 0, 573, 0, 0, 0, 574, 0, 0, 0, 575, 0, 0, 0, 576, 0, 0, 0, 577, 0, 0, 0, 578, 0, 0, 0, 579, 0,
    0, 0, 580, 0, 0, 0, 581, 0, 0, 0, 582, 0, 0, 0, 583, 584, 0, 585, 0, 0, 586, 0, 0, 587, 0, 0, 0, 0, 0, 0, 0, 588,
    0, 589, 0, 0, 590, 0, 0, 591, 0, 592, 593, 594, 0, 595, 0, 0, 596, 0, 0, 597, 0, 0, 598, 0, 0, 0, 0, 0, 599, 0, 600, 0,
    0, 0, 601, 0, 0, 0, 602, 0, 603, 0, 604, 0, 0, 0, 0, 0, 605, 0, 0, 0, 0, 0, 606, 0, 0, 607, 0, 0, 608, 0, 0, 609,
    0, 0, 610, 0, 0, 611, 0, 0, 612, 0, 0, 613, 0, 0, 0, 0, 614, 615, 0, 0, 0, 0, 0, 0, 0, 0, 0, 616, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 617, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 618, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 619, 0, 0, 0, 0, 0, 0, 0, 620, 0, 0, 0,
    0, 621, 0, 622, 623, 0, 624, 0, 0, 0, 0, 625, 0, 626, 0, 0, 0, 0, 627, 0, 0, 0, 0, 0, 0, 0, 0, 628, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 629, 0, 0, 0, 630, 0, 0, 0, 0, 0, 631, 0, 0, 0, 0, 0, 0, 0, 0, 0, 632, 0, 633, 0, 0, 0, 0,
    0, 0, 0, 634, 0, 635, 0, 0, 0, 636, 0, 0, 0, 0, 637, 638, 0, 639, 0, 640, 0, 0, 0, 0, 0, 0, 641, 0, 0, 0, 0, 0,
    0, 0, 642, 0, 0, 0, 0, 0, 643, 0, 0, 644, 0, 0, 0, 0, 0, 645, 0, 646, 0, 647, 0, 648, 0, 649, 0, 650, 0, 651, 0, 652,
    0, 653, 0, 654, 0, 655, 0, 656, 0, 0, 657, 0, 658, 0, 0, 659, 0, 660, 0, 0, 661, 0, 662, 0, 0, 663, 0, 664, 0, 665, 0, 666,
    0, 667, 0, 668, 0, 669, 0, 670, 0, 671, 672, 0, 0, 0, 673, 0, 0, 674, 0, 0, 675, 0, 676, 0, 677, 0, 0, 678, 0, 0, 0, 0,
    0, 679, 0, 680, 0, 681, 0, 682, 0, 0, 683, 0, 0, 684, 0, 0, 0, 0, 0, 685, 0, 686, 0, 687, 688, 0, 689, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 690, 0, 0, 0, 691, 0, 0, 0, 692, 0, 693, 0, 0, 694, 0, 695, 0, 0,
    696, 0, 0, 0, 0, 697, 0, 698, 0, 699, 0, 0, 700, 0, 0, 701, 0, 702, 0, 0, 703, 0, 0, 0, 704, 705, 0, 0, 0, 0, 0, 0,
    0, 706, 0, 0, 0, 0, 0, 0, 0, 0, 0, 707, 0, 0, 0, 708, 0, 0, 709, 0, 0, 0, 710, 0, 0, 0, 711, 0, 0, 712, 0, 0,
    0, 0, 0, 0, 713, 0, 714, 0, 0, 0, 0, 0, 0, 0, 0, 715, 0, 0, 716, 0, 0, 0, 0, 0, 0, 0, 0, 0, 717, 0, 0, 0,
    0, 0, 718, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 719, 0, 720, 0, 0, 0, 721,
    722, 0, 0, 0, 723, 0, 724, 0, 0, 0, 725, 726, 727, 0, 0, 0, 0, 0, 728, 0, 729, 0, 0, 0, 730, 731, 0, 0, 0, 732, 0, 733,
    0, 0, 0, 734, 735, 736, 0, 0, 0, 0, 0, 737, 0, 738, 0, 0, 0, 739, 740, 0, 0, 0, 741, 0, 742, 0, 0, 0, 743, 744, 745,
};
void recomp_unit_0029_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08878000u;
        entry_id = (entry_delta < 16380u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0029[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08878000;
    case 2u: goto L_0887802C;
    case 3u: goto L_0887803C;
    case 4u: goto L_088780D0;
    case 5u: goto L_088780E0;
    case 6u: goto L_088780EC;
    case 7u: goto L_088780F4;
    case 8u: goto L_088780FC;
    case 9u: goto L_08878128;
    case 10u: goto L_08878164;
    case 11u: goto L_0887817C;
    case 12u: goto L_08878190;
    case 13u: goto L_0887819C;
    case 14u: goto L_088781AC;
    case 15u: goto L_088781BC;
    case 16u: goto L_088781DC;
    case 17u: goto L_088781EC;
    case 18u: goto L_088781F8;
    case 19u: goto L_0887820C;
    case 20u: goto L_0887821C;
    case 21u: goto L_08878224;
    case 22u: goto L_08878238;
    case 23u: goto L_08878240;
    case 24u: goto L_08878248;
    case 25u: goto L_08878258;
    case 26u: goto L_08878274;
    case 27u: goto L_08878288;
    case 28u: goto L_088782A8;
    case 29u: goto L_088782B0;
    case 30u: goto L_088782B8;
    case 31u: goto L_088782BC;
    case 32u: goto L_088782D0;
    case 33u: goto L_088782E4;
    case 34u: goto L_088782F4;
    case 35u: goto L_08878300;
    case 36u: goto L_08878338;
    case 37u: goto L_08878348;
    case 38u: goto L_08878350;
    case 39u: goto L_08878360;
    case 40u: goto L_08878368;
    case 41u: goto L_08878374;
    case 42u: goto L_0887837C;
    case 43u: goto L_08878390;
    case 44u: goto L_08878398;
    case 45u: goto L_0887839C;
    case 46u: goto L_088783A8;
    case 47u: goto L_088783B4;
    case 48u: goto L_088783C4;
    case 49u: goto L_088783D4;
    case 50u: goto L_088783D8;
    case 51u: goto L_088783F0;
    case 52u: goto L_088783FC;
    case 53u: goto L_0887840C;
    case 54u: goto L_08878410;
    case 55u: goto L_08878418;
    case 56u: goto L_08878428;
    case 57u: goto L_08878430;
    case 58u: goto L_08878458;
    case 59u: goto L_0887846C;
    case 60u: goto L_08878474;
    case 61u: goto L_0887847C;
    case 62u: goto L_08878488;
    case 63u: goto L_08878498;
    case 64u: goto L_088784AC;
    case 65u: goto L_088784BC;
    case 66u: goto L_088784C8;
    case 67u: goto L_088784D0;
    case 68u: goto L_088784D8;
    case 69u: goto L_088784EC;
    case 70u: goto L_088784F0;
    case 71u: goto L_088784F4;
    case 72u: goto L_08878504;
    case 73u: goto L_08878554;
    case 74u: goto L_08878634;
    case 75u: goto L_08878650;
    case 76u: goto L_08878664;
    case 77u: goto L_0887867C;
    case 78u: goto L_08878690;
    case 79u: goto L_0887869C;
    case 80u: goto L_088786A4;
    case 81u: goto L_088786A8;
    case 82u: goto L_088786B4;
    case 83u: goto L_088786C0;
    case 84u: goto L_088786CC;
    case 85u: goto L_088786DC;
    case 86u: goto L_088786E4;
    case 87u: goto L_088786F4;
    case 88u: goto L_08878700;
    case 89u: goto L_08878710;
    case 90u: goto L_08878720;
    case 91u: goto L_08878728;
    case 92u: goto L_0887873C;
    case 93u: goto L_08878758;
    case 94u: goto L_08878788;
    case 95u: goto L_088787A8;
    case 96u: goto L_088787BC;
    case 97u: goto L_088787C4;
    case 98u: goto L_088787D0;
    case 99u: goto L_088787D8;
    case 100u: goto L_088787E0;
    case 101u: goto L_088787E8;
    case 102u: goto L_088787F0;
    case 103u: goto L_088787F8;
    case 104u: goto L_0887880C;
    case 105u: goto L_08878814;
    case 106u: goto L_08878820;
    case 107u: goto L_08878828;
    case 108u: goto L_08878830;
    case 109u: goto L_08878838;
    case 110u: goto L_08878840;
    case 111u: goto L_08878848;
    case 112u: goto L_0887885C;
    case 113u: goto L_08878870;
    case 114u: goto L_088788A4;
    case 115u: goto L_088788C0;
    case 116u: goto L_088788D8;
    case 117u: goto L_088788E4;
    case 118u: goto L_088788EC;
    case 119u: goto L_08878900;
    case 120u: goto L_08878914;
    case 121u: goto L_08878920;
    case 122u: goto L_08878938;
    case 123u: goto L_08878944;
    case 124u: goto L_088789D4;
    case 125u: goto L_088789E0;
    case 126u: goto L_088789FC;
    case 127u: goto L_08878A0C;
    case 128u: goto L_08878A40;
    case 129u: goto L_08878A54;
    case 130u: goto L_08878A78;
    case 131u: goto L_08878AB4;
    case 132u: goto L_08878AC8;
    case 133u: goto L_08878B00;
    case 134u: goto L_08878B10;
    case 135u: goto L_08878B1C;
    case 136u: goto L_08878B2C;
    case 137u: goto L_08878B34;
    case 138u: goto L_08878B40;
    case 139u: goto L_08878B48;
    case 140u: goto L_08878B60;
    case 141u: goto L_08878B88;
    case 142u: goto L_08878B94;
    case 143u: goto L_08878BB0;
    case 144u: goto L_08878BBC;
    case 145u: goto L_08878BCC;
    case 146u: goto L_08878C04;
    case 147u: goto L_08878C0C;
    case 148u: goto L_08878C20;
    case 149u: goto L_08878C40;
    case 150u: goto L_08878C54;
    case 151u: goto L_08878CB0;
    case 152u: goto L_08878CDC;
    case 153u: goto L_08878CF4;
    case 154u: goto L_08878D0C;
    case 155u: goto L_08878D24;
    case 156u: goto L_08878D44;
    case 157u: goto L_08878D5C;
    case 158u: goto L_08878D70;
    case 159u: goto L_08878D84;
    case 160u: goto L_08878D98;
    case 161u: goto L_08878DAC;
    case 162u: goto L_08878DB8;
    case 163u: goto L_08878DC0;
    case 164u: goto L_08878DCC;
    case 165u: goto L_08878DDC;
    case 166u: goto L_08878DE4;
    case 167u: goto L_08878DF4;
    case 168u: goto L_08878E04;
    case 169u: goto L_08878E10;
    case 170u: goto L_08878E20;
    case 171u: goto L_08878E2C;
    case 172u: goto L_08878E30;
    case 173u: goto L_08878E38;
    case 174u: goto L_08878E88;
    case 175u: goto L_08878E90;
    case 176u: goto L_08878EA0;
    case 177u: goto L_08878EB4;
    case 178u: goto L_08878EC8;
    case 179u: goto L_08878EF8;
    case 180u: goto L_08878F10;
    case 181u: goto L_08878F20;
    case 182u: goto L_08878F50;
    case 183u: goto L_08878F58;
    case 184u: goto L_08878F64;
    case 185u: goto L_08878F70;
    case 186u: goto L_08878F84;
    case 187u: goto L_08878F8C;
    case 188u: goto L_08878FA8;
    case 189u: goto L_08878FB0;
    case 190u: goto L_08878FCC;
    case 191u: goto L_08878FD4;
    case 192u: goto L_08878FDC;
    case 193u: goto L_08878FE8;
    case 194u: goto L_08879004;
    case 195u: goto L_0887900C;
    case 196u: goto L_0887903C;
    case 197u: goto L_08879048;
    case 198u: goto L_08879054;
    case 199u: goto L_0887905C;
    case 200u: goto L_08879064;
    case 201u: goto L_08879070;
    case 202u: goto L_08879078;
    case 203u: goto L_08879080;
    case 204u: goto L_08879088;
    case 205u: goto L_08879098;
    case 206u: goto L_088790B0;
    case 207u: goto L_088790B8;
    case 208u: goto L_088790BC;
    case 209u: goto L_088790DC;
    case 210u: goto L_088790FC;
    case 211u: goto L_08879118;
    case 212u: goto L_08879134;
    case 213u: goto L_08879148;
    case 214u: goto L_08879150;
    case 215u: goto L_0887915C;
    case 216u: goto L_088791E4;
    case 217u: goto L_088791F0;
    case 218u: goto L_08879204;
    case 219u: goto L_08879210;
    case 220u: goto L_08879230;
    case 221u: goto L_08879248;
    case 222u: goto L_08879250;
    case 223u: goto L_0887925C;
    case 224u: goto L_088792E0;
    case 225u: goto L_088792F8;
    case 226u: goto L_08879320;
    case 227u: goto L_0887932C;
    case 228u: goto L_0887934C;
    case 229u: goto L_08879360;
    case 230u: goto L_08879390;
    case 231u: goto L_0887939C;
    case 232u: goto L_088793A4;
    case 233u: goto L_088793B0;
    case 234u: goto L_088793C4;
    case 235u: goto L_088793F0;
    case 236u: goto L_088793FC;
    case 237u: goto L_08879404;
    case 238u: goto L_08879410;
    case 239u: goto L_0887942C;
    case 240u: goto L_08879464;
    case 241u: goto L_0887946C;
    case 242u: goto L_08879474;
    case 243u: goto L_08879484;
    case 244u: goto L_0887948C;
    case 245u: goto L_088794A4;
    case 246u: goto L_088794B8;
    case 247u: goto L_088794C0;
    case 248u: goto L_08879508;
    case 249u: goto L_0887954C;
    case 250u: goto L_08879568;
    case 251u: goto L_088795A4;
    case 252u: goto L_088795B8;
    case 253u: goto L_088795C0;
    case 254u: goto L_088795C8;
    case 255u: goto L_08879624;
    case 256u: goto L_08879648;
    case 257u: goto L_08879690;
    case 258u: goto L_08879698;
    case 259u: goto L_088796A0;
    case 260u: goto L_088796E8;
    case 261u: goto L_0887972C;
    case 262u: goto L_08879750;
    case 263u: goto L_08879788;
    case 264u: goto L_08879790;
    case 265u: goto L_08879798;
    case 266u: goto L_088797B0;
    case 267u: goto L_088797BC;
    case 268u: goto L_08879844;
    case 269u: goto L_08879878;
    case 270u: goto L_088798CC;
    case 271u: goto L_088798E8;
    case 272u: goto L_088798F4;
    case 273u: goto L_08879908;
    case 274u: goto L_08879938;
    case 275u: goto L_08879950;
    case 276u: goto L_0887995C;
    case 277u: goto L_0887998C;
    case 278u: goto L_08879994;
    case 279u: goto L_088799A0;
    case 280u: goto L_088799D0;
    case 281u: goto L_088799D8;
    case 282u: goto L_088799E4;
    case 283u: goto L_088799F8;
    case 284u: goto L_08879A28;
    case 285u: goto L_08879A40;
    case 286u: goto L_08879A48;
    case 287u: goto L_08879A80;
    case 288u: goto L_08879A88;
    case 289u: goto L_08879A90;
    case 290u: goto L_08879AEC;
    case 291u: goto L_08879B10;
    case 292u: goto L_08879B2C;
    case 293u: goto L_08879B64;
    case 294u: goto L_08879B6C;
    case 295u: goto L_08879B74;
    case 296u: goto L_08879B90;
    case 297u: goto L_08879B98;
    case 298u: goto L_08879BB4;
    case 299u: goto L_08879BC8;
    case 300u: goto L_08879BD0;
    case 301u: goto L_08879C24;
    case 302u: goto L_08879C48;
    case 303u: goto L_08879C64;
    case 304u: goto L_08879C70;
    case 305u: goto L_08879C98;
    case 306u: goto L_08879CA0;
    case 307u: goto L_08879CAC;
    case 308u: goto L_08879CB4;
    case 309u: goto L_08879CC8;
    case 310u: goto L_08879CD0;
    case 311u: goto L_08879CD8;
    case 312u: goto L_08879CEC;
    case 313u: goto L_08879CFC;
    case 314u: goto L_08879D10;
    case 315u: goto L_08879D28;
    case 316u: goto L_08879D30;
    case 317u: goto L_08879D44;
    case 318u: goto L_08879D50;
    case 319u: goto L_08879D5C;
    case 320u: goto L_08879D70;
    case 321u: goto L_08879DA0;
    case 322u: goto L_08879DA8;
    case 323u: goto L_08879DD8;
    case 324u: goto L_08879DE0;
    case 325u: goto L_08879DFC;
    case 326u: goto L_08879E24;
    case 327u: goto L_08879E30;
    case 328u: goto L_08879E50;
    case 329u: goto L_08879E58;
    case 330u: goto L_08879E60;
    case 331u: goto L_08879E6C;
    case 332u: goto L_08879E88;
    case 333u: goto L_08879E90;
    case 334u: goto L_08879EA0;
    case 335u: goto L_08879EB0;
    case 336u: goto L_08879EB8;
    case 337u: goto L_08879EC0;
    case 338u: goto L_08879ED8;
    case 339u: goto L_08879EF0;
    case 340u: goto L_08879EFC;
    case 341u: goto L_08879F08;
    case 342u: goto L_08879F14;
    case 343u: goto L_08879F20;
    case 344u: goto L_08879F2C;
    case 345u: goto L_08879F38;
    case 346u: goto L_08879F44;
    case 347u: goto L_08879F58;
    case 348u: goto L_08879F60;
    case 349u: goto L_08879F8C;
    case 350u: goto L_08879F94;
    case 351u: goto L_08879FA0;
    case 352u: goto L_08879FA8;
    case 353u: goto L_08879FC8;
    case 354u: goto L_08879FD8;
    case 355u: goto L_08879FE4;
    case 356u: goto L_08879FF8;
    case 357u: goto L_0887A004;
    case 358u: goto L_0887A010;
    case 359u: goto L_0887A028;
    case 360u: goto L_0887A038;
    case 361u: goto L_0887A050;
    case 362u: goto L_0887A064;
    case 363u: goto L_0887A098;
    case 364u: goto L_0887A0A0;
    case 365u: goto L_0887A0CC;
    case 366u: goto L_0887A0D4;
    case 367u: goto L_0887A0E8;
    case 368u: goto L_0887A0FC;
    case 369u: goto L_0887A124;
    case 370u: goto L_0887A130;
    case 371u: goto L_0887A150;
    case 372u: goto L_0887A178;
    case 373u: goto L_0887A1EC;
    case 374u: goto L_0887A1F4;
    case 375u: goto L_0887A1FC;
    case 376u: goto L_0887A210;
    case 377u: goto L_0887A218;
    case 378u: goto L_0887A230;
    case 379u: goto L_0887A244;
    case 380u: goto L_0887A24C;
    case 381u: goto L_0887A290;
    case 382u: goto L_0887A2C8;
    case 383u: goto L_0887A2F8;
    case 384u: goto L_0887A374;
    case 385u: goto L_0887A37C;
    case 386u: goto L_0887A384;
    case 387u: goto L_0887A3CC;
    case 388u: goto L_0887A410;
    case 389u: goto L_0887A440;
    case 390u: goto L_0887A4B4;
    case 391u: goto L_0887A4BC;
    case 392u: goto L_0887A4C4;
    case 393u: goto L_0887A4DC;
    case 394u: goto L_0887A4E8;
    case 395u: goto L_0887A570;
    case 396u: goto L_0887A5A4;
    case 397u: goto L_0887A5F8;
    case 398u: goto L_0887A628;
    case 399u: goto L_0887A698;
    case 400u: goto L_0887A6A0;
    case 401u: goto L_0887A6A8;
    case 402u: goto L_0887A728;
    case 403u: goto L_0887A79C;
    case 404u: goto L_0887A7A4;
    case 405u: goto L_0887A7AC;
    case 406u: goto L_0887A7CC;
    case 407u: goto L_0887A7D4;
    case 408u: goto L_0887A7F0;
    case 409u: goto L_0887A804;
    case 410u: goto L_0887A80C;
    case 411u: goto L_0887A850;
    case 412u: goto L_0887A880;
    case 413u: goto L_0887A8C0;
    case 414u: goto L_0887A8CC;
    case 415u: goto L_0887A8D4;
    case 416u: goto L_0887A8DC;
    case 417u: goto L_0887A93C;
    case 418u: goto L_0887A95C;
    case 419u: goto L_0887A990;
    case 420u: goto L_0887A9A0;
    case 421u: goto L_0887A9A8;
    case 422u: goto L_0887A9C0;
    case 423u: goto L_0887A9C8;
    case 424u: goto L_0887A9D4;
    case 425u: goto L_0887A9DC;
    case 426u: goto L_0887A9E4;
    case 427u: goto L_0887A9F8;
    case 428u: goto L_0887AA00;
    case 429u: goto L_0887AA08;
    case 430u: goto L_0887AA10;
    case 431u: goto L_0887AA18;
    case 432u: goto L_0887AA28;
    case 433u: goto L_0887AA30;
    case 434u: goto L_0887AA38;
    case 435u: goto L_0887AA40;
    case 436u: goto L_0887AA54;
    case 437u: goto L_0887AA5C;
    case 438u: goto L_0887AA68;
    case 439u: goto L_0887AAEC;
    case 440u: goto L_0887AB04;
    case 441u: goto L_0887AB24;
    case 442u: goto L_0887AB2C;
    case 443u: goto L_0887AB54;
    case 444u: goto L_0887AB5C;
    case 445u: goto L_0887AB68;
    case 446u: goto L_0887ABEC;
    case 447u: goto L_0887ABF0;
    case 448u: goto L_0887ABF8;
    case 449u: goto L_0887AC1C;
    case 450u: goto L_0887AC30;
    case 451u: goto L_0887AC44;
    case 452u: goto L_0887AC4C;
    case 453u: goto L_0887AC54;
    case 454u: goto L_0887AC7C;
    case 455u: goto L_0887AC84;
    case 456u: goto L_0887AC90;
    case 457u: goto L_0887AC98;
    case 458u: goto L_0887ACA0;
    case 459u: goto L_0887ACB4;
    case 460u: goto L_0887ACBC;
    case 461u: goto L_0887ACC4;
    case 462u: goto L_0887ACCC;
    case 463u: goto L_0887ACD4;
    case 464u: goto L_0887ACE8;
    case 465u: goto L_0887ACFC;
    case 466u: goto L_0887AD04;
    case 467u: goto L_0887AD0C;
    case 468u: goto L_0887AD1C;
    case 469u: goto L_0887AD34;
    case 470u: goto L_0887AD3C;
    case 471u: goto L_0887AD48;
    case 472u: goto L_0887ADD0;
    case 473u: goto L_0887ADE0;
    case 474u: goto L_0887AE14;
    case 475u: goto L_0887AE1C;
    case 476u: goto L_0887AE28;
    case 477u: goto L_0887AEB0;
    case 478u: goto L_0887AEB4;
    case 479u: goto L_0887AEBC;
    case 480u: goto L_0887AEC4;
    case 481u: goto L_0887AEF8;
    case 482u: goto L_0887AF00;
    case 483u: goto L_0887AF3C;
    case 484u: goto L_0887AF4C;
    case 485u: goto L_0887AF54;
    case 486u: goto L_0887AF5C;
    case 487u: goto L_0887AF68;
    case 488u: goto L_0887AF74;
    case 489u: goto L_0887AF98;
    case 490u: goto L_0887AFA0;
    case 491u: goto L_0887AFC8;
    case 492u: goto L_0887AFD4;
    case 493u: goto L_0887AFDC;
    case 494u: goto L_0887AFE8;
    case 495u: goto L_0887AFFC;
    case 496u: goto L_0887B018;
    case 497u: goto L_0887B020;
    case 498u: goto L_0887B028;
    case 499u: goto L_0887B030;
    case 500u: goto L_0887B03C;
    case 501u: goto L_0887B044;
    case 502u: goto L_0887B050;
    case 503u: goto L_0887B058;
    case 504u: goto L_0887B060;
    case 505u: goto L_0887B06C;
    case 506u: goto L_0887B0B4;
    case 507u: goto L_0887B0B8;
    case 508u: goto L_0887B0D8;
    case 509u: goto L_0887B0F0;
    case 510u: goto L_0887B0F8;
    case 511u: goto L_0887B110;
    case 512u: goto L_0887B11C;
    case 513u: goto L_0887B124;
    case 514u: goto L_0887B180;
    case 515u: goto L_0887B184;
    case 516u: goto L_0887B1A0;
    case 517u: goto L_0887B1AC;
    case 518u: goto L_0887B1F0;
    case 519u: goto L_0887B214;
    case 520u: goto L_0887B21C;
    case 521u: goto L_0887B22C;
    case 522u: goto L_0887B248;
    case 523u: goto L_0887B250;
    case 524u: goto L_0887B258;
    case 525u: goto L_0887B274;
    case 526u: goto L_0887B288;
    case 527u: goto L_0887B2A4;
    case 528u: goto L_0887B2B8;
    case 529u: goto L_0887B2CC;
    case 530u: goto L_0887B2DC;
    case 531u: goto L_0887B2EC;
    case 532u: goto L_0887B2F8;
    case 533u: goto L_0887B300;
    case 534u: goto L_0887B308;
    case 535u: goto L_0887B310;
    case 536u: goto L_0887B318;
    case 537u: goto L_0887B320;
    case 538u: goto L_0887B328;
    case 539u: goto L_0887B330;
    case 540u: goto L_0887B338;
    case 541u: goto L_0887B340;
    case 542u: goto L_0887B348;
    case 543u: goto L_0887B34C;
    case 544u: goto L_0887B384;
    case 545u: goto L_0887B3AC;
    case 546u: goto L_0887B3CC;
    case 547u: goto L_0887B3D8;
    case 548u: goto L_0887B3E0;
    case 549u: goto L_0887B3E8;
    case 550u: goto L_0887B3F0;
    case 551u: goto L_0887B3F8;
    case 552u: goto L_0887B404;
    case 553u: goto L_0887B40C;
    case 554u: goto L_0887B418;
    case 555u: goto L_0887B420;
    case 556u: goto L_0887B42C;
    case 557u: goto L_0887B434;
    case 558u: goto L_0887B440;
    case 559u: goto L_0887B448;
    case 560u: goto L_0887B454;
    case 561u: goto L_0887B45C;
    case 562u: goto L_0887B464;
    case 563u: goto L_0887B46C;
    case 564u: goto L_0887B47C;
    case 565u: goto L_0887B484;
    case 566u: goto L_0887B4D8;
    case 567u: goto L_0887B4E0;
    case 568u: goto L_0887B4EC;
    case 569u: goto L_0887B510;
    case 570u: goto L_0887B554;
    case 571u: goto L_0887B564;
    case 572u: goto L_0887B580;
    case 573u: goto L_0887B598;
    case 574u: goto L_0887B5A8;
    case 575u: goto L_0887B5B8;
    case 576u: goto L_0887B5C8;
    case 577u: goto L_0887B5D8;
    case 578u: goto L_0887B5E8;
    case 579u: goto L_0887B5F8;
    case 580u: goto L_0887B608;
    case 581u: goto L_0887B618;
    case 582u: goto L_0887B628;
    case 583u: goto L_0887B638;
    case 584u: goto L_0887B63C;
    case 585u: goto L_0887B644;
    case 586u: goto L_0887B650;
    case 587u: goto L_0887B65C;
    case 588u: goto L_0887B67C;
    case 589u: goto L_0887B684;
    case 590u: goto L_0887B690;
    case 591u: goto L_0887B69C;
    case 592u: goto L_0887B6A4;
    case 593u: goto L_0887B6A8;
    case 594u: goto L_0887B6AC;
    case 595u: goto L_0887B6B4;
    case 596u: goto L_0887B6C0;
    case 597u: goto L_0887B6CC;
    case 598u: goto L_0887B6D8;
    case 599u: goto L_0887B6F0;
    case 600u: goto L_0887B6F8;
    case 601u: goto L_0887B708;
    case 602u: goto L_0887B718;
    case 603u: goto L_0887B720;
    case 604u: goto L_0887B728;
    case 605u: goto L_0887B740;
    case 606u: goto L_0887B758;
    case 607u: goto L_0887B764;
    case 608u: goto L_0887B770;
    case 609u: goto L_0887B77C;
    case 610u: goto L_0887B788;
    case 611u: goto L_0887B794;
    case 612u: goto L_0887B7A0;
    case 613u: goto L_0887B7AC;
    case 614u: goto L_0887B7C0;
    case 615u: goto L_0887B7C4;
    case 616u: goto L_0887B7EC;
    case 617u: goto L_0887B864;
    case 618u: goto L_0887B890;
    case 619u: goto L_0887B8D0;
    case 620u: goto L_0887B8F0;
    case 621u: goto L_0887B904;
    case 622u: goto L_0887B90C;
    case 623u: goto L_0887B910;
    case 624u: goto L_0887B918;
    case 625u: goto L_0887B92C;
    case 626u: goto L_0887B934;
    case 627u: goto L_0887B948;
    case 628u: goto L_0887B96C;
    case 629u: goto L_0887B994;
    case 630u: goto L_0887B9A4;
    case 631u: goto L_0887B9BC;
    case 632u: goto L_0887B9E4;
    case 633u: goto L_0887B9EC;
    case 634u: goto L_0887BA0C;
    case 635u: goto L_0887BA14;
    case 636u: goto L_0887BA24;
    case 637u: goto L_0887BA38;
    case 638u: goto L_0887BA3C;
    case 639u: goto L_0887BA44;
    case 640u: goto L_0887BA4C;
    case 641u: goto L_0887BA68;
    case 642u: goto L_0887BA88;
    case 643u: goto L_0887BAA0;
    case 644u: goto L_0887BAAC;
    case 645u: goto L_0887BAC4;
    case 646u: goto L_0887BACC;
    case 647u: goto L_0887BAD4;
    case 648u: goto L_0887BADC;
    case 649u: goto L_0887BAE4;
    case 650u: goto L_0887BAEC;
    case 651u: goto L_0887BAF4;
    case 652u: goto L_0887BAFC;
    case 653u: goto L_0887BB04;
    case 654u: goto L_0887BB0C;
    case 655u: goto L_0887BB14;
    case 656u: goto L_0887BB1C;
    case 657u: goto L_0887BB28;
    case 658u: goto L_0887BB30;
    case 659u: goto L_0887BB3C;
    case 660u: goto L_0887BB44;
    case 661u: goto L_0887BB50;
    case 662u: goto L_0887BB58;
    case 663u: goto L_0887BB64;
    case 664u: goto L_0887BB6C;
    case 665u: goto L_0887BB74;
    case 666u: goto L_0887BB7C;
    case 667u: goto L_0887BB84;
    case 668u: goto L_0887BB8C;
    case 669u: goto L_0887BB94;
    case 670u: goto L_0887BB9C;
    case 671u: goto L_0887BBA4;
    case 672u: goto L_0887BBA8;
    case 673u: goto L_0887BBB8;
    case 674u: goto L_0887BBC4;
    case 675u: goto L_0887BBD0;
    case 676u: goto L_0887BBD8;
    case 677u: goto L_0887BBE0;
    case 678u: goto L_0887BBEC;
    case 679u: goto L_0887BC04;
    case 680u: goto L_0887BC0C;
    case 681u: goto L_0887BC14;
    case 682u: goto L_0887BC1C;
    case 683u: goto L_0887BC28;
    case 684u: goto L_0887BC34;
    case 685u: goto L_0887BC4C;
    case 686u: goto L_0887BC54;
    case 687u: goto L_0887BC5C;
    case 688u: goto L_0887BC60;
    case 689u: goto L_0887BC68;
    case 690u: goto L_0887BCB8;
    case 691u: goto L_0887BCC8;
    case 692u: goto L_0887BCD8;
    case 693u: goto L_0887BCE0;
    case 694u: goto L_0887BCEC;
    case 695u: goto L_0887BCF4;
    case 696u: goto L_0887BD00;
    case 697u: goto L_0887BD14;
    case 698u: goto L_0887BD1C;
    case 699u: goto L_0887BD24;
    case 700u: goto L_0887BD30;
    case 701u: goto L_0887BD3C;
    case 702u: goto L_0887BD44;
    case 703u: goto L_0887BD50;
    case 704u: goto L_0887BD60;
    case 705u: goto L_0887BD64;
    case 706u: goto L_0887BD84;
    case 707u: goto L_0887BDAC;
    case 708u: goto L_0887BDBC;
    case 709u: goto L_0887BDC8;
    case 710u: goto L_0887BDD8;
    case 711u: goto L_0887BDE8;
    case 712u: goto L_0887BDF4;
    case 713u: goto L_0887BE10;
    case 714u: goto L_0887BE18;
    case 715u: goto L_0887BE3C;
    case 716u: goto L_0887BE48;
    case 717u: goto L_0887BE70;
    case 718u: goto L_0887BE88;
    case 719u: goto L_0887BEE4;
    case 720u: goto L_0887BEEC;
    case 721u: goto L_0887BEFC;
    case 722u: goto L_0887BF00;
    case 723u: goto L_0887BF10;
    case 724u: goto L_0887BF18;
    case 725u: goto L_0887BF28;
    case 726u: goto L_0887BF2C;
    case 727u: goto L_0887BF30;
    case 728u: goto L_0887BF48;
    case 729u: goto L_0887BF50;
    case 730u: goto L_0887BF60;
    case 731u: goto L_0887BF64;
    case 732u: goto L_0887BF74;
    case 733u: goto L_0887BF7C;
    case 734u: goto L_0887BF8C;
    case 735u: goto L_0887BF90;
    case 736u: goto L_0887BF94;
    case 737u: goto L_0887BFAC;
    case 738u: goto L_0887BFB4;
    case 739u: goto L_0887BFC4;
    case 740u: goto L_0887BFC8;
    case 741u: goto L_0887BFD8;
    case 742u: goto L_0887BFE0;
    case 743u: goto L_0887BFF0;
    case 744u: goto L_0887BFF4;
    case 745u: goto L_0887BFF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08878000:
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 139u);
    ctx.gpr[9] = (0u | 64u);
    ctx.gpr[10] = (0u | 200u);
    ctx.gpr[11] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[31] = (0x0887802Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 118u, 0x088299B8u>(ctx, &aot_mem) && ctx.pc == 0x0887802Cu) goto L_0887802C;
    return;
L_0887802C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887803C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(15516)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[5] = (2227u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(15512)));
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.gpr[9] = (2227u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(15540)));
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
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(15520), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[12] = (2227u << 16u);
    ctx.fpr[14] = ctx.fpr[17] / ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(15528), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[19] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(15524), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[8]);
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(15532), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(15536), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(15544), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088780D0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x088780E0u);
    ctx.gpr[4] = (0u | 104u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x088780E0u) goto L_088780E0;
    return;
L_088780E0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088780EC:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088780F4:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088780FC:
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
L_08878128:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4816));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x08878164u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2256));
    ctx.pc = 0x08B0BAD4u;
    return;
L_08878164:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887817C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[2] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), 0u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08878190:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887819C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x088781ACu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.pc = 0x08B0BB24u;
    return;
L_088781AC:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088781BC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x088781DCu);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.pc = 0x08B0BB2Cu;
    return;
L_088781DC:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7032)));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08878248;
      }
      goto L_088781EC;
    }
L_088781EC:
    ctx.gpr[19] = (0u | 5000u);
    ctx.gpr[31] = (0x088781F8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 585u, 0x08AB350Cu>(ctx, &aot_mem) && ctx.pc == 0x088781F8u) goto L_088781F8;
    return;
L_088781F8:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x0887820Cu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.pc = 0x08B0BB94u;
    return;
L_0887820C:
    ctx.gpr[17] = (32770u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(424));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08878240;
      }
      goto L_0887821C;
    }
L_0887821C:
    ctx.gpr[31] = (0x08878224u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 585u, 0x08AB350Cu>(ctx, &aot_mem) && ctx.pc == 0x08878224u) goto L_08878224;
    return;
L_08878224:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08878238u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.pc = 0x08B0BB94u;
    return;
L_08878238:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_0887821C;
      }
      goto L_08878240;
    }
L_08878240:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08878258;
      }
      goto L_08878248;
    }
L_08878248:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08878258u);
    ctx.gpr[6] = (0u | 0u);
    ctx.pc = 0x08B0BB94u;
    return;
L_08878258:
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
L_08878274:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (ctx.gpr[4] ^ 2u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08878288:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_088782B8;
      }
      goto L_088782A8;
    }
L_088782A8:
    ctx.gpr[31] = (0x088782B0u);
    // nop
    goto L_088782E4;
L_088782B0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088782BC;
      }
      goto L_088782B8;
    }
L_088782B8:
    ctx.gpr[16] = (0u | 1u);
    goto L_088782BC;
L_088782BC:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088782D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (0u | 255u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088782E4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x088782F4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.pc = 0x08B0B864u;
    return;
L_088782F4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08878300:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (0u | 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[18];
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08878428;
      }
      goto L_08878338;
    }
L_08878338:
    ctx.gpr[19] = (2225u << 16u);
    ctx.gpr[20] = (0u | 1u);
    ctx.gpr[21] = (0u | 2u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-2236));
    goto L_08878348;
L_08878348:
    ctx.gpr[31] = (0x08878350u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.pc = 0x08B0B864u;
    return;
L_08878350:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088783D4;
      }
      goto L_08878360;
    }
L_08878360:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_088783D4;
      }
      goto L_08878368;
    }
L_08878368:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 32 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887837C;
      }
      goto L_08878374;
    }
L_08878374:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 32u);
      if (branch_taken) {
          goto L_0887839C;
      }
      goto L_0887837C;
    }
L_0887837C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[17]);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08878398;
      }
      goto L_08878390;
    }
L_08878390:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887839C;
      }
      goto L_08878398;
    }
L_08878398:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    goto L_0887839C;
L_0887839C:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x088783A8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.pc = 0x08B0B85Cu;
    return;
L_088783A8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_088783D8;
      }
      goto L_088783B4;
    }
L_088783B4:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088783C4u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    goto L_088780FC;
L_088783C4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[20]);
      if (branch_taken) {
          goto L_088783D8;
      }
      goto L_088783D4;
    }
L_088783D4:
    ctx.gpr[4] = (0u | 0u);
    goto L_088783D8;
L_088783D8:
    ctx.gpr[4] = (ctx.gpr[4] << 11u);
    ctx.gpr[4] = (0u + ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x088783F0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.pc = 0x08B0BB54u;
    return;
L_088783F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08878410;
      }
      goto L_088783FC;
    }
L_088783FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08878410;
      }
      goto L_0887840C;
    }
L_0887840C:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[21]);
    goto L_08878410;
L_08878410:
    ctx.gpr[31] = (0x08878418u);
    ctx.gpr[4] = (0u | 100u);
    ctx.pc = 0x08B0BBF4u;
    return;
L_08878418:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08878348;
      }
      goto L_08878428;
    }
L_08878428:
    ctx.gpr[31] = (0x08878430u);
    ctx.gpr[4] = (0u | 0u);
    ctx.pc = 0x08B0BBD4u;
    return;
L_08878430:
    ctx.gpr[2] = (0u | 0u);
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
L_08878458:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x0887846Cu);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_08878498;
L_0887846C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887847C;
      }
      goto L_08878474;
    }
L_08878474:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08878488;
      }
      goto L_0887847C;
    }
L_0887847C:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(76));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (0u < ctx.gpr[2] ? 1u : 0u);
    goto L_08878488;
L_08878488:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08878498:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088784D0;
      }
      goto L_088784AC;
    }
L_088784AC:
    ctx.gpr[16] = (2229u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x088784BCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-15024)));
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 470u, 0x08AFDF84u>(ctx, &aot_mem) && ctx.pc == 0x088784BCu) goto L_088784BC;
    return;
L_088784BC:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) >= 0;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088784D8;
      }
      goto L_088784C8;
    }
L_088784C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088784F0;
      }
      goto L_088784D0;
    }
L_088784D0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088784F4;
      }
      goto L_088784D8;
    }
L_088784D8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-15024)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088784F0;
      }
      goto L_088784EC;
    }
L_088784EC:
    ctx.gpr[4] = (0u | 1u);
    goto L_088784F0;
L_088784F0:
    ctx.gpr[2] = (ctx.gpr[4] & 255u);
    goto L_088784F4;
L_088784F4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08878504:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[31]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(92)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(72));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08878554u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08878554u) goto L_08878554;
    return;
L_08878554:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[16] / ctx.fpr[13];
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (16128u << 16u);
    ctx.gpr[5] = (16968u << 16u);
    ctx.fpr[18] = ctx.fpr[12] / ctx.fpr[13];
    ctx.fpr[19] = ctx.fpr[17] / ctx.fpr[13];
    ctx.fpr[16] = ctx.fpr[16] + ctx.fpr[17];
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[15];
    ctx.fpr[2] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[0] = ctx.fpr[15] / ctx.fpr[13];
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[16] = ctx.fpr[16] / ctx.fpr[13];
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[17];
    ctx.fpr[16] = ctx.fpr[16] + ctx.fpr[17];
    ctx.fpr[18] = ctx.fpr[18] + ctx.fpr[17];
    ctx.fpr[15] = ctx.fpr[19] + ctx.fpr[17];
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    ctx.fpr[13] = ctx.fpr[0] + ctx.fpr[17];
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[17];
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.fpr[18] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[18]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.fpr[15] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[15]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[5]);
    ctx.gpr[23] = (std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    ctx.gpr[30] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08878758;
      }
      goto L_08878634;
    }
L_08878634:
    ctx.gpr[4] = (ctx.gpr[23] << 5u);
    ctx.gpr[5] = (ctx.gpr[23] + ctx.gpr[4]);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(76));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[4]);
    goto L_08878650;
L_08878650:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[20] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[30]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887873C;
      }
      goto L_08878664;
    }
L_08878664:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[21] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[21] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[21] = (ctx.gpr[4] - ctx.gpr[21]);
    goto L_0887867C;
L_0887867C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20972)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[20];
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[21]);
      if (branch_taken) {
          goto L_088786A4;
      }
      goto L_08878690;
    }
L_08878690:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[23];
    // nop
      if (branch_taken) {
          goto L_088786A4;
      }
      goto L_0887869C;
    }
L_0887869C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[19] + static_cast<std::uint32_t>(36));
      if (branch_taken) {
          goto L_088786A8;
      }
      goto L_088786A4;
    }
L_088786A4:
    ctx.gpr[18] = (ctx.gpr[19] + static_cast<std::uint32_t>(40));
    goto L_088786A8;
L_088786A8:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x088786B4u);
    ctx.gpr[4] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0139_entry, 139u, 185u, 0x08A312A8u>(ctx, &aot_mem) && ctx.pc == 0x088786B4u) goto L_088786B4;
    return;
L_088786B4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088786CC;
      }
      goto L_088786C0;
    }
L_088786C0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    goto L_088786CC;
L_088786CC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088786E4;
      }
      goto L_088786DC;
    }
L_088786DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    goto L_088786E4;
L_088786E4:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x088786F4u);
    ctx.gpr[4] = (0u | 20u);
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 77u, 0x089F8860u>(ctx, &aot_mem) && ctx.pc == 0x088786F4u) goto L_088786F4;
    return;
L_088786F4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08878710;
      }
      goto L_08878700;
    }
L_08878700:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[19]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    goto L_08878710;
L_08878710:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08878728;
      }
      goto L_08878720;
    }
L_08878720:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    goto L_08878728;
L_08878728:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[30]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(44));
      if (branch_taken) {
          goto L_0887867C;
      }
      goto L_0887873C;
    }
L_0887873C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(100));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08878650;
      }
      goto L_08878758;
    }
L_08878758:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08878788:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(76));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08878848;
      }
      goto L_088787A8;
    }
L_088787A8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[5];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_088787C4;
      }
      goto L_088787BC;
    }
L_088787BC:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    goto L_088787C4;
L_088787C4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088787D8;
      }
      goto L_088787D0;
    }
L_088787D0:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    goto L_088787D8;
L_088787D8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088787E8;
      }
      goto L_088787E0;
    }
L_088787E0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    goto L_088787E8;
L_088787E8:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088787F8;
      }
      goto L_088787F0;
    }
L_088787F0:
    ctx.gpr[31] = (0x088787F8u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0139_entry, 139u, 187u, 0x08A312C8u>(ctx, &aot_mem) && ctx.pc == 0x088787F8u) goto L_088787F8;
    return;
L_088787F8:
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08878814;
      }
      goto L_0887880C;
    }
L_0887880C:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    goto L_08878814;
L_08878814:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08878828;
      }
      goto L_08878820;
    }
L_08878820:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    goto L_08878828;
L_08878828:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08878838;
      }
      goto L_08878830;
    }
L_08878830:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    goto L_08878838;
L_08878838:
    ctx.gpr[31] = (0x08878840u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 79u, 0x089F8880u>(ctx, &aot_mem) && ctx.pc == 0x08878840u) goto L_08878840;
    return;
L_08878840:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_088787A8;
      }
      goto L_08878848;
    }
L_08878848:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887885C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08878870u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0139_entry, 139u, 78u, 0x08A305B8u>(ctx, &aot_mem) && ctx.pc == 0x08878870u) goto L_08878870;
    return;
L_08878870:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-15));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-20056));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(92), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] | 10u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088788A4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_088788EC;
      }
      goto L_088788C0;
    }
L_088788C0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-20056));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(92), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088788D8u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 586u, 0x08A2EAB4u>(ctx, &aot_mem) && ctx.pc == 0x088788D8u) goto L_088788D8;
    return;
L_088788D8:
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088788EC;
      }
      goto L_088788E4;
    }
L_088788E4:
    ctx.gpr[31] = (0x088788ECu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08878920;
L_088788EC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08878900:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08878914u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15024)));
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 459u, 0x08AFDE80u>(ctx, &aot_mem) && ctx.pc == 0x08878914u) goto L_08878914;
    return;
L_08878914:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08878920:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08878938u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15024)));
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 467u, 0x08AFDF40u>(ctx, &aot_mem) && ctx.pc == 0x08878938u) goto L_08878938;
    return;
L_08878938:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08878944:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(15556)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[4] = (16014u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] | 14571u);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[6] = (17096u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(15552)));
    ctx.gpr[7] = (2227u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[17];
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(15560), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = ctx.fpr[16] / ctx.fpr[15];
    ctx.gpr[10] = (2227u << 16u);
    ctx.gpr[9] = (2227u << 16u);
    ctx.gpr[8] = (16672u << 16u);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(15568), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(15564), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[8]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(160));
    ctx.gpr[6] = (2227u << 16u);
    ctx.fpr[12] = ctx.fpr[18] / ctx.fpr[12];
    ctx.gpr[11] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(15572), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x088789D4u);
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(15576), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0887885C;
L_088789D4:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x088789E0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(15580));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 251u, 0x08AF5420u>(ctx, &aot_mem) && ctx.pc == 0x088789E0u) goto L_088789E0;
    return;
L_088789E0:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 96u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(256));
    ctx.gpr[31] = (0x088789FCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2184));
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 553u, 0x0886AEF4u>(ctx, &aot_mem) && ctx.pc == 0x088789FCu) goto L_088789FC;
    return;
L_088789FC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08878A0C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (ctx.gpr[4] << 3u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08878A40u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 322u, 0x0894DE0Cu>(ctx, &aot_mem) && ctx.pc == 0x08878A40u) goto L_08878A40;
    return;
L_08878A40:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08878A54u);
    ctx.gpr[6] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 107u, 0x0891C844u>(ctx, &aot_mem) && ctx.pc == 0x08878A54u) goto L_08878A54;
    return;
L_08878A54:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(7), static_cast<std::uint8_t>(ctx.gpr[16]));
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
L_08878A78:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (ctx.gpr[4] << 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(28));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x08878AB4u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 322u, 0x0894DE0Cu>(ctx, &aot_mem) && ctx.pc == 0x08878AB4u) goto L_08878AB4;
    return;
L_08878AB4:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08878AC8u);
    ctx.gpr[6] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 107u, 0x0891C844u>(ctx, &aot_mem) && ctx.pc == 0x08878AC8u) goto L_08878AC8;
    return;
L_08878AC8:
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(7), static_cast<std::uint8_t>(ctx.gpr[16]));
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
L_08878B00:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[7] = (ctx.gpr[4] + static_cast<std::uint32_t>(72));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    goto L_08878B10;
L_08878B10:
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08878B48;
      }
      goto L_08878B1C;
    }
L_08878B1C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.gpr[8] = (ctx.gpr[6] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_08878B48;
      }
      goto L_08878B2C;
    }
L_08878B2C:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08878B40;
      }
      goto L_08878B34;
    }
L_08878B34:
    ctx.gpr[7] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08878B10;
      }
      goto L_08878B40;
    }
L_08878B40:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08878B88;
      }
      goto L_08878B48;
    }
L_08878B48:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[7]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08878B60u);
    ctx.gpr[7] = (0u | 20u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 322u, 0x0894DE0Cu>(ctx, &aot_mem) && ctx.pc == 0x08878B60u) goto L_08878B60;
    return;
L_08878B60:
    ctx.gpr[4] = (0u | 10u);
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    goto L_08878B88;
L_08878B88:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08878B94:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    goto L_08878BB0;
L_08878BB0:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08878C0C;
      }
      goto L_08878BBC;
    }
L_08878BBC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[4] < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08878C0C;
      }
      goto L_08878BCC;
    }
L_08878BCC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(12));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(72), ctx.gpr[6]);
    ctx.gpr[31] = (0x08878C04u);
    ctx.gpr[6] = (0u | 10u);
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 107u, 0x0891C844u>(ctx, &aot_mem) && ctx.pc == 0x08878C04u) goto L_08878C04;
    return;
L_08878C04:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
      if (branch_taken) {
          goto L_08878BB0;
      }
      goto L_08878C0C;
    }
L_08878C0C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08878C20:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08878C40u);
    ctx.gpr[7] = (0u | 72u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 322u, 0x0894DE0Cu>(ctx, &aot_mem) && ctx.pc == 0x08878C40u) goto L_08878C40;
    return;
L_08878C40:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08878C54u);
    ctx.gpr[6] = (0u | 9u);
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 107u, 0x0891C844u>(ctx, &aot_mem) && ctx.pc == 0x08878C54u) goto L_08878C54;
    return;
L_08878C54:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(68), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(69), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(70), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(71), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(60), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), 0u);
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08878CB0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08878CDCu);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 322u, 0x0894DE0Cu>(ctx, &aot_mem) && ctx.pc == 0x08878CDCu) goto L_08878CDC;
    return;
L_08878CDC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[31] = (0x08878CF4u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 322u, 0x0894DE0Cu>(ctx, &aot_mem) && ctx.pc == 0x08878CF4u) goto L_08878CF4;
    return;
L_08878CF4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[31] = (0x08878D0Cu);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 322u, 0x0894DE0Cu>(ctx, &aot_mem) && ctx.pc == 0x08878D0Cu) goto L_08878D0C;
    return;
L_08878D0C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[31] = (0x08878D24u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 322u, 0x0894DE0Cu>(ctx, &aot_mem) && ctx.pc == 0x08878D24u) goto L_08878D24;
    return;
L_08878D24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08878D44u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 322u, 0x0894DE0Cu>(ctx, &aot_mem) && ctx.pc == 0x08878D44u) goto L_08878D44;
    return;
L_08878D44:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[31] = (0x08878D5Cu);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 322u, 0x0894DE0Cu>(ctx, &aot_mem) && ctx.pc == 0x08878D5Cu) goto L_08878D5C;
    return;
L_08878D5C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 72u);
    ctx.gpr[31] = (0x08878D70u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 322u, 0x0894DE0Cu>(ctx, &aot_mem) && ctx.pc == 0x08878D70u) goto L_08878D70;
    return;
L_08878D70:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08878D84:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(6)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(7)));
        goto L_08878DAC;
    }
    goto L_08878D98;
L_08878D98:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(7)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(24));
      if (branch_taken) {
          goto L_08878DB8;
      }
      goto L_08878DAC;
    }
L_08878DAC:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(28));
    goto L_08878DB8;
L_08878DB8:
    ctx.gpr[31] = (0x08878DC0u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 322u, 0x0894DE0Cu>(ctx, &aot_mem) && ctx.pc == 0x08878DC0u) goto L_08878DC0;
    return;
L_08878DC0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08878DCC:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    goto L_08878DDC;
L_08878DDC:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08878E2C;
      }
      goto L_08878DE4;
    }
L_08878DE4:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08878E2C;
      }
      goto L_08878DF4;
    }
L_08878DF4:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08878E10;
      }
      goto L_08878E04;
    }
L_08878E04:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08878E20;
      }
      goto L_08878E10;
    }
L_08878E10:
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08878DDC;
      }
      goto L_08878E20;
    }
L_08878E20:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08878E30;
      }
      goto L_08878E2C;
    }
L_08878E2C:
    ctx.gpr[2] = (0u | 0u);
    goto L_08878E30;
L_08878E30:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08878E38:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[6]);
    ctx.gpr[4] = (0u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[8]);
    ctx.gpr[6] = (ctx.gpr[29] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[9]);
    ctx.gpr[4] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[10]);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(272));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[11]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08878E88u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 192u, 0x08AEC938u>(ctx, &aot_mem) && ctx.pc == 0x08878E88u) goto L_08878E88;
    return;
L_08878E88:
    ctx.gpr[31] = (0x08878E90u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 772u, 0x089C30F8u>(ctx, &aot_mem) && ctx.pc == 0x08878E90u) goto L_08878E90;
    return;
L_08878E90:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08878EA0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2320));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    goto L_08878EB4;
L_08878EB4:
    ctx.gpr[6] = (ctx.gpr[4] << 6u);
    ctx.gpr[8] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[7] << 4u);
    goto L_08878EC8;
L_08878EC8:
    ctx.gpr[9] = (ctx.gpr[8] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[8] = (ctx.gpr[6] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[5]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[7] = (ctx.gpr[7] << 16u);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(40), 0u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 16u));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[8] = (ctx.gpr[7] << 4u);
      if (branch_taken) {
          goto L_08878EC8;
      }
      goto L_08878EF8;
    }
L_08878EF8:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08878EB4;
      }
      goto L_08878F10;
    }
L_08878F10:
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(3856));
    ctx.gpr[6] = (ctx.gpr[4] << 4u);
    goto L_08878F20;
L_08878F20:
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(40), 0u);
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[6] = (ctx.gpr[4] << 4u);
      if (branch_taken) {
          goto L_08878F20;
      }
      goto L_08878F50;
    }
L_08878F50:
    ctx.gpr[31] = (0x08878F58u);
    // nop
    goto L_08879C64;
L_08878F58:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08878F64:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08878F84;
      }
      goto L_08878F70;
    }
L_08878F70:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[2] = (ctx.gpr[2] & 65535u);
      if (branch_taken) {
          goto L_08878F70;
      }
      goto L_08878F84;
    }
L_08878F84:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08878F8C:
    ctx.gpr[9] = (ctx.gpr[6] & 65535u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(-1));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[10]) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    ctx.gpr[7] = (0u | 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08878FD4;
      }
      goto L_08878FA8;
    }
L_08878FA8:
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08878FCC;
      }
      goto L_08878FB0;
    }
L_08878FB0:
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    ctx.gpr[10] = (ctx.gpr[10] & 65535u);
    ctx.gpr[6] = (ctx.gpr[10] + ctx.gpr[10]);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[10]) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
      if (branch_taken) {
          goto L_08878FB0;
      }
      goto L_08878FCC;
    }
L_08878FCC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
      if (branch_taken) {
          goto L_08879004;
      }
      goto L_08878FD4;
    }
L_08878FD4:
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[7] = (ctx.gpr[5] + ctx.gpr[7]);
      if (branch_taken) {
          goto L_08878FCC;
      }
      goto L_08878FDC;
    }
L_08878FDC:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08878FCC;
      }
      goto L_08878FE8;
    }
L_08878FE8:
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[10] = (ctx.gpr[10] & 65535u);
    ctx.gpr[7] = (ctx.gpr[10] + ctx.gpr[10]);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[10]) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[7]);
      if (branch_taken) {
          goto L_08878FD4;
      }
      goto L_08879004;
    }
L_08879004:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887900C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[19] = (ctx.gpr[6] & 65535u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x0887903Cu);
    ctx.gpr[18] = (0u | 0u);
    goto L_08878F64;
L_0887903C:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08879048u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08878F64;
L_08879048:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[4];
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08879064;
      }
      goto L_08879054;
    }
L_08879054:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08879070;
      }
      goto L_0887905C;
    }
L_0887905C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08879070;
      }
      goto L_08879064;
    }
L_08879064:
    ctx.gpr[5] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08879078;
      }
      goto L_08879070;
    }
L_08879070:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088790BC;
      }
      goto L_08879078;
    }
L_08879078:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
      if (branch_taken) {
          goto L_088790B8;
      }
      goto L_08879080;
    }
L_08879080:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088790B8;
      }
      goto L_08879088;
    }
L_08879088:
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088790B0;
      }
      goto L_08879098;
    }
L_08879098:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[18] & 65535u);
    ctx.gpr[5] = (ctx.gpr[18] + ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08879078;
      }
      goto L_088790B0;
    }
L_088790B0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088790BC;
      }
      goto L_088790B8;
    }
L_088790B8:
    ctx.gpr[2] = (0u | 1u);
    goto L_088790BC;
L_088790BC:
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
L_088790DC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[2] = (2269u << 16u);
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(2320));
    ctx.gpr[12] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[2] + static_cast<std::uint32_t>(48));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    goto L_088790FC;
L_088790FC:
    ctx.gpr[3] = (ctx.gpr[12] << 6u);
    ctx.gpr[6] = (ctx.gpr[3] + ctx.gpr[3]);
    ctx.gpr[3] = (ctx.gpr[3] + ctx.gpr[6]);
    ctx.gpr[11] = (ctx.gpr[3] + ctx.gpr[2]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088791F0;
      }
      goto L_08879118;
    }
L_08879118:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(12)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(8)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[8]);
    ctx.gpr[6] = (ctx.gpr[6] < ctx.gpr[9] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088791F0;
      }
      goto L_08879134;
    }
L_08879134:
    ctx.gpr[9] = (ctx.gpr[3] | 0u);
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[8] = (ctx.gpr[9] + ctx.gpr[2]);
    goto L_08879148;
L_08879148:
    { const bool branch_taken = ctx.gpr[10] == 0u;
    // nop
      if (branch_taken) {
          goto L_088791E4;
      }
      goto L_08879150;
    }
L_08879150:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[7]);
      if (branch_taken) {
          goto L_088791E4;
      }
      goto L_0887915C;
    }
L_0887915C:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(4)));
    ctx.gpr[14] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[10]);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(4), ctx.gpr[13]);
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(8), ctx.gpr[14]);
    ctx.gpr[14] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(12), ctx.gpr[10]);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(16), ctx.gpr[13]);
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(20), ctx.gpr[14]);
    ctx.gpr[14] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(24), ctx.gpr[10]);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(28), ctx.gpr[13]);
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(32), ctx.gpr[14]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(44)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(36), ctx.gpr[10]);
    ctx.gpr[6] = (ctx.gpr[6] << 16u);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(40), ctx.gpr[13]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 16u));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(44), ctx.gpr[9]);
    ctx.gpr[8] = (ctx.gpr[6] << 4u);
    ctx.gpr[9] = (ctx.gpr[8] + ctx.gpr[8]);
    ctx.gpr[9] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[3] + ctx.gpr[9]);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[6]) < 3 ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (ctx.gpr[9] + ctx.gpr[2]);
      if (branch_taken) {
          goto L_08879148;
      }
      goto L_088791E4;
    }
L_088791E4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7868)));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(12), ctx.gpr[6]);
    goto L_088791F0;
L_088791F0:
    ctx.gpr[12] = (ctx.gpr[12] + static_cast<std::uint32_t>(1));
    ctx.gpr[12] = (ctx.gpr[12] & 65535u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[12]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_088790FC;
      }
      goto L_08879204;
    }
L_08879204:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3856)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08879320;
      }
      goto L_08879210;
    }
L_08879210:
    ctx.gpr[8] = (ctx.gpr[4] + static_cast<std::uint32_t>(3856));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(12)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(8)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[6] < ctx.gpr[9] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08879320;
      }
      goto L_08879230;
    }
L_08879230:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(3856), 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[9] = (ctx.gpr[8] + static_cast<std::uint32_t>(48));
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[7] = (ctx.gpr[8] | 0u);
    goto L_08879248;
L_08879248:
    { const bool branch_taken = ctx.gpr[10] == 0u;
    // nop
      if (branch_taken) {
          goto L_088792E0;
      }
      goto L_08879250;
    }
L_08879250:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.gpr[10] = (ctx.gpr[11] + ctx.gpr[9]);
      if (branch_taken) {
          goto L_088792E0;
      }
      goto L_0887925C;
    }
L_0887925C:
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(4)));
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[11]);
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(12), ctx.gpr[11]);
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(24), ctx.gpr[11]);
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(32), ctx.gpr[3]);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(44)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] << 16u);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(36), ctx.gpr[11]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 16u));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(44), ctx.gpr[10]);
    ctx.gpr[11] = (ctx.gpr[6] << 4u);
    ctx.gpr[7] = (ctx.gpr[11] + ctx.gpr[11]);
    ctx.gpr[11] = (ctx.gpr[11] + ctx.gpr[7]);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[6]) < 7 ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[11] + ctx.gpr[8]);
      if (branch_taken) {
          goto L_08879248;
      }
      goto L_088792E0;
    }
L_088792E0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7868)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3856)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08879320;
      }
      goto L_088792F8;
    }
L_088792F8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(20)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(24)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(28)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(32)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(36)));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(40)));
    ctx.gpr[8] = (ctx.gpr[10] | 0u);
    ctx.gpr[31] = (0x08879320u);
    ctx.gpr[10] = (ctx.gpr[2] | 0u);
    goto L_0887AFFC;
L_08879320:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887932C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-576));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(544), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(548), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(552), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(556), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(560), ctx.gpr[31]);
    ctx.gpr[31] = (0x0887934Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 201u, 0x08A4CCF8u>(ctx, &aot_mem) && ctx.pc == 0x0887934Cu) goto L_0887934C;
    return;
L_0887934C:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(2320));
    ctx.gpr[4] = (ctx.gpr[18] << 6u);
    goto L_08879360;
L_08879360:
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[19] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(28)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (0x08879390u);
    ctx.gpr[11] = (ctx.gpr[16] | 0u);
    goto L_0887B1AC;
L_08879390:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (0x0887939Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08879CA0;
L_0887939C:
    ctx.gpr[31] = (0x088793A4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08879F60;
L_088793A4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088793B0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 470u, 0x08986D18u>(ctx, &aot_mem) && ctx.pc == 0x088793B0u) goto L_088793B0;
    return;
L_088793B0:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[18] & 65535u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[18] << 6u);
      if (branch_taken) {
          goto L_08879360;
      }
      goto L_088793C4;
    }
L_088793C4:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(3856));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3856)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (0x088793F0u);
    ctx.gpr[11] = (ctx.gpr[16] | 0u);
    goto L_0887B1AC;
L_088793F0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (0x088793FCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08879CA0;
L_088793FC:
    ctx.gpr[31] = (0x08879404u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08879F60;
L_08879404:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (0x08879410u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 465u, 0x08986CBCu>(ctx, &aot_mem) && ctx.pc == 0x08879410u) goto L_08879410;
    return;
L_08879410:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(544)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(548)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(552)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(556)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(560)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(576));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887942C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-1088));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1056), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1060), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1068), ctx.gpr[19]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1064), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[6] & 65535u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1072), ctx.gpr[31]);
    ctx.gpr[31] = (0x08879464u);
    ctx.gpr[6] = (0u | 256u);
    goto L_08878F8C;
L_08879464:
    ctx.gpr[31] = (0x0887946Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    goto L_08879F60;
L_0887946C:
    ctx.gpr[31] = (0x08879474u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    goto L_08878F64;
L_08879474:
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(3856));
    goto L_08879484;
L_08879484:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[8] = (ctx.gpr[7] << 4u);
      if (branch_taken) {
          goto L_088794B8;
      }
      goto L_0887948C;
    }
L_0887948C:
    ctx.gpr[9] = (ctx.gpr[8] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[4]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_088794B8;
      }
      goto L_088794A4;
    }
L_088794A4:
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[6] << 16u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 16u));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[7]) < 8 ? 1u : 0u);
      if (branch_taken) {
          goto L_08879484;
      }
      goto L_088794B8;
    }
L_088794B8:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (ctx.gpr[7] << 4u);
      if (branch_taken) {
          goto L_0887954C;
      }
      goto L_088794C0;
    }
L_088794C0:
    ctx.gpr[8] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[8]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[18]));
    ctx.gpr[8] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[9] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(12), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(16), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(20), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(24), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(28), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(32), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(36), ctx.gpr[9]);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(40), 0u);
      if (branch_taken) {
          goto L_0887954C;
      }
      goto L_08879508;
    }
L_08879508:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(3856)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (ctx.gpr[8] | 0u);
    ctx.gpr[8] = (ctx.gpr[9] | 0u);
    ctx.gpr[9] = (ctx.gpr[10] | 0u);
    ctx.gpr[10] = (ctx.gpr[11] | 0u);
    ctx.gpr[31] = (0x0887954Cu);
    ctx.gpr[11] = (ctx.gpr[2] | 0u);
    goto L_0887AFFC;
L_0887954C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1056)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1060)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1064)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1068)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1072)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(1088));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08879568:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-1088));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1068), ctx.gpr[19]);
    ctx.gpr[19] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1064), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1072), ctx.gpr[20]);
    ctx.gpr[20] = (ctx.gpr[6] & 65535u);
    ctx.gpr[18] = (ctx.gpr[19] + static_cast<std::uint32_t>(3856));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1060), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1056), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1076), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1080), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08879624;
      }
      goto L_088795A4;
    }
L_088795A4:
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088795B8u);
    ctx.gpr[6] = (0u | 256u);
    goto L_08878F8C;
L_088795B8:
    ctx.gpr[31] = (0x088795C0u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    goto L_08879F60;
L_088795C0:
    ctx.gpr[31] = (0x088795C8u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    goto L_08878F64;
L_088795C8:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[20]));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(40), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(3856)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(32)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (0x08879624u);
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    goto L_0887AFFC;
L_08879624:
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
L_08879648:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-1088));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1064), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1068), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1076), ctx.gpr[21]);
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1056), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1060), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1072), ctx.gpr[20]);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    ctx.gpr[17] = (ctx.gpr[7] | 0u);
    ctx.gpr[20] = (ctx.gpr[8] & 255u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1080), ctx.gpr[31]);
    ctx.gpr[31] = (0x08879690u);
    ctx.gpr[6] = (0u | 256u);
    goto L_08878F8C;
L_08879690:
    ctx.gpr[31] = (0x08879698u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    goto L_08879F60;
L_08879698:
    ctx.gpr[31] = (0x088796A0u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    goto L_08878F64;
L_088796A0:
    ctx.gpr[5] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(3856), ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(3856));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[16]));
    ctx.gpr[6] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[17]));
      if (branch_taken) {
          goto L_0887972C;
      }
      goto L_088796E8;
    }
L_088796E8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(3856)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (ctx.gpr[8] | 0u);
    ctx.gpr[8] = (ctx.gpr[9] | 0u);
    ctx.gpr[9] = (ctx.gpr[10] | 0u);
    ctx.gpr[10] = (ctx.gpr[11] | 0u);
    ctx.gpr[31] = (0x0887972Cu);
    ctx.gpr[11] = (ctx.gpr[2] | 0u);
    goto L_0887AFFC;
L_0887972C:
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
L_08879750:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-1088));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1056), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1060), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1068), ctx.gpr[19]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1064), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[6] & 65535u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1072), ctx.gpr[31]);
    ctx.gpr[31] = (0x08879788u);
    ctx.gpr[6] = (0u | 256u);
    goto L_08878F8C;
L_08879788:
    ctx.gpr[31] = (0x08879790u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    goto L_08879F60;
L_08879790:
    ctx.gpr[31] = (0x08879798u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    goto L_08878F64;
L_08879798:
    ctx.gpr[7] = (2269u << 16u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(3856)));
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(3856));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_08879878;
      }
      goto L_088797B0;
    }
L_088797B0:
    ctx.gpr[8] = (0u | 7u);
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-48));
    ctx.gpr[9] = (ctx.gpr[8] << 4u);
    goto L_088797BC;
L_088797BC:
    ctx.gpr[10] = (ctx.gpr[9] + ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[10]);
    ctx.gpr[10] = (ctx.gpr[9] + ctx.gpr[7]);
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(4)));
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[6]);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[11]);
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(12), ctx.gpr[11]);
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(24), ctx.gpr[11]);
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(32), ctx.gpr[3]);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(44)));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(36), ctx.gpr[11]);
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    ctx.gpr[8] = (ctx.gpr[8] << 16u);
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(44), ctx.gpr[10]);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 16u));
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[8]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[9] = (ctx.gpr[8] << 4u);
      if (branch_taken) {
          goto L_088797BC;
      }
      goto L_08879844;
    }
L_08879844:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(48), ctx.gpr[17]);
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(52), static_cast<std::uint16_t>(ctx.gpr[18]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7868)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(56), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(60), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(76), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(84), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(88), 0u);
      if (branch_taken) {
          goto L_088798CC;
      }
      goto L_08879878;
    }
L_08879878:
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(3856), ctx.gpr[17]);
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[18]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7868)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(40), 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[8] = (ctx.gpr[4] | 0u);
    ctx.gpr[9] = (ctx.gpr[4] | 0u);
    ctx.gpr[10] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088798CCu);
    ctx.gpr[11] = (0u | 0u);
    goto L_0887AFFC;
L_088798CC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1056)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1060)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1064)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1068)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1072)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(1088));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088798E8:
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2320));
    goto L_088798F4;
L_088798F4:
    ctx.gpr[6] = (ctx.gpr[4] << 6u);
    ctx.gpr[8] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[7] << 4u);
    goto L_08879908;
L_08879908:
    ctx.gpr[9] = (ctx.gpr[8] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[8] = (ctx.gpr[6] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[5]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[7] = (ctx.gpr[7] << 16u);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(40), 0u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 16u));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[8] = (ctx.gpr[7] << 4u);
      if (branch_taken) {
          goto L_08879908;
      }
      goto L_08879938;
    }
L_08879938:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_088798F4;
      }
      goto L_08879950;
    }
L_08879950:
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(3856));
    goto L_0887995C;
L_0887995C:
    ctx.gpr[6] = (ctx.gpr[4] << 4u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(40), 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887995C;
      }
      goto L_0887998C;
    }
L_0887998C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08879994:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(3856));
    goto L_088799A0;
L_088799A0:
    ctx.gpr[6] = (ctx.gpr[5] << 4u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(40), 0u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_088799A0;
      }
      goto L_088799D0;
    }
L_088799D0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088799D8:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2320));
    goto L_088799E4;
L_088799E4:
    ctx.gpr[5] = (ctx.gpr[7] << 6u);
    ctx.gpr[8] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[6] << 4u);
    goto L_088799F8;
L_088799F8:
    ctx.gpr[9] = (ctx.gpr[8] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[8] = (ctx.gpr[5] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[6] = (ctx.gpr[6] << 16u);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(40), 0u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 16u));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[6]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[8] = (ctx.gpr[6] << 4u);
      if (branch_taken) {
          goto L_088799F8;
      }
      goto L_08879A28;
    }
L_08879A28:
    ctx.gpr[5] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[5] << 16u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 16u));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[7]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088799E4;
      }
      goto L_08879A40;
    }
L_08879A40:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08879A48:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-1088));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1056), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1060), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1068), ctx.gpr[19]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1064), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[6] & 65535u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1072), ctx.gpr[31]);
    ctx.gpr[31] = (0x08879A80u);
    ctx.gpr[6] = (0u | 256u);
    goto L_08878F8C;
L_08879A80:
    ctx.gpr[31] = (0x08879A88u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    goto L_08879F60;
L_08879A88:
    ctx.gpr[31] = (0x08879A90u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    goto L_08878F64;
L_08879A90:
    ctx.gpr[4] = (ctx.gpr[18] << 6u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2320));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(0u));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), 0u);
    ctx.gpr[4] = (0u | 7u);
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08879B10;
      }
      goto L_08879AEC;
    }
L_08879AEC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[9] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[10] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x08879B10u);
    ctx.gpr[11] = (0u | 0u);
    goto L_0887AFFC;
L_08879B10:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1056)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1060)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1064)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1068)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1072)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(1088));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08879B2C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-1088));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1056), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1060), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1068), ctx.gpr[19]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1064), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[6] & 65535u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1072), ctx.gpr[31]);
    ctx.gpr[31] = (0x08879B64u);
    ctx.gpr[6] = (0u | 256u);
    goto L_08878F8C;
L_08879B64:
    ctx.gpr[31] = (0x08879B6Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    goto L_08879F60;
L_08879B6C:
    ctx.gpr[31] = (0x08879B74u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    goto L_08878F64;
L_08879B74:
    ctx.gpr[5] = (ctx.gpr[18] << 6u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2320));
    goto L_08879B90;
L_08879B90:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[8] = (ctx.gpr[7] << 4u);
      if (branch_taken) {
          goto L_08879BC8;
      }
      goto L_08879B98;
    }
L_08879B98:
    ctx.gpr[9] = (ctx.gpr[8] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[8] = (ctx.gpr[5] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[4]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08879BC8;
      }
      goto L_08879BB4;
    }
L_08879BB4:
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[6] << 16u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 16u));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[7]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08879B90;
      }
      goto L_08879BC8;
    }
L_08879BC8:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (ctx.gpr[7] << 4u);
      if (branch_taken) {
          goto L_08879C48;
      }
      goto L_08879BD0;
    }
L_08879BD0:
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(0u));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), 0u);
    ctx.gpr[4] = (0u | 7u);
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08879C48;
      }
      goto L_08879C24;
    }
L_08879C24:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[9] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[10] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x08879C48u);
    ctx.gpr[11] = (0u | 0u);
    goto L_0887AFFC;
L_08879C48:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1056)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1060)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1064)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1068)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1072)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(1088));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08879C64:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4240));
    goto L_08879C70;
L_08879C70:
    ctx.gpr[6] = (ctx.gpr[5] << 5u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(28), 0u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 20 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08879C70;
      }
      goto L_08879C98;
    }
L_08879C98:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08879CA0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-512));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08879CD0;
      }
      goto L_08879CAC;
    }
L_08879CAC:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08879CD0;
      }
      goto L_08879CB4;
    }
L_08879CB4:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[8] = (aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (0u | 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_08879CD8;
      }
      goto L_08879CC8;
    }
L_08879CC8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08879CEC;
      }
      goto L_08879CD0;
    }
L_08879CD0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08879E50;
      }
      goto L_08879CD8;
    }
L_08879CD8:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(2));
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[10] = (ctx.gpr[10] & 65535u);
      if (branch_taken) {
          goto L_08879CD8;
      }
      goto L_08879CEC;
    }
L_08879CEC:
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[8] = (aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08879D10;
      }
      goto L_08879CFC;
    }
L_08879CFC:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(2));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
      if (branch_taken) {
          goto L_08879CFC;
      }
      goto L_08879D10;
    }
L_08879D10:
    ctx.gpr[10] = (ctx.gpr[10] + ctx.gpr[6]);
    ctx.gpr[10] = (ctx.gpr[10] & 65535u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[10]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[9] = (0u | 0u);
      if (branch_taken) {
          goto L_08879DE0;
      }
      goto L_08879D28;
    }
L_08879D28:
    ctx.gpr[2] = (0u | 126u);
    ctx.gpr[11] = (0u | 97u);
    goto L_08879D30;
L_08879D30:
    ctx.gpr[3] = (ctx.gpr[9] + ctx.gpr[9]);
    ctx.gpr[3] = (ctx.gpr[4] + ctx.gpr[3]);
    ctx.gpr[12] = (aot_mem.aot_load16(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[12] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08879DA8;
      }
      goto L_08879D44;
    }
L_08879D44:
    ctx.gpr[12] = (aot_mem.aot_load16(ctx.gpr[3] + static_cast<std::uint32_t>(2)));
    { const bool branch_taken = ctx.gpr[12] != ctx.gpr[11];
    // nop
      if (branch_taken) {
          goto L_08879DA8;
      }
      goto L_08879D50;
    }
L_08879D50:
    ctx.gpr[3] = (aot_mem.aot_load16(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08879DA8;
      }
      goto L_08879D5C;
    }
L_08879D5C:
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(3));
    ctx.gpr[3] = (0u | 0u);
    ctx.gpr[12] = (static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[12] == 0u;
    ctx.gpr[9] = (ctx.gpr[9] & 65535u);
      if (branch_taken) {
          goto L_08879DD8;
      }
      goto L_08879D70;
    }
L_08879D70:
    ctx.gpr[7] = (ctx.gpr[3] + ctx.gpr[3]);
    ctx.gpr[7] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[12] = (ctx.gpr[8] + ctx.gpr[8]);
    ctx.gpr[3] = (ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.gpr[12] = (ctx.gpr[29] + ctx.gpr[12]);
    ctx.gpr[3] = (ctx.gpr[3] & 65535u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[12] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
      if (branch_taken) {
          goto L_08879D70;
      }
      goto L_08879DA0;
    }
L_08879DA0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[10]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08879DD8;
      }
      goto L_08879DA8;
    }
L_08879DA8:
    ctx.gpr[7] = (ctx.gpr[9] + ctx.gpr[9]);
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[3] = (ctx.gpr[8] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[3] = (ctx.gpr[29] + ctx.gpr[3]);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    aot_mem.aot_store16(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[9] = (ctx.gpr[9] & 65535u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[10]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08879DD8;
      }
      goto L_08879DD8;
    }
L_08879DD8:
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08879D30;
      }
      goto L_08879DE0;
    }
L_08879DE0:
    ctx.gpr[5] = (ctx.gpr[8] + ctx.gpr[8]);
    ctx.gpr[5] = (ctx.gpr[29] + ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[10]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08879E24;
      }
      goto L_08879DFC;
    }
L_08879DFC:
    ctx.gpr[5] = (ctx.gpr[8] + ctx.gpr[8]);
    ctx.gpr[6] = (ctx.gpr[29] + ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[10]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08879DFC;
      }
      goto L_08879E24;
    }
L_08879E24:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[8]) < 256 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08879E50;
      }
      goto L_08879E30;
    }
L_08879E30:
    ctx.gpr[5] = (ctx.gpr[8] + ctx.gpr[8]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[8]) < 256 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08879E30;
      }
      goto L_08879E50;
    }
L_08879E50:
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(512));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08879E58:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08879F58;
      }
      goto L_08879E60;
    }
L_08879E60:
    ctx.gpr[12] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[12] == 0u;
    ctx.gpr[3] = (0u | 126u);
      if (branch_taken) {
          goto L_08879F58;
      }
      goto L_08879E6C;
    }
L_08879E6C:
    ctx.gpr[2] = (0u | 79u);
    ctx.gpr[11] = (0u | 83u);
    ctx.gpr[10] = (0u | 77u);
    ctx.gpr[9] = (0u | 227u);
    ctx.gpr[8] = (0u | 225u);
    ctx.gpr[7] = (0u | 224u);
    ctx.gpr[6] = (0u | 226u);
    goto L_08879E88;
L_08879E88:
    { const bool branch_taken = ctx.gpr[12] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08879EC0;
      }
      goto L_08879E90;
    }
L_08879E90:
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[12]));
    ctx.gpr[12] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[12] == 0u;
    // nop
      if (branch_taken) {
          goto L_08879EB8;
      }
      goto L_08879EA0;
    }
L_08879EA0:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
    ctx.gpr[12] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[12] != ctx.gpr[3];
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08879E90;
      }
      goto L_08879EB0;
    }
L_08879EB0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08879EC0;
      }
      goto L_08879EB8;
    }
L_08879EB8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08879F58;
      }
      goto L_08879EC0;
    }
L_08879EC0:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
    ctx.gpr[12] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[12] = (ctx.gpr[12] + static_cast<std::uint32_t>(-76));
    ctx.gpr[13] = (ctx.gpr[12] < static_cast<std::uint32_t>(13) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[13] == 0u;
    // nop
      if (branch_taken) {
          goto L_08879F44;
      }
      goto L_08879ED8;
    }
L_08879ED8:
    ctx.gpr[12] = (ctx.gpr[12] << 2u);
    ctx.gpr[1] = (2225u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[12]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-2160)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08879EF0:
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[2]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08879F44;
      }
      goto L_08879EFC;
    }
L_08879EFC:
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[11]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08879F44;
      }
      goto L_08879F08;
    }
L_08879F08:
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[10]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08879F44;
      }
      goto L_08879F14;
    }
L_08879F14:
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[9]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08879F44;
      }
      goto L_08879F20;
    }
L_08879F20:
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[8]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08879F44;
      }
      goto L_08879F2C;
    }
L_08879F2C:
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08879F44;
      }
      goto L_08879F38;
    }
L_08879F38:
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08879F44;
      }
      goto L_08879F44;
    }
L_08879F44:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
    ctx.gpr[12] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[12] != 0u;
    // nop
      if (branch_taken) {
          goto L_08879E88;
      }
      goto L_08879F58;
    }
L_08879F58:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08879F60:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-1136));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1100), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1104), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1108), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1112), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1116), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1120), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1124), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1128), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08879FA0;
      }
      goto L_08879F8C;
    }
L_08879F8C:
    ctx.gpr[31] = (0x08879F94u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08878F64;
L_08879F94:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08879FA8;
      }
      goto L_08879FA0;
    }
L_08879FA0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887A150;
      }
      goto L_08879FA8;
    }
L_08879FA8:
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[29] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(588), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 256 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08879FA8;
      }
      goto L_08879FC8;
    }
L_08879FC8:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_0887A0D4;
      }
      goto L_08879FD8;
    }
L_08879FD8:
    ctx.gpr[20] = (0u | 126u);
    ctx.gpr[21] = (0u | 107u);
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(588));
    goto L_08879FE4;
L_08879FE4:
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_0887A0A0;
      }
      goto L_08879FF8;
    }
L_08879FF8:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(2)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_0887A0A0;
      }
      goto L_0887A004;
    }
L_0887A004:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_0887A0A0;
      }
      goto L_0887A010;
    }
L_0887A010:
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    ctx.gpr[18] = (ctx.gpr[4] & 65535u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0887A028u);
    ctx.gpr[6] = (0u | 512u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 376u, 0x08AED4ECu>(ctx, &aot_mem) && ctx.pc == 0x0887A028u) goto L_0887A028;
    return;
L_0887A028:
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[31] = (0x0887A038u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    goto L_0887B510;
L_0887A038:
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[18] & 65535u);
    ctx.gpr[31] = (0x0887A050u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    goto L_08878F64;
L_0887A050:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
      if (branch_taken) {
          goto L_0887A0CC;
      }
      goto L_0887A064;
    }
L_0887A064:
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[7] = (ctx.gpr[29] + ctx.gpr[7]);
    ctx.gpr[8] = (aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(588)));
    ctx.gpr[9] = (ctx.gpr[19] + ctx.gpr[19]);
    ctx.gpr[9] = (ctx.gpr[29] + ctx.gpr[9]);
    aot_mem.aot_store16(ctx.gpr[9] + static_cast<std::uint32_t>(76), static_cast<std::uint16_t>(ctx.gpr[8]));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[7] + static_cast<std::uint32_t>(588), static_cast<std::uint16_t>(0u));
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] & 65535u);
      if (branch_taken) {
          goto L_0887A064;
      }
      goto L_0887A098;
    }
L_0887A098:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887A0CC;
      }
      goto L_0887A0A0;
    }
L_0887A0A0:
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[19] + ctx.gpr[19]);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[29] + ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[18] & 65535u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(76), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[19] = (ctx.gpr[19] & 65535u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    goto L_0887A0CC;
L_0887A0CC:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08879FE4;
      }
      goto L_0887A0D4;
    }
L_0887A0D4:
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[4]);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(76), static_cast<std::uint16_t>(0u));
    ctx.gpr[31] = (0x0887A0E8u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(76));
    goto L_08878F64;
L_0887A0E8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887A124;
      }
      goto L_0887A0FC;
    }
L_0887A0FC:
    ctx.gpr[5] = (ctx.gpr[19] + ctx.gpr[19]);
    ctx.gpr[6] = (ctx.gpr[29] + ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(76)));
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[19] = (ctx.gpr[19] & 65535u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887A0FC;
      }
      goto L_0887A124;
    }
L_0887A124:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 256 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887A150;
      }
      goto L_0887A130;
    }
L_0887A130:
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    ctx.gpr[19] = (ctx.gpr[19] & 65535u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 256 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887A130;
      }
      goto L_0887A150;
    }
L_0887A150:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1100)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1104)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1108)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1112)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1116)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1120)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1124)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1128)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(1136));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887A178:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-1104));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1080), ctx.gpr[21]);
    ctx.gpr[21] = (ctx.gpr[10] | 0u);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1104)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1064), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1068), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1072), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1076), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1084), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1088), ctx.gpr[23]);
    ctx.gpr[22] = (ctx.gpr[11] | 0u);
    ctx.gpr[20] = (ctx.gpr[9] | 0u);
    ctx.gpr[19] = (ctx.gpr[8] | 0u);
    ctx.gpr[18] = (ctx.gpr[7] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[23] = (ctx.gpr[6] & 65535u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1060), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1092), ctx.gpr[30]);
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    ctx.gpr[8] = (ctx.gpr[21] | 0u);
    ctx.gpr[9] = (ctx.gpr[22] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1056), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1096), ctx.gpr[31]);
    ctx.gpr[31] = (0x0887A1ECu);
    ctx.gpr[11] = (ctx.gpr[30] | 0u);
    goto L_0887B1AC;
L_0887A1EC:
    ctx.gpr[31] = (0x0887A1F4u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    goto L_08879F60;
L_0887A1F4:
    ctx.gpr[31] = (0x0887A1FCu);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    goto L_08878F64;
L_0887A1FC:
    ctx.gpr[6] = (2269u << 16u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(3856));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1056)));
    goto L_0887A210;
L_0887A210:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[8] = (ctx.gpr[4] << 4u);
      if (branch_taken) {
          goto L_0887A244;
      }
      goto L_0887A218;
    }
L_0887A218:
    ctx.gpr[9] = (ctx.gpr[8] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[7]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887A244;
      }
      goto L_0887A230;
    }
L_0887A230:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 8 ? 1u : 0u);
      if (branch_taken) {
          goto L_0887A210;
      }
      goto L_0887A244;
    }
L_0887A244:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
      if (branch_taken) {
          goto L_0887A2C8;
      }
      goto L_0887A24C;
    }
L_0887A24C:
    ctx.gpr[8] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[8]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[23]));
    ctx.gpr[8] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-7868)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(28), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(32), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(36), ctx.gpr[30]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(40), 0u);
      if (branch_taken) {
          goto L_0887A2C8;
      }
      goto L_0887A290;
    }
L_0887A290:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(3856)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(20)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(24)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(28)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(32)));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(36)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(40)));
    ctx.gpr[7] = (ctx.gpr[8] | 0u);
    ctx.gpr[8] = (ctx.gpr[9] | 0u);
    ctx.gpr[9] = (ctx.gpr[10] | 0u);
    ctx.gpr[10] = (ctx.gpr[11] | 0u);
    ctx.gpr[31] = (0x0887A2C8u);
    ctx.gpr[11] = (ctx.gpr[2] | 0u);
    goto L_0887AFFC;
L_0887A2C8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1060)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1064)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1068)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1072)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1076)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1080)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1084)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1088)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1092)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1096)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(1104));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887A2F8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-1104));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1084), ctx.gpr[22]);
    ctx.gpr[22] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1108)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1056), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1060), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1064), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1068), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1072), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1076), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1080), ctx.gpr[21]);
    ctx.gpr[16] = (ctx.gpr[11] | 0u);
    ctx.gpr[17] = (ctx.gpr[10] | 0u);
    ctx.gpr[18] = (ctx.gpr[9] | 0u);
    ctx.gpr[19] = (ctx.gpr[8] | 0u);
    ctx.gpr[20] = (ctx.gpr[7] | 0u);
    ctx.gpr[21] = (ctx.gpr[6] | 0u);
    ctx.gpr[22] = (ctx.gpr[5] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1088), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1092), ctx.gpr[30]);
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[23] = (ctx.gpr[4] | 0u);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1104)));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    ctx.gpr[8] = (ctx.gpr[17] | 0u);
    ctx.gpr[9] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1096), ctx.gpr[31]);
    ctx.gpr[31] = (0x0887A374u);
    ctx.gpr[11] = (ctx.gpr[30] | 0u);
    goto L_0887B1AC;
L_0887A374:
    ctx.gpr[31] = (0x0887A37Cu);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    goto L_08879F60;
L_0887A37C:
    ctx.gpr[31] = (0x0887A384u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    goto L_08878F64;
L_0887A384:
    ctx.gpr[5] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(3856), ctx.gpr[23]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(3856));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[21]));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1056)));
    ctx.gpr[6] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-7868)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1104)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[22] == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), 0u);
      if (branch_taken) {
          goto L_0887A410;
      }
      goto L_0887A3CC;
    }
L_0887A3CC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(3856)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (ctx.gpr[8] | 0u);
    ctx.gpr[8] = (ctx.gpr[9] | 0u);
    ctx.gpr[9] = (ctx.gpr[10] | 0u);
    ctx.gpr[10] = (ctx.gpr[11] | 0u);
    ctx.gpr[31] = (0x0887A410u);
    ctx.gpr[11] = (ctx.gpr[2] | 0u);
    goto L_0887AFFC;
L_0887A410:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1060)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1064)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1068)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1072)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1076)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1080)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1084)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1088)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1092)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1096)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(1104));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887A440:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-1104));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1080), ctx.gpr[21]);
    ctx.gpr[21] = (ctx.gpr[10] | 0u);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1104)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1064), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1068), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1072), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1076), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1084), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1088), ctx.gpr[23]);
    ctx.gpr[22] = (ctx.gpr[11] | 0u);
    ctx.gpr[20] = (ctx.gpr[9] | 0u);
    ctx.gpr[19] = (ctx.gpr[8] | 0u);
    ctx.gpr[18] = (ctx.gpr[7] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[23] = (ctx.gpr[6] & 65535u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1060), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1092), ctx.gpr[30]);
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    ctx.gpr[8] = (ctx.gpr[21] | 0u);
    ctx.gpr[9] = (ctx.gpr[22] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1056), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1096), ctx.gpr[31]);
    ctx.gpr[31] = (0x0887A4B4u);
    ctx.gpr[11] = (ctx.gpr[30] | 0u);
    goto L_0887B1AC;
L_0887A4B4:
    ctx.gpr[31] = (0x0887A4BCu);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    goto L_08879F60;
L_0887A4BC:
    ctx.gpr[31] = (0x0887A4C4u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    goto L_08878F64;
L_0887A4C4:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3856)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(3856));
    ctx.gpr[6] = (2230u << 16u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1056)));
      if (branch_taken) {
          goto L_0887A5A4;
      }
      goto L_0887A4DC;
    }
L_0887A4DC:
    ctx.gpr[4] = (0u | 7u);
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(-48));
    ctx.gpr[8] = (ctx.gpr[4] << 4u);
    goto L_0887A4E8;
L_0887A4E8:
    ctx.gpr[9] = (ctx.gpr[8] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[8] + ctx.gpr[7]);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[5]);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[10]);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(4), ctx.gpr[11]);
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(12), ctx.gpr[10]);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(16), ctx.gpr[11]);
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(24), ctx.gpr[10]);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(28), ctx.gpr[11]);
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(44)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(36), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(40), ctx.gpr[11]);
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(44), ctx.gpr[9]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[8] = (ctx.gpr[4] << 4u);
      if (branch_taken) {
          goto L_0887A4E8;
      }
      goto L_0887A570;
    }
L_0887A570:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(52), static_cast<std::uint16_t>(ctx.gpr[23]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-7868)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(56), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(60), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(64), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(68), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(72), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(76), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(80), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(84), ctx.gpr[30]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(88), 0u);
      if (branch_taken) {
          goto L_0887A5F8;
      }
      goto L_0887A5A4;
    }
L_0887A5A4:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(3856), ctx.gpr[16]);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[23]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-7868)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(28), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(32), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(36), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(40), 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    ctx.gpr[8] = (ctx.gpr[21] | 0u);
    ctx.gpr[9] = (ctx.gpr[22] | 0u);
    ctx.gpr[10] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x0887A5F8u);
    ctx.gpr[11] = (0u | 0u);
    goto L_0887AFFC;
L_0887A5F8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1060)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1064)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1068)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1072)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1076)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1080)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1084)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1088)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1092)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1096)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(1104));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887A628:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-1104));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1056), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1060), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1064), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1068), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1072), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1076), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1088), ctx.gpr[30]);
    ctx.gpr[16] = (ctx.gpr[11] | 0u);
    ctx.gpr[17] = (ctx.gpr[10] | 0u);
    ctx.gpr[18] = (ctx.gpr[9] | 0u);
    ctx.gpr[30] = (ctx.gpr[6] & 65535u);
    ctx.gpr[19] = (ctx.gpr[8] | 0u);
    ctx.gpr[21] = (ctx.gpr[5] | 0u);
    ctx.gpr[20] = (ctx.gpr[7] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1080), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1084), ctx.gpr[23]);
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[22] = (ctx.gpr[4] | 0u);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1104)));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    ctx.gpr[8] = (ctx.gpr[17] | 0u);
    ctx.gpr[9] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1092), ctx.gpr[31]);
    ctx.gpr[31] = (0x0887A698u);
    ctx.gpr[11] = (ctx.gpr[23] | 0u);
    goto L_0887B1AC;
L_0887A698:
    ctx.gpr[31] = (0x0887A6A0u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    goto L_08879F60;
L_0887A6A0:
    ctx.gpr[31] = (0x0887A6A8u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    goto L_08878F64;
L_0887A6A8:
    ctx.gpr[4] = (ctx.gpr[30] << 6u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2320));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[22]);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(0u));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[21]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7868)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1104)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1056)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1060)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1064)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1068)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1072)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1076)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1080)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1084)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1088)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1092)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(1104));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887A728:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-1104));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1080), ctx.gpr[21]);
    ctx.gpr[21] = (ctx.gpr[10] | 0u);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1104)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1064), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1068), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1072), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1076), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1084), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1092), ctx.gpr[30]);
    ctx.gpr[22] = (ctx.gpr[11] | 0u);
    ctx.gpr[20] = (ctx.gpr[9] | 0u);
    ctx.gpr[19] = (ctx.gpr[8] | 0u);
    ctx.gpr[18] = (ctx.gpr[7] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[30] = (ctx.gpr[6] & 65535u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1060), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1088), ctx.gpr[23]);
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    ctx.gpr[8] = (ctx.gpr[21] | 0u);
    ctx.gpr[9] = (ctx.gpr[22] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1056), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1096), ctx.gpr[31]);
    ctx.gpr[31] = (0x0887A79Cu);
    ctx.gpr[11] = (ctx.gpr[23] | 0u);
    goto L_0887B1AC;
L_0887A79C:
    ctx.gpr[31] = (0x0887A7A4u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    goto L_08879F60;
L_0887A7A4:
    ctx.gpr[31] = (0x0887A7ACu);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    goto L_08878F64;
L_0887A7AC:
    ctx.gpr[6] = (ctx.gpr[30] << 6u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[7] = (2269u << 16u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(2320));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1056)));
    goto L_0887A7CC;
L_0887A7CC:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[8] = (ctx.gpr[4] << 4u);
      if (branch_taken) {
          goto L_0887A804;
      }
      goto L_0887A7D4;
    }
L_0887A7D4:
    ctx.gpr[9] = (ctx.gpr[8] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[8] = (ctx.gpr[6] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[7]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887A804;
      }
      goto L_0887A7F0;
    }
L_0887A7F0:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_0887A7CC;
      }
      goto L_0887A804;
    }
L_0887A804:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
      if (branch_taken) {
          goto L_0887A850;
      }
      goto L_0887A80C;
    }
L_0887A80C:
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(0u));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7868)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), 0u);
    goto L_0887A850;
L_0887A850:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1060)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1064)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1068)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1072)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1076)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1080)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1084)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1088)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1092)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1096)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(1104));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887A880:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-1088));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1064), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1068), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1072), ctx.gpr[20]);
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1056), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1060), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    ctx.gpr[17] = (ctx.gpr[7] | 0u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1076), ctx.gpr[31]);
    ctx.gpr[31] = (0x0887A8C0u);
    ctx.gpr[6] = (0u | 256u);
    goto L_08878F8C;
L_0887A8C0:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x0887A8CCu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08879CA0;
L_0887A8CC:
    ctx.gpr[31] = (0x0887A8D4u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    goto L_08879F60;
L_0887A8D4:
    ctx.gpr[31] = (0x0887A8DCu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    goto L_08878F64;
L_0887A8DC:
    ctx.gpr[4] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(3856), ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(3856));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[16]));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    ctx.gpr[9] = (ctx.gpr[5] | 0u);
    ctx.gpr[10] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x0887A93Cu);
    ctx.gpr[11] = (ctx.gpr[17] | 0u);
    goto L_0887AFFC;
L_0887A93C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1056)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1060)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1064)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1068)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1072)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1076)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(1088));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887A95C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    ctx.gpr[18] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(3856));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[21]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[20] = (ctx.gpr[19] + static_cast<std::uint32_t>(48));
    ctx.gpr[21] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[31]);
    goto L_0887A990;
L_0887A990:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 1u);
    goto L_0887A9A0;
L_0887A9A0:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[7] = (ctx.gpr[5] << 4u);
      if (branch_taken) {
          goto L_0887AA30;
      }
      goto L_0887A9A8;
    }
L_0887A9A8:
    ctx.gpr[8] = (ctx.gpr[7] + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[19]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887AA30;
      }
      goto L_0887A9C0;
    }
L_0887A9C0:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887AA30;
      }
      goto L_0887A9C8;
    }
L_0887A9C8:
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    ctx.gpr[9] = (aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (aot_mem.aot_load16(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    goto L_0887A9D4;
L_0887A9D4:
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[10];
    // nop
      if (branch_taken) {
          goto L_0887AA10;
      }
      goto L_0887A9DC;
    }
L_0887A9DC:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887AA10;
      }
      goto L_0887A9E4;
    }
L_0887A9E4:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(2));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(2));
    ctx.gpr[10] = (aot_mem.aot_load16(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[9] = (aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0887AA08;
      }
      goto L_0887A9F8;
    }
L_0887A9F8:
    { const bool branch_taken = ctx.gpr[9] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887AA08;
      }
      goto L_0887AA00;
    }
L_0887AA00:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    goto L_0887AA08;
L_0887AA08:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887A9D4;
      }
      goto L_0887AA10;
    }
L_0887AA10:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887AA28;
      }
      goto L_0887AA18;
    }
L_0887AA18:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 8 ? 1u : 0u);
    goto L_0887AA28;
L_0887AA28:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887A9A0;
      }
      goto L_0887AA30;
    }
L_0887AA30:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887ABF0;
      }
      goto L_0887AA38;
    }
L_0887AA38:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887AB2C;
      }
      goto L_0887AA40;
    }
L_0887AA40:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(3856), 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    goto L_0887AA54;
L_0887AA54:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887AAEC;
      }
      goto L_0887AA5C;
    }
L_0887AA5C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[20]);
      if (branch_taken) {
          goto L_0887AAEC;
      }
      goto L_0887AA68;
    }
L_0887AA68:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[9]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(44)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), ctx.gpr[6]);
    ctx.gpr[7] = (ctx.gpr[7] << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), ctx.gpr[8]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 16u));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[7] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[7]) < 7 ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[19]);
      if (branch_taken) {
          goto L_0887AA54;
      }
      goto L_0887AAEC;
    }
L_0887AAEC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-7868)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(3856)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887ABF0;
      }
      goto L_0887AB04;
    }
L_0887AB04:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(28)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (0x0887AB24u);
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(40)));
    goto L_0887AFFC;
L_0887AB24:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887ABF0;
      }
      goto L_0887AB2C;
    }
L_0887AB2C:
    ctx.gpr[4] = (ctx.gpr[5] << 4u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[5] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 7 ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[19]);
    goto L_0887AB54;
L_0887AB54:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887ABEC;
      }
      goto L_0887AB5C;
    }
L_0887AB5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[20]);
      if (branch_taken) {
          goto L_0887ABEC;
      }
      goto L_0887AB68;
    }
L_0887AB68:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(8), ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(12), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(16), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(20), ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(28), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(32), ctx.gpr[9]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(36), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(40), ctx.gpr[8]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[5] << 4u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 7 ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[19]);
      if (branch_taken) {
          goto L_0887AB54;
      }
      goto L_0887ABEC;
    }
L_0887ABEC:
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), 0u);
    goto L_0887ABF0;
L_0887ABF0:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887A990;
      }
      goto L_0887ABF8;
    }
L_0887ABF8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887AC1C:
    ctx.gpr[8] = (2269u << 16u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(2320));
    ctx.gpr[7] = (0u | 4u);
    ctx.gpr[6] = (ctx.gpr[8] + static_cast<std::uint32_t>(48));
    ctx.gpr[5] = (2230u << 16u);
    goto L_0887AC30;
L_0887AC30:
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[15] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[14] = (0u | 1u);
    goto L_0887AC44;
L_0887AC44:
    { const bool branch_taken = ctx.gpr[14] == 0u;
    ctx.gpr[2] = (static_cast<std::int32_t>(ctx.gpr[10]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_0887AD04;
      }
      goto L_0887AC4C;
    }
L_0887AC4C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[2] = (ctx.gpr[11] << 6u);
      if (branch_taken) {
          goto L_0887AD04;
      }
      goto L_0887AC54;
    }
L_0887AC54:
    ctx.gpr[3] = (ctx.gpr[2] + ctx.gpr[2]);
    ctx.gpr[12] = (ctx.gpr[10] << 4u);
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[3]);
    ctx.gpr[3] = (ctx.gpr[12] + ctx.gpr[12]);
    ctx.gpr[3] = (ctx.gpr[12] + ctx.gpr[3]);
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[3]);
    ctx.gpr[13] = (ctx.gpr[2] + ctx.gpr[8]);
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[13] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887AD04;
      }
      goto L_0887AC7C;
    }
L_0887AC7C:
    { const bool branch_taken = ctx.gpr[15] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887AD04;
      }
      goto L_0887AC84;
    }
L_0887AC84:
    ctx.gpr[12] = (ctx.gpr[4] | 0u);
    ctx.gpr[3] = (aot_mem.aot_load16(ctx.gpr[13] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (aot_mem.aot_load16(ctx.gpr[12] + static_cast<std::uint32_t>(0)));
    goto L_0887AC90;
L_0887AC90:
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0887ACCC;
      }
      goto L_0887AC98;
    }
L_0887AC98:
    { const bool branch_taken = ctx.gpr[15] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887ACCC;
      }
      goto L_0887ACA0;
    }
L_0887ACA0:
    ctx.gpr[12] = (ctx.gpr[12] + static_cast<std::uint32_t>(2));
    ctx.gpr[13] = (ctx.gpr[13] + static_cast<std::uint32_t>(2));
    ctx.gpr[2] = (aot_mem.aot_load16(ctx.gpr[12] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[3] = (aot_mem.aot_load16(ctx.gpr[13] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0887ACC4;
      }
      goto L_0887ACB4;
    }
L_0887ACB4:
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887ACC4;
      }
      goto L_0887ACBC;
    }
L_0887ACBC:
    ctx.gpr[15] = (0u | 1u);
    ctx.gpr[9] = (ctx.gpr[15] | 0u);
    goto L_0887ACC4;
L_0887ACC4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887AC90;
      }
      goto L_0887ACCC;
    }
L_0887ACCC:
    { const bool branch_taken = ctx.gpr[15] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887ACFC;
      }
      goto L_0887ACD4;
    }
L_0887ACD4:
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(1));
    ctx.gpr[10] = (ctx.gpr[10] << 16u);
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[10]) >> 16u));
    { const bool branch_taken = ctx.gpr[10] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_0887ACFC;
      }
      goto L_0887ACE8;
    }
L_0887ACE8:
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(1));
    ctx.gpr[11] = (ctx.gpr[11] << 16u);
    ctx.gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[11]) >> 16u));
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[14] = (static_cast<std::int32_t>(ctx.gpr[11]) < 8 ? 1u : 0u);
    goto L_0887ACFC;
L_0887ACFC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887AC44;
      }
      goto L_0887AD04;
    }
L_0887AD04:
    { const bool branch_taken = ctx.gpr[15] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887AEB4;
      }
      goto L_0887AD0C;
    }
L_0887AD0C:
    ctx.gpr[11] = (ctx.gpr[11] << 6u);
    ctx.gpr[2] = (ctx.gpr[11] + ctx.gpr[11]);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[11] = (ctx.gpr[11] + ctx.gpr[2]);
      if (branch_taken) {
          goto L_0887ADE0;
      }
      goto L_0887AD1C;
    }
L_0887AD1C:
    ctx.gpr[13] = (ctx.gpr[11] + ctx.gpr[8]);
    ctx.gpr[2] = (ctx.gpr[11] | 0u);
    aot_mem.aot_store32(ctx.gpr[13] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[12] = (0u | 0u);
    ctx.gpr[3] = (0u | 1u);
    ctx.gpr[10] = (ctx.gpr[2] + ctx.gpr[8]);
    goto L_0887AD34;
L_0887AD34:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887ADD0;
      }
      goto L_0887AD3C;
    }
L_0887AD3C:
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[6]);
      if (branch_taken) {
          goto L_0887ADD0;
      }
      goto L_0887AD48;
    }
L_0887AD48:
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[14] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.gpr[15] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(4), ctx.gpr[14]);
    ctx.gpr[14] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(8), ctx.gpr[15]);
    ctx.gpr[15] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(12), ctx.gpr[3]);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(16), ctx.gpr[14]);
    ctx.gpr[14] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(20), ctx.gpr[15]);
    ctx.gpr[15] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(24), ctx.gpr[3]);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(28), ctx.gpr[14]);
    ctx.gpr[14] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(32), ctx.gpr[15]);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(44)));
    ctx.gpr[12] = (ctx.gpr[12] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(36), ctx.gpr[3]);
    ctx.gpr[12] = (ctx.gpr[12] << 16u);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(40), ctx.gpr[14]);
    ctx.gpr[12] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[12]) >> 16u));
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    ctx.gpr[10] = (ctx.gpr[12] << 4u);
    ctx.gpr[2] = (ctx.gpr[10] + ctx.gpr[10]);
    ctx.gpr[2] = (ctx.gpr[10] + ctx.gpr[2]);
    ctx.gpr[2] = (ctx.gpr[11] + ctx.gpr[2]);
    ctx.gpr[3] = (static_cast<std::int32_t>(ctx.gpr[12]) < 3 ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[10] = (ctx.gpr[2] + ctx.gpr[8]);
      if (branch_taken) {
          goto L_0887AD34;
      }
      goto L_0887ADD0;
    }
L_0887ADD0:
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7868)));
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(0), 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[13] + static_cast<std::uint32_t>(12), ctx.gpr[11]);
      if (branch_taken) {
          goto L_0887AEB4;
      }
      goto L_0887ADE0;
    }
L_0887ADE0:
    ctx.gpr[2] = (ctx.gpr[10] << 4u);
    ctx.gpr[3] = (ctx.gpr[2] + ctx.gpr[2]);
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[3]);
    ctx.gpr[12] = (ctx.gpr[10] | 0u);
    ctx.gpr[10] = (ctx.gpr[11] + ctx.gpr[2]);
    ctx.gpr[10] = (ctx.gpr[10] + ctx.gpr[8]);
    ctx.gpr[2] = (ctx.gpr[12] << 4u);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[10] = (ctx.gpr[2] + ctx.gpr[2]);
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[10]);
    ctx.gpr[2] = (ctx.gpr[11] + ctx.gpr[2]);
    ctx.gpr[3] = (static_cast<std::int32_t>(ctx.gpr[12]) < 3 ? 1u : 0u);
    ctx.gpr[10] = (ctx.gpr[2] + ctx.gpr[8]);
    goto L_0887AE14;
L_0887AE14:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887AEB0;
      }
      goto L_0887AE1C;
    }
L_0887AE1C:
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[6]);
      if (branch_taken) {
          goto L_0887AEB0;
      }
      goto L_0887AE28;
    }
L_0887AE28:
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.gpr[14] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(4), ctx.gpr[13]);
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(8), ctx.gpr[14]);
    ctx.gpr[14] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(12), ctx.gpr[3]);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(16), ctx.gpr[13]);
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(20), ctx.gpr[14]);
    ctx.gpr[14] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(24), ctx.gpr[3]);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(28), ctx.gpr[13]);
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(32), ctx.gpr[14]);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(44)));
    ctx.gpr[12] = (ctx.gpr[12] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(36), ctx.gpr[3]);
    ctx.gpr[12] = (ctx.gpr[12] << 16u);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(40), ctx.gpr[13]);
    ctx.gpr[12] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[12]) >> 16u));
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    ctx.gpr[10] = (ctx.gpr[12] << 4u);
    ctx.gpr[2] = (ctx.gpr[10] + ctx.gpr[10]);
    ctx.gpr[2] = (ctx.gpr[10] + ctx.gpr[2]);
    ctx.gpr[2] = (ctx.gpr[11] + ctx.gpr[2]);
    ctx.gpr[3] = (static_cast<std::int32_t>(ctx.gpr[12]) < 3 ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[10] = (ctx.gpr[2] + ctx.gpr[8]);
      if (branch_taken) {
          goto L_0887AE14;
      }
      goto L_0887AEB0;
    }
L_0887AEB0:
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(0), 0u);
    goto L_0887AEB4;
L_0887AEB4:
    { const bool branch_taken = ctx.gpr[9] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887AC30;
      }
      goto L_0887AEBC;
    }
L_0887AEBC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887AEC4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] << 6u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2320));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887AF00;
      }
      goto L_0887AEF8;
    }
L_0887AEF8:
    ctx.gpr[31] = (0x0887AF00u);
    // nop
    goto L_0887AC1C;
L_0887AF00:
    ctx.gpr[5] = (2233u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[16] << 9u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4624));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4880));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887AF3C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x0887AF4Cu);
    // nop
    goto L_088798E8;
L_0887AF4C:
    ctx.gpr[31] = (0x0887AF54u);
    // nop
    goto L_08879C64;
L_0887AF54:
    ctx.gpr[31] = (0x0887AF5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 428u, 0x08986958u>(ctx, &aot_mem) && ctx.pc == 0x0887AF5Cu) goto L_0887AF5C;
    return;
L_0887AF5C:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[31] = (0x0887AF68u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8736));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 763u, 0x0883BDD0u>(ctx, &aot_mem) && ctx.pc == 0x0887AF68u) goto L_0887AF68;
    return;
L_0887AF68:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887AF74:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-560));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(548), ctx.gpr[17]);
    ctx.gpr[17] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(544), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[17] + static_cast<std::uint32_t>(3856));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(552), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887AFE8;
      }
      goto L_0887AF98;
    }
L_0887AF98:
    ctx.gpr[31] = (0x0887AFA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 201u, 0x08A4CCF8u>(ctx, &aot_mem) && ctx.pc == 0x0887AFA0u) goto L_0887AFA0;
    return;
L_0887AFA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(3856)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (0x0887AFC8u);
    ctx.gpr[11] = (ctx.gpr[17] | 0u);
    goto L_0887B1AC;
L_0887AFC8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (0x0887AFD4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08879CA0;
L_0887AFD4:
    ctx.gpr[31] = (0x0887AFDCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08879F60;
L_0887AFDC:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (0x0887AFE8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 465u, 0x08986CBCu>(ctx, &aot_mem) && ctx.pc == 0x0887AFE8u) goto L_0887AFE8;
    return;
L_0887AFE8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(544)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(548)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(552)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(560));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887AFFC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[3] = (2269u << 16u);
    ctx.gpr[2] = (ctx.gpr[3] + static_cast<std::uint32_t>(4240));
    ctx.gpr[14] = (ctx.gpr[2] | 0u);
    ctx.gpr[12] = (0u | 0u);
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[14] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    goto L_0887B018;
L_0887B018:
    { const bool branch_taken = ctx.gpr[13] == 0u;
    ctx.gpr[15] = (static_cast<std::int32_t>(ctx.gpr[12]) < 20 ? 1u : 0u);
      if (branch_taken) {
          goto L_0887B0F0;
      }
      goto L_0887B020;
    }
L_0887B020:
    { const bool branch_taken = ctx.gpr[15] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887B0F0;
      }
      goto L_0887B028;
    }
L_0887B028:
    { const bool branch_taken = ctx.gpr[13] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0887B0D8;
      }
      goto L_0887B030;
    }
L_0887B030:
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[14] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[13] != ctx.gpr[11];
    // nop
      if (branch_taken) {
          goto L_0887B0D8;
      }
      goto L_0887B03C;
    }
L_0887B03C:
    if (ctx.gpr[12] == 0u) {
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4240), ctx.gpr[4]);
        goto L_0887B0B8;
    }
    goto L_0887B044;
L_0887B044:
    ctx.gpr[13] = (ctx.gpr[12] + static_cast<std::uint32_t>(-1));
    ctx.gpr[12] = (ctx.gpr[13] << 5u);
    ctx.gpr[12] = (ctx.gpr[12] + ctx.gpr[2]);
    goto L_0887B050;
L_0887B050:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[13]) < 0;
    ctx.gpr[14] = (static_cast<std::int32_t>(ctx.gpr[13]) < 21 ? 1u : 0u);
      if (branch_taken) {
          goto L_0887B0B4;
      }
      goto L_0887B058;
    }
L_0887B058:
    { const bool branch_taken = ctx.gpr[14] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887B0B4;
      }
      goto L_0887B060;
    }
L_0887B060:
    ctx.gpr[14] = (aot_mem.aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[14] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887B0B4;
      }
      goto L_0887B06C;
    }
L_0887B06C:
    ctx.gpr[15] = (aot_mem.aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(32), ctx.gpr[14]);
    ctx.gpr[14] = (aot_mem.aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(36), ctx.gpr[15]);
    ctx.gpr[15] = (aot_mem.aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(40), ctx.gpr[14]);
    ctx.gpr[14] = (aot_mem.aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(44), ctx.gpr[15]);
    ctx.gpr[15] = (aot_mem.aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(48), ctx.gpr[14]);
    ctx.gpr[14] = (aot_mem.aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(52), ctx.gpr[15]);
    ctx.gpr[15] = (aot_mem.aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(56), ctx.gpr[14]);
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(60), ctx.gpr[15]);
    ctx.gpr[13] = (ctx.gpr[13] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[12] = (ctx.gpr[12] + static_cast<std::uint32_t>(-32));
      if (branch_taken) {
          goto L_0887B050;
      }
      goto L_0887B0B4;
    }
L_0887B0B4:
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4240), ctx.gpr[4]);
    goto L_0887B0B8;
L_0887B0B8:
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(12), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(16), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(20), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(24), ctx.gpr[10]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(28), ctx.gpr[11]);
      if (branch_taken) {
          goto L_0887B1A0;
      }
      goto L_0887B0D8;
    }
L_0887B0D8:
    ctx.gpr[12] = (ctx.gpr[12] + static_cast<std::uint32_t>(1));
    ctx.gpr[12] = (ctx.gpr[12] & 65535u);
    ctx.gpr[14] = (ctx.gpr[12] << 5u);
    ctx.gpr[14] = (ctx.gpr[14] + ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[14] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0887B018;
      }
      goto L_0887B0F0;
    }
L_0887B0F0:
    if (ctx.gpr[12] == 0u) {
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4240), ctx.gpr[4]);
        goto L_0887B184;
    }
    goto L_0887B0F8;
L_0887B0F8:
    ctx.gpr[13] = (ctx.gpr[12] | 0u);
    ctx.gpr[12] = (ctx.gpr[13] + static_cast<std::uint32_t>(-1));
    ctx.gpr[12] = (ctx.gpr[12] << 16u);
    ctx.gpr[14] = (0u | 20u);
    { const bool branch_taken = ctx.gpr[13] != ctx.gpr[14];
    ctx.gpr[12] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[12]) >> 16u));
      if (branch_taken) {
          goto L_0887B11C;
      }
      goto L_0887B110;
    }
L_0887B110:
    ctx.gpr[12] = (ctx.gpr[12] + static_cast<std::uint32_t>(-1));
    ctx.gpr[12] = (ctx.gpr[12] << 16u);
    ctx.gpr[12] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[12]) >> 16u));
    goto L_0887B11C;
L_0887B11C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[12]) < 0;
    ctx.gpr[13] = (ctx.gpr[2] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_0887B180;
      }
      goto L_0887B124;
    }
L_0887B124:
    ctx.gpr[14] = (ctx.gpr[12] << 5u);
    ctx.gpr[15] = (ctx.gpr[14] + ctx.gpr[2]);
    ctx.gpr[24] = (aot_mem.aot_load32(ctx.gpr[15] + static_cast<std::uint32_t>(0)));
    ctx.gpr[25] = (aot_mem.aot_load32(ctx.gpr[15] + static_cast<std::uint32_t>(4)));
    ctx.gpr[14] = (ctx.gpr[14] + ctx.gpr[13]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[15] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[14] + static_cast<std::uint32_t>(0), ctx.gpr[24]);
    ctx.gpr[24] = (aot_mem.aot_load32(ctx.gpr[15] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[14] + static_cast<std::uint32_t>(4), ctx.gpr[25]);
    ctx.gpr[25] = (aot_mem.aot_load32(ctx.gpr[15] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[14] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[15] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[14] + static_cast<std::uint32_t>(12), ctx.gpr[24]);
    ctx.gpr[24] = (aot_mem.aot_load32(ctx.gpr[15] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[14] + static_cast<std::uint32_t>(16), ctx.gpr[25]);
    ctx.gpr[15] = (aot_mem.aot_load32(ctx.gpr[15] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[14] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[12] = (ctx.gpr[12] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[14] + static_cast<std::uint32_t>(24), ctx.gpr[24]);
    ctx.gpr[12] = (ctx.gpr[12] << 16u);
    ctx.gpr[12] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[12]) >> 16u));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[12]) >= 0;
    aot_mem.aot_store32(ctx.gpr[14] + static_cast<std::uint32_t>(28), ctx.gpr[15]);
      if (branch_taken) {
          goto L_0887B124;
      }
      goto L_0887B180;
    }
L_0887B180:
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4240), ctx.gpr[4]);
    goto L_0887B184;
L_0887B184:
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(12), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(16), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(20), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(24), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(28), ctx.gpr[11]);
    goto L_0887B1A0;
L_0887B1A0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887B1AC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[9]);
    ctx.gpr[20] = (ctx.gpr[5] | 0u);
    ctx.gpr[21] = (ctx.gpr[11] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[10]);
      if (branch_taken) {
          goto L_0887B250;
      }
      goto L_0887B1F0;
    }
L_0887B1F0:
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(88), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2168));
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[5]);
    ctx.gpr[31] = (0x0887B214u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 806u, 0x08AEB698u>(ctx, &aot_mem) && ctx.pc == 0x0887B214u) goto L_0887B214;
    return;
L_0887B214:
    ctx.gpr[31] = (0x0887B21Cu);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 498u, 0x08AEDD14u>(ctx, &aot_mem) && ctx.pc == 0x0887B21Cu) goto L_0887B21C;
    return;
L_0887B21C:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(26));
    ctx.gpr[31] = (0x0887B22Cu);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 14u, 0x08A541B8u>(ctx, &aot_mem) && ctx.pc == 0x0887B22Cu) goto L_0887B22C;
    return;
L_0887B22C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887B258;
      }
      goto L_0887B248;
    }
L_0887B248:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887B274;
      }
      goto L_0887B250;
    }
L_0887B250:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[21] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
      if (branch_taken) {
          goto L_0887B4EC;
      }
      goto L_0887B258;
    }
L_0887B258:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887B258;
      }
      goto L_0887B274;
    }
L_0887B274:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[22] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_0887B4E0;
      }
      goto L_0887B288;
    }
L_0887B288:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(2));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[6]);
    goto L_0887B2A4;
L_0887B2A4:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (0u | 126u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[22]);
      if (branch_taken) {
          goto L_0887B484;
      }
      goto L_0887B2B8;
    }
L_0887B2B8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[5] = (0u | 49u);
    ctx.gpr[8] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[5];
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[22]);
      if (branch_taken) {
          goto L_0887B484;
      }
      goto L_0887B2CC;
    }
L_0887B2CC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[8] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[8] != ctx.gpr[4]) {
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[22]);
        goto L_0887B484;
    }
    goto L_0887B2DC;
L_0887B2DC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[8] = (ctx.gpr[4] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887B348;
      }
      goto L_0887B2EC;
    }
L_0887B2EC:
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0887B320;
      }
      goto L_0887B2F8;
    }
L_0887B2F8:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_0887B328;
      }
      goto L_0887B300;
    }
L_0887B300:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0887B330;
      }
      goto L_0887B308;
    }
L_0887B308:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_0887B338;
      }
      goto L_0887B310;
    }
L_0887B310:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_0887B340;
      }
      goto L_0887B318;
    }
L_0887B318:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
      if (branch_taken) {
          goto L_0887B34C;
      }
      goto L_0887B320;
    }
L_0887B320:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
      if (branch_taken) {
          goto L_0887B34C;
      }
      goto L_0887B328;
    }
L_0887B328:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
      if (branch_taken) {
          goto L_0887B34C;
      }
      goto L_0887B330;
    }
L_0887B330:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
      if (branch_taken) {
          goto L_0887B34C;
      }
      goto L_0887B338;
    }
L_0887B338:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
      if (branch_taken) {
          goto L_0887B34C;
      }
      goto L_0887B340;
    }
L_0887B340:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
      if (branch_taken) {
          goto L_0887B34C;
      }
      goto L_0887B348;
    }
L_0887B348:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    goto L_0887B34C;
L_0887B34C:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(6));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(3));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(6));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(6));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(3));
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] < ctx.gpr[20] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[30] = (ctx.gpr[22] < ctx.gpr[30] ? 1u : 0u);
      if (branch_taken) {
          goto L_0887B3AC;
      }
      goto L_0887B384;
    }
L_0887B384:
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[29] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(26)));
    ctx.gpr[6] = (ctx.gpr[19] + ctx.gpr[19]);
    ctx.gpr[6] = (ctx.gpr[21] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (ctx.gpr[4] < ctx.gpr[20] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0887B384;
      }
      goto L_0887B3AC;
    }
L_0887B3AC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(88), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[6] = (ctx.gpr[4] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
      if (branch_taken) {
          goto L_0887B464;
      }
      goto L_0887B3CC;
    }
L_0887B3CC:
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0887B40C;
      }
      goto L_0887B3D8;
    }
L_0887B3D8:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_0887B420;
      }
      goto L_0887B3E0;
    }
L_0887B3E0:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0887B434;
      }
      goto L_0887B3E8;
    }
L_0887B3E8:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_0887B448;
      }
      goto L_0887B3F0;
    }
L_0887B3F0:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_0887B45C;
      }
      goto L_0887B3F8;
    }
L_0887B3F8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[31] = (0x0887B404u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 806u, 0x08AEB698u>(ctx, &aot_mem) && ctx.pc == 0x0887B404u) goto L_0887B404;
    return;
L_0887B404:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887B464;
      }
      goto L_0887B40C;
    }
L_0887B40C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[31] = (0x0887B418u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 806u, 0x08AEB698u>(ctx, &aot_mem) && ctx.pc == 0x0887B418u) goto L_0887B418;
    return;
L_0887B418:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887B464;
      }
      goto L_0887B420;
    }
L_0887B420:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[31] = (0x0887B42Cu);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 806u, 0x08AEB698u>(ctx, &aot_mem) && ctx.pc == 0x0887B42Cu) goto L_0887B42C;
    return;
L_0887B42C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887B464;
      }
      goto L_0887B434;
    }
L_0887B434:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[31] = (0x0887B440u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 806u, 0x08AEB698u>(ctx, &aot_mem) && ctx.pc == 0x0887B440u) goto L_0887B440;
    return;
L_0887B440:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887B464;
      }
      goto L_0887B448;
    }
L_0887B448:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (0x0887B454u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 806u, 0x08AEB698u>(ctx, &aot_mem) && ctx.pc == 0x0887B454u) goto L_0887B454;
    return;
L_0887B454:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887B464;
      }
      goto L_0887B45C;
    }
L_0887B45C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887B464;
      }
      goto L_0887B464;
    }
L_0887B464:
    ctx.gpr[31] = (0x0887B46Cu);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 498u, 0x08AEDD14u>(ctx, &aot_mem) && ctx.pc == 0x0887B46Cu) goto L_0887B46C;
    return;
L_0887B46C:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(26));
    ctx.gpr[31] = (0x0887B47Cu);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 14u, 0x08A541B8u>(ctx, &aot_mem) && ctx.pc == 0x0887B47Cu) goto L_0887B47C;
    return;
L_0887B47C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887B4D8;
      }
      goto L_0887B484;
    }
L_0887B484:
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(2));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[9] = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[8] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[9]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(2));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[19]);
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[4]);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[30] = (ctx.gpr[22] < ctx.gpr[30] ? 1u : 0u);
    goto L_0887B4D8;
L_0887B4D8:
    { const bool branch_taken = ctx.gpr[30] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887B2A4;
      }
      goto L_0887B4E0;
    }
L_0887B4E0:
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[4]);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    goto L_0887B4EC;
L_0887B4EC:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887B510:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-560));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(528), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(536), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(540), ctx.gpr[19]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(532), ctx.gpr[17]);
    ctx.gpr[17] = (0u | 2u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(544), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(548), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(552), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(556), ctx.gpr[31]);
    ctx.gpr[31] = (0x0887B554u);
    ctx.gpr[6] = (0u | 512u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 376u, 0x08AED4ECu>(ctx, &aot_mem) && ctx.pc == 0x0887B554u) goto L_0887B554;
    return;
L_0887B554:
    ctx.gpr[4] = (0u | 67u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x0887B564u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x0887B564u) goto L_0887B564;
    return;
L_0887B564:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(130)));
    ctx.gpr[21] = (2227u << 16u);
    ctx.gpr[20] = (0u | 126u);
    ctx.gpr[6] = (ctx.gpr[5] < static_cast<std::uint32_t>(10) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24700)));
      if (branch_taken) {
          goto L_0887B638;
      }
      goto L_0887B580;
    }
L_0887B580:
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[1] = (2225u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[5]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-2104)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887B598:
    ctx.gpr[5] = (0u | 48u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(ctx.gpr[5]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0887B63C;
      }
      goto L_0887B5A8;
    }
L_0887B5A8:
    ctx.gpr[5] = (0u | 49u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(ctx.gpr[5]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0887B63C;
      }
      goto L_0887B5B8;
    }
L_0887B5B8:
    ctx.gpr[5] = (0u | 50u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(ctx.gpr[5]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0887B63C;
      }
      goto L_0887B5C8;
    }
L_0887B5C8:
    ctx.gpr[5] = (0u | 51u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(ctx.gpr[5]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0887B63C;
      }
      goto L_0887B5D8;
    }
L_0887B5D8:
    ctx.gpr[5] = (0u | 52u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(ctx.gpr[5]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0887B63C;
      }
      goto L_0887B5E8;
    }
L_0887B5E8:
    ctx.gpr[5] = (0u | 53u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(ctx.gpr[5]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0887B63C;
      }
      goto L_0887B5F8;
    }
L_0887B5F8:
    ctx.gpr[5] = (0u | 54u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(ctx.gpr[5]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0887B63C;
      }
      goto L_0887B608;
    }
L_0887B608:
    ctx.gpr[5] = (0u | 55u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(ctx.gpr[5]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0887B63C;
      }
      goto L_0887B618;
    }
L_0887B618:
    ctx.gpr[5] = (0u | 56u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(ctx.gpr[5]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0887B63C;
      }
      goto L_0887B628;
    }
L_0887B628:
    ctx.gpr[5] = (0u | 57u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(ctx.gpr[5]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0887B63C;
      }
      goto L_0887B638;
    }
L_0887B638:
    ctx.gpr[19] = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    goto L_0887B63C;
L_0887B63C:
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_0887B650;
      }
      goto L_0887B644;
    }
L_0887B644:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[20];
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0887B644;
      }
      goto L_0887B650;
    }
L_0887B650:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[20];
    ctx.gpr[19] = (0u | 1u);
      if (branch_taken) {
          goto L_0887B67C;
      }
      goto L_0887B65C;
    }
L_0887B65C:
    ctx.gpr[6] = (ctx.gpr[17] + ctx.gpr[17]);
    ctx.gpr[6] = (ctx.gpr[29] + ctx.gpr[6]);
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[20];
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0887B65C;
      }
      goto L_0887B67C;
    }
L_0887B67C:
    { const bool branch_taken = ctx.gpr[22] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887B6AC;
      }
      goto L_0887B684;
    }
L_0887B684:
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[31] = (0x0887B690u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x0887B690u) goto L_0887B690;
    return;
L_0887B690:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887B6A8;
      }
      goto L_0887B69C;
    }
L_0887B69C:
    ctx.gpr[31] = (0x0887B6A4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x0887B6A4u) goto L_0887B6A4;
    return;
L_0887B6A4:
    ctx.gpr[22] = (ctx.gpr[17] | 0u);
    goto L_0887B6A8;
L_0887B6A8:
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(24700), ctx.gpr[22]);
    goto L_0887B6AC;
L_0887B6AC:
    ctx.gpr[31] = (0x0887B6B4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 284u, 0x089130F4u>(ctx, &aot_mem) && ctx.pc == 0x0887B6B4u) goto L_0887B6B4;
    return;
L_0887B6B4:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x0887B6C0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x0887B6C0u) goto L_0887B6C0;
    return;
L_0887B6C0:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887B7C0;
      }
      goto L_0887B6CC;
    }
L_0887B6CC:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (0u | 79u);
      if (branch_taken) {
          goto L_0887B7C0;
      }
      goto L_0887B6D8;
    }
L_0887B6D8:
    ctx.gpr[6] = (0u | 83u);
    ctx.gpr[7] = (0u | 77u);
    ctx.gpr[8] = (0u | 227u);
    ctx.gpr[9] = (0u | 225u);
    ctx.gpr[10] = (0u | 224u);
    ctx.gpr[11] = (0u | 226u);
    goto L_0887B6F0;
L_0887B6F0:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_0887B728;
      }
      goto L_0887B6F8;
    }
L_0887B6F8:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887B720;
      }
      goto L_0887B708;
    }
L_0887B708:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(2));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[20];
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0887B6F8;
      }
      goto L_0887B718;
    }
L_0887B718:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887B728;
      }
      goto L_0887B720;
    }
L_0887B720:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_0887B7C4;
      }
      goto L_0887B728;
    }
L_0887B728:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(2));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-76));
    ctx.gpr[2] = (ctx.gpr[4] < static_cast<std::uint32_t>(13) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887B7AC;
      }
      goto L_0887B740;
    }
L_0887B740:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2225u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-2064)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887B758:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0887B7AC;
      }
      goto L_0887B764;
    }
L_0887B764:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0887B7AC;
      }
      goto L_0887B770;
    }
L_0887B770:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0887B7AC;
      }
      goto L_0887B77C;
    }
L_0887B77C:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[8]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0887B7AC;
      }
      goto L_0887B788;
    }
L_0887B788:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[9]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0887B7AC;
      }
      goto L_0887B794;
    }
L_0887B794:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[10]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0887B7AC;
      }
      goto L_0887B7A0;
    }
L_0887B7A0:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[11]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0887B7AC;
      }
      goto L_0887B7AC;
    }
L_0887B7AC:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(2));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(2));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887B6F0;
      }
      goto L_0887B7C0;
    }
L_0887B7C0:
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
    goto L_0887B7C4;
L_0887B7C4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(528)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(532)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(536)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(540)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(544)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(548)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(552)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(556)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(560));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887B7EC:
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(15596)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(15592)));
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
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(15600), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = ctx.fpr[16] / ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(15608), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[18] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(15604), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(15612), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(15616), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887B864:
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
L_0887B890:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    ctx.gpr[20] = (ctx.gpr[6] & 255u);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2736));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    ctx.gpr[31] = (0x0887B8D0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x0887B8D0u) goto L_0887B8D0;
    return;
L_0887B8D0:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29316)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 12 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0887B90C;
      }
      goto L_0887B8F0;
    }
L_0887B8F0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0887B904u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x0887B904u) goto L_0887B904;
    return;
L_0887B904:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_0887B910;
      }
      goto L_0887B90C;
    }
L_0887B90C:
    ctx.gpr[19] = (ctx.gpr[17] + ctx.gpr[19]);
    goto L_0887B910;
L_0887B910:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887B934;
      }
      goto L_0887B918;
    }
L_0887B918:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 7u);
    ctx.gpr[31] = (0x0887B92Cu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x0887B92Cu) goto L_0887B92C;
    return;
L_0887B92C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887B948;
      }
      goto L_0887B934;
    }
L_0887B934:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 5u);
    ctx.gpr[31] = (0x0887B948u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x0887B948u) goto L_0887B948;
    return;
L_0887B948:
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
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
L_0887B96C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(535)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0887BA68;
      }
      goto L_0887B994;
    }
L_0887B994:
    ctx.gpr[18] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-7028)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (2228u << 16u);
      if (branch_taken) {
          goto L_0887BA68;
      }
      goto L_0887B9A4;
    }
L_0887B9A4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-29316)));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    ctx.gpr[20] = (2230u << 16u);
      if (branch_taken) {
          goto L_0887BA68;
      }
      goto L_0887B9BC;
    }
L_0887B9BC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(-7828)));
    ctx.gpr[19] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[31] = (0x0887B9E4u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 371u, 0x089D6648u>(ctx, &aot_mem) && ctx.pc == 0x0887B9E4u) goto L_0887B9E4;
    return;
L_0887B9E4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887BA14;
      }
      goto L_0887B9EC;
    }
L_0887B9EC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(-7828)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[31] = (0x0887BA0Cu);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 375u, 0x089D666Cu>(ctx, &aot_mem) && ctx.pc == 0x0887BA0Cu) goto L_0887BA0C;
    return;
L_0887BA0C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887BA68;
      }
      goto L_0887BA14;
    }
L_0887BA14:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887BA3C;
      }
      goto L_0887BA24;
    }
L_0887BA24:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887BA24;
      }
      goto L_0887BA38;
    }
L_0887BA38:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(92), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_0887BA3C;
L_0887BA3C:
    ctx.gpr[31] = (0x0887BA44u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 645u, 0x08957F48u>(ctx, &aot_mem) && ctx.pc == 0x0887BA44u) goto L_0887BA44;
    return;
L_0887BA44:
    ctx.gpr[31] = (0x0887BA4Cu);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(520), 0u);
    goto L_08879994;
L_0887BA4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-29316)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-7028)));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(536), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(528), 0u);
    goto L_0887BA68;
L_0887BA68:
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
L_0887BA88:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (ctx.gpr[5] & 65535u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x0887BAA0u);
    ctx.gpr[16] = (ctx.gpr[6] & 65535u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x0887BAA0u) goto L_0887BAA0;
    return;
L_0887BAA0:
    ctx.gpr[5] = (ctx.gpr[16] < static_cast<std::uint32_t>(20) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_0887BBA4;
      }
      goto L_0887BAAC;
    }
L_0887BAAC:
    ctx.gpr[16] = (ctx.gpr[16] << 2u);
    ctx.gpr[1] = (2225u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[16]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-1816)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887BAC4:
    ctx.gpr[31] = (0x0887BACCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 648u, 0x08A96C60u>(ctx, &aot_mem) && ctx.pc == 0x0887BACCu) goto L_0887BACC;
    return;
L_0887BACC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887BBA8;
      }
      goto L_0887BAD4;
    }
L_0887BAD4:
    ctx.gpr[31] = (0x0887BADCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 652u, 0x08A96CA4u>(ctx, &aot_mem) && ctx.pc == 0x0887BADCu) goto L_0887BADC;
    return;
L_0887BADC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887BBA8;
      }
      goto L_0887BAE4;
    }
L_0887BAE4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(6))))));
      if (branch_taken) {
          goto L_0887BBA8;
      }
      goto L_0887BAEC;
    }
L_0887BAEC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8))))));
      if (branch_taken) {
          goto L_0887BBA8;
      }
      goto L_0887BAF4;
    }
L_0887BAF4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(10))))));
      if (branch_taken) {
          goto L_0887BBA8;
      }
      goto L_0887BAFC;
    }
L_0887BAFC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(12))))));
      if (branch_taken) {
          goto L_0887BBA8;
      }
      goto L_0887BB04;
    }
L_0887BB04:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(14))))));
      if (branch_taken) {
          goto L_0887BBA8;
      }
      goto L_0887BB0C;
    }
L_0887BB0C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(16))))));
      if (branch_taken) {
          goto L_0887BBA8;
      }
      goto L_0887BB14;
    }
L_0887BB14:
    ctx.gpr[31] = (0x0887BB1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 656u, 0x08A96CE8u>(ctx, &aot_mem) && ctx.pc == 0x0887BB1Cu) goto L_0887BB1C;
    return;
L_0887BB1C:
    ctx.gpr[2] = (ctx.gpr[2] << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 16u));
      if (branch_taken) {
          goto L_0887BBA8;
      }
      goto L_0887BB28;
    }
L_0887BB28:
    ctx.gpr[31] = (0x0887BB30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 660u, 0x08A96D0Cu>(ctx, &aot_mem) && ctx.pc == 0x0887BB30u) goto L_0887BB30;
    return;
L_0887BB30:
    ctx.gpr[2] = (ctx.gpr[2] << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 16u));
      if (branch_taken) {
          goto L_0887BBA8;
      }
      goto L_0887BB3C;
    }
L_0887BB3C:
    ctx.gpr[31] = (0x0887BB44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 664u, 0x08A96D30u>(ctx, &aot_mem) && ctx.pc == 0x0887BB44u) goto L_0887BB44;
    return;
L_0887BB44:
    ctx.gpr[2] = (ctx.gpr[2] << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 16u));
      if (branch_taken) {
          goto L_0887BBA8;
      }
      goto L_0887BB50;
    }
L_0887BB50:
    ctx.gpr[31] = (0x0887BB58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 668u, 0x08A96D54u>(ctx, &aot_mem) && ctx.pc == 0x0887BB58u) goto L_0887BB58;
    return;
L_0887BB58:
    ctx.gpr[2] = (ctx.gpr[2] << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 16u));
      if (branch_taken) {
          goto L_0887BBA8;
      }
      goto L_0887BB64;
    }
L_0887BB64:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(34))))));
      if (branch_taken) {
          goto L_0887BBA8;
      }
      goto L_0887BB6C;
    }
L_0887BB6C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(36))))));
      if (branch_taken) {
          goto L_0887BBA8;
      }
      goto L_0887BB74;
    }
L_0887BB74:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(38))))));
      if (branch_taken) {
          goto L_0887BBA8;
      }
      goto L_0887BB7C;
    }
L_0887BB7C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(40))))));
      if (branch_taken) {
          goto L_0887BBA8;
      }
      goto L_0887BB84;
    }
L_0887BB84:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(42))))));
      if (branch_taken) {
          goto L_0887BBA8;
      }
      goto L_0887BB8C;
    }
L_0887BB8C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(44))))));
      if (branch_taken) {
          goto L_0887BBA8;
      }
      goto L_0887BB94;
    }
L_0887BB94:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(46))))));
      if (branch_taken) {
          goto L_0887BBA8;
      }
      goto L_0887BB9C;
    }
L_0887BB9C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(48))))));
      if (branch_taken) {
          goto L_0887BBA8;
      }
      goto L_0887BBA4;
    }
L_0887BBA4:
    ctx.gpr[2] = (0u | 0u);
    goto L_0887BBA8;
L_0887BBA8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887BBB8:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0887BBD8;
      }
      goto L_0887BBC4;
    }
L_0887BBC4:
    ctx.gpr[4] = (0u | 46u);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0887BBE0;
      }
      goto L_0887BBD0;
    }
L_0887BBD0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887BC1C;
      }
      goto L_0887BBD8;
    }
L_0887BBD8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0887BC60;
      }
      goto L_0887BBE0;
    }
L_0887BBE0:
    ctx.gpr[4] = (ctx.gpr[5] < static_cast<std::uint32_t>(46) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887BC14;
      }
      goto L_0887BBEC;
    }
L_0887BBEC:
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[1] = (2225u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[5]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-1736)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887BC04:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0887BC60;
      }
      goto L_0887BC0C;
    }
L_0887BC0C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0887BC60;
      }
      goto L_0887BC14;
    }
L_0887BC14:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887BC5C;
      }
      goto L_0887BC1C;
    }
L_0887BC1C:
    ctx.gpr[4] = (0u | 47u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0887BC5C;
      }
      goto L_0887BC28;
    }
L_0887BC28:
    ctx.gpr[4] = (ctx.gpr[5] < static_cast<std::uint32_t>(46) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887BC5C;
      }
      goto L_0887BC34;
    }
L_0887BC34:
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[1] = (2225u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[5]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-1552)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887BC4C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0887BC60;
      }
      goto L_0887BC54;
    }
L_0887BC54:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0887BC60;
      }
      goto L_0887BC5C;
    }
L_0887BC5C:
    ctx.gpr[2] = (0u | 0u);
    goto L_0887BC60;
L_0887BC60:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887BC68:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[17] = (2228u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-29316)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0887BCE0;
      }
      goto L_0887BCB8;
    }
L_0887BCB8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0887BCE0;
      }
      goto L_0887BCC8;
    }
L_0887BCC8:
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[20] < ctx.gpr[18] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0887BCF4;
      }
      goto L_0887BCD8;
    }
L_0887BCD8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887BD60;
      }
      goto L_0887BCE0;
    }
L_0887BCE0:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x0887BCECu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2008));
    goto L_0887B864;
L_0887BCEC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0887BD64;
      }
      goto L_0887BCF4;
    }
L_0887BCF4:
    ctx.gpr[4] = (ctx.gpr[20] < static_cast<std::uint32_t>(8) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887BD1C;
      }
      goto L_0887BD00;
    }
L_0887BD00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-29316)));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[31] = (0x0887BD14u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x0887BD14u) goto L_0887BD14;
    return;
L_0887BD14:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887BD50;
      }
      goto L_0887BD1C;
    }
L_0887BD1C:
    ctx.gpr[31] = (0x0887BD24u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 18u, 0x08958114u>(ctx, &aot_mem) && ctx.pc == 0x0887BD24u) goto L_0887BD24;
    return;
L_0887BD24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-29316)));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[19];
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
      if (branch_taken) {
          goto L_0887BD44;
      }
      goto L_0887BD30;
    }
L_0887BD30:
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0887BD3Cu);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x0887BD3Cu) goto L_0887BD3C;
    return;
L_0887BD3C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887BD50;
      }
      goto L_0887BD44;
    }
L_0887BD44:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0887BD50u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 376u, 0x08AED4ECu>(ctx, &aot_mem) && ctx.pc == 0x0887BD50u) goto L_0887BD50;
    return;
L_0887BD50:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[20] < ctx.gpr[18] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0887BCF4;
      }
      goto L_0887BD60;
    }
L_0887BD60:
    ctx.gpr[2] = (0u | 1u);
    goto L_0887BD64;
L_0887BD64:
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
L_0887BD84:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[14]));
    ctx.gpr[4] = (16128u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[31]);
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_0887BDBC;
      }
      goto L_0887BDAC;
    }
L_0887BDAC:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[14];
    { const bool branch_taken = 0u == 0u;
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
      if (branch_taken) {
          goto L_0887BDC8;
      }
      goto L_0887BDBC;
    }
L_0887BDBC:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    goto L_0887BDC8;
L_0887BDC8:
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887BDE8;
      }
      goto L_0887BDD8;
    }
L_0887BDD8:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[14] = ctx.fpr[22] + ctx.fpr[15];
    { const bool branch_taken = 0u == 0u;
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
      if (branch_taken) {
          goto L_0887BDF4;
      }
      goto L_0887BDE8;
    }
L_0887BDE8:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[13] = ctx.fpr[22] + ctx.fpr[13];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    goto L_0887BDF4;
L_0887BDF4:
    ctx.gpr[4] = (49864u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[16] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
      if (branch_taken) {
          goto L_0887BE3C;
      }
      goto L_0887BE10;
    }
L_0887BE10:
    ctx.gpr[31] = (0x0887BE18u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 448u, 0x088C2E78u>(ctx, &aot_mem) && ctx.pc == 0x0887BE18u) goto L_0887BE18;
    return;
L_0887BE18:
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[14] = ctx.fpr[0] + ctx.fpr[12];
    ctx.fpr[20] = ctx.fpr[20] - ctx.fpr[13];
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[22];
      if (branch_taken) {
          goto L_0887BE48;
      }
      goto L_0887BE3C;
    }
L_0887BE3C:
    ctx.fpr[20] = ctx.fpr[20] - ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[12] = ctx.fpr[17] - ctx.fpr[22];
    goto L_0887BE48;
L_0887BE48:
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[6] = (0u | 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[31] = (0x0887BE70u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 149u, 0x0892D6B4u>(ctx, &aot_mem) && ctx.pc == 0x0887BE70u) goto L_0887BE70;
    return;
L_0887BE70:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887BE88:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    ctx.fpr[2] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[1] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[0] = ctx.fpr[12] + ctx.fpr[2];
    ctx.fpr[3] = ctx.fpr[13] + ctx.fpr[1];
    ctx.fpr[4] = ctx.fpr[2] + ctx.fpr[16];
    ctx.gpr[5] = (16128u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[2] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    ctx.fpr[3] = ctx.fpr[1] + ctx.fpr[17];
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    { const float fs = ctx.fpr[4]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[1] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[16]);
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.set_fpu_condition((ctx.fpr[1] < ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[31]);
    { const bool branch_taken = !ctx.fpu_condition();
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[3] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[3] = fs * ft; }
      if (branch_taken) {
          goto L_0887BEEC;
      }
      goto L_0887BEE4;
    }
L_0887BEE4:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[1]));
      if (branch_taken) {
          goto L_0887BF00;
      }
      goto L_0887BEEC;
    }
L_0887BEEC:
    ctx.set_fpu_condition((ctx.fpr[1] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887BF00;
      }
      goto L_0887BEFC;
    }
L_0887BEFC:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    goto L_0887BF00;
L_0887BF00:
    ctx.set_fpu_condition((ctx.fpr[3] < ctx.fpr[2]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887BF18;
      }
      goto L_0887BF10;
    }
L_0887BF10:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[2] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[3]));
      if (branch_taken) {
          goto L_0887BF2C;
      }
      goto L_0887BF18;
    }
L_0887BF18:
    ctx.set_fpu_condition((ctx.fpr[3] <= ctx.fpr[2]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[16] = ctx.fpr[16] + ctx.fpr[18];
        goto L_0887BF30;
    }
    goto L_0887BF28;
L_0887BF28:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[3]));
    goto L_0887BF2C;
L_0887BF2C:
    ctx.fpr[16] = ctx.fpr[16] + ctx.fpr[18];
    goto L_0887BF30;
L_0887BF30:
    ctx.fpr[17] = ctx.fpr[17] + ctx.fpr[19];
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[16] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
      if (branch_taken) {
          goto L_0887BF50;
      }
      goto L_0887BF48;
    }
L_0887BF48:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
      if (branch_taken) {
          goto L_0887BF64;
      }
      goto L_0887BF50;
    }
L_0887BF50:
    ctx.set_fpu_condition((ctx.fpr[16] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887BF64;
      }
      goto L_0887BF60;
    }
L_0887BF60:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    goto L_0887BF64;
L_0887BF64:
    ctx.set_fpu_condition((ctx.fpr[17] < ctx.fpr[2]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887BF7C;
      }
      goto L_0887BF74;
    }
L_0887BF74:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[2] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
      if (branch_taken) {
          goto L_0887BF90;
      }
      goto L_0887BF7C;
    }
L_0887BF7C:
    ctx.set_fpu_condition((ctx.fpr[17] <= ctx.fpr[22]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[18];
        goto L_0887BF94;
    }
    goto L_0887BF8C;
L_0887BF8C:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    goto L_0887BF90;
L_0887BF90:
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[18];
    goto L_0887BF94;
L_0887BF94:
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[19];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
      if (branch_taken) {
          goto L_0887BFB4;
      }
      goto L_0887BFAC;
    }
L_0887BFAC:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0887BFC8;
      }
      goto L_0887BFB4;
    }
L_0887BFB4:
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887BFC8;
      }
      goto L_0887BFC4;
    }
L_0887BFC4:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0887BFC8;
L_0887BFC8:
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[2]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887BFE0;
      }
      goto L_0887BFD8;
    }
L_0887BFD8:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[2] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_0887BFF4;
      }
      goto L_0887BFE0;
    }
L_0887BFE0:
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[22]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[0];
        goto L_0887BFF8;
    }
    goto L_0887BFF0;
L_0887BFF0:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_0887BFF4;
L_0887BFF4:
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[0];
    goto L_0887BFF8;
L_0887BFF8:
    ctx.gpr[4] = (49864u << 16u);
    ctx.fpr[13] = ctx.fpr[22] + ctx.fpr[2];
    ctx.pc = 0x0887C000u; return;
}

void recomp_unit_0029(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0029_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_29(Runtime &runtime) {
    runtime.register_generated_unit(29u, 0x08878000u, 16384u, &recomp_unit_0029, &recomp_unit_0029_entry);
    runtime.register_function(0x08878000u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887802Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887803Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088780D0u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088780E0u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088780ECu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088780F4u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088780FCu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878128u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878164u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887817Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878190u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887819Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088781ACu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088781BCu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088781DCu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088781ECu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088781F8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887820Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887821Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878224u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878238u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878240u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878248u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878258u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878274u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878288u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088782A8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088782B0u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088782B8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088782BCu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088782D0u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088782E4u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088782F4u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878300u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878338u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878348u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878350u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878360u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878368u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878374u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887837Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878390u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878398u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887839Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088783A8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088783B4u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088783C4u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088783D4u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088783D8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088783F0u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088783FCu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887840Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878410u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878418u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878428u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878430u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878458u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887846Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878474u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887847Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878488u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878498u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088784ACu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088784BCu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088784C8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088784D0u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088784D8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088784ECu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088784F0u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088784F4u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878504u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878554u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878634u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878650u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878664u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887867Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878690u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887869Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088786A4u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088786A8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088786B4u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088786C0u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088786CCu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088786DCu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088786E4u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088786F4u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878700u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878710u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878720u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878728u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887873Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878758u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878788u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088787A8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088787BCu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088787C4u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088787D0u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088787D8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088787E0u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088787E8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088787F0u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088787F8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887880Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878814u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878820u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878828u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878830u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878838u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878840u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878848u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887885Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878870u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088788A4u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088788C0u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088788D8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088788E4u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088788ECu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878900u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878914u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878920u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878938u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878944u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088789D4u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088789E0u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088789FCu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878A0Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878A40u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878A54u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878A78u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878AB4u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878AC8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878B00u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878B10u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878B1Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878B2Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878B34u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878B40u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878B48u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878B60u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878B88u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878B94u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878BB0u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878BBCu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878BCCu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878C04u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878C0Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878C20u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878C40u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878C54u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878CB0u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878CDCu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878CF4u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878D0Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878D24u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878D44u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878D5Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878D70u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878D84u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878D98u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878DACu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878DB8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878DC0u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878DCCu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878DDCu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878DE4u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878DF4u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878E04u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878E10u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878E20u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878E2Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878E30u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878E38u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878E88u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878E90u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878EA0u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878EB4u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878EC8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878EF8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878F10u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878F20u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878F50u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878F58u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878F64u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878F70u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878F84u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878F8Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878FA8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878FB0u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878FCCu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878FD4u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878FDCu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878FE8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879004u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887900Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887903Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879048u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879054u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887905Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879064u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879070u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879078u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879080u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879088u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879098u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088790B0u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088790B8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088790BCu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088790DCu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088790FCu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879118u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879134u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879148u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879150u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887915Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088791E4u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088791F0u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879204u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879210u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879230u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879248u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879250u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887925Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088792E0u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088792F8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879320u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887932Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887934Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879360u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879390u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887939Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088793A4u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088793B0u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088793C4u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088793F0u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088793FCu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879404u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879410u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887942Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879464u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887946Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879474u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879484u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887948Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088794A4u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088794B8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088794C0u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879508u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887954Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879568u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088795A4u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088795B8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088795C0u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088795C8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879624u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879648u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879690u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879698u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088796A0u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088796E8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887972Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879750u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879788u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879790u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879798u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088797B0u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088797BCu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879844u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879878u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088798CCu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088798E8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088798F4u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879908u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879938u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879950u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887995Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887998Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879994u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088799A0u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088799D0u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088799D8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088799E4u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088799F8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879A28u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879A40u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879A48u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879A80u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879A88u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879A90u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879AECu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879B10u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879B2Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879B64u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879B6Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879B74u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879B90u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879B98u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879BB4u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879BC8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879BD0u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879C24u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879C48u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879C64u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879C70u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879C98u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879CA0u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879CACu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879CB4u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879CC8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879CD0u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879CD8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879CECu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879CFCu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879D10u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879D28u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879D30u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879D44u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879D50u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879D5Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879D70u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879DA0u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879DA8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879DD8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879DE0u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879DFCu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879E24u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879E30u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879E50u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879E58u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879E60u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879E6Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879E88u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879E90u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879EA0u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879EB0u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879EB8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879EC0u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879ED8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879EF0u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879EFCu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879F08u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879F14u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879F20u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879F2Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879F38u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879F44u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879F58u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879F60u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879F8Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879F94u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879FA0u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879FA8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879FC8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879FD8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879FE4u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879FF8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A004u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A010u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A028u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A038u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A050u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A064u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A098u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A0A0u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A0CCu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A0D4u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A0E8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A0FCu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A124u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A130u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A150u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A178u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A1ECu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A1F4u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A1FCu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A210u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A218u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A230u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A244u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A24Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A290u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A2C8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A2F8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A374u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A37Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A384u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A3CCu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A410u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A440u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A4B4u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A4BCu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A4C4u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A4DCu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A4E8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A570u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A5A4u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A5F8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A628u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A698u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A6A0u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A6A8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A728u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A79Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A7A4u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A7ACu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A7CCu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A7D4u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A7F0u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A804u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A80Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A850u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A880u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A8C0u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A8CCu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A8D4u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A8DCu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A93Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A95Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A990u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A9A0u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A9A8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A9C0u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A9C8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A9D4u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A9DCu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A9E4u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A9F8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887AA00u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887AA08u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887AA10u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887AA18u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887AA28u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887AA30u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887AA38u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887AA40u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887AA54u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887AA5Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887AA68u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887AAECu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887AB04u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887AB24u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887AB2Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887AB54u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887AB5Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887AB68u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887ABECu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887ABF0u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887ABF8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887AC1Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887AC30u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887AC44u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887AC4Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887AC54u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887AC7Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887AC84u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887AC90u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887AC98u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887ACA0u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887ACB4u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887ACBCu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887ACC4u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887ACCCu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887ACD4u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887ACE8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887ACFCu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887AD04u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887AD0Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887AD1Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887AD34u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887AD3Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887AD48u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887ADD0u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887ADE0u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887AE14u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887AE1Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887AE28u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887AEB0u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887AEB4u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887AEBCu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887AEC4u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887AEF8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887AF00u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887AF3Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887AF4Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887AF54u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887AF5Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887AF68u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887AF74u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887AF98u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887AFA0u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887AFC8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887AFD4u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887AFDCu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887AFE8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887AFFCu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B018u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B020u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B028u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B030u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B03Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B044u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B050u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B058u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B060u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B06Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B0B4u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B0B8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B0D8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B0F0u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B0F8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B110u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B11Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B124u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B180u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B184u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B1A0u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B1ACu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B1F0u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B214u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B21Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B22Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B248u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B250u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B258u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B274u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B288u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B2A4u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B2B8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B2CCu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B2DCu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B2ECu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B2F8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B300u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B308u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B310u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B318u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B320u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B328u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B330u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B338u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B340u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B348u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B34Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B384u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B3ACu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B3CCu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B3D8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B3E0u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B3E8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B3F0u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B3F8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B404u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B40Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B418u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B420u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B42Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B434u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B440u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B448u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B454u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B45Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B464u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B46Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B47Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B484u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B4D8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B4E0u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B4ECu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B510u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B554u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B564u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B580u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B598u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B5A8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B5B8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B5C8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B5D8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B5E8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B5F8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B608u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B618u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B628u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B638u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B63Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B644u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B650u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B65Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B67Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B684u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B690u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B69Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B6A4u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B6A8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B6ACu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B6B4u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B6C0u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B6CCu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B6D8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B6F0u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B6F8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B708u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B718u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B720u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B728u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B740u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B758u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B764u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B770u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B77Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B788u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B794u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B7A0u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B7ACu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B7C0u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B7C4u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B7ECu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B864u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B890u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B8D0u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B8F0u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B904u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B90Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B910u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B918u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B92Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B934u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B948u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B96Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B994u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B9A4u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B9BCu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B9E4u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B9ECu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BA0Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BA14u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BA24u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BA38u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BA3Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BA44u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BA4Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BA68u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BA88u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BAA0u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BAACu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BAC4u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BACCu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BAD4u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BADCu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BAE4u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BAECu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BAF4u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BAFCu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BB04u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BB0Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BB14u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BB1Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BB28u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BB30u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BB3Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BB44u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BB50u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BB58u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BB64u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BB6Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BB74u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BB7Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BB84u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BB8Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BB94u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BB9Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BBA4u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BBA8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BBB8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BBC4u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BBD0u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BBD8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BBE0u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BBECu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BC04u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BC0Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BC14u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BC1Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BC28u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BC34u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BC4Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BC54u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BC5Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BC60u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BC68u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BCB8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BCC8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BCD8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BCE0u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BCECu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BCF4u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BD00u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BD14u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BD1Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BD24u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BD30u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BD3Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BD44u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BD50u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BD60u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BD64u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BD84u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BDACu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BDBCu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BDC8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BDD8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BDE8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BDF4u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BE10u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BE18u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BE3Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BE48u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BE70u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BE88u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BEE4u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BEECu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BEFCu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BF00u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BF10u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BF18u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BF28u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BF2Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BF30u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BF48u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BF50u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BF60u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BF64u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BF74u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BF7Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BF8Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BF90u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BF94u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BFACu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BFB4u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BFC4u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BFC8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BFD8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BFE0u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BFF0u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BFF4u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887BFF8u, &recomp_unit_0029, "recomp_unit_0029");
}
} // namespace psprecomp
