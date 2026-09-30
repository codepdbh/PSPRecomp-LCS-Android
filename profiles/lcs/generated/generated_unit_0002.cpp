#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0002[4082] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 3, 0, 0, 4, 0, 0, 5, 0, 6,
    0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0,
    9, 0, 10, 0, 0, 0, 11, 0, 12, 13, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 15, 0, 0, 16, 0, 0, 0, 17, 0, 18,
    19, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 22, 0, 0, 0, 23, 0, 24, 25, 0, 0, 0, 0, 0, 26, 0,
    0, 0, 0, 0, 0, 0, 27, 0, 0, 28, 0, 0, 0, 29, 0, 30, 31, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 33, 0,
    0, 34, 0, 0, 35, 0, 0, 36, 0, 0, 0, 37, 0, 38, 39, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 42,
    0, 0, 0, 43, 0, 44, 45, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 48, 0, 49, 0, 0, 0, 50, 0, 0,
    51, 0, 52, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0,
    56, 0, 0, 57, 0, 58, 0, 59, 0, 60, 0, 0, 61, 0, 62, 0, 63, 0, 64, 0, 65, 0, 66, 0, 67, 0, 68, 69, 0, 0, 70, 0,
    71, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 75, 0, 76, 0, 0, 0,
    77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0,
    0, 83, 0, 0, 0, 84, 0, 0, 0, 85, 0, 0, 0, 86, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0,
    89, 0, 0, 90, 0, 0, 0, 91, 0, 0, 92, 0, 93, 94, 95, 0, 0, 0, 0, 96, 0, 0, 0, 0, 97, 0, 98, 0, 0, 0, 99, 0,
    0, 100, 0, 101, 0, 0, 0, 102, 0, 0, 0, 103, 0, 0, 0, 104, 0, 0, 0, 105, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 109, 0, 110, 0, 111, 0, 0, 112, 0, 113, 0, 0, 0, 114, 0, 0, 0,
    115, 0, 0, 0, 0, 116, 117, 118, 0, 119, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 123, 0, 0, 0, 0, 124, 125, 0, 126, 0, 0, 127, 0, 0, 128, 0, 129,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 131, 0, 0, 0, 0, 132, 0, 133,
    0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 136, 0, 0, 0, 0, 137, 0, 138, 0, 139, 0, 140, 0, 0, 0, 0, 0, 141,
    142, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0,
    0, 150, 151, 0, 0, 0, 0, 152, 0, 153, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 155, 0, 0, 0, 156, 0, 0, 0, 0, 157, 0, 0, 158, 159, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 162,
    0, 163, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 165, 0, 166, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 170, 0, 171, 0, 0, 0, 172, 0, 0, 173, 0, 174, 0, 175, 0, 0,
    0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 178, 0, 179, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0,
    0, 0, 0, 0, 0, 0, 182, 0, 0, 183, 0, 184, 0, 185, 0, 0, 0, 186, 0, 187, 188, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 191, 0, 192, 0, 0, 0, 193, 0, 0, 194, 0, 195, 0,
    0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 198, 0, 199, 0, 200, 0, 0, 0, 201, 0, 202, 203, 0, 0, 0, 0, 0,
    0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 206, 0, 207, 0, 0, 0, 208,
    0, 0, 209, 0, 210, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0,
    214, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 218, 0, 219, 0, 0, 0, 0, 0, 0, 0,
    0, 220, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 222, 0, 223, 0, 0, 0, 0, 0, 0, 0, 224, 225, 0, 0, 0, 0, 0, 226, 0, 227,
    0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 231, 0, 232, 0, 233, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0,
    0, 0, 238, 0, 239, 240, 0, 0, 0, 0, 0, 241, 0, 242, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 245,
    0, 246, 0, 0, 0, 0, 0, 247, 0, 248, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0,
    0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 253, 0, 0, 0, 0, 254, 0, 0, 255, 0,
    0, 256, 0, 0, 0, 0, 257, 0, 258, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 263, 0, 264, 0, 265, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 268, 0, 269,
    0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 272, 0, 0, 0, 0, 0, 273, 274, 0,
    0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 280, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 283,
    0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 286, 0, 0, 0, 0, 287,
    0, 0, 0, 0, 288, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 299, 0,
    0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 301, 0, 302, 0, 303, 0, 304, 0, 0, 0, 305, 0, 0, 0, 306, 0, 0, 0, 307, 0, 0, 0,
    308, 0, 0, 0, 0, 0, 309, 0, 0, 310, 0, 0, 0, 0, 311, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0,
    0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 316, 0, 0, 0, 317, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 319, 0,
    320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0,
    322, 0, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 325, 0, 326,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 328, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 331, 0, 332, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 334, 0,
    0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 337, 0, 338, 0, 0, 0, 0, 339,
    0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 343, 344, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 346,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 348, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 354, 0, 355, 356,
    0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0,
    0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0,
    0, 0, 362, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 364, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    366, 0, 0, 0, 367, 0, 0, 368, 0, 0, 369, 0, 370, 371, 0, 372, 0, 373, 0, 374, 375, 0, 376, 0, 0, 377, 0, 0, 378, 0, 379, 380,
    0, 381, 0, 382, 383, 0, 384, 0, 0, 0, 0, 0, 0, 385, 0, 0, 386, 0, 387, 388, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 389, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 390, 0, 0, 0, 0, 391, 0, 0, 0, 392, 0, 0, 393, 0, 0, 0, 0, 394, 0, 0, 0, 395, 0,
    0, 0, 396, 0, 0, 0, 0, 397, 0, 0, 0, 398, 0, 0, 399, 0, 0, 0, 0, 400, 0, 0, 0, 401, 0, 0, 402, 0, 0, 0, 403, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 404, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 405, 0,
    0, 0, 406, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 407, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 408, 0, 0, 0, 0, 409, 0, 0, 0, 0, 0, 0, 0, 0, 410, 0, 0, 0, 0, 0, 0, 0, 411, 0, 0, 0, 0, 412, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 413, 0, 0, 0, 0, 414, 0, 0, 0, 0, 0, 0, 0, 0, 415, 0, 0, 0, 0, 0, 0, 0, 416, 0, 0,
    0, 0, 417, 0, 0, 0, 418, 0, 0, 0, 419, 0, 0, 0, 420, 0, 0, 0, 421, 0, 0, 422, 0, 0, 423, 0, 0, 0, 0, 0, 0, 0,
    424, 0, 425, 0, 0, 426, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 427, 0, 0, 0, 0, 0, 0, 0, 0, 0, 428, 0,
    0, 429, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 430, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 431, 0, 0, 0, 0, 0, 0, 0, 432,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 433, 0, 0, 434, 0, 435, 0, 436, 0,
    0, 437, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 438, 0, 439, 0, 0, 0, 0, 0, 0, 0, 440, 0, 0, 0, 441, 0, 442, 443, 0, 0,
    0, 0, 0, 444, 0, 0, 445, 0, 0, 0, 446, 0, 447, 448, 0, 0, 0, 0, 0, 449, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 450, 0, 451, 0, 0, 0, 452, 0, 0, 453, 0, 454, 455, 0, 0, 456, 0, 0, 457, 0, 458, 0, 459, 0, 0, 0, 460, 0, 461, 0,
    0, 462, 0, 463, 0, 0, 0, 0, 0, 464, 0, 465, 0, 0, 466, 0, 0, 467, 0, 0, 468, 0, 469, 0, 0, 0, 470, 0, 0, 0, 471, 0,
    0, 0, 0, 0, 0, 472, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 473, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 474, 0, 0, 0, 0, 475, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 476, 0, 0, 0, 477, 0, 0, 478, 0, 0, 0, 479, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 480, 0, 0, 0, 481, 482, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 483, 0, 0, 0, 0, 484, 0, 0, 0, 0, 485, 0, 0, 486, 0, 0, 0, 0, 0, 487, 0, 488, 0, 0, 0, 489, 0, 0, 0, 0,
    0, 490, 0, 0, 491, 492, 0, 0, 0, 0, 493, 0, 494, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 495, 0, 0, 496, 0,
    0, 497, 0, 0, 0, 0, 498, 0, 0, 0, 0, 499, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 500, 0, 0, 501, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 502, 0, 0, 0, 503, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 504, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 505, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 506, 0, 0, 0, 0, 507, 0, 0, 0, 0, 508, 0, 0, 0, 0, 0, 509, 0, 0, 0, 510, 0, 0, 0,
    0, 0, 0, 0, 511, 0, 0, 0, 512, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 513, 0, 0, 0, 0, 0, 514, 515, 0, 516,
    0, 0, 517, 0, 0, 0, 0, 518, 0, 519, 0, 520, 0, 0, 0, 0, 0, 0, 0, 521, 0, 0, 522, 0, 0, 0, 0, 0, 0, 0, 523, 0,
    524, 0, 0, 0, 525, 0, 0, 526, 0, 0, 0, 527, 0, 0, 0, 0, 0, 0, 528, 0, 0, 0, 0, 0, 529, 0, 0, 0, 0, 0, 530, 0,
    0, 531, 0, 532, 0, 533, 0, 0, 0, 534, 0, 0, 535, 0, 0, 0, 0, 0, 0, 0, 536, 0, 0, 537, 538, 0, 0, 0, 539, 0, 0, 0,
    540, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 541, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 542, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 543, 0, 0,
    0, 0, 544, 0, 0, 0, 0, 545, 0, 0, 0, 0, 0, 546, 0, 547, 0, 0, 548, 0, 0, 0, 0, 0, 0, 0, 549, 0, 0, 0, 550, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 551, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 552, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 553, 0, 0, 0, 0, 554,
    0, 0, 0, 0, 555, 0, 0, 0, 0, 0, 556, 0, 557, 0, 558, 0, 0, 559, 0, 0, 0, 560, 0, 561, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 562, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 563, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 564, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 565, 0, 0, 0, 566, 0, 0, 0, 567, 0, 0, 568, 0, 0, 0, 0, 0, 0, 0, 569, 0, 0, 0,
    0, 0, 0, 0, 570, 0, 0, 0, 571, 0, 0, 0, 0, 0, 0, 0, 0, 572, 0, 0, 0, 0, 0, 573, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 574, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 575, 0, 0, 0, 0, 0, 576, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 577,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 578, 0, 0, 0, 0, 579, 0, 0, 0, 0, 580, 0, 581, 0, 0,
    582, 0, 0, 0, 0, 0, 0, 0, 583, 0, 0, 0, 584, 0, 0, 0, 0, 0, 0, 0, 0, 585, 0, 0, 0, 0, 0, 586, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 587, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 588, 0, 0, 0, 0, 0, 589, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 590, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 591, 0, 0, 0, 0, 592, 0, 0, 0, 0, 593,
    0, 0, 0, 0, 0, 0, 594, 0, 0, 0, 0, 595, 0, 0, 0, 0, 0, 596, 0, 597, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 598,
    0, 599, 0, 0, 0, 0, 0, 600, 0, 601, 0, 0, 0, 0, 0, 602, 0, 0, 0, 0, 0, 0, 603, 0, 0, 0, 0, 0, 604, 605, 0, 0,
    0, 0, 0, 606, 0, 0, 0, 0, 0, 607, 0, 608, 0, 0, 0, 0, 0, 609, 0, 0, 0, 0, 0, 610, 0, 611, 0, 0, 0, 612, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 613, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 614,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 615, 0, 0, 0, 0, 616, 0, 0, 0, 617, 0, 0, 0, 0, 0,
    0, 618, 0, 619, 0, 620, 0, 0, 0, 621, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 622, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 623, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 624, 0, 0, 0, 0, 0, 0, 625, 0, 0, 626,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 627, 0, 0, 0, 0, 628, 629, 0, 0, 0, 630, 0, 0, 0, 0, 0, 0,
    0, 631, 0, 0, 632, 0, 0, 0, 0, 0, 0, 0, 0, 0, 633, 0, 0, 0, 0, 0, 634, 0, 635, 0, 0, 0, 0, 0, 0, 0, 636, 0,
    0, 0, 637, 0, 0, 0, 0, 0, 0, 0, 0, 638, 0, 0, 0, 0, 0, 0, 639, 0, 0, 0, 0, 0, 0, 0, 640, 0, 0, 0, 641, 0,
    0, 0, 642, 0, 0, 0, 0, 643, 0, 0, 0, 0, 0, 0, 0, 0, 0, 644,
};
void recomp_unit_0002_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x0880C004u;
        entry_id = (entry_delta < 16328u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0002[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_0880C004;
    case 2u: goto L_0880C04C;
    case 3u: goto L_0880C060;
    case 4u: goto L_0880C06C;
    case 5u: goto L_0880C078;
    case 6u: goto L_0880C080;
    case 7u: goto L_0880C08C;
    case 8u: goto L_0880C0FC;
    case 9u: goto L_0880C104;
    case 10u: goto L_0880C10C;
    case 11u: goto L_0880C11C;
    case 12u: goto L_0880C124;
    case 13u: goto L_0880C128;
    case 14u: goto L_0880C140;
    case 15u: goto L_0880C15C;
    case 16u: goto L_0880C168;
    case 17u: goto L_0880C178;
    case 18u: goto L_0880C180;
    case 19u: goto L_0880C184;
    case 20u: goto L_0880C19C;
    case 21u: goto L_0880C1BC;
    case 22u: goto L_0880C1C8;
    case 23u: goto L_0880C1D8;
    case 24u: goto L_0880C1E0;
    case 25u: goto L_0880C1E4;
    case 26u: goto L_0880C1FC;
    case 27u: goto L_0880C21C;
    case 28u: goto L_0880C228;
    case 29u: goto L_0880C238;
    case 30u: goto L_0880C240;
    case 31u: goto L_0880C244;
    case 32u: goto L_0880C25C;
    case 33u: goto L_0880C27C;
    case 34u: goto L_0880C288;
    case 35u: goto L_0880C294;
    case 36u: goto L_0880C2A0;
    case 37u: goto L_0880C2B0;
    case 38u: goto L_0880C2B8;
    case 39u: goto L_0880C2BC;
    case 40u: goto L_0880C2D4;
    case 41u: goto L_0880C2F4;
    case 42u: goto L_0880C300;
    case 43u: goto L_0880C310;
    case 44u: goto L_0880C318;
    case 45u: goto L_0880C31C;
    case 46u: goto L_0880C334;
    case 47u: goto L_0880C354;
    case 48u: goto L_0880C360;
    case 49u: goto L_0880C368;
    case 50u: goto L_0880C378;
    case 51u: goto L_0880C384;
    case 52u: goto L_0880C38C;
    case 53u: goto L_0880C390;
    case 54u: goto L_0880C3BC;
    case 55u: goto L_0880C3F4;
    case 56u: goto L_0880C404;
    case 57u: goto L_0880C410;
    case 58u: goto L_0880C418;
    case 59u: goto L_0880C420;
    case 60u: goto L_0880C428;
    case 61u: goto L_0880C434;
    case 62u: goto L_0880C43C;
    case 63u: goto L_0880C444;
    case 64u: goto L_0880C44C;
    case 65u: goto L_0880C454;
    case 66u: goto L_0880C45C;
    case 67u: goto L_0880C464;
    case 68u: goto L_0880C46C;
    case 69u: goto L_0880C470;
    case 70u: goto L_0880C47C;
    case 71u: goto L_0880C484;
    case 72u: goto L_0880C494;
    case 73u: goto L_0880C4BC;
    case 74u: goto L_0880C4D0;
    case 75u: goto L_0880C4EC;
    case 76u: goto L_0880C4F4;
    case 77u: goto L_0880C504;
    case 78u: goto L_0880C544;
    case 79u: goto L_0880C550;
    case 80u: goto L_0880C59C;
    case 81u: goto L_0880C5C0;
    case 82u: goto L_0880C5F4;
    case 83u: goto L_0880C608;
    case 84u: goto L_0880C618;
    case 85u: goto L_0880C628;
    case 86u: goto L_0880C638;
    case 87u: goto L_0880C648;
    case 88u: goto L_0880C670;
    case 89u: goto L_0880C684;
    case 90u: goto L_0880C690;
    case 91u: goto L_0880C6A0;
    case 92u: goto L_0880C6AC;
    case 93u: goto L_0880C6B4;
    case 94u: goto L_0880C6B8;
    case 95u: goto L_0880C6BC;
    case 96u: goto L_0880C6D0;
    case 97u: goto L_0880C6E4;
    case 98u: goto L_0880C6EC;
    case 99u: goto L_0880C6FC;
    case 100u: goto L_0880C708;
    case 101u: goto L_0880C710;
    case 102u: goto L_0880C720;
    case 103u: goto L_0880C730;
    case 104u: goto L_0880C740;
    case 105u: goto L_0880C750;
    case 106u: goto L_0880C760;
    case 107u: goto L_0880C788;
    case 108u: goto L_0880C7AC;
    case 109u: goto L_0880C7C0;
    case 110u: goto L_0880C7C8;
    case 111u: goto L_0880C7D0;
    case 112u: goto L_0880C7DC;
    case 113u: goto L_0880C7E4;
    case 114u: goto L_0880C7F4;
    case 115u: goto L_0880C804;
    case 116u: goto L_0880C818;
    case 117u: goto L_0880C81C;
    case 118u: goto L_0880C820;
    case 119u: goto L_0880C828;
    case 120u: goto L_0880C830;
    case 121u: goto L_0880C880;
    case 122u: goto L_0880C8B0;
    case 123u: goto L_0880C8C0;
    case 124u: goto L_0880C8D4;
    case 125u: goto L_0880C8D8;
    case 126u: goto L_0880C8E0;
    case 127u: goto L_0880C8EC;
    case 128u: goto L_0880C8F8;
    case 129u: goto L_0880C900;
    case 130u: goto L_0880C954;
    case 131u: goto L_0880C964;
    case 132u: goto L_0880C978;
    case 133u: goto L_0880C980;
    case 134u: goto L_0880C98C;
    case 135u: goto L_0880C9AC;
    case 136u: goto L_0880C9BC;
    case 137u: goto L_0880C9D0;
    case 138u: goto L_0880C9D8;
    case 139u: goto L_0880C9E0;
    case 140u: goto L_0880C9E8;
    case 141u: goto L_0880CA00;
    case 142u: goto L_0880CA04;
    case 143u: goto L_0880CA20;
    case 144u: goto L_0880CA34;
    case 145u: goto L_0880CA58;
    case 146u: goto L_0880CAA8;
    case 147u: goto L_0880CAB8;
    case 148u: goto L_0880CAD4;
    case 149u: goto L_0880CAF4;
    case 150u: goto L_0880CB08;
    case 151u: goto L_0880CB0C;
    case 152u: goto L_0880CB20;
    case 153u: goto L_0880CB28;
    case 154u: goto L_0880CB38;
    case 155u: goto L_0880CB88;
    case 156u: goto L_0880CB98;
    case 157u: goto L_0880CBAC;
    case 158u: goto L_0880CBB8;
    case 159u: goto L_0880CBBC;
    case 160u: goto L_0880CBD0;
    case 161u: goto L_0880CBF4;
    case 162u: goto L_0880CC00;
    case 163u: goto L_0880CC08;
    case 164u: goto L_0880CC24;
    case 165u: goto L_0880CC34;
    case 166u: goto L_0880CC3C;
    case 167u: goto L_0880CC40;
    case 168u: goto L_0880CC68;
    case 169u: goto L_0880CCB0;
    case 170u: goto L_0880CCC4;
    case 171u: goto L_0880CCCC;
    case 172u: goto L_0880CCDC;
    case 173u: goto L_0880CCE8;
    case 174u: goto L_0880CCF0;
    case 175u: goto L_0880CCF8;
    case 176u: goto L_0880CD10;
    case 177u: goto L_0880CD34;
    case 178u: goto L_0880CD40;
    case 179u: goto L_0880CD48;
    case 180u: goto L_0880CD58;
    case 181u: goto L_0880CD78;
    case 182u: goto L_0880CD9C;
    case 183u: goto L_0880CDA8;
    case 184u: goto L_0880CDB0;
    case 185u: goto L_0880CDB8;
    case 186u: goto L_0880CDC8;
    case 187u: goto L_0880CDD0;
    case 188u: goto L_0880CDD4;
    case 189u: goto L_0880CDF4;
    case 190u: goto L_0880CE3C;
    case 191u: goto L_0880CE50;
    case 192u: goto L_0880CE58;
    case 193u: goto L_0880CE68;
    case 194u: goto L_0880CE74;
    case 195u: goto L_0880CE7C;
    case 196u: goto L_0880CE90;
    case 197u: goto L_0880CEB4;
    case 198u: goto L_0880CEC0;
    case 199u: goto L_0880CEC8;
    case 200u: goto L_0880CED0;
    case 201u: goto L_0880CEE0;
    case 202u: goto L_0880CEE8;
    case 203u: goto L_0880CEEC;
    case 204u: goto L_0880CF0C;
    case 205u: goto L_0880CF54;
    case 206u: goto L_0880CF68;
    case 207u: goto L_0880CF70;
    case 208u: goto L_0880CF80;
    case 209u: goto L_0880CF8C;
    case 210u: goto L_0880CF94;
    case 211u: goto L_0880CFA8;
    case 212u: goto L_0880CFD8;
    case 213u: goto L_0880CFEC;
    case 214u: goto L_0880D004;
    case 215u: goto L_0880D00C;
    case 216u: goto L_0880D030;
    case 217u: goto L_0880D040;
    case 218u: goto L_0880D05C;
    case 219u: goto L_0880D064;
    case 220u: goto L_0880D088;
    case 221u: goto L_0880D098;
    case 222u: goto L_0880D0B4;
    case 223u: goto L_0880D0BC;
    case 224u: goto L_0880D0DC;
    case 225u: goto L_0880D0E0;
    case 226u: goto L_0880D0F8;
    case 227u: goto L_0880D100;
    case 228u: goto L_0880D124;
    case 229u: goto L_0880D138;
    case 230u: goto L_0880D198;
    case 231u: goto L_0880D1B0;
    case 232u: goto L_0880D1B8;
    case 233u: goto L_0880D1C0;
    case 234u: goto L_0880D1D8;
    case 235u: goto L_0880D224;
    case 236u: goto L_0880D248;
    case 237u: goto L_0880D268;
    case 238u: goto L_0880D28C;
    case 239u: goto L_0880D294;
    case 240u: goto L_0880D298;
    case 241u: goto L_0880D2B0;
    case 242u: goto L_0880D2B8;
    case 243u: goto L_0880D2CC;
    case 244u: goto L_0880D2E8;
    case 245u: goto L_0880D300;
    case 246u: goto L_0880D308;
    case 247u: goto L_0880D320;
    case 248u: goto L_0880D328;
    case 249u: goto L_0880D340;
    case 250u: goto L_0880D3F0;
    case 251u: goto L_0880D408;
    case 252u: goto L_0880D44C;
    case 253u: goto L_0880D45C;
    case 254u: goto L_0880D470;
    case 255u: goto L_0880D47C;
    case 256u: goto L_0880D488;
    case 257u: goto L_0880D49C;
    case 258u: goto L_0880D4A4;
    case 259u: goto L_0880D4B4;
    case 260u: goto L_0880D4D8;
    case 261u: goto L_0880D4EC;
    case 262u: goto L_0880D52C;
    case 263u: goto L_0880D58C;
    case 264u: goto L_0880D594;
    case 265u: goto L_0880D59C;
    case 266u: goto L_0880D5A4;
    case 267u: goto L_0880D5DC;
    case 268u: goto L_0880D5F8;
    case 269u: goto L_0880D600;
    case 270u: goto L_0880D614;
    case 271u: goto L_0880D650;
    case 272u: goto L_0880D660;
    case 273u: goto L_0880D678;
    case 274u: goto L_0880D67C;
    case 275u: goto L_0880D68C;
    case 276u: goto L_0880D6B8;
    case 277u: goto L_0880D6C8;
    case 278u: goto L_0880D6E4;
    case 279u: goto L_0880D730;
    case 280u: goto L_0880D740;
    case 281u: goto L_0880D744;
    case 282u: goto L_0880D77C;
    case 283u: goto L_0880D780;
    case 284u: goto L_0880D790;
    case 285u: goto L_0880D7E0;
    case 286u: goto L_0880D7EC;
    case 287u: goto L_0880D800;
    case 288u: goto L_0880D814;
    case 289u: goto L_0880D828;
    case 290u: goto L_0880D840;
    case 291u: goto L_0880D858;
    case 292u: goto L_0880D86C;
    case 293u: goto L_0880D898;
    case 294u: goto L_0880D8CC;
    case 295u: goto L_0880D8E4;
    case 296u: goto L_0880D928;
    case 297u: goto L_0880D9B8;
    case 298u: goto L_0880D9DC;
    case 299u: goto L_0880D9FC;
    case 300u: goto L_0880DA1C;
    case 301u: goto L_0880DA2C;
    case 302u: goto L_0880DA34;
    case 303u: goto L_0880DA3C;
    case 304u: goto L_0880DA44;
    case 305u: goto L_0880DA54;
    case 306u: goto L_0880DA64;
    case 307u: goto L_0880DA74;
    case 308u: goto L_0880DA84;
    case 309u: goto L_0880DA9C;
    case 310u: goto L_0880DAA8;
    case 311u: goto L_0880DABC;
    case 312u: goto L_0880DACC;
    case 313u: goto L_0880DAFC;
    case 314u: goto L_0880DB08;
    case 315u: goto L_0880DB30;
    case 316u: goto L_0880DB40;
    case 317u: goto L_0880DB50;
    case 318u: goto L_0880DB64;
    case 319u: goto L_0880DB7C;
    case 320u: goto L_0880DB84;
    case 321u: goto L_0880DBE8;
    case 322u: goto L_0880DC04;
    case 323u: goto L_0880DC2C;
    case 324u: goto L_0880DC68;
    case 325u: goto L_0880DC78;
    case 326u: goto L_0880DC80;
    case 327u: goto L_0880DCE0;
    case 328u: goto L_0880DCFC;
    case 329u: goto L_0880DD24;
    case 330u: goto L_0880DD60;
    case 331u: goto L_0880DD70;
    case 332u: goto L_0880DD78;
    case 333u: goto L_0880DDE0;
    case 334u: goto L_0880DDFC;
    case 335u: goto L_0880DE18;
    case 336u: goto L_0880DE54;
    case 337u: goto L_0880DE64;
    case 338u: goto L_0880DE6C;
    case 339u: goto L_0880DE80;
    case 340u: goto L_0880DE9C;
    case 341u: goto L_0880DEB0;
    case 342u: goto L_0880DED4;
    case 343u: goto L_0880DEDC;
    case 344u: goto L_0880DEE0;
    case 345u: goto L_0880DF40;
    case 346u: goto L_0880DF80;
    case 347u: goto L_0880DFBC;
    case 348u: goto L_0880DFCC;
    case 349u: goto L_0880DFD4;
    case 350u: goto L_0880DFF8;
    case 351u: goto L_0880E04C;
    case 352u: goto L_0880E08C;
    case 353u: goto L_0880E0C0;
    case 354u: goto L_0880E0F4;
    case 355u: goto L_0880E0FC;
    case 356u: goto L_0880E100;
    case 357u: goto L_0880E120;
    case 358u: goto L_0880E170;
    case 359u: goto L_0880E188;
    case 360u: goto L_0880E1BC;
    case 361u: goto L_0880E1F8;
    case 362u: goto L_0880E20C;
    case 363u: goto L_0880E22C;
    case 364u: goto L_0880E23C;
    case 365u: goto L_0880E248;
    case 366u: goto L_0880E284;
    case 367u: goto L_0880E294;
    case 368u: goto L_0880E2A0;
    case 369u: goto L_0880E2AC;
    case 370u: goto L_0880E2B4;
    case 371u: goto L_0880E2B8;
    case 372u: goto L_0880E2C0;
    case 373u: goto L_0880E2C8;
    case 374u: goto L_0880E2D0;
    case 375u: goto L_0880E2D4;
    case 376u: goto L_0880E2DC;
    case 377u: goto L_0880E2E8;
    case 378u: goto L_0880E2F4;
    case 379u: goto L_0880E2FC;
    case 380u: goto L_0880E300;
    case 381u: goto L_0880E308;
    case 382u: goto L_0880E310;
    case 383u: goto L_0880E314;
    case 384u: goto L_0880E31C;
    case 385u: goto L_0880E338;
    case 386u: goto L_0880E344;
    case 387u: goto L_0880E34C;
    case 388u: goto L_0880E350;
    case 389u: goto L_0880E37C;
    case 390u: goto L_0880E3A8;
    case 391u: goto L_0880E3BC;
    case 392u: goto L_0880E3CC;
    case 393u: goto L_0880E3D8;
    case 394u: goto L_0880E3EC;
    case 395u: goto L_0880E3FC;
    case 396u: goto L_0880E40C;
    case 397u: goto L_0880E420;
    case 398u: goto L_0880E430;
    case 399u: goto L_0880E43C;
    case 400u: goto L_0880E450;
    case 401u: goto L_0880E460;
    case 402u: goto L_0880E46C;
    case 403u: goto L_0880E47C;
    case 404u: goto L_0880E4C0;
    case 405u: goto L_0880E4FC;
    case 406u: goto L_0880E50C;
    case 407u: goto L_0880E550;
    case 408u: goto L_0880E58C;
    case 409u: goto L_0880E5A0;
    case 410u: goto L_0880E5C4;
    case 411u: goto L_0880E5E4;
    case 412u: goto L_0880E5F8;
    case 413u: goto L_0880E620;
    case 414u: goto L_0880E634;
    case 415u: goto L_0880E658;
    case 416u: goto L_0880E678;
    case 417u: goto L_0880E68C;
    case 418u: goto L_0880E69C;
    case 419u: goto L_0880E6AC;
    case 420u: goto L_0880E6BC;
    case 421u: goto L_0880E6CC;
    case 422u: goto L_0880E6D8;
    case 423u: goto L_0880E6E4;
    case 424u: goto L_0880E704;
    case 425u: goto L_0880E70C;
    case 426u: goto L_0880E718;
    case 427u: goto L_0880E754;
    case 428u: goto L_0880E77C;
    case 429u: goto L_0880E788;
    case 430u: goto L_0880E81C;
    case 431u: goto L_0880E860;
    case 432u: goto L_0880E880;
    case 433u: goto L_0880E8E0;
    case 434u: goto L_0880E8EC;
    case 435u: goto L_0880E8F4;
    case 436u: goto L_0880E8FC;
    case 437u: goto L_0880E908;
    case 438u: goto L_0880E934;
    case 439u: goto L_0880E93C;
    case 440u: goto L_0880E95C;
    case 441u: goto L_0880E96C;
    case 442u: goto L_0880E974;
    case 443u: goto L_0880E978;
    case 444u: goto L_0880E990;
    case 445u: goto L_0880E99C;
    case 446u: goto L_0880E9AC;
    case 447u: goto L_0880E9B4;
    case 448u: goto L_0880E9B8;
    case 449u: goto L_0880E9D0;
    case 450u: goto L_0880EA0C;
    case 451u: goto L_0880EA14;
    case 452u: goto L_0880EA24;
    case 453u: goto L_0880EA30;
    case 454u: goto L_0880EA38;
    case 455u: goto L_0880EA3C;
    case 456u: goto L_0880EA48;
    case 457u: goto L_0880EA54;
    case 458u: goto L_0880EA5C;
    case 459u: goto L_0880EA64;
    case 460u: goto L_0880EA74;
    case 461u: goto L_0880EA7C;
    case 462u: goto L_0880EA88;
    case 463u: goto L_0880EA90;
    case 464u: goto L_0880EAA8;
    case 465u: goto L_0880EAB0;
    case 466u: goto L_0880EABC;
    case 467u: goto L_0880EAC8;
    case 468u: goto L_0880EAD4;
    case 469u: goto L_0880EADC;
    case 470u: goto L_0880EAEC;
    case 471u: goto L_0880EAFC;
    case 472u: goto L_0880EB18;
    case 473u: goto L_0880EB68;
    case 474u: goto L_0880EBC4;
    case 475u: goto L_0880EBD8;
    case 476u: goto L_0880EC20;
    case 477u: goto L_0880EC30;
    case 478u: goto L_0880EC3C;
    case 479u: goto L_0880EC4C;
    case 480u: goto L_0880EC8C;
    case 481u: goto L_0880EC9C;
    case 482u: goto L_0880ECA0;
    case 483u: goto L_0880ED0C;
    case 484u: goto L_0880ED20;
    case 485u: goto L_0880ED34;
    case 486u: goto L_0880ED40;
    case 487u: goto L_0880ED58;
    case 488u: goto L_0880ED60;
    case 489u: goto L_0880ED70;
    case 490u: goto L_0880ED88;
    case 491u: goto L_0880ED94;
    case 492u: goto L_0880ED98;
    case 493u: goto L_0880EDAC;
    case 494u: goto L_0880EDB4;
    case 495u: goto L_0880EDF0;
    case 496u: goto L_0880EDFC;
    case 497u: goto L_0880EE08;
    case 498u: goto L_0880EE1C;
    case 499u: goto L_0880EE30;
    case 500u: goto L_0880EE5C;
    case 501u: goto L_0880EE68;
    case 502u: goto L_0880EEA4;
    case 503u: goto L_0880EEB4;
    case 504u: goto L_0880EEF8;
    case 505u: goto L_0880EF5C;
    case 506u: goto L_0880EFA4;
    case 507u: goto L_0880EFB8;
    case 508u: goto L_0880EFCC;
    case 509u: goto L_0880EFE4;
    case 510u: goto L_0880EFF4;
    case 511u: goto L_0880F014;
    case 512u: goto L_0880F024;
    case 513u: goto L_0880F05C;
    case 514u: goto L_0880F074;
    case 515u: goto L_0880F078;
    case 516u: goto L_0880F080;
    case 517u: goto L_0880F08C;
    case 518u: goto L_0880F0A0;
    case 519u: goto L_0880F0A8;
    case 520u: goto L_0880F0B0;
    case 521u: goto L_0880F0D0;
    case 522u: goto L_0880F0DC;
    case 523u: goto L_0880F0FC;
    case 524u: goto L_0880F104;
    case 525u: goto L_0880F114;
    case 526u: goto L_0880F120;
    case 527u: goto L_0880F130;
    case 528u: goto L_0880F14C;
    case 529u: goto L_0880F164;
    case 530u: goto L_0880F17C;
    case 531u: goto L_0880F188;
    case 532u: goto L_0880F190;
    case 533u: goto L_0880F198;
    case 534u: goto L_0880F1A8;
    case 535u: goto L_0880F1B4;
    case 536u: goto L_0880F1D4;
    case 537u: goto L_0880F1E0;
    case 538u: goto L_0880F1E4;
    case 539u: goto L_0880F1F4;
    case 540u: goto L_0880F204;
    case 541u: goto L_0880F248;
    case 542u: goto L_0880F2B0;
    case 543u: goto L_0880F2F8;
    case 544u: goto L_0880F30C;
    case 545u: goto L_0880F320;
    case 546u: goto L_0880F338;
    case 547u: goto L_0880F340;
    case 548u: goto L_0880F34C;
    case 549u: goto L_0880F36C;
    case 550u: goto L_0880F37C;
    case 551u: goto L_0880F3C0;
    case 552u: goto L_0880F424;
    case 553u: goto L_0880F46C;
    case 554u: goto L_0880F480;
    case 555u: goto L_0880F494;
    case 556u: goto L_0880F4AC;
    case 557u: goto L_0880F4B4;
    case 558u: goto L_0880F4BC;
    case 559u: goto L_0880F4C8;
    case 560u: goto L_0880F4D8;
    case 561u: goto L_0880F4E0;
    case 562u: goto L_0880F51C;
    case 563u: goto L_0880F548;
    case 564u: goto L_0880F57C;
    case 565u: goto L_0880F5A8;
    case 566u: goto L_0880F5B8;
    case 567u: goto L_0880F5C8;
    case 568u: goto L_0880F5D4;
    case 569u: goto L_0880F5F4;
    case 570u: goto L_0880F614;
    case 571u: goto L_0880F624;
    case 572u: goto L_0880F648;
    case 573u: goto L_0880F660;
    case 574u: goto L_0880F6C8;
    case 575u: goto L_0880F71C;
    case 576u: goto L_0880F734;
    case 577u: goto L_0880F780;
    case 578u: goto L_0880F7C8;
    case 579u: goto L_0880F7DC;
    case 580u: goto L_0880F7F0;
    case 581u: goto L_0880F7F8;
    case 582u: goto L_0880F804;
    case 583u: goto L_0880F824;
    case 584u: goto L_0880F834;
    case 585u: goto L_0880F858;
    case 586u: goto L_0880F870;
    case 587u: goto L_0880F8D8;
    case 588u: goto L_0880F92C;
    case 589u: goto L_0880F944;
    case 590u: goto L_0880F990;
    case 591u: goto L_0880F9D8;
    case 592u: goto L_0880F9EC;
    case 593u: goto L_0880FA00;
    case 594u: goto L_0880FA1C;
    case 595u: goto L_0880FA30;
    case 596u: goto L_0880FA48;
    case 597u: goto L_0880FA50;
    case 598u: goto L_0880FA80;
    case 599u: goto L_0880FA88;
    case 600u: goto L_0880FAA0;
    case 601u: goto L_0880FAA8;
    case 602u: goto L_0880FAC0;
    case 603u: goto L_0880FADC;
    case 604u: goto L_0880FAF4;
    case 605u: goto L_0880FAF8;
    case 606u: goto L_0880FB10;
    case 607u: goto L_0880FB28;
    case 608u: goto L_0880FB30;
    case 609u: goto L_0880FB48;
    case 610u: goto L_0880FB60;
    case 611u: goto L_0880FB68;
    case 612u: goto L_0880FB78;
    case 613u: goto L_0880FBBC;
    case 614u: goto L_0880FC00;
    case 615u: goto L_0880FC48;
    case 616u: goto L_0880FC5C;
    case 617u: goto L_0880FC6C;
    case 618u: goto L_0880FC88;
    case 619u: goto L_0880FC90;
    case 620u: goto L_0880FC98;
    case 621u: goto L_0880FCA8;
    case 622u: goto L_0880FD5C;
    case 623u: goto L_0880FDA8;
    case 624u: goto L_0880FDD8;
    case 625u: goto L_0880FDF4;
    case 626u: goto L_0880FE00;
    case 627u: goto L_0880FE40;
    case 628u: goto L_0880FE54;
    case 629u: goto L_0880FE58;
    case 630u: goto L_0880FE68;
    case 631u: goto L_0880FE88;
    case 632u: goto L_0880FE94;
    case 633u: goto L_0880FEBC;
    case 634u: goto L_0880FED4;
    case 635u: goto L_0880FEDC;
    case 636u: goto L_0880FEFC;
    case 637u: goto L_0880FF0C;
    case 638u: goto L_0880FF30;
    case 639u: goto L_0880FF4C;
    case 640u: goto L_0880FF6C;
    case 641u: goto L_0880FF7C;
    case 642u: goto L_0880FF8C;
    case 643u: goto L_0880FFA0;
    case 644u: goto L_0880FFC8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_0880C004:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-160));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-7872)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[18]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_0880C060;
      }
      goto L_0880C04C;
    }
