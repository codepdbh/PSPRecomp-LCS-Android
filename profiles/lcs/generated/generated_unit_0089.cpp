#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0089[4095] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 3, 4, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 7, 0, 8, 0, 9,
    0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 12, 0, 13, 0, 14, 0, 0, 0, 0, 15, 0, 16, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 18, 19, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    21, 0, 0, 22, 0, 0, 23, 0, 0, 24, 0, 0, 0, 25, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 28, 0, 0,
    0, 29, 0, 30, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 34, 0, 0, 35, 0,
    0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 37, 0, 0, 0, 38, 0, 0, 0, 39, 0, 40, 0, 0, 0, 0, 0, 0, 41, 0, 0, 42,
    0, 0, 0, 43, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 45, 0, 46, 0, 47, 0, 48, 0, 0, 49, 0, 0, 0, 50, 0, 0, 0,
    0, 0, 51, 52, 0, 0, 53, 0, 54, 0, 0, 0, 0, 0, 0, 55, 0, 0, 56, 0, 0, 0, 57, 0, 0, 0, 58, 0, 59, 0, 0, 0,
    0, 0, 0, 60, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 63, 0, 64, 0, 65, 0, 66, 0, 67, 0,
    0, 0, 68, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 70, 0, 71, 0, 0, 0, 72, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 74, 0,
    75, 0, 0, 0, 76, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 79, 0, 0, 0, 80, 0, 0, 0, 81, 0, 82, 0, 0,
    0, 0, 0, 0, 83, 0, 0, 84, 0, 0, 0, 0, 85, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 87, 0, 0, 88, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 96, 0, 0, 0, 0, 97, 0, 0, 0,
    98, 0, 0, 0, 0, 99, 100, 0, 0, 0, 0, 101, 0, 102, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 106, 0, 0, 0, 107, 0, 0, 108, 0,
    0, 109, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 111, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 116, 0,
    0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 122, 0, 123, 0, 124, 0, 125,
    0, 126, 0, 0, 127, 0, 128, 0, 0, 129, 0, 0, 0, 130, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 134, 0, 0, 0, 0, 135, 136, 0,
    0, 137, 0, 0, 0, 138, 0, 0, 0, 139, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    141, 0, 0, 142, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 145, 0, 0, 0, 0,
    146, 0, 147, 0, 148, 149, 0, 150, 0, 151, 0, 152, 0, 153, 0, 0, 154, 0, 0, 155, 0, 0, 0, 0, 156, 0, 0, 157, 0, 0, 158, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 160, 0, 161, 0, 0, 0, 0, 162, 0, 0,
    163, 0, 0, 0, 0, 164, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 167, 0, 0, 0, 168,
    0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 170, 0, 171, 0, 0, 0, 172, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 174, 0, 0, 175, 0,
    0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 179, 0, 0, 180, 0, 0, 181, 0, 0, 182, 0, 0, 183, 0,
    0, 184, 0, 0, 185, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 192, 0, 0, 0,
    193, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 197, 0, 198, 0, 199, 0, 200, 0, 201, 0, 0, 0, 0, 0, 202, 0, 203, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 205, 0, 0, 206, 0,
    0, 207, 0, 0, 208, 0, 0, 209, 0, 0, 210, 0, 0, 211, 0, 0, 212, 0, 0, 213, 0, 0, 214, 0, 0, 0, 0, 215, 0, 0, 216, 0,
    0, 0, 217, 0, 0, 218, 0, 0, 219, 0, 0, 220, 0, 0, 0, 221, 0, 0, 222, 0, 0, 223, 0, 0, 224, 0, 0, 225, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 228, 0,
    0, 229, 0, 230, 0, 231, 0, 0, 232, 0, 233, 0, 0, 234, 0, 235, 0, 236, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 238, 0, 0,
    239, 0, 240, 0, 0, 241, 0, 0, 0, 0, 0, 0, 242, 0, 0, 243, 244, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 246, 0, 0, 247, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0,
    0, 251, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 254, 0, 255, 0, 256, 0, 0, 0, 0,
    0, 0, 0, 257, 258, 259, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 265, 0,
    266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 268, 0, 0, 269, 0, 270, 0, 0, 271,
    0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 274, 0, 0, 0,
    0, 0, 0, 275, 0, 276, 0, 277, 0, 278, 0, 0, 279, 0, 0, 0, 280, 0, 0, 0, 281, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0,
    0, 0, 283, 284, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0,
    0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 293, 294, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 296, 0, 297, 0, 298, 0, 0, 299, 0, 0, 0, 300, 0, 0, 0, 301, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0,
    303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 305, 0, 0, 306, 0, 0, 0, 307, 0, 0, 0, 0, 0, 308, 0, 309, 0,
    310, 0, 311, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 315,
    0, 0, 0, 316, 0, 317, 0, 318, 319, 0, 320, 0, 321, 322, 0, 0, 323, 0, 0, 324, 0, 0, 0, 0, 325, 0, 0, 0, 326, 0, 0, 327,
    0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 330, 0, 0, 331, 0, 0, 0, 0, 0,
    0, 332, 0, 0, 333, 0, 0, 334, 0, 0, 335, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0,
    339, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 0, 341, 342, 0, 0, 0, 0, 343, 0, 344, 0, 0, 0, 0, 0, 345, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 347, 0, 0, 348, 0, 0, 0,
    349, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 351, 0, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 355, 0, 356, 0, 357, 0, 0,
    0, 0, 0, 0, 0, 0, 358, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 361, 0, 0, 362, 0, 363, 0, 364, 365, 0, 366,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 370, 0, 0, 0, 0, 0,
    0, 0, 371, 0, 372, 0, 373, 0, 0, 0, 0, 374, 0, 0, 375, 0, 0, 0, 376, 0, 0, 0, 377, 0, 0, 0, 378, 379, 0, 380, 0, 0,
    0, 0, 381, 0, 382, 0, 0, 0, 0, 0, 0, 0, 0, 0, 383, 0, 0, 0, 0, 0, 0, 0, 384, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 385, 0, 0, 386, 0, 0, 0, 0, 387, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 388, 389, 0, 390, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 392, 0, 0, 0, 0, 0, 0, 0, 0, 393, 394, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 395, 0, 0, 0, 0, 0, 0, 0, 0, 396, 0, 0, 0, 397, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 398, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 399, 0, 0, 0, 0, 0, 0, 0, 400, 0, 0, 0, 0, 0, 0, 0, 0, 0, 401, 0, 0, 0, 0, 0,
    0, 0, 0, 402, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 403, 0, 404, 0, 0, 405, 0, 0, 0, 406, 0,
    0, 0, 0, 0, 0, 0, 0, 407, 0, 0, 0, 0, 408, 0, 0, 0, 409, 0, 0, 0, 0, 0, 0, 0, 0, 410, 0, 0, 0, 0, 0, 0,
    411, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 412, 0, 413, 0, 0, 0, 0, 0, 0, 414, 0, 415, 416, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 417, 0, 0, 0, 0, 418, 0, 0, 0, 419, 0, 0, 0, 0, 0, 0, 0, 420, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 421, 422, 0, 0, 0, 0, 423, 0, 424, 0, 0, 0, 0, 0, 0, 0, 0, 0, 425, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 426, 0, 427, 0, 0, 0,
    428, 0, 0, 0, 0, 0, 0, 0, 0, 0, 429, 430, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 431, 0, 432, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 433, 0, 0, 0, 0, 0, 0, 0, 434, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 435, 0, 0, 0, 436, 0, 0, 0, 0, 0, 0, 437, 0, 0, 0, 0, 0, 0, 0, 0, 438, 0, 0, 0, 0,
    0, 0, 439, 0, 0, 0, 0, 0, 0, 0, 440, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 441, 0, 0, 0,
    442, 0, 443, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 444, 0, 0, 0, 0, 445, 0,
    0, 446, 0, 447, 0, 0, 0, 448, 0, 0, 449, 0, 0, 450, 0, 0, 451, 0, 0, 0, 452, 0, 0, 0, 453, 0, 0, 0, 454, 0, 0, 0,
    455, 0, 0, 456, 0, 0, 457, 0, 0, 0, 0, 0, 0, 0, 458, 0, 0, 0, 0, 0, 0, 0, 0, 459, 0, 0, 460, 0, 0, 0, 461, 0,
    0, 0, 462, 0, 463, 0, 464, 0, 0, 465, 0, 466, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 467, 0, 0, 0, 0, 0,
    0, 0, 468, 0, 0, 0, 469, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 470, 0, 0, 0, 471, 0, 472, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 473, 0, 0, 0, 0, 0, 0, 0, 0, 0, 474, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 475, 0, 476, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 477, 0, 0, 0, 0, 0, 0, 0, 0, 0, 478, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 479,
    0, 480, 0, 481, 0, 0, 0, 0, 482, 0, 0, 0, 0, 0, 0, 483, 0, 0, 0, 484, 0, 0, 485, 0, 0, 486, 0, 487, 488, 0, 0, 489,
    0, 0, 0, 490, 0, 491, 0, 0, 0, 492, 0, 0, 493, 0, 0, 494, 0, 495, 496, 0, 0, 497, 0, 0, 0, 498, 0, 499, 0, 0, 0, 500,
    0, 0, 501, 0, 0, 502, 0, 503, 504, 0, 0, 505, 0, 0, 0, 506, 0, 507, 0, 0, 0, 508, 0, 0, 509, 0, 0, 510, 0, 511, 512, 0,
    0, 513, 0, 0, 0, 514, 0, 515, 0, 0, 0, 516, 0, 0, 517, 0, 0, 518, 0, 519, 520, 0, 0, 521, 0, 0, 0, 522, 0, 523, 0, 0,
    0, 524, 0, 0, 525, 0, 0, 526, 0, 527, 528, 0, 0, 529, 0, 0, 0, 530, 0, 531, 0, 0, 0, 532, 0, 0, 533, 0, 0, 534, 0, 535,
    536, 0, 0, 537, 0, 0, 0, 538, 0, 539, 0, 0, 0, 540, 0, 0, 541, 0, 0, 542, 0, 543, 544, 0, 0, 545, 0, 0, 0, 546, 0, 547,
    0, 0, 0, 548, 0, 0, 549, 0, 0, 550, 0, 551, 552, 0, 0, 553, 0, 0, 0, 554, 0, 555, 0, 0, 0, 556, 0, 0, 557, 0, 0, 558,
    0, 559, 560, 0, 0, 561, 0, 0, 0, 562, 0, 563, 0, 0, 0, 564, 0, 0, 565, 0, 0, 566, 0, 567, 568, 0, 0, 569, 0, 0, 0, 570,
    0, 571, 0, 0, 0, 572, 0, 0, 573, 0, 0, 574, 0, 575, 576, 0, 0, 577, 0, 0, 0, 578, 0, 579, 0, 0, 0, 580, 0, 0, 581, 0,
    0, 582, 0, 583, 584, 0, 0, 585, 0, 0, 0, 586, 0, 587, 0, 0, 0, 588, 0, 0, 589, 0, 0, 590, 0, 591, 592, 0, 0, 593, 0, 0,
    0, 594, 0, 595, 0, 0, 0, 596, 0, 0, 597, 0, 0, 598, 0, 599, 600, 0, 0, 601, 0, 0, 0, 602, 0, 603, 0, 0, 0, 604, 0, 0,
    605, 0, 0, 606, 0, 607, 608, 0, 0, 609, 0, 0, 0, 610, 0, 611, 0, 0, 0, 612, 0, 0, 613, 0, 0, 614, 0, 615, 616, 0, 0, 617,
    0, 0, 0, 618, 0, 619, 0, 0, 0, 620, 0, 0, 621, 0, 0, 622, 0, 623, 624, 0, 0, 625, 0, 0, 0, 626, 0, 627, 0, 0, 0, 628,
    0, 0, 629, 0, 0, 630, 0, 631, 632, 0, 0, 633, 0, 0, 0, 634, 0, 635, 0, 0, 0, 636, 0, 0, 637, 0, 0, 638, 0, 639, 640, 0,
    0, 641, 0, 0, 0, 642, 0, 643, 0, 0, 0, 644, 0, 0, 645, 0, 0, 646, 0, 647, 648, 0, 0, 649, 0, 0, 0, 650, 0, 651, 0, 0,
    0, 652, 0, 0, 653, 0, 0, 654, 0, 655, 656, 0, 0, 657, 0, 0, 0, 658, 0, 659, 0, 0, 0, 660, 0, 0, 661, 0, 0, 662, 0, 663,
    664, 0, 0, 665, 0, 0, 0, 666, 0, 667, 0, 0, 0, 668, 0, 0, 669, 0, 0, 670, 0, 671, 672, 0, 0, 673, 0, 0, 0, 674, 0, 675,
    0, 0, 0, 676, 0, 0, 677, 0, 0, 678, 0, 679, 680, 0, 0, 681, 0, 0, 0, 682, 0, 683, 0, 0, 0, 684, 0, 0, 685, 0, 0, 686,
    0, 687, 688, 0, 0, 689, 0, 0, 0, 690, 0, 691, 0, 0, 0, 692, 0, 0, 693, 0, 0, 694, 0, 695, 696, 0, 0, 697, 0, 0, 0, 698,
    0, 699, 0, 0, 0, 700, 0, 0, 701, 0, 0, 702, 0, 703, 704, 0, 0, 705, 0, 0, 0, 706, 0, 707, 0, 0, 0, 708, 0, 0, 709, 0,
    0, 710, 0, 711, 712, 0, 0, 713, 0, 0, 0, 714, 0, 715, 0, 0, 0, 716, 0, 0, 717, 0, 0, 718, 0, 719, 720, 0, 0, 721, 0, 0,
    0, 722, 0, 723, 0, 0, 0, 724, 0, 0, 725, 0, 0, 726, 0, 727, 728, 0, 0, 729, 0, 0, 0, 730, 0, 731, 0, 0, 0, 732, 0, 0,
    733, 0, 0, 734, 0, 735, 736, 0, 0, 737, 0, 0, 0, 738, 0, 739, 0, 0, 0, 740, 0, 0, 741, 0, 0, 742, 0, 743, 744, 0, 0, 745,
    0, 0, 0, 746, 0, 747, 0, 0, 0, 748, 0, 0, 749, 0, 0, 750, 0, 751, 752, 0, 0, 753, 0, 0, 0, 754, 0, 755, 0, 0, 0, 756,
    0, 0, 757, 0, 0, 758, 0, 759, 760, 0, 0, 761, 0, 0, 0, 762, 0, 0, 0, 763, 0, 0, 764, 0, 0, 0, 765, 0, 0, 766, 0, 0,
    767, 0, 768, 769, 0, 0, 770, 0, 0, 0, 771, 0, 0, 0, 0, 772, 0, 773, 0, 0, 0, 774, 0, 0, 775, 0, 0, 776, 0, 777, 778, 0,
    0, 779, 0, 0, 0, 780, 0, 0, 0, 0, 0, 0, 0, 781, 0, 0, 0, 782, 0, 0, 0, 783, 0, 0, 784, 0, 0, 785, 0, 786, 787, 0,
    0, 788, 0, 0, 0, 789, 0, 0, 0, 0, 790, 0, 0, 0, 791, 0, 0, 792, 0, 0, 0, 793, 0, 0, 794, 0, 0, 795, 0, 796, 797, 0,
    0, 798, 0, 0, 0, 799, 0, 0, 0, 0, 800, 0, 801, 0, 0, 0, 802, 0, 0, 803, 0, 0, 804, 0, 805, 806, 0, 0, 807, 0, 0, 0,
    808, 0, 809, 0, 0, 0, 810, 0, 0, 811, 0, 0, 812, 0, 813, 814, 0, 0, 815, 0, 0, 0, 816, 0, 817, 0, 0, 0, 818, 0, 0, 819,
    0, 0, 820, 0, 821, 822, 0, 0, 823, 0, 0, 0, 824, 0, 825, 0, 0, 0, 826, 0, 0, 827, 0, 0, 828, 0, 829, 830, 0, 0, 831, 0,
    0, 0, 832, 0, 833, 0, 0, 0, 834, 0, 0, 835, 0, 0, 836, 0, 837, 838, 0, 0, 839, 0, 0, 0, 840, 0, 841, 0, 0, 0, 842, 0,
    0, 843, 0, 0, 844, 0, 845, 846, 0, 0, 847, 0, 0, 0, 848, 0, 849, 0, 0, 0, 850, 0, 0, 851, 0, 0, 852, 0, 853, 854, 0, 0,
    855, 0, 0, 0, 856, 0, 857, 0, 0, 0, 858, 0, 0, 859, 0, 0, 860, 0, 861, 862, 0, 0, 863, 0, 0, 0, 864, 0, 865, 0, 0, 0,
    866, 0, 0, 867, 0, 0, 868, 0, 869, 870, 0, 0, 871, 0, 0, 0, 872, 0, 873, 0, 0, 0, 874, 0, 0, 875, 0, 0, 876, 0, 877, 878,
    0, 0, 879, 0, 0, 0, 880, 0, 881, 0, 0, 0, 882, 0, 0, 883, 0, 0, 884, 0, 885, 886, 0, 0, 887, 0, 0, 0, 888, 0, 889, 0,
    0, 0, 890, 0, 0, 891, 0, 0, 892, 0, 893, 894, 0, 0, 895, 0, 0, 0, 896, 0, 897, 0, 0, 0, 898, 0, 0, 899, 0, 0, 900, 0,
    901, 902, 0, 0, 903, 0, 0, 0, 904, 0, 905, 0, 0, 0, 906, 0, 0, 907, 0, 0, 908, 0, 909, 910, 0, 0, 911, 0, 0, 0, 912,
};
void recomp_unit_0089_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08968000u;
        entry_id = (entry_delta < 16380u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0089[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08968000;
    case 2u: goto L_08968024;
    case 3u: goto L_0896802C;
    case 4u: goto L_08968030;
    case 5u: goto L_0896803C;
    case 6u: goto L_0896805C;
    case 7u: goto L_0896806C;
    case 8u: goto L_08968074;
    case 9u: goto L_0896807C;
    case 10u: goto L_089680A0;
    case 11u: goto L_089680B0;
    case 12u: goto L_089680CC;
    case 13u: goto L_089680D4;
    case 14u: goto L_089680DC;
    case 15u: goto L_089680F0;
    case 16u: goto L_089680F8;
    case 17u: goto L_0896813C;
    case 18u: goto L_08968144;
    case 19u: goto L_08968148;
    case 20u: goto L_08968154;
    case 21u: goto L_08968180;
    case 22u: goto L_0896818C;
    case 23u: goto L_08968198;
    case 24u: goto L_089681A4;
    case 25u: goto L_089681B4;
    case 26u: goto L_089681C4;
    case 27u: goto L_089681E0;
    case 28u: goto L_089681F4;
    case 29u: goto L_08968204;
    case 30u: goto L_0896820C;
    case 31u: goto L_08968218;
    case 32u: goto L_08968240;
    case 33u: goto L_08968250;
    case 34u: goto L_0896826C;
    case 35u: goto L_08968278;
    case 36u: goto L_08968298;
    case 37u: goto L_089682AC;
    case 38u: goto L_089682BC;
    case 39u: goto L_089682CC;
    case 40u: goto L_089682D4;
    case 41u: goto L_089682F0;
    case 42u: goto L_089682FC;
    case 43u: goto L_0896830C;
    case 44u: goto L_0896831C;
    case 45u: goto L_0896833C;
    case 46u: goto L_08968344;
    case 47u: goto L_0896834C;
    case 48u: goto L_08968354;
    case 49u: goto L_08968360;
    case 50u: goto L_08968370;
    case 51u: goto L_08968388;
    case 52u: goto L_0896838C;
    case 53u: goto L_08968398;
    case 54u: goto L_089683A0;
    case 55u: goto L_089683BC;
    case 56u: goto L_089683C8;
    case 57u: goto L_089683D8;
    case 58u: goto L_089683E8;
    case 59u: goto L_089683F0;
    case 60u: goto L_0896840C;
    case 61u: goto L_08968418;
    case 62u: goto L_08968450;
    case 63u: goto L_08968458;
    case 64u: goto L_08968460;
    case 65u: goto L_08968468;
    case 66u: goto L_08968470;
    case 67u: goto L_08968478;
    case 68u: goto L_08968488;
    case 69u: goto L_08968494;
    case 70u: goto L_089684B4;
    case 71u: goto L_089684BC;
    case 72u: goto L_089684CC;
    case 73u: goto L_089684D8;
    case 74u: goto L_089684F8;
    case 75u: goto L_08968500;
    case 76u: goto L_08968510;
    case 77u: goto L_0896851C;
    case 78u: goto L_0896853C;
    case 79u: goto L_0896854C;
    case 80u: goto L_0896855C;
    case 81u: goto L_0896856C;
    case 82u: goto L_08968574;
    case 83u: goto L_08968590;
    case 84u: goto L_0896859C;
    case 85u: goto L_089685B0;
    case 86u: goto L_089685C0;
    case 87u: goto L_089685DC;
    case 88u: goto L_089685E8;
    case 89u: goto L_08968664;
    case 90u: goto L_08968724;
    case 91u: goto L_0896876C;
    case 92u: goto L_08968798;
    case 93u: goto L_089687C0;
    case 94u: goto L_08968830;
    case 95u: goto L_0896884C;
    case 96u: goto L_0896885C;
    case 97u: goto L_08968870;
    case 98u: goto L_08968880;
    case 99u: goto L_08968894;
    case 100u: goto L_08968898;
    case 101u: goto L_089688AC;
    case 102u: goto L_089688B4;
    case 103u: goto L_089688CC;
    case 104u: goto L_089688F4;
    case 105u: goto L_08968950;
    case 106u: goto L_0896895C;
    case 107u: goto L_0896896C;
    case 108u: goto L_08968978;
    case 109u: goto L_08968984;
    case 110u: goto L_08968998;
    case 111u: goto L_089689B0;
    case 112u: goto L_089689C0;
    case 113u: goto L_089689F0;
    case 114u: goto L_08968A4C;
    case 115u: goto L_08968A68;
    case 116u: goto L_08968A78;
    case 117u: goto L_08968A94;
    case 118u: goto L_08968AB0;
    case 119u: goto L_08968AC0;
    case 120u: goto L_08968B1C;
    case 121u: goto L_08968B58;
    case 122u: goto L_08968B64;
    case 123u: goto L_08968B6C;
    case 124u: goto L_08968B74;
    case 125u: goto L_08968B7C;
    case 126u: goto L_08968B84;
    case 127u: goto L_08968B90;
    case 128u: goto L_08968B98;
    case 129u: goto L_08968BA4;
    case 130u: goto L_08968BB4;
    case 131u: goto L_08968BC4;
    case 132u: goto L_08968BF0;
    case 133u: goto L_08968C54;
    case 134u: goto L_08968C60;
    case 135u: goto L_08968C74;
    case 136u: goto L_08968C78;
    case 137u: goto L_08968C84;
    case 138u: goto L_08968C94;
    case 139u: goto L_08968CA4;
    case 140u: goto L_08968CB8;
    case 141u: goto L_08968D00;
    case 142u: goto L_08968D0C;
    case 143u: goto L_08968D1C;
    case 144u: goto L_08968D60;
    case 145u: goto L_08968D6C;
    case 146u: goto L_08968D80;
    case 147u: goto L_08968D88;
    case 148u: goto L_08968D90;
    case 149u: goto L_08968D94;
    case 150u: goto L_08968D9C;
    case 151u: goto L_08968DA4;
    case 152u: goto L_08968DAC;
    case 153u: goto L_08968DB4;
    case 154u: goto L_08968DC0;
    case 155u: goto L_08968DCC;
    case 156u: goto L_08968DE0;
    case 157u: goto L_08968DEC;
    case 158u: goto L_08968DF8;
    case 159u: goto L_08968E50;
    case 160u: goto L_08968E58;
    case 161u: goto L_08968E60;
    case 162u: goto L_08968E74;
    case 163u: goto L_08968E80;
    case 164u: goto L_08968E94;
    case 165u: goto L_08968EA0;
    case 166u: goto L_08968ED8;
    case 167u: goto L_08968EEC;
    case 168u: goto L_08968EFC;
    case 169u: goto L_08968F14;
    case 170u: goto L_08968F28;
    case 171u: goto L_08968F30;
    case 172u: goto L_08968F40;
    case 173u: goto L_08968F58;
    case 174u: goto L_08968F6C;
    case 175u: goto L_08968F78;
    case 176u: goto L_08968F8C;
    case 177u: goto L_08968FC4;
    case 178u: goto L_0896903C;
    case 179u: goto L_08969048;
    case 180u: goto L_08969054;
    case 181u: goto L_08969060;
    case 182u: goto L_0896906C;
    case 183u: goto L_08969078;
    case 184u: goto L_08969084;
    case 185u: goto L_08969090;
    case 186u: goto L_0896909C;
    case 187u: goto L_0896910C;
    case 188u: goto L_08969128;
    case 189u: goto L_0896914C;
    case 190u: goto L_089691B8;
    case 191u: goto L_089691E4;
    case 192u: goto L_089691F0;
    case 193u: goto L_08969200;
    case 194u: goto L_08969214;
    case 195u: goto L_08969254;
    case 196u: goto L_089692A8;
    case 197u: goto L_089692B0;
    case 198u: goto L_089692B8;
    case 199u: goto L_089692C0;
    case 200u: goto L_089692C8;
    case 201u: goto L_089692D0;
    case 202u: goto L_089692E8;
    case 203u: goto L_089692F0;
    case 204u: goto L_08969360;
    case 205u: goto L_0896936C;
    case 206u: goto L_08969378;
    case 207u: goto L_08969384;
    case 208u: goto L_08969390;
    case 209u: goto L_0896939C;
    case 210u: goto L_089693A8;
    case 211u: goto L_089693B4;
    case 212u: goto L_089693C0;
    case 213u: goto L_089693CC;
    case 214u: goto L_089693D8;
    case 215u: goto L_089693EC;
    case 216u: goto L_089693F8;
    case 217u: goto L_08969408;
    case 218u: goto L_08969414;
    case 219u: goto L_08969420;
    case 220u: goto L_0896942C;
    case 221u: goto L_0896943C;
    case 222u: goto L_08969448;
    case 223u: goto L_08969454;
    case 224u: goto L_08969460;
    case 225u: goto L_0896946C;
    case 226u: goto L_089694B8;
    case 227u: goto L_089694E4;
    case 228u: goto L_089694F8;
    case 229u: goto L_08969504;
    case 230u: goto L_0896950C;
    case 231u: goto L_08969514;
    case 232u: goto L_08969520;
    case 233u: goto L_08969528;
    case 234u: goto L_08969534;
    case 235u: goto L_0896953C;
    case 236u: goto L_08969544;
    case 237u: goto L_08969564;
    case 238u: goto L_08969574;
    case 239u: goto L_08969580;
    case 240u: goto L_08969588;
    case 241u: goto L_08969594;
    case 242u: goto L_089695B0;
    case 243u: goto L_089695BC;
    case 244u: goto L_089695C0;
    case 245u: goto L_089695D4;
    case 246u: goto L_08969610;
    case 247u: goto L_0896961C;
    case 248u: goto L_08969624;
    case 249u: goto L_08969654;
    case 250u: goto L_08969678;
    case 251u: goto L_08969684;
    case 252u: goto L_089696A4;
    case 253u: goto L_089696C0;
    case 254u: goto L_089696DC;
    case 255u: goto L_089696E4;
    case 256u: goto L_089696EC;
    case 257u: goto L_0896970C;
    case 258u: goto L_08969710;
    case 259u: goto L_08969714;
    case 260u: goto L_08969730;
    case 261u: goto L_08969758;
    case 262u: goto L_089697A4;
    case 263u: goto L_089697C0;
    case 264u: goto L_089697F0;
    case 265u: goto L_089697F8;
    case 266u: goto L_08969800;
    case 267u: goto L_08969840;
    case 268u: goto L_0896985C;
    case 269u: goto L_08969868;
    case 270u: goto L_08969870;
    case 271u: goto L_0896987C;
    case 272u: goto L_0896988C;
    case 273u: goto L_089698D8;
    case 274u: goto L_089698F0;
    case 275u: goto L_0896990C;
    case 276u: goto L_08969914;
    case 277u: goto L_0896991C;
    case 278u: goto L_08969924;
    case 279u: goto L_08969930;
    case 280u: goto L_08969940;
    case 281u: goto L_08969950;
    case 282u: goto L_08969968;
    case 283u: goto L_08969988;
    case 284u: goto L_0896998C;
    case 285u: goto L_08969994;
    case 286u: goto L_089699D4;
    case 287u: goto L_089699D8;
    case 288u: goto L_08969A04;
    case 289u: goto L_08969A44;
    case 290u: goto L_08969A78;
    case 291u: goto L_08969A84;
    case 292u: goto L_08969AAC;
    case 293u: goto L_08969AB4;
    case 294u: goto L_08969AB8;
    case 295u: goto L_08969AC0;
    case 296u: goto L_08969B14;
    case 297u: goto L_08969B1C;
    case 298u: goto L_08969B24;
    case 299u: goto L_08969B30;
    case 300u: goto L_08969B40;
    case 301u: goto L_08969B50;
    case 302u: goto L_08969B60;
    case 303u: goto L_08969B80;
    case 304u: goto L_08969BB0;
    case 305u: goto L_08969BBC;
    case 306u: goto L_08969BC8;
    case 307u: goto L_08969BD8;
    case 308u: goto L_08969BF0;
    case 309u: goto L_08969BF8;
    case 310u: goto L_08969C00;
    case 311u: goto L_08969C08;
    case 312u: goto L_08969C10;
    case 313u: goto L_08969C4C;
    case 314u: goto L_08969C68;
    case 315u: goto L_08969C7C;
    case 316u: goto L_08969C8C;
    case 317u: goto L_08969C94;
    case 318u: goto L_08969C9C;
    case 319u: goto L_08969CA0;
    case 320u: goto L_08969CA8;
    case 321u: goto L_08969CB0;
    case 322u: goto L_08969CB4;
    case 323u: goto L_08969CC0;
    case 324u: goto L_08969CCC;
    case 325u: goto L_08969CE0;
    case 326u: goto L_08969CF0;
    case 327u: goto L_08969CFC;
    case 328u: goto L_08969D0C;
    case 329u: goto L_08969D50;
    case 330u: goto L_08969D5C;
    case 331u: goto L_08969D68;
    case 332u: goto L_08969D84;
    case 333u: goto L_08969D90;
    case 334u: goto L_08969D9C;
    case 335u: goto L_08969DA8;
    case 336u: goto L_08969DB0;
    case 337u: goto L_08969DD4;
    case 338u: goto L_08969DE8;
    case 339u: goto L_08969E00;
    case 340u: goto L_08969E14;
    case 341u: goto L_08969E38;
    case 342u: goto L_08969E3C;
    case 343u: goto L_08969E50;
    case 344u: goto L_08969E58;
    case 345u: goto L_08969E70;
    case 346u: goto L_08969EDC;
    case 347u: goto L_08969EE4;
    case 348u: goto L_08969EF0;
    case 349u: goto L_08969F00;
    case 350u: goto L_08969F30;
    case 351u: goto L_08969F38;
    case 352u: goto L_08969F5C;
    case 353u: goto L_08969F8C;
    case 354u: goto L_08969FD8;
    case 355u: goto L_08969FE4;
    case 356u: goto L_08969FEC;
    case 357u: goto L_08969FF4;
    case 358u: goto L_0896A018;
    case 359u: goto L_0896A020;
    case 360u: goto L_0896A048;
    case 361u: goto L_0896A054;
    case 362u: goto L_0896A060;
    case 363u: goto L_0896A068;
    case 364u: goto L_0896A070;
    case 365u: goto L_0896A074;
    case 366u: goto L_0896A07C;
    case 367u: goto L_0896A0A4;
    case 368u: goto L_0896A0AC;
    case 369u: goto L_0896A0DC;
    case 370u: goto L_0896A0E8;
    case 371u: goto L_0896A108;
    case 372u: goto L_0896A110;
    case 373u: goto L_0896A118;
    case 374u: goto L_0896A12C;
    case 375u: goto L_0896A138;
    case 376u: goto L_0896A148;
    case 377u: goto L_0896A158;
    case 378u: goto L_0896A168;
    case 379u: goto L_0896A16C;
    case 380u: goto L_0896A174;
    case 381u: goto L_0896A188;
    case 382u: goto L_0896A190;
    case 383u: goto L_0896A1B8;
    case 384u: goto L_0896A1D8;
    case 385u: goto L_0896A208;
    case 386u: goto L_0896A214;
    case 387u: goto L_0896A228;
    case 388u: goto L_0896A254;
    case 389u: goto L_0896A258;
    case 390u: goto L_0896A260;
    case 391u: goto L_0896A28C;
    case 392u: goto L_0896A2B8;
    case 393u: goto L_0896A2DC;
    case 394u: goto L_0896A2E0;
    case 395u: goto L_0896A308;
    case 396u: goto L_0896A32C;
    case 397u: goto L_0896A33C;
    case 398u: goto L_0896A370;
    case 399u: goto L_0896A3A0;
    case 400u: goto L_0896A3C0;
    case 401u: goto L_0896A3E8;
    case 402u: goto L_0896A40C;
    case 403u: goto L_0896A454;
    case 404u: goto L_0896A45C;
    case 405u: goto L_0896A468;
    case 406u: goto L_0896A478;
    case 407u: goto L_0896A49C;
    case 408u: goto L_0896A4B0;
    case 409u: goto L_0896A4C0;
    case 410u: goto L_0896A4E4;
    case 411u: goto L_0896A500;
    case 412u: goto L_0896A52C;
    case 413u: goto L_0896A534;
    case 414u: goto L_0896A550;
    case 415u: goto L_0896A558;
    case 416u: goto L_0896A55C;
    case 417u: goto L_0896A5A8;
    case 418u: goto L_0896A5BC;
    case 419u: goto L_0896A5CC;
    case 420u: goto L_0896A5EC;
    case 421u: goto L_0896A624;
    case 422u: goto L_0896A628;
    case 423u: goto L_0896A63C;
    case 424u: goto L_0896A644;
    case 425u: goto L_0896A66C;
    case 426u: goto L_0896A6E8;
    case 427u: goto L_0896A6F0;
    case 428u: goto L_0896A700;
    case 429u: goto L_0896A728;
    case 430u: goto L_0896A72C;
    case 431u: goto L_0896A770;
    case 432u: goto L_0896A778;
    case 433u: goto L_0896A7B0;
    case 434u: goto L_0896A7D0;
    case 435u: goto L_0896A81C;
    case 436u: goto L_0896A82C;
    case 437u: goto L_0896A848;
    case 438u: goto L_0896A86C;
    case 439u: goto L_0896A888;
    case 440u: goto L_0896A8A8;
    case 441u: goto L_0896A8F0;
    case 442u: goto L_0896A900;
    case 443u: goto L_0896A908;
    case 444u: goto L_0896A964;
    case 445u: goto L_0896A978;
    case 446u: goto L_0896A984;
    case 447u: goto L_0896A98C;
    case 448u: goto L_0896A99C;
    case 449u: goto L_0896A9A8;
    case 450u: goto L_0896A9B4;
    case 451u: goto L_0896A9C0;
    case 452u: goto L_0896A9D0;
    case 453u: goto L_0896A9E0;
    case 454u: goto L_0896A9F0;
    case 455u: goto L_0896AA00;
    case 456u: goto L_0896AA0C;
    case 457u: goto L_0896AA18;
    case 458u: goto L_0896AA38;
    case 459u: goto L_0896AA5C;
    case 460u: goto L_0896AA68;
    case 461u: goto L_0896AA78;
    case 462u: goto L_0896AA88;
    case 463u: goto L_0896AA90;
    case 464u: goto L_0896AA98;
    case 465u: goto L_0896AAA4;
    case 466u: goto L_0896AAAC;
    case 467u: goto L_0896AAE8;
    case 468u: goto L_0896AB08;
    case 469u: goto L_0896AB18;
    case 470u: goto L_0896AB50;
    case 471u: goto L_0896AB60;
    case 472u: goto L_0896AB68;
    case 473u: goto L_0896ABBC;
    case 474u: goto L_0896ABE4;
    case 475u: goto L_0896AC2C;
    case 476u: goto L_0896AC34;
    case 477u: goto L_0896AC8C;
    case 478u: goto L_0896ACB4;
    case 479u: goto L_0896ACFC;
    case 480u: goto L_0896AD04;
    case 481u: goto L_0896AD0C;
    case 482u: goto L_0896AD20;
    case 483u: goto L_0896AD3C;
    case 484u: goto L_0896AD4C;
    case 485u: goto L_0896AD58;
    case 486u: goto L_0896AD64;
    case 487u: goto L_0896AD6C;
    case 488u: goto L_0896AD70;
    case 489u: goto L_0896AD7C;
    case 490u: goto L_0896AD8C;
    case 491u: goto L_0896AD94;
    case 492u: goto L_0896ADA4;
    case 493u: goto L_0896ADB0;
    case 494u: goto L_0896ADBC;
    case 495u: goto L_0896ADC4;
    case 496u: goto L_0896ADC8;
    case 497u: goto L_0896ADD4;
    case 498u: goto L_0896ADE4;
    case 499u: goto L_0896ADEC;
    case 500u: goto L_0896ADFC;
    case 501u: goto L_0896AE08;
    case 502u: goto L_0896AE14;
    case 503u: goto L_0896AE1C;
    case 504u: goto L_0896AE20;
    case 505u: goto L_0896AE2C;
    case 506u: goto L_0896AE3C;
    case 507u: goto L_0896AE44;
    case 508u: goto L_0896AE54;
    case 509u: goto L_0896AE60;
    case 510u: goto L_0896AE6C;
    case 511u: goto L_0896AE74;
    case 512u: goto L_0896AE78;
    case 513u: goto L_0896AE84;
    case 514u: goto L_0896AE94;
    case 515u: goto L_0896AE9C;
    case 516u: goto L_0896AEAC;
    case 517u: goto L_0896AEB8;
    case 518u: goto L_0896AEC4;
    case 519u: goto L_0896AECC;
    case 520u: goto L_0896AED0;
    case 521u: goto L_0896AEDC;
    case 522u: goto L_0896AEEC;
    case 523u: goto L_0896AEF4;
    case 524u: goto L_0896AF04;
    case 525u: goto L_0896AF10;
    case 526u: goto L_0896AF1C;
    case 527u: goto L_0896AF24;
    case 528u: goto L_0896AF28;
    case 529u: goto L_0896AF34;
    case 530u: goto L_0896AF44;
    case 531u: goto L_0896AF4C;
    case 532u: goto L_0896AF5C;
    case 533u: goto L_0896AF68;
    case 534u: goto L_0896AF74;
    case 535u: goto L_0896AF7C;
    case 536u: goto L_0896AF80;
    case 537u: goto L_0896AF8C;
    case 538u: goto L_0896AF9C;
    case 539u: goto L_0896AFA4;
    case 540u: goto L_0896AFB4;
    case 541u: goto L_0896AFC0;
    case 542u: goto L_0896AFCC;
    case 543u: goto L_0896AFD4;
    case 544u: goto L_0896AFD8;
    case 545u: goto L_0896AFE4;
    case 546u: goto L_0896AFF4;
    case 547u: goto L_0896AFFC;
    case 548u: goto L_0896B00C;
    case 549u: goto L_0896B018;
    case 550u: goto L_0896B024;
    case 551u: goto L_0896B02C;
    case 552u: goto L_0896B030;
    case 553u: goto L_0896B03C;
    case 554u: goto L_0896B04C;
    case 555u: goto L_0896B054;
    case 556u: goto L_0896B064;
    case 557u: goto L_0896B070;
    case 558u: goto L_0896B07C;
    case 559u: goto L_0896B084;
    case 560u: goto L_0896B088;
    case 561u: goto L_0896B094;
    case 562u: goto L_0896B0A4;
    case 563u: goto L_0896B0AC;
    case 564u: goto L_0896B0BC;
    case 565u: goto L_0896B0C8;
    case 566u: goto L_0896B0D4;
    case 567u: goto L_0896B0DC;
    case 568u: goto L_0896B0E0;
    case 569u: goto L_0896B0EC;
    case 570u: goto L_0896B0FC;
    case 571u: goto L_0896B104;
    case 572u: goto L_0896B114;
    case 573u: goto L_0896B120;
    case 574u: goto L_0896B12C;
    case 575u: goto L_0896B134;
    case 576u: goto L_0896B138;
    case 577u: goto L_0896B144;
    case 578u: goto L_0896B154;
    case 579u: goto L_0896B15C;
    case 580u: goto L_0896B16C;
    case 581u: goto L_0896B178;
    case 582u: goto L_0896B184;
    case 583u: goto L_0896B18C;
    case 584u: goto L_0896B190;
    case 585u: goto L_0896B19C;
    case 586u: goto L_0896B1AC;
    case 587u: goto L_0896B1B4;
    case 588u: goto L_0896B1C4;
    case 589u: goto L_0896B1D0;
    case 590u: goto L_0896B1DC;
    case 591u: goto L_0896B1E4;
    case 592u: goto L_0896B1E8;
    case 593u: goto L_0896B1F4;
    case 594u: goto L_0896B204;
    case 595u: goto L_0896B20C;
    case 596u: goto L_0896B21C;
    case 597u: goto L_0896B228;
    case 598u: goto L_0896B234;
    case 599u: goto L_0896B23C;
    case 600u: goto L_0896B240;
    case 601u: goto L_0896B24C;
    case 602u: goto L_0896B25C;
    case 603u: goto L_0896B264;
    case 604u: goto L_0896B274;
    case 605u: goto L_0896B280;
    case 606u: goto L_0896B28C;
    case 607u: goto L_0896B294;
    case 608u: goto L_0896B298;
    case 609u: goto L_0896B2A4;
    case 610u: goto L_0896B2B4;
    case 611u: goto L_0896B2BC;
    case 612u: goto L_0896B2CC;
    case 613u: goto L_0896B2D8;
    case 614u: goto L_0896B2E4;
    case 615u: goto L_0896B2EC;
    case 616u: goto L_0896B2F0;
    case 617u: goto L_0896B2FC;
    case 618u: goto L_0896B30C;
    case 619u: goto L_0896B314;
    case 620u: goto L_0896B324;
    case 621u: goto L_0896B330;
    case 622u: goto L_0896B33C;
    case 623u: goto L_0896B344;
    case 624u: goto L_0896B348;
    case 625u: goto L_0896B354;
    case 626u: goto L_0896B364;
    case 627u: goto L_0896B36C;
    case 628u: goto L_0896B37C;
    case 629u: goto L_0896B388;
    case 630u: goto L_0896B394;
    case 631u: goto L_0896B39C;
    case 632u: goto L_0896B3A0;
    case 633u: goto L_0896B3AC;
    case 634u: goto L_0896B3BC;
    case 635u: goto L_0896B3C4;
    case 636u: goto L_0896B3D4;
    case 637u: goto L_0896B3E0;
    case 638u: goto L_0896B3EC;
    case 639u: goto L_0896B3F4;
    case 640u: goto L_0896B3F8;
    case 641u: goto L_0896B404;
    case 642u: goto L_0896B414;
    case 643u: goto L_0896B41C;
    case 644u: goto L_0896B42C;
    case 645u: goto L_0896B438;
    case 646u: goto L_0896B444;
    case 647u: goto L_0896B44C;
    case 648u: goto L_0896B450;
    case 649u: goto L_0896B45C;
    case 650u: goto L_0896B46C;
    case 651u: goto L_0896B474;
    case 652u: goto L_0896B484;
    case 653u: goto L_0896B490;
    case 654u: goto L_0896B49C;
    case 655u: goto L_0896B4A4;
    case 656u: goto L_0896B4A8;
    case 657u: goto L_0896B4B4;
    case 658u: goto L_0896B4C4;
    case 659u: goto L_0896B4CC;
    case 660u: goto L_0896B4DC;
    case 661u: goto L_0896B4E8;
    case 662u: goto L_0896B4F4;
    case 663u: goto L_0896B4FC;
    case 664u: goto L_0896B500;
    case 665u: goto L_0896B50C;
    case 666u: goto L_0896B51C;
    case 667u: goto L_0896B524;
    case 668u: goto L_0896B534;
    case 669u: goto L_0896B540;
    case 670u: goto L_0896B54C;
    case 671u: goto L_0896B554;
    case 672u: goto L_0896B558;
    case 673u: goto L_0896B564;
    case 674u: goto L_0896B574;
    case 675u: goto L_0896B57C;
    case 676u: goto L_0896B58C;
    case 677u: goto L_0896B598;
    case 678u: goto L_0896B5A4;
    case 679u: goto L_0896B5AC;
    case 680u: goto L_0896B5B0;
    case 681u: goto L_0896B5BC;
    case 682u: goto L_0896B5CC;
    case 683u: goto L_0896B5D4;
    case 684u: goto L_0896B5E4;
    case 685u: goto L_0896B5F0;
    case 686u: goto L_0896B5FC;
    case 687u: goto L_0896B604;
    case 688u: goto L_0896B608;
    case 689u: goto L_0896B614;
    case 690u: goto L_0896B624;
    case 691u: goto L_0896B62C;
    case 692u: goto L_0896B63C;
    case 693u: goto L_0896B648;
    case 694u: goto L_0896B654;
    case 695u: goto L_0896B65C;
    case 696u: goto L_0896B660;
    case 697u: goto L_0896B66C;
    case 698u: goto L_0896B67C;
    case 699u: goto L_0896B684;
    case 700u: goto L_0896B694;
    case 701u: goto L_0896B6A0;
    case 702u: goto L_0896B6AC;
    case 703u: goto L_0896B6B4;
    case 704u: goto L_0896B6B8;
    case 705u: goto L_0896B6C4;
    case 706u: goto L_0896B6D4;
    case 707u: goto L_0896B6DC;
    case 708u: goto L_0896B6EC;
    case 709u: goto L_0896B6F8;
    case 710u: goto L_0896B704;
    case 711u: goto L_0896B70C;
    case 712u: goto L_0896B710;
    case 713u: goto L_0896B71C;
    case 714u: goto L_0896B72C;
    case 715u: goto L_0896B734;
    case 716u: goto L_0896B744;
    case 717u: goto L_0896B750;
    case 718u: goto L_0896B75C;
    case 719u: goto L_0896B764;
    case 720u: goto L_0896B768;
    case 721u: goto L_0896B774;
    case 722u: goto L_0896B784;
    case 723u: goto L_0896B78C;
    case 724u: goto L_0896B79C;
    case 725u: goto L_0896B7A8;
    case 726u: goto L_0896B7B4;
    case 727u: goto L_0896B7BC;
    case 728u: goto L_0896B7C0;
    case 729u: goto L_0896B7CC;
    case 730u: goto L_0896B7DC;
    case 731u: goto L_0896B7E4;
    case 732u: goto L_0896B7F4;
    case 733u: goto L_0896B800;
    case 734u: goto L_0896B80C;
    case 735u: goto L_0896B814;
    case 736u: goto L_0896B818;
    case 737u: goto L_0896B824;
    case 738u: goto L_0896B834;
    case 739u: goto L_0896B83C;
    case 740u: goto L_0896B84C;
    case 741u: goto L_0896B858;
    case 742u: goto L_0896B864;
    case 743u: goto L_0896B86C;
    case 744u: goto L_0896B870;
    case 745u: goto L_0896B87C;
    case 746u: goto L_0896B88C;
    case 747u: goto L_0896B894;
    case 748u: goto L_0896B8A4;
    case 749u: goto L_0896B8B0;
    case 750u: goto L_0896B8BC;
    case 751u: goto L_0896B8C4;
    case 752u: goto L_0896B8C8;
    case 753u: goto L_0896B8D4;
    case 754u: goto L_0896B8E4;
    case 755u: goto L_0896B8EC;
    case 756u: goto L_0896B8FC;
    case 757u: goto L_0896B908;
    case 758u: goto L_0896B914;
    case 759u: goto L_0896B91C;
    case 760u: goto L_0896B920;
    case 761u: goto L_0896B92C;
    case 762u: goto L_0896B93C;
    case 763u: goto L_0896B94C;
    case 764u: goto L_0896B958;
    case 765u: goto L_0896B968;
    case 766u: goto L_0896B974;
    case 767u: goto L_0896B980;
    case 768u: goto L_0896B988;
    case 769u: goto L_0896B98C;
    case 770u: goto L_0896B998;
    case 771u: goto L_0896B9A8;
    case 772u: goto L_0896B9BC;
    case 773u: goto L_0896B9C4;
    case 774u: goto L_0896B9D4;
    case 775u: goto L_0896B9E0;
    case 776u: goto L_0896B9EC;
    case 777u: goto L_0896B9F4;
    case 778u: goto L_0896B9F8;
    case 779u: goto L_0896BA04;
    case 780u: goto L_0896BA14;
    case 781u: goto L_0896BA34;
    case 782u: goto L_0896BA44;
    case 783u: goto L_0896BA54;
    case 784u: goto L_0896BA60;
    case 785u: goto L_0896BA6C;
    case 786u: goto L_0896BA74;
    case 787u: goto L_0896BA78;
    case 788u: goto L_0896BA84;
    case 789u: goto L_0896BA94;
    case 790u: goto L_0896BAA8;
    case 791u: goto L_0896BAB8;
    case 792u: goto L_0896BAC4;
    case 793u: goto L_0896BAD4;
    case 794u: goto L_0896BAE0;
    case 795u: goto L_0896BAEC;
    case 796u: goto L_0896BAF4;
    case 797u: goto L_0896BAF8;
    case 798u: goto L_0896BB04;
    case 799u: goto L_0896BB14;
    case 800u: goto L_0896BB28;
    case 801u: goto L_0896BB30;
    case 802u: goto L_0896BB40;
    case 803u: goto L_0896BB4C;
    case 804u: goto L_0896BB58;
    case 805u: goto L_0896BB60;
    case 806u: goto L_0896BB64;
    case 807u: goto L_0896BB70;
    case 808u: goto L_0896BB80;
    case 809u: goto L_0896BB88;
    case 810u: goto L_0896BB98;
    case 811u: goto L_0896BBA4;
    case 812u: goto L_0896BBB0;
    case 813u: goto L_0896BBB8;
    case 814u: goto L_0896BBBC;
    case 815u: goto L_0896BBC8;
    case 816u: goto L_0896BBD8;
    case 817u: goto L_0896BBE0;
    case 818u: goto L_0896BBF0;
    case 819u: goto L_0896BBFC;
    case 820u: goto L_0896BC08;
    case 821u: goto L_0896BC10;
    case 822u: goto L_0896BC14;
    case 823u: goto L_0896BC20;
    case 824u: goto L_0896BC30;
    case 825u: goto L_0896BC38;
    case 826u: goto L_0896BC48;
    case 827u: goto L_0896BC54;
    case 828u: goto L_0896BC60;
    case 829u: goto L_0896BC68;
    case 830u: goto L_0896BC6C;
    case 831u: goto L_0896BC78;
    case 832u: goto L_0896BC88;
    case 833u: goto L_0896BC90;
    case 834u: goto L_0896BCA0;
    case 835u: goto L_0896BCAC;
    case 836u: goto L_0896BCB8;
    case 837u: goto L_0896BCC0;
    case 838u: goto L_0896BCC4;
    case 839u: goto L_0896BCD0;
    case 840u: goto L_0896BCE0;
    case 841u: goto L_0896BCE8;
    case 842u: goto L_0896BCF8;
    case 843u: goto L_0896BD04;
    case 844u: goto L_0896BD10;
    case 845u: goto L_0896BD18;
    case 846u: goto L_0896BD1C;
    case 847u: goto L_0896BD28;
    case 848u: goto L_0896BD38;
    case 849u: goto L_0896BD40;
    case 850u: goto L_0896BD50;
    case 851u: goto L_0896BD5C;
    case 852u: goto L_0896BD68;
    case 853u: goto L_0896BD70;
    case 854u: goto L_0896BD74;
    case 855u: goto L_0896BD80;
    case 856u: goto L_0896BD90;
    case 857u: goto L_0896BD98;
    case 858u: goto L_0896BDA8;
    case 859u: goto L_0896BDB4;
    case 860u: goto L_0896BDC0;
    case 861u: goto L_0896BDC8;
    case 862u: goto L_0896BDCC;
    case 863u: goto L_0896BDD8;
    case 864u: goto L_0896BDE8;
    case 865u: goto L_0896BDF0;
    case 866u: goto L_0896BE00;
    case 867u: goto L_0896BE0C;
    case 868u: goto L_0896BE18;
    case 869u: goto L_0896BE20;
    case 870u: goto L_0896BE24;
    case 871u: goto L_0896BE30;
    case 872u: goto L_0896BE40;
    case 873u: goto L_0896BE48;
    case 874u: goto L_0896BE58;
    case 875u: goto L_0896BE64;
    case 876u: goto L_0896BE70;
    case 877u: goto L_0896BE78;
    case 878u: goto L_0896BE7C;
    case 879u: goto L_0896BE88;
    case 880u: goto L_0896BE98;
    case 881u: goto L_0896BEA0;
    case 882u: goto L_0896BEB0;
    case 883u: goto L_0896BEBC;
    case 884u: goto L_0896BEC8;
    case 885u: goto L_0896BED0;
    case 886u: goto L_0896BED4;
    case 887u: goto L_0896BEE0;
    case 888u: goto L_0896BEF0;
    case 889u: goto L_0896BEF8;
    case 890u: goto L_0896BF08;
    case 891u: goto L_0896BF14;
    case 892u: goto L_0896BF20;
    case 893u: goto L_0896BF28;
    case 894u: goto L_0896BF2C;
    case 895u: goto L_0896BF38;
    case 896u: goto L_0896BF48;
    case 897u: goto L_0896BF50;
    case 898u: goto L_0896BF60;
    case 899u: goto L_0896BF6C;
    case 900u: goto L_0896BF78;
    case 901u: goto L_0896BF80;
    case 902u: goto L_0896BF84;
    case 903u: goto L_0896BF90;
    case 904u: goto L_0896BFA0;
    case 905u: goto L_0896BFA8;
    case 906u: goto L_0896BFB8;
    case 907u: goto L_0896BFC4;
    case 908u: goto L_0896BFD0;
    case 909u: goto L_0896BFD8;
    case 910u: goto L_0896BFDC;
    case 911u: goto L_0896BFE8;
    case 912u: goto L_0896BFF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08968000:
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store16(ctx.gpr[8] + static_cast<std::uint32_t>(60), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store16(ctx.gpr[8] + static_cast<std::uint32_t>(62), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 49u);
    aot_mem.aot_store16(ctx.gpr[8] + static_cast<std::uint32_t>(64), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x08968024u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 683u, 0x089670A8u>(ctx, &aot_mem) && ctx.pc == 0x08968024u) goto L_08968024;
    return;
L_08968024:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08968030;
      }
      goto L_0896802C;
    }
L_0896802C:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    goto L_08968030;
L_08968030:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896803C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[31] = (0x0896805Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 817u, 0x08967E40u>(ctx, &aot_mem) && ctx.pc == 0x0896805Cu) goto L_0896805C;
    return;
L_0896805C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08968074;
      }
      goto L_0896806C;
    }
