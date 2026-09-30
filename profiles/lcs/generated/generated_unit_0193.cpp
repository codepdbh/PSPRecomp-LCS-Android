#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0193[4095] = {
    1, 0, 0, 0, 0, 0, 0, 0, 2, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 5, 0, 6, 0, 7, 0, 8, 0, 9,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 11, 0, 12, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 15, 0, 16,
    17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 20, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 25, 0, 0,
    0, 0, 0, 26, 0, 0, 27, 0, 0, 28, 0, 29, 0, 0, 30, 0, 0, 0, 31, 0, 0, 32, 0, 0, 0, 0, 0, 33, 0, 0, 34, 0,
    0, 35, 0, 36, 0, 0, 37, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 45, 46, 0, 0, 0, 47, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0,
    0, 0, 0, 50, 0, 0, 51, 0, 0, 52, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 54, 55, 0, 0, 0, 0, 0, 56, 0, 0,
    57, 0, 58, 0, 0, 59, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 61, 0, 0, 62, 0, 63, 64, 0, 0, 0, 0, 65, 0, 0, 0, 0,
    0, 0, 0, 66, 0, 0, 67, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 70, 0, 71, 0, 72, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 74, 0, 75, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0,
    81, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 85, 0, 0, 0, 86, 0, 0, 0, 87, 88,
    0, 89, 90, 0, 0, 0, 0, 91, 0, 0, 92, 0, 0, 0, 93, 0, 0, 0, 94, 95, 0, 96, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 98, 0, 99, 0, 0, 0, 0, 0, 0, 0, 100, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0,
    0, 103, 0, 0, 104, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 107, 0, 0, 0, 0, 0, 108, 0, 0, 0, 109,
    0, 0, 0, 0, 0, 0, 110, 0, 0, 111, 0, 112, 113, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 117, 0, 118, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 120, 0, 0, 0, 0, 121,
    0, 0, 0, 122, 0, 0, 123, 0, 0, 124, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 127, 0, 0,
    0, 128, 0, 129, 0, 0, 0, 0, 130, 0, 0, 0, 0, 131, 0, 0, 0, 132, 0, 0, 133, 0, 0, 134, 0, 0, 0, 0, 0, 135, 0, 0,
    0, 0, 0, 0, 0, 0, 136, 137, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 142, 143, 0, 144, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 146, 0, 147, 0, 148, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0,
    0, 0, 152, 0, 0, 0, 0, 153, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 156, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 159, 0, 160, 0, 0, 0, 161, 0, 0, 162,
    0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 164, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 167, 0, 0, 0, 0,
    0, 0, 168, 0, 169, 0, 0, 170, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 172, 0, 173, 0, 0, 0, 0, 0, 0, 174, 0, 175, 0,
    0, 0, 176, 0, 0, 177, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0,
    181, 0, 0, 0, 182, 0, 0, 183, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0,
    0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 188, 0, 189, 0, 0, 0, 0, 0, 0, 190, 0, 191, 0, 0, 192, 0, 0, 193, 0, 0, 0, 0,
    0, 0, 194, 0, 195, 0, 196, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0,
    200, 0, 201, 0, 0, 0, 0, 0, 0, 202, 0, 203, 0, 204, 0, 0, 205, 0, 0, 0, 206, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 208,
    0, 0, 209, 0, 210, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 214, 0,
    0, 0, 215, 0, 0, 0, 216, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 218, 0, 219, 0, 220, 0, 221, 0, 222, 223, 0, 224, 0, 0, 0,
    0, 0, 0, 225, 0, 0, 0, 0, 226, 0, 0, 227, 0, 0, 228, 0, 229, 0, 0, 0, 0, 230, 0, 231, 0, 0, 0, 0, 0, 0, 232, 0,
    0, 0, 233, 0, 0, 234, 0, 235, 236, 0, 0, 0, 237, 0, 0, 0, 0, 238, 0, 239, 0, 240, 0, 0, 241, 0, 0, 0, 242, 0, 0, 243,
    0, 244, 245, 0, 0, 246, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 249, 0, 0, 250, 0, 0, 251, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 254, 0,
    0, 0, 0, 255, 0, 0, 256, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 258, 0, 0, 0, 0, 259, 0, 0, 260, 0, 0, 261, 0, 262, 0,
    0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 265, 0, 0, 266, 0, 267, 0, 0, 0, 0, 268, 0, 0, 0, 0, 269,
    0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 272, 0, 0, 273, 0, 274, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0,
    276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 278, 0, 0, 0, 0, 0, 0, 279, 0, 0, 280, 0, 0, 0, 0, 281,
    0, 0, 282, 0, 283, 284, 0, 285, 0, 286, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 289, 0,
    290, 0, 0, 0, 291, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 294, 0, 0, 0, 295, 296, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 298, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 300, 0, 0, 0, 0, 301, 0, 0, 0, 302, 0, 0, 303, 0, 0, 0, 0, 304, 0,
    0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 307, 0, 308, 0, 0, 0, 309, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 311, 0, 312, 0, 0, 0, 313, 0, 314, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 317, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    319, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0,
    0, 0, 0, 0, 324, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 330, 0,
    0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 335, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 337, 338,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 342, 343, 0, 0,
    0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0, 348,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 351, 352, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0,
    0, 0, 0, 355, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0,
    0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 362, 363,
    0, 364, 0, 0, 365, 0, 366, 0, 0, 0, 0, 367, 368, 0, 0, 0, 0, 369, 0, 0, 0, 0, 370, 371, 0, 372, 0, 0, 373, 374, 0, 375,
    0, 376, 0, 377, 0, 378, 0, 379, 380, 0, 381, 382, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 383, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 384, 0, 0, 0, 385, 386, 0, 0, 0, 387, 0, 0, 0, 388, 0, 0, 389, 0, 390, 0, 0, 0,
    0, 391, 0, 0, 0, 0, 392, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 394, 0, 0, 0, 395, 396, 0, 0, 0, 397, 0, 0, 0, 398, 0, 0, 399, 0, 400, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 401,
    0, 0, 0, 402, 0, 0, 403, 0, 0, 0, 0, 0, 0, 404, 0, 405, 406, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 407, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 408, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 409, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 410, 0, 0, 0, 411, 0, 412, 0, 0, 0, 0, 0, 0, 0, 0, 413, 0, 414, 0, 0, 0, 415, 0, 0, 0, 0, 0, 416,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 417, 0, 0, 0, 0, 0, 0, 0, 418, 0, 0, 0, 0, 0, 0, 0, 0, 0, 419, 0, 0, 0, 0,
    0, 0, 0, 0, 420, 0, 0, 0, 0, 0, 0, 421, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 422, 0, 0, 0, 0, 0, 0, 0, 423, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 424, 0, 425, 426, 0, 0, 0, 0, 0, 0, 0, 427, 0, 0, 0, 0, 0,
    0, 0, 428, 0, 0, 0, 0, 429, 0, 0, 430, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 431, 0, 0, 432, 0, 0, 0, 433, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 434, 0, 0, 0, 0, 0, 0, 0, 435, 0, 0, 0, 0, 0, 0, 436, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    437, 0, 0, 0, 0, 0, 0, 0, 438, 0, 0, 0, 0, 0, 0, 0, 0, 0, 439, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 440,
    441, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 442, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 443, 0, 0, 0, 0, 0, 0, 0, 0, 0, 444, 0, 0, 0, 0, 445, 0, 0, 0, 0, 0, 0, 0, 446, 0,
    0, 0, 447, 0, 0, 0, 448, 0, 449, 0, 0, 0, 0, 0, 0, 0, 0, 450, 0, 0, 0, 0, 451, 0, 0, 0, 0, 452, 0, 453, 0, 0,
    0, 454, 0, 0, 0, 0, 455, 0, 0, 0, 456, 0, 0, 457, 0, 0, 0, 0, 0, 458, 0, 0, 0, 0, 0, 459, 0, 0, 0, 460, 0, 0,
    0, 461, 0, 462, 0, 0, 0, 0, 0, 0, 0, 463, 0, 464, 0, 0, 0, 0, 0, 0, 0, 0, 0, 465, 0, 0, 0, 0, 0, 466, 0, 467,
    0, 0, 0, 468, 469, 0, 470, 0, 471, 0, 472, 473, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 474, 0,
    0, 0, 0, 0, 0, 475, 0, 476, 0, 0, 0, 0, 477, 0, 0, 478, 0, 0, 0, 479, 0, 480, 0, 0, 481, 0, 0, 0, 0, 0, 482, 0,
    483, 0, 484, 0, 0, 485, 0, 0, 0, 486, 0, 0, 0, 0, 0, 487, 0, 0, 488, 0, 0, 489, 0, 490, 0, 0, 491, 0, 0, 0, 0, 0,
    0, 0, 492, 0, 0, 0, 0, 0, 493, 0, 494, 0, 495, 0, 496, 497, 0, 0, 0, 0, 0, 0, 498, 0, 499, 0, 0, 0, 0, 0, 500, 0,
    0, 501, 502, 0, 503, 0, 504, 0, 0, 0, 0, 0, 505, 0, 0, 0, 506, 0, 0, 0, 0, 507, 0, 0, 508, 0, 0, 0, 0, 0, 0, 509,
    0, 0, 510, 0, 511, 512, 0, 0, 513, 0, 0, 514, 0, 0, 0, 0, 515, 0, 0, 0, 0, 516, 517, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 518, 0, 519, 0, 0, 0, 0, 520, 521, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 522, 0, 523, 0, 0, 0,
    0, 524, 525, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 526, 0, 527, 0, 528, 0, 0, 0, 529, 0, 0, 530, 0, 0, 0, 531,
    0, 0, 532, 0, 0, 533, 0, 534, 0, 0, 535, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 536, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    537, 0, 0, 0, 0, 0, 0, 0, 538, 0, 0, 0, 539, 0, 0, 540, 0, 541, 0, 0, 0, 542, 0, 543, 0, 544, 0, 545, 0, 546, 0, 547,
    0, 548, 0, 549, 0, 550, 0, 551, 0, 552, 0, 553, 0, 554, 0, 555, 0, 556, 0, 557, 0, 558, 0, 559, 0, 560, 0, 561, 0, 562, 0, 563,
    0, 564, 0, 565, 0, 566, 0, 567, 0, 568, 0, 569, 0, 570, 0, 571, 0, 572, 0, 573, 0, 574, 0, 575, 0, 576, 0, 577, 0, 578, 0, 579,
    0, 580, 0, 581, 0, 582, 0, 583, 0, 584, 0, 585, 0, 586, 0, 587, 0, 588, 0, 589, 0, 590, 0, 591, 0, 592, 0, 593, 0, 594, 0, 595,
    0, 596, 0, 597, 0, 598, 0, 599, 0, 600, 0, 601, 0, 602, 0, 603, 0, 604, 0, 605, 0, 606, 0, 607, 0, 608, 0, 609, 0, 610, 0, 611,
    0, 612, 0, 613, 0, 614, 0, 615, 0, 616, 0, 617, 0, 618, 0, 619, 0, 620, 0, 621, 0, 622, 0, 623, 0, 624, 0, 625, 0, 626, 0, 627,
    0, 628, 0, 629, 0, 630, 0, 631, 0, 632, 0, 633, 0, 634, 0, 0, 0, 0, 0, 635, 0, 636, 0, 637, 0, 638, 0, 639, 0, 640, 0, 641,
    0, 642, 0, 643, 0, 644, 0, 645, 0, 646, 0, 647, 0, 648, 0, 649, 0, 650, 0, 651, 0, 652, 0, 653, 0, 654, 0, 655, 0, 656, 0, 657,
    0, 658, 0, 0, 0, 0, 0, 659, 0, 660, 0, 661, 0, 0, 0, 0, 0, 662, 0, 0, 0, 663, 0, 0, 0, 664, 0, 0, 0, 665, 0, 666,
    0, 667, 0, 0, 0, 668, 0, 669, 0, 670, 0, 671, 0, 672, 0, 673, 0, 674, 0, 0, 0, 0, 0, 0, 0, 675, 0, 0, 0, 676, 0, 677,
    0, 678, 0, 679, 0, 680, 0, 681, 0, 0, 0, 682, 0, 0, 0, 683, 0, 0, 0, 684, 0, 685, 0, 686, 0, 687, 0, 688, 0, 689, 0, 690,
    0, 691, 0, 692, 0, 693, 0, 694, 0, 695, 0, 696, 0, 697, 0, 698, 0, 699, 0, 700, 0, 701, 0, 702, 0, 703, 0, 704, 0, 705, 0, 706,
    0, 707, 0, 708, 0, 709, 0, 710, 0, 711, 0, 712, 0, 713, 0, 714, 0, 715, 0, 716, 0, 717, 0, 718, 0, 719, 0, 720, 0, 721, 0, 0,
    0, 722, 0, 723, 0, 724, 0, 725, 0, 726, 0, 727, 0, 728, 0, 729, 0, 730, 0, 731, 0, 732, 0, 733, 0, 734, 0, 735, 0, 736, 0, 737,
    0, 738, 0, 739, 0, 740, 0, 741, 0, 742, 0, 743, 0, 744, 0, 745, 0, 0, 0, 746, 0, 747, 0, 748, 0, 749, 0, 750, 0, 751, 0, 752,
    0, 753, 0, 754, 0, 755, 0, 756, 0, 757, 0, 758, 0, 759, 0, 0, 760, 0, 0, 0, 761, 0, 762, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 763, 764, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 765, 0, 0, 0, 0, 0, 766, 0, 0, 0, 767, 768, 0, 0, 0, 0, 0, 769, 0, 0, 0, 0, 770, 0, 0, 0, 0, 0, 771,
};
void recomp_unit_0193_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08B08000u;
        entry_id = (entry_delta < 16380u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0193[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08B08000;
    case 2u: goto L_08B08020;
    case 3u: goto L_08B08028;
    case 4u: goto L_08B08054;
    case 5u: goto L_08B0805C;
    case 6u: goto L_08B08064;
    case 7u: goto L_08B0806C;
    case 8u: goto L_08B08074;
    case 9u: goto L_08B0807C;
    case 10u: goto L_08B080A8;
    case 11u: goto L_08B080B0;
    case 12u: goto L_08B080B8;
    case 13u: goto L_08B080C0;
    case 14u: goto L_08B080EC;
    case 15u: goto L_08B080F4;
    case 16u: goto L_08B080FC;
    case 17u: goto L_08B08100;
    case 18u: goto L_08B08130;
    case 19u: goto L_08B08160;
    case 20u: goto L_08B0816C;
    case 21u: goto L_08B081C0;
    case 22u: goto L_08B081D4;
    case 23u: goto L_08B081EC;
    case 24u: goto L_08B08264;
    case 25u: goto L_08B08274;
    case 26u: goto L_08B0828C;
    case 27u: goto L_08B08298;
    case 28u: goto L_08B082A4;
    case 29u: goto L_08B082AC;
    case 30u: goto L_08B082B8;
    case 31u: goto L_08B082C8;
    case 32u: goto L_08B082D4;
    case 33u: goto L_08B082EC;
    case 34u: goto L_08B082F8;
    case 35u: goto L_08B08304;
    case 36u: goto L_08B0830C;
    case 37u: goto L_08B08318;
    case 38u: goto L_08B08330;
    case 39u: goto L_08B08344;
    case 40u: goto L_08B08364;
    case 41u: goto L_08B08398;
    case 42u: goto L_08B083B0;
    case 43u: goto L_08B083C8;
    case 44u: goto L_08B083F4;
    case 45u: goto L_08B08420;
    case 46u: goto L_08B08424;
    case 47u: goto L_08B08434;
    case 48u: goto L_08B08448;
    case 49u: goto L_08B08468;
    case 50u: goto L_08B0848C;
    case 51u: goto L_08B08498;
    case 52u: goto L_08B084A4;
    case 53u: goto L_08B084B8;
    case 54u: goto L_08B084D8;
    case 55u: goto L_08B084DC;
    case 56u: goto L_08B084F4;
    case 57u: goto L_08B08500;
    case 58u: goto L_08B08508;
    case 59u: goto L_08B08514;
    case 60u: goto L_08B08524;
    case 61u: goto L_08B08540;
    case 62u: goto L_08B0854C;
    case 63u: goto L_08B08554;
    case 64u: goto L_08B08558;
    case 65u: goto L_08B0856C;
    case 66u: goto L_08B0858C;
    case 67u: goto L_08B08598;
    case 68u: goto L_08B085AC;
    case 69u: goto L_08B085C4;
    case 70u: goto L_08B085DC;
    case 71u: goto L_08B085E4;
    case 72u: goto L_08B085EC;
    case 73u: goto L_08B08624;
    case 74u: goto L_08B08628;
    case 75u: goto L_08B08630;
    case 76u: goto L_08B0864C;
    case 77u: goto L_08B08668;
    case 78u: goto L_08B08698;
    case 79u: goto L_08B086C8;
    case 80u: goto L_08B086E8;
    case 81u: goto L_08B08700;
    case 82u: goto L_08B0870C;
    case 83u: goto L_08B08818;
    case 84u: goto L_08B0884C;
    case 85u: goto L_08B08858;
    case 86u: goto L_08B08868;
    case 87u: goto L_08B08878;
    case 88u: goto L_08B0887C;
    case 89u: goto L_08B08884;
    case 90u: goto L_08B08888;
    case 91u: goto L_08B0889C;
    case 92u: goto L_08B088A8;
    case 93u: goto L_08B088B8;
    case 94u: goto L_08B088C8;
    case 95u: goto L_08B088CC;
    case 96u: goto L_08B088D4;
    case 97u: goto L_08B088D8;
    case 98u: goto L_08B08904;
    case 99u: goto L_08B0890C;
    case 100u: goto L_08B0892C;
    case 101u: goto L_08B08930;
    case 102u: goto L_08B08964;
    case 103u: goto L_08B08984;
    case 104u: goto L_08B08990;
    case 105u: goto L_08B089A4;
    case 106u: goto L_08B089D0;
    case 107u: goto L_08B089D4;
    case 108u: goto L_08B089EC;
    case 109u: goto L_08B089FC;
    case 110u: goto L_08B08A18;
    case 111u: goto L_08B08A24;
    case 112u: goto L_08B08A2C;
    case 113u: goto L_08B08A30;
    case 114u: goto L_08B08A54;
    case 115u: goto L_08B08A78;
    case 116u: goto L_08B08AA4;
    case 117u: goto L_08B08AAC;
    case 118u: goto L_08B08AB4;
    case 119u: goto L_08B08AD4;
    case 120u: goto L_08B08AE8;
    case 121u: goto L_08B08AFC;
    case 122u: goto L_08B08B0C;
    case 123u: goto L_08B08B18;
    case 124u: goto L_08B08B24;
    case 125u: goto L_08B08B3C;
    case 126u: goto L_08B08B5C;
    case 127u: goto L_08B08B74;
    case 128u: goto L_08B08B84;
    case 129u: goto L_08B08B8C;
    case 130u: goto L_08B08BA0;
    case 131u: goto L_08B08BB4;
    case 132u: goto L_08B08BC4;
    case 133u: goto L_08B08BD0;
    case 134u: goto L_08B08BDC;
    case 135u: goto L_08B08BF4;
    case 136u: goto L_08B08C18;
    case 137u: goto L_08B08C1C;
    case 138u: goto L_08B08C38;
    case 139u: goto L_08B08C60;
    case 140u: goto L_08B08C9C;
    case 141u: goto L_08B08CBC;
    case 142u: goto L_08B08CC8;
    case 143u: goto L_08B08CCC;
    case 144u: goto L_08B08CD4;
    case 145u: goto L_08B08CDC;
    case 146u: goto L_08B08D04;
    case 147u: goto L_08B08D0C;
    case 148u: goto L_08B08D14;
    case 149u: goto L_08B08D30;
    case 150u: goto L_08B08D44;
    case 151u: goto L_08B08D6C;
    case 152u: goto L_08B08D88;
    case 153u: goto L_08B08D9C;
    case 154u: goto L_08B08DAC;
    case 155u: goto L_08B08DCC;
    case 156u: goto L_08B08E08;
    case 157u: goto L_08B08E14;
    case 158u: goto L_08B08E3C;
    case 159u: goto L_08B08E58;
    case 160u: goto L_08B08E60;
    case 161u: goto L_08B08E70;
    case 162u: goto L_08B08E7C;
    case 163u: goto L_08B08EA0;
    case 164u: goto L_08B08EAC;
    case 165u: goto L_08B08EBC;
    case 166u: goto L_08B08EE4;
    case 167u: goto L_08B08EEC;
    case 168u: goto L_08B08F08;
    case 169u: goto L_08B08F10;
    case 170u: goto L_08B08F1C;
    case 171u: goto L_08B08F30;
    case 172u: goto L_08B08F4C;
    case 173u: goto L_08B08F54;
    case 174u: goto L_08B08F70;
    case 175u: goto L_08B08F78;
    case 176u: goto L_08B08F88;
    case 177u: goto L_08B08F94;
    case 178u: goto L_08B08FA4;
    case 179u: goto L_08B08FD4;
    case 180u: goto L_08B08FF8;
    case 181u: goto L_08B09000;
    case 182u: goto L_08B09010;
    case 183u: goto L_08B0901C;
    case 184u: goto L_08B09028;
    case 185u: goto L_08B09050;
    case 186u: goto L_08B09078;
    case 187u: goto L_08B0908C;
    case 188u: goto L_08B090A8;
    case 189u: goto L_08B090B0;
    case 190u: goto L_08B090CC;
    case 191u: goto L_08B090D4;
    case 192u: goto L_08B090E0;
    case 193u: goto L_08B090EC;
    case 194u: goto L_08B09108;
    case 195u: goto L_08B09110;
    case 196u: goto L_08B09118;
    case 197u: goto L_08B09128;
    case 198u: goto L_08B09150;
    case 199u: goto L_08B09164;
    case 200u: goto L_08B09180;
    case 201u: goto L_08B09188;
    case 202u: goto L_08B091A4;
    case 203u: goto L_08B091AC;
    case 204u: goto L_08B091B4;
    case 205u: goto L_08B091C0;
    case 206u: goto L_08B091D0;
    case 207u: goto L_08B091DC;
    case 208u: goto L_08B091FC;
    case 209u: goto L_08B09208;
    case 210u: goto L_08B09210;
    case 211u: goto L_08B09218;
    case 212u: goto L_08B0923C;
    case 213u: goto L_08B0926C;
    case 214u: goto L_08B09278;
    case 215u: goto L_08B09288;
    case 216u: goto L_08B09298;
    case 217u: goto L_08B092A8;
    case 218u: goto L_08B092C4;
    case 219u: goto L_08B092CC;
    case 220u: goto L_08B092D4;
    case 221u: goto L_08B092DC;
    case 222u: goto L_08B092E4;
    case 223u: goto L_08B092E8;
    case 224u: goto L_08B092F0;
    case 225u: goto L_08B0930C;
    case 226u: goto L_08B09320;
    case 227u: goto L_08B0932C;
    case 228u: goto L_08B09338;
    case 229u: goto L_08B09340;
    case 230u: goto L_08B09354;
    case 231u: goto L_08B0935C;
    case 232u: goto L_08B09378;
    case 233u: goto L_08B09388;
    case 234u: goto L_08B09394;
    case 235u: goto L_08B0939C;
    case 236u: goto L_08B093A0;
    case 237u: goto L_08B093B0;
    case 238u: goto L_08B093C4;
    case 239u: goto L_08B093CC;
    case 240u: goto L_08B093D4;
    case 241u: goto L_08B093E0;
    case 242u: goto L_08B093F0;
    case 243u: goto L_08B093FC;
    case 244u: goto L_08B09404;
    case 245u: goto L_08B09408;
    case 246u: goto L_08B09414;
    case 247u: goto L_08B09424;
    case 248u: goto L_08B09448;
    case 249u: goto L_08B09458;
    case 250u: goto L_08B09464;
    case 251u: goto L_08B09470;
    case 252u: goto L_08B094C8;
    case 253u: goto L_08B094E4;
    case 254u: goto L_08B094F8;
    case 255u: goto L_08B0950C;
    case 256u: goto L_08B09518;
    case 257u: goto L_08B09534;
    case 258u: goto L_08B09544;
    case 259u: goto L_08B09558;
    case 260u: goto L_08B09564;
    case 261u: goto L_08B09570;
    case 262u: goto L_08B09578;
    case 263u: goto L_08B0958C;
    case 264u: goto L_08B095A8;
    case 265u: goto L_08B095C0;
    case 266u: goto L_08B095CC;
    case 267u: goto L_08B095D4;
    case 268u: goto L_08B095E8;
    case 269u: goto L_08B095FC;
    case 270u: goto L_08B09608;
    case 271u: goto L_08B09630;
    case 272u: goto L_08B09638;
    case 273u: goto L_08B09644;
    case 274u: goto L_08B0964C;
    case 275u: goto L_08B09660;
    case 276u: goto L_08B09680;
    case 277u: goto L_08B096B8;
    case 278u: goto L_08B096C0;
    case 279u: goto L_08B096DC;
    case 280u: goto L_08B096E8;
    case 281u: goto L_08B096FC;
    case 282u: goto L_08B09708;
    case 283u: goto L_08B09710;
    case 284u: goto L_08B09714;
    case 285u: goto L_08B0971C;
    case 286u: goto L_08B09724;
    case 287u: goto L_08B09738;
    case 288u: goto L_08B0976C;
    case 289u: goto L_08B09778;
    case 290u: goto L_08B09780;
    case 291u: goto L_08B09790;
    case 292u: goto L_08B097A8;
    case 293u: goto L_08B097C0;
    case 294u: goto L_08B097D4;
    case 295u: goto L_08B097E4;
    case 296u: goto L_08B097E8;
    case 297u: goto L_08B09824;
    case 298u: goto L_08B09888;
    case 299u: goto L_08B098A0;
    case 300u: goto L_08B098B4;
    case 301u: goto L_08B098C8;
    case 302u: goto L_08B098D8;
    case 303u: goto L_08B098E4;
    case 304u: goto L_08B098F8;
    case 305u: goto L_08B09904;
    case 306u: goto L_08B09928;
    case 307u: goto L_08B09934;
    case 308u: goto L_08B0993C;
    case 309u: goto L_08B0994C;
    case 310u: goto L_08B09960;
    case 311u: goto L_08B0998C;
    case 312u: goto L_08B09994;
    case 313u: goto L_08B099A4;
    case 314u: goto L_08B099AC;
    case 315u: goto L_08B099C0;
    case 316u: goto L_08B099E0;
    case 317u: goto L_08B09A18;
    case 318u: goto L_08B09A20;
    case 319u: goto L_08B09B80;
    case 320u: goto L_08B09B84;
    case 321u: goto L_08B09BB0;
    case 322u: goto L_08B09BD4;
    case 323u: goto L_08B09BEC;
    case 324u: goto L_08B09C10;
    case 325u: goto L_08B09C1C;
    case 326u: goto L_08B09C44;
    case 327u: goto L_08B09DA4;
    case 328u: goto L_08B09DB8;
    case 329u: goto L_08B09DDC;
    case 330u: goto L_08B09DF8;
    case 331u: goto L_08B09E18;
    case 332u: goto L_08B09E40;
    case 333u: goto L_08B09E68;
    case 334u: goto L_08B09EB0;
    case 335u: goto L_08B09ECC;
    case 336u: goto L_08B09ED4;
    case 337u: goto L_08B09EF8;
    case 338u: goto L_08B09EFC;
    case 339u: goto L_08B0A030;
    case 340u: goto L_08B0A0B4;
    case 341u: goto L_08B0A0E0;
    case 342u: goto L_08B0A1F0;
    case 343u: goto L_08B0A1F4;
    case 344u: goto L_08B0A208;
    case 345u: goto L_08B0A22C;
    case 346u: goto L_08B0A248;
    case 347u: goto L_08B0A258;
    case 348u: goto L_08B0A27C;
    case 349u: goto L_08B0A2F8;
    case 350u: goto L_08B0A324;
    case 351u: goto L_08B0A434;
    case 352u: goto L_08B0A438;
    case 353u: goto L_08B0A44C;
    case 354u: goto L_08B0A470;
    case 355u: goto L_08B0A48C;
    case 356u: goto L_08B0A4A4;
    case 357u: goto L_08B0A4C8;
    case 358u: goto L_08B0A4F4;
    case 359u: goto L_08B0A518;
    case 360u: goto L_08B0A53C;
    case 361u: goto L_08B0A568;
    case 362u: goto L_08B0A578;
    case 363u: goto L_08B0A57C;
    case 364u: goto L_08B0A584;
    case 365u: goto L_08B0A590;
    case 366u: goto L_08B0A598;
    case 367u: goto L_08B0A5AC;
    case 368u: goto L_08B0A5B0;
    case 369u: goto L_08B0A5C4;
    case 370u: goto L_08B0A5D8;
    case 371u: goto L_08B0A5DC;
    case 372u: goto L_08B0A5E4;
    case 373u: goto L_08B0A5F0;
    case 374u: goto L_08B0A5F4;
    case 375u: goto L_08B0A5FC;
    case 376u: goto L_08B0A604;
    case 377u: goto L_08B0A60C;
    case 378u: goto L_08B0A614;
    case 379u: goto L_08B0A61C;
    case 380u: goto L_08B0A620;
    case 381u: goto L_08B0A628;
    case 382u: goto L_08B0A62C;
    case 383u: goto L_08B0A660;
    case 384u: goto L_08B0A6A8;
    case 385u: goto L_08B0A6B8;
    case 386u: goto L_08B0A6BC;
    case 387u: goto L_08B0A6CC;
    case 388u: goto L_08B0A6DC;
    case 389u: goto L_08B0A6E8;
    case 390u: goto L_08B0A6F0;
    case 391u: goto L_08B0A704;
    case 392u: goto L_08B0A718;
    case 393u: goto L_08B0A744;
    case 394u: goto L_08B0A784;
    case 395u: goto L_08B0A794;
    case 396u: goto L_08B0A798;
    case 397u: goto L_08B0A7A8;
    case 398u: goto L_08B0A7B8;
    case 399u: goto L_08B0A7C4;
    case 400u: goto L_08B0A7CC;
    case 401u: goto L_08B0A7FC;
    case 402u: goto L_08B0A80C;
    case 403u: goto L_08B0A818;
    case 404u: goto L_08B0A834;
    case 405u: goto L_08B0A83C;
    case 406u: goto L_08B0A840;
    case 407u: goto L_08B0A870;
    case 408u: goto L_08B0A8C4;
    case 409u: goto L_08B0A92C;
    case 410u: goto L_08B0AA10;
    case 411u: goto L_08B0AA20;
    case 412u: goto L_08B0AA28;
    case 413u: goto L_08B0AA4C;
    case 414u: goto L_08B0AA54;
    case 415u: goto L_08B0AA64;
    case 416u: goto L_08B0AA7C;
    case 417u: goto L_08B0AAA4;
    case 418u: goto L_08B0AAC4;
    case 419u: goto L_08B0AAEC;
    case 420u: goto L_08B0AB10;
    case 421u: goto L_08B0AB2C;
    case 422u: goto L_08B0ABAC;
    case 423u: goto L_08B0ABCC;
    case 424u: goto L_08B0AC3C;
    case 425u: goto L_08B0AC44;
    case 426u: goto L_08B0AC48;
    case 427u: goto L_08B0AC68;
    case 428u: goto L_08B0AC88;
    case 429u: goto L_08B0AC9C;
    case 430u: goto L_08B0ACA8;
    case 431u: goto L_08B0ACD8;
    case 432u: goto L_08B0ACE4;
    case 433u: goto L_08B0ACF4;
    case 434u: goto L_08B0AD1C;
    case 435u: goto L_08B0AD3C;
    case 436u: goto L_08B0AD58;
    case 437u: goto L_08B0AD80;
    case 438u: goto L_08B0ADA0;
    case 439u: goto L_08B0ADC8;
    case 440u: goto L_08B0AE7C;
    case 441u: goto L_08B0AE80;
    case 442u: goto L_08B0AEB0;
    case 443u: goto L_08B0AF1C;
    case 444u: goto L_08B0AF44;
    case 445u: goto L_08B0AF58;
    case 446u: goto L_08B0AF78;
    case 447u: goto L_08B0AF88;
    case 448u: goto L_08B0AF98;
    case 449u: goto L_08B0AFA0;
    case 450u: goto L_08B0AFC4;
    case 451u: goto L_08B0AFD8;
    case 452u: goto L_08B0AFEC;
    case 453u: goto L_08B0AFF4;
    case 454u: goto L_08B0B004;
    case 455u: goto L_08B0B018;
    case 456u: goto L_08B0B028;
    case 457u: goto L_08B0B034;
    case 458u: goto L_08B0B04C;
    case 459u: goto L_08B0B064;
    case 460u: goto L_08B0B074;
    case 461u: goto L_08B0B084;
    case 462u: goto L_08B0B08C;
    case 463u: goto L_08B0B0AC;
    case 464u: goto L_08B0B0B4;
    case 465u: goto L_08B0B0DC;
    case 466u: goto L_08B0B0F4;
    case 467u: goto L_08B0B0FC;
    case 468u: goto L_08B0B10C;
    case 469u: goto L_08B0B110;
    case 470u: goto L_08B0B118;
    case 471u: goto L_08B0B120;
    case 472u: goto L_08B0B128;
    case 473u: goto L_08B0B12C;
    case 474u: goto L_08B0B178;
    case 475u: goto L_08B0B194;
    case 476u: goto L_08B0B19C;
    case 477u: goto L_08B0B1B0;
    case 478u: goto L_08B0B1BC;
    case 479u: goto L_08B0B1CC;
    case 480u: goto L_08B0B1D4;
    case 481u: goto L_08B0B1E0;
    case 482u: goto L_08B0B1F8;
    case 483u: goto L_08B0B200;
    case 484u: goto L_08B0B208;
    case 485u: goto L_08B0B214;
    case 486u: goto L_08B0B224;
    case 487u: goto L_08B0B23C;
    case 488u: goto L_08B0B248;
    case 489u: goto L_08B0B254;
    case 490u: goto L_08B0B25C;
    case 491u: goto L_08B0B268;
    case 492u: goto L_08B0B288;
    case 493u: goto L_08B0B2A0;
    case 494u: goto L_08B0B2A8;
    case 495u: goto L_08B0B2B0;
    case 496u: goto L_08B0B2B8;
    case 497u: goto L_08B0B2BC;
    case 498u: goto L_08B0B2D8;
    case 499u: goto L_08B0B2E0;
    case 500u: goto L_08B0B2F8;
    case 501u: goto L_08B0B304;
    case 502u: goto L_08B0B308;
    case 503u: goto L_08B0B310;
    case 504u: goto L_08B0B318;
    case 505u: goto L_08B0B330;
    case 506u: goto L_08B0B340;
    case 507u: goto L_08B0B354;
    case 508u: goto L_08B0B360;
    case 509u: goto L_08B0B37C;
    case 510u: goto L_08B0B388;
    case 511u: goto L_08B0B390;
    case 512u: goto L_08B0B394;
    case 513u: goto L_08B0B3A0;
    case 514u: goto L_08B0B3AC;
    case 515u: goto L_08B0B3C0;
    case 516u: goto L_08B0B3D4;
    case 517u: goto L_08B0B3D8;
    case 518u: goto L_08B0B410;
    case 519u: goto L_08B0B418;
    case 520u: goto L_08B0B42C;
    case 521u: goto L_08B0B430;
    case 522u: goto L_08B0B468;
    case 523u: goto L_08B0B470;
    case 524u: goto L_08B0B484;
    case 525u: goto L_08B0B488;
    case 526u: goto L_08B0B4C0;
    case 527u: goto L_08B0B4C8;
    case 528u: goto L_08B0B4D0;
    case 529u: goto L_08B0B4E0;
    case 530u: goto L_08B0B4EC;
    case 531u: goto L_08B0B4FC;
    case 532u: goto L_08B0B508;
    case 533u: goto L_08B0B514;
    case 534u: goto L_08B0B51C;
    case 535u: goto L_08B0B528;
    case 536u: goto L_08B0B558;
    case 537u: goto L_08B0B580;
    case 538u: goto L_08B0B5A0;
    case 539u: goto L_08B0B5B0;
    case 540u: goto L_08B0B5BC;
    case 541u: goto L_08B0B5C4;
    case 542u: goto L_08B0B5D4;
    case 543u: goto L_08B0B5DC;
    case 544u: goto L_08B0B5E4;
    case 545u: goto L_08B0B5EC;
    case 546u: goto L_08B0B5F4;
    case 547u: goto L_08B0B5FC;
    case 548u: goto L_08B0B604;
    case 549u: goto L_08B0B60C;
    case 550u: goto L_08B0B614;
    case 551u: goto L_08B0B61C;
    case 552u: goto L_08B0B624;
    case 553u: goto L_08B0B62C;
    case 554u: goto L_08B0B634;
    case 555u: goto L_08B0B63C;
    case 556u: goto L_08B0B644;
    case 557u: goto L_08B0B64C;
    case 558u: goto L_08B0B654;
    case 559u: goto L_08B0B65C;
    case 560u: goto L_08B0B664;
    case 561u: goto L_08B0B66C;
    case 562u: goto L_08B0B674;
    case 563u: goto L_08B0B67C;
    case 564u: goto L_08B0B684;
    case 565u: goto L_08B0B68C;
    case 566u: goto L_08B0B694;
    case 567u: goto L_08B0B69C;
    case 568u: goto L_08B0B6A4;
    case 569u: goto L_08B0B6AC;
    case 570u: goto L_08B0B6B4;
    case 571u: goto L_08B0B6BC;
    case 572u: goto L_08B0B6C4;
    case 573u: goto L_08B0B6CC;
    case 574u: goto L_08B0B6D4;
    case 575u: goto L_08B0B6DC;
    case 576u: goto L_08B0B6E4;
    case 577u: goto L_08B0B6EC;
    case 578u: goto L_08B0B6F4;
    case 579u: goto L_08B0B6FC;
    case 580u: goto L_08B0B704;
    case 581u: goto L_08B0B70C;
    case 582u: goto L_08B0B714;
    case 583u: goto L_08B0B71C;
    case 584u: goto L_08B0B724;
    case 585u: goto L_08B0B72C;
    case 586u: goto L_08B0B734;
    case 587u: goto L_08B0B73C;
    case 588u: goto L_08B0B744;
    case 589u: goto L_08B0B74C;
    case 590u: goto L_08B0B754;
    case 591u: goto L_08B0B75C;
    case 592u: goto L_08B0B764;
    case 593u: goto L_08B0B76C;
    case 594u: goto L_08B0B774;
    case 595u: goto L_08B0B77C;
    case 596u: goto L_08B0B784;
    case 597u: goto L_08B0B78C;
    case 598u: goto L_08B0B794;
    case 599u: goto L_08B0B79C;
    case 600u: goto L_08B0B7A4;
    case 601u: goto L_08B0B7AC;
    case 602u: goto L_08B0B7B4;
    case 603u: goto L_08B0B7BC;
    case 604u: goto L_08B0B7C4;
    case 605u: goto L_08B0B7CC;
    case 606u: goto L_08B0B7D4;
    case 607u: goto L_08B0B7DC;
    case 608u: goto L_08B0B7E4;
    case 609u: goto L_08B0B7EC;
    case 610u: goto L_08B0B7F4;
    case 611u: goto L_08B0B7FC;
    case 612u: goto L_08B0B804;
    case 613u: goto L_08B0B80C;
    case 614u: goto L_08B0B814;
    case 615u: goto L_08B0B81C;
    case 616u: goto L_08B0B824;
    case 617u: goto L_08B0B82C;
    case 618u: goto L_08B0B834;
    case 619u: goto L_08B0B83C;
    case 620u: goto L_08B0B844;
    case 621u: goto L_08B0B84C;
    case 622u: goto L_08B0B854;
    case 623u: goto L_08B0B85C;
    case 624u: goto L_08B0B864;
    case 625u: goto L_08B0B86C;
    case 626u: goto L_08B0B874;
    case 627u: goto L_08B0B87C;
    case 628u: goto L_08B0B884;
    case 629u: goto L_08B0B88C;
    case 630u: goto L_08B0B894;
    case 631u: goto L_08B0B89C;
    case 632u: goto L_08B0B8A4;
    case 633u: goto L_08B0B8AC;
    case 634u: goto L_08B0B8B4;
    case 635u: goto L_08B0B8CC;
    case 636u: goto L_08B0B8D4;
    case 637u: goto L_08B0B8DC;
    case 638u: goto L_08B0B8E4;
    case 639u: goto L_08B0B8EC;
    case 640u: goto L_08B0B8F4;
    case 641u: goto L_08B0B8FC;
    case 642u: goto L_08B0B904;
    case 643u: goto L_08B0B90C;
    case 644u: goto L_08B0B914;
    case 645u: goto L_08B0B91C;
    case 646u: goto L_08B0B924;
    case 647u: goto L_08B0B92C;
    case 648u: goto L_08B0B934;
    case 649u: goto L_08B0B93C;
    case 650u: goto L_08B0B944;
    case 651u: goto L_08B0B94C;
    case 652u: goto L_08B0B954;
    case 653u: goto L_08B0B95C;
    case 654u: goto L_08B0B964;
    case 655u: goto L_08B0B96C;
    case 656u: goto L_08B0B974;
    case 657u: goto L_08B0B97C;
    case 658u: goto L_08B0B984;
    case 659u: goto L_08B0B99C;
    case 660u: goto L_08B0B9A4;
    case 661u: goto L_08B0B9AC;
    case 662u: goto L_08B0B9C4;
    case 663u: goto L_08B0B9D4;
    case 664u: goto L_08B0B9E4;
    case 665u: goto L_08B0B9F4;
    case 666u: goto L_08B0B9FC;
    case 667u: goto L_08B0BA04;
    case 668u: goto L_08B0BA14;
    case 669u: goto L_08B0BA1C;
    case 670u: goto L_08B0BA24;
    case 671u: goto L_08B0BA2C;
    case 672u: goto L_08B0BA34;
    case 673u: goto L_08B0BA3C;
    case 674u: goto L_08B0BA44;
    case 675u: goto L_08B0BA64;
    case 676u: goto L_08B0BA74;
    case 677u: goto L_08B0BA7C;
    case 678u: goto L_08B0BA84;
    case 679u: goto L_08B0BA8C;
    case 680u: goto L_08B0BA94;
    case 681u: goto L_08B0BA9C;
    case 682u: goto L_08B0BAAC;
    case 683u: goto L_08B0BABC;
    case 684u: goto L_08B0BACC;
    case 685u: goto L_08B0BAD4;
    case 686u: goto L_08B0BADC;
    case 687u: goto L_08B0BAE4;
    case 688u: goto L_08B0BAEC;
    case 689u: goto L_08B0BAF4;
    case 690u: goto L_08B0BAFC;
    case 691u: goto L_08B0BB04;
    case 692u: goto L_08B0BB0C;
    case 693u: goto L_08B0BB14;
    case 694u: goto L_08B0BB1C;
    case 695u: goto L_08B0BB24;
    case 696u: goto L_08B0BB2C;
    case 697u: goto L_08B0BB34;
    case 698u: goto L_08B0BB3C;
    case 699u: goto L_08B0BB44;
    case 700u: goto L_08B0BB4C;
    case 701u: goto L_08B0BB54;
    case 702u: goto L_08B0BB5C;
    case 703u: goto L_08B0BB64;
    case 704u: goto L_08B0BB6C;
    case 705u: goto L_08B0BB74;
    case 706u: goto L_08B0BB7C;
    case 707u: goto L_08B0BB84;
    case 708u: goto L_08B0BB8C;
    case 709u: goto L_08B0BB94;
    case 710u: goto L_08B0BB9C;
    case 711u: goto L_08B0BBA4;
    case 712u: goto L_08B0BBAC;
    case 713u: goto L_08B0BBB4;
    case 714u: goto L_08B0BBBC;
    case 715u: goto L_08B0BBC4;
    case 716u: goto L_08B0BBCC;
    case 717u: goto L_08B0BBD4;
    case 718u: goto L_08B0BBDC;
    case 719u: goto L_08B0BBE4;
    case 720u: goto L_08B0BBEC;
    case 721u: goto L_08B0BBF4;
    case 722u: goto L_08B0BC04;
    case 723u: goto L_08B0BC0C;
    case 724u: goto L_08B0BC14;
    case 725u: goto L_08B0BC1C;
    case 726u: goto L_08B0BC24;
    case 727u: goto L_08B0BC2C;
    case 728u: goto L_08B0BC34;
    case 729u: goto L_08B0BC3C;
    case 730u: goto L_08B0BC44;
    case 731u: goto L_08B0BC4C;
    case 732u: goto L_08B0BC54;
    case 733u: goto L_08B0BC5C;
    case 734u: goto L_08B0BC64;
    case 735u: goto L_08B0BC6C;
    case 736u: goto L_08B0BC74;
    case 737u: goto L_08B0BC7C;
    case 738u: goto L_08B0BC84;
    case 739u: goto L_08B0BC8C;
    case 740u: goto L_08B0BC94;
    case 741u: goto L_08B0BC9C;
    case 742u: goto L_08B0BCA4;
    case 743u: goto L_08B0BCAC;
    case 744u: goto L_08B0BCB4;
    case 745u: goto L_08B0BCBC;
    case 746u: goto L_08B0BCCC;
    case 747u: goto L_08B0BCD4;
    case 748u: goto L_08B0BCDC;
    case 749u: goto L_08B0BCE4;
    case 750u: goto L_08B0BCEC;
    case 751u: goto L_08B0BCF4;
    case 752u: goto L_08B0BCFC;
    case 753u: goto L_08B0BD04;
    case 754u: goto L_08B0BD0C;
    case 755u: goto L_08B0BD14;
    case 756u: goto L_08B0BD1C;
    case 757u: goto L_08B0BD24;
    case 758u: goto L_08B0BD2C;
    case 759u: goto L_08B0BD34;
    case 760u: goto L_08B0BD40;
    case 761u: goto L_08B0BD50;
    case 762u: goto L_08B0BD58;
    case 763u: goto L_08B0BF4C;
    case 764u: goto L_08B0BF50;
    case 765u: goto L_08B0BF88;
    case 766u: goto L_08B0BFA0;
    case 767u: goto L_08B0BFB0;
    case 768u: goto L_08B0BFB4;
    case 769u: goto L_08B0BFCC;
    case 770u: goto L_08B0BFE0;
    case 771u: goto L_08B0BFF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08B08000:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[5] = (0u | 28u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[16]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B0806C;
      }
      goto L_08B08020;
    }
L_08B08020:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08B0805C;
      }
      goto L_08B08028;
    }