L_0880C04C:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_0880C060;
L_0880C060:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (0x0880C06Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 124u, 0x088A08C4u>(ctx, &aot_mem) && ctx.pc == 0x0880C06Cu) goto L_0880C06C;
    return;
L_0880C06C:
    ctx.gpr[4] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0880C104;
      }
      goto L_0880C078;
    }
L_0880C078:
    ctx.gpr[31] = (0x0880C080u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 124u, 0x088A08C4u>(ctx, &aot_mem) && ctx.pc == 0x0880C080u) goto L_0880C080;
    return;
L_0880C080:
    ctx.gpr[4] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0880C104;
      }
      goto L_0880C08C;
    }
L_0880C08C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[19] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[4]);
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1184)));
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u != 0u;
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
      if (branch_taken) {
          goto L_0880C10C;
      }
      goto L_0880C0FC;
    }
L_0880C0FC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
      if (branch_taken) {
          goto L_0880C128;
      }
      goto L_0880C104;
    }
L_0880C104:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0880C390;
      }
      goto L_0880C10C;
    }
L_0880C10C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
        goto L_0880C128;
    }
    goto L_0880C11C;
L_0880C11C:
    ctx.gpr[31] = (0x0880C124u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x0880C124u) goto L_0880C124;
    return;
L_0880C124:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    goto L_0880C128;
L_0880C128:
    ctx.gpr[5] = (ctx.gpr[21] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[4]);
    ctx.gpr[31] = (0x0880C140u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 508u, 0x08A0651Cu>(ctx, &aot_mem) && ctx.pc == 0x0880C140u) goto L_0880C140;
    return;
