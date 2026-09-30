#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0101[4095] = {
    1, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    8, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 12, 0, 13, 0, 14, 0, 15, 0, 16,
    0, 17, 0, 18, 0, 19, 0, 20, 0, 21, 0, 22, 0, 23, 0, 24, 0, 0, 0, 25, 0, 26, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0,
    28, 0, 0, 29, 0, 0, 0, 30, 0, 0, 0, 0, 31, 0, 0, 32, 0, 0, 0, 33, 0, 0, 0, 0, 34, 0, 0, 35, 0, 0, 0, 36,
    0, 0, 0, 0, 37, 0, 0, 38, 0, 0, 0, 39, 0, 0, 0, 0, 40, 0, 0, 41, 0, 0, 0, 42, 0, 0, 0, 0, 43, 0, 0, 44,
    0, 0, 0, 45, 0, 0, 0, 0, 46, 0, 0, 47, 0, 0, 0, 48, 0, 0, 0, 0, 49, 0, 0, 50, 0, 0, 0, 51, 0, 0, 0, 0,
    52, 0, 0, 53, 0, 0, 0, 54, 0, 0, 0, 0, 55, 0, 0, 56, 0, 0, 0, 57, 0, 0, 0, 0, 58, 0, 0, 59, 0, 0, 0, 60,
    0, 0, 0, 0, 61, 0, 0, 62, 0, 0, 0, 63, 0, 0, 0, 0, 64, 0, 0, 65, 0, 0, 0, 66, 0, 0, 0, 0, 67, 0, 0, 68,
    0, 0, 0, 69, 0, 0, 0, 0, 70, 0, 0, 71, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 74, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0,
    77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 80, 0, 0,
    0, 0, 0, 0, 0, 81, 0, 0, 82, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0,
    85, 0, 86, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 89, 0, 0,
    90, 0, 0, 0, 0, 91, 0, 0, 0, 92, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 95, 0, 0, 96,
    0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 98, 99, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 104, 0, 105, 0, 0, 0, 106, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 108, 0, 109, 0, 0, 0, 110, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112,
    0, 113, 0, 0, 0, 114, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 117, 0,
    0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 121, 0, 122, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 127, 0, 128, 0,
    129, 0, 0, 0, 130, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 134,
    0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 137, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0,
    0, 0, 0, 140, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 143, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0,
    0, 145, 0, 0, 0, 0, 0, 146, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 150, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 153, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0,
    155, 0, 0, 0, 0, 0, 156, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 159, 0, 0, 160, 0, 0, 0, 0,
    0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 162, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 165, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    191, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 193, 0, 194, 0, 195, 0, 0, 196, 0, 197, 0, 198, 0, 199, 0, 0, 200, 0, 201, 0,
    202, 0, 203, 0, 0, 204, 0, 0, 205, 0, 206, 0, 207, 0, 0, 208, 0, 209, 0, 210, 0, 211, 0, 212, 0, 0, 213, 0, 0, 214, 0, 215,
    0, 216, 0, 217, 0, 218, 0, 219, 0, 220, 0, 221, 0, 222, 0, 223, 0, 224, 0, 225, 0, 0, 226, 0, 0, 227, 0, 0, 228, 0, 229, 0,
    230, 0, 231, 0, 232, 0, 233, 0, 234, 0, 235, 0, 236, 0, 237, 0, 238, 0, 239, 0, 240, 0, 241, 0, 242, 0, 243, 0, 244, 0, 245, 0,
    246, 0, 247, 0, 248, 0, 249, 0, 250, 0, 251, 0, 0, 252, 0, 253, 0, 254, 0, 255, 0, 256, 0, 257, 0, 258, 0, 259, 0, 260, 0, 261,
    0, 0, 262, 0, 0, 263, 0, 264, 0, 265, 0, 266, 0, 0, 0, 267, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0,
    0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 273, 0, 274, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 277, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 279, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0,
    281, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 284, 0, 285, 0, 286, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 288, 0, 0, 289, 0, 0, 0, 0, 0, 290, 0, 0, 0, 291, 0, 0, 292, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 294, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 295, 0, 296, 0, 0, 297, 298, 0, 299, 0, 300, 0, 301, 302, 0, 303, 0, 304, 0, 305, 306, 0, 0, 307, 0, 308,
    0, 309, 0, 310, 0, 311, 0, 0, 0, 312, 0, 0, 313, 0, 0, 0, 0, 314, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0,
    0, 0, 0, 320, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 323, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 326, 0, 0, 0, 327, 0, 328, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 330, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 333, 0, 334,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 336, 0, 0, 337, 0, 0, 0, 0, 338, 0, 0, 339, 0, 0,
    0, 0, 340, 0, 0, 341, 0, 0, 0, 0, 0, 342, 0, 0, 343, 0, 0, 0, 344, 0, 345, 0, 0, 0, 346, 0, 0, 347, 0, 0, 0, 0,
    348, 0, 0, 349, 0, 0, 0, 0, 350, 0, 0, 351, 0, 0, 0, 0, 0, 352, 0, 0, 353, 0, 0, 0, 354, 355, 0, 0, 0, 356, 0, 0,
    0, 357, 0, 0, 358, 0, 359, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 361, 0, 362, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 365, 0, 366, 0, 0, 0, 367,
    0, 0, 0, 368, 0, 0, 0, 0, 0, 369, 0, 0, 0, 370, 0, 0, 371, 0, 372, 0, 373, 0, 0, 374, 0, 375, 0, 0, 0, 0, 0, 376,
    0, 377, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 380,
    0, 381, 0, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0, 0, 0, 0, 0, 0, 0, 383, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 384, 0,
    0, 0, 0, 0, 0, 385, 0, 386, 0, 0, 0, 0, 0, 0, 0, 387, 0, 0, 0, 0, 0, 0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 390, 0, 0, 0, 391, 392, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 394, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 395, 0,
    396, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 397, 0, 0, 0, 0, 398, 0, 0, 0, 399, 0,
    0, 0, 0, 400, 0, 0, 0, 0, 401, 0, 0, 0, 0, 402, 403, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 404, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 405, 0, 0, 0, 406, 407, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 408, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 409, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 410, 0, 0, 0, 0, 0, 0, 411, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 412, 0, 413, 0, 0, 414, 0, 0, 0, 0, 0, 0, 415, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 416, 0, 0, 0, 0, 417,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 418, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 419,
    0, 0, 0, 420, 0, 0, 0, 421, 0, 0, 0, 422, 0, 0, 0, 423, 0, 0, 0, 424, 0, 0, 0, 425, 0, 0, 0, 426, 0, 427, 0, 0,
    0, 428, 0, 0, 0, 429, 0, 0, 0, 0, 0, 0, 0, 430, 0, 0, 0, 0, 0, 0, 0, 431, 0, 432, 0, 0, 433, 0, 0, 434, 0, 435,
    0, 436, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 437, 0, 0, 0, 0, 0, 438, 0, 0, 439, 0, 440, 0, 0,
    441, 0, 0, 0, 0, 0, 442, 0, 0, 0, 0, 0, 0, 443, 0, 0, 444, 0, 0, 0, 445, 0, 0, 446, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 447, 0, 448, 0, 0, 449,
    450, 0, 451, 0, 452, 0, 453, 454, 0, 455, 0, 456, 0, 457, 458, 0, 0, 0, 459, 0, 0, 0, 460, 0, 0, 0, 461, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 462, 0, 0, 0, 0, 463, 0, 0, 0, 0, 464, 0, 0, 0, 0, 465, 0, 466, 0, 0, 0,
    467, 0, 0, 0, 0, 0, 468, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 469, 0, 0, 0, 0, 0, 470, 0, 0, 0,
    471, 0, 0, 0, 472, 0, 0, 473, 0, 0, 0, 474, 0, 0, 0, 475, 476, 0, 0, 0, 0, 0, 477, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 478, 0, 0, 0, 0, 479, 0, 480, 0, 481, 0, 0, 0, 0, 482, 0, 483, 484, 0, 0, 0, 485, 0, 0, 486, 0, 487, 0, 488,
    0, 489, 0, 0, 0, 0, 0, 0, 0, 0, 490, 0, 491, 0, 0, 492, 0, 0, 0, 0, 0, 0, 0, 0, 493, 0, 494, 0, 0, 0, 0, 0,
    495, 0, 0, 0, 0, 0, 0, 0, 0, 496, 0, 0, 0, 0, 0, 0, 0, 0, 497, 0, 0, 0, 0, 0, 0, 0, 0, 498, 0, 0, 0, 0,
    0, 0, 0, 0, 499, 0, 0, 0, 0, 0, 500, 0, 0, 0, 0, 0, 0, 0, 0, 501, 0, 0, 0, 0, 0, 0, 502, 0, 0, 0, 503, 0,
    0, 0, 0, 0, 504, 0, 0, 0, 0, 505, 0, 0, 0, 0, 0, 506, 0, 507, 0, 0, 0, 508, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 509, 0, 510, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 511, 0, 512, 0, 513, 0, 0, 0, 514, 0, 0, 0, 515, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 516, 0, 517, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 518,
    0, 519, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 520, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 521, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 522, 0, 523, 0, 0, 0, 0, 0, 524, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 525, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 526, 0, 527, 0, 528, 0, 0, 0, 529, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 530, 0, 531, 0, 0, 0, 0, 0, 532, 0, 0, 0, 0, 0, 533, 0, 534, 0, 0, 0, 0, 0, 0,
    0, 535, 0, 0, 536, 0, 0, 537, 0, 0, 0, 0, 538, 0, 0, 539, 0, 0, 540, 0, 0, 0, 0, 0, 541, 0, 0, 542, 0, 0, 0, 0,
    0, 0, 543, 0, 0, 544, 0, 0, 0, 545, 0, 0, 0, 0, 0, 546, 0, 0, 0, 547, 0, 0, 548, 0, 549, 0, 550, 0, 551, 0, 552, 0,
    0, 0, 0, 0, 0, 0, 553, 0, 0, 0, 0, 554, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 555, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 556, 0, 0, 557, 0, 558, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 559, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 560, 0, 0, 561, 0, 562, 0, 563, 0, 0, 0,
    0, 0, 564, 0, 0, 0, 0, 0, 0, 0, 0, 565, 0, 0, 0, 0, 0, 0, 566, 0, 567, 0, 0, 0, 568, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 569, 0, 570, 0, 0, 0, 0, 0, 571, 0, 0, 0, 0, 0, 572, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 573, 0, 574, 0, 0, 575, 0, 0, 0, 0, 576, 0, 577, 0, 0, 578, 579, 580, 0, 0, 581, 0, 0, 0, 0,
    582, 0, 583, 0, 0, 584, 585, 0, 0, 0, 586, 0, 587, 0, 0, 588, 0, 0, 0, 0, 589, 0, 0, 0, 0, 0, 0, 0, 0, 590, 0, 0,
    0, 591, 0, 0, 592, 0, 0, 0, 593, 0, 0, 594, 0, 0, 595, 0, 0, 0, 596, 0, 0, 597, 0, 598, 0, 0, 0, 599, 0, 600, 0, 601,
    0, 602, 0, 603, 0, 604, 0, 0, 0, 605, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 606, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 607, 0, 0, 608, 0, 0, 609, 0, 0, 610, 0, 0, 611, 0, 0, 0, 0, 612, 0, 0,
    613, 0, 0, 614, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    615, 0, 0, 0, 0, 0, 0, 616, 0, 0, 0, 0, 0, 617, 0, 0, 0, 0, 618, 0, 619, 0, 0, 0, 620, 0, 0, 621, 0, 0, 622, 0,
    623, 0, 0, 0, 624, 0, 0, 625, 0, 0, 626, 0, 627, 0, 0, 628, 0, 0, 629, 0, 630, 0, 631, 0, 0, 0, 632, 0, 633, 0, 0, 634,
    635, 0, 636, 0, 0, 637, 638, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 639, 640, 0, 641, 0, 0, 642, 0, 643, 0, 0, 0, 0,
    0, 0, 644, 0, 645, 0, 0, 646, 647, 0, 0, 0, 0, 0, 0, 648, 0, 0, 0, 649, 0, 650, 0, 0, 651, 0, 652, 0, 653, 0, 654, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 655, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 656, 0, 657, 0, 0, 0, 0, 0, 0,
    0, 0, 658, 0, 0, 0, 0, 0, 0, 659, 0, 660, 0, 0, 661, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 662, 0, 663, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 664, 0, 0, 665, 0, 666, 0, 0, 0, 0, 667, 0, 668, 0, 0,
    669, 0, 670, 0, 671, 0, 672, 0, 673, 0, 674, 0, 675, 0, 676, 0, 677, 0, 0, 678, 0, 679, 0, 680, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 681, 0, 0, 0, 0, 0, 0, 0, 0, 682, 0, 683, 0, 0, 0, 0, 0, 0, 0, 0, 684, 0, 0, 0, 0, 0, 0, 0, 0, 685,
    0, 0, 686, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 687, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 688, 0, 0, 0,
    0, 0, 689, 0, 0, 690, 0, 0, 0, 0, 0, 0, 0, 0, 0, 691, 0, 692, 693, 0, 0, 0, 0, 694, 0, 695, 696, 0, 697, 0, 698,
};
void recomp_unit_0101_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08998000u;
        entry_id = (entry_delta < 16380u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0101[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08998000;
    case 2u: goto L_08998014;
    case 3u: goto L_08998030;
    case 4u: goto L_08998050;
    case 5u: goto L_08998084;
    case 6u: goto L_089980B0;
    case 7u: goto L_089980CC;
    case 8u: goto L_08998100;
    case 9u: goto L_0899810C;
    case 10u: goto L_0899812C;
    case 11u: goto L_08998148;
    case 12u: goto L_0899815C;
    case 13u: goto L_08998164;
    case 14u: goto L_0899816C;
    case 15u: goto L_08998174;
    case 16u: goto L_0899817C;
    case 17u: goto L_08998184;
    case 18u: goto L_0899818C;
    case 19u: goto L_08998194;
    case 20u: goto L_0899819C;
    case 21u: goto L_089981A4;
    case 22u: goto L_089981AC;
    case 23u: goto L_089981B4;
    case 24u: goto L_089981BC;
    case 25u: goto L_089981CC;
    case 26u: goto L_089981D4;
    case 27u: goto L_089981EC;
    case 28u: goto L_08998200;
    case 29u: goto L_0899820C;
    case 30u: goto L_0899821C;
    case 31u: goto L_08998230;
    case 32u: goto L_0899823C;
    case 33u: goto L_0899824C;
    case 34u: goto L_08998260;
    case 35u: goto L_0899826C;
    case 36u: goto L_0899827C;
    case 37u: goto L_08998290;
    case 38u: goto L_0899829C;
    case 39u: goto L_089982AC;
    case 40u: goto L_089982C0;
    case 41u: goto L_089982CC;
    case 42u: goto L_089982DC;
    case 43u: goto L_089982F0;
    case 44u: goto L_089982FC;
    case 45u: goto L_0899830C;
    case 46u: goto L_08998320;
    case 47u: goto L_0899832C;
    case 48u: goto L_0899833C;
    case 49u: goto L_08998350;
    case 50u: goto L_0899835C;
    case 51u: goto L_0899836C;
    case 52u: goto L_08998380;
    case 53u: goto L_0899838C;
    case 54u: goto L_0899839C;
    case 55u: goto L_089983B0;
    case 56u: goto L_089983BC;
    case 57u: goto L_089983CC;
    case 58u: goto L_089983E0;
    case 59u: goto L_089983EC;
    case 60u: goto L_089983FC;
    case 61u: goto L_08998410;
    case 62u: goto L_0899841C;
    case 63u: goto L_0899842C;
    case 64u: goto L_08998440;
    case 65u: goto L_0899844C;
    case 66u: goto L_0899845C;
    case 67u: goto L_08998470;
    case 68u: goto L_0899847C;
    case 69u: goto L_0899848C;
    case 70u: goto L_089984A0;
    case 71u: goto L_089984AC;
    case 72u: goto L_089984BC;
    case 73u: goto L_08998554;
    case 74u: goto L_0899858C;
    case 75u: goto L_08998594;
    case 76u: goto L_089985F0;
    case 77u: goto L_08998600;
    case 78u: goto L_08998634;
    case 79u: goto L_08998668;
    case 80u: goto L_08998674;
    case 81u: goto L_08998694;
    case 82u: goto L_089986A0;
    case 83u: goto L_089986AC;
    case 84u: goto L_089986F4;
    case 85u: goto L_08998700;
    case 86u: goto L_08998708;
    case 87u: goto L_0899870C;
    case 88u: goto L_08998764;
    case 89u: goto L_08998774;
    case 90u: goto L_08998780;
    case 91u: goto L_08998794;
    case 92u: goto L_089987A4;
    case 93u: goto L_089987AC;
    case 94u: goto L_089987E4;
    case 95u: goto L_089987F0;
    case 96u: goto L_089987FC;
    case 97u: goto L_0899880C;
    case 98u: goto L_08998890;
    case 99u: goto L_08998894;
    case 100u: goto L_089988B0;
    case 101u: goto L_089988C8;
    case 102u: goto L_089988F4;
    case 103u: goto L_0899894C;
    case 104u: goto L_08998990;
    case 105u: goto L_08998998;
    case 106u: goto L_089989A8;
    case 107u: goto L_089989BC;
    case 108u: goto L_08998A08;
    case 109u: goto L_08998A10;
    case 110u: goto L_08998A20;
    case 111u: goto L_08998A30;
    case 112u: goto L_08998A7C;
    case 113u: goto L_08998A84;
    case 114u: goto L_08998A94;
    case 115u: goto L_08998AA8;
    case 116u: goto L_08998AEC;
    case 117u: goto L_08998AF8;
    case 118u: goto L_08998B10;
    case 119u: goto L_08998B4C;
    case 120u: goto L_08998B54;
    case 121u: goto L_08998D14;
    case 122u: goto L_08998D1C;
    case 123u: goto L_08998D38;
    case 124u: goto L_08998D50;
    case 125u: goto L_08998D78;
    case 126u: goto L_08998DE0;
    case 127u: goto L_08998DF0;
    case 128u: goto L_08998DF8;
    case 129u: goto L_08998E00;
    case 130u: goto L_08998E10;
    case 131u: goto L_08998E1C;
    case 132u: goto L_08998E40;
    case 133u: goto L_08998E58;
    case 134u: goto L_08998E7C;
    case 135u: goto L_08998E88;
    case 136u: goto L_08998EAC;
    case 137u: goto L_08998EC4;
    case 138u: goto L_08998ED0;
    case 139u: goto L_08998EF4;
    case 140u: goto L_08998F0C;
    case 141u: goto L_08998F18;
    case 142u: goto L_08998F3C;
    case 143u: goto L_08998F54;
    case 144u: goto L_08998F60;
    case 145u: goto L_08998F84;
    case 146u: goto L_08998F9C;
    case 147u: goto L_08998FA8;
    case 148u: goto L_08998FCC;
    case 149u: goto L_08998FDC;
    case 150u: goto L_08999008;
    case 151u: goto L_08999014;
    case 152u: goto L_08999038;
    case 153u: goto L_08999050;
    case 154u: goto L_0899905C;
    case 155u: goto L_08999080;
    case 156u: goto L_08999098;
    case 157u: goto L_089990A4;
    case 158u: goto L_089990C8;
    case 159u: goto L_089990E0;
    case 160u: goto L_089990EC;
    case 161u: goto L_08999110;
    case 162u: goto L_08999128;
    case 163u: goto L_08999134;
    case 164u: goto L_08999158;
    case 165u: goto L_08999178;
    case 166u: goto L_089991A0;
    case 167u: goto L_089991C8;
    case 168u: goto L_089991F0;
    case 169u: goto L_08999218;
    case 170u: goto L_08999240;
    case 171u: goto L_08999268;
    case 172u: goto L_08999294;
    case 173u: goto L_089992BC;
    case 174u: goto L_089992E4;
    case 175u: goto L_0899930C;
    case 176u: goto L_08999334;
    case 177u: goto L_0899935C;
    case 178u: goto L_08999384;
    case 179u: goto L_089993AC;
    case 180u: goto L_089993D4;
    case 181u: goto L_089993FC;
    case 182u: goto L_08999424;
    case 183u: goto L_0899944C;
    case 184u: goto L_08999474;
    case 185u: goto L_0899949C;
    case 186u: goto L_089994C4;
    case 187u: goto L_089994EC;
    case 188u: goto L_08999514;
    case 189u: goto L_0899953C;
    case 190u: goto L_08999558;
    case 191u: goto L_08999600;
    case 192u: goto L_08999618;
    case 193u: goto L_08999630;
    case 194u: goto L_08999638;
    case 195u: goto L_08999640;
    case 196u: goto L_0899964C;
    case 197u: goto L_08999654;
    case 198u: goto L_0899965C;
    case 199u: goto L_08999664;
    case 200u: goto L_08999670;
    case 201u: goto L_08999678;
    case 202u: goto L_08999680;
    case 203u: goto L_08999688;
    case 204u: goto L_08999694;
    case 205u: goto L_089996A0;
    case 206u: goto L_089996A8;
    case 207u: goto L_089996B0;
    case 208u: goto L_089996BC;
    case 209u: goto L_089996C4;
    case 210u: goto L_089996CC;
    case 211u: goto L_089996D4;
    case 212u: goto L_089996DC;
    case 213u: goto L_089996E8;
    case 214u: goto L_089996F4;
    case 215u: goto L_089996FC;
    case 216u: goto L_08999704;
    case 217u: goto L_0899970C;
    case 218u: goto L_08999714;
    case 219u: goto L_0899971C;
    case 220u: goto L_08999724;
    case 221u: goto L_0899972C;
    case 222u: goto L_08999734;
    case 223u: goto L_0899973C;
    case 224u: goto L_08999744;
    case 225u: goto L_0899974C;
    case 226u: goto L_08999758;
    case 227u: goto L_08999764;
    case 228u: goto L_08999770;
    case 229u: goto L_08999778;
    case 230u: goto L_08999780;
    case 231u: goto L_08999788;
    case 232u: goto L_08999790;
    case 233u: goto L_08999798;
    case 234u: goto L_089997A0;
    case 235u: goto L_089997A8;
    case 236u: goto L_089997B0;
    case 237u: goto L_089997B8;
    case 238u: goto L_089997C0;
    case 239u: goto L_089997C8;
    case 240u: goto L_089997D0;
    case 241u: goto L_089997D8;
    case 242u: goto L_089997E0;
    case 243u: goto L_089997E8;
    case 244u: goto L_089997F0;
    case 245u: goto L_089997F8;
    case 246u: goto L_08999800;
    case 247u: goto L_08999808;
    case 248u: goto L_08999810;
    case 249u: goto L_08999818;
    case 250u: goto L_08999820;
    case 251u: goto L_08999828;
    case 252u: goto L_08999834;
    case 253u: goto L_0899983C;
    case 254u: goto L_08999844;
    case 255u: goto L_0899984C;
    case 256u: goto L_08999854;
    case 257u: goto L_0899985C;
    case 258u: goto L_08999864;
    case 259u: goto L_0899986C;
    case 260u: goto L_08999874;
    case 261u: goto L_0899987C;
    case 262u: goto L_08999888;
    case 263u: goto L_08999894;
    case 264u: goto L_0899989C;
    case 265u: goto L_089998A4;
    case 266u: goto L_089998AC;
    case 267u: goto L_089998BC;
    case 268u: goto L_089998C8;
    case 269u: goto L_089998F8;
    case 270u: goto L_08999974;
    case 271u: goto L_08999984;
    case 272u: goto L_089999B8;
    case 273u: goto L_089999C0;
    case 274u: goto L_089999C8;
    case 275u: goto L_089999D0;
    case 276u: goto L_08999A20;
    case 277u: goto L_08999A28;
    case 278u: goto L_08999A44;
    case 279u: goto L_08999A54;
    case 280u: goto L_08999A64;
    case 281u: goto L_08999A80;
    case 282u: goto L_08999A98;
    case 283u: goto L_08999AB0;
    case 284u: goto L_08999AC4;
    case 285u: goto L_08999ACC;
    case 286u: goto L_08999AD4;
    case 287u: goto L_08999ADC;
    case 288u: goto L_08999B08;
    case 289u: goto L_08999B14;
    case 290u: goto L_08999B2C;
    case 291u: goto L_08999B3C;
    case 292u: goto L_08999B48;
    case 293u: goto L_08999B64;
    case 294u: goto L_08999B78;
    case 295u: goto L_08999C18;
    case 296u: goto L_08999C20;
    case 297u: goto L_08999C2C;
    case 298u: goto L_08999C30;
    case 299u: goto L_08999C38;
    case 300u: goto L_08999C40;
    case 301u: goto L_08999C48;
    case 302u: goto L_08999C4C;
    case 303u: goto L_08999C54;
    case 304u: goto L_08999C5C;
    case 305u: goto L_08999C64;
    case 306u: goto L_08999C68;
    case 307u: goto L_08999C74;
    case 308u: goto L_08999C7C;
    case 309u: goto L_08999C84;
    case 310u: goto L_08999C8C;
    case 311u: goto L_08999C94;
    case 312u: goto L_08999CA4;
    case 313u: goto L_08999CB0;
    case 314u: goto L_08999CC4;
    case 315u: goto L_08999CCC;
    case 316u: goto L_08999D08;
    case 317u: goto L_08999D44;
    case 318u: goto L_08999D4C;
    case 319u: goto L_08999D78;
    case 320u: goto L_08999D8C;
    case 321u: goto L_08999D94;
    case 322u: goto L_08999DD0;
    case 323u: goto L_08999E0C;
    case 324u: goto L_08999E14;
    case 325u: goto L_08999E40;
    case 326u: goto L_08999E54;
    case 327u: goto L_08999E64;
    case 328u: goto L_08999E6C;
    case 329u: goto L_08999EA8;
    case 330u: goto L_08999EB4;
    case 331u: goto L_08999EBC;
    case 332u: goto L_08999EE8;
    case 333u: goto L_08999EF4;
    case 334u: goto L_08999EFC;
    case 335u: goto L_08999F38;
    case 336u: goto L_08999F48;
    case 337u: goto L_08999F54;
    case 338u: goto L_08999F68;
    case 339u: goto L_08999F74;
    case 340u: goto L_08999F88;
    case 341u: goto L_08999F94;
    case 342u: goto L_08999FAC;
    case 343u: goto L_08999FB8;
    case 344u: goto L_08999FC8;
    case 345u: goto L_08999FD0;
    case 346u: goto L_08999FE0;
    case 347u: goto L_08999FEC;
    case 348u: goto L_0899A000;
    case 349u: goto L_0899A00C;
    case 350u: goto L_0899A020;
    case 351u: goto L_0899A02C;
    case 352u: goto L_0899A044;
    case 353u: goto L_0899A050;
    case 354u: goto L_0899A060;
    case 355u: goto L_0899A064;
    case 356u: goto L_0899A074;
    case 357u: goto L_0899A084;
    case 358u: goto L_0899A090;
    case 359u: goto L_0899A098;
    case 360u: goto L_0899A0A8;
    case 361u: goto L_0899A10C;
    case 362u: goto L_0899A114;
    case 363u: goto L_0899A12C;
    case 364u: goto L_0899A15C;
    case 365u: goto L_0899A164;
    case 366u: goto L_0899A16C;
    case 367u: goto L_0899A17C;
    case 368u: goto L_0899A18C;
    case 369u: goto L_0899A1A4;
    case 370u: goto L_0899A1B4;
    case 371u: goto L_0899A1C0;
    case 372u: goto L_0899A1C8;
    case 373u: goto L_0899A1D0;
    case 374u: goto L_0899A1DC;
    case 375u: goto L_0899A1E4;
    case 376u: goto L_0899A1FC;
    case 377u: goto L_0899A204;
    case 378u: goto L_0899A24C;
    case 379u: goto L_0899A260;
    case 380u: goto L_0899A27C;
    case 381u: goto L_0899A284;
    case 382u: goto L_0899A2A4;
    case 383u: goto L_0899A2CC;
    case 384u: goto L_0899A2F8;
    case 385u: goto L_0899A314;
    case 386u: goto L_0899A31C;
    case 387u: goto L_0899A33C;
    case 388u: goto L_0899A364;
    case 389u: goto L_0899A390;
    case 390u: goto L_0899A3A8;
    case 391u: goto L_0899A3B8;
    case 392u: goto L_0899A3BC;
    case 393u: goto L_0899A3D4;
    case 394u: goto L_0899A418;
    case 395u: goto L_0899A478;
    case 396u: goto L_0899A480;
    case 397u: goto L_0899A5D4;
    case 398u: goto L_0899A5E8;
    case 399u: goto L_0899A5F8;
    case 400u: goto L_0899A60C;
    case 401u: goto L_0899A620;
    case 402u: goto L_0899A634;
    case 403u: goto L_0899A638;
    case 404u: goto L_0899A698;
    case 405u: goto L_0899A6C8;
    case 406u: goto L_0899A6D8;
    case 407u: goto L_0899A6DC;
    case 408u: goto L_0899A704;
    case 409u: goto L_0899A758;
    case 410u: goto L_0899A820;
    case 411u: goto L_0899A83C;
    case 412u: goto L_0899A88C;
    case 413u: goto L_0899A894;
    case 414u: goto L_0899A8A0;
    case 415u: goto L_0899A8BC;
    case 416u: goto L_0899A8E8;
    case 417u: goto L_0899A8FC;
    case 418u: goto L_0899A924;
    case 419u: goto L_0899A97C;
    case 420u: goto L_0899A98C;
    case 421u: goto L_0899A99C;
    case 422u: goto L_0899A9AC;
    case 423u: goto L_0899A9BC;
    case 424u: goto L_0899A9CC;
    case 425u: goto L_0899A9DC;
    case 426u: goto L_0899A9EC;
    case 427u: goto L_0899A9F4;
    case 428u: goto L_0899AA04;
    case 429u: goto L_0899AA14;
    case 430u: goto L_0899AA34;
    case 431u: goto L_0899AA54;
    case 432u: goto L_0899AA5C;
    case 433u: goto L_0899AA68;
    case 434u: goto L_0899AA74;
    case 435u: goto L_0899AA7C;
    case 436u: goto L_0899AA84;
    case 437u: goto L_0899AAC8;
    case 438u: goto L_0899AAE0;
    case 439u: goto L_0899AAEC;
    case 440u: goto L_0899AAF4;
    case 441u: goto L_0899AB00;
    case 442u: goto L_0899AB18;
    case 443u: goto L_0899AB34;
    case 444u: goto L_0899AB40;
    case 445u: goto L_0899AB50;
    case 446u: goto L_0899AB5C;
    case 447u: goto L_0899ABE8;
    case 448u: goto L_0899ABF0;
    case 449u: goto L_0899ABFC;
    case 450u: goto L_0899AC00;
    case 451u: goto L_0899AC08;
    case 452u: goto L_0899AC10;
    case 453u: goto L_0899AC18;
    case 454u: goto L_0899AC1C;
    case 455u: goto L_0899AC24;
    case 456u: goto L_0899AC2C;
    case 457u: goto L_0899AC34;
    case 458u: goto L_0899AC38;
    case 459u: goto L_0899AC48;
    case 460u: goto L_0899AC58;
    case 461u: goto L_0899AC68;
    case 462u: goto L_0899ACAC;
    case 463u: goto L_0899ACC0;
    case 464u: goto L_0899ACD4;
    case 465u: goto L_0899ACE8;
    case 466u: goto L_0899ACF0;
    case 467u: goto L_0899AD00;
    case 468u: goto L_0899AD18;
    case 469u: goto L_0899AD58;
    case 470u: goto L_0899AD70;
    case 471u: goto L_0899AD80;
    case 472u: goto L_0899AD90;
    case 473u: goto L_0899AD9C;
    case 474u: goto L_0899ADAC;
    case 475u: goto L_0899ADBC;
    case 476u: goto L_0899ADC0;
    case 477u: goto L_0899ADD8;
    case 478u: goto L_0899AE0C;
    case 479u: goto L_0899AE20;
    case 480u: goto L_0899AE28;
    case 481u: goto L_0899AE30;
    case 482u: goto L_0899AE44;
    case 483u: goto L_0899AE4C;
    case 484u: goto L_0899AE50;
    case 485u: goto L_0899AE60;
    case 486u: goto L_0899AE6C;
    case 487u: goto L_0899AE74;
    case 488u: goto L_0899AE7C;
    case 489u: goto L_0899AE84;
    case 490u: goto L_0899AEA8;
    case 491u: goto L_0899AEB0;
    case 492u: goto L_0899AEBC;
    case 493u: goto L_0899AEE0;
    case 494u: goto L_0899AEE8;
    case 495u: goto L_0899AF00;
    case 496u: goto L_0899AF24;
    case 497u: goto L_0899AF48;
    case 498u: goto L_0899AF6C;
    case 499u: goto L_0899AF90;
    case 500u: goto L_0899AFA8;
    case 501u: goto L_0899AFCC;
    case 502u: goto L_0899AFE8;
    case 503u: goto L_0899AFF8;
    case 504u: goto L_0899B010;
    case 505u: goto L_0899B024;
    case 506u: goto L_0899B03C;
    case 507u: goto L_0899B044;
    case 508u: goto L_0899B054;
    case 509u: goto L_0899B0B0;
    case 510u: goto L_0899B0B8;
    case 511u: goto L_0899B110;
    case 512u: goto L_0899B118;
    case 513u: goto L_0899B120;
    case 514u: goto L_0899B130;
    case 515u: goto L_0899B140;
    case 516u: goto L_0899B19C;
    case 517u: goto L_0899B1A4;
    case 518u: goto L_0899B1FC;
    case 519u: goto L_0899B204;
    case 520u: goto L_0899B248;
    case 521u: goto L_0899B274;
    case 522u: goto L_0899B2BC;
    case 523u: goto L_0899B2C4;
    case 524u: goto L_0899B2DC;
    case 525u: goto L_0899B308;
    case 526u: goto L_0899B350;
    case 527u: goto L_0899B358;
    case 528u: goto L_0899B360;
    case 529u: goto L_0899B370;
    case 530u: goto L_0899B3A4;
    case 531u: goto L_0899B3AC;
    case 532u: goto L_0899B3C4;
    case 533u: goto L_0899B3DC;
    case 534u: goto L_0899B3E4;
    case 535u: goto L_0899B404;
    case 536u: goto L_0899B410;
    case 537u: goto L_0899B41C;
    case 538u: goto L_0899B430;
    case 539u: goto L_0899B43C;
    case 540u: goto L_0899B448;
    case 541u: goto L_0899B460;
    case 542u: goto L_0899B46C;
    case 543u: goto L_0899B488;
    case 544u: goto L_0899B494;
    case 545u: goto L_0899B4A4;
    case 546u: goto L_0899B4BC;
    case 547u: goto L_0899B4CC;
    case 548u: goto L_0899B4D8;
    case 549u: goto L_0899B4E0;
    case 550u: goto L_0899B4E8;
    case 551u: goto L_0899B4F0;
    case 552u: goto L_0899B4F8;
    case 553u: goto L_0899B518;
    case 554u: goto L_0899B52C;
    case 555u: goto L_0899B558;
    case 556u: goto L_0899B5B0;
    case 557u: goto L_0899B5BC;
    case 558u: goto L_0899B5C4;
    case 559u: goto L_0899B5F0;
    case 560u: goto L_0899B654;
    case 561u: goto L_0899B660;
    case 562u: goto L_0899B668;
    case 563u: goto L_0899B670;
    case 564u: goto L_0899B688;
    case 565u: goto L_0899B6AC;
    case 566u: goto L_0899B6C8;
    case 567u: goto L_0899B6D0;
    case 568u: goto L_0899B6E0;
    case 569u: goto L_0899B714;
    case 570u: goto L_0899B71C;
    case 571u: goto L_0899B734;
    case 572u: goto L_0899B74C;
    case 573u: goto L_0899B79C;
    case 574u: goto L_0899B7A4;
    case 575u: goto L_0899B7B0;
    case 576u: goto L_0899B7C4;
    case 577u: goto L_0899B7CC;
    case 578u: goto L_0899B7D8;
    case 579u: goto L_0899B7DC;
    case 580u: goto L_0899B7E0;
    case 581u: goto L_0899B7EC;
    case 582u: goto L_0899B800;
    case 583u: goto L_0899B808;
    case 584u: goto L_0899B814;
    case 585u: goto L_0899B818;
    case 586u: goto L_0899B828;
    case 587u: goto L_0899B830;
    case 588u: goto L_0899B83C;
    case 589u: goto L_0899B850;
    case 590u: goto L_0899B874;
    case 591u: goto L_0899B884;
    case 592u: goto L_0899B890;
    case 593u: goto L_0899B8A0;
    case 594u: goto L_0899B8AC;
    case 595u: goto L_0899B8B8;
    case 596u: goto L_0899B8C8;
    case 597u: goto L_0899B8D4;
    case 598u: goto L_0899B8DC;
    case 599u: goto L_0899B8EC;
    case 600u: goto L_0899B8F4;
    case 601u: goto L_0899B8FC;
    case 602u: goto L_0899B904;
    case 603u: goto L_0899B90C;
    case 604u: goto L_0899B914;
    case 605u: goto L_0899B924;
    case 606u: goto L_0899B960;
    case 607u: goto L_0899B9B0;
    case 608u: goto L_0899B9BC;
    case 609u: goto L_0899B9C8;
    case 610u: goto L_0899B9D4;
    case 611u: goto L_0899B9E0;
    case 612u: goto L_0899B9F4;
    case 613u: goto L_0899BA00;
    case 614u: goto L_0899BA0C;
    case 615u: goto L_0899BA80;
    case 616u: goto L_0899BA9C;
    case 617u: goto L_0899BAB4;
    case 618u: goto L_0899BAC8;
    case 619u: goto L_0899BAD0;
    case 620u: goto L_0899BAE0;
    case 621u: goto L_0899BAEC;
    case 622u: goto L_0899BAF8;
    case 623u: goto L_0899BB00;
    case 624u: goto L_0899BB10;
    case 625u: goto L_0899BB1C;
    case 626u: goto L_0899BB28;
    case 627u: goto L_0899BB30;
    case 628u: goto L_0899BB3C;
    case 629u: goto L_0899BB48;
    case 630u: goto L_0899BB50;
    case 631u: goto L_0899BB58;
    case 632u: goto L_0899BB68;
    case 633u: goto L_0899BB70;
    case 634u: goto L_0899BB7C;
    case 635u: goto L_0899BB80;
    case 636u: goto L_0899BB88;
    case 637u: goto L_0899BB94;
    case 638u: goto L_0899BB98;
    case 639u: goto L_0899BBCC;
    case 640u: goto L_0899BBD0;
    case 641u: goto L_0899BBD8;
    case 642u: goto L_0899BBE4;
    case 643u: goto L_0899BBEC;
    case 644u: goto L_0899BC08;
    case 645u: goto L_0899BC10;
    case 646u: goto L_0899BC1C;
    case 647u: goto L_0899BC20;
    case 648u: goto L_0899BC3C;
    case 649u: goto L_0899BC4C;
    case 650u: goto L_0899BC54;
    case 651u: goto L_0899BC60;
    case 652u: goto L_0899BC68;
    case 653u: goto L_0899BC70;
    case 654u: goto L_0899BC78;
    case 655u: goto L_0899BCAC;
    case 656u: goto L_0899BCDC;
    case 657u: goto L_0899BCE4;
    case 658u: goto L_0899BD08;
    case 659u: goto L_0899BD24;
    case 660u: goto L_0899BD2C;
    case 661u: goto L_0899BD38;
    case 662u: goto L_0899BD8C;
    case 663u: goto L_0899BD94;
    case 664u: goto L_0899BDC4;
    case 665u: goto L_0899BDD0;
    case 666u: goto L_0899BDD8;
    case 667u: goto L_0899BDEC;
    case 668u: goto L_0899BDF4;
    case 669u: goto L_0899BE00;
    case 670u: goto L_0899BE08;
    case 671u: goto L_0899BE10;
    case 672u: goto L_0899BE18;
    case 673u: goto L_0899BE20;
    case 674u: goto L_0899BE28;
    case 675u: goto L_0899BE30;
    case 676u: goto L_0899BE38;
    case 677u: goto L_0899BE40;
    case 678u: goto L_0899BE4C;
    case 679u: goto L_0899BE54;
    case 680u: goto L_0899BE5C;
    case 681u: goto L_0899BE88;
    case 682u: goto L_0899BEAC;
    case 683u: goto L_0899BEB4;
    case 684u: goto L_0899BED8;
    case 685u: goto L_0899BEFC;
    case 686u: goto L_0899BF08;
    case 687u: goto L_0899BF34;
    case 688u: goto L_0899BF70;
    case 689u: goto L_0899BF88;
    case 690u: goto L_0899BF94;
    case 691u: goto L_0899BFBC;
    case 692u: goto L_0899BFC4;
    case 693u: goto L_0899BFC8;
    case 694u: goto L_0899BFDC;
    case 695u: goto L_0899BFE4;
    case 696u: goto L_0899BFE8;
    case 697u: goto L_0899BFF0;
    case 698u: goto L_0899BFF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08998000:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08998014u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 702u, 0x089BF670u>(ctx, &aot_mem) && ctx.pc == 0x08998014u) goto L_08998014;
    return;
L_08998014:
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    ctx.execute_vfpu_cross_quat(0u, 1u, 2u, 3u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x08998030u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 700u, 0x089BF64Cu>(ctx, &aot_mem) && ctx.pc == 0x08998030u) goto L_08998030;
    return;
L_08998030:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08998050:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08998084u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 702u, 0x089BF670u>(ctx, &aot_mem) && ctx.pc == 0x08998084u) goto L_08998084;
    return;