L_08B08028:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(90), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(90))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[16]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(36))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(96), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(ctx.gpr[6]));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08B08054u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B08054u) goto L_08B08054;
    return;
L_08B08054:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B08064;
      }
      goto L_08B0805C;
    }
L_08B0805C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
      if (branch_taken) {
          goto L_08B08100;
      }
      goto L_08B08064;
    }
L_08B08064:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08B08100;
      }
      goto L_08B0806C;
    }
L_08B0806C:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B080C0;
      }
      goto L_08B08074;
    }
L_08B08074:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B0805C;
      }
      goto L_08B0807C;
    }
L_08B0807C:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(74), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(74))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[16]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(36))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(80), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(81), static_cast<std::uint8_t>(ctx.gpr[6]));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08B080A8u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B080A8u) goto L_08B080A8;
    return;
L_08B080A8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B080B8;
      }
      goto L_08B080B0;
    }
L_08B080B0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(28));
      if (branch_taken) {
          goto L_08B080C0;
      }
      goto L_08B080B8;
    }
L_08B080B8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08B08100;
      }
      goto L_08B080C0;
    }
L_08B080C0:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(82), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(82))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[16]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(36))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(88), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(89), static_cast<std::uint8_t>(ctx.gpr[6]));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08B080ECu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B080ECu) goto L_08B080EC;
    return;