L_0896806C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089680A0;
      }
      goto L_08968074;
    }
L_08968074:
    ctx.gpr[31] = (0x0896807Cu);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 687u, 0x08967108u>(ctx, &aot_mem) && ctx.pc == 0x0896807Cu) goto L_0896807C;
    return;
L_0896807C:
    ctx.gpr[4] = (ctx.gpr[2] << 6u);
    ctx.gpr[5] = (ctx.gpr[2] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2277u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21984));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    goto L_089680A0;
L_089680A0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089680B0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[10] = (2277u << 16u);
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(-21984));
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(51)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    goto L_089680CC;
L_089680CC:
    { const bool branch_taken = ctx.gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_089680F0;
      }
      goto L_089680D4;
    }
L_089680D4:
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_089680F0;
      }
      goto L_089680DC;
    }
L_089680DC:
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(1));
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(80));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(51)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (ctx.gpr[11] < static_cast<std::uint32_t>(75) ? 1u : 0u);
      if (branch_taken) {
          goto L_089680CC;
      }
      goto L_089680F0;
    }
L_089680F0:
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08968144;
      }
      goto L_089680F8;
    }
L_089680F8:
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[10] + static_cast<std::uint32_t>(50), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[10] + static_cast<std::uint32_t>(51), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[10] + static_cast<std::uint32_t>(66), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[10] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store16(ctx.gpr[10] + static_cast<std::uint32_t>(60), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store16(ctx.gpr[10] + static_cast<std::uint32_t>(62), static_cast<std::uint16_t>(ctx.gpr[7]));
    aot_mem.aot_store16(ctx.gpr[10] + static_cast<std::uint32_t>(64), static_cast<std::uint16_t>(0u));
    ctx.gpr[31] = (0x0896813Cu);
    ctx.gpr[4] = (ctx.gpr[11] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 683u, 0x089670A8u>(ctx, &aot_mem) && ctx.pc == 0x0896813Cu) goto L_0896813C;
    return;
L_0896813C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08968148;
      }
      goto L_08968144;
    }