L_08998084:
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089980B0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 700u, 0x089BF64Cu>(ctx, &aot_mem) && ctx.pc == 0x089980B0u) goto L_089980B0;
    return;
L_089980B0:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
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
L_089980CC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08998100u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 702u, 0x089BF670u>(ctx, &aot_mem) && ctx.pc == 0x08998100u) goto L_08998100;
    return;
L_08998100:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0899810Cu);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 610u, 0x0890B834u>(ctx, &aot_mem) && ctx.pc == 0x0899810Cu) goto L_0899810C;
    return;
L_0899810C:
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x0899812Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 700u, 0x089BF64Cu>(ctx, &aot_mem) && ctx.pc == 0x0899812Cu) goto L_0899812C;
    return;
L_0899812C:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
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
L_08998148:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x0899815Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 824u, 0x089BFE98u>(ctx, &aot_mem) && ctx.pc == 0x0899815Cu) goto L_0899815C;
    return;
L_0899815C:
    ctx.gpr[31] = (0x08998164u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 166u, 0x08A4CA98u>(ctx, &aot_mem) && ctx.pc == 0x08998164u) goto L_08998164;
    return;
L_08998164:
    ctx.gpr[31] = (0x0899816Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 368u, 0x08A05534u>(ctx, &aot_mem) && ctx.pc == 0x0899816Cu) goto L_0899816C;
    return;