L_08B080EC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B080FC;
      }
      goto L_08B080F4;
    }
L_08B080F4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(28));
      if (branch_taken) {
          goto L_08B08028;
      }
      goto L_08B080FC;
    }
L_08B080FC:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    goto L_08B08100;
L_08B08100:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B08130:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(28));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B08160u);
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
    if (rt.invoke_chained_direct<&recomp_unit_0192_entry, 192u, 870u, 0x08B07DB0u>(ctx, &aot_mem) && ctx.pc == 0x08B08160u) goto L_08B08160;
    return;
L_08B08160:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0816C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[7]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(48))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(32))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(20))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B081C0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B081D4u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0192_entry, 192u, 6u, 0x08B0403Cu>(ctx, &aot_mem) && ctx.pc == 0x08B081D4u) goto L_08B081D4;
    return;
L_08B081D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[2] = (ctx.gpr[4] - ctx.gpr[2]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B081EC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[6]);
    { float vfpu_value[4]{};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    ctx.execute_vfpu_vf2h(64u, 0u, 2u);
    ctx.gpr[6] = (ctx.vfpu_scalar_bits_ct<64u>());
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[6]);
    { float vfpu_value[4]{};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    ctx.execute_vfpu_vf2h(64u, 0u, 2u);
    ctx.gpr[6] = (ctx.vfpu_scalar_bits_ct<64u>());
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[6]);
    { float vfpu_value[4]{};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    ctx.execute_vfpu_vf2h(64u, 0u, 2u);
    ctx.gpr[6] = (ctx.vfpu_scalar_bits_ct<64u>());
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[5]);
    { float vfpu_value[4]{};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    ctx.execute_vfpu_vf2h(64u, 0u, 2u);
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<64u>());
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(ctx.gpr[5]));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B08264:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B082AC;
      }
      goto L_08B08274;
    }
L_08B08274:
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-8156));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.gpr[6] = (2230u << 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-20996), 0u);
      if (branch_taken) {
          goto L_08B08298;
      }
      goto L_08B0828C;
    }
L_08B0828C:
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-9668));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    goto L_08B08298;
L_08B08298:
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B082AC;
      }
      goto L_08B082A4;
    }