L_08968144:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    goto L_08968148;
L_08968148:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08968154:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (2277u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-21984));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    goto L_08968180;
L_08968180:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_089681B4;
      }
      goto L_0896818C;
    }
L_0896818C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_089681B4;
      }
      goto L_08968198;
    }
L_08968198:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089681A4u);
    ctx.gpr[5] = (0u | 0u);
    goto L_08968418;
L_089681A4:
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(51), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(62), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(64), static_cast<std::uint16_t>(0u));
    goto L_089681B4;
L_089681B4:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[19] < static_cast<std::uint32_t>(75) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(80));
      if (branch_taken) {
          goto L_08968180;
      }
      goto L_089681C4;
    }
L_089681C4:
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
L_089681E0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x089681F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 687u, 0x08967108u>(ctx, &aot_mem) && ctx.pc == 0x089681F4u) goto L_089681F4;
    return;
L_089681F4:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0896820C;
      }
      goto L_08968204;
    }
L_08968204:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08968240;
      }
      goto L_0896820C;
    }
L_0896820C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08968218u);
    ctx.gpr[5] = (0u | 0u);
    goto L_08968418;
L_08968218:
    ctx.gpr[4] = (ctx.gpr[16] << 6u);
    ctx.gpr[5] = (ctx.gpr[16] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2277u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21984));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(51), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(62), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(64), static_cast<std::uint16_t>(0u));
    goto L_08968240;
L_08968240:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08968250:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2277u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-21984));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    goto L_0896826C;
L_0896826C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08968278u);
    ctx.gpr[5] = (0u | 0u);
    goto L_08968418;
L_08968278:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(51), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(62), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(64), static_cast<std::uint16_t>(0u));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 75 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(80));
      if (branch_taken) {
          goto L_0896826C;
      }
      goto L_08968298;
    }
L_08968298:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089682AC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x089682BCu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 687u, 0x08967108u>(ctx, &aot_mem) && ctx.pc == 0x089682BCu) goto L_089682BC;
    return;
L_089682BC:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_089682D4;
      }
      goto L_089682CC;
    }
L_089682CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089682F0;
      }
      goto L_089682D4;
    }
L_089682D4:
    ctx.gpr[6] = (ctx.gpr[5] << 6u);
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[6] = (2277u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-21984));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_089682F0;
L_089682F0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089682FC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x0896830Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 687u, 0x08967108u>(ctx, &aot_mem) && ctx.pc == 0x0896830Cu) goto L_0896830C;
    return;
L_0896830C:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08968344;
      }
      goto L_0896831C;
    }
L_0896831C:
    ctx.gpr[6] = (ctx.gpr[5] << 6u);
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[6] = (2277u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-21984));
    ctx.gpr[7] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[7];
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
      if (branch_taken) {
          goto L_0896834C;
      }
      goto L_0896833C;
    }
L_0896833C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(50), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08968354;
      }
      goto L_08968344;
    }
L_08968344:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08968354;
      }
      goto L_0896834C;
    }
L_0896834C:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(50), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08968354;
L_08968354:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08968360:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08968370u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 687u, 0x08967108u>(ctx, &aot_mem) && ctx.pc == 0x08968370u) goto L_08968370;
    return;
L_08968370:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4576));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(320)));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_0896838C;
      }
      goto L_08968388;
    }
L_08968388:
    ctx.gpr[4] = (0u | 1u);
    goto L_0896838C;
L_0896838C:
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089683A0;
      }
      goto L_08968398;
    }
L_08968398:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089683BC;
      }
      goto L_089683A0;
    }
L_089683A0:
    ctx.gpr[6] = (ctx.gpr[5] << 6u);
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[6] = (2277u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-21984));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(60), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_089683BC;
L_089683BC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089683C8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x089683D8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 687u, 0x08967108u>(ctx, &aot_mem) && ctx.pc == 0x089683D8u) goto L_089683D8;
    return;
L_089683D8:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_089683F0;
      }
      goto L_089683E8;
    }
L_089683E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896840C;
      }
      goto L_089683F0;
    }
L_089683F0:
    ctx.gpr[6] = (ctx.gpr[5] << 6u);
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[6] = (2277u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-21984));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(62), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_0896840C;
L_0896840C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08968418:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[6] = (2277u << 16u);
    ctx.gpr[16] = (ctx.gpr[5] & 255u);
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(-21984));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08968460;
      }
      goto L_08968450;
    }
L_08968450:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0896853C;
      }
      goto L_08968458;
    }
L_08968458:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08968478;
      }
      goto L_08968460;
    }
L_08968460:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_089684BC;
      }
      goto L_08968468;
    }
L_08968468:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08968500;
      }
      goto L_08968470;
    }
L_08968470:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896853C;
      }
      goto L_08968478;
    }
L_08968478:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x08968488u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 829u, 0x08AFB924u>(ctx, &aot_mem) && ctx.pc == 0x08968488u) goto L_08968488;
    return;
L_08968488:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089684B4;
      }
      goto L_08968494;
    }
L_08968494:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[6] = (65472u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (ctx.gpr[16] & 1u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[7] << 22u);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    goto L_089684B4;
L_089684B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896853C;
      }
      goto L_089684BC;
    }
L_089684BC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089684CCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x089684CCu) goto L_089684CC;
    return;
L_089684CC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089684F8;
      }
      goto L_089684D8;
    }
L_089684D8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[6] = (65472u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (ctx.gpr[16] & 1u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[7] << 22u);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    goto L_089684F8;
L_089684F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896853C;
      }
      goto L_08968500;
    }
L_08968500:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x08968510u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15028)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 825u, 0x08AFB8DCu>(ctx, &aot_mem) && ctx.pc == 0x08968510u) goto L_08968510;
    return;
L_08968510:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896853C;
      }
      goto L_0896851C;
    }
L_0896851C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[6] = (65472u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (ctx.gpr[16] & 1u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[7] << 22u);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    goto L_0896853C;
L_0896853C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896854C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x0896855Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 687u, 0x08967108u>(ctx, &aot_mem) && ctx.pc == 0x0896855Cu) goto L_0896855C;
    return;
L_0896855C:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08968574;
      }
      goto L_0896856C;
    }
L_0896856C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08968590;
      }
      goto L_08968574;
    }
L_08968574:
    ctx.gpr[6] = (ctx.gpr[5] << 6u);
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[6] = (2277u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-21984));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(64), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_08968590;
L_08968590:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896859C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x089685B0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[5]));
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 687u, 0x08967108u>(ctx, &aot_mem) && ctx.pc == 0x089685B0u) goto L_089685B0;
    return;
L_089685B0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_089685DC;
      }
      goto L_089685C0;
    }
L_089685C0:
    ctx.gpr[6] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[6] = (2277u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-21984));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_089685DC;
L_089685DC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089685E8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[8] & 255u);
    ctx.gpr[9] = (ctx.gpr[7] | 0u);
    ctx.gpr[8] = (16329u << 16u);
    ctx.gpr[7] = (ctx.gpr[5] & 255u);
    ctx.gpr[8] = (ctx.gpr[8] | 4059u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[5] = (ctx.gpr[9] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[31]);
    ctx.gpr[8] = (16256u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[8] = (16201u << 16u);
    ctx.fpr[18] = std::bit_cast<float>(0u);
    ctx.gpr[8] = (ctx.gpr[8] | 4059u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.fpr[16] = ctx.fpr[14] - ctx.fpr[16];
    ctx.gpr[8] = (16576u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.gpr[9] = (0u | 0u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[29] | 0u);
    goto L_08968664;
L_08968664:
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.fpr[19] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[19])));
    { const float fs = ctx.fpr[19]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[19] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[19] = fs * ft; }
    ctx.fpr[19] = ctx.fpr[16] + ctx.fpr[19];
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[10]);
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
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::cos(vfpu_s[i] * 1.57079632679489661923f);
      ctx.write_vfpu_vector_with_destination_prefix_ct<1u, 1u>(vfpu_d); }
    ctx.gpr[10] = (ctx.vfpu_scalar_bits_ct<1u>());
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[10]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[10]);
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
    ctx.gpr[10] = (ctx.vfpu_scalar_bits_ct<1u>());
    ctx.fpr[2] = std::bit_cast<float>(ctx.gpr[10]);
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[2] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[2];
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[12] + ctx.fpr[0];
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[10]);
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
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::cos(vfpu_s[i] * 1.57079632679489661923f);
      ctx.write_vfpu_vector_with_destination_prefix_ct<1u, 1u>(vfpu_d); }
    ctx.gpr[10] = (ctx.vfpu_scalar_bits_ct<1u>());
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[10]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[10]);
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
    ctx.gpr[10] = (ctx.vfpu_scalar_bits_ct<1u>());
    ctx.fpr[2] = std::bit_cast<float>(ctx.gpr[10]);
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[19] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[19] = fs * ft; }
    ctx.fpr[19] = ctx.fpr[0] - ctx.fpr[19];
    { const float fs = ctx.fpr[19]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[19] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[19] = fs * ft; }
    ctx.fpr[19] = ctx.fpr[13] + ctx.fpr[19];
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[9]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08968664;
      }
      goto L_08968724;
    }
L_08968724:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[8] = (ctx.gpr[7] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[9] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[31] = (0x0896876Cu);
    ctx.gpr[7] = (ctx.gpr[9] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x0896876Cu) goto L_0896876C;
    return;
L_0896876C:
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[31] = (0x08968798u);
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 914u, 0x08AD3B68u>(ctx, &aot_mem) && ctx.pc == 0x08968798u) goto L_08968798;
    return;