L_0899816C:
    ctx.gpr[31] = (0x08998174u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 235u, 0x08965098u>(ctx, &aot_mem) && ctx.pc == 0x08998174u) goto L_08998174;
    return;
L_08998174:
    ctx.gpr[31] = (0x0899817Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 644u, 0x08963340u>(ctx, &aot_mem) && ctx.pc == 0x0899817Cu) goto L_0899817C;
    return;
L_0899817C:
    ctx.gpr[31] = (0x08998184u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0173_entry, 173u, 80u, 0x08AB8490u>(ctx, &aot_mem) && ctx.pc == 0x08998184u) goto L_08998184;
    return;
L_08998184:
    ctx.gpr[31] = (0x0899818Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 64u, 0x088044FCu>(ctx, &aot_mem) && ctx.pc == 0x0899818Cu) goto L_0899818C;
    return;
L_0899818C:
    ctx.gpr[31] = (0x08998194u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 102u, 0x088047ACu>(ctx, &aot_mem) && ctx.pc == 0x08998194u) goto L_08998194;
    return;
L_08998194:
    ctx.gpr[31] = (0x0899819Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 500u, 0x0890AFC4u>(ctx, &aot_mem) && ctx.pc == 0x0899819Cu) goto L_0899819C;
    return;
L_0899819C:
    ctx.gpr[31] = (0x089981A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 735u, 0x08997724u>(ctx, &aot_mem) && ctx.pc == 0x089981A4u) goto L_089981A4;
    return;
L_089981A4:
    ctx.gpr[31] = (0x089981ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 216u, 0x088E93D8u>(ctx, &aot_mem) && ctx.pc == 0x089981ACu) goto L_089981AC;
    return;
L_089981AC:
    ctx.gpr[31] = (0x089981B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 534u, 0x08A2E708u>(ctx, &aot_mem) && ctx.pc == 0x089981B4u) goto L_089981B4;
    return;
L_089981B4:
    ctx.gpr[31] = (0x089981BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 338u, 0x088E9DC4u>(ctx, &aot_mem) && ctx.pc == 0x089981BCu) goto L_089981BC;
    return;
L_089981BC:
    ctx.gpr[16] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-21000)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089981D4;
      }
      goto L_089981CC;
    }
L_089981CC:
    ctx.gpr[31] = (0x089981D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 315u, 0x08AF96A0u>(ctx, &aot_mem) && ctx.pc == 0x089981D4u) goto L_089981D4;
    return;
L_089981D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-21000)));
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-19876));
    ctx.gpr[31] = (0x089981ECu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 680u, 0x0890BC14u>(ctx, &aot_mem) && ctx.pc == 0x089981ECu) goto L_089981EC;
    return;
L_089981EC:
    ctx.gpr[5] = (2201u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08998200u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(31840));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 694u, 0x0890BD50u>(ctx, &aot_mem) && ctx.pc == 0x08998200u) goto L_08998200;
    return;
L_08998200:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0899820Cu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-10001));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 20u, 0x0890C174u>(ctx, &aot_mem) && ctx.pc == 0x0899820Cu) goto L_0899820C;
    return;
L_0899820C:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0899821Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-19860));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 680u, 0x0890BC14u>(ctx, &aot_mem) && ctx.pc == 0x0899821Cu) goto L_0899821C;
    return;
L_0899821C:
    ctx.gpr[5] = (2201u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08998230u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(31972));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 694u, 0x0890BD50u>(ctx, &aot_mem) && ctx.pc == 0x08998230u) goto L_08998230;
    return;
L_08998230:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0899823Cu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-10001));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 20u, 0x0890C174u>(ctx, &aot_mem) && ctx.pc == 0x0899823Cu) goto L_0899823C;
    return;
L_0899823C:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0899824Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-19844));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 680u, 0x0890BC14u>(ctx, &aot_mem) && ctx.pc == 0x0899824Cu) goto L_0899824C;
    return;
L_0899824C:
    ctx.gpr[5] = (2201u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08998260u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32084));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 694u, 0x0890BD50u>(ctx, &aot_mem) && ctx.pc == 0x08998260u) goto L_08998260;
    return;
L_08998260:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0899826Cu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-10001));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 20u, 0x0890C174u>(ctx, &aot_mem) && ctx.pc == 0x0899826Cu) goto L_0899826C;
    return;
L_0899826C:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0899827Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-19828));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 680u, 0x0890BC14u>(ctx, &aot_mem) && ctx.pc == 0x0899827Cu) goto L_0899827C;
    return;
L_0899827C:
    ctx.gpr[5] = (2201u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08998290u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32128));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 694u, 0x0890BD50u>(ctx, &aot_mem) && ctx.pc == 0x08998290u) goto L_08998290;
    return;
L_08998290:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0899829Cu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-10001));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 20u, 0x0890C174u>(ctx, &aot_mem) && ctx.pc == 0x0899829Cu) goto L_0899829C;
    return;
L_0899829C:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089982ACu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-19808));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 680u, 0x0890BC14u>(ctx, &aot_mem) && ctx.pc == 0x089982ACu) goto L_089982AC;
    return;
L_089982AC:
    ctx.gpr[5] = (2201u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x089982C0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32176));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 694u, 0x0890BD50u>(ctx, &aot_mem) && ctx.pc == 0x089982C0u) goto L_089982C0;
    return;
L_089982C0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089982CCu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-10001));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 20u, 0x0890C174u>(ctx, &aot_mem) && ctx.pc == 0x089982CCu) goto L_089982CC;
    return;
L_089982CC:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089982DCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-19792));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 680u, 0x0890BC14u>(ctx, &aot_mem) && ctx.pc == 0x089982DCu) goto L_089982DC;
    return;
L_089982DC:
    ctx.gpr[5] = (2201u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x089982F0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32208));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 694u, 0x0890BD50u>(ctx, &aot_mem) && ctx.pc == 0x089982F0u) goto L_089982F0;
    return;
L_089982F0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089982FCu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-10001));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 20u, 0x0890C174u>(ctx, &aot_mem) && ctx.pc == 0x089982FCu) goto L_089982FC;
    return;
L_089982FC:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0899830Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-19768));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 680u, 0x0890BC14u>(ctx, &aot_mem) && ctx.pc == 0x0899830Cu) goto L_0899830C;
    return;
L_0899830C:
    ctx.gpr[5] = (2201u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08998320u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32260));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 694u, 0x0890BD50u>(ctx, &aot_mem) && ctx.pc == 0x08998320u) goto L_08998320;
    return;
L_08998320:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0899832Cu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-10001));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 20u, 0x0890C174u>(ctx, &aot_mem) && ctx.pc == 0x0899832Cu) goto L_0899832C;
    return;
L_0899832C:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0899833Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-19752));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 680u, 0x0890BC14u>(ctx, &aot_mem) && ctx.pc == 0x0899833Cu) goto L_0899833C;
    return;
L_0899833C:
    ctx.gpr[5] = (2201u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08998350u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32312));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 694u, 0x0890BD50u>(ctx, &aot_mem) && ctx.pc == 0x08998350u) goto L_08998350;
    return;
L_08998350:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0899835Cu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-10001));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 20u, 0x0890C174u>(ctx, &aot_mem) && ctx.pc == 0x0899835Cu) goto L_0899835C;
    return;
L_0899835C:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0899836Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-19732));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 680u, 0x0890BC14u>(ctx, &aot_mem) && ctx.pc == 0x0899836Cu) goto L_0899836C;
    return;
L_0899836C:
    ctx.gpr[5] = (2201u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08998380u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32356));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 694u, 0x0890BD50u>(ctx, &aot_mem) && ctx.pc == 0x08998380u) goto L_08998380;
    return;
L_08998380:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0899838Cu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-10001));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 20u, 0x0890C174u>(ctx, &aot_mem) && ctx.pc == 0x0899838Cu) goto L_0899838C;
    return;
L_0899838C:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0899839Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-19712));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 680u, 0x0890BC14u>(ctx, &aot_mem) && ctx.pc == 0x0899839Cu) goto L_0899839C;
    return;
L_0899839C:
    ctx.gpr[5] = (2201u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x089983B0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32420));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 694u, 0x0890BD50u>(ctx, &aot_mem) && ctx.pc == 0x089983B0u) goto L_089983B0;
    return;
L_089983B0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089983BCu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-10001));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 20u, 0x0890C174u>(ctx, &aot_mem) && ctx.pc == 0x089983BCu) goto L_089983BC;
    return;
L_089983BC:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089983CCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-19688));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 680u, 0x0890BC14u>(ctx, &aot_mem) && ctx.pc == 0x089983CCu) goto L_089983CC;
    return;
L_089983CC:
    ctx.gpr[5] = (2201u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x089983E0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32476));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 694u, 0x0890BD50u>(ctx, &aot_mem) && ctx.pc == 0x089983E0u) goto L_089983E0;
    return;
L_089983E0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089983ECu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-10001));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 20u, 0x0890C174u>(ctx, &aot_mem) && ctx.pc == 0x089983ECu) goto L_089983EC;
    return;
L_089983EC:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089983FCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-19656));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 680u, 0x0890BC14u>(ctx, &aot_mem) && ctx.pc == 0x089983FCu) goto L_089983FC;
    return;
L_089983FC:
    ctx.gpr[5] = (2201u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08998410u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32548));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 694u, 0x0890BD50u>(ctx, &aot_mem) && ctx.pc == 0x08998410u) goto L_08998410;
    return;
L_08998410:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0899841Cu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-10001));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 20u, 0x0890C174u>(ctx, &aot_mem) && ctx.pc == 0x0899841Cu) goto L_0899841C;
    return;
L_0899841C:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0899842Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-19632));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 680u, 0x0890BC14u>(ctx, &aot_mem) && ctx.pc == 0x0899842Cu) goto L_0899842C;
    return;
L_0899842C:
    ctx.gpr[5] = (2201u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08998440u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32708));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 694u, 0x0890BD50u>(ctx, &aot_mem) && ctx.pc == 0x08998440u) goto L_08998440;
    return;
L_08998440:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0899844Cu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-10001));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 20u, 0x0890C174u>(ctx, &aot_mem) && ctx.pc == 0x0899844Cu) goto L_0899844C;
    return;
L_0899844C:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0899845Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-19616));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 680u, 0x0890BC14u>(ctx, &aot_mem) && ctx.pc == 0x0899845Cu) goto L_0899845C;
    return;
L_0899845C:
    ctx.gpr[5] = (2202u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08998470u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-32688));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 694u, 0x0890BD50u>(ctx, &aot_mem) && ctx.pc == 0x08998470u) goto L_08998470;
    return;
L_08998470:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0899847Cu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-10001));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 20u, 0x0890C174u>(ctx, &aot_mem) && ctx.pc == 0x0899847Cu) goto L_0899847C;
    return;
L_0899847C:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0899848Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-19600));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 680u, 0x0890BC14u>(ctx, &aot_mem) && ctx.pc == 0x0899848Cu) goto L_0899848C;
    return;
L_0899848C:
    ctx.gpr[5] = (2202u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x089984A0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-32564));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 694u, 0x0890BD50u>(ctx, &aot_mem) && ctx.pc == 0x089984A0u) goto L_089984A0;
    return;
L_089984A0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089984ACu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-10001));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 20u, 0x0890C174u>(ctx, &aot_mem) && ctx.pc == 0x089984ACu) goto L_089984AC;
    return;
L_089984AC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089984BC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-240));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(220), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(232), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(236), ctx.gpr[31]);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(240)));
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    ctx.gpr[6] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[6] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[22] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), ctx.gpr[8]);
    ctx.gpr[30] = (ctx.gpr[11] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), ctx.gpr[10]);
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
        goto L_08998554;
    }
    goto L_08998554;
L_08998554:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[20] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[20]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.set_vfpu_scalar_bits_ct<1u>(ctx.gpr[4]);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<1u, 1u>(vfpu_d); }
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 1u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
      if (branch_taken) {
          goto L_08998600;
      }
      goto L_0899858C;
    }
L_0899858C:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    goto L_08998594;
L_08998594:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[10] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x089985F0u);
    ctx.gpr[11] = (ctx.gpr[23] | 0u);
    goto L_08998634;
L_089985F0:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08998594;
      }
      goto L_08998600;
    }
L_08998600:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(220)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(236)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08998634:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    ctx.gpr[2] = (ctx.gpr[11] | 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(0u));
    ctx.gpr[11] = (ctx.gpr[10] | 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(49), static_cast<std::uint8_t>(0u));
    ctx.gpr[10] = (ctx.gpr[9] | 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(50), static_cast<std::uint8_t>(0u));
    ctx.gpr[9] = (ctx.gpr[8] | 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(51), static_cast<std::uint8_t>(0u));
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    ctx.gpr[31] = (0x08998668u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    goto L_089998F8;
L_08998668:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08998674:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    ctx.gpr[16] = (2228u << 16u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-24272));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x08998694u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-19528));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 375u, 0x08AF99BCu>(ctx, &aot_mem) && ctx.pc == 0x08998694u) goto L_08998694;
    return;
L_08998694:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x089986A0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7124));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 463u, 0x088B6A20u>(ctx, &aot_mem) && ctx.pc == 0x089986A0u) goto L_089986A0;
    return;
L_089986A0:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089986ACu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-19496));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 375u, 0x08AF99BCu>(ctx, &aot_mem) && ctx.pc == 0x089986ACu) goto L_089986AC;
    return;
L_089986AC:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6032), ctx.gpr[16]);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(80));
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (ctx.gpr[9] + ctx.gpr[6]);
    ctx.gpr[16] = (ctx.gpr[9] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[9] = (15948u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[9] = (ctx.gpr[9] | 52429u);
    ctx.gpr[8] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (0u | 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_089986F4;
L_089986F4:
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[8]) < 749 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    // nop
      if (branch_taken) {
          goto L_08998708;
      }
      goto L_08998700;
    }
L_08998700:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(72), 0u);
      if (branch_taken) {
          goto L_0899870C;
      }
      goto L_08998708;
    }
L_08998708:
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(72), ctx.gpr[6]);
    goto L_0899870C;
L_0899870C:
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
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
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(32), 0u);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(36), 0u);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store16(ctx.gpr[7] + static_cast<std::uint32_t>(56), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store16(ctx.gpr[7] + static_cast<std::uint32_t>(58), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(66), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store16(ctx.gpr[7] + static_cast<std::uint32_t>(60), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[7] + static_cast<std::uint32_t>(64), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[7] + static_cast<std::uint32_t>(62), static_cast<std::uint16_t>(0u));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(80));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(80));
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[8]) < 750 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(80));
      if (branch_taken) {
          goto L_089986F4;
      }
      goto L_08998764;
    }
L_08998764:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08998774:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[7] = (2230u << 16u);
      if (branch_taken) {
          goto L_08998794;
      }
      goto L_08998780;
    }
L_08998780:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(72), ctx.gpr[8]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-6032)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(72), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(-6032), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089987A4;
      }
      goto L_08998794;
    }
L_08998794:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(144), ctx.gpr[8]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-6032)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(72), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(-6032), ctx.gpr[4]);
    goto L_089987A4;
L_089987A4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089987AC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7124)));
    ctx.gpr[16] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(144)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089987FC;
      }
      goto L_089987E4;
    }
L_089987E4:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089987F0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    goto L_08998774;
L_089987F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(144)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089987E4;
      }
      goto L_089987FC;
    }
L_089987FC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899880C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-192));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(49), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(50), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(51), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (0u | 240u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(53), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(54), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (16256u << 16u);
    ctx.gpr[6] = (0u | 255u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), ctx.gpr[18]);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(55), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), ctx.gpr[31]);
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_08998894;
      }
      goto L_08998890;
    }
L_08998890:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08998894;
L_08998894:
    ctx.gpr[4] = (48844u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16076u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.gpr[31] = (0x089988B0u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x089988B0u) goto L_089988B0;
    return;
L_089988B0:
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[22];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[22] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x089988C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x089988C8u) goto L_089988C8;
    return;
L_089988C8:
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[22];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[22] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16025u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.gpr[31] = (0x089988F4u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x089988F4u) goto L_089988F4;
    return;
L_089988F4:
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[26];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[26] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<1u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 1u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (16512u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[18] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (48291u << 16u);
      if (branch_taken) {
          goto L_08998B10;
      }
      goto L_0899894C;
    }