L_0880C140:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(60)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(60)));
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[6] = (0u | 23u);
    ctx.gpr[31] = (0x0880C15Cu);
    ctx.gpr[7] = (0u | 13u);
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 316u, 0x08869F4Cu>(ctx, &aot_mem) && ctx.pc == 0x0880C15Cu) goto L_0880C15C;
    return;
L_0880C15C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1192)));
      if (branch_taken) {
          goto L_0880C180;
      }
      goto L_0880C168;
    }
L_0880C168:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
        goto L_0880C184;
    }
    goto L_0880C178;
L_0880C178:
    ctx.gpr[31] = (0x0880C180u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x0880C180u) goto L_0880C180;
    return;
L_0880C180:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    goto L_0880C184;
L_0880C184:
    ctx.gpr[5] = (ctx.gpr[21] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[4]);
    ctx.gpr[31] = (0x0880C19Cu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 508u, 0x08A0651Cu>(ctx, &aot_mem) && ctx.pc == 0x0880C19Cu) goto L_0880C19C;
    return;
L_0880C19C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(60)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(60)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[6] = (0u | 23u);
    ctx.gpr[31] = (0x0880C1BCu);
    ctx.gpr[7] = (0u | 15u);
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 316u, 0x08869F4Cu>(ctx, &aot_mem) && ctx.pc == 0x0880C1BCu) goto L_0880C1BC;
    return;
L_0880C1BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1172)));
      if (branch_taken) {
          goto L_0880C1E0;
      }
      goto L_0880C1C8;
    }
L_0880C1C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
        goto L_0880C1E4;
    }
    goto L_0880C1D8;
L_0880C1D8:
    ctx.gpr[31] = (0x0880C1E0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x0880C1E0u) goto L_0880C1E0;
    return;
L_0880C1E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    goto L_0880C1E4;
L_0880C1E4:
    ctx.gpr[5] = (ctx.gpr[21] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[4]);
    ctx.gpr[31] = (0x0880C1FCu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 508u, 0x08A0651Cu>(ctx, &aot_mem) && ctx.pc == 0x0880C1FCu) goto L_0880C1FC;
    return;
L_0880C1FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(60)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(60)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(64));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[6] = (0u | 23u);
    ctx.gpr[31] = (0x0880C21Cu);
    ctx.gpr[7] = (0u | 14u);
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 316u, 0x08869F4Cu>(ctx, &aot_mem) && ctx.pc == 0x0880C21Cu) goto L_0880C21C;
    return;
L_0880C21C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1180)));
      if (branch_taken) {
          goto L_0880C240;
      }
      goto L_0880C228;
    }
L_0880C228:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
        goto L_0880C244;
    }
    goto L_0880C238;
L_0880C238:
    ctx.gpr[31] = (0x0880C240u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x0880C240u) goto L_0880C240;
    return;
L_0880C240:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    goto L_0880C244;
L_0880C244:
    ctx.gpr[5] = (ctx.gpr[21] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[4]);
    ctx.gpr[31] = (0x0880C25Cu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 508u, 0x08A0651Cu>(ctx, &aot_mem) && ctx.pc == 0x0880C25Cu) goto L_0880C25C;
    return;
L_0880C25C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(60)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(60)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(96));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[6] = (0u | 23u);
    ctx.gpr[31] = (0x0880C27Cu);
    ctx.gpr[7] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 316u, 0x08869F4Cu>(ctx, &aot_mem) && ctx.pc == 0x0880C27Cu) goto L_0880C27C;
    return;
L_0880C27C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1188)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880C360;
      }
      goto L_0880C288;
    }
L_0880C288:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1176)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880C360;
      }
      goto L_0880C294;
    }
L_0880C294:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1188)));
      if (branch_taken) {
          goto L_0880C2B8;
      }
      goto L_0880C2A0;
    }
L_0880C2A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
        goto L_0880C2BC;
    }
    goto L_0880C2B0;
L_0880C2B0:
    ctx.gpr[31] = (0x0880C2B8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x0880C2B8u) goto L_0880C2B8;
    return;
L_0880C2B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    goto L_0880C2BC;
L_0880C2BC:
    ctx.gpr[5] = (ctx.gpr[21] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[4]);
    ctx.gpr[31] = (0x0880C2D4u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 508u, 0x08A0651Cu>(ctx, &aot_mem) && ctx.pc == 0x0880C2D4u) goto L_0880C2D4;
    return;
L_0880C2D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(60)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(60)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(128));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[6] = (0u | 23u);
    ctx.gpr[31] = (0x0880C2F4u);
    ctx.gpr[7] = (0u | 15u);
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 316u, 0x08869F4Cu>(ctx, &aot_mem) && ctx.pc == 0x0880C2F4u) goto L_0880C2F4;
    return;
L_0880C2F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1176)));
      if (branch_taken) {
          goto L_0880C318;
      }
      goto L_0880C300;
    }
L_0880C300:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
        goto L_0880C31C;
    }
    goto L_0880C310;
L_0880C310:
    ctx.gpr[31] = (0x0880C318u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x0880C318u) goto L_0880C318;
    return;
L_0880C318:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    goto L_0880C31C;
L_0880C31C:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[4]);
    ctx.gpr[31] = (0x0880C334u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 508u, 0x08A0651Cu>(ctx, &aot_mem) && ctx.pc == 0x0880C334u) goto L_0880C334;
    return;
L_0880C334:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(60)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(60)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(160));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[6] = (0u | 23u);
    ctx.gpr[31] = (0x0880C354u);
    ctx.gpr[7] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 316u, 0x08869F4Cu>(ctx, &aot_mem) && ctx.pc == 0x0880C354u) goto L_0880C354;
    return;
L_0880C354:
    ctx.gpr[4] = (0u | 6u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(48), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0880C368;
      }
      goto L_0880C360;
    }
L_0880C360:
    ctx.gpr[4] = (0u | 4u);
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(48), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_0880C368;
L_0880C368:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880C38C;
      }
      goto L_0880C378;
    }
L_0880C378:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880C38C;
      }
      goto L_0880C384;
    }
L_0880C384:
    ctx.gpr[31] = (0x0880C38Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x0880C38Cu) goto L_0880C38C;
    return;
L_0880C38C:
    ctx.gpr[2] = (0u | 1u);
    goto L_0880C390;
L_0880C390:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
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
L_0880C3BC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[5] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[6] & 255u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[6] = (0u | 162u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0880C420;
      }
      goto L_0880C3F4;
    }
L_0880C3F4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(603))))));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0880C418;
      }
      goto L_0880C404;
    }
L_0880C404:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 15 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(848));
      if (branch_taken) {
          goto L_0880C428;
      }
      goto L_0880C410;
    }
L_0880C410:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 16 ? 1u : 0u);
      if (branch_taken) {
          goto L_0880C444;
      }
      goto L_0880C418;
    }
L_0880C418:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0880C59C;
      }
      goto L_0880C420;
    }
L_0880C420:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0880C59C;
      }
      goto L_0880C428;
    }
L_0880C428:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 13 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 14 ? 1u : 0u);
      if (branch_taken) {
          goto L_0880C470;
      }
      goto L_0880C434;
    }
L_0880C434:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880C464;
      }
      goto L_0880C43C;
    }
L_0880C43C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_0880C470;
      }
      goto L_0880C444;
    }
L_0880C444:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 17 ? 1u : 0u);
      if (branch_taken) {
          goto L_0880C45C;
      }
      goto L_0880C44C;
    }
L_0880C44C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0880C46C;
      }
      goto L_0880C454;
    }
L_0880C454:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0880C470;
      }
      goto L_0880C45C;
    }
L_0880C45C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 1u);
      if (branch_taken) {
          goto L_0880C470;
      }
      goto L_0880C464;
    }
L_0880C464:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 2u);
      if (branch_taken) {
          goto L_0880C470;
      }
      goto L_0880C46C;
    }
L_0880C46C:
    ctx.gpr[19] = (0u | 3u);
    goto L_0880C470;
L_0880C470:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0880C47Cu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 209u, 0x08A29280u>(ctx, &aot_mem) && ctx.pc == 0x0880C47Cu) goto L_0880C47C;
    return;
L_0880C47C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0880C59C;
      }
      goto L_0880C484;
    }
L_0880C484:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0880C494u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 208u, 0x08A29274u>(ctx, &aot_mem) && ctx.pc == 0x0880C494u) goto L_0880C494;
    return;
L_0880C494:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7824)));
    ctx.gpr[6] = (0u | 15u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7824), ctx.gpr[5]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.gpr[31] = (0x0880C4BCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 101u, 0x0886476Cu>(ctx, &aot_mem) && ctx.pc == 0x0880C4BCu) goto L_0880C4BC;
    return;
L_0880C4BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u | 32u);
    ctx.gpr[4] = (ctx.gpr[4] & 496u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0880C4EC;
      }
      goto L_0880C4D0;
    }
L_0880C4D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-497));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] | 48u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[31] = (0x0880C4ECu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 205u, 0x089ED4F0u>(ctx, &aot_mem) && ctx.pc == 0x0880C4ECu) goto L_0880C4EC;
    return;
L_0880C4EC:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880C59C;
      }
      goto L_0880C4F4;
    }
L_0880C4F4:
    ctx.gpr[17] = (2227u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(776)));
    ctx.gpr[31] = (0x0880C504u);
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]) ^ 0x80000000u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x0880C504u) goto L_0880C504;
    return;
L_0880C504:
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[22];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[22] + ctx.fpr[12];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (0x0880C544u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 270u, 0x08A0E0E8u>(ctx, &aot_mem) && ctx.pc == 0x0880C544u) goto L_0880C544;
    return;
L_0880C544:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(776)));
    ctx.gpr[31] = (0x0880C550u);
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]) ^ 0x80000000u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x0880C550u) goto L_0880C550;
    return;
L_0880C550:
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[22];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[22] + ctx.fpr[12];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(212)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x0880C59Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 280u, 0x08A0E1E4u>(ctx, &aot_mem) && ctx.pc == 0x0880C59Cu) goto L_0880C59C;
    return;
L_0880C59C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880C5C0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(848));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[31]);
    ctx.gpr[31] = (0x0880C5F4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 199u, 0x08A2919Cu>(ctx, &aot_mem) && ctx.pc == 0x0880C5F4u) goto L_0880C5F4;
    return;
L_0880C5F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(336)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(208)));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_0880C648;
      }
      goto L_0880C608;
    }
L_0880C608:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[31] = (0x0880C618u);
    ctx.gpr[6] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 210u, 0x08A2928Cu>(ctx, &aot_mem) && ctx.pc == 0x0880C618u) goto L_0880C618;
    return;
L_0880C618:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[31] = (0x0880C628u);
    ctx.gpr[6] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 210u, 0x08A2928Cu>(ctx, &aot_mem) && ctx.pc == 0x0880C628u) goto L_0880C628;
    return;
L_0880C628:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 4u);
    ctx.gpr[31] = (0x0880C638u);
    ctx.gpr[6] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 210u, 0x08A2928Cu>(ctx, &aot_mem) && ctx.pc == 0x0880C638u) goto L_0880C638;
    return;
L_0880C638:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[31] = (0x0880C648u);
    ctx.gpr[6] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 210u, 0x08A2928Cu>(ctx, &aot_mem) && ctx.pc == 0x0880C648u) goto L_0880C648;
    return;
L_0880C648:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(599))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(599), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (2183u << 16u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x0880C670u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(27656));
    if (rt.invoke_chained_direct<&recomp_unit_0168_entry, 168u, 201u, 0x08AA4FD4u>(ctx, &aot_mem) && ctx.pc == 0x0880C670u) goto L_0880C670;
    return;
L_0880C670:
    ctx.gpr[16] = (0u | 7u);
    ctx.gpr[19] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(28));
    goto L_0880C684;
L_0880C684:
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1168)));
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880C710;
      }
      goto L_0880C690;
    }
L_0880C690:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), 0u);
    ctx.gpr[5] = (0u | 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
      if (branch_taken) {
          goto L_0880C6B8;
      }
      goto L_0880C6A0;
    }
L_0880C6A0:
    ctx.gpr[6] = (ctx.gpr[4] & 1u);
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[5] = (ctx.gpr[22] + static_cast<std::uint32_t>(16));
        goto L_0880C6BC;
    }
    goto L_0880C6AC;
L_0880C6AC:
    ctx.gpr[31] = (0x0880C6B4u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x0880C6B4u) goto L_0880C6B4;
    return;
L_0880C6B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    goto L_0880C6B8;
L_0880C6B8:
    ctx.gpr[5] = (ctx.gpr[22] + static_cast<std::uint32_t>(16));
    goto L_0880C6BC;
L_0880C6BC:
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[4]);
    ctx.gpr[31] = (0x0880C6D0u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 508u, 0x08A0651Cu>(ctx, &aot_mem) && ctx.pc == 0x0880C6D0u) goto L_0880C6D0;
    return;
L_0880C6D0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x0880C6E4u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 512u, 0x08A065B8u>(ctx, &aot_mem) && ctx.pc == 0x0880C6E4u) goto L_0880C6E4;
    return;
L_0880C6E4:
    ctx.gpr[31] = (0x0880C6ECu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 505u, 0x08A064E8u>(ctx, &aot_mem) && ctx.pc == 0x0880C6ECu) goto L_0880C6EC;
    return;
L_0880C6EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880C710;
      }
      goto L_0880C6FC;
    }
L_0880C6FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880C710;
      }
      goto L_0880C708;
    }
L_0880C708:
    ctx.gpr[31] = (0x0880C710u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x0880C710u) goto L_0880C710;
    return;
L_0880C710:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 20 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0880C684;
      }
      goto L_0880C720;
    }
L_0880C720:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0880C730u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 208u, 0x08A29274u>(ctx, &aot_mem) && ctx.pc == 0x0880C730u) goto L_0880C730;
    return;
L_0880C730:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x0880C740u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 208u, 0x08A29274u>(ctx, &aot_mem) && ctx.pc == 0x0880C740u) goto L_0880C740;
    return;
L_0880C740:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[31] = (0x0880C750u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 208u, 0x08A29274u>(ctx, &aot_mem) && ctx.pc == 0x0880C750u) goto L_0880C750;
    return;