L_08B082A4:
    ctx.gpr[31] = (0x08B082ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 656u, 0x08AA3128u>(ctx, &aot_mem) && ctx.pc == 0x08B082ACu) goto L_08B082AC;
    return;
L_08B082AC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B082B8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[6] = (2230u << 16u);
      if (branch_taken) {
          goto L_08B0830C;
      }
      goto L_08B082C8;
    }
L_08B082C8:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-8140));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08B082F8;
      }
      goto L_08B082D4;
    }
L_08B082D4:
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-8156));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.gpr[6] = (2230u << 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-20996), 0u);
      if (branch_taken) {
          goto L_08B082F8;
      }
      goto L_08B082EC;
    }
L_08B082EC:
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-9668));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    goto L_08B082F8;
L_08B082F8:
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B0830C;
      }
      goto L_08B08304;
    }
L_08B08304:
    ctx.gpr[31] = (0x08B0830Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 656u, 0x08AA3128u>(ctx, &aot_mem) && ctx.pc == 0x08B0830Cu) goto L_08B0830C;
    return;
L_08B0830C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B08318:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B08330u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 632u, 0x08A96B44u>(ctx, &aot_mem) && ctx.pc == 0x08B08330u) goto L_08B08330;
    return;
L_08B08330:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B08344:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(32), static_cast<std::uint16_t>(0u));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B08364:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B08398:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08B083B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 867u, 0x08B03F9Cu>(ctx, &aot_mem) && ctx.pc == 0x08B083B0u) goto L_08B083B0;
    return;
L_08B083B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[2] = (ctx.gpr[4] - ctx.gpr[2]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B083C8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B083F4u);
    ctx.gpr[4] = (ctx.gpr[18] << 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 654u, 0x08AA3104u>(ctx, &aot_mem) && ctx.pc == 0x08B083F4u) goto L_08B083F4;
    return;
L_08B083F4:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    ctx.gpr[20] = (ctx.gpr[17] + static_cast<std::uint32_t>(32));
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), ctx.gpr[20]);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[16] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_08B08448;
      }
      goto L_08B08420;
    }
L_08B08420:
    ctx.gpr[18] = (ctx.gpr[19] << 4u);
    goto L_08B08424;
L_08B08424:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(64)));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08B08434u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[18]);
    goto L_08B085AC;
L_08B08434:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(-1));
    ctx.gpr[16] = (ctx.gpr[19] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-16));
      if (branch_taken) {
          goto L_08B08424;
      }
      goto L_08B08448;
    }
L_08B08448:
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
L_08B08468:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08B084A4;
      }
      goto L_08B0848C;
    }
L_08B0848C:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08B08498u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08B0856C;
L_08B08498:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08B0848C;
      }
      goto L_08B084A4;
    }
L_08B084A4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B084B8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[7] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[7];
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
      if (branch_taken) {
          goto L_08B08514;
      }
      goto L_08B084D8;
    }
L_08B084D8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    goto L_08B084DC;
L_08B084DC:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (0u | 0u);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[8] = (0u | 1u);
        goto L_08B084F4;
    }
    goto L_08B084F4;
L_08B084F4:
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B08508;
      }
      goto L_08B08500;
    }
L_08B08500:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B08514;
      }
      goto L_08B08508;
    }
L_08B08508:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08B084DC;
      }
      goto L_08B08514;
    }
L_08B08514:
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08B08554;
      }
      goto L_08B08524;
    }
L_08B08524:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[31] = (0x08B08540u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    goto L_08B085C4;
L_08B08540:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x08B0854Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08B085AC;
L_08B0854C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08B08558;
      }
      goto L_08B08554;
    }
L_08B08554:
    ctx.gpr[2] = (0u | 0u);
    goto L_08B08558;
L_08B08558:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0856C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B0858Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08B085C4;
L_08B0858C:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x08B08598u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08B085AC;
L_08B08598:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B085AC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B085C4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B085DC:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B085E4:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B085EC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (0u | 96u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[7]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] | 128u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B08628;
      }
      goto L_08B08624;
    }
L_08B08624:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    goto L_08B08628;
L_08B08628:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B08630:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 96u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[6]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[2] = (ctx.lo);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0864C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 96u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[6]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[2] = (ctx.lo);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B08668:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-12196));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B08698:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[7]);
    ctx.gpr[9] = (ctx.gpr[8] & 255u);
    ctx.gpr[10] = (ctx.gpr[6] | 0u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8))))));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[4] = (ctx.gpr[10] | 0u);
      if (branch_taken) {
          goto L_08B086E8;
      }
      goto L_08B086C8;
    }
L_08B086C8:
    ctx.gpr[6] = (ctx.gpr[8] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] << 3u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[7]);
      if (branch_taken) {
          goto L_08B086E8;
      }
      goto L_08B086E8;
    }
L_08B086E8:
    ctx.gpr[11] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(48))))));
    jump_target = ctx.gpr[11];
    ctx.gpr[31] = (0x08B08700u);
    ctx.gpr[8] = (ctx.gpr[9] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B08700u) goto L_08B08700;
    return;
L_08B08700:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0870C:
    ctx.gpr[11] = (0u | 54u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[11]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[11]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    ctx.gpr[11] = (2230u << 16u);
    ctx.gpr[11] = (aot_mem.aot_load8(ctx.gpr[11] + static_cast<std::uint32_t>(-5691)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[11]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[1]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[11] = (ctx.gpr[4] + static_cast<std::uint32_t>(5));
    rt.memory().aot_store_word_left(ctx.gpr[11] + static_cast<std::uint32_t>(3), ctx.gpr[5]);
    rt.memory().aot_store_word_right(ctx.gpr[11] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[2] = (ctx.gpr[11] + static_cast<std::uint32_t>(4));
    rt.memory().aot_store_word_left(ctx.gpr[2] + static_cast<std::uint32_t>(3), ctx.gpr[5]);
    rt.memory().aot_store_word_right(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[6] = (ctx.gpr[11] + static_cast<std::uint32_t>(8));
    rt.memory().aot_store_word_left(ctx.gpr[6] + static_cast<std::uint32_t>(3), ctx.gpr[5]);
    rt.memory().aot_store_word_right(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(17));
    rt.memory().aot_store_word_left(ctx.gpr[6] + static_cast<std::uint32_t>(3), ctx.gpr[5]);
    rt.memory().aot_store_word_right(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[11] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    rt.memory().aot_store_word_left(ctx.gpr[11] + static_cast<std::uint32_t>(3), ctx.gpr[5]);
    rt.memory().aot_store_word_right(ctx.gpr[11] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(8));
    rt.memory().aot_store_word_left(ctx.gpr[6] + static_cast<std::uint32_t>(3), ctx.gpr[5]);
    rt.memory().aot_store_word_right(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(29));
    rt.memory().aot_store_word_left(ctx.gpr[6] + static_cast<std::uint32_t>(3), ctx.gpr[5]);
    rt.memory().aot_store_word_right(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    rt.memory().aot_store_word_left(ctx.gpr[7] + static_cast<std::uint32_t>(3), ctx.gpr[5]);
    rt.memory().aot_store_word_right(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(8));
    rt.memory().aot_store_word_left(ctx.gpr[6] + static_cast<std::uint32_t>(3), ctx.gpr[5]);
    rt.memory().aot_store_word_right(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(41));
    rt.memory().aot_store_word_left(ctx.gpr[6] + static_cast<std::uint32_t>(3), ctx.gpr[5]);
    rt.memory().aot_store_word_right(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    rt.memory().aot_store_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(45), ctx.gpr[9]);
    rt.memory().aot_store_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(48), ctx.gpr[9]);
    ctx.gpr[1] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    rt.memory().aot_store_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(49), ctx.gpr[1]);
    rt.memory().aot_store_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(52), ctx.gpr[1]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(53), static_cast<std::uint8_t>(ctx.gpr[10]));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B08818:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[31]);
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
        goto L_08B08888;
    }
    goto L_08B0884C;
L_08B0884C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(0u));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    goto L_08B08858;
L_08B08858:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
        goto L_08B08878;
    }
    goto L_08B08868;
L_08B08868:
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08B0887C;
      }
      goto L_08B08878;
    }
L_08B08878:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08B0887C;
L_08B0887C:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
        goto L_08B08858;
    }
    goto L_08B08884;
L_08B08884:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    goto L_08B08888;
L_08B08888:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[6] == 0u) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
        goto L_08B088D8;
    }
    goto L_08B0889C;
L_08B0889C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(49), static_cast<std::uint8_t>(0u));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    goto L_08B088A8;
L_08B088A8:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    if (ctx.gpr[7] == 0u) {
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(12));
        goto L_08B088C8;
    }
    goto L_08B088B8;
L_08B088B8:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08B088CC;
      }
      goto L_08B088C8;
    }
L_08B088C8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    goto L_08B088CC;
L_08B088CC:
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
        goto L_08B088A8;
    }
    goto L_08B088D4;
L_08B088D4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    goto L_08B088D8;
L_08B088D8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] ^ ctx.gpr[4]);
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
      if (branch_taken) {
          goto L_08B08930;
      }
      goto L_08B08904;
    }
L_08B08904:
    ctx.gpr[31] = (0x08B0890Cu);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 881u, 0x08AFBCACu>(ctx, &aot_mem) && ctx.pc == 0x08B0890Cu) goto L_08B0890C;
    return;
L_08B0890C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] ^ ctx.gpr[4]);
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B08904;
      }
      goto L_08B0892C;
    }
L_08B0892C:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    goto L_08B08930;
L_08B08930:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[5] ^ ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
      if (branch_taken) {
          goto L_08B089D0;
      }
      goto L_08B08964;
    }
L_08B08964:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[5] ^ ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
        goto L_08B089D4;
    }
    goto L_08B08984;
L_08B08984:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B08A54;
      }
      goto L_08B08990;
    }
L_08B08990:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x08B089A4u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 525u, 0x08AFE3F4u>(ctx, &aot_mem) && ctx.pc == 0x08B089A4u) goto L_08B089A4;
    return;
L_08B089A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), 0u);
      if (branch_taken) {
          goto L_08B08A54;
      }
      goto L_08B089D0;
    }
L_08B089D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    goto L_08B089D4;
L_08B089D4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(60));
      if (branch_taken) {
          goto L_08B08A54;
      }
      goto L_08B089EC;
    }
L_08B089EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[4]);
    ctx.gpr[31] = (0x08B089FCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 881u, 0x08AFBCACu>(ctx, &aot_mem) && ctx.pc == 0x08B089FCu) goto L_08B089FC;
    return;
L_08B089FC:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(8));
    ctx.gpr[31] = (0x08B08A18u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(12));
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 777u, 0x08AFF67Cu>(ctx, &aot_mem) && ctx.pc == 0x08B08A18u) goto L_08B08A18;
    return;
L_08B08A18:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
        goto L_08B08A30;
    }
    goto L_08B08A24;
L_08B08A24:
    ctx.gpr[31] = (0x08B08A2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 668u, 0x08AA3200u>(ctx, &aot_mem) && ctx.pc == 0x08B08A2Cu) goto L_08B08A2C;
    return;
L_08B08A2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_08B08A30;
L_08B08A30:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B089EC;
      }
      goto L_08B08A54;
    }
L_08B08A54:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
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
L_08B08A78:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[7];
    ctx.gpr[5] = (ctx.gpr[9] | 0u);
      if (branch_taken) {
          goto L_08B08AD4;
      }
      goto L_08B08AA4;
    }
L_08B08AA4:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B08B8C;
      }
      goto L_08B08AAC;
    }
L_08B08AAC:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B08AD4;
      }
      goto L_08B08AB4;
    }
L_08B08AB4:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B08B8C;
      }
      goto L_08B08AD4;
    }
L_08B08AD4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[8]);
    ctx.gpr[4] = (0u | 28u);
    ctx.gpr[31] = (0x08B08AE8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 660u, 0x08AA3170u>(ctx, &aot_mem) && ctx.pc == 0x08B08AE8u) goto L_08B08AE8;
    return;
L_08B08AE8:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08B08B18;
      }
      goto L_08B08AFC;
    }
L_08B08AFC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[8]);
    ctx.gpr[31] = (0x08B08B0Cu);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 362u, 0x08AF9910u>(ctx, &aot_mem) && ctx.pc == 0x08B08B0Cu) goto L_08B08B0C;
    return;
L_08B08B0C:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08B08B18;
L_08B08B18:
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B08B3C;
      }
      goto L_08B08B24;
    }
L_08B08B24:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[6]));
    goto L_08B08B3C;
L_08B08B3C:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (ctx.gpr[18] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[9];
    ctx.gpr[8] = (ctx.gpr[18] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08B08B74;
      }
      goto L_08B08B5C;
    }
L_08B08B5C:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
      if (branch_taken) {
          goto L_08B08C1C;
      }
      goto L_08B08B74;
    }
L_08B08B74:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[9];
    // nop
      if (branch_taken) {
          goto L_08B08C1C;
      }
      goto L_08B08B84;
    }
L_08B08B84:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
      if (branch_taken) {
          goto L_08B08C1C;
      }
      goto L_08B08B8C;
    }
L_08B08B8C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[8]);
    ctx.gpr[4] = (0u | 28u);
    ctx.gpr[31] = (0x08B08BA0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 660u, 0x08AA3170u>(ctx, &aot_mem) && ctx.pc == 0x08B08BA0u) goto L_08B08BA0;
    return;
L_08B08BA0:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08B08BD0;
      }
      goto L_08B08BB4;
    }
L_08B08BB4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[8]);
    ctx.gpr[31] = (0x08B08BC4u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 362u, 0x08AF9910u>(ctx, &aot_mem) && ctx.pc == 0x08B08BC4u) goto L_08B08BC4;
    return;
L_08B08BC4:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08B08BD0;
L_08B08BD0:
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B08BF4;
      }
      goto L_08B08BDC;
    }
L_08B08BDC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[6]));
    goto L_08B08BF4;
L_08B08BF4:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[18] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[9];
    ctx.gpr[8] = (ctx.gpr[18] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08B08C1C;
      }
      goto L_08B08C18;
    }
L_08B08C18:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    goto L_08B08C1C;
L_08B08C1C:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08B08C38u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 858u, 0x08AFBB3Cu>(ctx, &aot_mem) && ctx.pc == 0x08B08C38u) goto L_08B08C38;
    return;
L_08B08C38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B08C60:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[20]);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[19]);
    ctx.gpr[7] = (ctx.gpr[20] + static_cast<std::uint32_t>(4));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[17]);
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08B08CD4;
      }
      goto L_08B08C9C;
    }
L_08B08C9C:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    ctx.gpr[20] = (ctx.gpr[19] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (ctx.gpr[19] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08B08CC8;
      }
      goto L_08B08CBC;
    }
L_08B08CBC:
    ctx.gpr[5] = (ctx.gpr[19] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08B08CCC;
      }
      goto L_08B08CC8;
    }
L_08B08CC8:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    goto L_08B08CCC;
L_08B08CCC:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B08C9C;
      }
      goto L_08B08CD4;
    }
L_08B08CD4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
      if (branch_taken) {
          goto L_08B08D44;
      }
      goto L_08B08CDC;
    }
L_08B08CDC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] ^ ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B08D14;
      }
      goto L_08B08D04;
    }
L_08B08D04:
    ctx.gpr[31] = (0x08B08D0Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 891u, 0x08AFBD1Cu>(ctx, &aot_mem) && ctx.pc == 0x08B08D0Cu) goto L_08B08D0C;
    return;
L_08B08D0C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08B08D44;
      }
      goto L_08B08D14;
    }
L_08B08D14:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B08D30u);
    ctx.gpr[9] = (0u | 0u);
    goto L_08B08A78;
L_08B08D30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08B08DAC;
      }
      goto L_08B08D44;
    }
L_08B08D44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B08D9C;
      }
      goto L_08B08D6C;
    }
L_08B08D6C:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B08D88u);
    ctx.gpr[9] = (0u | 0u);
    goto L_08B08A78;
L_08B08D88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08B08DAC;
      }
      goto L_08B08D9C;
    }
L_08B08D9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08B08DAC;
L_08B08DAC:
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
L_08B08DCC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[20]);
    ctx.gpr[20] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[6];
    ctx.gpr[16] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08B08F94;
      }
      goto L_08B08E08;
    }
L_08B08E08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B08E60;
      }
      goto L_08B08E14;
    }
L_08B08E14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(104), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B08E7C;
      }
      goto L_08B08E3C;
    }
L_08B08E3C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B08E58u);
    ctx.gpr[9] = (0u | 0u);
    goto L_08B08A78;
L_08B08E58:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B091DC;
      }
      goto L_08B08E60;
    }
L_08B08E60:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08B08E70u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    goto L_08B08C60;
L_08B08E70:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B091DC;
      }
      goto L_08B08E7C;
    }
L_08B08E7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(105), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B08F10;
      }
      goto L_08B08EA0;
    }