L_0899894C:
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (15523u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (48419u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[24] = std::bit_cast<float>(0u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[4] = (15651u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.gpr[4] = (15759u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 23593u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_08998990;
L_08998990:
    ctx.gpr[31] = (0x08998998u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x08998998u) goto L_08998998;
    return;
L_08998998:
    ctx.fpr[12] = ctx.fpr[30] - ctx.fpr[22];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[31] = (0x089989A8u);
    ctx.fpr[28] = ctx.fpr[22] + ctx.fpr[12];
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x089989A8u) goto L_089989A8;
    return;
L_089989A8:
    ctx.fpr[13] = ctx.fpr[30] - ctx.fpr[22];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[31] = (0x089989BCu);
    ctx.fpr[30] = ctx.fpr[22] + ctx.fpr[13];
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x089989BCu) goto L_089989BC;
    return;
L_089989BC:
    ctx.fpr[14] = ctx.fpr[24] - ctx.fpr[22];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[4] = (0u | 42u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.fpr[13] = ctx.fpr[22] + ctx.fpr[14];
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (ctx.gpr[21] | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x08998A08u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    goto L_089998F8;
L_08998A08:
    ctx.gpr[31] = (0x08998A10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x08998A10u) goto L_08998A10;
    return;
L_08998A10:
    ctx.fpr[12] = ctx.fpr[26] - ctx.fpr[20];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[31] = (0x08998A20u);
    ctx.fpr[22] = ctx.fpr[20] + ctx.fpr[12];
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x08998A20u) goto L_08998A20;
    return;
L_08998A20:
    ctx.fpr[13] = ctx.fpr[26] - ctx.fpr[20];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[31] = (0x08998A30u);
    ctx.fpr[30] = ctx.fpr[20] + ctx.fpr[13];
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x08998A30u) goto L_08998A30;
    return;
L_08998A30:
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.fpr[14] = ctx.fpr[28] - ctx.fpr[24];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[4] = (0u | 42u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.fpr[13] = ctx.fpr[24] + ctx.fpr[14];
    ctx.gpr[8] = (ctx.gpr[21] | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[31] = (0x08998A7Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    goto L_089998F8;
L_08998A7C:
    ctx.gpr[31] = (0x08998A84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x08998A84u) goto L_08998A84;
    return;
L_08998A84:
    ctx.fpr[12] = ctx.fpr[26] - ctx.fpr[20];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[31] = (0x08998A94u);
    ctx.fpr[30] = ctx.fpr[20] + ctx.fpr[12];
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x08998A94u) goto L_08998A94;
    return;
L_08998A94:
    ctx.fpr[13] = ctx.fpr[26] - ctx.fpr[20];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[31] = (0x08998AA8u);
    ctx.fpr[26] = ctx.fpr[20] + ctx.fpr[13];
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x08998AA8u) goto L_08998AA8;
    return;
L_08998AA8:
    ctx.fpr[14] = ctx.fpr[28] - ctx.fpr[24];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[4] = (0u | 42u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (ctx.gpr[21] | 0u);
    ctx.fpr[13] = ctx.fpr[24] + ctx.fpr[14];
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[31] = (0x08998AECu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    goto L_089998F8;
L_08998AEC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08998AF8u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 565u, 0x089274ACu>(ctx, &aot_mem) && ctx.pc == 0x08998AF8u) goto L_08998AF8;
    return;
L_08998AF8:
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
      if (branch_taken) {
          goto L_08998990;
      }
      goto L_08998B10;
    }
L_08998B10:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08998B4C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08998B54:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-224));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-29773));
    ctx.gpr[5] = (2231u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32248));
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-29733));
    ctx.gpr[5] = (2231u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32288));
    ctx.gpr[4] = (2231u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32308));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[5]);
    ctx.gpr[5] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-29549));
    ctx.gpr[4] = (2231u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32328));
    ctx.gpr[5] = (2231u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32340));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-29669));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[5]);
    ctx.gpr[5] = (2231u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32428));
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-29597));
    ctx.gpr[5] = (2231u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32204));
    ctx.gpr[4] = (2231u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32220));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[4]);
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-29693));
    ctx.gpr[5] = (2231u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32388));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (2231u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32396));
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-29513));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[4]);
    ctx.gpr[4] = (2231u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32548));
    ctx.gpr[5] = (2231u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32564));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-29473));
    ctx.gpr[5] = (2231u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32580));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    ctx.gpr[4] = (2231u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32612));
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-29393));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (2231u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32516));
    ctx.gpr[5] = (2231u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32532));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-29337));
    ctx.gpr[5] = (2231u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), ctx.gpr[30]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32352));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[16] = (2277u << 16u);
    ctx.gpr[18] = (2275u << 16u);
    ctx.gpr[17] = (2275u << 16u);
    ctx.gpr[23] = (2229u << 16u);
    ctx.gpr[19] = (2231u << 16u);
    ctx.gpr[20] = (2231u << 16u);
    ctx.gpr[30] = (2231u << 16u);
    ctx.gpr[22] = (2231u << 16u);
    ctx.gpr[21] = (2233u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-6952));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(6608));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(2512));
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(-29808));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(32160));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(32180));
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(32268));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(32452));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-26704));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), ctx.gpr[31]);
    ctx.gpr[31] = (0x08998D14u);
    // nop
    goto L_08998674;
L_08998D14:
    ctx.gpr[31] = (0x08998D1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 527u, 0x089D21F0u>(ctx, &aot_mem) && ctx.pc == 0x08998D1Cu) goto L_08998D1C;
    return;
L_08998D1C:
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[12] = (0u | 0u);
    ctx.gpr[4] = (49024u << 16u);
    ctx.gpr[3] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_08998D38;
L_08998D38:
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[12] = (ctx.gpr[12] + static_cast<std::uint32_t>(1));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[12]) < 20 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[3] = (ctx.gpr[3] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08998D38;
      }
      goto L_08998D50;
    }
L_08998D50:
    ctx.gpr[4] = (16457u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[4] = (16052u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[3] = (ctx.gpr[18] | 0u);
    ctx.gpr[4] = (17204u << 16u);
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_08998D78;
L_08998D78:
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[11]);
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[15] = ctx.fpr[15] / ctx.fpr[14];
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
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
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
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
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(1));
    ctx.gpr[3] = (ctx.gpr[3] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[11]) < 1024 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08998D78;
      }
      goto L_08998DE0;
    }
L_08998DE0:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[17] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08998DF0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-19460));
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 581u, 0x0892F99Cu>(ctx, &aot_mem) && ctx.pc == 0x08998DF0u) goto L_08998DF0;
    return;
L_08998DF0:
    ctx.gpr[31] = (0x08998DF8u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 624u, 0x0892FC30u>(ctx, &aot_mem) && ctx.pc == 0x08998DF8u) goto L_08998DF8;
    return;
L_08998DF8:
    ctx.gpr[31] = (0x08998E00u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 619u, 0x0892FBDCu>(ctx, &aot_mem) && ctx.pc == 0x08998E00u) goto L_08998E00;
    return;
L_08998E00:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[18] = (ctx.gpr[18] + ctx.gpr[23]);
    ctx.gpr[16] = (ctx.gpr[20] | 0u);
    goto L_08998E10;
L_08998E10:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08998E1Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 101u, 0x08A0D0A0u>(ctx, &aot_mem) && ctx.pc == 0x08998E1Cu) goto L_08998E1C;
    return;
L_08998E1C:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(7));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08998E10;
      }
      goto L_08998E40;
    }
L_08998E40:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08998E58u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-19448));
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 101u, 0x08A0D0A0u>(ctx, &aot_mem) && ctx.pc == 0x08998E58u) goto L_08998E58;
    return;
L_08998E58:
    ctx.gpr[4] = (2231u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32200), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6624), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[18] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[30] | 0u);
    goto L_08998E7C;
L_08998E7C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08998E88u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 101u, 0x08A0D0A0u>(ctx, &aot_mem) && ctx.pc == 0x08998E88u) goto L_08998E88;
    return;
L_08998E88:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(8));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08998E7C;
      }
      goto L_08998EAC;
    }
L_08998EAC:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[18] = (ctx.gpr[4] + ctx.gpr[18]);
    goto L_08998EC4;
L_08998EC4:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08998ED0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 101u, 0x08A0D0A0u>(ctx, &aot_mem) && ctx.pc == 0x08998ED0u) goto L_08998ED0;
    return;
L_08998ED0:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(8));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08998EC4;
      }
      goto L_08998EF4;
    }
L_08998EF4:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[18] = (ctx.gpr[4] + ctx.gpr[18]);
    goto L_08998F0C;
L_08998F0C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08998F18u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 101u, 0x08A0D0A0u>(ctx, &aot_mem) && ctx.pc == 0x08998F18u) goto L_08998F18;
    return;
L_08998F18:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(12));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08998F0C;
      }
      goto L_08998F3C;
    }
L_08998F3C:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[18] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[22] | 0u);
    goto L_08998F54;
L_08998F54:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08998F60u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 101u, 0x08A0D0A0u>(ctx, &aot_mem) && ctx.pc == 0x08998F60u) goto L_08998F60;
    return;
L_08998F60:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(12));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08998F54;
      }
      goto L_08998F84;
    }
L_08998F84:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[18] = (ctx.gpr[4] + ctx.gpr[18]);
    goto L_08998F9C;
L_08998F9C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08998FA8u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 101u, 0x08A0D0A0u>(ctx, &aot_mem) && ctx.pc == 0x08998FA8u) goto L_08998FA8;
    return;
L_08998FA8:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(12));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08998F9C;
      }
      goto L_08998FCC;
    }
L_08998FCC:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08998FDCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-19436));
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 101u, 0x08A0D0A0u>(ctx, &aot_mem) && ctx.pc == 0x08998FDCu) goto L_08998FDC;
    return;
L_08998FDC:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6620), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[23] = (2231u << 16u);
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(32376), ctx.gpr[4]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[18] = (ctx.gpr[4] + ctx.gpr[18]);
    goto L_08999008;
L_08999008:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08999014u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 101u, 0x08A0D0A0u>(ctx, &aot_mem) && ctx.pc == 0x08999014u) goto L_08999014;
    return;
L_08999014:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(12));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08999008;
      }
      goto L_08999038;
    }
L_08999038:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[18] = (ctx.gpr[4] + ctx.gpr[18]);
    goto L_08999050;
L_08999050:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0899905Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 101u, 0x08A0D0A0u>(ctx, &aot_mem) && ctx.pc == 0x0899905Cu) goto L_0899905C;
    return;
L_0899905C:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(10));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08999050;
      }
      goto L_08999080;
    }
L_08999080:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (ctx.gpr[4] + ctx.gpr[18]);
    goto L_08999098;
L_08999098:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089990A4u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 101u, 0x08A0D0A0u>(ctx, &aot_mem) && ctx.pc == 0x089990A4u) goto L_089990A4;
    return;
L_089990A4:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(10));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08999098;
      }
      goto L_089990C8;
    }
L_089990C8:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (ctx.gpr[4] + ctx.gpr[18]);
    goto L_089990E0;
L_089990E0:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089990ECu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 101u, 0x08A0D0A0u>(ctx, &aot_mem) && ctx.pc == 0x089990ECu) goto L_089990EC;
    return;
L_089990EC:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(14));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089990E0;
      }
      goto L_08999110;
    }
L_08999110:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[18] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[21] | 0u);
    goto L_08999128;
L_08999128:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08999134u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 101u, 0x08A0D0A0u>(ctx, &aot_mem) && ctx.pc == 0x08999134u) goto L_08999134;
    return;
L_08999134:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(14));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08999128;
      }
      goto L_08999158;
    }
L_08999158:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[22]);
    ctx.gpr[4] = (2226u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[21]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08999178u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-19424));
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 101u, 0x08A0D0A0u>(ctx, &aot_mem) && ctx.pc == 0x08999178u) goto L_08999178;
    return;
L_08999178:
    ctx.gpr[4] = (2231u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32368), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32368)));
    ctx.gpr[18] = (2231u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(32372), ctx.gpr[4]);
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089991A0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-19412));
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 101u, 0x08A0D0A0u>(ctx, &aot_mem) && ctx.pc == 0x089991A0u) goto L_089991A0;
    return;
L_089991A0:
    ctx.gpr[16] = (2231u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32144), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32144)));
    ctx.gpr[19] = (2231u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(32148), ctx.gpr[4]);
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089991C8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-19404));
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 101u, 0x08A0D0A0u>(ctx, &aot_mem) && ctx.pc == 0x089991C8u) goto L_089991C8;
    return;
L_089991C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32144)));
    ctx.gpr[5] = (2231u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(32152), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (2231u << 16u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(32156), ctx.gpr[4]);
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089991F0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-19396));
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 101u, 0x08A0D0A0u>(ctx, &aot_mem) && ctx.pc == 0x089991F0u) goto L_089991F0;
    return;
L_089991F0:
    ctx.gpr[4] = (2231u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32380), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32380)));
    ctx.gpr[17] = (2231u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(32384), ctx.gpr[4]);
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x08999218u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-19384));
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 101u, 0x08A0D0A0u>(ctx, &aot_mem) && ctx.pc == 0x08999218u) goto L_08999218;
    return;
L_08999218:
    ctx.gpr[4] = (2231u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32236), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32236)));
    ctx.gpr[21] = (2231u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(32240), ctx.gpr[4]);
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x08999240u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-19376));
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 101u, 0x08A0D0A0u>(ctx, &aot_mem) && ctx.pc == 0x08999240u) goto L_08999240;
    return;
L_08999240:
    ctx.gpr[16] = (2231u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32404), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32404)));
    ctx.gpr[22] = (2231u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(32412), ctx.gpr[4]);
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x08999268u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-19360));
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 101u, 0x08A0D0A0u>(ctx, &aot_mem) && ctx.pc == 0x08999268u) goto L_08999268;
    return;
L_08999268:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(32404));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[16] = (ctx.gpr[22] + static_cast<std::uint32_t>(32412));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (2226u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[16]);
    ctx.gpr[31] = (0x08999294u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-19352));
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 101u, 0x08A0D0A0u>(ctx, &aot_mem) && ctx.pc == 0x08999294u) goto L_08999294;
    return;
L_08999294:
    ctx.gpr[4] = (2231u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32476), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32476)));
    ctx.gpr[5] = (2231u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(32480), ctx.gpr[4]);
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089992BCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-19344));
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 101u, 0x08A0D0A0u>(ctx, &aot_mem) && ctx.pc == 0x089992BCu) goto L_089992BC;
    return;
L_089992BC:
    ctx.gpr[4] = (2231u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32484), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32484)));
    ctx.gpr[22] = (2231u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(32488), ctx.gpr[4]);
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089992E4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-19332));
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 101u, 0x08A0D0A0u>(ctx, &aot_mem) && ctx.pc == 0x089992E4u) goto L_089992E4;
    return;
L_089992E4:
    ctx.gpr[4] = (2231u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32492), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32492)));
    ctx.gpr[22] = (2231u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(32496), ctx.gpr[4]);
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x0899930Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-19320));
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 101u, 0x08A0D0A0u>(ctx, &aot_mem) && ctx.pc == 0x0899930Cu) goto L_0899930C;
    return;
L_0899930C:
    ctx.gpr[4] = (2231u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32420), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32420)));
    ctx.gpr[16] = (2231u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32424), ctx.gpr[4]);
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x08999334u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-19312));
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 101u, 0x08A0D0A0u>(ctx, &aot_mem) && ctx.pc == 0x08999334u) goto L_08999334;
    return;
L_08999334:
    ctx.gpr[4] = (2231u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32508), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32508)));
    ctx.gpr[30] = (2231u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(32512), ctx.gpr[4]);
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x0899935Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-19296));
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 101u, 0x08A0D0A0u>(ctx, &aot_mem) && ctx.pc == 0x0899935Cu) goto L_0899935C;
    return;
L_0899935C:
    ctx.gpr[4] = (2231u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32500), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32500)));
    ctx.gpr[5] = (2231u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(32504), ctx.gpr[4]);
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08999384u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-19280));
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 101u, 0x08A0D0A0u>(ctx, &aot_mem) && ctx.pc == 0x08999384u) goto L_08999384;
    return;
L_08999384:
    ctx.gpr[4] = (2231u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32644), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32644)));
    ctx.gpr[20] = (2231u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32648), ctx.gpr[4]);
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089993ACu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-19268));
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 101u, 0x08A0D0A0u>(ctx, &aot_mem) && ctx.pc == 0x089993ACu) goto L_089993AC;
    return;
L_089993AC:
    ctx.gpr[4] = (2231u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32244), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32244)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6036), ctx.gpr[4]);
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089993D4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-19256));
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 101u, 0x08A0D0A0u>(ctx, &aot_mem) && ctx.pc == 0x089993D4u) goto L_089993D4;
    return;
L_089993D4:
    ctx.gpr[4] = (2231u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32652), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32652)));
    ctx.gpr[20] = (2231u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32656), ctx.gpr[4]);
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089993FCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-19248));
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 101u, 0x08A0D0A0u>(ctx, &aot_mem) && ctx.pc == 0x089993FCu) goto L_089993FC;
    return;
L_089993FC:
    ctx.gpr[4] = (2231u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32660), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32660)));
    ctx.gpr[30] = (2231u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(32664), ctx.gpr[4]);
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x08999424u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-19232));
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 101u, 0x08A0D0A0u>(ctx, &aot_mem) && ctx.pc == 0x08999424u) goto L_08999424;
    return;
L_08999424:
    ctx.gpr[4] = (2231u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32668), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32668)));
    ctx.gpr[18] = (2231u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(32672), ctx.gpr[4]);
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x0899944Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-19220));
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 101u, 0x08A0D0A0u>(ctx, &aot_mem) && ctx.pc == 0x0899944Cu) goto L_0899944C;
    return;
L_0899944C:
    ctx.gpr[4] = (2231u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32680), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32680)));
    ctx.gpr[18] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-6832), ctx.gpr[4]);
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x08999474u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-19208));
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 101u, 0x08A0D0A0u>(ctx, &aot_mem) && ctx.pc == 0x08999474u) goto L_08999474;
    return;
L_08999474:
    ctx.gpr[4] = (2231u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32684), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32684)));
    ctx.gpr[18] = (2231u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(32688), ctx.gpr[4]);
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x0899949Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-19200));
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 101u, 0x08A0D0A0u>(ctx, &aot_mem) && ctx.pc == 0x0899949Cu) goto L_0899949C;
    return;
L_0899949C:
    ctx.gpr[18] = (2231u << 16u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(32700), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(32700)));
    ctx.gpr[19] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(-6824), ctx.gpr[4]);
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089994C4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-19188));
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 101u, 0x08A0D0A0u>(ctx, &aot_mem) && ctx.pc == 0x089994C4u) goto L_089994C4;
    return;
L_089994C4:
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(32700));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[19] + static_cast<std::uint32_t>(-6824));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089994ECu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-19176));
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 101u, 0x08A0D0A0u>(ctx, &aot_mem) && ctx.pc == 0x089994ECu) goto L_089994EC;
    return;
L_089994EC:
    ctx.gpr[4] = (2231u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32708), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32708)));
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-6816), ctx.gpr[4]);
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x08999514u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-19160));
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 101u, 0x08A0D0A0u>(ctx, &aot_mem) && ctx.pc == 0x08999514u) goto L_08999514;
    return;
L_08999514:
    ctx.gpr[4] = (2231u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32692), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32692)));
    ctx.gpr[18] = (2231u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(32696), ctx.gpr[4]);
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x0899953Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-19152));
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 101u, 0x08A0D0A0u>(ctx, &aot_mem) && ctx.pc == 0x0899953Cu) goto L_0899953C;
    return;
L_0899953C:
    ctx.gpr[4] = (2231u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32716), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32716)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08999558u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7068), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 626u, 0x0892FC54u>(ctx, &aot_mem) && ctx.pc == 0x08999558u) goto L_08999558;
    return;
L_08999558:
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(32656));
    ctx.gpr[5] = (ctx.gpr[21] + static_cast<std::uint32_t>(32240));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(32424));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[30] + static_cast<std::uint32_t>(32664));
    ctx.gpr[5] = (2231u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32156));
    ctx.gpr[4] = (2231u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32672));
    ctx.gpr[6] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-6832));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[4]);
    ctx.gpr[14] = (ctx.gpr[17] + static_cast<std::uint32_t>(32384));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[6]);
    ctx.gpr[17] = (ctx.gpr[22] + static_cast<std::uint32_t>(32496));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.gpr[15] = (ctx.gpr[23] + static_cast<std::uint32_t>(32376));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.gpr[31] = (2231u << 16u);
    ctx.gpr[23] = (2231u << 16u);
    ctx.gpr[3] = (2231u << 16u);
    ctx.gpr[25] = (2231u << 16u);
    ctx.gpr[13] = (2231u << 16u);
    ctx.gpr[19] = (2231u << 16u);
    ctx.gpr[2] = (2230u << 16u);
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[12] = (0u | 0u);
    ctx.gpr[31] = (ctx.gpr[31] + static_cast<std::uint32_t>(32148));
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(32372));
    ctx.gpr[3] = (ctx.gpr[3] + static_cast<std::uint32_t>(32488));
    ctx.gpr[25] = (ctx.gpr[25] + static_cast<std::uint32_t>(32512));
    ctx.gpr[13] = (ctx.gpr[13] + static_cast<std::uint32_t>(32648));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(32688));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(32696));
    ctx.gpr[24] = (0u | 0u);
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-6624));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    goto L_08999600;
L_08999600:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7124)));
    ctx.gpr[4] = (ctx.gpr[12] < static_cast<std::uint32_t>(82) ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[24]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
      if (branch_taken) {
          goto L_089998AC;
      }
      goto L_08999618;
    }
L_08999618:
    ctx.gpr[12] = (ctx.gpr[12] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[12]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-19104)));
    jump_target = ctx.gpr[1];
    ctx.gpr[12] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[12]) >> 2u));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08999630:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(140), ctx.gpr[14]);
      if (branch_taken) {
          goto L_089998AC;
      }
      goto L_08999638;
    }
L_08999638:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(140), ctx.gpr[14]);
      if (branch_taken) {
          goto L_089998AC;
      }
      goto L_08999640;
    }