L_08968798:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089687C0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[6] & 255u);
    ctx.gpr[6] = (16576u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[14] = ctx.fpr[12] + ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[16]);
    ctx.fpr[17] = ctx.fpr[13] - ctx.fpr[15];
    ctx.gpr[16] = (ctx.gpr[4] & 65535u);
    ctx.gpr[5] = (2228u << 16u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[15];
    ctx.gpr[4] = (ctx.gpr[16] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28484));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[21]);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[20]);
    ctx.fpr[15] = ctx.fpr[13] + ctx.fpr[15];
    ctx.gpr[19] = (ctx.gpr[7] & 255u);
    ctx.gpr[20] = (ctx.gpr[8] & 255u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[31]);
    ctx.gpr[31] = (0x08968830u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 133u, 0x089FD378u>(ctx, &aot_mem) && ctx.pc == 0x08968830u) goto L_08968830;
    return;
L_08968830:
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x0896884Cu);
    ctx.gpr[8] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x0896884Cu) goto L_0896884C;
    return;
L_0896884C:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x0896885Cu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 906u, 0x08AD3ABCu>(ctx, &aot_mem) && ctx.pc == 0x0896885Cu) goto L_0896885C;
    return;
L_0896885C:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4576));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(320)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089688CC;
      }
      goto L_08968870;
    }
L_08968870:
    ctx.gpr[4] = (2277u << 16u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-15872));
    goto L_08968880;
L_08968880:
    ctx.gpr[7] = (ctx.gpr[5] << 3u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08968898;
      }
      goto L_08968894;
    }
L_08968894:
    ctx.gpr[6] = (0u | 1u);
    goto L_08968898;
L_08968898:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < 75 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08968880;
      }
      goto L_089688AC;
    }
L_089688AC:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (2228u << 16u);
      if (branch_taken) {
          goto L_089688CC;
      }
      goto L_089688B4;
    }
L_089688B4:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(-27980)));
    ctx.gpr[7] = (ctx.gpr[6] << 3u);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[16]));
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(-27980), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_089688CC;
L_089688CC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089688F4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27580)));
    ctx.gpr[5] = (2228u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[16]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-27952)));
    ctx.gpr[16] = (2228u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(-27948)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[6] = (ctx.gpr[4] - ctx.gpr[6]);
      if (branch_taken) {
          goto L_0896896C;
      }
      goto L_08968950;
    }
L_08968950:
    ctx.gpr[6] = (ctx.gpr[6] < static_cast<std::uint32_t>(501) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08968984;
      }
      goto L_0896895C;
    }
L_0896895C:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-27952), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[7] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(-27948), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08968984;
      }
      goto L_0896896C;
    }
L_0896896C:
    ctx.gpr[6] = (ctx.gpr[6] < static_cast<std::uint32_t>(201) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08968984;
      }
      goto L_08968978;
    }
L_08968978:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-27952), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[7] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(-27948), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08968984;
L_08968984:
    ctx.gpr[4] = (16278u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52196u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x08968998u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 253u, 0x08A1D3ECu>(ctx, &aot_mem) && ctx.pc == 0x08968998u) goto L_08968998;
    return;
L_08968998:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[16] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(-27948)));
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_089689C0;
      }
      goto L_089689B0;
    }
L_089689B0:
    ctx.gpr[4] = (16585u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_089689C0;
L_089689C0:
    ctx.gpr[4] = (16201u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (16608u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[12];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[16] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[16] & 255u);
      if (branch_taken) {
          goto L_08968AC0;
      }
      goto L_089689F0;
    }
L_089689F0:
    ctx.gpr[5] = (2228u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[16] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28484));
    ctx.gpr[17] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (16768u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[20];
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = ctx.fpr[22] - ctx.fpr[20];
    ctx.fpr[14] = ctx.fpr[24] + ctx.fpr[20];
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(216)));
    ctx.fpr[16] = ctx.fpr[22] + ctx.fpr[20];
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[15];
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[15];
    ctx.gpr[20] = (2230u << 16u);
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[15];
    ctx.gpr[31] = (0x08968A4Cu);
    ctx.fpr[15] = ctx.fpr[16] + ctx.fpr[15];
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 133u, 0x089FD378u>(ctx, &aot_mem) && ctx.pc == 0x08968A4Cu) goto L_08968A4C;
    return;
L_08968A4C:
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(-6204)));
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08968A68u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x08968A68u) goto L_08968A68;
    return;
L_08968A68:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08968A78u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 906u, 0x08AD3ABCu>(ctx, &aot_mem) && ctx.pc == 0x08968A78u) goto L_08968A78;
    return;
L_08968A78:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(216)));
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[20];
    ctx.fpr[13] = ctx.fpr[22] - ctx.fpr[20];
    ctx.fpr[14] = ctx.fpr[24] + ctx.fpr[20];
    ctx.fpr[15] = ctx.fpr[22] + ctx.fpr[20];
    ctx.gpr[31] = (0x08968A94u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 133u, 0x089FD378u>(ctx, &aot_mem) && ctx.pc == 0x08968A94u) goto L_08968A94;
    return;
L_08968A94:
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(-6204)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[31] = (0x08968AB0u);
    ctx.gpr[7] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x08968AB0u) goto L_08968AB0;
    return;
L_08968AB0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08968AC0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 906u, 0x08AD3ABCu>(ctx, &aot_mem) && ctx.pc == 0x08968AC0u) goto L_08968AC0;
    return;
L_08968AC0:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-27980)));
    ctx.gpr[8] = (2277u << 16u);
    ctx.gpr[7] = (ctx.gpr[5] << 3u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-15872));
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(54));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    aot_mem.aot_store16(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(-27980), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08968B1C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    ctx.gpr[23] = (0u | 0u);
    ctx.gpr[21] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[19] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[16] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    goto L_08968B58;
L_08968B58:
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[20] = (static_cast<std::int32_t>(ctx.gpr[23]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    ctx.gpr[18] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    goto L_08968B64;
L_08968B64:
    { const bool branch_taken = ctx.gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_08968B84;
      }
      goto L_08968B6C;
    }
L_08968B6C:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08968B84;
      }
      goto L_08968B74;
    }
L_08968B74:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[22]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08968B84;
      }
      goto L_08968B7C;
    }
L_08968B7C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08968B98;
      }
      goto L_08968B84;
    }
L_08968B84:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08968B90u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 556u, 0x08966624u>(ctx, &aot_mem) && ctx.pc == 0x08968B90u) goto L_08968B90;
    return;
L_08968B90:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08968BA4;
      }
      goto L_08968B98;
    }
L_08968B98:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08968BA4u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 551u, 0x089665ACu>(ctx, &aot_mem) && ctx.pc == 0x08968BA4u) goto L_08968BA4;
    return;
L_08968BA4:
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[22]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08968B64;
      }
      goto L_08968BB4;
    }
L_08968BB4:
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[23]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08968B58;
      }
      goto L_08968BC4;
    }
L_08968BC4:
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
L_08968BF0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (17658u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (17402u << 16u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<3u>(ctx.fpr[12]));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = ctx.fpr[15] + ctx.fpr[13];
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[14];
    ctx.gpr[4] = (16608u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[16] - ctx.fpr[13];
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<2u>(ctx.fpr[13]));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08968C54u);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08968B1C;
L_08968C54:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08968C60:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[17] = (0u | 0u);
    goto L_08968C74;
L_08968C74:
    ctx.gpr[16] = (0u | 0u);
    goto L_08968C78;
L_08968C78:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08968C84u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 556u, 0x08966624u>(ctx, &aot_mem) && ctx.pc == 0x08968C84u) goto L_08968C84;
    return;
L_08968C84:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08968C78;
      }
      goto L_08968C94;
    }
L_08968C94:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08968C74;
      }
      goto L_08968CA4;
    }
L_08968CA4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08968CB8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-400));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(360), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    ctx.gpr[19] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(340), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(344), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(348), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(352), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(356), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(364), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(368), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(372), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(376), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(380), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(384), ctx.gpr[31]);
    ctx.gpr[31] = (0x08968D00u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 584u, 0x089667C8u>(ctx, &aot_mem) && ctx.pc == 0x08968D00u) goto L_08968D00;
    return;
L_08968D00:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x08968D0Cu);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 542u, 0x08966554u>(ctx, &aot_mem) && ctx.pc == 0x08968D0Cu) goto L_08968D0C;
    return;
L_08968D0C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-6536)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08968DB4;
      }
      goto L_08968D1C;
    }
L_08968D1C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[16] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (2276u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27944));
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28096)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] & 128u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
      if (branch_taken) {
          goto L_08968D6C;
      }
      goto L_08968D60;
    }
L_08968D60:
    ctx.gpr[4] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08968D80;
      }
      goto L_08968D6C;
    }
L_08968D6C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08968D80;
L_08968D80:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08968D94;
      }
      goto L_08968D88;
    }
L_08968D88:
    ctx.gpr[31] = (0x08968D90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 224u, 0x08A4CEACu>(ctx, &aot_mem) && ctx.pc == 0x08968D90u) goto L_08968D90;
    return;
L_08968D90:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    goto L_08968D94;
L_08968D94:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08968DAC;
      }
      goto L_08968D9C;
    }
L_08968D9C:
    ctx.gpr[31] = (0x08968DA4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 626u, 0x08AB37F8u>(ctx, &aot_mem) && ctx.pc == 0x08968DA4u) goto L_08968DA4;
    return;
L_08968DA4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08968DB4;
      }
      goto L_08968DAC;
    }
L_08968DAC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08968F8C;
      }
      goto L_08968DB4;
    }
L_08968DB4:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(296));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
    goto L_08968DC0;
L_08968DC0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08968DCCu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 780u, 0x08967B20u>(ctx, &aot_mem) && ctx.pc == 0x08968DCCu) goto L_08968DCC;
    return;
L_08968DCC:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(8));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08968DC0;
      }
      goto L_08968DE0;
    }
L_08968DE0:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(232));
    ctx.gpr[31] = (0x08968DECu);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(296));
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 435u, 0x0896E23Cu>(ctx, &aot_mem) && ctx.pc == 0x08968DECu) goto L_08968DEC;
    return;
L_08968DEC:
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_08968E58;
      }
      goto L_08968DF8;
    }
L_08968DF8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(336), ctx.gpr[19]);
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27340)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (15112u << 16u);
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (ctx.gpr[4] | 34953u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27344)));
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.gpr[21] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(104));
    ctx.fpr[22] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (15216u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 61681u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[23] = (2230u << 16u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[22]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
      if (branch_taken) {
          goto L_08968E60;
      }
      goto L_08968E50;
    }
L_08968E50:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08968ED8;
      }
      goto L_08968E58;
    }
L_08968E58:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08968F8C;
      }
      goto L_08968E60;
    }
L_08968E60:
    ctx.gpr[16] = (ctx.gpr[29] | 0u);
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(40));
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(232));
    ctx.gpr[20] = (ctx.gpr[16] + static_cast<std::uint32_t>(104));
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(168));
    goto L_08968E74;
L_08968E74:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08968E80u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 785u, 0x08967BE0u>(ctx, &aot_mem) && ctx.pc == 0x08968E80u) goto L_08968E80;
    return;
L_08968E80:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08968E94u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 790u, 0x08967CA8u>(ctx, &aot_mem) && ctx.pc == 0x08968E94u) goto L_08968E94;
    return;
L_08968E94:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08968EA0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 757u, 0x08967860u>(ctx, &aot_mem) && ctx.pc == 0x08968EA0u) goto L_08968EA0;
    return;
L_08968EA0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(168)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(172)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(8));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(8));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(168), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(172), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(8));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[22]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08968E74;
      }
      goto L_08968ED8;
    }
L_08968ED8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-6536)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(168));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(336)));
      if (branch_taken) {
          goto L_08968F30;
      }
      goto L_08968EEC;
    }
L_08968EEC:
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[31] = (0x08968EFCu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x08968EFCu) goto L_08968EFC;
    return;
L_08968EFC:
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(-6204)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(328));
    ctx.gpr[5] = (0u | 204u);
    ctx.gpr[6] = (0u | 204u);
    ctx.gpr[31] = (0x08968F14u);
    ctx.gpr[7] = (0u | 204u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x08968F14u) goto L_08968F14;
    return;
L_08968F14:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x08968F28u);
    ctx.gpr[7] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 922u, 0x08AD3C34u>(ctx, &aot_mem) && ctx.pc == 0x08968F28u) goto L_08968F28;
    return;
L_08968F28:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08968F6C;
      }
      goto L_08968F30;
    }
L_08968F30:
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08968F40u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x08968F40u) goto L_08968F40;
    return;
L_08968F40:
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(-6204)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(332));
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[31] = (0x08968F58u);
    ctx.gpr[7] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x08968F58u) goto L_08968F58;
    return;
L_08968F58:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x08968F6Cu);
    ctx.gpr[7] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 922u, 0x08AD3C34u>(ctx, &aot_mem) && ctx.pc == 0x08968F6Cu) goto L_08968F6C;
    return;
L_08968F6C:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[22]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08968F8C;
      }
      goto L_08968F78;
    }
L_08968F78:
    ctx.gpr[5] = (2277u << 16u);
    ctx.gpr[4] = (0u | 5u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08968F8Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-15264));
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 3u, 0x08868074u>(ctx, &aot_mem) && ctx.pc == 0x08968F8Cu) goto L_08968F8C;
    return;
L_08968F8C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(340)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(344)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(348)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(352)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(356)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(360)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(364)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(368)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(372)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(376)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(380)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(384)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(400));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08968FC4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-176));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (49024u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[31]);
    ctx.gpr[31] = (0x0896903Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x0896903Cu) goto L_0896903C;
    return;
L_0896903C:
    ctx.gpr[4] = (0u | 10u);
    ctx.gpr[31] = (0x08969048u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x08969048u) goto L_08969048;
    return;
L_08969048:
    ctx.gpr[4] = (0u | 11u);
    ctx.gpr[31] = (0x08969054u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x08969054u) goto L_08969054;
    return;
L_08969054:
    ctx.gpr[4] = (0u | 14u);
    ctx.gpr[31] = (0x08969060u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x08969060u) goto L_08969060;
    return;
L_08969060:
    ctx.gpr[4] = (0u | 9u);
    ctx.gpr[31] = (0x0896906Cu);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x0896906Cu) goto L_0896906C;
    return;
L_0896906C:
    ctx.gpr[4] = (0u | 7u);
    ctx.gpr[31] = (0x08969078u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x08969078u) goto L_08969078;
    return;
L_08969078:
    ctx.gpr[4] = (0u | 6u);
    ctx.gpr[31] = (0x08969084u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x08969084u) goto L_08969084;
    return;
L_08969084:
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[31] = (0x08969090u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x08969090u) goto L_08969090;
    return;
L_08969090:
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[31] = (0x0896909Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x0896909Cu) goto L_0896909C;
    return;
L_0896909C:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27340)));
    ctx.gpr[5] = (2229u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(27344)));
    ctx.fpr[26] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[5] = (15112u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] | 34953u);
    ctx.gpr[4] = (15216u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] | 61681u);
    ctx.fpr[24] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[5] = (16329u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] | 4059u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[23] = (ctx.gpr[29] | 0u);
    ctx.gpr[4] = (16576u << 16u);
    ctx.gpr[16] = (2277u << 16u);
    { const float fs = ctx.fpr[26]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[26] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[26] = fs * ft; }
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    ctx.gpr[30] = (0u | 0u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[22] = (ctx.gpr[23] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-15264));
    goto L_0896910C;
L_0896910C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08969128u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 757u, 0x08967860u>(ctx, &aot_mem) && ctx.pc == 0x08969128u) goto L_08969128;
    return;
L_08969128:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[18] = (ctx.gpr[29] | 0u);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[17] = (ctx.gpr[18] + static_cast<std::uint32_t>(56));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_0896914C;
L_0896914C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[20];
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
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::cos(vfpu_s[i] * 1.57079632679489661923f);
      ctx.write_vfpu_vector_with_destination_prefix_ct<1u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<1u>());
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(16)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(20)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089691B8u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 757u, 0x08967860u>(ctx, &aot_mem) && ctx.pc == 0x089691B8u) goto L_089691B8;
    return;
L_089691B8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(56)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(60)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(8));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_0896914C;
      }
      goto L_089691E4;
    }
L_089691E4:
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[31] = (0x089691F0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 926u, 0x08AD3D10u>(ctx, &aot_mem) && ctx.pc == 0x089691F0u) goto L_089691F0;
    return;
L_089691F0:
    ctx.gpr[4] = (0u | 5u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08969200u);
    ctx.gpr[6] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 3u, 0x08868074u>(ctx, &aot_mem) && ctx.pc == 0x08969200u) goto L_08969200;
    return;
L_08969200:
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(1));
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(8));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[30]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_0896910C;
      }
      goto L_08969214;
    }
L_08969214:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08969254:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[16]);
    ctx.gpr[16] = (2233u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[5] = (50944u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(257));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4912)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[31]);
    ctx.gpr[31] = (0x089692A8u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-4912), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 505u, 0x08986FE4u>(ctx, &aot_mem) && ctx.pc == 0x089692A8u) goto L_089692A8;
    return;
L_089692A8:
    ctx.gpr[31] = (0x089692B0u);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 508u, 0x08987008u>(ctx, &aot_mem) && ctx.pc == 0x089692B0u) goto L_089692B0;
    return;
L_089692B0:
    ctx.gpr[31] = (0x089692B8u);
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 505u, 0x08986FE4u>(ctx, &aot_mem) && ctx.pc == 0x089692B8u) goto L_089692B8;
    return;
L_089692B8:
    ctx.gpr[31] = (0x089692C0u);
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 497u, 0x08986F84u>(ctx, &aot_mem) && ctx.pc == 0x089692C0u) goto L_089692C0;
    return;
L_089692C0:
    ctx.gpr[31] = (0x089692C8u);
    ctx.fpr[24] = ctx.fpr[24] + ctx.fpr[0];
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 508u, 0x08987008u>(ctx, &aot_mem) && ctx.pc == 0x089692C8u) goto L_089692C8;
    return;
L_089692C8:
    ctx.gpr[31] = (0x089692D0u);
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 501u, 0x08986FB4u>(ctx, &aot_mem) && ctx.pc == 0x089692D0u) goto L_089692D0;
    return;
L_089692D0:
    ctx.fpr[15] = ctx.fpr[26] + ctx.fpr[0];
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x089692E8u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 133u, 0x089FD378u>(ctx, &aot_mem) && ctx.pc == 0x089692E8u) goto L_089692E8;
    return;
L_089692E8:
    ctx.gpr[31] = (0x089692F0u);
    // nop
    goto L_08968FC4;
L_089692F0:
    ctx.gpr[4] = (2231u << 16u);
    ctx.gpr[5] = (17658u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7656)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (17402u << 16u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[15] = ctx.fpr[12] / ctx.fpr[14];
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7656));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = ctx.fpr[16] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[15] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<3u>(ctx.fpr[15]));
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    ctx.gpr[4] = (16608u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[15]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    ctx.gpr[17] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<2u>(ctx.fpr[12]));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[18] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08969360u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_08968B1C;
L_08969360:
    ctx.gpr[4] = (0u | 14u);
    ctx.gpr[31] = (0x0896936Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x0896936Cu) goto L_0896936C;
    return;
L_0896936C:
    ctx.gpr[4] = (0u | 10u);
    ctx.gpr[31] = (0x08969378u);
    ctx.gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x08969378u) goto L_08969378;
    return;
L_08969378:
    ctx.gpr[4] = (0u | 11u);
    ctx.gpr[31] = (0x08969384u);
    ctx.gpr[5] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x08969384u) goto L_08969384;
    return;
L_08969384:
    ctx.gpr[4] = (0u | 9u);
    ctx.gpr[31] = (0x08969390u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x08969390u) goto L_08969390;
    return;
L_08969390:
    ctx.gpr[4] = (0u | 7u);
    ctx.gpr[31] = (0x0896939Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x0896939Cu) goto L_0896939C;
    return;
L_0896939C:
    ctx.gpr[4] = (0u | 6u);
    ctx.gpr[31] = (0x089693A8u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x089693A8u) goto L_089693A8;
    return;
L_089693A8:
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[31] = (0x089693B4u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x089693B4u) goto L_089693B4;
    return;
L_089693B4:
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[31] = (0x089693C0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x089693C0u) goto L_089693C0;
    return;
L_089693C0:
    ctx.gpr[4] = (0u | 2u);
    ctx.gpr[31] = (0x089693CCu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x089693CCu) goto L_089693CC;
    return;
L_089693CC:
    ctx.gpr[4] = (0u | 5u);
    ctx.gpr[31] = (0x089693D8u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x089693D8u) goto L_089693D8;
    return;
L_089693D8:
    ctx.gpr[19] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    ctx.gpr[20] = (ctx.gpr[18] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089693ECu);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    goto L_08968CB8;
L_089693EC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089693F8u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    goto L_08968CB8;
L_089693F8:
    ctx.gpr[21] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08969408u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    goto L_08968CB8;
L_08969408:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08969414u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_08968CB8;
L_08969414:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08969420u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_08968CB8;
L_08969420:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x0896942Cu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_08968CB8;
L_0896942C:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0896943Cu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_08968CB8;
L_0896943C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08969448u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_08968CB8;
L_08969448:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08969454u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_08968CB8;
L_08969454:
    ctx.gpr[4] = (0u | 6u);
    ctx.gpr[31] = (0x08969460u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x08969460u) goto L_08969460;
    return;
L_08969460:
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[31] = (0x0896946Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x0896946Cu) goto L_0896946C;
    return;
L_0896946C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[4] = (50944u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-4912), ctx.gpr[4]);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089694B8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    ctx.gpr[31] = (0x089694E4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28072));
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 541u, 0x08966528u>(ctx, &aot_mem) && ctx.pc == 0x089694E4u) goto L_089694E4;
    return;
L_089694E4:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089694F8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5992));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 138u, 0x088A87D4u>(ctx, &aot_mem) && ctx.pc == 0x089694F8u) goto L_089694F8;
    return;
L_089694F8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08969514;
      }
      goto L_08969504;
    }
L_08969504:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08969528;
      }
      goto L_0896950C;
    }
L_0896950C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089695BC;
      }
      goto L_08969514;
    }
L_08969514:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x08969520u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28048));
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 541u, 0x08966528u>(ctx, &aot_mem) && ctx.pc == 0x08969520u) goto L_08969520;
    return;
L_08969520:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089695C0;
      }
      goto L_08969528;
    }