L_08B08EA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08B08EACu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 881u, 0x08AFBCACu>(ctx, &aot_mem) && ctx.pc == 0x08B08EACu) goto L_08B08EAC;
    return;
L_08B08EAC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08B08EEC;
      }
      goto L_08B08EBC;
    }
L_08B08EBC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(106), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B08F1C;
      }
      goto L_08B08EE4;
    }
L_08B08EE4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B08F78;
      }
      goto L_08B08EEC;
    }
L_08B08EEC:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[9] | 0u);
    ctx.gpr[31] = (0x08B08F08u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    goto L_08B08A78;
L_08B08F08:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B091DC;
      }
      goto L_08B08F10;
    }
L_08B08F10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B091DC;
      }
      goto L_08B08F1C;
    }
L_08B08F1C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B08F54;
      }
      goto L_08B08F30;
    }
L_08B08F30:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[9] | 0u);
    ctx.gpr[31] = (0x08B08F4Cu);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    goto L_08B08A78;
L_08B08F4C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B091DC;
      }
      goto L_08B08F54;
    }
L_08B08F54:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B08F70u);
    ctx.gpr[9] = (0u | 0u);
    goto L_08B08A78;
L_08B08F70:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B091DC;
      }
      goto L_08B08F78;
    }
L_08B08F78:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08B08F88u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    goto L_08B08C60;
L_08B08F88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B091DC;
      }
      goto L_08B08F94;
    }
L_08B08F94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08B0901C;
      }
      goto L_08B08FA4;
    }
L_08B08FA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(107), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(64), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B09000;
      }
      goto L_08B08FD4;
    }
L_08B08FD4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08B08FF8u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    goto L_08B08A78;
L_08B08FF8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B091DC;
      }
      goto L_08B09000;
    }
L_08B09000:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(68));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08B09010u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    goto L_08B08C60;
L_08B09010:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B091DC;
      }
      goto L_08B0901C;
    }
L_08B0901C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08B09028u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 891u, 0x08AFBD1Cu>(ctx, &aot_mem) && ctx.pc == 0x08B09028u) goto L_08B09028;
    return;
L_08B09028:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(108), static_cast<std::uint8_t>(0u));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B090D4;
      }
      goto L_08B09050;
    }
L_08B09050:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(109), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B090D4;
      }
      goto L_08B09078;
    }
L_08B09078:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B090B0;
      }
      goto L_08B0908C;
    }
L_08B0908C:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[9] | 0u);
    ctx.gpr[31] = (0x08B090A8u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    goto L_08B08A78;
L_08B090A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B091DC;
      }
      goto L_08B090B0;
    }
L_08B090B0:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B090CCu);
    ctx.gpr[9] = (0u | 0u);
    goto L_08B08A78;
L_08B090CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B091DC;
      }
      goto L_08B090D4;
    }
L_08B090D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08B090E0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 881u, 0x08AFBCACu>(ctx, &aot_mem) && ctx.pc == 0x08B090E0u) goto L_08B090E0;
    return;
L_08B090E0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[19] != 0u;
    ctx.gpr[4] = (ctx.gpr[19] < static_cast<std::uint32_t>(1) ? 1u : 0u);
      if (branch_taken) {
          goto L_08B09108;
      }
      goto L_08B090EC;
    }
L_08B090EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(110), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    goto L_08B09108;
L_08B09108:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B091AC;
      }
      goto L_08B09110;
    }
L_08B09110:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B091AC;
      }
      goto L_08B09118;
    }
L_08B09118:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08B09150;
      }
      goto L_08B09128;
    }
L_08B09128:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(111), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B091AC;
      }
      goto L_08B09150;
    }
L_08B09150:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B09188;
      }
      goto L_08B09164;
    }
L_08B09164:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[9] | 0u);
    ctx.gpr[31] = (0x08B09180u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    goto L_08B08A78;
L_08B09180:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B091DC;
      }
      goto L_08B09188;
    }
L_08B09188:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B091A4u);
    ctx.gpr[9] = (0u | 0u);
    goto L_08B08A78;
L_08B091A4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B091DC;
      }
      goto L_08B091AC;
    }
L_08B091AC:
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08B091C0;
      }
      goto L_08B091B4;
    }
L_08B091B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B091DC;
      }
      goto L_08B091C0;
    }
L_08B091C0:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08B091D0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    goto L_08B08C60;
L_08B091D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B091DC;
      }
      goto L_08B091DC;
    }
L_08B091DC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B091FC:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(101), static_cast<std::uint8_t>(0u));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B09208:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B09210:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B09218:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0923C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
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
L_08B0926C:
    ctx.gpr[2] = (2224u << 16u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(23512));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B09278:
    ctx.gpr[4] = (2224u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(23512));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_08B092E4;
      }
      goto L_08B09288;
    }
L_08B09288:
    ctx.gpr[4] = (2224u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-24108));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_08B092D4;
      }
      goto L_08B09298;
    }
L_08B09298:
    ctx.gpr[8] = (2224u << 16u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(4556));
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[5];
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08B092C4;
      }
      goto L_08B092A8;
    }
L_08B092A8:
    ctx.gpr[8] = (2224u << 16u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(3984));
    ctx.gpr[5] = (ctx.gpr[8] ^ ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08B092CC;
      }
      goto L_08B092C4;
    }
L_08B092C4:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08B092CC;
L_08B092CC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[6] & 255u);
      if (branch_taken) {
          goto L_08B092DC;
      }
      goto L_08B092D4;
    }
L_08B092D4:
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[6] & 255u);
    goto L_08B092DC;
L_08B092DC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B092E8;
      }
      goto L_08B092E4;
    }
L_08B092E4:
    ctx.gpr[7] = (0u | 1u);
    goto L_08B092E8;
L_08B092E8:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[7] & 255u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B092F0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B09340;
      }
      goto L_08B0930C;
    }
L_08B0930C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8124));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(108), ctx.gpr[4]);
    ctx.gpr[31] = (0x08B09320u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 99u, 0x08AC4CB8u>(ctx, &aot_mem) && ctx.pc == 0x08B09320u) goto L_08B09320;
    return;
L_08B09320:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B0932Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0071_entry, 71u, 61u, 0x08920560u>(ctx, &aot_mem) && ctx.pc == 0x08B0932Cu) goto L_08B0932C;
    return;
L_08B0932C:
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B09340;
      }
      goto L_08B09338;
    }
L_08B09338:
    ctx.gpr[31] = (0x08B09340u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 656u, 0x08AA3128u>(ctx, &aot_mem) && ctx.pc == 0x08B09340u) goto L_08B09340;
    return;
L_08B09340:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B09354:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 2u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0935C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B09378u);
    ctx.gpr[4] = (0u | 752u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 738u, 0x089C70F0u>(ctx, &aot_mem) && ctx.pc == 0x08B09378u) goto L_08B09378;
    return;
L_08B09378:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (0u | 752u);
    ctx.gpr[31] = (0x08B09388u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26512));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 687u, 0x08AA33C4u>(ctx, &aot_mem) && ctx.pc == 0x08B09388u) goto L_08B09388;
    return;
L_08B09388:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08B093A0;
      }
      goto L_08B09394;
    }
L_08B09394:
    ctx.gpr[31] = (0x08B0939Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 235u, 0x08ABD6D4u>(ctx, &aot_mem) && ctx.pc == 0x08B0939Cu) goto L_08B0939C;
    return;
L_08B0939C:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    goto L_08B093A0;
L_08B093A0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B093B0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B09414;
      }
      goto L_08B093C4;
    }
L_08B093C4:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[4] = (2233u << 16u);
      if (branch_taken) {
          goto L_08B09408;
      }
      goto L_08B093CC;
    }
L_08B093CC:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[4] = (2233u << 16u);
      if (branch_taken) {
          goto L_08B09408;
      }
      goto L_08B093D4;
    }
L_08B093D4:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2233u << 16u);
      if (branch_taken) {
          goto L_08B09408;
      }
      goto L_08B093E0;
    }
L_08B093E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2233u << 16u);
      if (branch_taken) {
          goto L_08B09408;
      }
      goto L_08B093F0;
    }
L_08B093F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (2233u << 16u);
        goto L_08B09408;
    }
    goto L_08B093FC;
L_08B093FC:
    ctx.gpr[31] = (0x08B09404u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x08B09404u) goto L_08B09404;
    return;
L_08B09404:
    ctx.gpr[4] = (2233u << 16u);
    goto L_08B09408;
L_08B09408:
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B09414u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26512));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 730u, 0x08AA367Cu>(ctx, &aot_mem) && ctx.pc == 0x08B09414u) goto L_08B09414;
    return;
L_08B09414:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B09424:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B09448u);
    ctx.gpr[4] = (0u | 752u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 738u, 0x089C70F0u>(ctx, &aot_mem) && ctx.pc == 0x08B09448u) goto L_08B09448;
    return;
L_08B09448:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (0u | 752u);
    ctx.gpr[31] = (0x08B09458u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26512));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 687u, 0x08AA33C4u>(ctx, &aot_mem) && ctx.pc == 0x08B09458u) goto L_08B09458;
    return;
L_08B09458:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08B094E4;
      }
      goto L_08B09464;
    }
L_08B09464:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B09470u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0192_entry, 192u, 169u, 0x08B04C04u>(ctx, &aot_mem) && ctx.pc == 0x08B09470u) goto L_08B09470;
    return;
L_08B09470:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(512));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(512));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[8]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[7] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(544));
    ctx.gpr[8] = (ctx.gpr[16] + static_cast<std::uint32_t>(544));
    ctx.gpr[5] = (0u | 6u);
    ctx.gpr[6] = (0u | 32u);
    ctx.gpr[31] = (0x08B094C8u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-28100));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 298u, 0x08AF56FCu>(ctx, &aot_mem) && ctx.pc == 0x08B094C8u) goto L_08B094C8;
    return;
L_08B094C8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(736)));
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(736), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(740)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(740), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(744)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(744), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08B094E4;
L_08B094E4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B094F8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B0950Cu);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0071_entry, 71u, 53u, 0x089204B0u>(ctx, &aot_mem) && ctx.pc == 0x08B0950Cu) goto L_08B0950C;
    return;
L_08B0950C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B09518:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B09578;
      }
      goto L_08B09534;
    }
L_08B09534:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-12180));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(108), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B09564;
      }
      goto L_08B09544;
    }
L_08B09544:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8124));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(108), ctx.gpr[4]);
    ctx.gpr[31] = (0x08B09558u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 99u, 0x08AC4CB8u>(ctx, &aot_mem) && ctx.pc == 0x08B09558u) goto L_08B09558;
    return;
L_08B09558:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B09564u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0071_entry, 71u, 61u, 0x08920560u>(ctx, &aot_mem) && ctx.pc == 0x08B09564u) goto L_08B09564;
    return;
L_08B09564:
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B09578;
      }
      goto L_08B09570;
    }
L_08B09570:
    ctx.gpr[31] = (0x08B09578u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 656u, 0x08AA3128u>(ctx, &aot_mem) && ctx.pc == 0x08B09578u) goto L_08B09578;
    return;
L_08B09578:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0958C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B095D4;
      }
      goto L_08B095A8;
    }
L_08B095A8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-11996));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(92), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B095C0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0071_entry, 71u, 303u, 0x08922C8Cu>(ctx, &aot_mem) && ctx.pc == 0x08B095C0u) goto L_08B095C0;
    return;
L_08B095C0:
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B095D4;
      }
      goto L_08B095CC;
    }
L_08B095CC:
    ctx.gpr[31] = (0x08B095D4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 656u, 0x08AA3128u>(ctx, &aot_mem) && ctx.pc == 0x08B095D4u) goto L_08B095D4;
    return;
L_08B095D4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B095E8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B095FC:
    ctx.gpr[2] = (2224u << 16u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(3984));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B09608:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[7] - ctx.gpr[6]);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 3u));
    ctx.gpr[8] = (ctx.gpr[8] >> 29u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[8]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 3u));
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[6]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) < 0;
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[6]) < 16 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B09644;
      }
      goto L_08B09630;
    }
L_08B09630:
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
      if (branch_taken) {
          goto L_08B09644;
      }
      goto L_08B09638;
    }
L_08B09638:
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08B096B8;
      }
      goto L_08B09644;
    }
L_08B09644:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) <= 0;
    ctx.gpr[5] = (0u - ctx.gpr[6]);
      if (branch_taken) {
          goto L_08B09660;
      }
      goto L_08B0964C;
    }
L_08B0964C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 4u));
    ctx.gpr[5] = (ctx.gpr[5] >> 28u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 4u));
      if (branch_taken) {
          goto L_08B09680;
      }
      goto L_08B09660;
    }
L_08B09660:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 4u));
    ctx.gpr[5] = (ctx.gpr[5] >> 28u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 4u));
    ctx.gpr[5] = (0u - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    goto L_08B09680;
L_08B09680:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[8] = (ctx.gpr[5] << 2u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[8]);
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(128));
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[8]);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    goto L_08B096B8;
L_08B096B8:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B096C0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B09724;
      }
      goto L_08B096DC;
    }
L_08B096DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
      if (branch_taken) {
          goto L_08B09714;
      }
      goto L_08B096E8;
    }
L_08B096E8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B096FCu);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    goto L_08B09904;
L_08B096FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
        goto L_08B09714;
    }
    goto L_08B09708;
L_08B09708:
    ctx.gpr[31] = (0x08B09710u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 668u, 0x08AA3200u>(ctx, &aot_mem) && ctx.pc == 0x08B09710u) goto L_08B09710;
    return;
L_08B09710:
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    goto L_08B09714;
L_08B09714:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B09724;
      }
      goto L_08B0971C;
    }
L_08B0971C:
    ctx.gpr[31] = (0x08B09724u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 656u, 0x08AA3128u>(ctx, &aot_mem) && ctx.pc == 0x08B09724u) goto L_08B09724;
    return;
L_08B09724:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B09738:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    ctx.gpr[7] = (ctx.gpr[5] >> 4u);
    ctx.gpr[6] = (0u | 8u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    ctx.gpr[8] = (ctx.gpr[7] + static_cast<std::uint32_t>(2));
    ctx.gpr[6] = (0u | 8u);
    ctx.gpr[6] = (ctx.gpr[6] < ctx.gpr[8] ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[8]);
      if (branch_taken) {
          goto L_08B09778;
      }
      goto L_08B0976C;
    }
L_08B0976C:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08B09780;
      }
      goto L_08B09778;
    }
L_08B09778:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    goto L_08B09780;
L_08B09780:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[8] = (0u | 0u);
      if (branch_taken) {
          goto L_08B097E8;
      }
      goto L_08B09790;
    }
L_08B09790:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[6] << 2u);
    ctx.gpr[31] = (0x08B097A8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 660u, 0x08AA3170u>(ctx, &aot_mem) && ctx.pc == 0x08B097A8u) goto L_08B097A8;
    return;
L_08B097A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_08B097E4;
      }
      goto L_08B097C0;
    }
L_08B097C0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    ctx.gpr[31] = (0x08B097D4u);
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 362u, 0x08AF9910u>(ctx, &aot_mem) && ctx.pc == 0x08B097D4u) goto L_08B097D4;
    return;
L_08B097D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    goto L_08B097E4;
L_08B097E4:
    ctx.gpr[8] = (ctx.gpr[6] | 0u);
    goto L_08B097E8;
L_08B097E8:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[9] - ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] >> 1u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[16] = (ctx.gpr[8] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[7] << 2u);
    ctx.gpr[17] = (ctx.gpr[16] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(32), ctx.gpr[8]);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B09824u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    goto L_08B09888;
L_08B09824:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(128));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(-4));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(128));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (ctx.gpr[5] & 15u);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B09888:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] < ctx.gpr[6] ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B098F8;
      }
      goto L_08B098A0;
    }
L_08B098A0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    ctx.gpr[4] = (0u | 128u);
    ctx.gpr[31] = (0x08B098B4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 660u, 0x08AA3170u>(ctx, &aot_mem) && ctx.pc == 0x08B098B4u) goto L_08B098B4;
    return;
L_08B098B4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_08B098E4;
      }
      goto L_08B098C8;
    }
L_08B098C8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    ctx.gpr[31] = (0x08B098D8u);
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 362u, 0x08AF9910u>(ctx, &aot_mem) && ctx.pc == 0x08B098D8u) goto L_08B098D8;
    return;
L_08B098D8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    goto L_08B098E4;
L_08B098E4:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[4] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B098A0;
      }
      goto L_08B098F8;
    }
L_08B098F8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B09904:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B0994C;
      }
      goto L_08B09928;
    }
L_08B09928:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B0993C;
      }
      goto L_08B09934;
    }
L_08B09934:
    ctx.gpr[31] = (0x08B0993Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 668u, 0x08AA3200u>(ctx, &aot_mem) && ctx.pc == 0x08B0993Cu) goto L_08B0993C;
    return;
L_08B0993C:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[17] < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B09928;
      }
      goto L_08B0994C;
    }