L_08999640:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(140), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089998AC;
      }
      goto L_0899964C;
    }
L_0899964C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(140), ctx.gpr[2]);
      if (branch_taken) {
          goto L_089998AC;
      }
      goto L_08999654;
    }
L_08999654:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(140), ctx.gpr[2]);
      if (branch_taken) {
          goto L_089998AC;
      }
      goto L_0899965C;
    }
L_0899965C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(140), ctx.gpr[20]);
      if (branch_taken) {
          goto L_089998AC;
      }
      goto L_08999664;
    }
L_08999664:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(140), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089998AC;
      }
      goto L_08999670;
    }
L_08999670:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(140), ctx.gpr[17]);
      if (branch_taken) {
          goto L_089998AC;
      }
      goto L_08999678;
    }
L_08999678:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(140), ctx.gpr[17]);
      if (branch_taken) {
          goto L_089998AC;
      }
      goto L_08999680;
    }
L_08999680:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(140), ctx.gpr[16]);
      if (branch_taken) {
          goto L_089998AC;
      }
      goto L_08999688;
    }
L_08999688:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(140), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089998AC;
      }
      goto L_08999694;
    }
L_08999694:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(140), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089998AC;
      }
      goto L_089996A0;
    }
L_089996A0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(140), ctx.gpr[20]);
      if (branch_taken) {
          goto L_089998AC;
      }
      goto L_089996A8;
    }
L_089996A8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(140), ctx.gpr[31]);
      if (branch_taken) {
          goto L_089998AC;
      }
      goto L_089996B0;
    }
L_089996B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(140), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089998AC;
      }
      goto L_089996BC;
    }
L_089996BC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(140), ctx.gpr[7]);
      if (branch_taken) {
          goto L_089998AC;
      }
      goto L_089996C4;
    }
L_089996C4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(140), ctx.gpr[7]);
      if (branch_taken) {
          goto L_089998AC;
      }
      goto L_089996CC;
    }
L_089996CC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(140), 0u);
      if (branch_taken) {
          goto L_089998AC;
      }
      goto L_089996D4;
    }
L_089996D4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(140), ctx.gpr[30]);
      if (branch_taken) {
          goto L_089998AC;
      }
      goto L_089996DC;
    }
L_089996DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(140), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089998AC;
      }
      goto L_089996E8;
    }
L_089996E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(140), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089998AC;
      }
      goto L_089996F4;
    }
L_089996F4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(140), ctx.gpr[20]);
      if (branch_taken) {
          goto L_089998AC;
      }
      goto L_089996FC;
    }
L_089996FC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(140), ctx.gpr[20]);
      if (branch_taken) {
          goto L_089998AC;
      }
      goto L_08999704;
    }
L_08999704:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(140), ctx.gpr[15]);
      if (branch_taken) {
          goto L_089998AC;
      }
      goto L_0899970C;
    }
L_0899970C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(140), ctx.gpr[21]);
      if (branch_taken) {
          goto L_089998AC;
      }
      goto L_08999714;
    }
L_08999714:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(140), ctx.gpr[31]);
      if (branch_taken) {
          goto L_089998AC;
      }
      goto L_0899971C;
    }
L_0899971C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(140), ctx.gpr[20]);
      if (branch_taken) {
          goto L_089998AC;
      }
      goto L_08999724;
    }
L_08999724:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(140), ctx.gpr[2]);
      if (branch_taken) {
          goto L_089998AC;
      }
      goto L_0899972C;
    }
L_0899972C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(140), ctx.gpr[2]);
      if (branch_taken) {
          goto L_089998AC;
      }
      goto L_08999734;
    }
L_08999734:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(140), ctx.gpr[2]);
      if (branch_taken) {
          goto L_089998AC;
      }
      goto L_0899973C;
    }
L_0899973C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(140), ctx.gpr[15]);
      if (branch_taken) {
          goto L_089998AC;
      }
      goto L_08999744;
    }
L_08999744:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(140), ctx.gpr[14]);
      if (branch_taken) {
          goto L_089998AC;
      }
      goto L_0899974C;
    }
L_0899974C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(140), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089998AC;
      }
      goto L_08999758;
    }
L_08999758:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(140), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089998AC;
      }
      goto L_08999764;
    }
L_08999764:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(140), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089998AC;
      }
      goto L_08999770;
    }
L_08999770:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(140), ctx.gpr[15]);
      if (branch_taken) {
          goto L_089998AC;
      }
      goto L_08999778;
    }
L_08999778:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(140), ctx.gpr[22]);
      if (branch_taken) {
          goto L_089998AC;
      }
      goto L_08999780;
    }
L_08999780:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(140), ctx.gpr[22]);
      if (branch_taken) {
          goto L_089998AC;
      }
      goto L_08999788;
    }
L_08999788:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(140), ctx.gpr[22]);
      if (branch_taken) {
          goto L_089998AC;
      }
      goto L_08999790;
    }
L_08999790:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(140), ctx.gpr[22]);
      if (branch_taken) {
          goto L_089998AC;
      }
      goto L_08999798;
    }
L_08999798:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(140), ctx.gpr[21]);
      if (branch_taken) {
          goto L_089998AC;
      }
      goto L_089997A0;
    }
L_089997A0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(140), ctx.gpr[23]);
      if (branch_taken) {
          goto L_089998AC;
      }
      goto L_089997A8;
    }
L_089997A8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(140), ctx.gpr[30]);
      if (branch_taken) {
          goto L_089998AC;
      }
      goto L_089997B0;
    }
L_089997B0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(140), ctx.gpr[21]);
      if (branch_taken) {
          goto L_089998AC;
      }
      goto L_089997B8;
    }
L_089997B8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(140), ctx.gpr[20]);
      if (branch_taken) {
          goto L_089998AC;
      }
      goto L_089997C0;
    }
L_089997C0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(140), ctx.gpr[20]);
      if (branch_taken) {
          goto L_089998AC;
      }
      goto L_089997C8;
    }
L_089997C8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(140), ctx.gpr[21]);
      if (branch_taken) {
          goto L_089998AC;
      }
      goto L_089997D0;
    }
L_089997D0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(140), ctx.gpr[2]);
      if (branch_taken) {
          goto L_089998AC;
      }
      goto L_089997D8;
    }
L_089997D8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(140), ctx.gpr[2]);
      if (branch_taken) {
          goto L_089998AC;
      }
      goto L_089997E0;
    }
L_089997E0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(140), ctx.gpr[20]);
      if (branch_taken) {
          goto L_089998AC;
      }
      goto L_089997E8;
    }
L_089997E8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(140), ctx.gpr[14]);
      if (branch_taken) {
          goto L_089998AC;
      }
      goto L_089997F0;
    }
L_089997F0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(140), ctx.gpr[3]);
      if (branch_taken) {
          goto L_089998AC;
      }
      goto L_089997F8;
    }
L_089997F8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(140), ctx.gpr[3]);
      if (branch_taken) {
          goto L_089998AC;
      }
      goto L_08999800;
    }
L_08999800:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(140), ctx.gpr[3]);
      if (branch_taken) {
          goto L_089998AC;
      }
      goto L_08999808;
    }
L_08999808:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(140), ctx.gpr[3]);
      if (branch_taken) {
          goto L_089998AC;
      }
      goto L_08999810;
    }
L_08999810:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(140), ctx.gpr[20]);
      if (branch_taken) {
          goto L_089998AC;
      }
      goto L_08999818;
    }
L_08999818:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(140), ctx.gpr[16]);
      if (branch_taken) {
          goto L_089998AC;
      }
      goto L_08999820;
    }
L_08999820:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(140), ctx.gpr[25]);
      if (branch_taken) {
          goto L_089998AC;
      }
      goto L_08999828;
    }
L_08999828:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(140), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089998AC;
      }
      goto L_08999834;
    }
L_08999834:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(140), ctx.gpr[2]);
      if (branch_taken) {
          goto L_089998AC;
      }
      goto L_0899983C;
    }
L_0899983C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(140), ctx.gpr[30]);
      if (branch_taken) {
          goto L_089998AC;
      }
      goto L_08999844;
    }
L_08999844:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(140), ctx.gpr[25]);
      if (branch_taken) {
          goto L_089998AC;
      }
      goto L_0899984C;
    }
L_0899984C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(140), ctx.gpr[20]);
      if (branch_taken) {
          goto L_089998AC;
      }
      goto L_08999854;
    }
L_08999854:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(140), ctx.gpr[13]);
      if (branch_taken) {
          goto L_089998AC;
      }
      goto L_0899985C;
    }
L_0899985C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(140), ctx.gpr[13]);
      if (branch_taken) {
          goto L_089998AC;
      }
      goto L_08999864;
    }
L_08999864:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(140), ctx.gpr[13]);
      if (branch_taken) {
          goto L_089998AC;
      }
      goto L_0899986C;
    }
L_0899986C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(140), ctx.gpr[13]);
      if (branch_taken) {
          goto L_089998AC;
      }
      goto L_08999874;
    }
L_08999874:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(140), ctx.gpr[3]);
      if (branch_taken) {
          goto L_089998AC;
      }
      goto L_0899987C;
    }
L_0899987C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(140), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089998AC;
      }
      goto L_08999888;
    }
L_08999888:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(140), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089998AC;
      }
      goto L_08999894;
    }
L_08999894:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(140), ctx.gpr[19]);
      if (branch_taken) {
          goto L_089998AC;
      }
      goto L_0899989C;
    }
L_0899989C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(140), ctx.gpr[20]);
      if (branch_taken) {
          goto L_089998AC;
      }
      goto L_089998A4;
    }
L_089998A4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(140), ctx.gpr[18]);
      if (branch_taken) {
          goto L_089998AC;
      }
      goto L_089998AC;
    }
L_089998AC:
    ctx.gpr[12] = (ctx.gpr[12] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[12]) < 82 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[24] = (ctx.gpr[24] + static_cast<std::uint32_t>(148));
      if (branch_taken) {
          goto L_08999600;
      }
      goto L_089998BC;
    }
L_089998BC:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089998C8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-19140));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 375u, 0x08AF99BCu>(ctx, &aot_mem) && ctx.pc == 0x089998C8u) goto L_089998C8;
    return;
L_089998C8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089998F8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-288));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(288)));
    ctx.gpr[7] = (2230u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(-6920)));
    ctx.gpr[2] = (2230u << 16u);
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(-6888)));
    ctx.gpr[3] = (2230u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] | ctx.gpr[2]);
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(-25529)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(248), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(252), ctx.gpr[18]);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[7] | ctx.gpr[2]);
    ctx.gpr[18] = (ctx.gpr[9] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(232), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(236), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(264), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(268), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(272), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(280), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[19] = (ctx.gpr[10] | 0u);
      if (branch_taken) {
          goto L_089999C8;
      }
      goto L_08999974;
    }
L_08999974:
    ctx.gpr[20] = (2230u << 16u);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-6032)));
    { const bool branch_taken = ctx.gpr[21] == 0u;
    ctx.gpr[5] = (ctx.gpr[16] << 4u);
      if (branch_taken) {
          goto L_089999C0;
      }
      goto L_08999984;
    }
L_08999984:
    ctx.gpr[7] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[7] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.fpr[22] = std::bit_cast<float>(0u);
    ctx.gpr[22] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7124)));
    ctx.gpr[22] = (ctx.gpr[5] + ctx.gpr[22]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(24)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[22])) && ctx.fpr[12] == ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089999D0;
      }
      goto L_089999B8;
    }
L_089999B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08999A28;
      }
      goto L_089999C0;
    }
L_089999C0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0899A3D4;
      }
      goto L_089999C8;
    }
L_089999C8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0899A3D4;
      }
      goto L_089999D0;
    }
L_089999D0:
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(13216));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(24)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08999A28;
      }
      goto L_08999A20;
    }
L_08999A20:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0899A3D4;
      }
      goto L_08999A28;
    }
L_08999A28:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(28)));
    ctx.gpr[23] = (ctx.gpr[21] + static_cast<std::uint32_t>(68));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (2230u << 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08999A54;
      }
      goto L_08999A44;
    }
L_08999A44:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08999A64;
      }
      goto L_08999A54;
    }
L_08999A54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(80)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    goto L_08999A64;
L_08999A64:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(54)));
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[22] + static_cast<std::uint32_t>(56))))));
    aot_mem.aot_store16(ctx.gpr[21] + static_cast<std::uint32_t>(56), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[22] + static_cast<std::uint32_t>(52)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(58)));
        goto L_08999A98;
    }
    goto L_08999A80;
L_08999A80:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(56))))));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[22] + static_cast<std::uint32_t>(52)));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[7]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (ctx.lo);
    aot_mem.aot_store16(ctx.gpr[21] + static_cast<std::uint32_t>(56), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(58)));
    goto L_08999A98;
L_08999A98:
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[22] + static_cast<std::uint32_t>(62))))));
    aot_mem.aot_store16(ctx.gpr[21] + static_cast<std::uint32_t>(58), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[22] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08999AC4;
      }
      goto L_08999AB0;
    }
L_08999AB0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(58))))));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[22] + static_cast<std::uint32_t>(60)));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[7]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (ctx.lo);
    aot_mem.aot_store16(ctx.gpr[21] + static_cast<std::uint32_t>(58), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_08999AC4;
L_08999AC4:
    { const bool branch_taken = ctx.gpr[11] == 0u;
    // nop
      if (branch_taken) {
          goto L_08999AD4;
      }
      goto L_08999ACC;
    }
L_08999ACC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(66), static_cast<std::uint8_t>(ctx.gpr[11]));
      if (branch_taken) {
          goto L_08999ADC;
      }
      goto L_08999AD4;
    }
L_08999AD4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(64)));
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(66), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08999ADC;
L_08999ADC:
    aot_mem.aot_store16(ctx.gpr[21] + static_cast<std::uint32_t>(60), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(36), 0u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(3)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08999B14;
      }
      goto L_08999B08;
    }
L_08999B08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08999C74;
      }
      goto L_08999B14;
    }
L_08999B14:
    ctx.gpr[4] = (ctx.gpr[22] + static_cast<std::uint32_t>(112));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(124)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08999B3C;
      }
      goto L_08999B2C;
    }
L_08999B2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(124)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    goto L_08999B3C;
L_08999B3C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(116)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08999C74;
      }
      goto L_08999B48;
    }
L_08999B48:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(220), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), ctx.gpr[17]);
    ctx.gpr[30] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(116)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), ctx.gpr[22]);
    ctx.gpr[16] = (0u - ctx.gpr[30]);
    ctx.gpr[31] = (0x08999B64u);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 31u));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x08999B64u) goto L_08999B64;
    return;
L_08999B64:
    ctx.gpr[6] = (ctx.gpr[30] - ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08999B78u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 31u));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 360u, 0x08AF5BFCu>(ctx, &aot_mem) && ctx.pc == 0x08999B78u) goto L_08999B78;
    return;
L_08999B78:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[6] < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(1)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(2)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(220)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
      if (branch_taken) {
          goto L_08999C20;
      }
      goto L_08999C18;
    }
L_08999C18:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08999C30;
      }
      goto L_08999C20;
    }
L_08999C20:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < 256 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08999C30;
      }
      goto L_08999C2C;
    }
L_08999C2C:
    ctx.gpr[4] = (0u | 255u);
    goto L_08999C30;
L_08999C30:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) >= 0;
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < 256 ? 1u : 0u);
      if (branch_taken) {
          goto L_08999C40;
      }
      goto L_08999C38;
    }
L_08999C38:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08999C4C;
      }
      goto L_08999C40;
    }
L_08999C40:
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08999C4C;
      }
      goto L_08999C48;
    }
L_08999C48:
    ctx.gpr[5] = (0u | 255u);
    goto L_08999C4C;
L_08999C4C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) >= 0;
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 256 ? 1u : 0u);
      if (branch_taken) {
          goto L_08999C5C;
      }
      goto L_08999C54;
    }
L_08999C54:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_08999C68;
      }
      goto L_08999C5C;
    }
L_08999C5C:
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08999C68;
      }
      goto L_08999C64;
    }
L_08999C64:
    ctx.gpr[6] = (0u | 255u);
    goto L_08999C68;
L_08999C68:
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[6]));
    goto L_08999C74;
L_08999C74:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store16(ctx.gpr[21] + static_cast<std::uint32_t>(64), static_cast<std::uint16_t>(ctx.gpr[19]));
      if (branch_taken) {
          goto L_08999C84;
      }
      goto L_08999C7C;
    }
L_08999C7C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[21] + static_cast<std::uint32_t>(62), static_cast<std::uint16_t>(ctx.gpr[18]));
      if (branch_taken) {
          goto L_08999C8C;
      }
      goto L_08999C84;
    }
L_08999C84:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[22] + static_cast<std::uint32_t>(68))))));
    aot_mem.aot_store16(ctx.gpr[21] + static_cast<std::uint32_t>(62), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_08999C8C;
L_08999C8C:
    ctx.gpr[31] = (0x08999C94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x08999C94u) goto L_08999C94;
    return;
L_08999C94:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08999CB0;
      }
      goto L_08999CA4;
    }
L_08999CA4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(62))))));
    ctx.gpr[4] = (0u - ctx.gpr[4]);
    aot_mem.aot_store16(ctx.gpr[21] + static_cast<std::uint32_t>(62), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_08999CB0;
L_08999CB0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(84)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[22])) && ctx.fpr[12] == ctx.fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08999D78;
      }
      goto L_08999CC4;
    }
L_08999CC4:
    ctx.gpr[31] = (0x08999CCCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x08999CCCu) goto L_08999CCC;
    return;
L_08999CCC:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[19] = (0u | 20u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[19]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[18] = (2277u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(84)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-6952));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    ctx.gpr[31] = (0x08999D08u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x08999D08u) goto L_08999D08;
    return;
L_08999D08:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[19]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(84)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[15] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[4] & 32u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08999D78;
      }
      goto L_08999D44;
    }
L_08999D44:
    ctx.gpr[31] = (0x08999D4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x08999D4Cu) goto L_08999D4C;
    return;
L_08999D4C:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[19]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(84)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08999D78;
L_08999D78:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(88)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[22])) && ctx.fpr[12] == ctx.fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08999E40;
      }
      goto L_08999D8C;
    }
L_08999D8C:
    ctx.gpr[31] = (0x08999D94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x08999D94u) goto L_08999D94;
    return;
L_08999D94:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[18] = (0u | 20u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[18]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[19] = (2277u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(88)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-6952));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    ctx.gpr[31] = (0x08999DD0u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x08999DD0u) goto L_08999DD0;
    return;
L_08999DD0:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[18]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(88)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[15] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[4] & 32u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08999E40;
      }
      goto L_08999E0C;
    }
L_08999E0C:
    ctx.gpr[31] = (0x08999E14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x08999E14u) goto L_08999E14;
    return;
L_08999E14:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[18]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(88)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08999E40;
L_08999E40:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(92)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[22])) && ctx.fpr[12] == ctx.fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08999EA8;
      }
      goto L_08999E54;
    }
L_08999E54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08999EA8;
      }
      goto L_08999E64;
    }
L_08999E64:
    ctx.gpr[31] = (0x08999E6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x08999E6Cu) goto L_08999E6C;
    return;
L_08999E6C:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[5] = (0u | 20u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (2277u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6952));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (ctx.hi);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08999EA8;
L_08999EA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08999EE8;
      }
      goto L_08999EB4;
    }
L_08999EB4:
    ctx.gpr[31] = (0x08999EBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x08999EBCu) goto L_08999EBC;
    return;
L_08999EBC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(96)));
    ctx.gpr[5] = (ctx.gpr[2] & 65535u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    { const std::uint32_t dividend = ctx.gpr[5]; const std::uint32_t divisor = ctx.gpr[6]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(62))))));
    ctx.gpr[6] = (ctx.hi);
    ctx.gpr[6] = (ctx.gpr[6] << 16u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 16u));
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store16(ctx.gpr[21] + static_cast<std::uint32_t>(62), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_08999EE8;
L_08999EE8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(100)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899A064;
      }
      goto L_08999EF4;
    }
L_08999EF4:
    ctx.gpr[31] = (0x08999EFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x08999EFCu) goto L_08999EFC;
    return;
L_08999EFC:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[5] = (0u | 20u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[5] = (20224u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (2277u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6952));
    ctx.gpr[5] = (ctx.hi);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08999FD0;
      }
      goto L_08999F38;
    }
L_08999F38:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(32)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_08999F54;
      }
      goto L_08999F48;
    }