L_0880C750:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[31] = (0x0880C760u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 208u, 0x08A29274u>(ctx, &aot_mem) && ctx.pc == 0x0880C760u) goto L_0880C760;
    return;
L_0880C760:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880C788:
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1509))))));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-9));
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[5] = (ctx.gpr[6] | ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1509), static_cast<std::uint8_t>(ctx.gpr[5]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880C7AC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[31]);
    ctx.gpr[31] = (0x0880C7C0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x0880C7C0u) goto L_0880C7C0;
    return;
L_0880C7C0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880C8B0;
      }
      goto L_0880C7C8;
    }
L_0880C7C8:
    ctx.gpr[31] = (0x0880C7D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x0880C7D0u) goto L_0880C7D0;
    return;
L_0880C7D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(836)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0880C8B0;
      }
      goto L_0880C7DC;
    }
L_0880C7DC:
    ctx.gpr[31] = (0x0880C7E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x0880C7E4u) goto L_0880C7E4;
    return;
L_0880C7E4:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(500)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0880C81C;
      }
      goto L_0880C7F4;
    }
L_0880C7F4:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(500)));
    ctx.gpr[7] = (0u | 65535u);
    if (ctx.gpr[6] == ctx.gpr[7]) {
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
        goto L_0880C820;
    }
    goto L_0880C804;
L_0880C804:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(68)));
    ctx.gpr[6] = (0u | 80u);
    ctx.gpr[5] = (ctx.gpr[5] & 496u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_0880C820;
      }
      goto L_0880C818;
    }
L_0880C818:
    ctx.gpr[4] = (0u | 1u);
    goto L_0880C81C;
L_0880C81C:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_0880C820;
L_0880C820:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880C8B0;
      }
      goto L_0880C828;
    }
L_0880C828:
    ctx.gpr[31] = (0x0880C830u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x0880C830u) goto L_0880C830;
    return;
L_0880C830:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
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
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_0880C8B0;
      }
      goto L_0880C880;
    }
L_0880C880:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-7828)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x0880C8B0u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 206u, 0x08944E10u>(ctx, &aot_mem) && ctx.pc == 0x0880C8B0u) goto L_0880C8B0;
    return;
L_0880C8B0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880C8C0:
    ctx.gpr[7] = (ctx.gpr[6] & 255u);
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[8] = (ctx.gpr[5] < static_cast<std::uint32_t>(1000) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-7868)));
      if (branch_taken) {
          goto L_0880C8D8;
      }
      goto L_0880C8D4;
    }
L_0880C8D4:
    ctx.gpr[5] = (0u | 1000u);
    goto L_0880C8D8;
L_0880C8D8:
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_0880C8EC;
      }
      goto L_0880C8E0;
    }
L_0880C8E0:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1524), ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
      if (branch_taken) {
          goto L_0880C8F8;
      }
      goto L_0880C8EC;
    }
L_0880C8EC:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-500));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1524), ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    goto L_0880C8F8;
L_0880C8F8:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1520), ctx.gpr[6]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880C900:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[31]);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(112));
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
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (15820u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0880CA34;
      }
      goto L_0880C954;
    }
L_0880C954:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1510))))));
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880CA34;
      }
      goto L_0880C964;
    }
L_0880C964:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(266)));
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (0u | 162u);
      if (branch_taken) {
          goto L_0880CA34;
      }
      goto L_0880C978;
    }
L_0880C978:
    ctx.gpr[19] = (ctx.gpr[16] | 0u);
    ctx.gpr[17] = (32u << 16u);
    goto L_0880C980;
L_0880C980:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(268)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880CA20;
      }
      goto L_0880C98C;
    }
L_0880C98C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(268)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 4u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880CA20;
      }
      goto L_0880C9AC;
    }
L_0880C9AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(268)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_0880CA20;
      }
      goto L_0880C9BC;
    }
L_0880C9BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(268)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[17]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0880CA20;
      }
      goto L_0880C9D0;
    }
L_0880C9D0:
    ctx.gpr[31] = (0x0880C9D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x0880C9D8u) goto L_0880C9D8;
    return;
L_0880C9D8:
    if (ctx.gpr[16] != ctx.gpr[2]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(268)));
        goto L_0880CA04;
    }
    goto L_0880C9E0;
L_0880C9E0:
    ctx.gpr[31] = (0x0880C9E8u);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(268)));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x0880C9E8u) goto L_0880C9E8;
    return;
L_0880C9E8:
    ctx.gpr[4] = (0u | 13u);
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    ctx.gpr[7] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0880CA00u);
    ctx.gpr[8] = (0u | 2000u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 542u, 0x08A92740u>(ctx, &aot_mem) && ctx.pc == 0x0880CA00u) goto L_0880CA00;
    return;
L_0880CA00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(268)));
    goto L_0880CA04;
L_0880CA04:
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(280));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0880CA20u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0880CA20u) goto L_0880CA20;
    return;
L_0880CA20:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(266)));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0880C980;
      }
      goto L_0880CA34;
    }
L_0880CA34:
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
L_0880CA58:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (0u | 20u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(398), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(432), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(436), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(440), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-497));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(408), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (ctx.gpr[6] & ctx.gpr[7]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1572)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (ctx.gpr[5] | 48u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[20])) && ctx.fpr[12] == ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0880CB0C;
      }
      goto L_0880CAA8;
    }
L_0880CAA8:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x0880CAB8u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 282u, 0x089D962Cu>(ctx, &aot_mem) && ctx.pc == 0x0880CAB8u) goto L_0880CAB8;
    return;
L_0880CAB8:
    ctx.gpr[4] = (16585u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[20]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    if (ctx.fpu_condition()) {
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[12];
        goto L_0880CAD4;
    }
    goto L_0880CAD4;
L_0880CAD4:
    ctx.gpr[4] = (16457u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1572), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_0880CB0C;
      }
      goto L_0880CAF4;
    }
L_0880CAF4:
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0880CAF4;
      }
      goto L_0880CB08;
    }
L_0880CB08:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1572), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_0880CB0C;
L_0880CB0C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880CB20:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1716), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880CB28:
    ctx.gpr[5] = (49024u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1716), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880CB38:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (0u | 22u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(398), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(432), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(436), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(440), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-497));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(408), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (ctx.gpr[6] & ctx.gpr[7]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1572)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (ctx.gpr[5] | 48u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[20])) && ctx.fpr[12] == ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0880CBBC;
      }
      goto L_0880CB88;
    }
L_0880CB88:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x0880CB98u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 282u, 0x089D962Cu>(ctx, &aot_mem) && ctx.pc == 0x0880CB98u) goto L_0880CB98;
    return;
L_0880CB98:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (16585u << 16u);
      if (branch_taken) {
          goto L_0880CBB8;
      }
      goto L_0880CBAC;
    }
L_0880CBAC:
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_0880CBB8;
L_0880CBB8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1572), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0880CBBC;
L_0880CBBC:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880CBD0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(848));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[31]);
    ctx.gpr[31] = (0x0880CBF4u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 215u, 0x08A292C8u>(ctx, &aot_mem) && ctx.pc == 0x0880CBF4u) goto L_0880CBF4;
    return;
L_0880CBF4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_0880CCF0;
      }
      goto L_0880CC00;
    }
L_0880CC00:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880CCF0;
      }
      goto L_0880CC08;
    }
L_0880CC08:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(932)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1240)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(940), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[17] = (ctx.gpr[17] & 255u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), 0u);
      if (branch_taken) {
          goto L_0880CC3C;
      }
      goto L_0880CC24;
    }
L_0880CC24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_0880CC40;
      }
      goto L_0880CC34;
    }
L_0880CC34:
    ctx.gpr[31] = (0x0880CC3Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x0880CC3Cu) goto L_0880CC3C;
    return;
L_0880CC3C:
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
    goto L_0880CC40;
L_0880CC40:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[17] & 1u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x0880CC68u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 508u, 0x08A0651Cu>(ctx, &aot_mem) && ctx.pc == 0x0880CC68u) goto L_0880CC68;
    return;
L_0880CC68:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(940)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(937)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[31] = (0x0880CCB0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 492u, 0x08A05FFCu>(ctx, &aot_mem) && ctx.pc == 0x0880CCB0u) goto L_0880CCB0;
    return;
L_0880CCB0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[31] = (0x0880CCC4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 515u, 0x08A06668u>(ctx, &aot_mem) && ctx.pc == 0x0880CCC4u) goto L_0880CCC4;
    return;
L_0880CCC4:
    ctx.gpr[31] = (0x0880CCCCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 505u, 0x08A064E8u>(ctx, &aot_mem) && ctx.pc == 0x0880CCCCu) goto L_0880CCCC;
    return;
L_0880CCCC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880CCF0;
      }
      goto L_0880CCDC;
    }
L_0880CCDC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880CCF0;
      }
      goto L_0880CCE8;
    }
L_0880CCE8:
    ctx.gpr[31] = (0x0880CCF0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x0880CCF0u) goto L_0880CCF0;
    return;
L_0880CCF0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0880CCF8;
      }
      goto L_0880CCF8;
    }
L_0880CCF8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880CD10:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(848));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x0880CD34u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 215u, 0x08A292C8u>(ctx, &aot_mem) && ctx.pc == 0x0880CD34u) goto L_0880CD34;
    return;
L_0880CD34:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_0880CD58;
      }
      goto L_0880CD40;
    }
L_0880CD40:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880CD58;
      }
      goto L_0880CD48;
    }
L_0880CD48:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x0880CD58u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 210u, 0x08A2928Cu>(ctx, &aot_mem) && ctx.pc == 0x0880CD58u) goto L_0880CD58;
    return;
L_0880CD58:
    ctx.gpr[4] = (49152u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(948), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880CD78:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(928)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1240)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(940), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0880CDB0;
      }
      goto L_0880CD9C;
    }
L_0880CD9C:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1240)));
    { const bool branch_taken = 0u != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), 0u);
      if (branch_taken) {
          goto L_0880CDB8;
      }
      goto L_0880CDA8;
    }
L_0880CDA8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_0880CDD4;
      }
      goto L_0880CDB0;
    }
L_0880CDB0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0880CE7C;
      }
      goto L_0880CDB8;
    }
L_0880CDB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_0880CDD4;
      }
      goto L_0880CDC8;
    }
L_0880CDC8:
    ctx.gpr[31] = (0x0880CDD0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x0880CDD0u) goto L_0880CDD0;
    return;
L_0880CDD0:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    goto L_0880CDD4;
L_0880CDD4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x0880CDF4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 508u, 0x08A0651Cu>(ctx, &aot_mem) && ctx.pc == 0x0880CDF4u) goto L_0880CDF4;
    return;
L_0880CDF4:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(940)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(937)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[31] = (0x0880CE3Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 492u, 0x08A05FFCu>(ctx, &aot_mem) && ctx.pc == 0x0880CE3Cu) goto L_0880CE3C;
    return;
L_0880CE3C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[31] = (0x0880CE50u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 515u, 0x08A06668u>(ctx, &aot_mem) && ctx.pc == 0x0880CE50u) goto L_0880CE50;
    return;
L_0880CE50:
    ctx.gpr[31] = (0x0880CE58u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 505u, 0x08A064E8u>(ctx, &aot_mem) && ctx.pc == 0x0880CE58u) goto L_0880CE58;
    return;
L_0880CE58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880CE7C;
      }
      goto L_0880CE68;
    }
L_0880CE68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880CE7C;
      }
      goto L_0880CE74;
    }
L_0880CE74:
    ctx.gpr[31] = (0x0880CE7Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x0880CE7Cu) goto L_0880CE7C;
    return;
L_0880CE7C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880CE90:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(884)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1236)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(892), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0880CEC8;
      }
      goto L_0880CEB4;
    }
L_0880CEB4:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1236)));
    { const bool branch_taken = 0u != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), 0u);
      if (branch_taken) {
          goto L_0880CED0;
      }
      goto L_0880CEC0;
    }
L_0880CEC0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_0880CEEC;
      }
      goto L_0880CEC8;
    }
L_0880CEC8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0880CF94;
      }
      goto L_0880CED0;
    }
L_0880CED0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_0880CEEC;
      }
      goto L_0880CEE0;
    }
L_0880CEE0:
    ctx.gpr[31] = (0x0880CEE8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x0880CEE8u) goto L_0880CEE8;
    return;
L_0880CEE8:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    goto L_0880CEEC;
L_0880CEEC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x0880CF0Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 508u, 0x08A0651Cu>(ctx, &aot_mem) && ctx.pc == 0x0880CF0Cu) goto L_0880CF0C;
    return;
L_0880CF0C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(892)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(889)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[31] = (0x0880CF54u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 492u, 0x08A05FFCu>(ctx, &aot_mem) && ctx.pc == 0x0880CF54u) goto L_0880CF54;
    return;
L_0880CF54:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[31] = (0x0880CF68u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 515u, 0x08A06668u>(ctx, &aot_mem) && ctx.pc == 0x0880CF68u) goto L_0880CF68;
    return;
L_0880CF68:
    ctx.gpr[31] = (0x0880CF70u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 505u, 0x08A064E8u>(ctx, &aot_mem) && ctx.pc == 0x0880CF70u) goto L_0880CF70;
    return;
L_0880CF70:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880CF94;
      }
      goto L_0880CF80;
    }
L_0880CF80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880CF94;
      }
      goto L_0880CF8C;
    }
L_0880CF8C:
    ctx.gpr[31] = (0x0880CF94u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x0880CF94u) goto L_0880CF94;
    return;
L_0880CF94:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880CFA8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7872)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
      if (branch_taken) {
          goto L_0880CFEC;
      }
      goto L_0880CFD8;
    }
L_0880CFD8:
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    goto L_0880CFEC;
L_0880CFEC:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(256));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0880D004u);
    ctx.gpr[5] = (0u | 2u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0880D004u) goto L_0880D004;
    return;
L_0880D004:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0880D030;
      }
      goto L_0880D00C;
    }
L_0880D00C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(216));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x0880D030u);
    ctx.gpr[5] = (0u | 15u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0880D030u) goto L_0880D030;
    return;
L_0880D030:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(68))))));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0880D124;
      }
      goto L_0880D040;
    }
L_0880D040:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(256));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x0880D05Cu);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0880D05Cu) goto L_0880D05C;
    return;
L_0880D05C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0880D088;
      }
      goto L_0880D064;
    }
L_0880D064:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(216));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x0880D088u);
    ctx.gpr[5] = (0u | 11u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0880D088u) goto L_0880D088;
    return;
L_0880D088:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(68))))));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0880D124;
      }
      goto L_0880D098;
    }
L_0880D098:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (0u | 4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(256));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x0880D0B4u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0880D0B4u) goto L_0880D0B4;
    return;
L_0880D0B4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
      if (branch_taken) {
          goto L_0880D0E0;
      }
      goto L_0880D0BC;
    }
L_0880D0BC:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(216));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[5] = (0u | 16u);
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x0880D0DCu);
    ctx.gpr[6] = (0u | 4u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0880D0DCu) goto L_0880D0DC;
    return;
L_0880D0DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    goto L_0880D0E0;
L_0880D0E0:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(256));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0880D0F8u);
    ctx.gpr[5] = (0u | 5u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0880D0F8u) goto L_0880D0F8;
    return;
L_0880D0F8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0880D124;
      }
      goto L_0880D100;
    }
L_0880D100:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[6] = (0u | 5u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(216));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x0880D124u);
    ctx.gpr[5] = (0u | 12u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0880D124u) goto L_0880D124;
    return;
L_0880D124:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880D138:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-288));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (15820u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(232), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(236), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(248), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(252), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(264), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(268), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(272), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(280), ctx.gpr[31]);
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0880D1B8;
      }
      goto L_0880D198;
    }
L_0880D198:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-7872)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[22] = (0u | 0u);
      if (branch_taken) {
          goto L_0880D1C0;
      }
      goto L_0880D1B0;
    }
L_0880D1B0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_0880D1D8;
      }
      goto L_0880D1B8;
    }
L_0880D1B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0880D408;
      }
      goto L_0880D1C0;
    }
L_0880D1C0:
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(20)));
    goto L_0880D1D8;
L_0880D1D8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), ctx.gpr[4]);
    ctx.fpr[28] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (16255u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 65368u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[4] = (49864u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[4] = (16256u << 16u);
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] + static_cast<std::uint32_t>(1248));
    goto L_0880D224;
L_0880D224:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(220), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), ctx.gpr[23]);
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(64)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[19]);
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x0880D248u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 261u, 0x0880A85Cu>(ctx, &aot_mem) && ctx.pc == 0x0880D248u) goto L_0880D248;
    return;
L_0880D248:
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(64)));
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x0880D268u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 261u, 0x0880A85Cu>(ctx, &aot_mem) && ctx.pc == 0x0880D268u) goto L_0880D268;
    return;
L_0880D268:
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1376)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(656)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(220)));
      if (branch_taken) {
          goto L_0880D294;
      }
      goto L_0880D28C;
    }
L_0880D28C:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_0880D298;
      }
      goto L_0880D294;
    }
L_0880D294:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    goto L_0880D298;
L_0880D298:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[31] = (0x0880D2B0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 287u, 0x0890DDACu>(ctx, &aot_mem) && ctx.pc == 0x0880D2B0u) goto L_0880D2B0;
    return;
L_0880D2B0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880D3F0;
      }
      goto L_0880D2B8;
    }
L_0880D2B8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0880D3F0;
      }
      goto L_0880D2CC;
    }
L_0880D2CC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[24];
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0880D3F0;
      }
      goto L_0880D2E8;
    }
L_0880D2E8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0880D308;
      }
      goto L_0880D300;
    }
L_0880D300:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1376), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
      if (branch_taken) {
          goto L_0880D340;
      }
      goto L_0880D308;
    }
L_0880D308:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
        goto L_0880D328;
    }
    goto L_0880D320;
L_0880D320:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1376), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
      if (branch_taken) {
          goto L_0880D340;
      }
      goto L_0880D328;
    }
L_0880D328:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[13] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    ctx.fpr[12] = ctx.fpr[13] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1376), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0880D340;
L_0880D340:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1376)));
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[5]);
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[4] = (0u | 19u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(30), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0880D3F0;
L_0880D3F0:
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(32));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[22]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_0880D224;
      }
      goto L_0880D408;
    }