L_08969528:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(112)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089695BC;
      }
      goto L_08969534;
    }
L_08969534:
    ctx.gpr[31] = (0x0896953Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08969A44;
L_0896953C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089695B0;
      }
      goto L_08969544;
    }
L_08969544:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6200)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 12u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
    ctx.gpr[31] = (0x08969564u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 660u, 0x08AA3170u>(ctx, &aot_mem) && ctx.pc == 0x08969564u) goto L_08969564;
    return;
L_08969564:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08969588;
      }
      goto L_08969574;
    }
L_08969574:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
    ctx.gpr[31] = (0x08969580u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 362u, 0x08AF9910u>(ctx, &aot_mem) && ctx.pc == 0x08969580u) goto L_08969580;
    return;
L_08969580:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08969588;
L_08969588:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    if (ctx.gpr[6] != 0u) {
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
        goto L_08969594;
    }
    goto L_08969594;
L_08969594:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    goto L_089695B0;
L_089695B0:
    ctx.gpr[2] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(327), static_cast<std::uint8_t>(ctx.gpr[2]));
      if (branch_taken) {
          goto L_089695C0;
      }
      goto L_089695BC;
    }
L_089695BC:
    ctx.gpr[2] = (0u | 0u);
    goto L_089695C0;
L_089695C0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089695D4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[31]);
    ctx.gpr[31] = (0x08969610u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5992));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 138u, 0x088A87D4u>(ctx, &aot_mem) && ctx.pc == 0x08969610u) goto L_08969610;
    return;
L_08969610:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (2230u << 16u);
      if (branch_taken) {
          goto L_08969624;
      }
      goto L_0896961C;
    }
L_0896961C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(112)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(327), static_cast<std::uint8_t>(0u));
    goto L_08969624;
L_08969624:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-6200)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (ctx.gpr[19] ^ ctx.gpr[4]);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(52));
      if (branch_taken) {
          goto L_08969730;
      }
      goto L_08969654;
    }
L_08969654:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(336)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[6]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(3))))));
    if (ctx.gpr[16] != ctx.gpr[6]) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
        goto L_08969714;
    }
    goto L_08969678;
L_08969678:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    if (ctx.gpr[17] != ctx.gpr[5]) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
        goto L_08969714;
    }
    goto L_08969684;
L_08969684:
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(8));
    ctx.gpr[5] = (ctx.gpr[21] ^ ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08969710;
      }
      goto L_089696A4;
    }
L_089696A4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[21]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
        goto L_089696EC;
    }
    goto L_089696C0;
L_089696C0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[21]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[21]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
      if (branch_taken) {
          goto L_089696E4;
      }
      goto L_089696DC;
    }
L_089696DC:
    ctx.gpr[31] = (0x089696E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 668u, 0x08AA3200u>(ctx, &aot_mem) && ctx.pc == 0x089696E4u) goto L_089696E4;
    return;
L_089696E4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[21]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    goto L_089696EC;
L_089696EC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[21] ^ ctx.gpr[5]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089696A4;
      }
      goto L_0896970C;
    }
L_0896970C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-6200)));
    goto L_08969710;
L_08969710:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    goto L_08969714;
L_08969714:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (ctx.gpr[19] ^ ctx.gpr[4]);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08969654;
      }
      goto L_08969730;
    }
L_08969730:
    ctx.gpr[2] = (0u | 0u);
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
L_08969758:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-176));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27772)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[21] = (2230u << 16u);
      if (branch_taken) {
          goto L_08969A04;
      }
      goto L_089697A4;
    }
L_089697A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-6200)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[5] ^ ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089697F8;
      }
      goto L_089697C0;
    }
L_089697C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-6200)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[5] ^ ctx.gpr[4]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2224u << 16u);
      if (branch_taken) {
          goto L_08969800;
      }
      goto L_089697F0;
    }
L_089697F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08969A04;
      }
      goto L_089697F8;
    }
L_089697F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08969A04;
      }
      goto L_08969800;
    }
L_08969800:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-24108));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[4]);
    ctx.fpr[26] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (15948u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[19] = (2232u << 16u);
    ctx.gpr[4] = (16416u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[4] = (16384u << 16u);
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(100));
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[22] = (0u | 5u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(5992));
    ctx.gpr[23] = (2230u << 16u);
    goto L_08969840;
L_08969840:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[31] = (0x0896985Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 83u, 0x088A848Cu>(ctx, &aot_mem) && ctx.pc == 0x0896985Cu) goto L_0896985C;
    return;
L_0896985C:
    ctx.gpr[4] = (0u | 2u);
    if (ctx.gpr[2] != ctx.gpr[4]) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(88))))));
        goto L_0896988C;
    }
    goto L_08969868;
L_08969868:
    ctx.gpr[31] = (0x08969870u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 87u, 0x088A84ACu>(ctx, &aot_mem) && ctx.pc == 0x08969870u) goto L_08969870;
    return;
L_08969870:
    ctx.gpr[4] = (0u | 1u);
    if (ctx.gpr[2] != ctx.gpr[4]) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(88))))));
        goto L_0896988C;
    }
    goto L_0896987C;
L_0896987C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[22];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089698D8;
      }
      goto L_0896988C;
    }
L_0896988C:
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[5] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[22];
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089698D8;
L_089698D8:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28512)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(336)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_08969914;
      }
      goto L_089698F0;
    }
L_089698F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x0896990Cu);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0896990Cu) goto L_0896990C;
    return;
L_0896990C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896991C;
      }
      goto L_08969914;
    }
L_08969914:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_0896991C;
      }
      goto L_0896991C;
    }
L_0896991C:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896998C;
      }
      goto L_08969924;
    }
L_08969924:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
        goto L_08969950;
    }
    goto L_08969930;
L_08969930:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08969940u);
    ctx.gpr[6] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 206u, 0x08AC5834u>(ctx, &aot_mem) && ctx.pc == 0x08969940u) goto L_08969940;
    return;
L_08969940:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    goto L_08969950;
L_08969950:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(204))))));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896998C;
      }
      goto L_08969968;
    }
L_08969968:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (ctx.gpr[5] ^ ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896998C;
      }
      goto L_08969988;
    }
L_08969988:
    ctx.gpr[18] = (0u | 0u);
    goto L_0896998C;
L_0896998C:
    if (ctx.gpr[18] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
        goto L_089699D8;
    }
    goto L_08969994;
L_08969994:
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(97)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(98)));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(-6204)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[11] = (0u | 1024u);
    ctx.gpr[31] = (0x089699D4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 118u, 0x088299B8u>(ctx, &aot_mem) && ctx.pc == 0x089699D4u) goto L_089699D4;
    return;
L_089699D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    goto L_089699D8;
L_089699D8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-6200)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08969840;
      }
      goto L_08969A04;
    }
L_08969A04:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
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
L_08969A44:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-6200)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (ctx.gpr[5] ^ ctx.gpr[6]);
    ctx.gpr[7] = (0u < ctx.gpr[7] ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08969AAC;
      }
      goto L_08969A78;
    }
L_08969A78:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08969AB4;
      }
      goto L_08969A84;
    }
L_08969A84:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (ctx.gpr[5] ^ ctx.gpr[6]);
    ctx.gpr[7] = (0u < ctx.gpr[7] ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08969A78;
      }
      goto L_08969AAC;
    }
L_08969AAC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08969AB8;
      }
      goto L_08969AB4;
    }
L_08969AB4:
    ctx.gpr[2] = (0u | 1u);
    goto L_08969AB8;
L_08969AB8:
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08969AC0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] << 6u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[19] = (2277u << 16u);
    ctx.gpr[18] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-21984));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[18] + ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u | 5u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08969B24;
      }
      goto L_08969B14;
    }
L_08969B14:
    ctx.gpr[31] = (0x08969B1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 30u, 0x089581F0u>(ctx, &aot_mem) && ctx.pc == 0x08969B1Cu) goto L_08969B1C;
    return;
L_08969B1C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08969F5C;
      }
      goto L_08969B24;
    }
L_08969B24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08969B30u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(50)));
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 791u, 0x08967D20u>(ctx, &aot_mem) && ctx.pc == 0x08969B30u) goto L_08969B30;
    return;
L_08969B30:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(62))))));
    ctx.gpr[20] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[20];
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08969B50;
      }
      goto L_08969B40;
    }
L_08969B40:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(62))))));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08969BBC;
      }
      goto L_08969B50;
    }
L_08969B50:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-6996)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08969BBC;
      }
      goto L_08969B60;
    }
L_08969B60:
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.gpr[31] = (0x08969B80u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 434u, 0x0896E088u>(ctx, &aot_mem) && ctx.pc == 0x08969B80u) goto L_08969B80;
    return;
L_08969B80:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08969BBC;
      }
      goto L_08969BB0;
    }
L_08969BB0:
    ctx.gpr[4] = (16544u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08969BBC;
L_08969BBC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(62))))));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_08969BD8;
      }
      goto L_08969BC8;
    }
L_08969BC8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(62))))));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08969F5C;
      }
      goto L_08969BD8;
    }
L_08969BD8:
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(12));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[31] = (0x08969BF0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 780u, 0x08967B20u>(ctx, &aot_mem) && ctx.pc == 0x08969BF0u) goto L_08969BF0;
    return;
L_08969BF0:
    ctx.gpr[31] = (0x08969BF8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 723u, 0x089674CCu>(ctx, &aot_mem) && ctx.pc == 0x08969BF8u) goto L_08969BF8;
    return;
L_08969BF8:
    ctx.gpr[31] = (0x08969C00u);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08969C00u) goto L_08969C00;
    return;
L_08969C00:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08969CA8;
      }
      goto L_08969C08;
    }
L_08969C08:
    ctx.gpr[31] = (0x08969C10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08969C10u) goto L_08969C10;
    return;
L_08969C10:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(48));
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
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[13];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[15] = ctx.fpr[15] - ctx.fpr[16];
    ctx.gpr[31] = (0x08969C4Cu);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 234u, 0x08A1D254u>(ctx, &aot_mem) && ctx.pc == 0x08969C4Cu) goto L_08969C4C;
    return;
L_08969C4C:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (49962u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (17194u << 16u);
      if (branch_taken) {
          goto L_08969C8C;
      }
      goto L_08969C68;
    }
L_08969C68:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08969C8C;
      }
      goto L_08969C7C;
    }
L_08969C7C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(64))))));
    ctx.gpr[5] = (0u | 49u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08969C94;
      }
      goto L_08969C8C;
    }
L_08969C8C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 255u);
      if (branch_taken) {
          goto L_08969CA0;
      }
      goto L_08969C94;
    }
L_08969C94:
    ctx.gpr[31] = (0x08969C9Cu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 729u, 0x0896755Cu>(ctx, &aot_mem) && ctx.pc == 0x08969C9Cu) goto L_08969C9C;
    return;
L_08969C9C:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    goto L_08969CA0;
L_08969CA0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08969CB4;
      }
      goto L_08969CA8;
    }
L_08969CA8:
    ctx.gpr[31] = (0x08969CB0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 729u, 0x0896755Cu>(ctx, &aot_mem) && ctx.pc == 0x08969CB0u) goto L_08969CB0;
    return;
L_08969CB0:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    goto L_08969CB4;
L_08969CB4:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.gpr[31] = (0x08969CC0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 757u, 0x08967860u>(ctx, &aot_mem) && ctx.pc == 0x08969CC0u) goto L_08969CC0;
    return;
L_08969CC0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (16256u << 16u);
      if (branch_taken) {
          goto L_08969CF0;
      }
      goto L_08969CCC;
    }
L_08969CCC:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (2233u << 16u);
      if (branch_taken) {
          goto L_08969CF0;
      }
      goto L_08969CE0;
    }
L_08969CE0:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4576));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(320)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08969F5C;
      }
      goto L_08969CF0;
    }
L_08969CF0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(64))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (2229u << 16u);
      if (branch_taken) {
          goto L_08969EE4;
      }
      goto L_08969CFC;
    }
L_08969CFC:
    ctx.gpr[20] = (ctx.gpr[17] | 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (0x08969D0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 205u, 0x089D5974u>(ctx, &aot_mem) && ctx.pc == 0x08969D0Cu) goto L_08969D0C;
    return;
L_08969D0C:
    { const std::uint32_t vfpu_address = ctx.gpr[2] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[20] - ctx.fpr[13];
    ctx.gpr[17] = (ctx.gpr[20] >> 24u);
    ctx.gpr[17] = (ctx.gpr[17] & 255u);
    ctx.gpr[19] = (ctx.gpr[20] >> 16u);
    ctx.gpr[19] = (ctx.gpr[19] & 255u);
    ctx.gpr[20] = (ctx.gpr[20] >> 8u);
    ctx.gpr[21] = (ctx.gpr[20] & 255u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[22] = (2230u << 16u);
      if (branch_taken) {
          goto L_08969D68;
      }
      goto L_08969D50;
    }
L_08969D50:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(27772)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08969DB0;
      }
      goto L_08969D5C;
    }
L_08969D5C:
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint16_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08969DB0;
      }
      goto L_08969D68;
    }
L_08969D68:
    ctx.gpr[4] = (16512u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[20] + ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08969D9C;
      }
      goto L_08969D84;
    }
L_08969D84:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(27772)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08969DB0;
      }
      goto L_08969D90;
    }
L_08969D90:
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint16_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08969DB0;
      }
      goto L_08969D9C;
    }
L_08969D9C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(27772)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 2u);
      if (branch_taken) {
          goto L_08969DB0;
      }
      goto L_08969DA8;
    }
L_08969DA8:
    ctx.gpr[5] = (0u | 2u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint16_t>(ctx.gpr[5]));
    goto L_08969DB0;
L_08969DB0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[9] = (ctx.gpr[4] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(60))))));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(-6204)));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08969DD4u);
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 336u, 0x0896D8ACu>(ctx, &aot_mem) && ctx.pc == 0x08969DD4u) goto L_08969DD4;
    return;
L_08969DD4:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4576));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(320)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08969EDC;
      }
      goto L_08969DE8;
    }
L_08969DE8:
    ctx.gpr[16] = (2277u << 16u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-15872));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[18] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[23] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    goto L_08969E00;
L_08969E00:
    ctx.gpr[6] = (ctx.gpr[5] << 3u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[16]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[18];
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[23]);
      if (branch_taken) {
          goto L_08969E3C;
      }
      goto L_08969E14;
    }
L_08969E14:
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(1)));
    ctx.gpr[7] = (ctx.gpr[7] << 16u);
    ctx.gpr[8] = (ctx.gpr[8] << 8u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(2)));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08969E3C;
      }
      goto L_08969E38;
    }
L_08969E38:
    ctx.gpr[4] = (0u | 1u);
    goto L_08969E3C;
L_08969E3C:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 75 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08969E00;
      }
      goto L_08969E50;
    }
L_08969E50:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08969EDC;
      }
      goto L_08969E58;
    }
L_08969E58:
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(-6204)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08969E70u);
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x08969E70u) goto L_08969E70;
    return;
L_08969E70:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-6216), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6216));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2)));
    ctx.gpr[7] = (2228u << 16u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3)));
    ctx.gpr[8] = (aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(-27980)));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[8] << 3u);
    ctx.gpr[8] = (ctx.gpr[4] + ctx.gpr[16]);
    aot_mem.aot_store16(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[18]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-6216)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[23]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(1)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(2)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(3)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(-27980)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[7] + static_cast<std::uint32_t>(-27980), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_08969EDC;
L_08969EDC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08969F5C;
      }
      goto L_08969EE4;
    }
L_08969EE4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(27772)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08969F00;
      }
      goto L_08969EF0;
    }
L_08969EF0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(64))))));
    ctx.gpr[5] = (0u | 49u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08969F38;
      }
      goto L_08969F00;
    }
L_08969F00:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(64))))));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[6] = (ctx.gpr[17] >> 24u);
    ctx.gpr[7] = (ctx.gpr[17] >> 16u);
    ctx.gpr[8] = (ctx.gpr[17] >> 8u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    ctx.gpr[31] = (0x08969F30u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    goto L_089687C0;
L_08969F30:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08969F5C;
      }
      goto L_08969F38;
    }
L_08969F38:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(64))))));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[31] = (0x08969F5Cu);
    ctx.gpr[8] = (0u | 255u);
    goto L_089687C0;
L_08969F5C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08969F8C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-176));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] << 6u);
    ctx.gpr[5] = (ctx.gpr[16] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2277u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21984));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[17]);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[5] = (0u | 6u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_0896A0AC;
      }
      goto L_08969FD8;
    }
L_08969FD8:
    ctx.gpr[5] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 2u);
      if (branch_taken) {
          goto L_0896A07C;
      }
      goto L_08969FE4;
    }
L_08969FE4:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_0896A020;
      }
      goto L_08969FEC;
    }
L_08969FEC:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (ctx.gpr[16] << 6u);
      if (branch_taken) {
          goto L_0896A16C;
      }
      goto L_08969FF4;
    }
L_08969FF4:
    ctx.gpr[5] = (ctx.gpr[16] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2277u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21984));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x0896A018u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 829u, 0x08AFB924u>(ctx, &aot_mem) && ctx.pc == 0x0896A018u) goto L_0896A018;
    return;
L_0896A018:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_0896A16C;
      }
      goto L_0896A020;
    }
L_0896A020:
    ctx.gpr[4] = (ctx.gpr[16] << 6u);
    ctx.gpr[5] = (ctx.gpr[16] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2277u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21984));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x0896A048u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x0896A048u) goto L_0896A048;
    return;
L_0896A048:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896A070;
      }
      goto L_0896A054;
    }
L_0896A054:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896A068;
      }
      goto L_0896A060;
    }
L_0896A060:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1332)));
      if (branch_taken) {
          goto L_0896A074;
      }
      goto L_0896A068;
    }
L_0896A068:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896A074;
      }
      goto L_0896A070;
    }
L_0896A070:
    ctx.gpr[17] = (0u | 0u);
    goto L_0896A074;
L_0896A074:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896A16C;
      }
      goto L_0896A07C;
    }
L_0896A07C:
    ctx.gpr[4] = (ctx.gpr[16] << 6u);
    ctx.gpr[5] = (ctx.gpr[16] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2277u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21984));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x0896A0A4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15028)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 825u, 0x08AFB8DCu>(ctx, &aot_mem) && ctx.pc == 0x0896A0A4u) goto L_0896A0A4;
    return;
L_0896A0A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_0896A16C;
      }
      goto L_0896A0AC;
    }
L_0896A0AC:
    ctx.gpr[4] = (ctx.gpr[16] << 6u);
    ctx.gpr[5] = (ctx.gpr[16] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2277u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21984));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 16u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5992));
    ctx.gpr[31] = (0x0896A0DCu);
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 138u, 0x088A87D4u>(ctx, &aot_mem) && ctx.pc == 0x0896A0DCu) goto L_0896A0DC;
    return;
L_0896A0DC:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896A16C;
      }
      goto L_0896A0E8;
    }
L_0896A0E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[5]);
    ctx.gpr[5] = (2224u << 16u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0896A108u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(11360));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0896A108u) goto L_0896A108;
    return;
L_0896A108:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896A12C;
      }
      goto L_0896A110;
    }
L_0896A110:
    ctx.gpr[31] = (0x0896A118u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 111u, 0x08A34AF8u>(ctx, &aot_mem) && ctx.pc == 0x0896A118u) goto L_0896A118;
    return;
L_0896A118:
    { const std::uint32_t vfpu_address = ctx.gpr[2] + static_cast<std::uint32_t>(0);
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
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896A168;
      }
      goto L_0896A12C;
    }
L_0896A12C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(96)));
        goto L_0896A158;
    }
    goto L_0896A138;
L_0896A138:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(132));
    ctx.gpr[31] = (0x0896A148u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 206u, 0x08AC5834u>(ctx, &aot_mem) && ctx.pc == 0x0896A148u) goto L_0896A148;
    return;
L_0896A148:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(96)));
    goto L_0896A158;
L_0896A158:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(64));
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
    goto L_0896A168;
L_0896A168:
    ctx.gpr[18] = (0u | 1u);
    goto L_0896A16C;
L_0896A16C:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896A188;
      }
      goto L_0896A174;
    }
L_0896A174:
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
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
    goto L_0896A188;
L_0896A188:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896A7B0;
      }
      goto L_0896A190;
    }
L_0896A190:
    ctx.gpr[4] = (ctx.gpr[16] << 6u);
    ctx.gpr[5] = (ctx.gpr[16] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2277u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21984));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0896A2B8;
      }
      goto L_0896A1B8;
    }
L_0896A1B8:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5992));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] << 6u);
      if (branch_taken) {
          goto L_0896A260;
      }
      goto L_0896A1D8;
    }
L_0896A1D8:
    ctx.gpr[4] = (ctx.gpr[16] << 6u);
    ctx.gpr[5] = (ctx.gpr[16] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2277u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21984));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 16u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5992));
    ctx.gpr[31] = (0x0896A208u);
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 138u, 0x088A87D4u>(ctx, &aot_mem) && ctx.pc == 0x0896A208u) goto L_0896A208;
    return;
L_0896A208:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896A254;
      }
      goto L_0896A214;
    }
L_0896A214:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5992));
    ctx.gpr[31] = (0x0896A228u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 102u, 0x088A8548u>(ctx, &aot_mem) && ctx.pc == 0x0896A228u) goto L_0896A228;
    return;
L_0896A228:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1)));
    ctx.gpr[4] = (ctx.gpr[4] << 24u);
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] << 8u);
    ctx.gpr[17] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[4] + ctx.gpr[17]);
      if (branch_taken) {
          goto L_0896A258;
      }
      goto L_0896A254;
    }
L_0896A254:
    ctx.gpr[17] = (0u | 0u);
    goto L_0896A258;
L_0896A258:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896A2E0;
      }
      goto L_0896A260;
    }
L_0896A260:
    ctx.gpr[5] = (ctx.gpr[16] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2277u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21984));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5992));
    ctx.gpr[31] = (0x0896A28Cu);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 113u, 0x088A85F0u>(ctx, &aot_mem) && ctx.pc == 0x0896A28Cu) goto L_0896A28C;
    return;
L_0896A28C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1)));
    ctx.gpr[4] = (ctx.gpr[4] << 24u);
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] << 8u);
    ctx.gpr[17] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[4] + ctx.gpr[17]);
      if (branch_taken) {
          goto L_0896A2E0;
      }
      goto L_0896A2B8;
    }