L_08999F48:
    ctx.gpr[5] = (20352u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    goto L_08999F54;
L_08999F54:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(80)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) >= 0;
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
      if (branch_taken) {
          goto L_08999F74;
      }
      goto L_08999F68;
    }
L_08999F68:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[16];
    goto L_08999F74;
L_08999F74:
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(100)));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
      if (branch_taken) {
          goto L_08999F94;
      }
      goto L_08999F88;
    }
L_08999F88:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[16];
    goto L_08999F94;
L_08999F94:
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
        goto L_08999FB8;
    }
    goto L_08999FAC;
L_08999FAC:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08999FC8;
      }
      goto L_08999FB8;
    }
L_08999FB8:
    ctx.gpr[4] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_08999FC8;
L_08999FC8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0899A064;
      }
      goto L_08999FD0;
    }
L_08999FD0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(32)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) >= 0;
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
      if (branch_taken) {
          goto L_08999FEC;
      }
      goto L_08999FE0;
    }
L_08999FE0:
    ctx.gpr[5] = (20352u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[12];
    goto L_08999FEC;
L_08999FEC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) >= 0;
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
      if (branch_taken) {
          goto L_0899A00C;
      }
      goto L_0899A000;
    }
L_0899A000:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[16];
    goto L_0899A00C;
L_0899A00C:
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(100)));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
      if (branch_taken) {
          goto L_0899A02C;
      }
      goto L_0899A020;
    }
L_0899A020:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[16];
    goto L_0899A02C;
L_0899A02C:
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[15];
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[13];
        goto L_0899A050;
    }
    goto L_0899A044;
L_0899A044:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0899A060;
      }
      goto L_0899A050;
    }
L_0899A050:
    ctx.gpr[4] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_0899A060;
L_0899A060:
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    goto L_0899A064;
L_0899A064:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899A16C;
      }
      goto L_0899A074;
    }
L_0899A074:
    ctx.gpr[18] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(-29268)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2231u << 16u);
      if (branch_taken) {
          goto L_0899A0A8;
      }
      goto L_0899A084;
    }
L_0899A084:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0899A090u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32720));
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 558u, 0x08927438u>(ctx, &aot_mem) && ctx.pc == 0x0899A090u) goto L_0899A090;
    return;
L_0899A090:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899A0A8;
      }
      goto L_0899A098;
    }
L_0899A098:
    ctx.gpr[4] = (2231u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32736)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0899A16C;
      }
      goto L_0899A0A8;
    }
L_0899A0A8:
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(-29268), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (49864u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[31] = (0x0899A10Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 95u, 0x088C06D4u>(ctx, &aot_mem) && ctx.pc == 0x0899A10Cu) goto L_0899A10C;
    return;
L_0899A10C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899A164;
      }
      goto L_0899A114;
    }
L_0899A114:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0899A15C;
      }
      goto L_0899A12C;
    }
L_0899A12C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (2231u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32720));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[4] = (2231u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32736), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(-29268), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0899A16C;
      }
      goto L_0899A15C;
    }
L_0899A15C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0899A3D4;
      }
      goto L_0899A164;
    }
L_0899A164:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0899A3D4;
      }
      goto L_0899A16C;
    }
L_0899A16C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[4] & 4096u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899A1D0;
      }
      goto L_0899A17C;
    }
L_0899A17C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[4] & 8192u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (2229u << 16u);
      if (branch_taken) {
          goto L_0899A1C8;
      }
      goto L_0899A18C;
    }
L_0899A18C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(160), static_cast<std::uint8_t>(0u));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x0899A1A4u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 453u, 0x088C2EF0u>(ctx, &aot_mem) && ctx.pc == 0x0899A1A4u) goto L_0899A1A4;
    return;
L_0899A1A4:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-29264), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899A1C0;
      }
      goto L_0899A1B4;
    }
L_0899A1B4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-29264)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0899A1C8;
      }
      goto L_0899A1C0;
    }
L_0899A1C0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0899A3D4;
      }
      goto L_0899A1C8;
    }
L_0899A1C8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-29264)));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0899A1D0;
L_0899A1D0:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 48 ? 1u : 0u);
      if (branch_taken) {
          goto L_0899A3A8;
      }
      goto L_0899A1DC;
    }
L_0899A1DC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(-9));
      if (branch_taken) {
          goto L_0899A3A8;
      }
      goto L_0899A1E4;
    }
L_0899A1E4:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-18776)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899A1FC:
    ctx.gpr[31] = (0x0899A204u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x0899A204u) goto L_0899A204;
    return;
L_0899A204:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[5] = (0u | 20u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (16800u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(84)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2277u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6952));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.hi);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[14] + ctx.fpr[12];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0899A3A8;
      }
      goto L_0899A24C;
    }
L_0899A24C:
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16448u << 16u);
    ctx.gpr[31] = (0x0899A260u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x0899A260u) goto L_0899A260;
    return;
L_0899A260:
    ctx.fpr[12] = ctx.fpr[26] - ctx.fpr[24];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[24] + ctx.fpr[12];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0899A3A8;
      }
      goto L_0899A27C;
    }
L_0899A27C:
    ctx.gpr[31] = (0x0899A284u);
    ctx.gpr[16] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(44)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x0899A284u) goto L_0899A284;
    return;
L_0899A284:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] - ctx.gpr[4]);
    ctx.gpr[31] = (0x0899A2A4u);
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[4]));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x0899A2A4u) goto L_0899A2A4;
    return;
L_0899A2A4:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 7u);
    aot_mem.aot_store16(ctx.gpr[21] + static_cast<std::uint32_t>(60), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (16025u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16204u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.gpr[31] = (0x0899A2CCu);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x0899A2CCu) goto L_0899A2CC;
    return;
L_0899A2CC:
    ctx.fpr[12] = ctx.fpr[26] - ctx.fpr[24];
    ctx.gpr[4] = (48588u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.gpr[5] = (15820u << 16u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[5] | 52429u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[24] + ctx.fpr[12];
    ctx.gpr[31] = (0x0899A2F8u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x0899A2F8u) goto L_0899A2F8;
    return;
L_0899A2F8:
    ctx.fpr[12] = ctx.fpr[26] - ctx.fpr[28];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[28] + ctx.fpr[12];
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0899A3A8;
      }
      goto L_0899A314;
    }
L_0899A314:
    ctx.gpr[31] = (0x0899A31Cu);
    ctx.gpr[16] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(44)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x0899A31Cu) goto L_0899A31C;
    return;
L_0899A31C:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] - ctx.gpr[4]);
    ctx.gpr[31] = (0x0899A33Cu);
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[4]));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x0899A33Cu) goto L_0899A33C;
    return;
L_0899A33C:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 7u);
    aot_mem.aot_store16(ctx.gpr[21] + static_cast<std::uint32_t>(60), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (16204u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16307u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    ctx.gpr[31] = (0x0899A364u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x0899A364u) goto L_0899A364;
    return;
L_0899A364:
    ctx.fpr[12] = ctx.fpr[26] - ctx.fpr[24];
    ctx.gpr[4] = (48793u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.gpr[5] = (16025u << 16u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[5] | 39322u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[24] + ctx.fpr[12];
    ctx.gpr[31] = (0x0899A390u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x0899A390u) goto L_0899A390;
    return;
L_0899A390:
    ctx.fpr[12] = ctx.fpr[26] - ctx.fpr[28];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[28] + ctx.fpr[12];
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0899A3A8;
L_0899A3A8:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[20]) || std::isnan(ctx.fpr[22])) && ctx.fpr[20] == ctx.fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0899A3BC;
      }
      goto L_0899A3B8;
    }
L_0899A3B8:
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_0899A3BC;
L_0899A3BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(72)));
    ctx.gpr[2] = (ctx.gpr[21] | 0u);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(-6032), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(144)));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(144), ctx.gpr[21]);
    goto L_0899A3D4;
L_0899A3D4:
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
L_0899A418:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-688));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-6920)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-6888)));
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(-25529)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(628), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(632), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(636), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(640), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(644), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(648), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(652), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(656), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(660), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(664), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(668), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(672), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(676), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899A480;
      }
      goto L_0899A478;
    }
L_0899A478:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899B924;
      }
      goto L_0899A480;
    }
L_0899A480:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(64), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(65), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(66), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(67), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7864)));
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[4]);
    ctx.set_vfpu_scalar_bits_ct<32u>(ctx.gpr[5]);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::log2(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<64u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::exp2(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<32u>());
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (16204u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[4]);
    ctx.set_vfpu_scalar_bits_ct<32u>(ctx.gpr[5]);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::log2(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<64u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::exp2(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<32u>());
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (16230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[4]);
    ctx.set_vfpu_scalar_bits_ct<32u>(ctx.gpr[5]);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::log2(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<64u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::exp2(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<32u>());
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (16243u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[4]);
    ctx.set_vfpu_scalar_bits_ct<32u>(ctx.gpr[5]);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::log2(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<64u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::exp2(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<32u>());
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (16245u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 49807u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[4]);
    ctx.set_vfpu_scalar_bits_ct<32u>(ctx.gpr[5]);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::log2(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<64u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::exp2(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<32u>());
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (16253u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 28836u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[4]);
    ctx.set_vfpu_scalar_bits_ct<32u>(ctx.gpr[5]);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::log2(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<64u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::exp2(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<32u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x0899A5D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 558u, 0x089D2448u>(ctx, &aot_mem) && ctx.pc == 0x0899A5D4u) goto L_0899A5D4;
    return;
L_0899A5D4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-7768)));
    ctx.gpr[5] = (0u | 23u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0899A6C8;
      }
      goto L_0899A5E8;
    }
L_0899A5E8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-7767)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (17419u << 16u);
      if (branch_taken) {
          goto L_0899A638;
      }
      goto L_0899A5F8;
    }
L_0899A5F8:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-7767)));
    ctx.gpr[4] = (0u | 15u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    ctx.gpr[4] = (17419u << 16u);
      if (branch_taken) {
          goto L_0899A638;
      }
      goto L_0899A60C;
    }
L_0899A60C:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-7767)));
    ctx.gpr[4] = (0u | 30u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    ctx.gpr[4] = (17419u << 16u);
      if (branch_taken) {
          goto L_0899A638;
      }
      goto L_0899A620;
    }
L_0899A620:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-7767)));
    ctx.gpr[4] = (0u | 45u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0899A6C8;
      }
      goto L_0899A634;
    }
L_0899A634:
    ctx.gpr[4] = (17419u << 16u);
    goto L_0899A638;
L_0899A638:
    ctx.gpr[4] = (ctx.gpr[4] | 16859u);
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (49280u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[9] = (16384u << 16u);
    ctx.gpr[4] = (17175u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.gpr[4] = (ctx.gpr[4] | 30409u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (0u | 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (16416u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[31] = (0x0899A698u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x0899A698u) goto L_0899A698;
    return;
L_0899A698:
    ctx.gpr[3] = (0u | 1000u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (0u | 44u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (ctx.gpr[2] | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 1u);
    ctx.gpr[31] = (0x0899A6C8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    goto L_089998F8;
L_0899A6C8:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 82 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899B924;
      }
      goto L_0899A6D8;
    }
L_0899A6D8:
    ctx.gpr[4] = (ctx.gpr[16] << 4u);
    goto L_0899A6DC;
L_0899A6DC:
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[17] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7124)));
    ctx.gpr[17] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(144)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_0899B914;
      }
      goto L_0899A704;
    }
L_0899A704:
    ctx.gpr[20] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7864)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 77u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0899A894;
      }
      goto L_0899A758;
    }
L_0899A758:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(64))))));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (16457u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (17204u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    ctx.gpr[4] = (17536u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (16585u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] & 1023u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (2275u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(6608));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (16000u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (2275u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2512));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
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
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0899A88C;
      }
      goto L_0899A820;
    }
L_0899A820:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0899A88C;
      }
      goto L_0899A83C;
    }
L_0899A83C:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
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
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17008u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0899A894;
      }
      goto L_0899A88C;
    }
L_0899A88C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 1u);
      if (branch_taken) {
          goto L_0899B8D4;
      }
      goto L_0899A894;
    }
L_0899A894:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    ctx.gpr[31] = (0x0899A8A0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 565u, 0x089274ACu>(ctx, &aot_mem) && ctx.pc == 0x0899A8A0u) goto L_0899A8A0;
    return;
L_0899A8A0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7688)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0899A97C;
      }
      goto L_0899A8BC;
    }
L_0899A8BC:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
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
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0899A97C;
      }
      goto L_0899A8E8;
    }
L_0899A8E8:
    ctx.gpr[4] = (16192u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16288u << 16u);
    ctx.gpr[31] = (0x0899A8FCu);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x0899A8FCu) goto L_0899A8FC;
    return;
L_0899A8FC:
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[20];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    ctx.gpr[21] = (2230u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-7688)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x0899A924u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x0899A924u) goto L_0899A924;
    return;
L_0899A924:
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[20];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-7688)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(136)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29272)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7864)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<1u>(ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 1u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x0899A97Cu);
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 565u, 0x089274ACu>(ctx, &aot_mem) && ctx.pc == 0x0899A97Cu) goto L_0899A97C;
    return;
L_0899A97C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 45u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0899A9EC;
      }
      goto L_0899A98C;
    }
L_0899A98C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 44u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0899A9EC;
      }
      goto L_0899A99C;
    }
L_0899A99C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 78u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0899A9EC;
      }
      goto L_0899A9AC;
    }
L_0899A9AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 34u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0899A9EC;
      }
      goto L_0899A9BC;
    }
L_0899A9BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 35u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0899A9EC;
      }
      goto L_0899A9CC;
    }
L_0899A9CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 36u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0899A9EC;
      }
      goto L_0899A9DC;
    }
L_0899A9DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 37u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0899AAC8;
      }
      goto L_0899A9EC;
    }
L_0899A9EC:
    ctx.gpr[31] = (0x0899A9F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x0899A9F4u) goto L_0899A9F4;
    return;
L_0899A9F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 45u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0899AA14;
      }
      goto L_0899AA04;
    }
L_0899AA04:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 44u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0899AAC8;
      }
      goto L_0899AA14;
    }
L_0899AA14:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.gpr[31] = (0x0899AA34u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 297u, 0x0890DF38u>(ctx, &aot_mem) && ctx.pc == 0x0899AA34u) goto L_0899AA34;
    return;
L_0899AA34:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[16];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0899AA5C;
      }
      goto L_0899AA54;
    }
L_0899AA54:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 1u);
      if (branch_taken) {
          goto L_0899B8D4;
      }
      goto L_0899AA5C;
    }
L_0899AA5C:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[31] = (0x0899AA68u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 139u, 0x088ED114u>(ctx, &aot_mem) && ctx.pc == 0x0899AA68u) goto L_0899AA68;
    return;
L_0899AA68:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_0899AA84;
      }
      goto L_0899AA74;
    }
L_0899AA74:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899AA84;
      }
      goto L_0899AA7C;
    }
L_0899AA7C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899AA84;
      }
      goto L_0899AA84;
    }
L_0899AA84:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
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
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_0899AAC8;
L_0899AAC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0899AAEC;
      }
      goto L_0899AAE0;
    }
L_0899AAE0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(45)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0899AAF4;
      }
      goto L_0899AAEC;
    }
L_0899AAEC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 1u);
      if (branch_taken) {
          goto L_0899B8D4;
      }
      goto L_0899AAF4;
    }
L_0899AAF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899AC58;
      }
      goto L_0899AB00;
    }
L_0899AB00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899AC48;
      }
      goto L_0899AB18;
    }
L_0899AB18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_0899AB40;
      }
      goto L_0899AB34;
    }
L_0899AB34:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_0899AB40;
L_0899AB40:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(124)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
      if (branch_taken) {
          goto L_0899AB5C;
      }
      goto L_0899AB50;
    }
L_0899AB50:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    goto L_0899AB5C;
L_0899AB5C:
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(120));
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(112));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(1)));
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1)));
    ctx.gpr[5] = (16256u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] - ctx.gpr[8]);
    ctx.gpr[9] = (ctx.gpr[9] - ctx.gpr[10]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(2)));
    ctx.gpr[11] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2)));
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[11]);
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(68));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[16] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[16])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[15]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[8] + ctx.gpr[5]);
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[6] = (ctx.gpr[10] + ctx.gpr[6]);
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) >= 0;
    ctx.gpr[7] = (ctx.gpr[11] + ctx.gpr[7]);
      if (branch_taken) {
          goto L_0899ABF0;
      }
      goto L_0899ABE8;
    }
L_0899ABE8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_0899AC00;
      }
      goto L_0899ABF0;
    }
L_0899ABF0:
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[5]) < 256 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_0899AC00;
      }
      goto L_0899ABFC;
    }
L_0899ABFC:
    ctx.gpr[5] = (0u | 255u);
    goto L_0899AC00;
L_0899AC00:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) >= 0;
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[6]) < 256 ? 1u : 0u);
      if (branch_taken) {
          goto L_0899AC10;
      }
      goto L_0899AC08;
    }
L_0899AC08:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_0899AC1C;
      }
      goto L_0899AC10;
    }
L_0899AC10:
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_0899AC1C;
      }
      goto L_0899AC18;
    }
L_0899AC18:
    ctx.gpr[6] = (0u | 255u);
    goto L_0899AC1C;
L_0899AC1C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) >= 0;
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < 256 ? 1u : 0u);
      if (branch_taken) {
          goto L_0899AC2C;
      }
      goto L_0899AC24;
    }
L_0899AC24:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_0899AC38;
      }
      goto L_0899AC2C;
    }
L_0899AC2C:
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_0899AC38;
      }
      goto L_0899AC34;
    }
L_0899AC34:
    ctx.gpr[7] = (0u | 255u);
    goto L_0899AC38;
L_0899AC38:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[7]));
      if (branch_taken) {
          goto L_0899AC58;
      }
      goto L_0899AC48;
    }
L_0899AC48:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(120));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(68));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_0899AC58;
L_0899AC58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[4] & 2048u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2229u << 16u);
      if (branch_taken) {
          goto L_0899ACF0;
      }
      goto L_0899AC68;
    }
L_0899AC68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27340)));
    ctx.gpr[5] = (2229u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(27344)));
    ctx.gpr[5] = (16672u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (49440u << 16u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[16] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[16])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[14] = ctx.fpr[16] + ctx.fpr[14];
      if (branch_taken) {
          goto L_0899ACE8;
      }
      goto L_0899ACAC;
    }
L_0899ACAC:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((ctx.fpr[15] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0899ACE8;
      }
      goto L_0899ACC0;
    }
L_0899ACC0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0899ACE8;
      }
      goto L_0899ACD4;
    }
L_0899ACD4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0899ACF0;
      }
      goto L_0899ACE8;
    }
L_0899ACE8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 1u);
      if (branch_taken) {
          goto L_0899B8D4;
      }
      goto L_0899ACF0;
    }
L_0899ACF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0899AE50;
      }
      goto L_0899AD00;
    }
L_0899AD00:
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(52)));
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
      if (branch_taken) {
          goto L_0899AE28;
      }
      goto L_0899AD18;
    }
L_0899AD18:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
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
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0899AD70;
      }
      goto L_0899AD58;
    }
L_0899AD58:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
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
    goto L_0899AD70;
L_0899AD70:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 65u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0899AD90;
      }
      goto L_0899AD80;
    }
L_0899AD80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 33u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0899AD9C;
      }
      goto L_0899AD90;
    }
L_0899AD90:
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    goto L_0899AD9C;
L_0899AD9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 45u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (16281u << 16u);
      if (branch_taken) {
          goto L_0899ADC0;
      }
      goto L_0899ADAC;
    }
L_0899ADAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 44u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (16256u << 16u);
      if (branch_taken) {
          goto L_0899AE0C;
      }
      goto L_0899ADBC;
    }
L_0899ADBC:
    ctx.gpr[4] = (16281u << 16u);
    goto L_0899ADC0;
L_0899ADC0:
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (16256u << 16u);
      if (branch_taken) {
          goto L_0899AE0C;
      }
      goto L_0899ADD8;
    }
L_0899ADD8:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(52)));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    ctx.gpr[4] = (15897u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[16] = ctx.fpr[16] - ctx.fpr[17];
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
      if (branch_taken) {
          goto L_0899AE20;
      }
      goto L_0899AE0C;
    }
L_0899AE0C:
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(52)));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_0899AE20;
L_0899AE20:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899AE30;
      }
      goto L_0899AE28;
    }