L_0880D408:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(236)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(240)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(244)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(248)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(252)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(264)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(268)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(272)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(280)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(288));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880D44C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    goto L_0880D45C;
L_0880D45C:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(1168), 0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 20 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0880D45C;
      }
      goto L_0880D470;
    }
L_0880D470:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1168));
    ctx.gpr[31] = (0x0880D47Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 601u, 0x08973D04u>(ctx, &aot_mem) && ctx.pc == 0x0880D47Cu) goto L_0880D47C;
    return;
L_0880D47C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880D488:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x0880D49Cu);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 537u, 0x0889EA98u>(ctx, &aot_mem) && ctx.pc == 0x0880D49Cu) goto L_0880D49C;
    return;
L_0880D49C:
    ctx.gpr[31] = (0x0880D4A4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0880D44C;
L_0880D4A4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880D4B4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[31] = (0x0880D4D8u);
    ctx.gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[18]) >> 31u));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x0880D4D8u) goto L_0880D4D8;
    return;
L_0880D4D8:
    ctx.gpr[6] = (ctx.gpr[17] - ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0880D4ECu);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 31u));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 360u, 0x08AF5BFCu>(ctx, &aot_mem) && ctx.pc == 0x0880D4ECu) goto L_0880D4EC;
    return;
L_0880D4EC:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[6] < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880D52C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-256));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (15300u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39846u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(236), ctx.gpr[30]);
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[30] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(220), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(232), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), ctx.gpr[31]);
    ctx.gpr[31] = (0x0880D58Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 745u, 0x08A2F69Cu>(ctx, &aot_mem) && ctx.pc == 0x0880D58Cu) goto L_0880D58C;
    return;
L_0880D58C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0880D59C;
      }
      goto L_0880D594;
    }
L_0880D594:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0880D8E4;
      }
      goto L_0880D59C;
    }
L_0880D59C:
    ctx.gpr[31] = (0x0880D5A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 171u, 0x089D575Cu>(ctx, &aot_mem) && ctx.pc == 0x0880D5A4u) goto L_0880D5A4;
    return;
L_0880D5A4:
    { const std::uint32_t vfpu_address = ctx.gpr[2] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[22]));
    ctx.gpr[19] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[17] = (0u | 20u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[19]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[17]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[18] = (ctx.gpr[18] & 31u);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (48588u << 16u);
      if (branch_taken) {
          goto L_0880D660;
      }
      goto L_0880D5DC;
    }
L_0880D5DC:
    ctx.fpr[24] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_0880D5F8;
L_0880D5F8:
    ctx.gpr[31] = (0x0880D600u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x0880D600u) goto L_0880D600;
    return;
L_0880D600:
    ctx.fpr[12] = ctx.fpr[26] - ctx.fpr[22];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[22] + ctx.fpr[12];
    ctx.gpr[31] = (0x0880D614u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x0880D614u) goto L_0880D614;
    return;
L_0880D614:
    ctx.fpr[13] = ctx.fpr[26] - ctx.fpr[22];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (0u | 1u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.fpr[13] = ctx.fpr[22] + ctx.fpr[13];
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x0880D650u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 78u, 0x08998634u>(ctx, &aot_mem) && ctx.pc == 0x0880D650u) goto L_0880D650;
    return;
L_0880D650:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0880D5F8;
      }
      goto L_0880D660;
    }
L_0880D660:
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[19]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[17]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[17] = (ctx.lo);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(2));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0880D67C;
      }
      goto L_0880D678;
    }
L_0880D678:
    ctx.gpr[17] = (0u | 15u);
    goto L_0880D67C;
L_0880D67C:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u | 50u);
      if (branch_taken) {
          goto L_0880D744;
      }
      goto L_0880D68C;
    }
L_0880D68C:
    ctx.gpr[4] = (49049u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[4] = (16281u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_0880D6B8;
L_0880D6B8:
    { const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x0880D6C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x0880D6C8u) goto L_0880D6C8;
    return;
L_0880D6C8:
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[22];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[22] + ctx.fpr[12];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    ctx.gpr[31] = (0x0880D6E4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x0880D6E4u) goto L_0880D6E4;
    return;
L_0880D6E4:
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[22];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[22] + ctx.fpr[12];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.fpr[12] = ctx.fpr[14] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (0u | 61u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x0880D730u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 78u, 0x08998634u>(ctx, &aot_mem) && ctx.pc == 0x0880D730u) goto L_0880D730;
    return;
L_0880D730:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0880D6B8;
      }
      goto L_0880D740;
    }
L_0880D740:
    ctx.gpr[4] = (0u | 50u);
    goto L_0880D744;
L_0880D744:
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[19]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[4]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(496)));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(15440)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[4]);
    ctx.gpr[19] = (ctx.lo);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 11 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0880D780;
      }
      goto L_0880D77C;
    }
L_0880D77C:
    ctx.gpr[19] = (0u | 10u);
    goto L_0880D780;
L_0880D780:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (15820u << 16u);
      if (branch_taken) {
          goto L_0880D8E4;
      }
      goto L_0880D790;
    }
L_0880D790:
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (15523u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (15779u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (48768u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16000u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(812)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(808)));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(820)));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(816)));
    goto L_0880D7E0;
L_0880D7E0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), ctx.gpr[16]);
    ctx.gpr[31] = (0x0880D7ECu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), ctx.gpr[19]);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x0880D7ECu) goto L_0880D7EC;
    return;
L_0880D7EC:
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[22];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[22] + ctx.fpr[12];
    ctx.gpr[31] = (0x0880D800u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x0880D800u) goto L_0880D800;
    return;
L_0880D800:
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[22];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[22] + ctx.fpr[12];
    ctx.gpr[31] = (0x0880D814u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x0880D814u) goto L_0880D814;
    return;
L_0880D814:
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[20];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    ctx.gpr[31] = (0x0880D828u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x0880D828u) goto L_0880D828;
    return;
L_0880D828:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(804)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(800)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0880D840u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 360u, 0x08AF5BFCu>(ctx, &aot_mem) && ctx.pc == 0x0880D840u) goto L_0880D840;
    return;
L_0880D840:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[31] = (0x0880D858u);
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x0880D858u) goto L_0880D858;
    return;
L_0880D858:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x0880D86Cu);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 360u, 0x08AF5BFCu>(ctx, &aot_mem) && ctx.pc == 0x0880D86Cu) goto L_0880D86C;
    return;
L_0880D86C:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[7] = (ctx.gpr[6] < ctx.gpr[20] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[21]);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x0880D898u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x0880D898u) goto L_0880D898;
    return;
L_0880D898:
    ctx.fpr[12] = ctx.fpr[28] - ctx.fpr[26];
    ctx.gpr[4] = (0u | 62u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[7] = (0u | 0u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[8] = (ctx.gpr[17] | 0u);
    ctx.gpr[9] = (ctx.gpr[16] | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (ctx.gpr[19] | 0u);
    ctx.fpr[12] = ctx.fpr[26] + ctx.fpr[12];
    ctx.gpr[31] = (0x0880D8CCu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 269u, 0x089998F8u>(ctx, &aot_mem) && ctx.pc == 0x0880D8CCu) goto L_0880D8CC;
    return;
L_0880D8CC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0880D7E0;
      }
      goto L_0880D8E4;
    }
L_0880D8E4:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
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
L_0880D928:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.gpr[5] = (16384u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (16928u << 16u);
    ctx.fpr[13] = ctx.fpr[12] - ctx.fpr[14];
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[17] = ctx.fpr[13] / ctx.fpr[15];
    ctx.gpr[5] = (16968u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[17] = ctx.fpr[17] + ctx.fpr[16];
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[17] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[17]));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[13] = ctx.fpr[18] - ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[20]);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[20] = (2227u << 16u);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    ctx.gpr[17] = (0u | 0u);
    ctx.fpr[14] = ctx.fpr[18] + ctx.fpr[14];
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(20976)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[31]);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
        goto L_0880D9B8;
    }
    goto L_0880D9B8;
L_0880D9B8:
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[15];
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[23] = (0u | 0u);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[16];
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[23] = (ctx.gpr[5] | 0u);
        goto L_0880D9DC;
    }
    goto L_0880D9DC;
L_0880D9DC:
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[15];
    ctx.gpr[18] = (0u | 99u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[16];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 99 ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
        goto L_0880D9FC;
    }
    goto L_0880D9FC;
L_0880D9FC:
    ctx.fpr[12] = ctx.fpr[14] / ctx.fpr[15];
    ctx.gpr[19] = (0u | 99u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[16];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 99 ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[19] = (ctx.gpr[5] | 0u);
        goto L_0880DA1C;
    }
    goto L_0880DA1C;
L_0880DA1C:
    ctx.gpr[5] = (0u | 65535u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0880DA34;
      }
      goto L_0880DA2C;
    }
L_0880DA2C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[20] + static_cast<std::uint32_t>(20976), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0880DA44;
      }
      goto L_0880DA34;
    }
L_0880DA34:
    ctx.gpr[31] = (0x0880DA3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 155u, 0x088C4C18u>(ctx, &aot_mem) && ctx.pc == 0x0880DA3Cu) goto L_0880DA3C;
    return;
L_0880DA3C:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store16(ctx.gpr[20] + static_cast<std::uint32_t>(20976), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_0880DA44;
L_0880DA44:
    ctx.gpr[20] = (ctx.gpr[23] | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[23] << 5u);
      if (branch_taken) {
          goto L_0880DACC;
      }
      goto L_0880DA54;
    }
L_0880DA54:
    ctx.gpr[5] = (ctx.gpr[23] + ctx.gpr[4]);
    ctx.gpr[23] = (ctx.gpr[5] << 2u);
    ctx.gpr[23] = (ctx.gpr[23] - ctx.gpr[4]);
    ctx.gpr[22] = (2227u << 16u);
    goto L_0880DA64;
L_0880DA64:
    ctx.gpr[21] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[23]);
      if (branch_taken) {
          goto L_0880DABC;
      }
      goto L_0880DA74;
    }
L_0880DA74:
    ctx.gpr[30] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[30] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[30] = (ctx.gpr[4] - ctx.gpr[30]);
    goto L_0880DA84;
L_0880DA84:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[23]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(20972)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[23] = (ctx.gpr[5] + ctx.gpr[30]);
    ctx.gpr[31] = (0x0880DA9Cu);
    ctx.gpr[5] = (ctx.gpr[23] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 628u, 0x08823BE0u>(ctx, &aot_mem) && ctx.pc == 0x0880DA9Cu) goto L_0880DA9C;
    return;
L_0880DA9C:
    ctx.gpr[5] = (ctx.gpr[23] + static_cast<std::uint32_t>(24));
    ctx.gpr[31] = (0x0880DAA8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 628u, 0x08823BE0u>(ctx, &aot_mem) && ctx.pc == 0x0880DAA8u) goto L_0880DAA8;
    return;
L_0880DAA8:
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(44));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_0880DA84;
      }
      goto L_0880DABC;
    }
L_0880DABC:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(100));
      if (branch_taken) {
          goto L_0880DA64;
      }
      goto L_0880DACC;
    }
L_0880DACC:
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
L_0880DAFC:
    ctx.gpr[2] = (2232u << 16u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(5992));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880DB08:
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
          goto L_0880DB50;
      }
      goto L_0880DB30;
    }
L_0880DB30:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(30)));
    ctx.gpr[5] = (0u | 18u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0880DB50;
      }
      goto L_0880DB40;
    }
L_0880DB40:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(30)));
    ctx.gpr[5] = (0u | 33u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0880DB7C;
      }
      goto L_0880DB50;
    }
L_0880DB50:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(30)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2));
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(32) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2));
      if (branch_taken) {
          goto L_0880DFD4;
      }
      goto L_0880DB64;
    }
L_0880DB64:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2225u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-13552)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880DB7C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0880E100;
      }
      goto L_0880DB84;
    }
L_0880DB84:
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
          goto L_0880DC78;
      }
      goto L_0880DBE8;
    }
L_0880DBE8:
    ctx.gpr[4] = (15523u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.gpr[31] = (0x0880DC04u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x0880DC04u) goto L_0880DC04;
    return;
L_0880DC04:
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[20];
    ctx.gpr[4] = (15605u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 49807u);
    ctx.gpr[5] = (15733u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] | 49807u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x0880DC2Cu);
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[12];
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x0880DC2Cu) goto L_0880DC2C;
    return;
L_0880DC2C:
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
    ctx.gpr[31] = (0x0880DC68u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 269u, 0x089998F8u>(ctx, &aot_mem) && ctx.pc == 0x0880DC68u) goto L_0880DC68;
    return;
L_0880DC68:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0880DBE8;
      }
      goto L_0880DC78;
    }
L_0880DC78:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0880E100;
      }
      goto L_0880DC80;
    }
L_0880DC80:
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
          goto L_0880DD70;
      }
      goto L_0880DCE0;
    }
L_0880DCE0:
    ctx.gpr[4] = (15651u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (15800u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 20972u);
    ctx.gpr[31] = (0x0880DCFCu);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x0880DCFCu) goto L_0880DCFC;
    return;
L_0880DCFC:
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[20];
    ctx.gpr[4] = (15605u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 49807u);
    ctx.gpr[5] = (15733u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] | 49807u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x0880DD24u);
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[12];
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x0880DD24u) goto L_0880DD24;
    return;
L_0880DD24:
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
    ctx.gpr[31] = (0x0880DD60u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 269u, 0x089998F8u>(ctx, &aot_mem) && ctx.pc == 0x0880DD60u) goto L_0880DD60;
    return;
L_0880DD60:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0880DCE0;
      }
      goto L_0880DD70;
    }
L_0880DD70:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0880E100;
      }
      goto L_0880DD78;
    }
L_0880DD78:
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
          goto L_0880DE64;
      }
      goto L_0880DDE0;
    }
L_0880DDE0:
    ctx.gpr[4] = (15523u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (15733u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 49807u);
    ctx.gpr[31] = (0x0880DDFCu);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x0880DDFCu) goto L_0880DDFC;
    return;
L_0880DDFC:
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[20];
    ctx.gpr[4] = (15605u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 49807u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[31] = (0x0880DE18u);
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[12];
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x0880DE18u) goto L_0880DE18;
    return;
L_0880DE18:
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
    ctx.gpr[31] = (0x0880DE54u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 269u, 0x089998F8u>(ctx, &aot_mem) && ctx.pc == 0x0880DE54u) goto L_0880DE54;
    return;
L_0880DE54:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0880DDE0;
      }
      goto L_0880DE64;
    }
L_0880DE64:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0880E100;
      }
      goto L_0880DE6C;
    }
L_0880DE6C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7820)));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0880DFCC;
      }
      goto L_0880DE80;
    }
L_0880DE80:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7816)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (16257u << 16u);
      if (branch_taken) {
          goto L_0880DEDC;
      }
      goto L_0880DE9C;
    }
L_0880DE9C:
    ctx.gpr[4] = (ctx.gpr[4] | 18350u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x0880DEB0u);
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7816)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x0880DEB0u) goto L_0880DEB0;
    return;
L_0880DEB0:
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[22];
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[22] + ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_0880DEE0;
    }
    goto L_0880DED4;
L_0880DED4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0880E100;
      }
      goto L_0880DEDC;
    }
L_0880DEDC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_0880DEE0;
L_0880DEE0:
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
          goto L_0880DFCC;
      }
      goto L_0880DF40;
    }
L_0880DF40:
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
    ctx.gpr[31] = (0x0880DF80u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x0880DF80u) goto L_0880DF80;
    return;
L_0880DF80:
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
    ctx.gpr[31] = (0x0880DFBCu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 269u, 0x089998F8u>(ctx, &aot_mem) && ctx.pc == 0x0880DFBCu) goto L_0880DFBC;
    return;
L_0880DFBC:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 1 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0880DF40;
      }
      goto L_0880DFCC;
    }
L_0880DFCC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0880E100;
      }
      goto L_0880DFD4;
    }
L_0880DFD4:
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
          goto L_0880E0FC;
      }
      goto L_0880DFF8;
    }
L_0880DFF8:
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
          goto L_0880E0F4;
      }
      goto L_0880E04C;
    }
L_0880E04C:
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
    ctx.gpr[31] = (0x0880E08Cu);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x0880E08Cu) goto L_0880E08C;
    return;
L_0880E08C:
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
    ctx.gpr[31] = (0x0880E0C0u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x0880E0C0u) goto L_0880E0C0;
    return;
L_0880E0C0:
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
    ctx.gpr[31] = (0x0880E0F4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 269u, 0x089998F8u>(ctx, &aot_mem) && ctx.pc == 0x0880E0F4u) goto L_0880E0F4;
    return;
L_0880E0F4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0880E100;
      }
      goto L_0880E0FC;
    }
L_0880E0FC:
    ctx.gpr[2] = (0u | 1u);
    goto L_0880E100;
L_0880E100:
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
L_0880E120:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-272));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), ctx.gpr[20]);
    ctx.gpr[20] = (ctx.gpr[5] | 0u);
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(220), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(232), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(236), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(248), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(252), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(264), ctx.gpr[31]);
    ctx.gpr[31] = (0x0880E170u);
    ctx.gpr[5] = (ctx.gpr[6] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 164u, 0x088A0D50u>(ctx, &aot_mem) && ctx.pc == 0x0880E170u) goto L_0880E170;
    return;
L_0880E170:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-20988));
    ctx.gpr[17] = (ctx.gpr[19] + static_cast<std::uint32_t>(848));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(92), ctx.gpr[4]);
    ctx.gpr[31] = (0x0880E188u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 199u, 0x08A2919Cu>(ctx, &aot_mem) && ctx.pc == 0x0880E188u) goto L_0880E188;
    return;
L_0880E188:
    ctx.gpr[4] = (16166u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(848), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(852), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(872), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[7] = (2224u << 16u);
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(880));
    ctx.gpr[5] = (0u | 6u);
    ctx.gpr[6] = (0u | 48u);
    ctx.gpr[31] = (0x0880E1BCu);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-24364));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 341u, 0x08AF5A1Cu>(ctx, &aot_mem) && ctx.pc == 0x0880E1BCu) goto L_0880E1BC;
    return;
L_0880E1BC:
    ctx.gpr[5] = (15692u << 16u);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7872)));
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[16] = (0u | 0u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    ctx.gpr[22] = (0u + static_cast<std::uint32_t>(-9));
    ctx.gpr[21] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[23] = (0u + static_cast<std::uint32_t>(-3));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[30] = (0u + static_cast<std::uint32_t>(-17));
      if (branch_taken) {
          goto L_0880E20C;
      }
      goto L_0880E1F8;
    }