L_08B0994C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B09960:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (0u - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[8]);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 3u));
    ctx.gpr[8] = (ctx.gpr[8] >> 29u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[8]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 3u));
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[5]) < 16 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B099A4;
      }
      goto L_08B0998C;
    }
L_08B0998C:
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B099A4;
      }
      goto L_08B09994;
    }
L_08B09994:
    ctx.gpr[5] = (ctx.gpr[7] << 3u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08B09A18;
      }
      goto L_08B099A4;
    }
L_08B099A4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    ctx.gpr[6] = (0u - ctx.gpr[5]);
      if (branch_taken) {
          goto L_08B099C0;
      }
      goto L_08B099AC;
    }
L_08B099AC:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 4u));
    ctx.gpr[6] = (ctx.gpr[6] >> 28u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 4u));
      if (branch_taken) {
          goto L_08B099E0;
      }
      goto L_08B099C0;
    }
L_08B099C0:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 4u));
    ctx.gpr[6] = (ctx.gpr[6] >> 28u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 4u));
    ctx.gpr[6] = (0u - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    goto L_08B099E0;
L_08B099E0:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[8] = (ctx.gpr[6] << 2u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[8]);
    ctx.gpr[6] = (ctx.gpr[6] << 4u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(128));
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[8]);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    goto L_08B09A18;
L_08B09A18:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B09A20:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    ctx.gpr[8] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[8] | 0u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[8]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(12));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(28));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(44));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(61))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(ctx.gpr[8]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(112), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[5]);
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(12)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] - ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 2u));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
    ctx.gpr[10] = (ctx.gpr[5] >> 30u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[10]);
    ctx.gpr[8] = (ctx.gpr[9] - ctx.gpr[8]);
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 3u));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.gpr[9] = (ctx.gpr[9] >> 29u);
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 2u));
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[7] = (ctx.gpr[7] << 4u);
    ctx.gpr[9] = (ctx.gpr[10] - ctx.gpr[11]);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 3u));
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 3u));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[10] >> 29u);
    ctx.gpr[8] = (ctx.gpr[9] + ctx.gpr[8]);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 3u));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-16));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) <= 0;
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
      if (branch_taken) {
          goto L_08B09C1C;
      }
      goto L_08B09B80;
    }
L_08B09B80:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    goto L_08B09B84;
L_08B09B84:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(4), ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[6] | 0u);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(8)));
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[10];
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
      if (branch_taken) {
          goto L_08B09BD4;
      }
      goto L_08B09BB0;
    }
L_08B09BB0:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(12)));
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(4));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(12), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(4), ctx.gpr[10]);
    ctx.gpr[9] = (ctx.gpr[10] + static_cast<std::uint32_t>(128));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(8), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[10]);
    goto L_08B09BD4;
L_08B09BD4:
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(8)));
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[10];
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
      if (branch_taken) {
          goto L_08B09C10;
      }
      goto L_08B09BEC;
    }
L_08B09BEC:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(12)));
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(4));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(12), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(4), ctx.gpr[10]);
    ctx.gpr[9] = (ctx.gpr[10] + static_cast<std::uint32_t>(128));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(8), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[10]);
    goto L_08B09C10;
L_08B09C10:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    if (static_cast<std::int32_t>(ctx.gpr[7]) > 0) {
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
        goto L_08B09B84;
    }
    goto L_08B09C1C;
L_08B09C1C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B09C44:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    ctx.gpr[8] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[8] | 0u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[8]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(12));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(28));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(44));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(61))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(112), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[5]);
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(12)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.gpr[10] = (ctx.gpr[6] >> 30u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[10]);
    ctx.gpr[9] = (ctx.gpr[9] - ctx.gpr[11]);
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 3u));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(8)));
    ctx.gpr[10] = (ctx.gpr[10] >> 29u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[10]);
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[8] = (ctx.gpr[11] - ctx.gpr[8]);
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 3u));
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 3u));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[10] >> 29u);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 3u));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[8]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-16));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
      if (branch_taken) {
          goto L_08B09E40;
      }
      goto L_08B09DA4;
    }
L_08B09DA4:
    ctx.gpr[9] = (ctx.gpr[6] | 0u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(4)));
    if (ctx.gpr[8] != ctx.gpr[10]) {
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
        goto L_08B09DDC;
    }
    goto L_08B09DB8;
L_08B09DB8:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(12)));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-4));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(12), ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[10] + static_cast<std::uint32_t>(128));
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(4), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(8), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    goto L_08B09DDC;
L_08B09DDC:
    ctx.gpr[8] = (ctx.gpr[7] | 0u);
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(-8));
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[10]);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[10] != ctx.gpr[11];
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08B09E18;
      }
      goto L_08B09DF8;
    }
L_08B09DF8:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(12)));
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(-4));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(12), ctx.gpr[10]);
    ctx.gpr[10] = (ctx.gpr[11] + static_cast<std::uint32_t>(128));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(4), ctx.gpr[11]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(8), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[10]);
    goto L_08B09E18;
L_08B09E18:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(-8));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[10]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[10]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) > 0;
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(4), ctx.gpr[8]);
      if (branch_taken) {
          goto L_08B09DA4;
      }
      goto L_08B09E40;
    }
L_08B09E40:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B09E68:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-400));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(368), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] ^ ctx.gpr[8]);
    ctx.gpr[6] = (ctx.gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(372), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(376), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(380), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(384), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(388), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(392), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08B09EF8;
      }
      goto L_08B09EB0;
    }
L_08B09EB0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (ctx.gpr[6] ^ ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
        goto L_08B09EFC;
    }
    goto L_08B09ECC;
L_08B09ECC:
    ctx.gpr[31] = (0x08B09ED4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08B0A53C;
L_08B09ED4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B0A518;
      }
      goto L_08B09EF8;
    }
L_08B09EF8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    goto L_08B09EFC;
L_08B09EFC:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[7]);
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 2u));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[9] = (ctx.gpr[9] >> 30u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[9]);
    ctx.gpr[8] = (ctx.gpr[8] - ctx.gpr[10]);
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 3u));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[9] = (ctx.gpr[9] >> 29u);
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 2u));
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[6] = (ctx.gpr[6] << 4u);
    ctx.gpr[9] = (ctx.gpr[10] - ctx.gpr[11]);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 3u));
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 3u));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[2] >> 29u);
    ctx.gpr[8] = (ctx.gpr[9] + ctx.gpr[8]);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 3u));
    ctx.gpr[18] = (ctx.gpr[6] + ctx.gpr[8]);
    ctx.gpr[6] = (ctx.gpr[7] - ctx.gpr[10]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 2u));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (ctx.gpr[7] >> 30u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (ctx.gpr[11] - ctx.gpr[8]);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 3u));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[8] = (ctx.gpr[8] >> 29u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 2u));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[6] = (ctx.gpr[6] << 4u);
    ctx.gpr[8] = (ctx.gpr[11] - ctx.gpr[10]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 3u));
    ctx.gpr[10] = (ctx.gpr[9] - ctx.gpr[2]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[3] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[10]) >> 3u));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 2u));
    ctx.gpr[12] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[3] = (ctx.gpr[3] >> 29u);
    ctx.gpr[11] = (ctx.gpr[11] >> 30u);
    ctx.gpr[10] = (ctx.gpr[10] + ctx.gpr[3]);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[11]);
    ctx.gpr[7] = (ctx.gpr[7] - ctx.gpr[12]);
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[10]) >> 3u));
    ctx.gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 3u));
    ctx.gpr[19] = (ctx.gpr[6] + ctx.gpr[10]);
    ctx.gpr[6] = (ctx.gpr[11] >> 29u);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[8] = (ctx.gpr[8] << 4u);
    ctx.gpr[7] = (ctx.gpr[9] - ctx.gpr[2]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 3u));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 3u));
    ctx.gpr[6] = (ctx.gpr[8] + ctx.gpr[6]);
    ctx.gpr[8] = (ctx.gpr[9] >> 29u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 3u));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-16));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-16));
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[18]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 1u));
    ctx.gpr[7] = (ctx.gpr[7] >> 31u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-16));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 1u));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
        goto L_08B0A27C;
    }
    goto L_08B0A030;
L_08B0A030:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(56));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[5]);
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(72));
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08B0A0B4u);
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    goto L_08B09C44;
L_08B0A0B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(184));
    ctx.gpr[31] = (0x08B0A0E0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_08B09608;
L_08B0A0E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(232), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(236), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(248), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(232));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(252), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(264), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(248));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(268), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(272), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(280), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(264));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(284), ctx.gpr[5]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(280));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(288), ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(296), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(292), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] ^ ctx.gpr[7]);
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B0A248;
      }
      goto L_08B0A1F0;
    }
L_08B0A1F0:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    goto L_08B0A1F4;
L_08B0A1F4:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[8];
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
      if (branch_taken) {
          goto L_08B0A22C;
      }
      goto L_08B0A208;
    }
L_08B0A208:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(12), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[8]);
    ctx.gpr[7] = (ctx.gpr[8] + static_cast<std::uint32_t>(128));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    goto L_08B0A22C;
L_08B0A22C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] ^ ctx.gpr[7]);
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08B0A1F4;
      }
      goto L_08B0A248;
    }
L_08B0A248:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[31] = (0x08B0A258u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08B09904;
L_08B0A258:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B0A4C8;
      }
      goto L_08B0A27C;
    }
L_08B0A27C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(104));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(136));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(152));
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(120));
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08B0A2F8u);
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    goto L_08B09A20;
L_08B0A2F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(200));
    ctx.gpr[31] = (0x08B0A324u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_08B09960;
L_08B0A324:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(300), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(304), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(308), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(312), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(316), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(300));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(320), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(324), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(328), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(332), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(316));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(336), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(340), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(344), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(348), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(332));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(352), ctx.gpr[5]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(348));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(356), ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(364), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(360), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] ^ ctx.gpr[7]);
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B0A48C;
      }
      goto L_08B0A434;
    }
L_08B0A434:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    goto L_08B0A438;
L_08B0A438:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[8];
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
      if (branch_taken) {
          goto L_08B0A470;
      }
      goto L_08B0A44C;
    }
L_08B0A44C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(12), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[8]);
    ctx.gpr[7] = (ctx.gpr[8] + static_cast<std::uint32_t>(128));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    goto L_08B0A470;
L_08B0A470:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] ^ ctx.gpr[7]);
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08B0A438;
      }
      goto L_08B0A48C;
    }
L_08B0A48C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x08B0A4A4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08B09904;
L_08B0A4A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    goto L_08B0A4C8;
L_08B0A4C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(220), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(216));
    ctx.gpr[31] = (0x08B0A4F4u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    goto L_08B09608;
L_08B0A4F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B0A518;
      }
      goto L_08B0A518;
    }
L_08B0A518:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(368)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(372)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(376)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(380)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(384)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(388)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(392)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(400));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0A53C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (ctx.gpr[17] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B0A5B0;
      }
      goto L_08B0A568;
    }
L_08B0A568:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(128));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08B0A584;
      }
      goto L_08B0A578;
    }
L_08B0A578:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    goto L_08B0A57C;
L_08B0A57C:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08B0A57C;
      }
      goto L_08B0A584;
    }
L_08B0A584:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B0A598;
      }
      goto L_08B0A590;
    }
L_08B0A590:
    ctx.gpr[31] = (0x08B0A598u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 668u, 0x08AA3200u>(ctx, &aot_mem) && ctx.pc == 0x08B0A598u) goto L_08B0A598;
    return;
L_08B0A598:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[17] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B0A568;
      }
      goto L_08B0A5AC;
    }
L_08B0A5AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    goto L_08B0A5B0;
L_08B0A5B0:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[6];
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08B0A614;
      }
      goto L_08B0A5C4;
    }
L_08B0A5C4:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[4];
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_08B0A5E4;
      }
      goto L_08B0A5D8;
    }
L_08B0A5D8:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(8));
    goto L_08B0A5DC;
L_08B0A5DC:
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[4];
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08B0A5DC;
      }
      goto L_08B0A5E4;
    }
L_08B0A5E4:
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08B0A5FC;
      }
      goto L_08B0A5F0;
    }
L_08B0A5F0:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    goto L_08B0A5F4;
L_08B0A5F4:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08B0A5F4;
      }
      goto L_08B0A5FC;
    }
L_08B0A5FC:
    if (ctx.gpr[7] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_08B0A62C;
    }
    goto L_08B0A604;
L_08B0A604:
    ctx.gpr[31] = (0x08B0A60Cu);
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 668u, 0x08AA3200u>(ctx, &aot_mem) && ctx.pc == 0x08B0A60Cu) goto L_08B0A60C;
    return;
L_08B0A60C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08B0A62C;
      }
      goto L_08B0A614;
    }
L_08B0A614:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08B0A628;
      }
      goto L_08B0A61C;
    }
L_08B0A61C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    goto L_08B0A620;
L_08B0A620:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08B0A620;
      }
      goto L_08B0A628;
    }
L_08B0A628:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08B0A62C;
L_08B0A62C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0A660:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(ctx.gpr[8]));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 2u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[8] >> 30u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[7] - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B0A6BC;
      }
      goto L_08B0A6A8;
    }
L_08B0A6A8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08B0A6B8u);
    ctx.gpr[6] = (0u | 0u);
    goto L_08B0AEB0;
L_08B0A6B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    goto L_08B0A6BC;
L_08B0A6BC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 128u);
    ctx.gpr[31] = (0x08B0A6CCu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 660u, 0x08AA3170u>(ctx, &aot_mem) && ctx.pc == 0x08B0A6CCu) goto L_08B0A6CC;
    return;
L_08B0A6CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_08B0A6F0;
      }
      goto L_08B0A6DC;
    }
L_08B0A6DC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[31] = (0x08B0A6E8u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 362u, 0x08AF9910u>(ctx, &aot_mem) && ctx.pc == 0x08B0A6E8u) goto L_08B0A6E8;
    return;
L_08B0A6E8:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    goto L_08B0A6F0;
L_08B0A6F0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
        goto L_08B0A718;
    }
    goto L_08B0A704;
L_08B0A704:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(16))))));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    goto L_08B0A718;
L_08B0A718:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(128));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0A744:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[7]);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(ctx.gpr[8]));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 2u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[7] >> 30u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B0A798;
      }
      goto L_08B0A784;
    }
L_08B0A784:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08B0A794u);
    ctx.gpr[6] = (0u | 1u);
    goto L_08B0AEB0;
L_08B0A794:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    goto L_08B0A798;
L_08B0A798:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 128u);
    ctx.gpr[31] = (0x08B0A7A8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 660u, 0x08AA3170u>(ctx, &aot_mem) && ctx.pc == 0x08B0A7A8u) goto L_08B0A7A8;
    return;
L_08B0A7A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_08B0A7CC;
      }
      goto L_08B0A7B8;
    }
L_08B0A7B8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[31] = (0x08B0A7C4u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 362u, 0x08AF9910u>(ctx, &aot_mem) && ctx.pc == 0x08B0A7C4u) goto L_08B0A7C4;
    return;
L_08B0A7C4:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    goto L_08B0A7CC;
L_08B0A7CC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-4), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-4));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(128));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08B0A80C;
      }
      goto L_08B0A7FC;
    }
L_08B0A7FC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(16))))));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    goto L_08B0A80C;
L_08B0A80C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0A818:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
        goto L_08B0A840;
    }
    goto L_08B0A834;
L_08B0A834:
    ctx.gpr[31] = (0x08B0A83Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 668u, 0x08AA3200u>(ctx, &aot_mem) && ctx.pc == 0x08B0A83Cu) goto L_08B0A83C;
    return;
L_08B0A83C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    goto L_08B0A840;
L_08B0A840:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(128));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0A870:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[16]);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(52), static_cast<std::uint16_t>(ctx.gpr[8]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[6]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B0A8C4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[7]);
    goto L_08B0A92C;
L_08B0A8C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0A92C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-336));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(316), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(320), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 2u));
    ctx.gpr[8] = (ctx.gpr[8] >> 30u);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[7] - ctx.gpr[9]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 2u));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 3u));
    ctx.gpr[10] = (ctx.gpr[6] << 4u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[9] = (ctx.gpr[9] >> 29u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 3u));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[9] = (ctx.gpr[6] - ctx.gpr[7]);
    ctx.gpr[8] = (ctx.gpr[10] + ctx.gpr[8]);
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 3u));
    ctx.gpr[10] = (ctx.gpr[11] - ctx.gpr[5]);
    ctx.gpr[11] = (ctx.gpr[2] >> 29u);
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[11]);
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 3u));
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[10]) >> 2u));
    ctx.gpr[9] = (ctx.gpr[11] - ctx.gpr[3]);
    ctx.gpr[2] = (ctx.gpr[2] >> 30u);
    ctx.gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 3u));
    ctx.gpr[10] = (ctx.gpr[10] + ctx.gpr[2]);
    ctx.gpr[11] = (ctx.gpr[11] >> 29u);
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[10]) >> 2u));
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[11]);
    ctx.gpr[10] = (ctx.gpr[10] << 4u);
    ctx.gpr[11] = (ctx.gpr[6] - ctx.gpr[7]);
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 3u));
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[11]) >> 3u));
    ctx.gpr[9] = (ctx.gpr[10] + ctx.gpr[9]);
    ctx.gpr[10] = (ctx.gpr[2] >> 29u);
    ctx.gpr[10] = (ctx.gpr[11] + ctx.gpr[10]);
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[10]) >> 3u));
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[10]);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(-16));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-16));
    ctx.gpr[9] = (ctx.gpr[9] >> 1u);
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(324), ctx.gpr[31]);
    if (ctx.gpr[9] == 0u) {
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
        goto L_08B0AC48;
    }
    goto L_08B0AA10;