L_0899AE28:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(52)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_0899AE30;
L_0899AE30:
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0899AE4C;
      }
      goto L_0899AE44;
    }
L_0899AE44:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 1u);
      if (branch_taken) {
          goto L_0899B8D4;
      }
      goto L_0899AE4C;
    }
L_0899AE4C:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0899AE50;
L_0899AE50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(76)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 51 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 90 ? 1u : 0u);
      if (branch_taken) {
          goto L_0899AEA8;
      }
      goto L_0899AE60;
    }
L_0899AE60:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 50 ? 1u : 0u);
        goto L_0899AE7C;
    }
    goto L_0899AE6C;
L_0899AE6C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0899AF90;
      }
      goto L_0899AE74;
    }
L_0899AE74:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899AF90;
      }
      goto L_0899AE7C;
    }
L_0899AE7C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0899AF90;
      }
      goto L_0899AE84;
    }
L_0899AE84:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<1u>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
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
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899AF90;
      }
      goto L_0899AEA8;
    }
L_0899AEA8:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 100 ? 1u : 0u);
      if (branch_taken) {
          goto L_0899AEE0;
      }
      goto L_0899AEB0;
    }
L_0899AEB0:
    ctx.gpr[5] = (0u | 80u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0899AF90;
      }
      goto L_0899AEBC;
    }
L_0899AEBC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<1u>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
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
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899AF90;
      }
      goto L_0899AEE0;
    }
L_0899AEE0:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-90));
      if (branch_taken) {
          goto L_0899AF90;
      }
      goto L_0899AEE8;
    }
L_0899AEE8:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-18616)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899AF00:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<1u>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
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
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899AF90;
      }
      goto L_0899AF24;
    }
L_0899AF24:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<1u>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
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
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899AF90;
      }
      goto L_0899AF48;
    }
L_0899AF48:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<1u>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
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
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899AF90;
      }
      goto L_0899AF6C;
    }
L_0899AF6C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<1u>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
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
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899AF90;
      }
      goto L_0899AF90;
    }
L_0899AF90:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0899B670;
      }
      goto L_0899AFA8;
    }
L_0899AFA8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (49736u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0899AFE8;
      }
      goto L_0899AFCC;
    }
L_0899AFCC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7864)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0899AFE8;
L_0899AFE8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899B360;
      }
      goto L_0899AFF8;
    }
L_0899AFF8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0899B668;
      }
      goto L_0899B010;
    }
L_0899B010:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5));
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(31) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5));
      if (branch_taken) {
          goto L_0899B358;
      }
      goto L_0899B024;
    }
L_0899B024:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-18576)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899B03C:
    ctx.gpr[31] = (0x0899B044u);
    ctx.gpr[20] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x0899B044u) goto L_0899B044;
    return;
L_0899B044:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (15692u << 16u);
      if (branch_taken) {
          goto L_0899B0B8;
      }
      goto L_0899B054;
    }
L_0899B054:
    ctx.gpr[4] = (15692u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(304), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(308), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(304));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(312), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(320), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(324), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(328), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(320));
    ctx.gpr[4] = (0u | 36u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x0899B0B0u);
    ctx.gpr[11] = (0u | 0u);
    goto L_08998634;
L_0899B0B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899B110;
      }
      goto L_0899B0B8;
    }
L_0899B0B8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(336), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(340), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(336));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(344), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(352), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(356), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(360), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(352));
    ctx.gpr[4] = (0u | 38u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x0899B110u);
    ctx.gpr[11] = (0u | 0u);
    goto L_08998634;
L_0899B110:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899B8D4;
      }
      goto L_0899B118;
    }
L_0899B118:
    ctx.gpr[31] = (0x0899B120u);
    ctx.gpr[20] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x0899B120u) goto L_0899B120;
    return;
L_0899B120:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[5] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (0u | 5u);
      if (branch_taken) {
          goto L_0899B1FC;
      }
      goto L_0899B130;
    }
L_0899B130:
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (ctx.hi);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (15692u << 16u);
      if (branch_taken) {
          goto L_0899B1A4;
      }
      goto L_0899B140;
    }
L_0899B140:
    ctx.gpr[4] = (15692u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(368), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(372), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(368));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(376), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(384), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(388), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(392), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(384));
    ctx.gpr[4] = (0u | 36u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x0899B19Cu);
    ctx.gpr[11] = (0u | 0u);
    goto L_08998634;
L_0899B19C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899B1FC;
      }
      goto L_0899B1A4;
    }
L_0899B1A4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(400), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(404), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(400));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(408), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(416), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(420), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(424), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(416));
    ctx.gpr[4] = (0u | 38u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x0899B1FCu);
    ctx.gpr[11] = (0u | 0u);
    goto L_08998634;
L_0899B1FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899B8D4;
      }
      goto L_0899B204;
    }
L_0899B204:
    ctx.gpr[20] = (0u | 1u);
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(432));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(440)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(440), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29280)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-29280), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[5] & 7u);
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (15820u << 16u);
      if (branch_taken) {
          goto L_0899B2C4;
      }
      goto L_0899B248;
    }
L_0899B248:
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (48588u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27944)));
    ctx.gpr[4] = (16512u << 16u);
    ctx.gpr[31] = (0x0899B274u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x0899B274u) goto L_0899B274;
    return;
L_0899B274:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[11] = (ctx.gpr[4] & 4095u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[2] = (16256u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(2000));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (0u | 1u);
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(432));
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[8] = (0u | 255u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[31] = (0x0899B2BCu);
    ctx.gpr[10] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 142u, 0x08929268u>(ctx, &aot_mem) && ctx.pc == 0x0899B2BCu) goto L_0899B2BC;
    return;
L_0899B2BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899B350;
      }
      goto L_0899B2C4;
    }
L_0899B2C4:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-29280)));
    ctx.gpr[4] = (0u | 2u);
    ctx.gpr[5] = (ctx.gpr[5] & 7u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    ctx.gpr[4] = (15948u << 16u);
      if (branch_taken) {
          goto L_0899B350;
      }
      goto L_0899B2DC;
    }
L_0899B2DC:
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (48716u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27944)));
    ctx.gpr[4] = (16512u << 16u);
    ctx.gpr[31] = (0x0899B308u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x0899B308u) goto L_0899B308;
    return;
L_0899B308:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[11] = (ctx.gpr[4] & 4095u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[2] = (16256u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(8000));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (0u | 1u);
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(432));
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[8] = (0u | 255u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[31] = (0x0899B350u);
    ctx.gpr[10] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 142u, 0x08929268u>(ctx, &aot_mem) && ctx.pc == 0x0899B350u) goto L_0899B350;
    return;
L_0899B350:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899B8D4;
      }
      goto L_0899B358;
    }
L_0899B358:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899B668;
      }
      goto L_0899B360;
    }
L_0899B360:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899B494;
      }
      goto L_0899B370;
    }
L_0899B370:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(256));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(288));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 1u);
    ctx.gpr[31] = (0x0899B3A4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 95u, 0x088C06D4u>(ctx, &aot_mem) && ctx.pc == 0x0899B3A4u) goto L_0899B3A4;
    return;
L_0899B3A4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899B668;
      }
      goto L_0899B3AC;
    }
L_0899B3AC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(264)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0899B668;
      }
      goto L_0899B3C4;
    }
L_0899B3C4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 10u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0899B668;
      }
      goto L_0899B3DC;
    }
L_0899B3DC:
    ctx.gpr[31] = (0x0899B3E4u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 377u, 0x08AF5D84u>(ctx, &aot_mem) && ctx.pc == 0x0899B3E4u) goto L_0899B3E4;
    return;
L_0899B3E4:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29252)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29256)));
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[7] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x0899B404u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 436u, 0x08AF61F4u>(ctx, &aot_mem) && ctx.pc == 0x0899B404u) goto L_0899B404;
    return;
L_0899B404:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x0899B410u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 551u, 0x08AF6A14u>(ctx, &aot_mem) && ctx.pc == 0x0899B410u) goto L_0899B410;
    return;
L_0899B410:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (0x0899B41Cu);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 377u, 0x08AF5D84u>(ctx, &aot_mem) && ctx.pc == 0x0899B41Cu) goto L_0899B41C;
    return;
L_0899B41C:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[7] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x0899B430u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 436u, 0x08AF61F4u>(ctx, &aot_mem) && ctx.pc == 0x0899B430u) goto L_0899B430;
    return;
L_0899B430:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x0899B43Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 551u, 0x08AF6A14u>(ctx, &aot_mem) && ctx.pc == 0x0899B43Cu) goto L_0899B43C;
    return;
L_0899B43C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x0899B448u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 377u, 0x08AF5D84u>(ctx, &aot_mem) && ctx.pc == 0x0899B448u) goto L_0899B448;
    return;
L_0899B448:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29244)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29248)));
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x0899B460u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 436u, 0x08AF61F4u>(ctx, &aot_mem) && ctx.pc == 0x0899B460u) goto L_0899B460;
    return;
L_0899B460:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x0899B46Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 551u, 0x08AF6A14u>(ctx, &aot_mem) && ctx.pc == 0x0899B46Cu) goto L_0899B46C;
    return;
L_0899B46C:
    ctx.gpr[4] = (15267u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_0899B668;
      }
      goto L_0899B488;
    }
L_0899B488:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0899B668;
      }
      goto L_0899B494;
    }
L_0899B494:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[4] & 4096u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899B668;
      }
      goto L_0899B4A4;
    }
L_0899B4A4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0899B668;
      }
      goto L_0899B4BC;
    }
L_0899B4BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 71 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 72 ? 1u : 0u);
      if (branch_taken) {
          goto L_0899B4E0;
      }
      goto L_0899B4CC;
    }
L_0899B4CC:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 69 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0899B668;
      }
      goto L_0899B4D8;
    }
L_0899B4D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899B4F8;
      }
      goto L_0899B4E0;
    }
L_0899B4E0:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 73 ? 1u : 0u);
      if (branch_taken) {
          goto L_0899B5C4;
      }
      goto L_0899B4E8;
    }
L_0899B4E8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899B668;
      }
      goto L_0899B4F0;
    }
L_0899B4F0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 1u);
      if (branch_taken) {
          goto L_0899B8D4;
      }
      goto L_0899B4F8;
    }
L_0899B4F8:
    ctx.gpr[4] = (48291u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[20] = (0u | 1u);
    ctx.gpr[4] = (15523u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.gpr[31] = (0x0899B518u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x0899B518u) goto L_0899B518;
    return;
L_0899B518:
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[20];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    ctx.gpr[31] = (0x0899B52Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(464), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x0899B52Cu) goto L_0899B52C;
    return;
L_0899B52C:
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[20];
    ctx.gpr[4] = (15692u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.gpr[5] = (15820u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[5] | 52429u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    ctx.gpr[31] = (0x0899B558u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(468), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x0899B558u) goto L_0899B558;
    return;
L_0899B558:
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[24];
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(448));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(464));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[4] = (0u | 71u);
    ctx.fpr[12] = ctx.fpr[24] + ctx.fpr[12];
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(472), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[24];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(448), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(452), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(456), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(62))))));
    ctx.gpr[31] = (0x0899B5B0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    goto L_089998F8;
L_0899B5B0:
    ctx.gpr[4] = (0u | 86u);
    ctx.gpr[31] = (0x0899B5BCu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 603u, 0x0896ED08u>(ctx, &aot_mem) && ctx.pc == 0x0899B5BCu) goto L_0899B5BC;
    return;
L_0899B5BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899B668;
      }
      goto L_0899B5C4;
    }
L_0899B5C4:
    ctx.gpr[4] = (15605u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[4] | 49807u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(496), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (15733u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 49807u);
    ctx.gpr[20] = (0u | 1u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x0899B5F0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(500), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x0899B5F0u) goto L_0899B5F0;
    return;
L_0899B5F0:
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[20];
    ctx.gpr[4] = (15692u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(480));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(496));
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    ctx.gpr[4] = (0u | 72u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(504), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(480), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(484), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[10] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(488), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x0899B654u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    goto L_089998F8;
L_0899B654:
    ctx.gpr[4] = (0u | 87u);
    ctx.gpr[31] = (0x0899B660u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 603u, 0x0896ED08u>(ctx, &aot_mem) && ctx.pc == 0x0899B660u) goto L_0899B660;
    return;
L_0899B660:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899B668;
      }
      goto L_0899B668;
    }
L_0899B668:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899B7A4;
      }
      goto L_0899B670;
    }
L_0899B670:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0899B6D0;
      }
      goto L_0899B688;
    }
L_0899B688:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (49312u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0899B6C8;
      }
      goto L_0899B6AC;
    }
L_0899B6AC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7864)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0899B6C8;
L_0899B6C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899B7A4;
      }
      goto L_0899B6D0;
    }
L_0899B6D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899B7A4;
      }
      goto L_0899B6E0;
    }
L_0899B6E0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(512));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(544));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 1u);
    ctx.gpr[31] = (0x0899B714u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 95u, 0x088C06D4u>(ctx, &aot_mem) && ctx.pc == 0x0899B714u) goto L_0899B714;
    return;
L_0899B714:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899B7A4;
      }
      goto L_0899B71C;
    }
L_0899B71C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(520)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0899B7A4;
      }
      goto L_0899B734;
    }
L_0899B734:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(520)));
    ctx.gpr[4] = (0u | 54u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0899B7A4;
      }
      goto L_0899B74C;
    }
L_0899B74C:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (15692u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(560), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(564), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[2] = (15948u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(568), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[2] = (ctx.gpr[2] | 52429u);
    ctx.gpr[20] = (0u | 1u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(560));
    ctx.gpr[4] = (0u | 28u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x0899B79Cu);
    ctx.gpr[11] = (0u | 0u);
    goto L_08998634;
L_0899B79C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899B8D4;
      }
      goto L_0899B7A4;
    }
L_0899B7A4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(56))))));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899B7E0;
      }
      goto L_0899B7B0;
    }
L_0899B7B0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(44)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(56))))));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_0899B7CC;
      }
      goto L_0899B7C4;
    }
L_0899B7C4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0899B7DC;
      }
      goto L_0899B7CC;
    }
L_0899B7CC:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 256 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0899B7DC;
      }
      goto L_0899B7D8;
    }
L_0899B7D8:
    ctx.gpr[4] = (0u | 255u);
    goto L_0899B7DC;
L_0899B7DC:
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0899B7E0;
L_0899B7E0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(58))))));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899B830;
      }
      goto L_0899B7EC;
    }
L_0899B7EC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(45)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(58))))));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_0899B808;
      }
      goto L_0899B800;
    }
L_0899B800:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0899B818;
      }
      goto L_0899B808;
    }
L_0899B808:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 256 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0899B818;
      }
      goto L_0899B814;
    }
L_0899B814:
    ctx.gpr[4] = (0u | 255u);
    goto L_0899B818;
L_0899B818:
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(45)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0899B830;
      }
      goto L_0899B828;
    }
L_0899B828:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 1u);
      if (branch_taken) {
          goto L_0899B8D4;
      }
      goto L_0899B830;
    }
L_0899B830:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(66)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899B8AC;
      }
      goto L_0899B83C;
    }
L_0899B83C:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(66)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(60)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899B8A0;
      }
      goto L_0899B850;
    }
L_0899B850:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(66)));
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(60), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(66), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(65)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(66)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899B8AC;
      }
      goto L_0899B874;
    }
L_0899B874:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[4] & 64u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899B890;
      }
      goto L_0899B884;
    }
L_0899B884:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(66), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0899B8AC;
      }
      goto L_0899B890;
    }
L_0899B890:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(66)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(66), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0899B8AC;
      }
      goto L_0899B8A0;
    }
L_0899B8A0:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(60)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(60), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_0899B8AC;
L_0899B8AC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(62))))));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899B8C8;
      }
      goto L_0899B8B8;
    }
L_0899B8B8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(64))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(62))))));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(64), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_0899B8C8;
L_0899B8C8:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    goto L_0899B8D4;
L_0899B8D4:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899B904;
      }
      goto L_0899B8DC;
    }
L_0899B8DC:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0899B8ECu);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    goto L_08998774;
L_0899B8EC:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899B8FC;
      }
      goto L_0899B8F4;
    }
L_0899B8F4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(72)));
      if (branch_taken) {
          goto L_0899B90C;
      }
      goto L_0899B8FC;
    }
L_0899B8FC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(144)));
      if (branch_taken) {
          goto L_0899B90C;
      }
      goto L_0899B904;
    }
L_0899B904:
    ctx.gpr[19] = (ctx.gpr[18] | 0u);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(72)));
    goto L_0899B90C;
L_0899B90C:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_0899A704;
      }
      goto L_0899B914;
    }
L_0899B914:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 82 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] << 4u);
      if (branch_taken) {
          goto L_0899A6DC;
      }
      goto L_0899B924;
    }
L_0899B924:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(628)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(632)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(636)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(640)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(644)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(648)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(652)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(656)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(660)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(664)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(668)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(672)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(676)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(688));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899B960:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-288));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(220), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(232), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(236), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(248), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(252), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(264), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(268), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(272), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), ctx.gpr[31]);
    ctx.gpr[4] = (0u | 2u);
    ctx.gpr[31] = (0x0899B9B0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x0899B9B0u) goto L_0899B9B0;
    return;
L_0899B9B0:
    ctx.gpr[4] = (0u | 5u);
    ctx.gpr[31] = (0x0899B9BCu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x0899B9BCu) goto L_0899B9BC;
    return;
L_0899B9BC:
    ctx.gpr[4] = (0u | 14u);
    ctx.gpr[31] = (0x0899B9C8u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x0899B9C8u) goto L_0899B9C8;
    return;
L_0899B9C8:
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[31] = (0x0899B9D4u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x0899B9D4u) goto L_0899B9D4;
    return;
L_0899B9D4:
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[31] = (0x0899B9E0u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x0899B9E0u) goto L_0899B9E0;
    return;
L_0899B9E0:
    ctx.gpr[4] = (0u | 4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 10u);
    ctx.gpr[31] = (0x0899B9F4u);
    ctx.gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x0899B9F4u) goto L_0899B9F4;
    return;
L_0899B9F4:
    ctx.gpr[4] = (0u | 11u);
    ctx.gpr[31] = (0x0899BA00u);
    ctx.gpr[5] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x0899BA00u) goto L_0899BA00;
    return;
L_0899BA00:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x0899BA0Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 298u, 0x08A25F04u>(ctx, &aot_mem) && ctx.pc == 0x0899BA0Cu) goto L_0899BA0C;
    return;
L_0899BA0C:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), ctx.gpr[4]);
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), ctx.gpr[6]);
    ctx.gpr[4] = (16457u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[26] = std::bit_cast<float>(0u);
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), ctx.gpr[7]);
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[23] = (2233u << 16u);
    ctx.gpr[4] = (16704u << 16u);
    ctx.gpr[20] = (0u | 0u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), ctx.gpr[5]);
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(-4912));
    goto L_0899BA80;
L_0899BA80:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7124)));
    ctx.gpr[19] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(144)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(140)));
      if (branch_taken) {
          goto L_0899BB80;
      }
      goto L_0899BA9C;
    }
L_0899BA9C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (ctx.gpr[6] & 4u);
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0899BAC8;
      }
      goto L_0899BAB4;
    }
L_0899BAB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (ctx.gpr[6] & 128u);
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0899BB50;
      }
      goto L_0899BAC8;
    }
L_0899BAC8:
    ctx.gpr[31] = (0x0899BAD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 302u, 0x08A25F64u>(ctx, &aot_mem) && ctx.pc == 0x0899BAD0u) goto L_0899BAD0;
    return;
L_0899BAD0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899BB00;
      }
      goto L_0899BAE0;
    }
L_0899BAE0:
    ctx.gpr[4] = (0u | 10u);
    ctx.gpr[31] = (0x0899BAECu);
    ctx.gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x0899BAECu) goto L_0899BAEC;
    return;
L_0899BAEC:
    ctx.gpr[4] = (0u | 11u);
    ctx.gpr[31] = (0x0899BAF8u);
    ctx.gpr[5] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x0899BAF8u) goto L_0899BAF8;
    return;
L_0899BAF8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899BB48;
      }
      goto L_0899BB00;
    }
L_0899BB00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899BB30;
      }
      goto L_0899BB10;
    }
L_0899BB10:
    ctx.gpr[4] = (0u | 10u);
    ctx.gpr[31] = (0x0899BB1Cu);
    ctx.gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x0899BB1Cu) goto L_0899BB1C;
    return;