L_0880E1F8:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[20] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_0880E20C;
L_0880E20C:
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(66))))));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(836), 0u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(1608), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store16(ctx.gpr[19] + static_cast<std::uint32_t>(1516), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(780)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880E23C;
      }
      goto L_0880E22C;
    }
L_0880E22C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1509))))));
    ctx.gpr[4] = (ctx.gpr[4] | 8u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(1509), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0880E248;
      }
      goto L_0880E23C;
    }
L_0880E23C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1509))))));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[22]);
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(1509), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0880E248;
L_0880E248:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1509))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-33));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(1509), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1509))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-65));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(1509), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1509))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-129));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(1509), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0880E284u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    goto L_0880D488;
L_0880E284:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < -954 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 202 ? 1u : 0u);
      if (branch_taken) {
          goto L_0880E2D4;
      }
      goto L_0880E294;
    }
L_0880E294:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < -963 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < -962 ? 1u : 0u);
      if (branch_taken) {
          goto L_0880E2B8;
      }
      goto L_0880E2A0;
    }
L_0880E2A0:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-999));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0880E344;
      }
      goto L_0880E2AC;
    }
L_0880E2AC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[18] & 255u);
      if (branch_taken) {
          goto L_0880E350;
      }
      goto L_0880E2B4;
    }
L_0880E2B4:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < -962 ? 1u : 0u);
    goto L_0880E2B8;
L_0880E2B8:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < -955 ? 1u : 0u);
      if (branch_taken) {
          goto L_0880E344;
      }
      goto L_0880E2C0;
    }
L_0880E2C0:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (ctx.gpr[18] & 255u);
      if (branch_taken) {
          goto L_0880E350;
      }
      goto L_0880E2C8;
    }
L_0880E2C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0880E344;
      }
      goto L_0880E2D0;
    }
L_0880E2D0:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 202 ? 1u : 0u);
    goto L_0880E2D4;
L_0880E2D4:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 214 ? 1u : 0u);
      if (branch_taken) {
          goto L_0880E314;
      }
      goto L_0880E2DC;
    }
L_0880E2DC:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 170 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (0u | 182u);
      if (branch_taken) {
          goto L_0880E300;
      }
      goto L_0880E2E8;
    }
L_0880E2E8:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 169 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (ctx.gpr[18] & 255u);
      if (branch_taken) {
          goto L_0880E350;
      }
      goto L_0880E2F4;
    }
L_0880E2F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0880E344;
      }
      goto L_0880E2FC;
    }
L_0880E2FC:
    ctx.gpr[5] = (0u | 182u);
    goto L_0880E300;
L_0880E300:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0880E344;
      }
      goto L_0880E308;
    }
L_0880E308:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[18] & 255u);
      if (branch_taken) {
          goto L_0880E350;
      }
      goto L_0880E310;
    }
L_0880E310:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 214 ? 1u : 0u);
    goto L_0880E314;
L_0880E314:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[18] & 255u);
      if (branch_taken) {
          goto L_0880E350;
      }
      goto L_0880E31C;
    }
L_0880E31C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-202));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2225u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-13424)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880E338:
    ctx.gpr[4] = (0u | 4u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(672), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0880E34C;
      }
      goto L_0880E344;
    }
L_0880E344:
    ctx.gpr[4] = (0u | 10u);
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(672), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0880E34C;
L_0880E34C:
    ctx.gpr[5] = (ctx.gpr[18] & 255u);
    goto L_0880E350;
L_0880E350:
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
    ctx.gpr[6] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24340)));
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(336), ctx.gpr[4]);
    ctx.gpr[31] = (0x0880E37Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24340)));
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 287u, 0x08A89EB4u>(ctx, &aot_mem) && ctx.pc == 0x0880E37Cu) goto L_0880E37C;
    return;
L_0880E37C:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(340), ctx.gpr[2]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(668)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(1428), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(1424), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(1432), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(1508), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (ctx.gpr[19] + static_cast<std::uint32_t>(496));
    ctx.gpr[6] = (ctx.gpr[19] + static_cast<std::uint32_t>(497));
    ctx.gpr[31] = (0x0880E3A8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 276u, 0x0887683Cu>(ctx, &aot_mem) && ctx.pc == 0x0880E3A8u) goto L_0880E3A8;
    return;
L_0880E3A8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(336)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(208)));
    ctx.gpr[5] = (ctx.gpr[5] & 32u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_0880E3CC;
      }
      goto L_0880E3BC;
    }
L_0880E3BC:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(598))))));
    ctx.gpr[5] = (ctx.gpr[5] | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(598), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_0880E3D8;
      }
      goto L_0880E3CC;
    }
L_0880E3CC:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(598))))));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[21]);
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(598), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_0880E3D8;
L_0880E3D8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(336)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(208)));
    ctx.gpr[5] = (ctx.gpr[5] & 16384u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880E3FC;
      }
      goto L_0880E3EC;
    }
L_0880E3EC:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(598))))));
    ctx.gpr[5] = (ctx.gpr[5] | 4u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(598), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_0880E40C;
      }
      goto L_0880E3FC;
    }
L_0880E3FC:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(598))))));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-5));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(598), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_0880E40C;
L_0880E40C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(336)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(208)));
    ctx.gpr[5] = (ctx.gpr[5] & 64u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880E430;
      }
      goto L_0880E420;
    }
L_0880E420:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(598))))));
    ctx.gpr[5] = (ctx.gpr[5] | 2u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(598), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_0880E43C;
      }
      goto L_0880E430;
    }
L_0880E430:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(598))))));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[23]);
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(598), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_0880E43C;
L_0880E43C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(336)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(208)));
    ctx.gpr[5] = (ctx.gpr[5] & 128u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880E460;
      }
      goto L_0880E450;
    }
L_0880E450:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(598))))));
    ctx.gpr[5] = (ctx.gpr[5] | 8u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(598), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_0880E46C;
      }
      goto L_0880E460;
    }
L_0880E460:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(598))))));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[22]);
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(598), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_0880E46C;
L_0880E46C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(598))))));
    ctx.gpr[5] = (ctx.gpr[5] & 2u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[7] = (49056u << 16u);
      if (branch_taken) {
          goto L_0880E4C0;
      }
      goto L_0880E47C;
    }
L_0880E47C:
    ctx.gpr[7] = (49097u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] | 4059u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(976), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(980), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(984), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[5] = (16329u << 16u);
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(985), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[5] = (ctx.gpr[5] | 4059u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(1028), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(1024), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(1032), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(1033), static_cast<std::uint8_t>(ctx.gpr[6]));
      if (branch_taken) {
          goto L_0880E4FC;
      }
      goto L_0880E4C0;
    }
L_0880E4C0:
    ctx.gpr[7] = (ctx.gpr[7] | 55676u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(976), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(980), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(984), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[5] = (16288u << 16u);
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(985), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[5] = (ctx.gpr[5] | 55676u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(1028), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(1024), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(1032), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(1033), static_cast<std::uint8_t>(ctx.gpr[6]));
    goto L_0880E4FC;
L_0880E4FC:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(598))))));
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[7] = (49056u << 16u);
      if (branch_taken) {
          goto L_0880E550;
      }
      goto L_0880E50C;
    }
L_0880E50C:
    ctx.gpr[6] = (49097u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 4059u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(1072), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(1076), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (0u | 2u);
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(1080), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[7] = (16329u << 16u);
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(1081), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[7] = (ctx.gpr[7] | 4059u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(1124), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[6] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(1120), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(1128), static_cast<std::uint8_t>(ctx.gpr[6]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(1129), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_0880E58C;
      }
      goto L_0880E550;
    }
L_0880E550:
    ctx.gpr[7] = (ctx.gpr[7] | 55676u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(1072), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(1076), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(1080), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[5] = (16288u << 16u);
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(1081), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[5] = (ctx.gpr[5] | 55676u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(1124), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(1120), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(1128), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(1129), static_cast<std::uint8_t>(ctx.gpr[6]));
    goto L_0880E58C;
L_0880E58C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(336)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(208)));
    ctx.gpr[5] = (ctx.gpr[5] & 4u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880E5C4;
      }
      goto L_0880E5A0;
    }
L_0880E5A0:
    ctx.gpr[6] = (49009u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 17979u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(880), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(884), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(888), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(889), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_0880E5E4;
      }
      goto L_0880E5C4;
    }
L_0880E5C4:
    ctx.gpr[6] = (16241u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 17979u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(884), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(880), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(888), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(889), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_0880E5E4;
L_0880E5E4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(336)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(208)));
    ctx.gpr[5] = (ctx.gpr[5] & 8u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880E620;
      }
      goto L_0880E5F8;
    }
L_0880E5F8:
    ctx.gpr[6] = (49056u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 55676u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(928), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(932), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(936), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(937), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_0880E678;
      }
      goto L_0880E620;
    }
L_0880E620:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(336)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(208)));
    ctx.gpr[5] = (ctx.gpr[5] & 512u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880E658;
      }
      goto L_0880E634;
    }
L_0880E634:
    ctx.gpr[6] = (16329u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 4059u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(932), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(928), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(936), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(937), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_0880E678;
      }
      goto L_0880E658;
    }
L_0880E658:
    ctx.gpr[6] = (49009u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 17979u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(928), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(932), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(936), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(937), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_0880E678;
L_0880E678:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(336)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(208)));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880E6CC;
      }
      goto L_0880E68C;
    }
L_0880E68C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[31] = (0x0880E69Cu);
    ctx.gpr[6] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 210u, 0x08A2928Cu>(ctx, &aot_mem) && ctx.pc == 0x0880E69Cu) goto L_0880E69C;
    return;
L_0880E69C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[31] = (0x0880E6ACu);
    ctx.gpr[6] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 210u, 0x08A2928Cu>(ctx, &aot_mem) && ctx.pc == 0x0880E6ACu) goto L_0880E6AC;
    return;
L_0880E6AC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 4u);
    ctx.gpr[31] = (0x0880E6BCu);
    ctx.gpr[6] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 210u, 0x08A2928Cu>(ctx, &aot_mem) && ctx.pc == 0x0880E6BCu) goto L_0880E6BC;
    return;
L_0880E6BC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[31] = (0x0880E6CCu);
    ctx.gpr[6] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 210u, 0x08A2928Cu>(ctx, &aot_mem) && ctx.pc == 0x0880E6CCu) goto L_0880E6CC;
    return;
L_0880E6CC:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[16] = (ctx.gpr[19] | 0u);
    ctx.gpr[18] = (2227u << 16u);
    goto L_0880E6D8;
L_0880E6D8:
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(672)));
    ctx.gpr[31] = (0x0880E6E4u);
    ctx.fpr[28] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]) ^ 0x80000000u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x0880E6E4u) goto L_0880E6E4;
    return;
L_0880E6E4:
    ctx.fpr[12] = ctx.fpr[26] - ctx.fpr[28];
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 6 ? 1u : 0u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[28] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1584), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0880E6D8;
      }
      goto L_0880E704;
    }
L_0880E704:
    ctx.gpr[31] = (0x0880E70Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(336)));
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 283u, 0x08A89E94u>(ctx, &aot_mem) && ctx.pc == 0x0880E70Cu) goto L_0880E70C;
    return;
L_0880E70C:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x0880E718u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(336)));
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 285u, 0x08A89EA4u>(ctx, &aot_mem) && ctx.pc == 0x0880E718u) goto L_0880E718;
    return;
L_0880E718:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(336)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(240));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(336)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (15395u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0880E77C;
      }
      goto L_0880E754;
    }
L_0880E754:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(336)));
    ctx.gpr[5] = (16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (2227u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(652)));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(220), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0880E788;
      }
      goto L_0880E77C;
    }
L_0880E77C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(336)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(220), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0880E788;
L_0880E788:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(224), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(336)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1510))))));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(228), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[21]);
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(1510), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1510))))));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(1576), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(1572), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(1520), 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(1524), 0u);
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(1510), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(584), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1510))))));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(588), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(592), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(1696), 0u);
    ctx.gpr[4] = (ctx.gpr[4] | 4u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(1732), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(1510), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1510))))));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[22]);
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(1510), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1510))))));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(1580), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[30]);
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(1510), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store16(ctx.gpr[19] + static_cast<std::uint32_t>(1518), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] + static_cast<std::uint32_t>(1632));
    goto L_0880E81C;
L_0880E81C:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1612), 0u);
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1376), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1392), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1408), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1460), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1492), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1736), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1436), 0u);
    ctx.gpr[7] = (ctx.gpr[19] + ctx.gpr[22]);
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(1452), static_cast<std::uint8_t>(0u));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[22]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_0880E81C;
      }
      goto L_0880E860;
    }
L_0880E860:
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(1728), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(1729), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(1730), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(1560), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(1564), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(1568), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x0880E880u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    goto L_0880FC00;
L_0880E880:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-497));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] | 32u);
    ctx.gpr[5] = (65535u << 16u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1509))))));
    ctx.gpr[5] = (1u << 16u);
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-8));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] & ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(1509), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(540), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1509))))));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(1512), 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[30]);
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(1509), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(660)));
    ctx.gpr[5] = (0u | 1u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(1708), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
        goto L_0880E908;
    }
    goto L_0880E8E0;
L_0880E8E0:
    ctx.gpr[4] = (0u | 157u);
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 158u);
      if (branch_taken) {
          goto L_0880E8FC;
      }
      goto L_0880E8EC;
    }
L_0880E8EC:
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 162u);
      if (branch_taken) {
          goto L_0880E8FC;
      }
      goto L_0880E8F4;
    }
L_0880E8F4:
    if (ctx.gpr[20] != ctx.gpr[4]) {
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(1708), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
        goto L_0880E908;
    }
    goto L_0880E8FC;
L_0880E8FC:
    ctx.gpr[4] = (0u | 5u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(660), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(1708), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_0880E908;
L_0880E908:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(1712), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(1720), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (49024u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(1704), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(1716), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(1700), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u | 164u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0880EA64;
      }
      goto L_0880E934;
    }
L_0880E934:
    ctx.gpr[31] = (0x0880E93Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1184)));
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 221u, 0x08A4CE74u>(ctx, &aot_mem) && ctx.pc == 0x0880E93Cu) goto L_0880E93C;
    return;
L_0880E93C:
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[4]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1172)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_0880E974;
      }
      goto L_0880E95C;
    }
L_0880E95C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
        goto L_0880E978;
    }
    goto L_0880E96C;
L_0880E96C:
    ctx.gpr[31] = (0x0880E974u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x0880E974u) goto L_0880E974;
    return;
L_0880E974:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    goto L_0880E978;
L_0880E978:
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[4]);
    ctx.gpr[31] = (0x0880E990u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 508u, 0x08A0651Cu>(ctx, &aot_mem) && ctx.pc == 0x0880E990u) goto L_0880E990;
    return;
L_0880E990:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1184)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), 0u);
      if (branch_taken) {
          goto L_0880E9B4;
      }
      goto L_0880E99C;
    }
L_0880E99C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_0880E9B8;
      }
      goto L_0880E9AC;
    }
L_0880E9AC:
    ctx.gpr[31] = (0x0880E9B4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x0880E9B4u) goto L_0880E9B4;
    return;
L_0880E9B4:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    goto L_0880E9B8;
L_0880E9B8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), ctx.gpr[4]);
    ctx.gpr[31] = (0x0880E9D0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 508u, 0x08A0651Cu>(ctx, &aot_mem) && ctx.pc == 0x0880E9D0u) goto L_0880E9D0;
    return;
L_0880E9D0:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0880EA0Cu);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 515u, 0x08A06668u>(ctx, &aot_mem) && ctx.pc == 0x0880EA0Cu) goto L_0880EA0C;
    return;
L_0880EA0C:
    ctx.gpr[31] = (0x0880EA14u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 505u, 0x08A064E8u>(ctx, &aot_mem) && ctx.pc == 0x0880EA14u) goto L_0880EA14;
    return;
L_0880EA14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
        goto L_0880EA3C;
    }
    goto L_0880EA24;
L_0880EA24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
        goto L_0880EA3C;
    }
    goto L_0880EA30;
L_0880EA30:
    ctx.gpr[31] = (0x0880EA38u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x0880EA38u) goto L_0880EA38;
    return;
L_0880EA38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    goto L_0880EA3C;
L_0880EA3C:
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880EA5C;
      }
      goto L_0880EA48;
    }
L_0880EA48:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880EA5C;
      }
      goto L_0880EA54;
    }
L_0880EA54:
    ctx.gpr[31] = (0x0880EA5Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x0880EA5Cu) goto L_0880EA5C;
    return;
L_0880EA5C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0880EB18;
      }
      goto L_0880EA64;
    }
L_0880EA64:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u | 213u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0880EA90;
      }
      goto L_0880EA74;
    }
L_0880EA74:
    ctx.gpr[31] = (0x0880EA7Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1192)));
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 221u, 0x08A4CE74u>(ctx, &aot_mem) && ctx.pc == 0x0880EA7Cu) goto L_0880EA7C;
    return;
L_0880EA7C:
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x0880EA88u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1180)));
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 221u, 0x08A4CE74u>(ctx, &aot_mem) && ctx.pc == 0x0880EA88u) goto L_0880EA88;
    return;
L_0880EA88:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_0880EB18;
      }
      goto L_0880EA90;
    }
L_0880EA90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(336)));
    ctx.gpr[5] = (2u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(208)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880EADC;
      }
      goto L_0880EAA8;
    }
L_0880EAA8:
    ctx.gpr[31] = (0x0880EAB0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1184)));
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 221u, 0x08A4CE74u>(ctx, &aot_mem) && ctx.pc == 0x0880EAB0u) goto L_0880EAB0;
    return;
L_0880EAB0:
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x0880EABCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1172)));
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 221u, 0x08A4CE74u>(ctx, &aot_mem) && ctx.pc == 0x0880EABCu) goto L_0880EABC;
    return;
L_0880EABC:
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x0880EAC8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1192)));
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 221u, 0x08A4CE74u>(ctx, &aot_mem) && ctx.pc == 0x0880EAC8u) goto L_0880EAC8;
    return;
L_0880EAC8:
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x0880EAD4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1180)));
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 221u, 0x08A4CE74u>(ctx, &aot_mem) && ctx.pc == 0x0880EAD4u) goto L_0880EAD4;
    return;
L_0880EAD4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_0880EB18;
      }
      goto L_0880EADC;
    }