L_08B0AA10:
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[9] = (ctx.gpr[7] | 0u);
    { const bool branch_taken = ctx.gpr[9] == ctx.gpr[11];
    ctx.gpr[10] = (ctx.gpr[7] + static_cast<std::uint32_t>(-8));
      if (branch_taken) {
          goto L_08B0AA54;
      }
      goto L_08B0AA20;
    }
L_08B0AA20:
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-8));
      if (branch_taken) {
          goto L_08B0AA4C;
      }
      goto L_08B0AA28;
    }
L_08B0AA28:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[9] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store16(ctx.gpr[10] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-8));
    goto L_08B0AA4C;
L_08B0AA4C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
      if (branch_taken) {
          goto L_08B0AA7C;
      }
      goto L_08B0AA54;
    }
L_08B0AA54:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(308), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(312), ctx.gpr[8]);
    ctx.gpr[31] = (0x08B0AA64u);
    ctx.gpr[5] = (ctx.gpr[9] | 0u);
    goto L_08B0A744;
L_08B0AA64:
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(312)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(0)));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(4)));
    goto L_08B0AA7C;
L_08B0AA7C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[11]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[5]);
    ctx.gpr[10] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[10]);
    { const bool branch_taken = ctx.gpr[10] != ctx.gpr[9];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
      if (branch_taken) {
          goto L_08B0AAC4;
      }
      goto L_08B0AAA4;
    }
L_08B0AAA4:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(128));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[10]);
    goto L_08B0AAC4;
L_08B0AAC4:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[10] + static_cast<std::uint32_t>(8));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[9];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B0AB10;
      }
      goto L_08B0AAEC;
    }
L_08B0AAEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[9]);
    ctx.gpr[4] = (ctx.gpr[9] + static_cast<std::uint32_t>(128));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[9]);
    goto L_08B0AB10;
L_08B0AB10:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(264), ctx.gpr[11]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(268), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(272), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(260));
    ctx.gpr[31] = (0x08B0AB2Cu);
    ctx.gpr[5] = (ctx.gpr[8] | 0u);
    goto L_08B09608;
L_08B0AB2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[4]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[8];
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
      if (branch_taken) {
          goto L_08B0ABCC;
      }
      goto L_08B0ABAC;
    }
L_08B0ABAC:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(128));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[8]);
    goto L_08B0ABCC;
L_08B0ABCC:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[6]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[5]);
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[10] = (ctx.gpr[29] + static_cast<std::uint32_t>(52));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(68));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(84));
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
    ctx.gpr[31] = (0x08B0AC3Cu);
    ctx.gpr[5] = (ctx.gpr[10] | 0u);
    goto L_08B09A20;
L_08B0AC3C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08B0AE80;
      }
      goto L_08B0AC44;
    }
L_08B0AC44:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    goto L_08B0AC48;
L_08B0AC48:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), ctx.gpr[9]);
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(280), ctx.gpr[10]);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(284), ctx.gpr[11]);
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[10];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(288), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08B0AC88;
      }
      goto L_08B0AC68;
    }
L_08B0AC68:
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(288)));
    ctx.gpr[3] = (ctx.gpr[3] + static_cast<std::uint32_t>(-4));
    ctx.gpr[12] = (aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(288), ctx.gpr[3]);
    ctx.gpr[3] = (ctx.gpr[12] + static_cast<std::uint32_t>(128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(280), ctx.gpr[12]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(284), ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), ctx.gpr[3]);
    goto L_08B0AC88;
L_08B0AC88:
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    ctx.gpr[12] = (ctx.gpr[11] + static_cast<std::uint32_t>(-8));
    ctx.gpr[3] = (ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    { const bool branch_taken = ctx.gpr[9] == ctx.gpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08B0ACE4;
      }
      goto L_08B0AC9C;
    }
L_08B0AC9C:
    ctx.gpr[12] = (ctx.gpr[9] | 0u);
    { const bool branch_taken = ctx.gpr[12] == 0u;
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08B0ACD8;
      }
      goto L_08B0ACA8;
    }
L_08B0ACA8:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[3] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store16(ctx.gpr[12] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(8));
    goto L_08B0ACD8;
L_08B0ACD8:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[9]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08B0AD1C;
      }
      goto L_08B0ACE4;
    }
L_08B0ACE4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(308), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(312), ctx.gpr[8]);
    ctx.gpr[31] = (0x08B0ACF4u);
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    goto L_08B0A660;
L_08B0ACF4:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(312)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28)));
    goto L_08B0AD1C;
L_08B0AD1C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(232), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(236), ctx.gpr[11]);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    { const bool branch_taken = ctx.gpr[10] != ctx.gpr[11];
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(240)));
      if (branch_taken) {
          goto L_08B0AD58;
      }
      goto L_08B0AD3C;
    }
L_08B0AD3C:
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(-4));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), ctx.gpr[9]);
    ctx.gpr[11] = (ctx.gpr[10] + static_cast<std::uint32_t>(128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(232), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(236), ctx.gpr[11]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), ctx.gpr[11]);
    goto L_08B0AD58;
L_08B0AD58:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(-8));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), ctx.gpr[10]);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(236)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(248), ctx.gpr[11]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(252), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[10] != ctx.gpr[11];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), ctx.gpr[9]);
      if (branch_taken) {
          goto L_08B0ADA0;
      }
      goto L_08B0AD80;
    }
L_08B0AD80:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(-4));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[10] + static_cast<std::uint32_t>(128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(248), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(252), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), ctx.gpr[9]);
    goto L_08B0ADA0;
L_08B0ADA0:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(244)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(292), ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[9] + static_cast<std::uint32_t>(-8));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(296), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(300), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(304), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(292));
    ctx.gpr[31] = (0x08B0ADC8u);
    ctx.gpr[5] = (ctx.gpr[8] | 0u);
    goto L_08B09608;
L_08B0ADC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(244)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), ctx.gpr[5]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(248)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(252)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), ctx.gpr[6]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(236)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(240)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(220), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(164));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(180));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(196));
    ctx.gpr[31] = (0x08B0AE7Cu);
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(212));
    goto L_08B09C44;
L_08B0AE7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_08B0AE80;
L_08B0AE80:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(316)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(320)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(324)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(336));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0AEB0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[8] = (ctx.gpr[18] - ctx.gpr[4]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 2u));
    ctx.gpr[9] = (ctx.gpr[5] >> 30u);
    ctx.gpr[5] = (ctx.gpr[6] & 255u);
    ctx.gpr[6] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 2u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[7]);
    ctx.gpr[19] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[19]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[9] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[9] = (ctx.gpr[9] < ctx.gpr[8] ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[19] = (ctx.gpr[19] << 2u);
      if (branch_taken) {
          goto L_08B0AFF4;
      }
      goto L_08B0AF1C;
    }
L_08B0AF1C:
    ctx.gpr[9] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[8] - ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (ctx.gpr[5] >> 1u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    if (ctx.gpr[9] != 0u) {
    ctx.gpr[5] = (ctx.gpr[7] << 2u);
        goto L_08B0AF44;
    }
    goto L_08B0AF44;
L_08B0AF44:
    ctx.gpr[17] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[22] = (ctx.gpr[17] + ctx.gpr[19]);
    ctx.gpr[5] = (ctx.gpr[17] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(-4));
      if (branch_taken) {
          goto L_08B0AFA0;
      }
      goto L_08B0AF58;
    }
L_08B0AF58:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(25))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(0u));
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(28))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[31] = (0x08B0AF78u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(29), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08B095E8;
L_08B0AF78:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(44))))));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[19];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(27), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08B0B128;
      }
      goto L_08B0AF88;
    }
L_08B0AF88:
    ctx.gpr[6] = (ctx.gpr[18] - ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B0AF98u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 539u, 0x08932C08u>(ctx, &aot_mem) && ctx.pc == 0x08B0AF98u) goto L_08B0AF98;
    return;
L_08B0AF98:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08B0B12C;
      }
      goto L_08B0AFA0;
    }
L_08B0AFA0:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(31), static_cast<std::uint8_t>(0u));
    ctx.gpr[20] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(31))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(34), static_cast<std::uint8_t>(0u));
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(34))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(30), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[31] = (0x08B0AFC4u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(35), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08B095E8;
L_08B0AFC4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[4] = (ctx.gpr[20] - ctx.gpr[18]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(33), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08B0B128;
      }
      goto L_08B0AFD8;
    }
L_08B0AFD8:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[31] = (0x08B0AFECu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 539u, 0x08932C08u>(ctx, &aot_mem) && ctx.pc == 0x08B0AFECu) goto L_08B0AFEC;
    return;
L_08B0AFEC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08B0B12C;
      }
      goto L_08B0AFF4;
    }
L_08B0AFF4:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[7] = (ctx.gpr[9] < ctx.gpr[7] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[9]);
      if (branch_taken) {
          goto L_08B0B018;
      }
      goto L_08B0B004;
    }
L_08B0B004:
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[7]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08B0B028;
      }
      goto L_08B0B018;
    }
L_08B0B018:
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[7]);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(2));
    goto L_08B0B028;
L_08B0B028:
    ctx.gpr[20] = (ctx.gpr[8] | 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    ctx.gpr[21] = (0u | 0u);
      if (branch_taken) {
          goto L_08B0B08C;
      }
      goto L_08B0B034;
    }
L_08B0B034:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[8]);
    ctx.gpr[4] = (ctx.gpr[8] << 2u);
    ctx.gpr[31] = (0x08B0B04Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 660u, 0x08AA3170u>(ctx, &aot_mem) && ctx.pc == 0x08B0B04Cu) goto L_08B0B04C;
    return;
L_08B0B04C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[21] != 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
      if (branch_taken) {
          goto L_08B0B084;
      }
      goto L_08B0B064;
    }
L_08B0B064:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[6]);
    ctx.gpr[31] = (0x08B0B074u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[8]);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 362u, 0x08AF9910u>(ctx, &aot_mem) && ctx.pc == 0x08B0B074u) goto L_08B0B074;
    return;
L_08B0B074:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    goto L_08B0B084;
L_08B0B084:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    goto L_08B0B08C;
L_08B0B08C:
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[8] - ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] >> 1u);
    ctx.gpr[6] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (ctx.gpr[21] + ctx.gpr[6]);
    ctx.gpr[5] = (0u | 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08B0B0B4;
      }
      goto L_08B0B0AC;
    }
L_08B0B0AC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    goto L_08B0B0B4;
L_08B0B0B4:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(37), static_cast<std::uint8_t>(0u));
    ctx.gpr[17] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[22] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(37))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(0u));
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(40))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[31] = (0x08B0B0DCu);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(41), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08B095E8;
L_08B0B0DC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(52))))));
    ctx.gpr[22] = (ctx.gpr[17] + ctx.gpr[22]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(39), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[19];
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(-4));
      if (branch_taken) {
          goto L_08B0B0FC;
      }
      goto L_08B0B0F4;
    }
L_08B0B0F4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08B0B110;
      }
      goto L_08B0B0FC;
    }
L_08B0B0FC:
    ctx.gpr[6] = (ctx.gpr[18] - ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B0B10Cu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 539u, 0x08932C08u>(ctx, &aot_mem) && ctx.pc == 0x08B0B10Cu) goto L_08B0B10C;
    return;
L_08B0B10C:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    goto L_08B0B110;
L_08B0B110:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B0B120;
      }
      goto L_08B0B118;
    }
L_08B0B118:
    ctx.gpr[31] = (0x08B0B120u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 668u, 0x08AA3200u>(ctx, &aot_mem) && ctx.pc == 0x08B0B120u) goto L_08B0B120;
    return;
L_08B0B120:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    goto L_08B0B128;
L_08B0B128:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_08B0B12C;
L_08B0B12C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(128));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), ctx.gpr[22]);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(128));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0B178:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-11644)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B0B19C;
      }
      goto L_08B0B194;
    }
L_08B0B194:
    ctx.gpr[31] = (0x08B0B19Cu);
    // nop
    goto L_08B0B360;
L_08B0B19C:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-11644)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0B1B0:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0B1BC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B0B208;
      }
      goto L_08B0B1CC;
    }
L_08B0B1CC:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
        goto L_08B0B1F8;
    }
    goto L_08B0B1D4;
L_08B0B1D4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
        goto L_08B0B1F8;
    }
    goto L_08B0B1E0;
L_08B0B1E0:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    goto L_08B0B1F8;
L_08B0B1F8:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B0B208;
      }
      goto L_08B0B200;
    }
L_08B0B200:
    ctx.gpr[31] = (0x08B0B208u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 656u, 0x08AA3128u>(ctx, &aot_mem) && ctx.pc == 0x08B0B208u) goto L_08B0B208;
    return;
L_08B0B208:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0B214:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B0B25C;
      }
      goto L_08B0B224;
    }
L_08B0B224:
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-7940));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.gpr[6] = (2230u << 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-11644), 0u);
      if (branch_taken) {
          goto L_08B0B248;
      }
      goto L_08B0B23C;
    }
L_08B0B23C:
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-9668));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    goto L_08B0B248;
L_08B0B248:
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B0B25C;
      }
      goto L_08B0B254;
    }
L_08B0B254:
    ctx.gpr[31] = (0x08B0B25Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 656u, 0x08AA3128u>(ctx, &aot_mem) && ctx.pc == 0x08B0B25Cu) goto L_08B0B25C;
    return;
L_08B0B25C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0B268:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B0B318;
      }
      goto L_08B0B288;
    }
L_08B0B288:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7924));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(3324));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(3316));
      if (branch_taken) {
          goto L_08B0B2A8;
      }
      goto L_08B0B2A0;
    }
L_08B0B2A0:
    ctx.gpr[31] = (0x08B0B2A8u);
    // nop
    goto L_08B0B330;
L_08B0B2A8:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[7] = (2225u << 16u);
      if (branch_taken) {
          goto L_08B0B2BC;
      }
      goto L_08B0B2B0;
    }
L_08B0B2B0:
    ctx.gpr[31] = (0x08B0B2B8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_08B0B330;
L_08B0B2B8:
    ctx.gpr[7] = (2225u << 16u);
    goto L_08B0B2BC;
L_08B0B2BC:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(240));
    ctx.gpr[5] = (0u | 64u);
    ctx.gpr[6] = (0u | 48u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[31] = (0x08B0B2D8u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-20036));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 356u, 0x08AF5BC0u>(ctx, &aot_mem) && ctx.pc == 0x08B0B2D8u) goto L_08B0B2D8;
    return;
L_08B0B2D8:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
      if (branch_taken) {
          goto L_08B0B308;
      }
      goto L_08B0B2E0;
    }
L_08B0B2E0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7940));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-11644), 0u);
      if (branch_taken) {
          goto L_08B0B304;
      }
      goto L_08B0B2F8;
    }
L_08B0B2F8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9668));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    goto L_08B0B304;
L_08B0B304:
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    goto L_08B0B308;
L_08B0B308:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B0B318;
      }
      goto L_08B0B310;
    }
L_08B0B310:
    ctx.gpr[31] = (0x08B0B318u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 656u, 0x08AA3128u>(ctx, &aot_mem) && ctx.pc == 0x08B0B318u) goto L_08B0B318;
    return;
L_08B0B318:
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
L_08B0B330:
    ctx.gpr[5] = (ctx.gpr[4] - 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08B0B354;
      }
      goto L_08B0B340;
    }
L_08B0B340:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08B0B340;
      }
      goto L_08B0B354;
    }
L_08B0B354:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0B360:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B0B37Cu);
    ctx.gpr[4] = (0u | 3344u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08B0B37Cu) goto L_08B0B37C;
    return;
L_08B0B37C:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B0B394;
      }
      goto L_08B0B388;
    }
L_08B0B388:
    ctx.gpr[31] = (0x08B0B390u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 5u, 0x08AC803Cu>(ctx, &aot_mem) && ctx.pc == 0x08B0B390u) goto L_08B0B390;
    return;