L_0899BB1C:
    ctx.gpr[4] = (0u | 11u);
    ctx.gpr[31] = (0x0899BB28u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x0899BB28u) goto L_0899BB28;
    return;
L_0899BB28:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899BB48;
      }
      goto L_0899BB30;
    }
L_0899BB30:
    ctx.gpr[4] = (0u | 10u);
    ctx.gpr[31] = (0x0899BB3Cu);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x0899BB3Cu) goto L_0899BB3C;
    return;
L_0899BB3C:
    ctx.gpr[4] = (0u | 11u);
    ctx.gpr[31] = (0x0899BB48u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x0899BB48u) goto L_0899BB48;
    return;
L_0899BB48:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(108)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), ctx.gpr[4]);
    goto L_0899BB50;
L_0899BB50:
    { const bool branch_taken = ctx.gpr[30] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899BB80;
      }
      goto L_0899BB58;
    }
L_0899BB58:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0899BB80;
      }
      goto L_0899BB68;
    }
L_0899BB68:
    ctx.gpr[31] = (0x0899BB70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 302u, 0x08A25F64u>(ctx, &aot_mem) && ctx.pc == 0x0899BB70u) goto L_0899BB70;
    return;
L_0899BB70:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[31] = (0x0899BB7Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x0899BB7Cu) goto L_0899BB7C;
    return;
L_0899BB7C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), ctx.gpr[16]);
    goto L_0899BB80;
L_0899BB80:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 46u, 0x0899C5A8u>(ctx, &aot_mem); return;
      }
      goto L_0899BB88;
    }
L_0899BB88:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(45)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_0899BB98;
      }
      goto L_0899BB94;
    }
L_0899BB94:
    ctx.gpr[18] = (0u | 0u);
    goto L_0899BB98;
L_0899BB98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (4u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6144));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899BBD0;
      }
      goto L_0899BBCC;
    }
L_0899BBCC:
    ctx.gpr[18] = (0u | 0u);
    goto L_0899BBD0;
L_0899BBD0:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899BC20;
      }
      goto L_0899BBD8;
    }
L_0899BBD8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(65)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899BC20;
      }
      goto L_0899BBE4;
    }
L_0899BBE4:
    { const bool branch_taken = ctx.gpr[30] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899BC20;
      }
      goto L_0899BBEC;
    }
L_0899BBEC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(66)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[30] + ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_0899BC20;
      }
      goto L_0899BC08;
    }
L_0899BC08:
    ctx.gpr[31] = (0x0899BC10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 302u, 0x08A25F64u>(ctx, &aot_mem) && ctx.pc == 0x0899BC10u) goto L_0899BC10;
    return;
L_0899BC10:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[31] = (0x0899BC1Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x0899BC1Cu) goto L_0899BC1C;
    return;
L_0899BC1C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), ctx.gpr[16]);
    goto L_0899BC20;
L_0899BC20:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(68));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    ctx.gpr[22] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[21] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(65)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[16] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(66)));
      if (branch_taken) {
          goto L_0899BDD0;
      }
      goto L_0899BC3C;
    }
L_0899BC3C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[4] & 1024u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899BDD0;
      }
      goto L_0899BC4C;
    }
L_0899BC4C:
    ctx.gpr[31] = (0x0899BC54u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 273u, 0x08A2590Cu>(ctx, &aot_mem) && ctx.pc == 0x0899BC54u) goto L_0899BC54;
    return;
L_0899BC54:
    ctx.gpr[4] = (0u | 34u);
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 35u);
      if (branch_taken) {
          goto L_0899BC70;
      }
      goto L_0899BC60;
    }
L_0899BC60:
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 78u);
      if (branch_taken) {
          goto L_0899BC70;
      }
      goto L_0899BC68;
    }
L_0899BC68:
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0899BCDC;
      }
      goto L_0899BC70;
    }
L_0899BC70:
    ctx.gpr[31] = (0x0899BC78u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x0899BC78u) goto L_0899BC78;
    return;
L_0899BC78:
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[24];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(128)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(66)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.gpr[4] = (17020u << 16u);
    ctx.fpr[12] = ctx.fpr[24] + ctx.fpr[12];
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.gpr[31] = (0x0899BCACu);
    ctx.fpr[20] = ctx.fpr[28] + ctx.fpr[20];
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x0899BCACu) goto L_0899BCAC;
    return;
L_0899BCAC:
    ctx.fpr[15] = ctx.fpr[22] - ctx.fpr[24];
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(132)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(66)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.fpr[12] = ctx.fpr[24] + ctx.fpr[12];
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[28] + ctx.fpr[12];
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
      if (branch_taken) {
          goto L_0899BD24;
      }
      goto L_0899BCDC;
    }
L_0899BCDC:
    ctx.gpr[31] = (0x0899BCE4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x0899BCE4u) goto L_0899BCE4;
    return;
L_0899BCE4:
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[24];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(128)));
    ctx.gpr[4] = (17020u << 16u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[24] + ctx.fpr[12];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.gpr[31] = (0x0899BD08u);
    ctx.fpr[20] = ctx.fpr[28] + ctx.fpr[20];
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x0899BD08u) goto L_0899BD08;
    return;
L_0899BD08:
    ctx.fpr[14] = ctx.fpr[22] - ctx.fpr[24];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(132)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[24] + ctx.fpr[14];
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[28] + ctx.fpr[12];
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    goto L_0899BD24;
L_0899BD24:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899BDC4;
      }
      goto L_0899BD2C;
    }
L_0899BD2C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(64))))));
    if (ctx.gpr[4] == 0u) {
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_0899BD94;
    }
    goto L_0899BD38;
L_0899BD38:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(64))))));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    ctx.fpr[16] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(44)));
    ctx.gpr[5] = (17204u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[30]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(45)));
    ctx.fpr[16] = ctx.fpr[16] / ctx.fpr[18];
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[31] = (0x0899BD8Cu);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 294u, 0x08A25D58u>(ctx, &aot_mem) && ctx.pc == 0x0899BD8Cu) goto L_0899BD8C;
    return;
L_0899BD8C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899BDC4;
      }
      goto L_0899BD94;
    }
L_0899BD94:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(44)));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(45)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.gpr[5] = (ctx.gpr[4] << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
    ctx.gpr[31] = (0x0899BDC4u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 289u, 0x08A25C10u>(ctx, &aot_mem) && ctx.pc == 0x0899BDC4u) goto L_0899BDC4;
    return;
L_0899BDC4:
    ctx.gpr[4] = (20352u << 16u);
    ctx.gpr[18] = (0u | 0u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_0899BDD0;
L_0899BDD0:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 45u, 0x0899C59Cu>(ctx, &aot_mem); return;
      }
      goto L_0899BDD8;
    }
L_0899BDD8:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(100));
    ctx.gpr[31] = (0x0899BDECu);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 277u, 0x08A25970u>(ctx, &aot_mem) && ctx.pc == 0x0899BDECu) goto L_0899BDEC;
    return;
L_0899BDEC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 45u, 0x0899C59Cu>(ctx, &aot_mem); return;
      }
      goto L_0899BDF4;
    }
L_0899BDF4:
    ctx.gpr[4] = (0u | 55u);
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 56u);
      if (branch_taken) {
          goto L_0899BE38;
      }
      goto L_0899BE00;
    }
L_0899BE00:
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 33u);
      if (branch_taken) {
          goto L_0899BE38;
      }
      goto L_0899BE08;
    }
L_0899BE08:
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 57u);
      if (branch_taken) {
          goto L_0899BE38;
      }
      goto L_0899BE10;
    }
L_0899BE10:
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 66u);
      if (branch_taken) {
          goto L_0899BE38;
      }
      goto L_0899BE18;
    }
L_0899BE18:
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 67u);
      if (branch_taken) {
          goto L_0899BE38;
      }
      goto L_0899BE20;
    }
L_0899BE20:
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 65u);
      if (branch_taken) {
          goto L_0899BE38;
      }
      goto L_0899BE28;
    }
L_0899BE28:
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 61u);
      if (branch_taken) {
          goto L_0899BE38;
      }
      goto L_0899BE30;
    }
L_0899BE30:
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0899BEFC;
      }
      goto L_0899BE38;
    }
L_0899BE38:
    ctx.gpr[31] = (0x0899BE40u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 139u, 0x088ED114u>(ctx, &aot_mem) && ctx.pc == 0x0899BE40u) goto L_0899BE40;
    return;
L_0899BE40:
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) <= 0;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_0899BEAC;
      }
      goto L_0899BE4C;
    }
L_0899BE4C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899BEAC;
      }
      goto L_0899BE54;
    }
L_0899BE54:
    ctx.gpr[31] = (0x0899BE5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x0899BE5Cu) goto L_0899BE5C;
    return;
L_0899BE5C:
    ctx.gpr[4] = (16624u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[22];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(128)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[22] + ctx.fpr[12];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[14] + ctx.fpr[12];
    ctx.gpr[31] = (0x0899BE88u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x0899BE88u) goto L_0899BE88;
    return;
L_0899BE88:
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[24];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(132)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[24] + ctx.fpr[12];
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[16] + ctx.fpr[12];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 3u, 0x0899C03Cu>(ctx, &aot_mem); return;
      }
      goto L_0899BEAC;
    }
L_0899BEAC:
    ctx.gpr[31] = (0x0899BEB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x0899BEB4u) goto L_0899BEB4;
    return;
L_0899BEB4:
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[24];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(128)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[24] + ctx.fpr[12];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[14] + ctx.fpr[12];
    ctx.gpr[31] = (0x0899BED8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x0899BED8u) goto L_0899BED8;
    return;
L_0899BED8:
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[24];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(132)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[24] + ctx.fpr[12];
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[16] + ctx.fpr[12];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 3u, 0x0899C03Cu>(ctx, &aot_mem); return;
      }
      goto L_0899BEFC;
    }
L_0899BEFC:
    ctx.gpr[4] = (0u | 47u);
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0899BF88;
      }
      goto L_0899BF08;
    }
L_0899BF08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[5] = (ctx.gpr[4] - ctx.gpr[5]);
    { const std::uint32_t dividend = ctx.gpr[5]; const std::uint32_t divisor = ctx.gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(128)));
    ctx.gpr[4] = (ctx.lo);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    if (static_cast<std::int32_t>(ctx.gpr[4]) < 0) {
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[20];
        goto L_0899BF34;
    }
    goto L_0899BF34;
L_0899BF34:
    ctx.fpr[13] = ctx.fpr[22] - ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-7868)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[14] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(132)));
    ctx.gpr[4] = (ctx.lo);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    if (static_cast<std::int32_t>(ctx.gpr[4]) < 0) {
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[20];
        goto L_0899BF70;
    }
    goto L_0899BF70;
L_0899BF70:
    ctx.fpr[13] = ctx.fpr[22] - ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[14] + ctx.fpr[12];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 3u, 0x0899C03Cu>(ctx, &aot_mem); return;
      }
      goto L_0899BF88;
    }
L_0899BF88:
    ctx.gpr[4] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0899BFF0;
      }
      goto L_0899BF94;
    }
L_0899BF94:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(128)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[28]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(132)));
    ctx.fpr[12] = ctx.fpr[14] + ctx.fpr[15];
    { const bool branch_taken = ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0899BFC4;
      }
      goto L_0899BFBC;
    }
L_0899BFBC:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
      if (branch_taken) {
          goto L_0899BFC8;
      }
      goto L_0899BFC4;
    }
L_0899BFC4:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    goto L_0899BFC8;
L_0899BFC8:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[28]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0899BFE4;
      }
      goto L_0899BFDC;
    }
L_0899BFDC:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
      if (branch_taken) {
          goto L_0899BFE8;
      }
      goto L_0899BFE4;
    }
L_0899BFE4:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    goto L_0899BFE8;
L_0899BFE8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 3u, 0x0899C03Cu>(ctx, &aot_mem); return;
      }
      goto L_0899BFF0;
    }
L_0899BFF0:
    ctx.gpr[31] = (0x0899BFF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x0899BFF8u) goto L_0899BFF8;
    return;
L_0899BFF8:
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[24];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(128)));
    ctx.pc = 0x0899C000u; return;
}

void recomp_unit_0101(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0101_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_101(Runtime &runtime) {
    runtime.register_generated_unit(101u, 0x08998000u, 16384u, &recomp_unit_0101, &recomp_unit_0101_entry);
    runtime.register_function(0x08998000u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998014u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998030u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998050u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998084u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089980B0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089980CCu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998100u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899810Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899812Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998148u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899815Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998164u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899816Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998174u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899817Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998184u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899818Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998194u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899819Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089981A4u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089981ACu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089981B4u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089981BCu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089981CCu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089981D4u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089981ECu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998200u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899820Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899821Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998230u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899823Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899824Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998260u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899826Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899827Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998290u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899829Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089982ACu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089982C0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089982CCu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089982DCu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089982F0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089982FCu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899830Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998320u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899832Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899833Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998350u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899835Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899836Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998380u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899838Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899839Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089983B0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089983BCu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089983CCu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089983E0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089983ECu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089983FCu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998410u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899841Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899842Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998440u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899844Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899845Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998470u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899847Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899848Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089984A0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089984ACu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089984BCu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998554u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899858Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998594u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089985F0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998600u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998634u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998668u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998674u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998694u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089986A0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089986ACu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089986F4u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998700u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998708u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899870Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998764u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998774u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998780u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998794u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089987A4u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089987ACu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089987E4u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089987F0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089987FCu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899880Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998890u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998894u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089988B0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089988C8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089988F4u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899894Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998990u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998998u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089989A8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089989BCu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998A08u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998A10u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998A20u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998A30u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998A7Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998A84u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998A94u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998AA8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998AECu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998AF8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998B10u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998B4Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998B54u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998D14u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998D1Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998D38u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998D50u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998D78u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998DE0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998DF0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998DF8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998E00u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998E10u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998E1Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998E40u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998E58u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998E7Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998E88u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998EACu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998EC4u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998ED0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998EF4u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998F0Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998F18u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998F3Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998F54u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998F60u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998F84u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998F9Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998FA8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998FCCu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998FDCu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999008u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999014u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999038u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999050u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899905Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999080u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999098u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089990A4u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089990C8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089990E0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089990ECu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999110u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999128u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999134u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999158u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999178u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089991A0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089991C8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089991F0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999218u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999240u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999268u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999294u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089992BCu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089992E4u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899930Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999334u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899935Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999384u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089993ACu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089993D4u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089993FCu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999424u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899944Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999474u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899949Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089994C4u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089994ECu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999514u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899953Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999558u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999600u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999618u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999630u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999638u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999640u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899964Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999654u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899965Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999664u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999670u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999678u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999680u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999688u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999694u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089996A0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089996A8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089996B0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089996BCu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089996C4u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089996CCu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089996D4u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089996DCu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089996E8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089996F4u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089996FCu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999704u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899970Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999714u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899971Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999724u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899972Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999734u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899973Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999744u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899974Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999758u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999764u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999770u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999778u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999780u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999788u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999790u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999798u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089997A0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089997A8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089997B0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089997B8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089997C0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089997C8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089997D0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089997D8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089997E0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089997E8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089997F0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089997F8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999800u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999808u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999810u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999818u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999820u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999828u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999834u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899983Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999844u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899984Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999854u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899985Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999864u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899986Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999874u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899987Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999888u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999894u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899989Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089998A4u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089998ACu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089998BCu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089998C8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089998F8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999974u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999984u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089999B8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089999C0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089999C8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089999D0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999A20u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999A28u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999A44u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999A54u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999A64u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999A80u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999A98u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999AB0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999AC4u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999ACCu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999AD4u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999ADCu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999B08u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999B14u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999B2Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999B3Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999B48u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999B64u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999B78u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999C18u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999C20u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999C2Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999C30u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999C38u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999C40u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999C48u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999C4Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999C54u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999C5Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999C64u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999C68u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999C74u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999C7Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999C84u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999C8Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999C94u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999CA4u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999CB0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999CC4u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999CCCu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999D08u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999D44u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999D4Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999D78u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999D8Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999D94u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999DD0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999E0Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999E14u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999E40u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999E54u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999E64u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999E6Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999EA8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999EB4u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999EBCu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999EE8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999EF4u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999EFCu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999F38u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999F48u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999F54u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999F68u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999F74u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999F88u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999F94u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999FACu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999FB8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999FC8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999FD0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999FE0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999FECu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A000u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A00Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A020u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A02Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A044u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A050u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A060u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A064u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A074u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A084u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A090u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A098u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A0A8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A10Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A114u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A12Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A15Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A164u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A16Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A17Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A18Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A1A4u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A1B4u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A1C0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A1C8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A1D0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A1DCu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A1E4u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A1FCu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A204u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A24Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A260u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A27Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A284u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A2A4u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A2CCu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A2F8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A314u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A31Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A33Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A364u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A390u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A3A8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A3B8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A3BCu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A3D4u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A418u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A478u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A480u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A5D4u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A5E8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A5F8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A60Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A620u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A634u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A638u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A698u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A6C8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A6D8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A6DCu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A704u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A758u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A820u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A83Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A88Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A894u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A8A0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A8BCu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A8E8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A8FCu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A924u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A97Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A98Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A99Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A9ACu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A9BCu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A9CCu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A9DCu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A9ECu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A9F4u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899AA04u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899AA14u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899AA34u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899AA54u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899AA5Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899AA68u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899AA74u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899AA7Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899AA84u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899AAC8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899AAE0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899AAECu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899AAF4u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899AB00u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899AB18u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899AB34u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899AB40u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899AB50u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899AB5Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899ABE8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899ABF0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899ABFCu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899AC00u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899AC08u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899AC10u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899AC18u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899AC1Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899AC24u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899AC2Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899AC34u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899AC38u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899AC48u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899AC58u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899AC68u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899ACACu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899ACC0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899ACD4u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899ACE8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899ACF0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899AD00u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899AD18u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899AD58u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899AD70u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899AD80u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899AD90u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899AD9Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899ADACu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899ADBCu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899ADC0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899ADD8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899AE0Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899AE20u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899AE28u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899AE30u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899AE44u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899AE4Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899AE50u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899AE60u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899AE6Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899AE74u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899AE7Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899AE84u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899AEA8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899AEB0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899AEBCu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899AEE0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899AEE8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899AF00u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899AF24u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899AF48u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899AF6Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899AF90u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899AFA8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899AFCCu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899AFE8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899AFF8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B010u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B024u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B03Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B044u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B054u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B0B0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B0B8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B110u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B118u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B120u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B130u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B140u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B19Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B1A4u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B1FCu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B204u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B248u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B274u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B2BCu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B2C4u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B2DCu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B308u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B350u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B358u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B360u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B370u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B3A4u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B3ACu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B3C4u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B3DCu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B3E4u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B404u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B410u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B41Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B430u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B43Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B448u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B460u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B46Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B488u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B494u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B4A4u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B4BCu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B4CCu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B4D8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B4E0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B4E8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B4F0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B4F8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B518u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B52Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B558u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B5B0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B5BCu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B5C4u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B5F0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B654u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B660u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B668u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B670u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B688u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B6ACu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B6C8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B6D0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B6E0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B714u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B71Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B734u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B74Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B79Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B7A4u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B7B0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B7C4u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B7CCu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B7D8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B7DCu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B7E0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B7ECu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B800u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B808u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B814u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B818u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B828u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B830u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B83Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B850u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B874u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B884u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B890u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B8A0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B8ACu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B8B8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B8C8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B8D4u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B8DCu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B8ECu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B8F4u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B8FCu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B904u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B90Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B914u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B924u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B960u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B9B0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B9BCu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B9C8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B9D4u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B9E0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B9F4u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BA00u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BA0Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BA80u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BA9Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BAB4u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BAC8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BAD0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BAE0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BAECu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BAF8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BB00u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BB10u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BB1Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BB28u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BB30u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BB3Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BB48u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BB50u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BB58u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BB68u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BB70u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BB7Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BB80u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BB88u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BB94u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BB98u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BBCCu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BBD0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BBD8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BBE4u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BBECu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BC08u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BC10u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BC1Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BC20u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BC3Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BC4Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BC54u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BC60u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BC68u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BC70u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BC78u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BCACu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BCDCu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BCE4u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BD08u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BD24u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BD2Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BD38u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BD8Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BD94u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BDC4u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BDD0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BDD8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BDECu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BDF4u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BE00u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BE08u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BE10u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BE18u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BE20u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BE28u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BE30u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BE38u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BE40u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BE4Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BE54u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BE5Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BE88u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BEACu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BEB4u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BED8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BEFCu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BF08u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BF34u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BF70u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BF88u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BF94u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BFBCu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BFC4u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BFC8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BFDCu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BFE4u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BFE8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BFF0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BFF8u, &recomp_unit_0101, "recomp_unit_0101");
}
} // namespace psprecomp