L_0896A2B8:
    ctx.gpr[4] = (ctx.gpr[16] << 6u);
    ctx.gpr[5] = (ctx.gpr[16] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2277u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21984));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(50)));
    ctx.gpr[31] = (0x0896A2DCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 791u, 0x08967D20u>(ctx, &aot_mem) && ctx.pc == 0x0896A2DCu) goto L_0896A2DC;
    return;
L_0896A2DC:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    goto L_0896A2E0;
L_0896A2E0:
    ctx.gpr[4] = (ctx.gpr[16] << 6u);
    ctx.gpr[5] = (ctx.gpr[16] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2277u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21984));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(62))))));
    ctx.gpr[5] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (ctx.gpr[16] << 6u);
      if (branch_taken) {
          goto L_0896A32C;
      }
      goto L_0896A308;
    }
L_0896A308:
    ctx.gpr[5] = (ctx.gpr[16] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2277u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21984));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(62))))));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0896A3C0;
      }
      goto L_0896A32C;
    }
L_0896A32C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-6996)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896A3C0;
      }
      goto L_0896A33C;
    }
L_0896A33C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
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
    ctx.gpr[5] = (ctx.gpr[16] << 6u);
    ctx.gpr[6] = (ctx.gpr[16] << 4u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (2277u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-21984));
    ctx.gpr[18] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(56)));
    ctx.gpr[31] = (0x0896A370u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 434u, 0x0896E088u>(ctx, &aot_mem) && ctx.pc == 0x0896A370u) goto L_0896A370;
    return;
L_0896A370:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(56)));
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (ctx.gpr[16] << 6u);
      if (branch_taken) {
          goto L_0896A3C0;
      }
      goto L_0896A3A0;
    }
L_0896A3A0:
    ctx.gpr[5] = (ctx.gpr[16] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2277u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21984));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (16544u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0896A3C0;
L_0896A3C0:
    ctx.gpr[4] = (ctx.gpr[16] << 6u);
    ctx.gpr[5] = (ctx.gpr[16] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2277u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21984));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(62))))));
    ctx.gpr[5] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (ctx.gpr[16] << 6u);
      if (branch_taken) {
          goto L_0896A40C;
      }
      goto L_0896A3E8;
    }
L_0896A3E8:
    ctx.gpr[5] = (ctx.gpr[16] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2277u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21984));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(62))))));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0896A7B0;
      }
      goto L_0896A40C;
    }
L_0896A40C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[6]);
    ctx.gpr[31] = (0x0896A454u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 780u, 0x08967B20u>(ctx, &aot_mem) && ctx.pc == 0x0896A454u) goto L_0896A454;
    return;
L_0896A454:
    ctx.gpr[31] = (0x0896A45Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 723u, 0x089674CCu>(ctx, &aot_mem) && ctx.pc == 0x0896A45Cu) goto L_0896A45C;
    return;
L_0896A45C:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x0896A468u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 729u, 0x0896755Cu>(ctx, &aot_mem) && ctx.pc == 0x0896A468u) goto L_0896A468;
    return;
L_0896A468:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.gpr[31] = (0x0896A478u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 757u, 0x08967860u>(ctx, &aot_mem) && ctx.pc == 0x0896A478u) goto L_0896A478;
    return;
L_0896A478:
    ctx.gpr[4] = (ctx.gpr[16] << 6u);
    ctx.gpr[5] = (ctx.gpr[16] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2277u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21984));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (16256u << 16u);
      if (branch_taken) {
          goto L_0896A4C0;
      }
      goto L_0896A49C;
    }
L_0896A49C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (2233u << 16u);
      if (branch_taken) {
          goto L_0896A4C0;
      }
      goto L_0896A4B0;
    }
L_0896A4B0:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4576));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(320)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896A7B0;
      }
      goto L_0896A4C0;
    }
L_0896A4C0:
    ctx.gpr[4] = (ctx.gpr[16] << 6u);
    ctx.gpr[5] = (ctx.gpr[16] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2277u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21984));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(64))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896A6F0;
      }
      goto L_0896A4E4;
    }
L_0896A4E4:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
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
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[31] = (0x0896A500u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 205u, 0x089D5974u>(ctx, &aot_mem) && ctx.pc == 0x0896A500u) goto L_0896A500;
    return;
L_0896A500:
    { const std::uint32_t vfpu_address = ctx.gpr[2] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[20] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0896A534;
      }
      goto L_0896A52C;
    }
L_0896A52C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0896A55C;
      }
      goto L_0896A534;
    }
L_0896A534:
    ctx.gpr[4] = (16512u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[20] + ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0896A558;
      }
      goto L_0896A550;
    }
L_0896A550:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_0896A55C;
      }
      goto L_0896A558;
    }
L_0896A558:
    ctx.gpr[4] = (0u | 2u);
    goto L_0896A55C;
L_0896A55C:
    ctx.gpr[9] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] << 6u);
    ctx.gpr[5] = (ctx.gpr[16] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2277u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21984));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(60))))));
    ctx.gpr[5] = (ctx.gpr[17] >> 24u);
    ctx.gpr[6] = (ctx.gpr[17] >> 16u);
    ctx.gpr[7] = (ctx.gpr[17] >> 8u);
    ctx.gpr[8] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    ctx.gpr[31] = (0x0896A5A8u);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(-6204)));
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 336u, 0x0896D8ACu>(ctx, &aot_mem) && ctx.pc == 0x0896A5A8u) goto L_0896A5A8;
    return;
L_0896A5A8:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4576));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(320)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896A6E8;
      }
      goto L_0896A5BC;
    }
L_0896A5BC:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 75 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0896A63C;
      }
      goto L_0896A5CC;
    }
L_0896A5CC:
    ctx.gpr[7] = (2277u << 16u);
    ctx.gpr[6] = (ctx.gpr[5] << 3u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-15872));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-2));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    ctx.gpr[7] = (2277u << 16u);
      if (branch_taken) {
          goto L_0896A628;
      }
      goto L_0896A5EC;
    }
L_0896A5EC:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-15872));
    ctx.gpr[6] = (ctx.gpr[5] << 3u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(1)));
    ctx.gpr[8] = (ctx.gpr[8] << 16u);
    ctx.gpr[9] = (ctx.gpr[9] << 8u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(2)));
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[7] = (ctx.gpr[17] >> 8u);
    ctx.gpr[6] = (ctx.gpr[8] + ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0896A628;
      }
      goto L_0896A624;
    }
L_0896A624:
    ctx.gpr[4] = (0u | 1u);
    goto L_0896A628;
L_0896A628:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 75 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896A5CC;
      }
      goto L_0896A63C;
    }
L_0896A63C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896A6E8;
      }
      goto L_0896A644;
    }
L_0896A644:
    ctx.gpr[5] = (ctx.gpr[17] >> 24u);
    ctx.gpr[6] = (ctx.gpr[17] >> 16u);
    ctx.gpr[7] = (ctx.gpr[17] >> 8u);
    ctx.gpr[8] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(-6204)));
    ctx.gpr[31] = (0x0896A66Cu);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x0896A66Cu) goto L_0896A66C;
    return;
L_0896A66C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-6212), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6212));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2)));
    ctx.gpr[8] = (2228u << 16u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3)));
    ctx.gpr[9] = (aot_mem.aot_load16(ctx.gpr[8] + static_cast<std::uint32_t>(-27980)));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[9] << 3u);
    ctx.gpr[9] = (2277u << 16u);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(-15872));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[10] = (ctx.gpr[4] + ctx.gpr[9]);
    aot_mem.aot_store16(ctx.gpr[10] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[7] = (ctx.gpr[9] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-6212)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(1)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(2)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(3)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[8] + static_cast<std::uint32_t>(-27980)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[8] + static_cast<std::uint32_t>(-27980), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_0896A6E8;
L_0896A6E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896A7B0;
      }
      goto L_0896A6F0;
    }
L_0896A6F0:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27772)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] << 6u);
      if (branch_taken) {
          goto L_0896A72C;
      }
      goto L_0896A700;
    }
L_0896A700:
    ctx.gpr[4] = (ctx.gpr[16] << 6u);
    ctx.gpr[5] = (ctx.gpr[16] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2277u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21984));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(64))))));
    ctx.gpr[5] = (0u | 49u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (ctx.gpr[16] << 6u);
      if (branch_taken) {
          goto L_0896A778;
      }
      goto L_0896A728;
    }
L_0896A728:
    ctx.gpr[4] = (ctx.gpr[16] << 6u);
    goto L_0896A72C;
L_0896A72C:
    ctx.gpr[5] = (ctx.gpr[16] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2277u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21984));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(64))))));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[6] = (ctx.gpr[17] >> 24u);
    ctx.gpr[7] = (ctx.gpr[17] >> 16u);
    ctx.gpr[8] = (ctx.gpr[17] >> 8u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    ctx.gpr[31] = (0x0896A770u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_089687C0;
L_0896A770:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896A7B0;
      }
      goto L_0896A778;
    }
L_0896A778:
    ctx.gpr[5] = (ctx.gpr[16] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2277u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21984));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(64))))));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[31] = (0x0896A7B0u);
    ctx.gpr[8] = (0u | 255u);
    goto L_089687C0;
L_0896A7B0:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896A7D0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-160));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[18]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) < 0;
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_0896A908;
      }
      goto L_0896A81C;
    }
L_0896A81C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (0u | 49u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0896A86C;
      }
      goto L_0896A82C;
    }
L_0896A82C:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-6204)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(72));
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x0896A848u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x0896A848u) goto L_0896A848;
    return;
L_0896A848:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(53), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(54), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(55), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0896A8A8;
      }
      goto L_0896A86C;
    }
L_0896A86C:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-6204)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(76));
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[31] = (0x0896A888u);
    ctx.gpr[7] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x0896A888u) goto L_0896A888;
    return;
L_0896A888:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(53), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(54), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(55), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0896A8A8;
L_0896A8A8:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (2228u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-28484));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(12));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(12));
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[31] = (0x0896A8F0u);
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 133u, 0x089FD378u>(ctx, &aot_mem) && ctx.pc == 0x0896A8F0u) goto L_0896A8F0;
    return;
L_0896A8F0:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x0896A900u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 906u, 0x08AD3ABCu>(ctx, &aot_mem) && ctx.pc == 0x0896A900u) goto L_0896A900;
    return;
L_0896A900:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896AD0C;
      }
      goto L_0896A908;
    }
L_0896A908:
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(53), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(54), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(53)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(55), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[6] << 24u);
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(54)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] << 8u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(55)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[18] = (ctx.gpr[18] | 255u);
      if (branch_taken) {
          goto L_0896A98C;
      }
      goto L_0896A964;
    }
L_0896A964:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6220));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (18510u << 16u);
      if (branch_taken) {
          goto L_0896A98C;
      }
      goto L_0896A978;
    }
L_0896A978:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 32767u);
      if (branch_taken) {
          goto L_0896AD04;
      }
      goto L_0896A984;
    }
L_0896A984:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0896AD04;
      }
      goto L_0896A98C;
    }
L_0896A98C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_0896A9C0;
      }
      goto L_0896A99C;
    }
L_0896A99C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-6220)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (65352u << 16u);
      if (branch_taken) {
          goto L_0896A9C0;
      }
      goto L_0896A9A8;
    }
L_0896A9A8:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(19967));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[4];
    ctx.gpr[4] = (32512u << 16u);
      if (branch_taken) {
          goto L_0896AD04;
      }
      goto L_0896A9B4;
    }
L_0896A9B4:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(255));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0896AD04;
      }
      goto L_0896A9C0;
    }
L_0896A9C0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_0896A9E0;
      }
      goto L_0896A9D0;
    }
L_0896A9D0:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6220));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896AD04;
      }
      goto L_0896A9E0;
    }
L_0896A9E0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_0896AA18;
      }
      goto L_0896A9F0;
    }
L_0896A9F0:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6220));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (24480u << 16u);
      if (branch_taken) {
          goto L_0896AA18;
      }
      goto L_0896AA00;
    }
L_0896AA00:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(27391));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[4];
    ctx.gpr[4] = (127u << 16u);
      if (branch_taken) {
          goto L_0896AD04;
      }
      goto L_0896AA0C;
    }
L_0896AA0C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(255));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0896AD04;
      }
      goto L_0896AA18;
    }
L_0896AA18:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27580)));
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-27944)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(601) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896AA78;
      }
      goto L_0896AA38;
    }
L_0896AA38:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(27580)));
    ctx.gpr[6] = (2228u << 16u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-27944), ctx.gpr[5]);
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-27940)));
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0896AA68;
      }
      goto L_0896AA5C;
    }
L_0896AA5C:
    ctx.gpr[4] = (2228u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-27940), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_0896AA78;
      }
      goto L_0896AA68;
    }
L_0896AA68:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-27940)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-27940), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_0896AA78;
L_0896AA78:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-27940)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0896AA98;
      }
      goto L_0896AA88;
    }
L_0896AA88:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(14));
      if (branch_taken) {
          goto L_0896AB68;
      }
      goto L_0896AA90;
    }
L_0896AA90:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0896AD0C;
      }
      goto L_0896AA98;
    }
L_0896AA98:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_0896AC34;
      }
      goto L_0896AAA4;
    }
L_0896AAA4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896AA90;
      }
      goto L_0896AAAC;
    }
L_0896AAAC:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(12));
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(84));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(12));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.gpr[31] = (0x0896AAE8u);
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 133u, 0x089FD378u>(ctx, &aot_mem) && ctx.pc == 0x0896AAE8u) goto L_0896AAE8;
    return;
L_0896AAE8:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-6204)));
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x0896AB08u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x0896AB08u) goto L_0896AB08;
    return;
L_0896AB08:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0896AB18u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 935u, 0x08AD3DD0u>(ctx, &aot_mem) && ctx.pc == 0x0896AB18u) goto L_0896AB18;
    return;
L_0896AB18:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(5));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(11));
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(5));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(11));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.gpr[31] = (0x0896AB50u);
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 133u, 0x089FD378u>(ctx, &aot_mem) && ctx.pc == 0x0896AB50u) goto L_0896AB50;
    return;
L_0896AB50:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0896AB60u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 935u, 0x08AD3DD0u>(ctx, &aot_mem) && ctx.pc == 0x0896AB60u) goto L_0896AB60;
    return;
L_0896AB60:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896AA90;
      }
      goto L_0896AB68;
    }
L_0896AB68:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(2));
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(13));
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(8));
    ctx.fpr[22] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(2));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (2230u << 16u);
    ctx.fpr[24] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-6204)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[5] = (0u | 0u);
    ctx.fpr[26] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[6] = (0u | 0u);
    ctx.fpr[28] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[31] = (0x0896ABBCu);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x0896ABBCu) goto L_0896ABBC;
    return;
L_0896ABBC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[31] = (0x0896ABE4u);
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 949u, 0x08AD3E9Cu>(ctx, &aot_mem) && ctx.pc == 0x0896ABE4u) goto L_0896ABE4;
    return;
L_0896ABE4:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(12));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(12));
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.fpr[17] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[17])));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[31] = (0x0896AC2Cu);
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 949u, 0x08AD3E9Cu>(ctx, &aot_mem) && ctx.pc == 0x0896AC2Cu) goto L_0896AC2C;
    return;
L_0896AC2C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896AA90;
      }
      goto L_0896AC34;
    }
L_0896AC34:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(8));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(14));
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(14));
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(3));
    ctx.fpr[22] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(2));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (2230u << 16u);
    ctx.fpr[24] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-6204)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[5] = (0u | 0u);
    ctx.fpr[26] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[6] = (0u | 0u);
    ctx.fpr[28] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[31] = (0x0896AC8Cu);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x0896AC8Cu) goto L_0896AC8C;
    return;
L_0896AC8C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[31] = (0x0896ACB4u);
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 949u, 0x08AD3E9Cu>(ctx, &aot_mem) && ctx.pc == 0x0896ACB4u) goto L_0896ACB4;
    return;
L_0896ACB4:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(12));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(12));
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.fpr[17] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[17])));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[16] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[16])));
    ctx.fpr[18] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[18])));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[31] = (0x0896ACFCu);
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 949u, 0x08AD3E9Cu>(ctx, &aot_mem) && ctx.pc == 0x0896ACFCu) goto L_0896ACFC;
    return;
L_0896ACFC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896AA90;
      }
      goto L_0896AD04;
    }
L_0896AD04:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 28u, 0x0896C12Cu>(ctx, &aot_mem); return;
      }
      goto L_0896AD0C;
    }
L_0896AD0C:
    ctx.gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (ctx.gpr[19] + static_cast<std::uint32_t>(2));
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(64) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 25u, 0x0896C104u>(ctx, &aot_mem); return;
      }
      goto L_0896AD20;
    }
L_0896AD20:
    ctx.gpr[5] = (ctx.gpr[19] + static_cast<std::uint32_t>(2));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[5]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-27592)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896AD3C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_0896AD7C;
      }
      goto L_0896AD4C;
    }
L_0896AD4C:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x0896AD58u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x0896AD58u) goto L_0896AD58;
    return;
L_0896AD58:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896AD70;
      }
      goto L_0896AD64;
    }
L_0896AD64:
    ctx.gpr[31] = (0x0896AD6Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x0896AD6Cu) goto L_0896AD6C;
    return;
L_0896AD6C:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_0896AD70;
L_0896AD70:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[18]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_0896AD7C;
L_0896AD7C:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x0896AD8Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27984));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x0896AD8Cu) goto L_0896AD8C;
    return;
L_0896AD8C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 25u, 0x0896C104u>(ctx, &aot_mem); return;
      }
      goto L_0896AD94;
    }
L_0896AD94:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_0896ADD4;
      }
      goto L_0896ADA4;
    }
L_0896ADA4:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x0896ADB0u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x0896ADB0u) goto L_0896ADB0;
    return;
L_0896ADB0:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896ADC8;
      }
      goto L_0896ADBC;
    }
L_0896ADBC:
    ctx.gpr[31] = (0x0896ADC4u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x0896ADC4u) goto L_0896ADC4;
    return;
L_0896ADC4:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_0896ADC8;
L_0896ADC8:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[18]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_0896ADD4;
L_0896ADD4:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x0896ADE4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27984));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x0896ADE4u) goto L_0896ADE4;
    return;
L_0896ADE4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 25u, 0x0896C104u>(ctx, &aot_mem); return;
      }
      goto L_0896ADEC;
    }
L_0896ADEC:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_0896AE2C;
      }
      goto L_0896ADFC;
    }
L_0896ADFC:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x0896AE08u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x0896AE08u) goto L_0896AE08;
    return;
L_0896AE08:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896AE20;
      }
      goto L_0896AE14;
    }
L_0896AE14:
    ctx.gpr[31] = (0x0896AE1Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x0896AE1Cu) goto L_0896AE1C;
    return;
L_0896AE1C:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_0896AE20;
L_0896AE20:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[18]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_0896AE2C;
L_0896AE2C:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x0896AE3Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27984));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x0896AE3Cu) goto L_0896AE3C;
    return;
L_0896AE3C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 25u, 0x0896C104u>(ctx, &aot_mem); return;
      }
      goto L_0896AE44;
    }
L_0896AE44:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_0896AE84;
      }
      goto L_0896AE54;
    }
L_0896AE54:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x0896AE60u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x0896AE60u) goto L_0896AE60;
    return;
L_0896AE60:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896AE78;
      }
      goto L_0896AE6C;
    }
L_0896AE6C:
    ctx.gpr[31] = (0x0896AE74u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x0896AE74u) goto L_0896AE74;
    return;
L_0896AE74:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_0896AE78;
L_0896AE78:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[18]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_0896AE84;
L_0896AE84:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x0896AE94u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27984));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x0896AE94u) goto L_0896AE94;
    return;
L_0896AE94:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 25u, 0x0896C104u>(ctx, &aot_mem); return;
      }
      goto L_0896AE9C;
    }
L_0896AE9C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_0896AEDC;
      }
      goto L_0896AEAC;
    }
L_0896AEAC:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x0896AEB8u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x0896AEB8u) goto L_0896AEB8;
    return;
L_0896AEB8:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896AED0;
      }
      goto L_0896AEC4;
    }
L_0896AEC4:
    ctx.gpr[31] = (0x0896AECCu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x0896AECCu) goto L_0896AECC;
    return;
L_0896AECC:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_0896AED0;
L_0896AED0:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[18]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_0896AEDC;
L_0896AEDC:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x0896AEECu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27984));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x0896AEECu) goto L_0896AEEC;
    return;
L_0896AEEC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 25u, 0x0896C104u>(ctx, &aot_mem); return;
      }
      goto L_0896AEF4;
    }
L_0896AEF4:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_0896AF34;
      }
      goto L_0896AF04;
    }
L_0896AF04:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x0896AF10u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x0896AF10u) goto L_0896AF10;
    return;
L_0896AF10:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896AF28;
      }
      goto L_0896AF1C;
    }
L_0896AF1C:
    ctx.gpr[31] = (0x0896AF24u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x0896AF24u) goto L_0896AF24;
    return;
L_0896AF24:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_0896AF28;
L_0896AF28:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[18]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_0896AF34;
L_0896AF34:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x0896AF44u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27984));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x0896AF44u) goto L_0896AF44;
    return;
L_0896AF44:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 25u, 0x0896C104u>(ctx, &aot_mem); return;
      }
      goto L_0896AF4C;
    }
L_0896AF4C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_0896AF8C;
      }
      goto L_0896AF5C;
    }
L_0896AF5C:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x0896AF68u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x0896AF68u) goto L_0896AF68;
    return;
L_0896AF68:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896AF80;
      }
      goto L_0896AF74;
    }
L_0896AF74:
    ctx.gpr[31] = (0x0896AF7Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x0896AF7Cu) goto L_0896AF7C;
    return;
L_0896AF7C:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_0896AF80;
L_0896AF80:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[18]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_0896AF8C;
L_0896AF8C:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x0896AF9Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27984));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x0896AF9Cu) goto L_0896AF9C;
    return;
L_0896AF9C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 25u, 0x0896C104u>(ctx, &aot_mem); return;
      }
      goto L_0896AFA4;
    }
L_0896AFA4:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_0896AFE4;
      }
      goto L_0896AFB4;
    }
L_0896AFB4:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x0896AFC0u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x0896AFC0u) goto L_0896AFC0;
    return;
L_0896AFC0:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896AFD8;
      }
      goto L_0896AFCC;
    }