L_0880EADC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u | 162u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0880EB18;
      }
      goto L_0880EAEC;
    }
L_0880EAEC:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27772)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0880EB18;
      }
      goto L_0880EAFC;
    }
L_0880EAFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (4u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[5] = (1024u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    goto L_0880EB18;
L_0880EB18:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(675), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(220)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
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
L_0880EB68:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-160));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7872)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_0880EBD8;
      }
      goto L_0880EBC4;
    }
L_0880EBC4:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_0880EBD8;
L_0880EBD8:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-7828)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[19] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(60)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 496u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    { const float fs = ctx.fpr[30]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[30] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[30] = fs * ft; }
      if (branch_taken) {
          goto L_0880EDB4;
      }
      goto L_0880EC20;
    }
L_0880EC20:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(599))))));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880EDAC;
      }
      goto L_0880EC30;
    }
L_0880EC30:
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880EC8C;
      }
      goto L_0880EC3C;
    }
L_0880EC3C:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880EC8C;
      }
      goto L_0880EC4C;
    }
L_0880EC4C:
    ctx.gpr[6] = (ctx.gpr[5] << 2u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(64)));
    ctx.gpr[8] = (ctx.gpr[16] + ctx.gpr[6]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(1376)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(1544)));
    ctx.gpr[9] = (ctx.gpr[5] << 5u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[9]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[29] + ctx.gpr[6]);
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[12];
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0880EC4C;
      }
      goto L_0880EC8C;
    }
L_0880EC8C:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880ED34;
      }
      goto L_0880EC9C;
    }
L_0880EC9C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(336)));
    goto L_0880ECA0;
L_0880ECA0:
    ctx.gpr[6] = (ctx.gpr[4] << 2u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(192)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(196)));
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[6]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[7] = (ctx.gpr[4] << 5u);
    ctx.gpr[6] = (ctx.gpr[29] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(1528), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(64)));
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[7]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(24)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(1544), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(64)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = ctx.fpr[15] - ctx.fpr[13];
    ctx.fpr[12] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[6] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(1376), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(656)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0880ED20;
      }
      goto L_0880ED0C;
    }
L_0880ED0C:
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] << 2u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(656)));
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(1376), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0880ED20;
L_0880ED20:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(336)));
        goto L_0880ECA0;
    }
    goto L_0880ED34;
L_0880ED34:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1518)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0880ED60;
      }
      goto L_0880ED40;
    }
L_0880ED40:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.gpr[6] = (0u | 20u);
    ctx.gpr[31] = (0x0880ED58u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 101u, 0x0886476Cu>(ctx, &aot_mem) && ctx.pc == 0x0880ED58u) goto L_0880ED58;
    return;
L_0880ED58:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0880ED88;
      }
      goto L_0880ED60;
    }
L_0880ED60:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1518)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 100 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0880ED88;
      }
      goto L_0880ED70;
    }
L_0880ED70:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.gpr[6] = (0u | 21u);
    ctx.gpr[31] = (0x0880ED88u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 101u, 0x0886476Cu>(ctx, &aot_mem) && ctx.pc == 0x0880ED88u) goto L_0880ED88;
    return;
L_0880ED88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(112)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_0880ED98;
      }
      goto L_0880ED94;
    }
L_0880ED94:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(112), 0u);
    goto L_0880ED98;
L_0880ED98:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(599))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-129));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(599), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(1518), static_cast<std::uint16_t>(0u));
    goto L_0880EDAC;
L_0880EDAC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0880FBBC;
      }
      goto L_0880EDB4;
    }
L_0880EDB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(336)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(192)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(196)));
    ctx.gpr[4] = (15948u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[22] = ctx.fpr[26] - ctx.fpr[20];
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(599))))));
    ctx.fpr[28] = ctx.fpr[26] - ctx.fpr[24];
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    ctx.fpr[20] = ctx.fpr[24] - ctx.fpr[20];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[22] = ctx.fpr[22] - ctx.fpr[20];
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
      if (branch_taken) {
          goto L_0880F080;
      }
      goto L_0880EDF0;
    }
L_0880EDF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(112)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880EE1C;
      }
      goto L_0880EDFC;
    }
L_0880EDFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(112)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_0880EE1C;
      }
      goto L_0880EE08;
    }
L_0880EE08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(112)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-129));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(599))))));
    ctx.gpr[5] = (ctx.gpr[6] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(599), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_0880EE1C;
L_0880EE1C:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(112), ctx.gpr[16]);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0880EE30u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 591u, 0x08806510u>(ctx, &aot_mem) && ctx.pc == 0x0880EE30u) goto L_0880EE30;
    return;
L_0880EE30:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(599))))));
    ctx.gpr[5] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 128u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(599), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1580)));
    ctx.gpr[4] = (ctx.gpr[5] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (48675u << 16u);
      if (branch_taken) {
          goto L_0880EE68;
      }
      goto L_0880EE5C;
    }
L_0880EE5C:
    ctx.gpr[4] = (0u | 20u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(1518), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0880EEA4;
      }
      goto L_0880EE68;
    }
L_0880EE68:
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(1518), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (15907u << 16u);
    ctx.fpr[26] = ctx.fpr[26] + ctx.fpr[12];
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.fpr[28] = ctx.fpr[24] + ctx.fpr[13];
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    ctx.gpr[6] = (0u | 21u);
    ctx.gpr[31] = (0x0880EEA4u);
    ctx.fpr[28] = ctx.fpr[26] - ctx.fpr[28];
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 101u, 0x0886476Cu>(ctx, &aot_mem) && ctx.pc == 0x0880EEA4u) goto L_0880EEA4;
    return;
L_0880EEA4:
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880EFCC;
      }
      goto L_0880EEB4;
    }
L_0880EEB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(64)));
    ctx.gpr[21] = (ctx.gpr[20] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[21]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[20] << 2u);
    ctx.gpr[22] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(1376)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(1544)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x0880EEF8u);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 220u, 0x0887643Cu>(ctx, &aot_mem) && ctx.pc == 0x0880EEF8u) goto L_0880EEF8;
    return;
L_0880EEF8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[26];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(64)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[21]);
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[13] = ctx.fpr[28] + ctx.fpr[30];
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(64)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[21]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(1528), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(1544), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(1376)));
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(656)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0880EFB8;
      }
      goto L_0880EF5C;
    }
L_0880EF5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(64)));
    ctx.gpr[5] = (ctx.gpr[20] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[20] << 2u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1544)));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1376), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(656)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0880EFB8;
      }
      goto L_0880EFA4;
    }
L_0880EFA4:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[20] << 2u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(656)));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1376), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0880EFB8;
L_0880EFB8:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[20] = (ctx.gpr[20] & 65535u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0880EEB4;
      }
      goto L_0880EFCC;
    }
L_0880EFCC:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.gpr[6] = (0u | 21u);
    ctx.gpr[31] = (0x0880EFE4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 101u, 0x0886476Cu>(ctx, &aot_mem) && ctx.pc == 0x0880EFE4u) goto L_0880EFE4;
    return;
L_0880EFE4:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0880EFF4u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 220u, 0x0887643Cu>(ctx, &aot_mem) && ctx.pc == 0x0880EFF4u) goto L_0880EFF4;
    return;
L_0880EFF4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[20];
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[30];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0880F024;
      }
      goto L_0880F014;
    }
L_0880F014:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[20];
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[30];
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0880F024;
L_0880F024:
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(16));
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
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_0880F05C;
    }
    goto L_0880F05C;
L_0880F05C:
    ctx.fpr[13] = std::sqrt(ctx.fpr[13]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0880F078;
      }
      goto L_0880F074;
    }
L_0880F074:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_0880F078;
L_0880F078:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0880FBBC;
      }
      goto L_0880F080;
    }
L_0880F080:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(232)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0880F0A8;
      }
      goto L_0880F08C;
    }
L_0880F08C:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1518)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 20 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_0880F0B0;
      }
      goto L_0880F0A0;
    }
L_0880F0A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0880F114;
      }
      goto L_0880F0A8;
    }
L_0880F0A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0880FBBC;
      }
      goto L_0880F0B0;
    }
L_0880F0B0:
    ctx.gpr[4] = (15948u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1580)));
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0880F114;
      }
      goto L_0880F0D0;
    }
L_0880F0D0:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1518)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0880F104;
      }
      goto L_0880F0DC;
    }
L_0880F0DC:
    ctx.gpr[4] = (0u | 20u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(1518), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.gpr[6] = (0u | 20u);
    ctx.gpr[31] = (0x0880F0FCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 101u, 0x0886476Cu>(ctx, &aot_mem) && ctx.pc == 0x0880F0FCu) goto L_0880F0FC;
    return;
L_0880F0FC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_0880F17C;
      }
      goto L_0880F104;
    }
L_0880F104:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1518)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(1518), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0880F17C;
      }
      goto L_0880F114;
    }
L_0880F114:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1518)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0880F17C;
      }
      goto L_0880F120;
    }
L_0880F120:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1518)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (15820u << 16u);
      if (branch_taken) {
          goto L_0880F17C;
      }
      goto L_0880F130;
    }
L_0880F130:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1580)));
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0880F17C;
      }
      goto L_0880F14C;
    }
L_0880F14C:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1518)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(1518), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0880F17C;
      }
      goto L_0880F164;
    }
L_0880F164:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.gpr[6] = (0u | 21u);
    ctx.gpr[31] = (0x0880F17Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 101u, 0x0886476Cu>(ctx, &aot_mem) && ctx.pc == 0x0880F17Cu) goto L_0880F17C;
    return;
L_0880F17C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x0880F188u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x0880F188u) goto L_0880F188;
    return;
L_0880F188:
    ctx.gpr[31] = (0x0880F190u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 1030u, 0x08A97D0Cu>(ctx, &aot_mem) && ctx.pc == 0x0880F190u) goto L_0880F190;
    return;
L_0880F190:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880F4B4;
      }
      goto L_0880F198;
    }
L_0880F198:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1518)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 100 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880F1B4;
      }
      goto L_0880F1A8;
    }
L_0880F1A8:
    ctx.gpr[4] = (0u | 100u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(1518), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0880F1E4;
      }
      goto L_0880F1B4;
    }
L_0880F1B4:
    ctx.gpr[4] = (15820u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1580)));
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0880F1E0;
      }
      goto L_0880F1D4;
    }
L_0880F1D4:
    ctx.gpr[4] = (0u | 20u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(1518), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0880F1E4;
      }
      goto L_0880F1E0;
    }
L_0880F1E0:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(1518), static_cast<std::uint16_t>(0u));
    goto L_0880F1E4;
L_0880F1E4:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1518)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 100 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0880F340;
      }
      goto L_0880F1F4;
    }
L_0880F1F4:
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880F320;
      }
      goto L_0880F204;
    }
L_0880F204:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(64)));
    ctx.gpr[18] = (ctx.gpr[20] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[20] << 2u);
    ctx.gpr[21] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1376)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1544)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x0880F248u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 220u, 0x0887643Cu>(ctx, &aot_mem) && ctx.pc == 0x0880F248u) goto L_0880F248;
    return;
L_0880F248:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(64)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[14] = ctx.fpr[22] + ctx.fpr[30];
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(64)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(1528), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(1544), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1376)));
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(656)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0880F30C;
      }
      goto L_0880F2B0;
    }
L_0880F2B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(64)));
    ctx.gpr[5] = (ctx.gpr[20] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[20] << 2u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1544)));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1376), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(656)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0880F30C;
      }
      goto L_0880F2F8;
    }
L_0880F2F8:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[20] << 2u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(656)));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1376), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0880F30C;
L_0880F30C:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[20] = (ctx.gpr[20] & 65535u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_0880F204;
      }
      goto L_0880F320;
    }
L_0880F320:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.gpr[6] = (0u | 20u);
    ctx.gpr[31] = (0x0880F338u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 101u, 0x0886476Cu>(ctx, &aot_mem) && ctx.pc == 0x0880F338u) goto L_0880F338;
    return;
L_0880F338:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0880FB60;
      }
      goto L_0880F340;
    }
L_0880F340:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1518)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (48675u << 16u);
      if (branch_taken) {
          goto L_0880F36C;
      }
      goto L_0880F34C;
    }
L_0880F34C:
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (15907u << 16u);
    ctx.fpr[26] = ctx.fpr[26] + ctx.fpr[12];
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[28] = ctx.fpr[24] + ctx.fpr[13];
    ctx.fpr[28] = ctx.fpr[26] - ctx.fpr[28];
    goto L_0880F36C;
L_0880F36C:
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880F494;
      }
      goto L_0880F37C;
    }
L_0880F37C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(64)));
    ctx.gpr[21] = (ctx.gpr[20] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[21]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[20] << 2u);
    ctx.gpr[22] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(1376)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(1544)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x0880F3C0u);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 220u, 0x0887643Cu>(ctx, &aot_mem) && ctx.pc == 0x0880F3C0u) goto L_0880F3C0;
    return;
L_0880F3C0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[26];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(64)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[21]);
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[13] = ctx.fpr[28] + ctx.fpr[30];
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(64)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[21]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(1528), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(1544), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(1376)));
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(656)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0880F480;
      }
      goto L_0880F424;
    }
L_0880F424:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(64)));
    ctx.gpr[5] = (ctx.gpr[20] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[20] << 2u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1544)));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1376), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(656)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0880F480;
      }
      goto L_0880F46C;
    }
L_0880F46C:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[20] << 2u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(656)));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1376), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0880F480;
L_0880F480:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[20] = (ctx.gpr[20] & 65535u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0880F37C;
      }
      goto L_0880F494;
    }
L_0880F494:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.gpr[6] = (0u | 21u);
    ctx.gpr[31] = (0x0880F4ACu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 101u, 0x0886476Cu>(ctx, &aot_mem) && ctx.pc == 0x0880F4ACu) goto L_0880F4AC;
    return;
L_0880F4AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0880FB60;
      }
      goto L_0880F4B4;
    }
L_0880F4B4:
    ctx.gpr[31] = (0x0880F4BCu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x0880F4BCu) goto L_0880F4BC;
    return;
L_0880F4BC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0880F4C8u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 824u, 0x08A97354u>(ctx, &aot_mem) && ctx.pc == 0x0880F4C8u) goto L_0880F4C8;
    return;
L_0880F4C8:
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x0880F4D8u);
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[20])));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x0880F4D8u) goto L_0880F4D8;
    return;
L_0880F4D8:
    ctx.gpr[31] = (0x0880F4E0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 835u, 0x08A97400u>(ctx, &aot_mem) && ctx.pc == 0x0880F4E0u) goto L_0880F4E0;
    return;
L_0880F4E0:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[4] = (48128u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[5] = (15360u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[22] = std::bit_cast<float>(0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[15];
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
        goto L_0880F51C;
    }
    goto L_0880F51C;
L_0880F51C:
    ctx.gpr[4] = (15360u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(0u);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[15];
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[14]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
        goto L_0880F548;
    }
    goto L_0880F548;
L_0880F548:
    ctx.gpr[4] = (48128u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (15360u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[16];
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[14]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
        goto L_0880F57C;
    }
    goto L_0880F57C;
L_0880F57C:
    ctx.gpr[4] = (15360u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_0880F5A8;
    }
    goto L_0880F5A8;
L_0880F5A8:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1518)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 100 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_0880F7F8;
      }
      goto L_0880F5B8;
    }
L_0880F5B8:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1518)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 104 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880F5D4;
      }
      goto L_0880F5C8;
    }
L_0880F5C8:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1518)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(1518), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_0880F5D4;
L_0880F5D4:
    ctx.gpr[4] = (15820u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1580)));
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (48675u << 16u);
      if (branch_taken) {
          goto L_0880F614;
      }
      goto L_0880F5F4;
    }
L_0880F5F4:
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (15907u << 16u);
    ctx.fpr[26] = ctx.fpr[26] + ctx.fpr[12];
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[24] = ctx.fpr[24] + ctx.fpr[13];
    ctx.fpr[28] = ctx.fpr[26] - ctx.fpr[24];
    goto L_0880F614;
L_0880F614:
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880FA00;
      }
      goto L_0880F624;
    }
L_0880F624:
    ctx.gpr[4] = (ctx.gpr[20] << 2u);
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(64)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
        goto L_0880F660;
    }
    goto L_0880F648;
L_0880F648:
    ctx.gpr[4] = (ctx.gpr[20] << 2u);
    ctx.gpr[5] = (16256u << 16u);
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    goto L_0880F660;
L_0880F660:
    ctx.gpr[4] = (ctx.gpr[20] << 2u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(64)));
    ctx.fpr[14] = ctx.fpr[26] - ctx.fpr[12];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[24] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.fpr[15] = ctx.fpr[28] - ctx.fpr[20];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[13];
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(64)));
    ctx.gpr[21] = (ctx.gpr[20] << 5u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[21]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1376)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1544)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x0880F6C8u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 220u, 0x0887643Cu>(ctx, &aot_mem) && ctx.pc == 0x0880F6C8u) goto L_0880F6C8;
    return;
L_0880F6C8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[24];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(64)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[21]);
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[13] = ctx.fpr[20] + ctx.fpr[30];
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(64)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[21]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) & 0x7FFFFFFFu);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]) & 0x7FFFFFFFu);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
      if (branch_taken) {
          goto L_0880F734;
      }
      goto L_0880F71C;
    }
L_0880F71C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(64)));
    ctx.gpr[5] = (ctx.gpr[20] << 5u);
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.fpr[22] = ctx.fpr[22] - ctx.fpr[12];
    goto L_0880F734;
L_0880F734:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(64)));
    ctx.gpr[5] = (ctx.gpr[20] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[20] << 2u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1528), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[30];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1544), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1376)));
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(656)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0880F7DC;
      }
      goto L_0880F780;
    }
L_0880F780:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(64)));
    ctx.gpr[5] = (ctx.gpr[20] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[20] << 2u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1544)));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1376), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(656)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0880F7DC;
      }
      goto L_0880F7C8;
    }
L_0880F7C8:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[20] << 2u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(656)));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1376), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0880F7DC;
L_0880F7DC:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[20] = (ctx.gpr[20] & 65535u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0880F624;
      }
      goto L_0880F7F0;
    }
L_0880F7F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0880FA00;
      }
      goto L_0880F7F8;
    }
L_0880F7F8:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1518)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (48675u << 16u);
      if (branch_taken) {
          goto L_0880F824;
      }
      goto L_0880F804;
    }