L_08B0B390:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08B0B394;
L_08B0B394:
    ctx.gpr[16] = (2230u << 16u);
    ctx.gpr[31] = (0x08B0B3A0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-11644), ctx.gpr[17]);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 261u, 0x08A2956Cu>(ctx, &aot_mem) && ctx.pc == 0x08B0B3A0u) goto L_08B0B3A0;
    return;
L_08B0B3A0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-11644)));
    ctx.gpr[31] = (0x08B0B3ACu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 259u, 0x08A29554u>(ctx, &aot_mem) && ctx.pc == 0x08B0B3ACu) goto L_08B0B3AC;
    return;
L_08B0B3AC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0B3C0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-128));
      if (branch_taken) {
          goto L_08B0B410;
      }
      goto L_08B0B3D4;
    }
L_08B0B3D4:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    goto L_08B0B3D8;
L_08B0B3D8:
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[8] | 128u);
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (ctx.gpr[8] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
        goto L_08B0B3D8;
    }
    goto L_08B0B410;
L_08B0B410:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0B418:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-128));
      if (branch_taken) {
          goto L_08B0B468;
      }
      goto L_08B0B42C;
    }
L_08B0B42C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    goto L_08B0B430;
L_08B0B430:
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[8] | 128u);
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (ctx.gpr[8] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
        goto L_08B0B430;
    }
    goto L_08B0B468;
L_08B0B468:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0B470:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-128));
      if (branch_taken) {
          goto L_08B0B4C0;
      }
      goto L_08B0B484;
    }
L_08B0B484:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    goto L_08B0B488;
L_08B0B488:
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[8] | 128u);
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (ctx.gpr[8] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
        goto L_08B0B488;
    }
    goto L_08B0B4C0;
L_08B0B4C0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0B4C8:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0B4D0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[6] = (2230u << 16u);
      if (branch_taken) {
          goto L_08B0B51C;
      }
      goto L_08B0B4E0;
    }
L_08B0B4E0:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-11640));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08B0B508;
      }
      goto L_08B0B4EC;
    }
L_08B0B4EC:
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-13172));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08B0B508;
      }
      goto L_08B0B4FC;
    }
L_08B0B4FC:
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-13268));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
    goto L_08B0B508;
L_08B0B508:
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B0B51C;
      }
      goto L_08B0B514;
    }
L_08B0B514:
    ctx.gpr[31] = (0x08B0B51Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 656u, 0x08AA3128u>(ctx, &aot_mem) && ctx.pc == 0x08B0B51Cu) goto L_08B0B51C;
    return;
L_08B0B51C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0B528:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-11544));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0B558:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_08B0B5A0;
      }
      goto L_08B0B580;
    }
L_08B0B580:
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[6]);
      if (branch_taken) {
          goto L_08B0B5A0;
      }
      goto L_08B0B5A0;
    }
L_08B0B5A0:
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    jump_target = ctx.gpr[8];
    ctx.gpr[31] = (0x08B0B5B0u);
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B0B5B0u) goto L_08B0B5B0;
    return;
L_08B0B5B0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0B5BC:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0B5C4:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0B5D4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0B5DC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0B5E4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0B5EC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0B5F4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0B5FC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0B604:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0B60C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0B614:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0B61C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0B624:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0B62C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0B634:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0B63C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0B644:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0B64C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0B654:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0B65C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0B664:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0B66C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0B674:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0B67C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0B684:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0B68C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0B694:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0B69C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0B6A4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0B6AC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0B6B4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0B6BC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0B6C4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0B6CC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0B6D4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0B6DC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0B6E4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0B6EC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0B6F4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0B6FC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0B704:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0B70C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0B714:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0B71C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0B724:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0B72C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0B734:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0B73C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0B744:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0B74C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0B754:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0B75C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0B764:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0B76C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0B774:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0B77C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0B784:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0B78C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0B794:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0B79C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0B7A4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0B7AC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0B7B4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0B7BC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0B7C4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0B7CC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0B7D4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0B7DC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0B7E4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0B7EC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0B7F4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0B7FC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0B804:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0B80C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0B814:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0B81C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0B824:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0B82C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0B834:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0B83C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0B844:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0B84C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0B854:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0B85C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0B864:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0B86C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0B874:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0B87C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0B884:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0B88C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0B894:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0B89C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0B8A4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0B8AC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0B8B4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0B8CC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0B8D4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0B8DC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0B8E4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0B8EC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0B8F4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0B8FC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0B904:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0B90C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0B914:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0B91C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0B924:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0B92C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0B934:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0B93C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0B944:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0B94C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0B954:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0B95C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0B964:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0B96C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0B974:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0B97C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0B984:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0B99C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0B9A4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0B9AC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0B9C4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0B9D4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0B9E4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0B9F4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0B9FC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0BA04:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0BA14:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0BA1C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0BA24:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0BA2C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0BA34:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0BA3C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0BA44:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0BA64:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0BA74:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0BA7C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0BA84:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0BA8C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0BA94:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0BA9C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0BAAC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0BABC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0BACC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0BAD4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0BADC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0BAE4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0BAEC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0BAF4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0BAFC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0BB04:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0BB0C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0BB14:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0BB1C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0BB24:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0BB2C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0BB34:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0BB3C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0BB44:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0BB4C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0BB54:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0BB5C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0BB64:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0BB6C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0BB74:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0BB7C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0BB84:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0BB8C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0BB94:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0BB9C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0BBA4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0BBAC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0BBB4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0BBBC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0BBC4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0BBCC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0BBD4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0BBDC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0BBE4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0BBEC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0BBF4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0BC04:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0BC0C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0BC14:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0BC1C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0BC24:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0BC2C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0BC34:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0BC3C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0BC44:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0BC4C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0BC54:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0BC5C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0BC64:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0BC6C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0BC74:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0BC7C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0BC84:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0BC8C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0BC94:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0BC9C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0BCA4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0BCAC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0BCB4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0BCBC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0BCCC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0BCD4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0BCDC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0BCE4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0BCEC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0BCF4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0BCFC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0BD04:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0BD0C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0BD14:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0BD1C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0BD24:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0BD2C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0BD34:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0BD40:
    // nop
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(0u + static_cast<std::uint32_t>(0))))));
    (void)(ctx.gpr[2] << (0u & 31u));
    // nop
    ctx.pc = 0x02C30540u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B0BD50:
    // nop
    // nop
    goto L_08B0BD58;
L_08B0BD58:
    rt.unsupported(0x08B0BD5Cu, 0x40010011u, "unknown not lowered yet"); return;
    ctx.pc = 0x02C2FE20u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B0BF4C:
    // nop
    goto L_08B0BF50;
L_08B0BF50:
    (void)(ctx.gpr[1] << 0u);
    ctx.gpr[1] = (ctx.gpr[26] & 21575u);
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    rt.unsupported(0x08B0BF74u, 0x08B0BD40u, "control flow in delay slot"); return;
L_08B0BF88:
    rt.unsupported(0x08B0BF88u, 0x69466F49u, "unknown not lowered yet"); return;
L_08B0BFA0:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<76u, 1u>(vfpu_d); }
    rt.unsupported(0x08B0BFA4u, 0x63657845u, "vfpu0 not lowered yet"); return;
L_08B0BFB0:
    // nop
    goto L_08B0BFB4;
L_08B0BFB4:
    rt.unsupported(0x08B0BFB4u, 0x75646F4Du, "unknown not lowered yet"); return;
L_08B0BFCC:
    rt.unsupported(0x08B0BFCCu, 0x69647453u, "unknown not lowered yet"); return;
L_08B0BFE0:
    rt.unsupported(0x08B0BFE0u, 0x4D737953u, "unknown not lowered yet"); return;
L_08B0BFF8:
    ctx.execute_vfpu_vscl_ct<84u, 104u, 114u, 1u>();
    rt.unsupported(0x08B0BFFCu, 0x614D6461u, "vfpu0 not lowered yet"); return;
}

void recomp_unit_0193(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0193_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_193(Runtime &runtime) {
    runtime.register_generated_unit(193u, 0x08B08000u, 16384u, &recomp_unit_0193, &recomp_unit_0193_entry);
    runtime.register_function(0x08B08000u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08020u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08028u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08054u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0805Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08064u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0806Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08074u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0807Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B080A8u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B080B0u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B080B8u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B080C0u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B080ECu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B080F4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B080FCu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08100u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08130u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08160u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0816Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B081C0u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B081D4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B081ECu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08264u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08274u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0828Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08298u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B082A4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B082ACu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B082B8u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B082C8u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B082D4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B082ECu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B082F8u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08304u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0830Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08318u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08330u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08344u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08364u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08398u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B083B0u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B083C8u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B083F4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08420u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08424u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08434u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08448u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08468u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0848Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08498u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B084A4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B084B8u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B084D8u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B084DCu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B084F4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08500u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08508u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08514u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08524u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08540u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0854Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08554u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08558u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0856Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0858Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08598u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B085ACu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B085C4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B085DCu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B085E4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B085ECu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08624u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08628u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08630u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0864Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08668u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08698u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B086C8u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B086E8u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08700u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0870Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08818u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0884Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08858u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08868u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08878u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0887Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08884u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08888u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0889Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B088A8u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B088B8u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B088C8u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B088CCu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B088D4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B088D8u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08904u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0890Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0892Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08930u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08964u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08984u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08990u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B089A4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B089D0u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B089D4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B089ECu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B089FCu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08A18u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08A24u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08A2Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08A30u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08A54u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08A78u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08AA4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08AACu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08AB4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08AD4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08AE8u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08AFCu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08B0Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08B18u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08B24u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08B3Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08B5Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08B74u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08B84u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08B8Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08BA0u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08BB4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08BC4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08BD0u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08BDCu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08BF4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08C18u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08C1Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08C38u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08C60u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08C9Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08CBCu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08CC8u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08CCCu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08CD4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08CDCu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08D04u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08D0Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08D14u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08D30u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08D44u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08D6Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08D88u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08D9Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08DACu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08DCCu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08E08u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08E14u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08E3Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08E58u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08E60u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08E70u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08E7Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08EA0u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08EACu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08EBCu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08EE4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08EECu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08F08u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08F10u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08F1Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08F30u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08F4Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08F54u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08F70u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08F78u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08F88u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08F94u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08FA4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08FD4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08FF8u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09000u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09010u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0901Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09028u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09050u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09078u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0908Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B090A8u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B090B0u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B090CCu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B090D4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B090E0u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B090ECu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09108u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09110u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09118u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09128u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09150u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09164u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09180u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09188u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B091A4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B091ACu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B091B4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B091C0u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B091D0u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B091DCu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B091FCu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09208u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09210u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09218u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0923Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0926Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09278u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09288u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09298u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B092A8u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B092C4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B092CCu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B092D4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B092DCu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B092E4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B092E8u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B092F0u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0930Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09320u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0932Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09338u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09340u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09354u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0935Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09378u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09388u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09394u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0939Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B093A0u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B093B0u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B093C4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B093CCu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B093D4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B093E0u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B093F0u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B093FCu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09404u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09408u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09414u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09424u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09448u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09458u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09464u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09470u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B094C8u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B094E4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B094F8u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0950Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09518u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09534u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09544u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09558u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09564u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09570u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09578u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0958Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B095A8u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B095C0u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B095CCu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B095D4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B095E8u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B095FCu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09608u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09630u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09638u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09644u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0964Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09660u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09680u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B096B8u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B096C0u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B096DCu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B096E8u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B096FCu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09708u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09710u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09714u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0971Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09724u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09738u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0976Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09778u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09780u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09790u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B097A8u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B097C0u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B097D4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B097E4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B097E8u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09824u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09888u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B098A0u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B098B4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B098C8u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B098D8u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B098E4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B098F8u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09904u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09928u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09934u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0993Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0994Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09960u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0998Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09994u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B099A4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B099ACu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B099C0u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B099E0u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09A18u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09A20u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09B80u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09B84u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09BB0u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09BD4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09BECu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09C10u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09C1Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09C44u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09DA4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09DB8u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09DDCu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09DF8u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09E18u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09E40u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09E68u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09EB0u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09ECCu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09ED4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09EF8u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09EFCu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A030u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A0B4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A0E0u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A1F0u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A1F4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A208u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A22Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A248u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A258u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A27Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A2F8u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A324u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A434u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A438u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A44Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A470u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A48Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A4A4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A4C8u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A4F4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A518u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A53Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A568u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A578u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A57Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A584u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A590u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A598u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A5ACu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A5B0u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A5C4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A5D8u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A5DCu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A5E4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A5F0u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A5F4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A5FCu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A604u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A60Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A614u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A61Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A620u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A628u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A62Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A660u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A6A8u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A6B8u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A6BCu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A6CCu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A6DCu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A6E8u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A6F0u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A704u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A718u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A744u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A784u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A794u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A798u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A7A8u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A7B8u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A7C4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A7CCu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A7FCu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A80Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A818u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A834u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A83Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A840u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A870u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A8C4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A92Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0AA10u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0AA20u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0AA28u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0AA4Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0AA54u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0AA64u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0AA7Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0AAA4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0AAC4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0AAECu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0AB10u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0AB2Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0ABACu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0ABCCu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0AC3Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0AC44u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0AC48u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0AC68u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0AC88u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0AC9Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0ACA8u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0ACD8u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0ACE4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0ACF4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0AD1Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0AD3Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0AD58u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0AD80u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0ADA0u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0ADC8u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0AE7Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0AE80u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0AEB0u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0AF1Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0AF44u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0AF58u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0AF78u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0AF88u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0AF98u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0AFA0u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0AFC4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0AFD8u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0AFECu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0AFF4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B004u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B018u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B028u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B034u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B04Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B064u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B074u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B084u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B08Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B0ACu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B0B4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B0DCu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B0F4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B0FCu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B10Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B110u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B118u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B120u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B128u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B12Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B178u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B194u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B19Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B1B0u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B1BCu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B1CCu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B1D4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B1E0u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B1F8u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B200u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B208u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B214u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B224u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B23Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B248u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B254u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B25Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B268u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B288u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B2A0u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B2A8u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B2B0u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B2B8u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B2BCu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B2D8u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B2E0u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B2F8u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B304u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B308u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B310u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B318u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B330u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B340u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B354u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B360u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B37Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B388u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B390u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B394u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B3A0u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B3ACu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B3C0u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B3D4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B3D8u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B410u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B418u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B42Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B430u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B468u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B470u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B484u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B488u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B4C0u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B4C8u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B4D0u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B4E0u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B4ECu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B4FCu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B508u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B514u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B51Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B528u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B558u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B580u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B5A0u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B5B0u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B5BCu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B5C4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B5D4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B5DCu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B5E4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B5ECu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B5F4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B5FCu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B604u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B60Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B614u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B61Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B624u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B62Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B634u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B63Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B644u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B64Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B654u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B65Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B664u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B66Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B674u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B67Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B684u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B68Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B694u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B69Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B6A4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B6ACu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B6B4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B6BCu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B6C4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B6CCu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B6D4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B6DCu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B6E4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B6ECu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B6F4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B6FCu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B704u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B70Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B714u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B71Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B724u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B72Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B734u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B73Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B744u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B74Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B754u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B75Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B764u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B76Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B774u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B77Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B784u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B78Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B794u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B79Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B7A4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B7ACu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B7B4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B7BCu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B7C4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B7CCu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B7D4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B7DCu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B7E4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B7ECu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B7F4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B7FCu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B804u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B80Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B814u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B81Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B824u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B82Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B834u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B83Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B844u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B84Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B854u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B85Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B864u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B86Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B874u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B87Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B884u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B88Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B894u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B89Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B8A4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B8ACu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B8B4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B8CCu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B8D4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B8DCu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B8E4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B8ECu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B8F4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B8FCu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B904u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B90Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B914u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B91Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B924u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B92Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B934u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B93Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B944u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B94Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B954u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B95Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B964u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B96Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B974u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B97Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B984u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B99Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B9A4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B9ACu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B9C4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B9D4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B9E4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B9F4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B9FCu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BA04u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BA14u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BA1Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BA24u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BA2Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BA34u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BA3Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BA44u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BA64u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BA74u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BA7Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BA84u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BA8Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BA94u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BA9Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BAACu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BABCu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BACCu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BAD4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BADCu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BAE4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BAECu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BAF4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BAFCu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BB04u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BB0Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BB14u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BB1Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BB24u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BB2Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BB34u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BB3Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BB44u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BB4Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BB54u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BB5Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BB64u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BB6Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BB74u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BB7Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BB84u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BB8Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BB94u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BB9Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BBA4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BBACu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BBB4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BBBCu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BBC4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BBCCu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BBD4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BBDCu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BBE4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BBECu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BBF4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BC04u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BC0Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BC14u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BC1Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BC24u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BC2Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BC34u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BC3Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BC44u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BC4Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BC54u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BC5Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BC64u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BC6Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BC74u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BC7Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BC84u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BC8Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BC94u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BC9Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BCA4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BCACu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BCB4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BCBCu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BCCCu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BCD4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BCDCu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BCE4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BCECu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BCF4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BCFCu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BD04u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BD0Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BD14u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BD1Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BD24u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BD2Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BD34u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BD40u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BD50u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BD58u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BF4Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BF50u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BF88u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BFA0u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BFB0u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BFB4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BFCCu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BFE0u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BFF8u, &recomp_unit_0193, "recomp_unit_0193");
}
} // namespace psprecomp