L_0896AFCC:
    ctx.gpr[31] = (0x0896AFD4u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x0896AFD4u) goto L_0896AFD4;
    return;
L_0896AFD4:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_0896AFD8;
L_0896AFD8:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[18]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_0896AFE4;
L_0896AFE4:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x0896AFF4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27984));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x0896AFF4u) goto L_0896AFF4;
    return;
L_0896AFF4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 25u, 0x0896C104u>(ctx, &aot_mem); return;
      }
      goto L_0896AFFC;
    }
L_0896AFFC:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_0896B03C;
      }
      goto L_0896B00C;
    }
L_0896B00C:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x0896B018u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x0896B018u) goto L_0896B018;
    return;
L_0896B018:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896B030;
      }
      goto L_0896B024;
    }
L_0896B024:
    ctx.gpr[31] = (0x0896B02Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x0896B02Cu) goto L_0896B02C;
    return;
L_0896B02C:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_0896B030;
L_0896B030:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[18]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_0896B03C;
L_0896B03C:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x0896B04Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27984));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x0896B04Cu) goto L_0896B04C;
    return;
L_0896B04C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 25u, 0x0896C104u>(ctx, &aot_mem); return;
      }
      goto L_0896B054;
    }
L_0896B054:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_0896B094;
      }
      goto L_0896B064;
    }
L_0896B064:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x0896B070u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x0896B070u) goto L_0896B070;
    return;
L_0896B070:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896B088;
      }
      goto L_0896B07C;
    }
L_0896B07C:
    ctx.gpr[31] = (0x0896B084u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x0896B084u) goto L_0896B084;
    return;
L_0896B084:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_0896B088;
L_0896B088:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[18]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_0896B094;
L_0896B094:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x0896B0A4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27976));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x0896B0A4u) goto L_0896B0A4;
    return;
L_0896B0A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 25u, 0x0896C104u>(ctx, &aot_mem); return;
      }
      goto L_0896B0AC;
    }
L_0896B0AC:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_0896B0EC;
      }
      goto L_0896B0BC;
    }
L_0896B0BC:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x0896B0C8u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x0896B0C8u) goto L_0896B0C8;
    return;
L_0896B0C8:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896B0E0;
      }
      goto L_0896B0D4;
    }
L_0896B0D4:
    ctx.gpr[31] = (0x0896B0DCu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x0896B0DCu) goto L_0896B0DC;
    return;
L_0896B0DC:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_0896B0E0;
L_0896B0E0:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[18]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_0896B0EC;
L_0896B0EC:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x0896B0FCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27968));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x0896B0FCu) goto L_0896B0FC;
    return;
L_0896B0FC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 25u, 0x0896C104u>(ctx, &aot_mem); return;
      }
      goto L_0896B104;
    }
L_0896B104:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_0896B144;
      }
      goto L_0896B114;
    }
L_0896B114:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x0896B120u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x0896B120u) goto L_0896B120;
    return;
L_0896B120:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896B138;
      }
      goto L_0896B12C;
    }
L_0896B12C:
    ctx.gpr[31] = (0x0896B134u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x0896B134u) goto L_0896B134;
    return;
L_0896B134:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_0896B138;
L_0896B138:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[18]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_0896B144;
L_0896B144:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x0896B154u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27968));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x0896B154u) goto L_0896B154;
    return;
L_0896B154:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 25u, 0x0896C104u>(ctx, &aot_mem); return;
      }
      goto L_0896B15C;
    }
L_0896B15C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_0896B19C;
      }
      goto L_0896B16C;
    }
L_0896B16C:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x0896B178u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x0896B178u) goto L_0896B178;
    return;
L_0896B178:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896B190;
      }
      goto L_0896B184;
    }
L_0896B184:
    ctx.gpr[31] = (0x0896B18Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x0896B18Cu) goto L_0896B18C;
    return;
L_0896B18C:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_0896B190;
L_0896B190:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[18]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_0896B19C;
L_0896B19C:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x0896B1ACu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27960));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x0896B1ACu) goto L_0896B1AC;
    return;
L_0896B1AC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 25u, 0x0896C104u>(ctx, &aot_mem); return;
      }
      goto L_0896B1B4;
    }
L_0896B1B4:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_0896B1F4;
      }
      goto L_0896B1C4;
    }
L_0896B1C4:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x0896B1D0u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x0896B1D0u) goto L_0896B1D0;
    return;
L_0896B1D0:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896B1E8;
      }
      goto L_0896B1DC;
    }
L_0896B1DC:
    ctx.gpr[31] = (0x0896B1E4u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x0896B1E4u) goto L_0896B1E4;
    return;
L_0896B1E4:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_0896B1E8;
L_0896B1E8:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[18]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_0896B1F4;
L_0896B1F4:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x0896B204u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27952));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x0896B204u) goto L_0896B204;
    return;
L_0896B204:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 25u, 0x0896C104u>(ctx, &aot_mem); return;
      }
      goto L_0896B20C;
    }
L_0896B20C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_0896B24C;
      }
      goto L_0896B21C;
    }
L_0896B21C:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x0896B228u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x0896B228u) goto L_0896B228;
    return;
L_0896B228:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896B240;
      }
      goto L_0896B234;
    }
L_0896B234:
    ctx.gpr[31] = (0x0896B23Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x0896B23Cu) goto L_0896B23C;
    return;
L_0896B23C:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_0896B240;
L_0896B240:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[18]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_0896B24C;
L_0896B24C:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x0896B25Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27944));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x0896B25Cu) goto L_0896B25C;
    return;
L_0896B25C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 25u, 0x0896C104u>(ctx, &aot_mem); return;
      }
      goto L_0896B264;
    }
L_0896B264:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_0896B2A4;
      }
      goto L_0896B274;
    }
L_0896B274:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x0896B280u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x0896B280u) goto L_0896B280;
    return;
L_0896B280:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896B298;
      }
      goto L_0896B28C;
    }
L_0896B28C:
    ctx.gpr[31] = (0x0896B294u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x0896B294u) goto L_0896B294;
    return;
L_0896B294:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_0896B298;
L_0896B298:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[18]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_0896B2A4;
L_0896B2A4:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x0896B2B4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27936));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x0896B2B4u) goto L_0896B2B4;
    return;
L_0896B2B4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 25u, 0x0896C104u>(ctx, &aot_mem); return;
      }
      goto L_0896B2BC;
    }
L_0896B2BC:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_0896B2FC;
      }
      goto L_0896B2CC;
    }
L_0896B2CC:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x0896B2D8u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x0896B2D8u) goto L_0896B2D8;
    return;
L_0896B2D8:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896B2F0;
      }
      goto L_0896B2E4;
    }
L_0896B2E4:
    ctx.gpr[31] = (0x0896B2ECu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x0896B2ECu) goto L_0896B2EC;
    return;
L_0896B2EC:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_0896B2F0;
L_0896B2F0:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[18]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_0896B2FC;
L_0896B2FC:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x0896B30Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27928));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x0896B30Cu) goto L_0896B30C;
    return;
L_0896B30C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 25u, 0x0896C104u>(ctx, &aot_mem); return;
      }
      goto L_0896B314;
    }
L_0896B314:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_0896B354;
      }
      goto L_0896B324;
    }
L_0896B324:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x0896B330u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x0896B330u) goto L_0896B330;
    return;
L_0896B330:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896B348;
      }
      goto L_0896B33C;
    }
L_0896B33C:
    ctx.gpr[31] = (0x0896B344u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x0896B344u) goto L_0896B344;
    return;
L_0896B344:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_0896B348;
L_0896B348:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[18]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_0896B354;
L_0896B354:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x0896B364u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27920));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x0896B364u) goto L_0896B364;
    return;
L_0896B364:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 25u, 0x0896C104u>(ctx, &aot_mem); return;
      }
      goto L_0896B36C;
    }
L_0896B36C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_0896B3AC;
      }
      goto L_0896B37C;
    }
L_0896B37C:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x0896B388u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x0896B388u) goto L_0896B388;
    return;
L_0896B388:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896B3A0;
      }
      goto L_0896B394;
    }
L_0896B394:
    ctx.gpr[31] = (0x0896B39Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x0896B39Cu) goto L_0896B39C;
    return;
L_0896B39C:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_0896B3A0;
L_0896B3A0:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[18]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_0896B3AC;
L_0896B3AC:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x0896B3BCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27912));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x0896B3BCu) goto L_0896B3BC;
    return;
L_0896B3BC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 25u, 0x0896C104u>(ctx, &aot_mem); return;
      }
      goto L_0896B3C4;
    }
L_0896B3C4:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_0896B404;
      }
      goto L_0896B3D4;
    }
L_0896B3D4:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x0896B3E0u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x0896B3E0u) goto L_0896B3E0;
    return;
L_0896B3E0:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896B3F8;
      }
      goto L_0896B3EC;
    }
L_0896B3EC:
    ctx.gpr[31] = (0x0896B3F4u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x0896B3F4u) goto L_0896B3F4;
    return;
L_0896B3F4:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_0896B3F8;
L_0896B3F8:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[18]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_0896B404;
L_0896B404:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x0896B414u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27904));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x0896B414u) goto L_0896B414;
    return;
L_0896B414:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 25u, 0x0896C104u>(ctx, &aot_mem); return;
      }
      goto L_0896B41C;
    }
L_0896B41C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_0896B45C;
      }
      goto L_0896B42C;
    }
L_0896B42C:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x0896B438u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x0896B438u) goto L_0896B438;
    return;
L_0896B438:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896B450;
      }
      goto L_0896B444;
    }
L_0896B444:
    ctx.gpr[31] = (0x0896B44Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x0896B44Cu) goto L_0896B44C;
    return;
L_0896B44C:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_0896B450;
L_0896B450:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[18]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_0896B45C;
L_0896B45C:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x0896B46Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27896));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x0896B46Cu) goto L_0896B46C;
    return;
L_0896B46C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 25u, 0x0896C104u>(ctx, &aot_mem); return;
      }
      goto L_0896B474;
    }
L_0896B474:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_0896B4B4;
      }
      goto L_0896B484;
    }
L_0896B484:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x0896B490u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x0896B490u) goto L_0896B490;
    return;
L_0896B490:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896B4A8;
      }
      goto L_0896B49C;
    }
L_0896B49C:
    ctx.gpr[31] = (0x0896B4A4u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x0896B4A4u) goto L_0896B4A4;
    return;
L_0896B4A4:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_0896B4A8;
L_0896B4A8:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[18]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_0896B4B4;
L_0896B4B4:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x0896B4C4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27888));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x0896B4C4u) goto L_0896B4C4;
    return;
L_0896B4C4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 25u, 0x0896C104u>(ctx, &aot_mem); return;
      }
      goto L_0896B4CC;
    }
L_0896B4CC:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_0896B50C;
      }
      goto L_0896B4DC;
    }
L_0896B4DC:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x0896B4E8u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x0896B4E8u) goto L_0896B4E8;
    return;
L_0896B4E8:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896B500;
      }
      goto L_0896B4F4;
    }
L_0896B4F4:
    ctx.gpr[31] = (0x0896B4FCu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x0896B4FCu) goto L_0896B4FC;
    return;
L_0896B4FC:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_0896B500;
L_0896B500:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[18]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_0896B50C;
L_0896B50C:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x0896B51Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27880));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x0896B51Cu) goto L_0896B51C;
    return;
L_0896B51C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 25u, 0x0896C104u>(ctx, &aot_mem); return;
      }
      goto L_0896B524;
    }
L_0896B524:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_0896B564;
      }
      goto L_0896B534;
    }
L_0896B534:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x0896B540u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x0896B540u) goto L_0896B540;
    return;
L_0896B540:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896B558;
      }
      goto L_0896B54C;
    }
L_0896B54C:
    ctx.gpr[31] = (0x0896B554u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x0896B554u) goto L_0896B554;
    return;
L_0896B554:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_0896B558;
L_0896B558:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[18]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_0896B564;
L_0896B564:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x0896B574u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27872));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x0896B574u) goto L_0896B574;
    return;
L_0896B574:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 25u, 0x0896C104u>(ctx, &aot_mem); return;
      }
      goto L_0896B57C;
    }
L_0896B57C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_0896B5BC;
      }
      goto L_0896B58C;
    }
L_0896B58C:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x0896B598u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x0896B598u) goto L_0896B598;
    return;
L_0896B598:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896B5B0;
      }
      goto L_0896B5A4;
    }
L_0896B5A4:
    ctx.gpr[31] = (0x0896B5ACu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x0896B5ACu) goto L_0896B5AC;
    return;
L_0896B5AC:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_0896B5B0;
L_0896B5B0:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[18]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_0896B5BC;
L_0896B5BC:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x0896B5CCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27864));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x0896B5CCu) goto L_0896B5CC;
    return;
L_0896B5CC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 25u, 0x0896C104u>(ctx, &aot_mem); return;
      }
      goto L_0896B5D4;
    }
L_0896B5D4:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_0896B614;
      }
      goto L_0896B5E4;
    }
L_0896B5E4:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x0896B5F0u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x0896B5F0u) goto L_0896B5F0;
    return;
L_0896B5F0:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896B608;
      }
      goto L_0896B5FC;
    }
L_0896B5FC:
    ctx.gpr[31] = (0x0896B604u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x0896B604u) goto L_0896B604;
    return;
L_0896B604:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_0896B608;
L_0896B608:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[18]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_0896B614;
L_0896B614:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x0896B624u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27856));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x0896B624u) goto L_0896B624;
    return;
L_0896B624:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 25u, 0x0896C104u>(ctx, &aot_mem); return;
      }
      goto L_0896B62C;
    }
L_0896B62C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_0896B66C;
      }
      goto L_0896B63C;
    }
L_0896B63C:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x0896B648u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x0896B648u) goto L_0896B648;
    return;
L_0896B648:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896B660;
      }
      goto L_0896B654;
    }
L_0896B654:
    ctx.gpr[31] = (0x0896B65Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x0896B65Cu) goto L_0896B65C;
    return;
L_0896B65C:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_0896B660;
L_0896B660:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[18]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_0896B66C;
L_0896B66C:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x0896B67Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27848));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x0896B67Cu) goto L_0896B67C;
    return;
L_0896B67C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 25u, 0x0896C104u>(ctx, &aot_mem); return;
      }
      goto L_0896B684;
    }
L_0896B684:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_0896B6C4;
      }
      goto L_0896B694;
    }
L_0896B694:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x0896B6A0u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x0896B6A0u) goto L_0896B6A0;
    return;
L_0896B6A0:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896B6B8;
      }
      goto L_0896B6AC;
    }
L_0896B6AC:
    ctx.gpr[31] = (0x0896B6B4u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x0896B6B4u) goto L_0896B6B4;
    return;
L_0896B6B4:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_0896B6B8;
L_0896B6B8:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[18]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_0896B6C4;
L_0896B6C4:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x0896B6D4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27840));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x0896B6D4u) goto L_0896B6D4;
    return;
L_0896B6D4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 25u, 0x0896C104u>(ctx, &aot_mem); return;
      }
      goto L_0896B6DC;
    }
L_0896B6DC:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_0896B71C;
      }
      goto L_0896B6EC;
    }
L_0896B6EC:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x0896B6F8u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x0896B6F8u) goto L_0896B6F8;
    return;
L_0896B6F8:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896B710;
      }
      goto L_0896B704;
    }
L_0896B704:
    ctx.gpr[31] = (0x0896B70Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x0896B70Cu) goto L_0896B70C;
    return;
L_0896B70C:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_0896B710;
L_0896B710:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[18]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_0896B71C;
L_0896B71C:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x0896B72Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27832));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x0896B72Cu) goto L_0896B72C;
    return;
L_0896B72C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 25u, 0x0896C104u>(ctx, &aot_mem); return;
      }
      goto L_0896B734;
    }
L_0896B734:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_0896B774;
      }
      goto L_0896B744;
    }
L_0896B744:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x0896B750u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x0896B750u) goto L_0896B750;
    return;
L_0896B750:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896B768;
      }
      goto L_0896B75C;
    }
L_0896B75C:
    ctx.gpr[31] = (0x0896B764u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x0896B764u) goto L_0896B764;
    return;
L_0896B764:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_0896B768;
L_0896B768:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[18]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_0896B774;
L_0896B774:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x0896B784u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27824));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x0896B784u) goto L_0896B784;
    return;
L_0896B784:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 25u, 0x0896C104u>(ctx, &aot_mem); return;
      }
      goto L_0896B78C;
    }
L_0896B78C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_0896B7CC;
      }
      goto L_0896B79C;
    }
L_0896B79C:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x0896B7A8u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x0896B7A8u) goto L_0896B7A8;
    return;
L_0896B7A8:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896B7C0;
      }
      goto L_0896B7B4;
    }
L_0896B7B4:
    ctx.gpr[31] = (0x0896B7BCu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x0896B7BCu) goto L_0896B7BC;
    return;
L_0896B7BC:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_0896B7C0;
L_0896B7C0:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[18]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_0896B7CC;
L_0896B7CC:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x0896B7DCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27816));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x0896B7DCu) goto L_0896B7DC;
    return;
L_0896B7DC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 25u, 0x0896C104u>(ctx, &aot_mem); return;
      }
      goto L_0896B7E4;
    }
L_0896B7E4:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_0896B824;
      }
      goto L_0896B7F4;
    }
L_0896B7F4:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x0896B800u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x0896B800u) goto L_0896B800;
    return;
L_0896B800:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896B818;
      }
      goto L_0896B80C;
    }
L_0896B80C:
    ctx.gpr[31] = (0x0896B814u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x0896B814u) goto L_0896B814;
    return;
L_0896B814:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_0896B818;
L_0896B818:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[18]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_0896B824;
L_0896B824:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x0896B834u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27808));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x0896B834u) goto L_0896B834;
    return;
L_0896B834:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 25u, 0x0896C104u>(ctx, &aot_mem); return;
      }
      goto L_0896B83C;
    }
L_0896B83C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_0896B87C;
      }
      goto L_0896B84C;
    }
L_0896B84C:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x0896B858u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x0896B858u) goto L_0896B858;
    return;
L_0896B858:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896B870;
      }
      goto L_0896B864;
    }
L_0896B864:
    ctx.gpr[31] = (0x0896B86Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x0896B86Cu) goto L_0896B86C;
    return;
L_0896B86C:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_0896B870;
L_0896B870:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[18]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_0896B87C;
L_0896B87C:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x0896B88Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27800));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x0896B88Cu) goto L_0896B88C;
    return;
L_0896B88C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 25u, 0x0896C104u>(ctx, &aot_mem); return;
      }
      goto L_0896B894;
    }
L_0896B894:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_0896B8D4;
      }
      goto L_0896B8A4;
    }
L_0896B8A4:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x0896B8B0u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x0896B8B0u) goto L_0896B8B0;
    return;
L_0896B8B0:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896B8C8;
      }
      goto L_0896B8BC;
    }
L_0896B8BC:
    ctx.gpr[31] = (0x0896B8C4u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x0896B8C4u) goto L_0896B8C4;
    return;
L_0896B8C4:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_0896B8C8;
L_0896B8C8:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[18]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_0896B8D4;
L_0896B8D4:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x0896B8E4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27792));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x0896B8E4u) goto L_0896B8E4;
    return;
L_0896B8E4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 25u, 0x0896C104u>(ctx, &aot_mem); return;
      }
      goto L_0896B8EC;
    }
L_0896B8EC:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_0896B92C;
      }
      goto L_0896B8FC;
    }
L_0896B8FC:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[31] = (0x0896B908u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x0896B908u) goto L_0896B908;
    return;
L_0896B908:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896B920;
      }
      goto L_0896B914;
    }
L_0896B914:
    ctx.gpr[31] = (0x0896B91Cu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x0896B91Cu) goto L_0896B91C;
    return;
L_0896B91C:
    ctx.gpr[19] = (ctx.gpr[20] | 0u);
    goto L_0896B920;
L_0896B920:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[19]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_0896B92C;
L_0896B92C:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x0896B93Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27784));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x0896B93Cu) goto L_0896B93C;
    return;
L_0896B93C:
    ctx.gpr[5] = (18510u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[5];
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_0896B958;
      }
      goto L_0896B94C;
    }
L_0896B94C:
    ctx.gpr[5] = (0u | 32767u);
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0896B9BC;
      }
      goto L_0896B958;
    }
L_0896B958:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_0896B998;
      }
      goto L_0896B968;
    }
L_0896B968:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x0896B974u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x0896B974u) goto L_0896B974;
    return;
L_0896B974:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896B98C;
      }
      goto L_0896B980;
    }
L_0896B980:
    ctx.gpr[31] = (0x0896B988u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x0896B988u) goto L_0896B988;
    return;
L_0896B988:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_0896B98C;
L_0896B98C:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[18]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_0896B998;
L_0896B998:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x0896B9A8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27776));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x0896B9A8u) goto L_0896B9A8;
    return;
L_0896B9A8:
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-6220));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_0896B9BC;
L_0896B9BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 25u, 0x0896C104u>(ctx, &aot_mem); return;
      }
      goto L_0896B9C4;
    }
L_0896B9C4:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_0896BA04;
      }
      goto L_0896B9D4;
    }
L_0896B9D4:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[31] = (0x0896B9E0u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x0896B9E0u) goto L_0896B9E0;
    return;
L_0896B9E0:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896B9F8;
      }
      goto L_0896B9EC;
    }
L_0896B9EC:
    ctx.gpr[31] = (0x0896B9F4u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x0896B9F4u) goto L_0896B9F4;
    return;
L_0896B9F4:
    ctx.gpr[19] = (ctx.gpr[20] | 0u);
    goto L_0896B9F8;
L_0896B9F8:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[19]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_0896BA04;
L_0896BA04:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x0896BA14u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27776));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x0896BA14u) goto L_0896BA14;
    return;
L_0896BA14:
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-6220));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (65352u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(19967));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[5];
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_0896BA44;
      }
      goto L_0896BA34;
    }
L_0896BA34:
    ctx.gpr[5] = (32512u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(255));
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0896BAA8;
      }
      goto L_0896BA44;
    }
L_0896BA44:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_0896BA84;
      }
      goto L_0896BA54;
    }
L_0896BA54:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x0896BA60u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x0896BA60u) goto L_0896BA60;
    return;
L_0896BA60:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896BA78;
      }
      goto L_0896BA6C;
    }
L_0896BA6C:
    ctx.gpr[31] = (0x0896BA74u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x0896BA74u) goto L_0896BA74;
    return;