L_0880F804:
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (15907u << 16u);
    ctx.fpr[26] = ctx.fpr[26] + ctx.fpr[12];
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[24] = ctx.fpr[24] + ctx.fpr[13];
    ctx.fpr[28] = ctx.fpr[26] - ctx.fpr[24];
    goto L_0880F824;
L_0880F824:
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880FA00;
      }
      goto L_0880F834;
    }
L_0880F834:
    ctx.gpr[4] = (ctx.gpr[20] << 2u);
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(64)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
        goto L_0880F870;
    }
    goto L_0880F858;
L_0880F858:
    ctx.gpr[4] = (ctx.gpr[20] << 2u);
    ctx.gpr[5] = (16256u << 16u);
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    goto L_0880F870;
L_0880F870:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(64)));
    ctx.gpr[21] = (ctx.gpr[20] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[21]);
    ctx.gpr[5] = (ctx.gpr[20] << 2u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[6] = (ctx.gpr[29] + ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(64)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[26];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[24] = ctx.fpr[26] + ctx.fpr[12];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[28];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.fpr[20] = ctx.fpr[28] + ctx.fpr[20];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1376)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1544)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[15] - ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x0880F8D8u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 220u, 0x0887643Cu>(ctx, &aot_mem) && ctx.pc == 0x0880F8D8u) goto L_0880F8D8;
    return;
L_0880F8D8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[24];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(64)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[21]);
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[13] = ctx.fpr[20] + ctx.fpr[30];
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(64)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[21]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) & 0x7FFFFFFFu);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]) & 0x7FFFFFFFu);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
      if (branch_taken) {
          goto L_0880F944;
      }
      goto L_0880F92C;
    }
L_0880F92C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(64)));
    ctx.gpr[5] = (ctx.gpr[20] << 5u);
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.fpr[22] = ctx.fpr[22] - ctx.fpr[12];
    goto L_0880F944;
L_0880F944:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(64)));
    ctx.gpr[5] = (ctx.gpr[20] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[20] << 2u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1528), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[30];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1544), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1376)));
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(656)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0880F9EC;
      }
      goto L_0880F990;
    }
L_0880F990:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(64)));
    ctx.gpr[5] = (ctx.gpr[20] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[20] << 2u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1544)));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1376), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(656)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0880F9EC;
      }
      goto L_0880F9D8;
    }
L_0880F9D8:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[20] << 2u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(656)));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1376), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0880F9EC;
L_0880F9EC:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[20] = (ctx.gpr[20] & 65535u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0880F834;
      }
      goto L_0880FA00;
    }
L_0880FA00:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.fpr[14] = ctx.fpr[12] - ctx.fpr[24];
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[14]) || std::isnan(ctx.fpr[13])) && ctx.fpr[14] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0880FB60;
      }
      goto L_0880FA1C;
    }
L_0880FA1C:
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[24];
    ctx.fpr[12] = ctx.fpr[22] / ctx.fpr[12];
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) & 0x7FFFFFFFu);
    ctx.gpr[31] = (0x0880FA30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 377u, 0x08AF5D84u>(ctx, &aot_mem) && ctx.pc == 0x0880FA30u) goto L_0880FA30;
    return;
L_0880FA30:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(828)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(824)));
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x0880FA48u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 514u, 0x08AF6790u>(ctx, &aot_mem) && ctx.pc == 0x0880FA48u) goto L_0880FA48;
    return;
L_0880FA48:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0880FB60;
      }
      goto L_0880FA50;
    }
L_0880FA50:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[24];
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[12] + ctx.fpr[22];
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    ctx.fpr[22] = ctx.fpr[22] / ctx.fpr[12];
    ctx.fpr[15] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0880FA88;
      }
      goto L_0880FA80;
    }
L_0880FA80:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[22] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_0880FAA8;
      }
      goto L_0880FA88;
    }
L_0880FA88:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[22] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0880FAA8;
      }
      goto L_0880FAA0;
    }
L_0880FAA0:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_0880FAA8;
L_0880FAA8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.gpr[6] = (0u | 22u);
    ctx.gpr[31] = (0x0880FAC0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 101u, 0x0886476Cu>(ctx, &aot_mem) && ctx.pc == 0x0880FAC0u) goto L_0880FAC0;
    return;
L_0880FAC0:
    ctx.gpr[4] = (16076u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (16153u << 16u);
      if (branch_taken) {
          goto L_0880FAF4;
      }
      goto L_0880FADC;
    }
L_0880FADC:
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[22] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0880FAF8;
      }
      goto L_0880FAF4;
    }
L_0880FAF4:
    ctx.gpr[18] = (0u | 1u);
    goto L_0880FAF8;
L_0880FAF8:
    ctx.gpr[4] = (16000u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0880FB30;
      }
      goto L_0880FB10;
    }
L_0880FB10:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.gpr[6] = (0u | 21u);
    ctx.gpr[31] = (0x0880FB28u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 101u, 0x0886476Cu>(ctx, &aot_mem) && ctx.pc == 0x0880FB28u) goto L_0880FB28;
    return;
L_0880FB28:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0880FB60;
      }
      goto L_0880FB30;
    }
L_0880FB30:
    ctx.gpr[4] = (16192u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[22] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0880FB60;
      }
      goto L_0880FB48;
    }
L_0880FB48:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.gpr[6] = (0u | 20u);
    ctx.gpr[31] = (0x0880FB60u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 101u, 0x0886476Cu>(ctx, &aot_mem) && ctx.pc == 0x0880FB60u) goto L_0880FB60;
    return;
L_0880FB60:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880FBBC;
      }
      goto L_0880FB68;
    }
L_0880FB68:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880FBBC;
      }
      goto L_0880FB78;
    }
L_0880FB78:
    ctx.gpr[5] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1528)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1544)));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[6] = (16256u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1376)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = ctx.fpr[15] - ctx.fpr[12];
    ctx.fpr[13] = ctx.fpr[14] - ctx.fpr[12];
    ctx.fpr[12] = ctx.fpr[15] - ctx.fpr[12];
    ctx.fpr[12] = ctx.fpr[13] / ctx.fpr[12];
    { const bool branch_taken = ctx.gpr[7] != 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(1392), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0880FB78;
      }
      goto L_0880FBBC;
    }
L_0880FBBC:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880FC00:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7872)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[19]);
    ctx.gpr[6] = (16128u << 16u);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[6]);
      if (branch_taken) {
          goto L_0880FC5C;
      }
      goto L_0880FC48;
    }
L_0880FC48:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_0880FC5C;
L_0880FC5C:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_0880FC90;
      }
      goto L_0880FC6C;
    }
L_0880FC6C:
    ctx.gpr[4] = (0u | 4u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(54), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (0u | 4u);
    ctx.gpr[6] = (0u | 32u);
    ctx.gpr[31] = (0x0880FC88u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 341u, 0x08AF5A1Cu>(ctx, &aot_mem) && ctx.pc == 0x0880FC88u) goto L_0880FC88;
    return;
L_0880FC88:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
    ctx.gpr[18] = (0u | 1u);
    goto L_0880FC90;
L_0880FC90:
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    goto L_0880FC98;
L_0880FC98:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x0880FCA8u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 220u, 0x0887643Cu>(ctx, &aot_mem) && ctx.pc == 0x0880FCA8u) goto L_0880FCA8;
    return;
L_0880FCA8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (ctx.gpr[21] << 2u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1476), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(336)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(192)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(64)));
    ctx.gpr[6] = (ctx.gpr[21] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(336)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(196)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(192)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[14];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(60)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[15];
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(64)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(336)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(192)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(196)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1528), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(64)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1544), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[21] = (ctx.gpr[4] << 16u);
    ctx.gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[21]) >> 16u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0880FC98;
      }
      goto L_0880FD5C;
    }
L_0880FD5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(336)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(184)));
    ctx.gpr[4] = (16512u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16256u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[14] / ctx.fpr[12];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(64)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1528)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(60)));
    ctx.gpr[21] = (0u | 0u);
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[12];
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[16];
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1560), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0880FDA8;
L_0880FDA8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(60)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1560)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[21] << 2u);
    ctx.gpr[5] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[21] = (ctx.gpr[5] << 16u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[21]) >> 16u));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[21]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1476), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
      if (branch_taken) {
          goto L_0880FDA8;
      }
      goto L_0880FDD8;
    }
L_0880FDD8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(64)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0880FE00;
      }
      goto L_0880FDF4;
    }
L_0880FDF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(64)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0880FE00;
L_0880FE00:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
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
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(32));
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
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
        goto L_0880FE40;
    }
    goto L_0880FE40;
L_0880FE40:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0880FE58;
      }
      goto L_0880FE54;
    }
L_0880FE54:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0880FE58;
L_0880FE58:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u | 169u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0880FEBC;
      }
      goto L_0880FE68;
    }
L_0880FE68:
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[21] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (16025u << 16u);
      if (branch_taken) {
          goto L_0880FEBC;
      }
      goto L_0880FE88;
    }
L_0880FE88:
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(60)));
    goto L_0880FE94;
L_0880FE94:
    ctx.gpr[5] = (ctx.gpr[21] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[21] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[21]) >> 16u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(60)));
        goto L_0880FE94;
    }
    goto L_0880FEBC;
L_0880FEBC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(336)));
    ctx.gpr[5] = (4096u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(208)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880FFA0;
      }
      goto L_0880FED4;
    }
L_0880FED4:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880FFA0;
      }
      goto L_0880FEDC;
    }
L_0880FEDC:
    ctx.gpr[4] = (16000u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1560)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[14] = ctx.fpr[12] - ctx.fpr[14];
      if (branch_taken) {
          goto L_0880FFA0;
      }
      goto L_0880FEFC;
    }
L_0880FEFC:
    ctx.gpr[5] = (16076u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.gpr[4] = (0u | 0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    goto L_0880FF0C;
L_0880FF0C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(60)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[15];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0880FF8C;
      }
      goto L_0880FF30;
    }
L_0880FF30:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(60)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(60)));
        goto L_0880FF7C;
    }
    goto L_0880FF4C;
L_0880FF4C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(60)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
        goto L_0880FF6C;
    }
    goto L_0880FF6C;
L_0880FF6C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(60)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(60)));
    goto L_0880FF7C;
L_0880FF7C:
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.fpr[12] = ctx.fpr[14] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0880FF8C;
L_0880FF8C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_0880FF0C;
      }
      goto L_0880FFA0;
    }
L_0880FFA0:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880FFC8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-912));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(896), ctx.gpr[22]);
    ctx.gpr[22] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(888), ctx.gpr[20]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(228)));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[4] = (2233u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(832), ctx.gpr[22]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(848), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(852), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(856), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.pc = 0x08810000u; return;
}

void recomp_unit_0002(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0002_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_2(Runtime &runtime) {
    runtime.register_generated_unit(2u, 0x0880C000u, 16384u, &recomp_unit_0002, &recomp_unit_0002_entry);
    runtime.register_function(0x0880C004u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C04Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C060u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C06Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C078u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C080u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C08Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C0FCu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C104u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C10Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C11Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C124u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C128u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C140u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C15Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C168u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C178u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C180u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C184u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C19Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C1BCu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C1C8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C1D8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C1E0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C1E4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C1FCu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C21Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C228u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C238u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C240u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C244u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C25Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C27Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C288u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C294u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C2A0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C2B0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C2B8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C2BCu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C2D4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C2F4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C300u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C310u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C318u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C31Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C334u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C354u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C360u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C368u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C378u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C384u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C38Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C390u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C3BCu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C3F4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C404u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C410u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C418u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C420u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C428u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C434u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C43Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C444u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C44Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C454u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C45Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C464u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C46Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C470u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C47Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C484u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C494u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C4BCu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C4D0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C4ECu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C4F4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C504u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C544u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C550u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C59Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C5C0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C5F4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C608u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C618u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C628u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C638u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C648u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C670u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C684u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C690u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C6A0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C6ACu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C6B4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C6B8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C6BCu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C6D0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C6E4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C6ECu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C6FCu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C708u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C710u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C720u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C730u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C740u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C750u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C760u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C788u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C7ACu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C7C0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C7C8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C7D0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C7DCu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C7E4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C7F4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C804u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C818u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C81Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C820u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C828u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C830u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C880u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C8B0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C8C0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C8D4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C8D8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C8E0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C8ECu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C8F8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C900u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C954u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C964u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C978u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C980u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C98Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C9ACu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C9BCu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C9D0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C9D8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C9E0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C9E8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CA00u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CA04u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CA20u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CA34u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CA58u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CAA8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CAB8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CAD4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CAF4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CB08u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CB0Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CB20u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CB28u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CB38u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CB88u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CB98u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CBACu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CBB8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CBBCu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CBD0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CBF4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CC00u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CC08u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CC24u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CC34u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CC3Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CC40u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CC68u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CCB0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CCC4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CCCCu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CCDCu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CCE8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CCF0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CCF8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CD10u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CD34u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CD40u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CD48u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CD58u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CD78u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CD9Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CDA8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CDB0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CDB8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CDC8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CDD0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CDD4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CDF4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CE3Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CE50u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CE58u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CE68u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CE74u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CE7Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CE90u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CEB4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CEC0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CEC8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CED0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CEE0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CEE8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CEECu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CF0Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CF54u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CF68u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CF70u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CF80u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CF8Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CF94u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CFA8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CFD8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CFECu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D004u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D00Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D030u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D040u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D05Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D064u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D088u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D098u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D0B4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D0BCu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D0DCu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D0E0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D0F8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D100u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D124u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D138u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D198u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D1B0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D1B8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D1C0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D1D8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D224u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D248u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D268u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D28Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D294u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D298u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D2B0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D2B8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D2CCu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D2E8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D300u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D308u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D320u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D328u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D340u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D3F0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D408u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D44Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D45Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D470u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D47Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D488u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D49Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D4A4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D4B4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D4D8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D4ECu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D52Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D58Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D594u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D59Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D5A4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D5DCu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D5F8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D600u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D614u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D650u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D660u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D678u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D67Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D68Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D6B8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D6C8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D6E4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D730u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D740u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D744u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D77Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D780u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D790u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D7E0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D7ECu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D800u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D814u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D828u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D840u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D858u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D86Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D898u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D8CCu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D8E4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D928u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D9B8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D9DCu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D9FCu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880DA1Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880DA2Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880DA34u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880DA3Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880DA44u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880DA54u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880DA64u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880DA74u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880DA84u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880DA9Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880DAA8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880DABCu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880DACCu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880DAFCu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880DB08u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880DB30u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880DB40u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880DB50u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880DB64u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880DB7Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880DB84u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880DBE8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880DC04u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880DC2Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880DC68u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880DC78u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880DC80u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880DCE0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880DCFCu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880DD24u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880DD60u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880DD70u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880DD78u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880DDE0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880DDFCu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880DE18u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880DE54u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880DE64u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880DE6Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880DE80u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880DE9Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880DEB0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880DED4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880DEDCu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880DEE0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880DF40u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880DF80u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880DFBCu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880DFCCu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880DFD4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880DFF8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E04Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E08Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E0C0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E0F4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E0FCu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E100u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E120u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E170u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E188u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E1BCu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E1F8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E20Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E22Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E23Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E248u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E284u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E294u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E2A0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E2ACu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E2B4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E2B8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E2C0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E2C8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E2D0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E2D4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E2DCu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E2E8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E2F4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E2FCu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E300u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E308u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E310u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E314u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E31Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E338u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E344u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E34Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E350u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E37Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E3A8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E3BCu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E3CCu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E3D8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E3ECu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E3FCu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E40Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E420u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E430u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E43Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E450u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E460u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E46Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E47Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E4C0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E4FCu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E50Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E550u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E58Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E5A0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E5C4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E5E4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E5F8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E620u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E634u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E658u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E678u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E68Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E69Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E6ACu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E6BCu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E6CCu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E6D8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E6E4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E704u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E70Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E718u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E754u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E77Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E788u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E81Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E860u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E880u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E8E0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E8ECu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E8F4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E8FCu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E908u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E934u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E93Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E95Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E96Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E974u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E978u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E990u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E99Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E9ACu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E9B4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E9B8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E9D0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880EA0Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880EA14u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880EA24u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880EA30u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880EA38u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880EA3Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880EA48u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880EA54u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880EA5Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880EA64u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880EA74u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880EA7Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880EA88u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880EA90u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880EAA8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880EAB0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880EABCu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880EAC8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880EAD4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880EADCu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880EAECu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880EAFCu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880EB18u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880EB68u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880EBC4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880EBD8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880EC20u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880EC30u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880EC3Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880EC4Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880EC8Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880EC9Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880ECA0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880ED0Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880ED20u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880ED34u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880ED40u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880ED58u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880ED60u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880ED70u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880ED88u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880ED94u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880ED98u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880EDACu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880EDB4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880EDF0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880EDFCu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880EE08u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880EE1Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880EE30u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880EE5Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880EE68u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880EEA4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880EEB4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880EEF8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880EF5Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880EFA4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880EFB8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880EFCCu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880EFE4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880EFF4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F014u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F024u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F05Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F074u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F078u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F080u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F08Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F0A0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F0A8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F0B0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F0D0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F0DCu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F0FCu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F104u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F114u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F120u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F130u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F14Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F164u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F17Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F188u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F190u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F198u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F1A8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F1B4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F1D4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F1E0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F1E4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F1F4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F204u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F248u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F2B0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F2F8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F30Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F320u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F338u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F340u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F34Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F36Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F37Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F3C0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F424u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F46Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F480u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F494u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F4ACu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F4B4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F4BCu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F4C8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F4D8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F4E0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F51Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F548u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F57Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F5A8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F5B8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F5C8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F5D4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F5F4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F614u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F624u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F648u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F660u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F6C8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F71Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F734u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F780u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F7C8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F7DCu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F7F0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F7F8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F804u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F824u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F834u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F858u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F870u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F8D8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F92Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F944u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F990u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F9D8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F9ECu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FA00u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FA1Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FA30u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FA48u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FA50u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FA80u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FA88u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FAA0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FAA8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FAC0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FADCu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FAF4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FAF8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FB10u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FB28u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FB30u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FB48u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FB60u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FB68u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FB78u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FBBCu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FC00u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FC48u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FC5Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FC6Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FC88u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FC90u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FC98u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FCA8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FD5Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FDA8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FDD8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FDF4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FE00u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FE40u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FE54u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FE58u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FE68u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FE88u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FE94u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FEBCu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FED4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FEDCu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FEFCu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FF0Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FF30u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FF4Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FF6Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FF7Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FF8Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FFA0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FFC8u, &recomp_unit_0002, "recomp_unit_0002");
}
} // namespace psprecomp