L_0896BA74:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_0896BA78;
L_0896BA78:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[18]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_0896BA84;
L_0896BA84:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x0896BA94u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27768));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x0896BA94u) goto L_0896BA94;
    return;
L_0896BA94:
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(-6220), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_0896BB28;
      }
      goto L_0896BAA8;
    }
L_0896BAA8:
    ctx.gpr[5] = (24480u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(27391));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[5];
    ctx.gpr[5] = (127u << 16u);
      if (branch_taken) {
          goto L_0896BAC4;
      }
      goto L_0896BAB8;
    }
L_0896BAB8:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(255));
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0896BB28;
      }
      goto L_0896BAC4;
    }
L_0896BAC4:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_0896BB04;
      }
      goto L_0896BAD4;
    }
L_0896BAD4:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x0896BAE0u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x0896BAE0u) goto L_0896BAE0;
    return;
L_0896BAE0:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896BAF8;
      }
      goto L_0896BAEC;
    }
L_0896BAEC:
    ctx.gpr[31] = (0x0896BAF4u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x0896BAF4u) goto L_0896BAF4;
    return;
L_0896BAF4:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_0896BAF8;
L_0896BAF8:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[18]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_0896BB04;
L_0896BB04:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x0896BB14u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27760));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x0896BB14u) goto L_0896BB14;
    return;
L_0896BB14:
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-6220));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_0896BB28;
L_0896BB28:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 25u, 0x0896C104u>(ctx, &aot_mem); return;
      }
      goto L_0896BB30;
    }
L_0896BB30:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_0896BB70;
      }
      goto L_0896BB40;
    }
L_0896BB40:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x0896BB4Cu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x0896BB4Cu) goto L_0896BB4C;
    return;
L_0896BB4C:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896BB64;
      }
      goto L_0896BB58;
    }
L_0896BB58:
    ctx.gpr[31] = (0x0896BB60u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x0896BB60u) goto L_0896BB60;
    return;
L_0896BB60:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_0896BB64;
L_0896BB64:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[18]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_0896BB70;
L_0896BB70:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x0896BB80u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27752));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x0896BB80u) goto L_0896BB80;
    return;
L_0896BB80:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 25u, 0x0896C104u>(ctx, &aot_mem); return;
      }
      goto L_0896BB88;
    }
L_0896BB88:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_0896BBC8;
      }
      goto L_0896BB98;
    }
L_0896BB98:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x0896BBA4u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x0896BBA4u) goto L_0896BBA4;
    return;
L_0896BBA4:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896BBBC;
      }
      goto L_0896BBB0;
    }
L_0896BBB0:
    ctx.gpr[31] = (0x0896BBB8u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x0896BBB8u) goto L_0896BBB8;
    return;
L_0896BBB8:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_0896BBBC;
L_0896BBBC:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[18]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_0896BBC8;
L_0896BBC8:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x0896BBD8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27744));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x0896BBD8u) goto L_0896BBD8;
    return;
L_0896BBD8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 25u, 0x0896C104u>(ctx, &aot_mem); return;
      }
      goto L_0896BBE0;
    }
L_0896BBE0:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_0896BC20;
      }
      goto L_0896BBF0;
    }
L_0896BBF0:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x0896BBFCu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x0896BBFCu) goto L_0896BBFC;
    return;
L_0896BBFC:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896BC14;
      }
      goto L_0896BC08;
    }
L_0896BC08:
    ctx.gpr[31] = (0x0896BC10u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x0896BC10u) goto L_0896BC10;
    return;
L_0896BC10:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_0896BC14;
L_0896BC14:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[18]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_0896BC20;
L_0896BC20:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x0896BC30u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27736));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x0896BC30u) goto L_0896BC30;
    return;
L_0896BC30:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 25u, 0x0896C104u>(ctx, &aot_mem); return;
      }
      goto L_0896BC38;
    }
L_0896BC38:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_0896BC78;
      }
      goto L_0896BC48;
    }
L_0896BC48:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x0896BC54u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x0896BC54u) goto L_0896BC54;
    return;
L_0896BC54:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896BC6C;
      }
      goto L_0896BC60;
    }
L_0896BC60:
    ctx.gpr[31] = (0x0896BC68u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x0896BC68u) goto L_0896BC68;
    return;
L_0896BC68:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_0896BC6C;
L_0896BC6C:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[18]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_0896BC78;
L_0896BC78:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x0896BC88u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27728));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x0896BC88u) goto L_0896BC88;
    return;
L_0896BC88:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 25u, 0x0896C104u>(ctx, &aot_mem); return;
      }
      goto L_0896BC90;
    }
L_0896BC90:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_0896BCD0;
      }
      goto L_0896BCA0;
    }
L_0896BCA0:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x0896BCACu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x0896BCACu) goto L_0896BCAC;
    return;
L_0896BCAC:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896BCC4;
      }
      goto L_0896BCB8;
    }
L_0896BCB8:
    ctx.gpr[31] = (0x0896BCC0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x0896BCC0u) goto L_0896BCC0;
    return;
L_0896BCC0:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_0896BCC4;
L_0896BCC4:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[18]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_0896BCD0;
L_0896BCD0:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x0896BCE0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27720));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x0896BCE0u) goto L_0896BCE0;
    return;
L_0896BCE0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 25u, 0x0896C104u>(ctx, &aot_mem); return;
      }
      goto L_0896BCE8;
    }
L_0896BCE8:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_0896BD28;
      }
      goto L_0896BCF8;
    }
L_0896BCF8:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x0896BD04u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x0896BD04u) goto L_0896BD04;
    return;
L_0896BD04:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896BD1C;
      }
      goto L_0896BD10;
    }
L_0896BD10:
    ctx.gpr[31] = (0x0896BD18u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x0896BD18u) goto L_0896BD18;
    return;
L_0896BD18:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_0896BD1C;
L_0896BD1C:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[18]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_0896BD28;
L_0896BD28:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x0896BD38u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27712));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x0896BD38u) goto L_0896BD38;
    return;
L_0896BD38:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 25u, 0x0896C104u>(ctx, &aot_mem); return;
      }
      goto L_0896BD40;
    }
L_0896BD40:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_0896BD80;
      }
      goto L_0896BD50;
    }
L_0896BD50:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x0896BD5Cu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x0896BD5Cu) goto L_0896BD5C;
    return;
L_0896BD5C:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896BD74;
      }
      goto L_0896BD68;
    }
L_0896BD68:
    ctx.gpr[31] = (0x0896BD70u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x0896BD70u) goto L_0896BD70;
    return;
L_0896BD70:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_0896BD74;
L_0896BD74:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[18]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_0896BD80;
L_0896BD80:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x0896BD90u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27704));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x0896BD90u) goto L_0896BD90;
    return;
L_0896BD90:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 25u, 0x0896C104u>(ctx, &aot_mem); return;
      }
      goto L_0896BD98;
    }
L_0896BD98:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_0896BDD8;
      }
      goto L_0896BDA8;
    }
L_0896BDA8:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x0896BDB4u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x0896BDB4u) goto L_0896BDB4;
    return;
L_0896BDB4:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896BDCC;
      }
      goto L_0896BDC0;
    }
L_0896BDC0:
    ctx.gpr[31] = (0x0896BDC8u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x0896BDC8u) goto L_0896BDC8;
    return;
L_0896BDC8:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_0896BDCC;
L_0896BDCC:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[18]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_0896BDD8;
L_0896BDD8:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x0896BDE8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27696));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x0896BDE8u) goto L_0896BDE8;
    return;
L_0896BDE8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 25u, 0x0896C104u>(ctx, &aot_mem); return;
      }
      goto L_0896BDF0;
    }
L_0896BDF0:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_0896BE30;
      }
      goto L_0896BE00;
    }
L_0896BE00:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x0896BE0Cu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x0896BE0Cu) goto L_0896BE0C;
    return;
L_0896BE0C:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896BE24;
      }
      goto L_0896BE18;
    }
L_0896BE18:
    ctx.gpr[31] = (0x0896BE20u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x0896BE20u) goto L_0896BE20;
    return;
L_0896BE20:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_0896BE24;
L_0896BE24:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[18]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_0896BE30;
L_0896BE30:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x0896BE40u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27688));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x0896BE40u) goto L_0896BE40;
    return;
L_0896BE40:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 25u, 0x0896C104u>(ctx, &aot_mem); return;
      }
      goto L_0896BE48;
    }
L_0896BE48:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_0896BE88;
      }
      goto L_0896BE58;
    }
L_0896BE58:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x0896BE64u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x0896BE64u) goto L_0896BE64;
    return;
L_0896BE64:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896BE7C;
      }
      goto L_0896BE70;
    }
L_0896BE70:
    ctx.gpr[31] = (0x0896BE78u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x0896BE78u) goto L_0896BE78;
    return;
L_0896BE78:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_0896BE7C;
L_0896BE7C:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[18]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_0896BE88;
L_0896BE88:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x0896BE98u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27680));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x0896BE98u) goto L_0896BE98;
    return;
L_0896BE98:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 25u, 0x0896C104u>(ctx, &aot_mem); return;
      }
      goto L_0896BEA0;
    }
L_0896BEA0:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_0896BEE0;
      }
      goto L_0896BEB0;
    }
L_0896BEB0:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x0896BEBCu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x0896BEBCu) goto L_0896BEBC;
    return;
L_0896BEBC:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896BED4;
      }
      goto L_0896BEC8;
    }
L_0896BEC8:
    ctx.gpr[31] = (0x0896BED0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x0896BED0u) goto L_0896BED0;
    return;
L_0896BED0:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_0896BED4;
L_0896BED4:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[18]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_0896BEE0;
L_0896BEE0:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x0896BEF0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27672));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x0896BEF0u) goto L_0896BEF0;
    return;
L_0896BEF0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 25u, 0x0896C104u>(ctx, &aot_mem); return;
      }
      goto L_0896BEF8;
    }
L_0896BEF8:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_0896BF38;
      }
      goto L_0896BF08;
    }
L_0896BF08:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x0896BF14u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x0896BF14u) goto L_0896BF14;
    return;
L_0896BF14:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896BF2C;
      }
      goto L_0896BF20;
    }
L_0896BF20:
    ctx.gpr[31] = (0x0896BF28u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x0896BF28u) goto L_0896BF28;
    return;
L_0896BF28:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_0896BF2C;
L_0896BF2C:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[18]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_0896BF38;
L_0896BF38:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x0896BF48u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27664));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x0896BF48u) goto L_0896BF48;
    return;
L_0896BF48:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 25u, 0x0896C104u>(ctx, &aot_mem); return;
      }
      goto L_0896BF50;
    }
L_0896BF50:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_0896BF90;
      }
      goto L_0896BF60;
    }
L_0896BF60:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x0896BF6Cu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x0896BF6Cu) goto L_0896BF6C;
    return;
L_0896BF6C:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896BF84;
      }
      goto L_0896BF78;
    }
L_0896BF78:
    ctx.gpr[31] = (0x0896BF80u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x0896BF80u) goto L_0896BF80;
    return;
L_0896BF80:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_0896BF84;
L_0896BF84:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[18]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_0896BF90;
L_0896BF90:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x0896BFA0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27656));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x0896BFA0u) goto L_0896BFA0;
    return;
L_0896BFA0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 25u, 0x0896C104u>(ctx, &aot_mem); return;
      }
      goto L_0896BFA8;
    }
L_0896BFA8:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_0896BFE8;
      }
      goto L_0896BFB8;
    }
L_0896BFB8:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x0896BFC4u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x0896BFC4u) goto L_0896BFC4;
    return;
L_0896BFC4:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896BFDC;
      }
      goto L_0896BFD0;
    }
L_0896BFD0:
    ctx.gpr[31] = (0x0896BFD8u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x0896BFD8u) goto L_0896BFD8;
    return;
L_0896BFD8:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_0896BFDC;
L_0896BFDC:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[18]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_0896BFE8;
L_0896BFE8:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x0896BFF8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27648));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x0896BFF8u) goto L_0896BFF8;
    return;
L_0896BFF8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 25u, 0x0896C104u>(ctx, &aot_mem); return;
      }
      (void)rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 1u, 0x0896C000u>(ctx, &aot_mem); return;
    }
}

void recomp_unit_0089(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0089_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_89(Runtime &runtime) {
    runtime.register_generated_unit(89u, 0x08968000u, 16384u, &recomp_unit_0089, &recomp_unit_0089_entry);
    runtime.register_function(0x08968000u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968024u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896802Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968030u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896803Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896805Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896806Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968074u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896807Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089680A0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089680B0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089680CCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089680D4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089680DCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089680F0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089680F8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896813Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968144u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968148u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968154u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968180u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896818Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968198u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089681A4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089681B4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089681C4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089681E0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089681F4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968204u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896820Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968218u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968240u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968250u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896826Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968278u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968298u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089682ACu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089682BCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089682CCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089682D4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089682F0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089682FCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896830Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896831Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896833Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968344u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896834Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968354u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968360u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968370u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968388u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896838Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968398u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089683A0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089683BCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089683C8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089683D8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089683E8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089683F0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896840Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968418u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968450u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968458u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968460u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968468u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968470u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968478u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968488u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968494u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089684B4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089684BCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089684CCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089684D8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089684F8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968500u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968510u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896851Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896853Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896854Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896855Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896856Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968574u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968590u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896859Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089685B0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089685C0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089685DCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089685E8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968664u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968724u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896876Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968798u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089687C0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968830u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896884Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896885Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968870u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968880u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968894u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968898u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089688ACu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089688B4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089688CCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089688F4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968950u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896895Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896896Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968978u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968984u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968998u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089689B0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089689C0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089689F0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968A4Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968A68u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968A78u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968A94u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968AB0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968AC0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968B1Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968B58u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968B64u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968B6Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968B74u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968B7Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968B84u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968B90u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968B98u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968BA4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968BB4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968BC4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968BF0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968C54u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968C60u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968C74u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968C78u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968C84u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968C94u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968CA4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968CB8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968D00u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968D0Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968D1Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968D60u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968D6Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968D80u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968D88u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968D90u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968D94u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968D9Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968DA4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968DACu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968DB4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968DC0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968DCCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968DE0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968DECu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968DF8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968E50u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968E58u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968E60u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968E74u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968E80u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968E94u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968EA0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968ED8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968EECu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968EFCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968F14u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968F28u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968F30u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968F40u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968F58u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968F6Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968F78u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968F8Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968FC4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896903Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969048u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969054u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969060u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896906Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969078u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969084u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969090u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896909Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896910Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969128u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896914Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089691B8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089691E4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089691F0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969200u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969214u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969254u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089692A8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089692B0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089692B8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089692C0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089692C8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089692D0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089692E8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089692F0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969360u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896936Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969378u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969384u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969390u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896939Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089693A8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089693B4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089693C0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089693CCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089693D8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089693ECu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089693F8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969408u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969414u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969420u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896942Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896943Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969448u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969454u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969460u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896946Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089694B8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089694E4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089694F8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969504u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896950Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969514u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969520u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969528u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969534u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896953Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969544u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969564u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969574u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969580u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969588u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969594u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089695B0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089695BCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089695C0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089695D4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969610u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896961Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969624u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969654u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969678u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969684u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089696A4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089696C0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089696DCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089696E4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089696ECu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896970Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969710u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969714u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969730u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969758u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089697A4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089697C0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089697F0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089697F8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969800u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969840u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896985Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969868u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969870u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896987Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896988Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089698D8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089698F0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896990Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969914u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896991Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969924u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969930u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969940u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969950u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969968u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969988u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896998Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969994u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089699D4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089699D8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969A04u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969A44u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969A78u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969A84u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969AACu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969AB4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969AB8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969AC0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969B14u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969B1Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969B24u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969B30u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969B40u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969B50u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969B60u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969B80u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969BB0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969BBCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969BC8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969BD8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969BF0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969BF8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969C00u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969C08u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969C10u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969C4Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969C68u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969C7Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969C8Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969C94u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969C9Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969CA0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969CA8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969CB0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969CB4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969CC0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969CCCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969CE0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969CF0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969CFCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969D0Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969D50u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969D5Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969D68u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969D84u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969D90u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969D9Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969DA8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969DB0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969DD4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969DE8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969E00u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969E14u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969E38u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969E3Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969E50u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969E58u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969E70u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969EDCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969EE4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969EF0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969F00u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969F30u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969F38u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969F5Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969F8Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969FD8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969FE4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969FECu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969FF4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A018u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A020u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A048u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A054u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A060u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A068u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A070u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A074u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A07Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A0A4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A0ACu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A0DCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A0E8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A108u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A110u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A118u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A12Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A138u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A148u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A158u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A168u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A16Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A174u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A188u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A190u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A1B8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A1D8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A208u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A214u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A228u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A254u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A258u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A260u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A28Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A2B8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A2DCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A2E0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A308u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A32Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A33Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A370u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A3A0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A3C0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A3E8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A40Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A454u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A45Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A468u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A478u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A49Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A4B0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A4C0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A4E4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A500u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A52Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A534u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A550u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A558u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A55Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A5A8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A5BCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A5CCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A5ECu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A624u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A628u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A63Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A644u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A66Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A6E8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A6F0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A700u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A728u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A72Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A770u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A778u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A7B0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A7D0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A81Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A82Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A848u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A86Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A888u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A8A8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A8F0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A900u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A908u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A964u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A978u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A984u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A98Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A99Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A9A8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A9B4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A9C0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A9D0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A9E0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A9F0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AA00u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AA0Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AA18u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AA38u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AA5Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AA68u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AA78u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AA88u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AA90u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AA98u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AAA4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AAACu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AAE8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AB08u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AB18u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AB50u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AB60u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AB68u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896ABBCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896ABE4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AC2Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AC34u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AC8Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896ACB4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896ACFCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AD04u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AD0Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AD20u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AD3Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AD4Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AD58u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AD64u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AD6Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AD70u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AD7Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AD8Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AD94u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896ADA4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896ADB0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896ADBCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896ADC4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896ADC8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896ADD4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896ADE4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896ADECu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896ADFCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AE08u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AE14u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AE1Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AE20u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AE2Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AE3Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AE44u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AE54u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AE60u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AE6Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AE74u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AE78u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AE84u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AE94u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AE9Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AEACu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AEB8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AEC4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AECCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AED0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AEDCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AEECu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AEF4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AF04u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AF10u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AF1Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AF24u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AF28u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AF34u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AF44u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AF4Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AF5Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AF68u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AF74u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AF7Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AF80u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AF8Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AF9Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AFA4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AFB4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AFC0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AFCCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AFD4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AFD8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AFE4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AFF4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AFFCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B00Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B018u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B024u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B02Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B030u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B03Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B04Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B054u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B064u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B070u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B07Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B084u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B088u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B094u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B0A4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B0ACu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B0BCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B0C8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B0D4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B0DCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B0E0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B0ECu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B0FCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B104u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B114u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B120u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B12Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B134u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B138u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B144u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B154u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B15Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B16Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B178u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B184u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B18Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B190u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B19Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B1ACu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B1B4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B1C4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B1D0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B1DCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B1E4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B1E8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B1F4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B204u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B20Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B21Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B228u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B234u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B23Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B240u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B24Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B25Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B264u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B274u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B280u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B28Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B294u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B298u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B2A4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B2B4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B2BCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B2CCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B2D8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B2E4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B2ECu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B2F0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B2FCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B30Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B314u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B324u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B330u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B33Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B344u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B348u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B354u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B364u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B36Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B37Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B388u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B394u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B39Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B3A0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B3ACu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B3BCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B3C4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B3D4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B3E0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B3ECu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B3F4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B3F8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B404u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B414u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B41Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B42Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B438u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B444u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B44Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B450u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B45Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B46Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B474u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B484u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B490u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B49Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B4A4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B4A8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B4B4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B4C4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B4CCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B4DCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B4E8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B4F4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B4FCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B500u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B50Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B51Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B524u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B534u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B540u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B54Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B554u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B558u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B564u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B574u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B57Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B58Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B598u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B5A4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B5ACu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B5B0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B5BCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B5CCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B5D4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B5E4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B5F0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B5FCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B604u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B608u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B614u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B624u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B62Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B63Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B648u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B654u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B65Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B660u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B66Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B67Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B684u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B694u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B6A0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B6ACu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B6B4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B6B8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B6C4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B6D4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B6DCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B6ECu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B6F8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B704u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B70Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B710u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B71Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B72Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B734u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B744u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B750u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B75Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B764u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B768u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B774u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B784u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B78Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B79Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B7A8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B7B4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B7BCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B7C0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B7CCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B7DCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B7E4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B7F4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B800u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B80Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B814u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B818u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B824u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B834u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B83Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B84Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B858u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B864u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B86Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B870u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B87Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B88Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B894u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B8A4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B8B0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B8BCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B8C4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B8C8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B8D4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B8E4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B8ECu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B8FCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B908u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B914u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B91Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B920u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B92Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B93Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B94Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B958u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B968u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B974u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B980u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B988u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B98Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B998u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B9A8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B9BCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B9C4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B9D4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B9E0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B9ECu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B9F4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B9F8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BA04u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BA14u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BA34u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BA44u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BA54u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BA60u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BA6Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BA74u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BA78u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BA84u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BA94u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BAA8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BAB8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BAC4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BAD4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BAE0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BAECu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BAF4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BAF8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BB04u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BB14u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BB28u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BB30u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BB40u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BB4Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BB58u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BB60u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BB64u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BB70u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BB80u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BB88u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BB98u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BBA4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BBB0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BBB8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BBBCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BBC8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BBD8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BBE0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BBF0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BBFCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BC08u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BC10u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BC14u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BC20u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BC30u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BC38u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BC48u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BC54u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BC60u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BC68u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BC6Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BC78u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BC88u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BC90u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BCA0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BCACu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BCB8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BCC0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BCC4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BCD0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BCE0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BCE8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BCF8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BD04u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BD10u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BD18u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BD1Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BD28u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BD38u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BD40u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BD50u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BD5Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BD68u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BD70u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BD74u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BD80u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BD90u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BD98u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BDA8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BDB4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BDC0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BDC8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BDCCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BDD8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BDE8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BDF0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BE00u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BE0Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BE18u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BE20u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BE24u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BE30u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BE40u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BE48u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BE58u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BE64u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BE70u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BE78u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BE7Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BE88u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BE98u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BEA0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BEB0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BEBCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BEC8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BED0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BED4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BEE0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BEF0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BEF8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BF08u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BF14u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BF20u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BF28u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BF2Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BF38u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BF48u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BF50u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BF60u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BF6Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BF78u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BF80u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BF84u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BF90u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BFA0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BFA8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BFB8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BFC4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BFD0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BFD8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BFDCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BFE8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BFF8u, &recomp_unit_0089, "recomp_unit_0089");
}
} // namespace psprecomp
