#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0161[4092] = {
    1, 0, 0, 0, 0, 0, 2, 0, 3, 0, 0, 4, 0, 0, 0, 0, 5, 0, 6, 0, 0, 0, 7, 0, 0, 0, 0, 8, 0, 0, 0, 0,
    0, 9, 0, 0, 0, 0, 10, 0, 0, 0, 0, 11, 0, 0, 0, 12, 0, 0, 13, 0, 0, 14, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0,
    0, 0, 16, 0, 17, 18, 0, 19, 20, 0, 0, 21, 0, 0, 0, 0, 22, 0, 23, 0, 0, 0, 24, 0, 0, 25, 0, 0, 26, 0, 0, 27,
    0, 28, 0, 0, 0, 29, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 32, 0,
    0, 0, 0, 33, 0, 34, 0, 35, 0, 36, 0, 37, 0, 0, 38, 0, 0, 39, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 43, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 46, 0, 47, 0, 0, 0, 0, 48, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 50, 0,
    0, 0, 51, 52, 0, 0, 0, 53, 0, 54, 0, 0, 55, 0, 56, 0, 0, 0, 0, 57, 0, 58, 0, 59, 0, 60, 0, 0, 0, 61, 62, 0,
    0, 0, 63, 0, 64, 0, 0, 0, 65, 0, 0, 0, 66, 0, 0, 0, 67, 0, 0, 0, 68, 0, 0, 69, 0, 0, 0, 70, 0, 0, 0, 0,
    71, 0, 0, 72, 0, 73, 0, 74, 0, 75, 0, 0, 0, 76, 0, 77, 0, 0, 0, 0, 78, 0, 0, 79, 0, 80, 0, 0, 81, 0, 82, 0,
    0, 0, 83, 0, 84, 0, 0, 0, 0, 85, 0, 86, 0, 0, 87, 0, 88, 0, 89, 0, 0, 90, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 94, 0, 0, 0, 0, 95, 0, 0, 96, 0, 0, 0, 0, 97, 0,
    0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 101, 0,
    0, 102, 103, 0, 104, 0, 0, 105, 106, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 109, 0, 110, 0, 0, 0, 111, 0, 0, 0, 0, 0, 112, 0,
    0, 0, 0, 0, 113, 0, 0, 0, 0, 114, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 119, 0, 120, 0, 0, 0, 0, 0, 121, 122, 0, 0, 123, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 125, 0, 126, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0,
    0, 0, 0, 0, 0, 129, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 134, 0, 135, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 137, 0, 138, 139, 0, 140, 0, 0, 0, 141,
    0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 146, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0,
    0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151,
    0, 0, 152, 153, 0, 154, 0, 0, 0, 0, 155, 0, 156, 0, 0, 0, 0, 0, 0, 0, 157, 0, 158, 0, 0, 0, 0, 0, 0, 0, 159, 0,
    160, 161, 0, 0, 0, 0, 162, 0, 163, 0, 0, 0, 164, 0, 0, 0, 0, 0, 165, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    172, 0, 0, 173, 0, 174, 0, 175, 0, 0, 176, 0, 0, 0, 0, 0, 177, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0,
    0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 183, 0, 0, 184, 0,
    0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 188, 0, 0, 189, 0, 0, 190, 0, 0, 191, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 196, 197, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 200, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 204, 0, 0, 0, 0, 0, 0, 0, 205,
    0, 0, 0, 0, 206, 0, 0, 207, 0, 208, 209, 0, 210, 211, 0, 0, 0, 0, 0, 0, 212, 0, 0, 213, 0, 0, 214, 215, 0, 0, 0, 0,
    0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 218, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0,
    221, 0, 0, 222, 0, 223, 0, 0, 0, 0, 224, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 230,
    0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 233, 0, 234, 0, 0, 0, 235, 0, 236, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 240, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 248,
    0, 249, 250, 0, 0, 0, 251, 0, 0, 0, 252, 0, 253, 0, 0, 0, 254, 255, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 257, 0, 258, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 263, 0, 0, 0, 0, 264, 0, 265, 0, 0, 0, 0, 266, 0, 0, 0, 0, 267, 268, 0,
    0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 270, 0, 0, 0, 271, 0, 272, 273, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0,
    0, 275, 0, 276, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 278, 0, 0, 0, 279, 0, 0, 280, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 283, 0, 284, 0, 285, 0, 286, 0, 287, 0, 0, 0, 288, 0, 289, 0, 0, 0, 0, 0, 290, 291, 0, 292, 0, 0, 0,
    293, 0, 294, 0, 0, 0, 0, 0, 295, 296, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 300, 0, 0, 301, 0, 0, 0, 0, 0, 302, 0, 0, 0, 303, 0, 0, 0, 0, 304, 0, 305, 0, 0, 0, 0, 306, 0, 307, 0, 0, 0,
    308, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    312, 0, 0, 0, 0, 313, 0, 0, 0, 0, 314, 0, 315, 0, 0, 0, 0, 316, 0, 317, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 319, 0,
    0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 323, 0, 324,
    0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 327, 0,
    328, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 330, 331, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 334,
    0, 0, 335, 0, 0, 0, 336, 0, 337, 0, 338, 339, 0, 340, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 342,
    0, 0, 0, 343, 0, 0, 0, 344, 0, 345, 0, 0, 346, 0, 0, 0, 347, 0, 348, 0, 349, 0, 0, 0, 0, 350, 0, 351, 0, 352, 0, 0,
    0, 353, 0, 354, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 357, 0, 0,
    358, 0, 0, 0, 359, 0, 360, 0, 0, 0, 361, 0, 362, 0, 0, 0, 0, 0, 363, 0, 0, 364, 0, 365, 0, 0, 0, 366, 0, 0, 367, 0,
    0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 369, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 372, 0, 0, 0,
    373, 0, 374, 375, 0, 0, 0, 376, 0, 0, 0, 0, 0, 377, 0, 0, 0, 378, 0, 0, 0, 379, 0, 380, 381, 0, 0, 0, 0, 0, 0, 382,
    0, 0, 0, 383, 0, 0, 0, 384, 0, 385, 0, 0, 0, 0, 386, 0, 0, 0, 0, 0, 387, 388, 0, 389, 0, 0, 0, 390, 0, 0, 0, 391,
    0, 392, 393, 0, 0, 0, 0, 0, 394, 0, 0, 0, 0, 395, 0, 0, 0, 396, 0, 0, 397, 0, 0, 0, 398, 0, 0, 399, 0, 0, 400, 0,
    0, 0, 0, 401, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 402, 0, 0, 403, 0, 404, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 405, 0, 0, 0, 0, 406, 0, 0, 0, 407, 0, 0, 0, 0, 0, 0, 408, 0, 0, 409, 0, 0, 410, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 411, 0, 0, 0, 412, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 413, 0, 0, 414, 0, 0, 0, 0, 415, 0, 416, 0, 0, 0, 0, 0, 0, 417, 0, 0, 0, 0,
    0, 0, 0, 418, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 419, 0,
    0, 0, 0, 0, 420, 0, 0, 0, 0, 0, 0, 0, 421, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 422, 0, 423, 0, 0, 0, 424, 0,
    0, 0, 0, 425, 426, 0, 0, 0, 0, 0, 0, 0, 0, 427, 0, 0, 0, 0, 428, 0, 0, 429, 0, 0, 0, 430, 431, 0, 0, 0, 0, 0,
    0, 432, 0, 0, 0, 0, 0, 0, 433, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 434, 0, 435, 0, 0, 0, 0,
    0, 436, 0, 437, 0, 0, 0, 438, 0, 0, 439, 0, 0, 0, 0, 440, 441, 0, 0, 0, 0, 0, 0, 0, 0, 442, 0, 0, 0, 0, 443, 0,
    0, 444, 0, 0, 0, 445, 0, 0, 0, 0, 0, 0, 0, 0, 0, 446, 0, 0, 0, 0, 0, 447, 0, 0, 448, 0, 0, 449, 0, 450, 451, 0,
    452, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 453, 0, 0, 0, 0, 0, 454, 0, 0, 455, 0, 0, 456,
    0, 457, 0, 0, 0, 0, 0, 458, 0, 459, 0, 0, 0, 0, 0, 460, 0, 0, 0, 461, 0, 0, 0, 0, 0, 462, 0, 0, 0, 0, 0, 463,
    0, 0, 464, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 465, 0, 0, 0, 0, 0, 0, 0, 466, 0, 0, 0, 0, 467, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 468, 0, 469, 0, 470, 0, 0, 0, 471, 0, 472, 0, 0, 0, 0, 473, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 474, 0, 0, 0, 0, 0, 0, 0, 0, 0, 475, 0, 0, 476, 0, 0, 0, 0, 0, 0, 0, 0, 0, 477, 0, 0, 478,
    0, 0, 0, 0, 0, 0, 0, 479, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 480, 0, 0, 481, 0, 0, 0, 0, 0, 0, 482, 0, 483, 0,
    0, 484, 0, 485, 0, 0, 486, 0, 0, 0, 487, 0, 0, 488, 0, 489, 0, 0, 490, 0, 0, 0, 0, 491, 0, 492, 0, 0, 0, 0, 0, 0,
    0, 0, 493, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 494, 0, 0, 0, 0,
    0, 495, 0, 0, 0, 0, 0, 496, 0, 0, 497, 0, 498, 0, 0, 0, 0, 0, 499, 500, 0, 0, 501, 0, 502, 0, 0, 0, 0, 0, 503, 0,
    0, 0, 0, 504, 0, 0, 0, 0, 0, 0, 505, 0, 506, 0, 0, 507, 0, 508, 0, 0, 509, 0, 0, 510, 0, 511, 0, 0, 0, 0, 512, 0,
    0, 513, 0, 0, 0, 514, 0, 0, 0, 0, 515, 0, 0, 0, 0, 0, 0, 0, 516, 0, 0, 0, 0, 0, 0, 517, 0, 0, 518, 519, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 520, 0, 0, 0, 0, 0, 0, 0, 521, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 522,
    0, 0, 0, 523, 0, 524, 0, 0, 0, 0, 525, 0, 526, 0, 0, 527, 528, 0, 0, 0, 0, 0, 0, 529, 0, 0, 0, 530, 0, 0, 531, 0,
    532, 0, 0, 0, 0, 0, 533, 0, 0, 534, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 535, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 536, 0, 537, 0, 0, 538, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 539, 0, 0, 0, 0, 0, 0, 0, 0, 540, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 541, 0, 0, 542, 0, 543, 0, 0, 0, 0, 544, 0, 545, 0, 546,
    547, 0, 0, 0, 0, 0, 0, 548, 0, 0, 0, 0, 0, 0, 0, 0, 0, 549, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 550, 0, 551, 0,
    0, 552, 0, 0, 0, 0, 553, 0, 0, 554, 555, 0, 556, 0, 557, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 558, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 559, 0, 0, 0, 0, 0, 0, 0, 0, 560, 0, 0, 0, 0, 0, 0, 561, 0, 0, 562, 0, 0,
    563, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 564, 0, 0, 0, 0, 0, 565, 0, 0, 566, 0, 0, 0, 0, 567, 0, 0, 0,
    0, 568, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 569, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 570, 0, 0, 0, 571, 0, 0, 0, 0, 0, 0, 0, 0, 572, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 573, 0, 0,
    0, 574, 0, 0, 0, 575, 0, 0, 576, 0, 0, 577, 0, 578, 0, 0, 0, 579, 0, 0, 0, 580, 0, 0, 0, 581, 0, 0, 0, 0, 0, 0,
    0, 0, 582, 0, 0, 0, 0, 0, 0, 583, 0, 0, 0, 0, 0, 0, 0, 0, 584, 0, 0, 0, 0, 585, 0, 0, 0, 0, 0, 586, 0, 0,
    0, 0, 587, 0, 0, 0, 0, 0, 0, 0, 0, 588, 0, 0, 0, 0, 0, 0, 0, 589, 0, 0, 0, 0, 0, 0, 590, 0, 0, 0, 591, 0,
    0, 592, 0, 0, 593, 0, 594, 0, 0, 0, 0, 0, 0, 0, 595, 0, 0, 0, 596, 0, 597, 0, 0, 0, 0, 0, 0, 0, 598, 0, 599, 0,
    0, 0, 600, 0, 601, 0, 0, 0, 0, 0, 0, 0, 602, 0, 603, 0, 0, 0, 0, 604, 0, 605, 0, 0, 0, 0, 0, 606, 0, 607, 0, 0,
    608, 0, 0, 609, 0, 0, 0, 0, 610, 611, 0, 0, 612, 0, 0, 0, 613, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 614, 0, 0, 615, 616, 0, 0, 0, 0, 617, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    618, 0, 0, 619, 0, 0, 0, 620, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 621, 0, 0, 622, 623, 0, 0, 0, 0, 624, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 625, 0, 0, 0, 626, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 627, 0, 0, 628, 629, 0, 0, 0, 0, 630, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 631, 0, 0, 0, 0, 0, 632, 0, 0, 0, 0, 0, 0, 0, 0, 633, 0, 0,
    634, 0, 635, 0, 0, 0, 0, 0, 0, 0, 636, 0, 0, 0, 0, 0, 0, 637, 0, 638, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 639,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 640, 0, 0, 0, 0, 0, 641, 0, 0, 642, 0, 643, 0, 644, 0, 645, 0, 0, 646, 0, 0, 647,
    648, 0, 0, 0, 649, 0, 0, 0, 0, 0, 0, 650, 0, 0, 651, 0, 652, 0, 653, 0, 654, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 655, 0, 0, 656, 657, 0, 0, 0,
    0, 658, 0, 0, 0, 0, 0, 0, 0, 659, 0, 0, 660, 0, 0, 661, 0, 662, 0, 663, 0, 0, 664, 0, 0, 0, 0, 665,
};
void recomp_unit_0161_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08A88000u;
        entry_id = (entry_delta < 16368u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0161[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A88000;
    case 2u: goto L_08A88018;
    case 3u: goto L_08A88020;
    case 4u: goto L_08A8802C;
    case 5u: goto L_08A88040;
    case 6u: goto L_08A88048;
    case 7u: goto L_08A88058;
    case 8u: goto L_08A8806C;
    case 9u: goto L_08A88084;
    case 10u: goto L_08A88098;
    case 11u: goto L_08A880AC;
    case 12u: goto L_08A880BC;
    case 13u: goto L_08A880C8;
    case 14u: goto L_08A880D4;
    case 15u: goto L_08A880F0;
    case 16u: goto L_08A88108;
    case 17u: goto L_08A88110;
    case 18u: goto L_08A88114;
    case 19u: goto L_08A8811C;
    case 20u: goto L_08A88120;
    case 21u: goto L_08A8812C;
    case 22u: goto L_08A88140;
    case 23u: goto L_08A88148;
    case 24u: goto L_08A88158;
    case 25u: goto L_08A88164;
    case 26u: goto L_08A88170;
    case 27u: goto L_08A8817C;
    case 28u: goto L_08A88184;
    case 29u: goto L_08A88194;
    case 30u: goto L_08A881AC;
    case 31u: goto L_08A881EC;
    case 32u: goto L_08A881F8;
    case 33u: goto L_08A8820C;
    case 34u: goto L_08A88214;
    case 35u: goto L_08A8821C;
    case 36u: goto L_08A88224;
    case 37u: goto L_08A8822C;
    case 38u: goto L_08A88238;
    case 39u: goto L_08A88244;
    case 40u: goto L_08A88250;
    case 41u: goto L_08A88270;
    case 42u: goto L_08A882AC;
    case 43u: goto L_08A882B4;
    case 44u: goto L_08A882C8;
    case 45u: goto L_08A88348;
    case 46u: goto L_08A88354;
    case 47u: goto L_08A8835C;
    case 48u: goto L_08A88370;
    case 49u: goto L_08A883F0;
    case 50u: goto L_08A883F8;
    case 51u: goto L_08A88408;
    case 52u: goto L_08A8840C;
    case 53u: goto L_08A8841C;
    case 54u: goto L_08A88424;
    case 55u: goto L_08A88430;
    case 56u: goto L_08A88438;
    case 57u: goto L_08A8844C;
    case 58u: goto L_08A88454;
    case 59u: goto L_08A8845C;
    case 60u: goto L_08A88464;
    case 61u: goto L_08A88474;
    case 62u: goto L_08A88478;
    case 63u: goto L_08A88488;
    case 64u: goto L_08A88490;
    case 65u: goto L_08A884A0;
    case 66u: goto L_08A884B0;
    case 67u: goto L_08A884C0;
    case 68u: goto L_08A884D0;
    case 69u: goto L_08A884DC;
    case 70u: goto L_08A884EC;
    case 71u: goto L_08A88500;
    case 72u: goto L_08A8850C;
    case 73u: goto L_08A88514;
    case 74u: goto L_08A8851C;
    case 75u: goto L_08A88524;
    case 76u: goto L_08A88534;
    case 77u: goto L_08A8853C;
    case 78u: goto L_08A88550;
    case 79u: goto L_08A8855C;
    case 80u: goto L_08A88564;
    case 81u: goto L_08A88570;
    case 82u: goto L_08A88578;
    case 83u: goto L_08A88588;
    case 84u: goto L_08A88590;
    case 85u: goto L_08A885A4;
    case 86u: goto L_08A885AC;
    case 87u: goto L_08A885B8;
    case 88u: goto L_08A885C0;
    case 89u: goto L_08A885C8;
    case 90u: goto L_08A885D4;
    case 91u: goto L_08A885D8;
    case 92u: goto L_08A88608;
    case 93u: goto L_08A88630;
    case 94u: goto L_08A88644;
    case 95u: goto L_08A88658;
    case 96u: goto L_08A88664;
    case 97u: goto L_08A88678;
    case 98u: goto L_08A88694;
    case 99u: goto L_08A886AC;
    case 100u: goto L_08A886DC;
    case 101u: goto L_08A886F8;
    case 102u: goto L_08A88704;
    case 103u: goto L_08A88708;
    case 104u: goto L_08A88710;
    case 105u: goto L_08A8871C;
    case 106u: goto L_08A88720;
    case 107u: goto L_08A88738;
    case 108u: goto L_08A887BC;
    case 109u: goto L_08A887C8;
    case 110u: goto L_08A887D0;
    case 111u: goto L_08A887E0;
    case 112u: goto L_08A887F8;
    case 113u: goto L_08A88810;
    case 114u: goto L_08A88824;
    case 115u: goto L_08A8882C;
    case 116u: goto L_08A88850;
    case 117u: goto L_08A88864;
    case 118u: goto L_08A888B4;
    case 119u: goto L_08A888C8;
    case 120u: goto L_08A888D0;
    case 121u: goto L_08A888E8;
    case 122u: goto L_08A888EC;
    case 123u: goto L_08A888F8;
    case 124u: goto L_08A88930;
    case 125u: goto L_08A88938;
    case 126u: goto L_08A88940;
    case 127u: goto L_08A88948;
    case 128u: goto L_08A88978;
    case 129u: goto L_08A88994;
    case 130u: goto L_08A8899C;
    case 131u: goto L_08A889C0;
    case 132u: goto L_08A889E8;
    case 133u: goto L_08A88A54;
    case 134u: goto L_08A88A68;
    case 135u: goto L_08A88A70;
    case 136u: goto L_08A88ACC;
    case 137u: goto L_08A88AD8;
    case 138u: goto L_08A88AE0;
    case 139u: goto L_08A88AE4;
    case 140u: goto L_08A88AEC;
    case 141u: goto L_08A88AFC;
    case 142u: goto L_08A88B0C;
    case 143u: goto L_08A88B4C;
    case 144u: goto L_08A88B68;
    case 145u: goto L_08A88BAC;
    case 146u: goto L_08A88BB8;
    case 147u: goto L_08A88BC4;
    case 148u: goto L_08A88BF8;
    case 149u: goto L_08A88C14;
    case 150u: goto L_08A88C28;
    case 151u: goto L_08A88CFC;
    case 152u: goto L_08A88D08;
    case 153u: goto L_08A88D0C;
    case 154u: goto L_08A88D14;
    case 155u: goto L_08A88D28;
    case 156u: goto L_08A88D30;
    case 157u: goto L_08A88D50;
    case 158u: goto L_08A88D58;
    case 159u: goto L_08A88D78;
    case 160u: goto L_08A88D80;
    case 161u: goto L_08A88D84;
    case 162u: goto L_08A88D98;
    case 163u: goto L_08A88DA0;
    case 164u: goto L_08A88DB0;
    case 165u: goto L_08A88DC8;
    case 166u: goto L_08A88DD4;
    case 167u: goto L_08A88DF4;
    case 168u: goto L_08A88E34;
    case 169u: goto L_08A88E4C;
    case 170u: goto L_08A88E6C;
    case 171u: goto L_08A88EBC;
    case 172u: goto L_08A88F00;
    case 173u: goto L_08A88F0C;
    case 174u: goto L_08A88F14;
    case 175u: goto L_08A88F1C;
    case 176u: goto L_08A88F28;
    case 177u: goto L_08A88F40;
    case 178u: goto L_08A88F4C;
    case 179u: goto L_08A88F70;
    case 180u: goto L_08A88F90;
    case 181u: goto L_08A88FAC;
    case 182u: goto L_08A88FE0;
    case 183u: goto L_08A88FEC;
    case 184u: goto L_08A88FF8;
    case 185u: goto L_08A89010;
    case 186u: goto L_08A89054;
    case 187u: goto L_08A890A8;
    case 188u: goto L_08A890C4;
    case 189u: goto L_08A890D0;
    case 190u: goto L_08A890DC;
    case 191u: goto L_08A890E8;
    case 192u: goto L_08A891D4;
    case 193u: goto L_08A891DC;
    case 194u: goto L_08A89230;
    case 195u: goto L_08A89240;
    case 196u: goto L_08A8925C;
    case 197u: goto L_08A89260;
    case 198u: goto L_08A892B4;
    case 199u: goto L_08A892DC;
    case 200u: goto L_08A892F8;
    case 201u: goto L_08A89320;
    case 202u: goto L_08A89328;
    case 203u: goto L_08A89354;
    case 204u: goto L_08A8935C;
    case 205u: goto L_08A8937C;
    case 206u: goto L_08A89390;
    case 207u: goto L_08A8939C;
    case 208u: goto L_08A893A4;
    case 209u: goto L_08A893A8;
    case 210u: goto L_08A893B0;
    case 211u: goto L_08A893B4;
    case 212u: goto L_08A893D0;
    case 213u: goto L_08A893DC;
    case 214u: goto L_08A893E8;
    case 215u: goto L_08A893EC;
    case 216u: goto L_08A89408;
    case 217u: goto L_08A8942C;
    case 218u: goto L_08A8943C;
    case 219u: goto L_08A8944C;
    case 220u: goto L_08A89474;
    case 221u: goto L_08A89480;
    case 222u: goto L_08A8948C;
    case 223u: goto L_08A89494;
    case 224u: goto L_08A894A8;
    case 225u: goto L_08A894B0;
    case 226u: goto L_08A89564;
    case 227u: goto L_08A89614;
    case 228u: goto L_08A897B4;
    case 229u: goto L_08A897EC;
    case 230u: goto L_08A897FC;
    case 231u: goto L_08A89818;
    case 232u: goto L_08A89850;
    case 233u: goto L_08A89890;
    case 234u: goto L_08A89898;
    case 235u: goto L_08A898A8;
    case 236u: goto L_08A898B0;
    case 237u: goto L_08A898B4;
    case 238u: goto L_08A898F0;
    case 239u: goto L_08A8992C;
    case 240u: goto L_08A89938;
    case 241u: goto L_08A89944;
    case 242u: goto L_08A8998C;
    case 243u: goto L_08A899F0;
    case 244u: goto L_08A89A24;
    case 245u: goto L_08A89A34;
    case 246u: goto L_08A89A50;
    case 247u: goto L_08A89A60;
    case 248u: goto L_08A89A7C;
    case 249u: goto L_08A89A84;
    case 250u: goto L_08A89A88;
    case 251u: goto L_08A89A98;
    case 252u: goto L_08A89AA8;
    case 253u: goto L_08A89AB0;
    case 254u: goto L_08A89AC0;
    case 255u: goto L_08A89AC4;
    case 256u: goto L_08A89AE0;
    case 257u: goto L_08A89B08;
    case 258u: goto L_08A89B10;
    case 259u: goto L_08A89B14;
    case 260u: goto L_08A89B64;
    case 261u: goto L_08A89BEC;
    case 262u: goto L_08A89C1C;
    case 263u: goto L_08A89C30;
    case 264u: goto L_08A89C44;
    case 265u: goto L_08A89C4C;
    case 266u: goto L_08A89C60;
    case 267u: goto L_08A89C74;
    case 268u: goto L_08A89C78;
    case 269u: goto L_08A89C9C;
    case 270u: goto L_08A89CB0;
    case 271u: goto L_08A89CC0;
    case 272u: goto L_08A89CC8;
    case 273u: goto L_08A89CCC;
    case 274u: goto L_08A89CE8;
    case 275u: goto L_08A89D04;
    case 276u: goto L_08A89D0C;
    case 277u: goto L_08A89D14;
    case 278u: goto L_08A89D8C;
    case 279u: goto L_08A89D9C;
    case 280u: goto L_08A89DA8;
    case 281u: goto L_08A89DB8;
    case 282u: goto L_08A89E00;
    case 283u: goto L_08A89E94;
    case 284u: goto L_08A89E9C;
    case 285u: goto L_08A89EA4;
    case 286u: goto L_08A89EAC;
    case 287u: goto L_08A89EB4;
    case 288u: goto L_08A89EC4;
    case 289u: goto L_08A89ECC;
    case 290u: goto L_08A89EE4;
    case 291u: goto L_08A89EE8;
    case 292u: goto L_08A89EF0;
    case 293u: goto L_08A89F00;
    case 294u: goto L_08A89F08;
    case 295u: goto L_08A89F20;
    case 296u: goto L_08A89F24;
    case 297u: goto L_08A89F2C;
    case 298u: goto L_08A89FA4;
    case 299u: goto L_08A89FD0;
    case 300u: goto L_08A8A004;
    case 301u: goto L_08A8A010;
    case 302u: goto L_08A8A028;
    case 303u: goto L_08A8A038;
    case 304u: goto L_08A8A04C;
    case 305u: goto L_08A8A054;
    case 306u: goto L_08A8A068;
    case 307u: goto L_08A8A070;
    case 308u: goto L_08A8A080;
    case 309u: goto L_08A8A098;
    case 310u: goto L_08A8A0CC;
    case 311u: goto L_08A8A0D8;
    case 312u: goto L_08A8A100;
    case 313u: goto L_08A8A114;
    case 314u: goto L_08A8A128;
    case 315u: goto L_08A8A130;
    case 316u: goto L_08A8A144;
    case 317u: goto L_08A8A14C;
    case 318u: goto L_08A8A158;
    case 319u: goto L_08A8A178;
    case 320u: goto L_08A8A19C;
    case 321u: goto L_08A8A1B8;
    case 322u: goto L_08A8A1DC;
    case 323u: goto L_08A8A1F4;
    case 324u: goto L_08A8A1FC;
    case 325u: goto L_08A8A210;
    case 326u: goto L_08A8A26C;
    case 327u: goto L_08A8A278;
    case 328u: goto L_08A8A280;
    case 329u: goto L_08A8A2A4;
    case 330u: goto L_08A8A2B8;
    case 331u: goto L_08A8A2BC;
    case 332u: goto L_08A8A2CC;
    case 333u: goto L_08A8A2F0;
    case 334u: goto L_08A8A2FC;
    case 335u: goto L_08A8A308;
    case 336u: goto L_08A8A318;
    case 337u: goto L_08A8A320;
    case 338u: goto L_08A8A328;
    case 339u: goto L_08A8A32C;
    case 340u: goto L_08A8A334;
    case 341u: goto L_08A8A340;
    case 342u: goto L_08A8A37C;
    case 343u: goto L_08A8A38C;
    case 344u: goto L_08A8A39C;
    case 345u: goto L_08A8A3A4;
    case 346u: goto L_08A8A3B0;
    case 347u: goto L_08A8A3C0;
    case 348u: goto L_08A8A3C8;
    case 349u: goto L_08A8A3D0;
    case 350u: goto L_08A8A3E4;
    case 351u: goto L_08A8A3EC;
    case 352u: goto L_08A8A3F4;
    case 353u: goto L_08A8A404;
    case 354u: goto L_08A8A40C;
    case 355u: goto L_08A8A428;
    case 356u: goto L_08A8A468;
    case 357u: goto L_08A8A474;
    case 358u: goto L_08A8A480;
    case 359u: goto L_08A8A490;
    case 360u: goto L_08A8A498;
    case 361u: goto L_08A8A4A8;
    case 362u: goto L_08A8A4B0;
    case 363u: goto L_08A8A4C8;
    case 364u: goto L_08A8A4D4;
    case 365u: goto L_08A8A4DC;
    case 366u: goto L_08A8A4EC;
    case 367u: goto L_08A8A4F8;
    case 368u: goto L_08A8A514;
    case 369u: goto L_08A8A52C;
    case 370u: goto L_08A8A538;
    case 371u: goto L_08A8A560;
    case 372u: goto L_08A8A570;
    case 373u: goto L_08A8A580;
    case 374u: goto L_08A8A588;
    case 375u: goto L_08A8A58C;
    case 376u: goto L_08A8A59C;
    case 377u: goto L_08A8A5B4;
    case 378u: goto L_08A8A5C4;
    case 379u: goto L_08A8A5D4;
    case 380u: goto L_08A8A5DC;
    case 381u: goto L_08A8A5E0;
    case 382u: goto L_08A8A5FC;
    case 383u: goto L_08A8A60C;
    case 384u: goto L_08A8A61C;
    case 385u: goto L_08A8A624;
    case 386u: goto L_08A8A638;
    case 387u: goto L_08A8A650;
    case 388u: goto L_08A8A654;
    case 389u: goto L_08A8A65C;
    case 390u: goto L_08A8A66C;
    case 391u: goto L_08A8A67C;
    case 392u: goto L_08A8A684;
    case 393u: goto L_08A8A688;
    case 394u: goto L_08A8A6A0;
    case 395u: goto L_08A8A6B4;
    case 396u: goto L_08A8A6C4;
    case 397u: goto L_08A8A6D0;
    case 398u: goto L_08A8A6E0;
    case 399u: goto L_08A8A6EC;
    case 400u: goto L_08A8A6F8;
    case 401u: goto L_08A8A70C;
    case 402u: goto L_08A8A748;
    case 403u: goto L_08A8A754;
    case 404u: goto L_08A8A75C;
    case 405u: goto L_08A8A790;
    case 406u: goto L_08A8A7A4;
    case 407u: goto L_08A8A7B4;
    case 408u: goto L_08A8A7D0;
    case 409u: goto L_08A8A7DC;
    case 410u: goto L_08A8A7E8;
    case 411u: goto L_08A8A828;
    case 412u: goto L_08A8A838;
    case 413u: goto L_08A8A8A8;
    case 414u: goto L_08A8A8B4;
    case 415u: goto L_08A8A8C8;
    case 416u: goto L_08A8A8D0;
    case 417u: goto L_08A8A8EC;
    case 418u: goto L_08A8A90C;
    case 419u: goto L_08A8A978;
    case 420u: goto L_08A8A990;
    case 421u: goto L_08A8A9B0;
    case 422u: goto L_08A8A9E0;
    case 423u: goto L_08A8A9E8;
    case 424u: goto L_08A8A9F8;
    case 425u: goto L_08A8AA0C;
    case 426u: goto L_08A8AA10;
    case 427u: goto L_08A8AA34;
    case 428u: goto L_08A8AA48;
    case 429u: goto L_08A8AA54;
    case 430u: goto L_08A8AA64;
    case 431u: goto L_08A8AA68;
    case 432u: goto L_08A8AA84;
    case 433u: goto L_08A8AAA0;
    case 434u: goto L_08A8AAE4;
    case 435u: goto L_08A8AAEC;
    case 436u: goto L_08A8AB04;
    case 437u: goto L_08A8AB0C;
    case 438u: goto L_08A8AB1C;
    case 439u: goto L_08A8AB28;
    case 440u: goto L_08A8AB3C;
    case 441u: goto L_08A8AB40;
    case 442u: goto L_08A8AB64;
    case 443u: goto L_08A8AB78;
    case 444u: goto L_08A8AB84;
    case 445u: goto L_08A8AB94;
    case 446u: goto L_08A8ABBC;
    case 447u: goto L_08A8ABD4;
    case 448u: goto L_08A8ABE0;
    case 449u: goto L_08A8ABEC;
    case 450u: goto L_08A8ABF4;
    case 451u: goto L_08A8ABF8;
    case 452u: goto L_08A8AC00;
    case 453u: goto L_08A8AC4C;
    case 454u: goto L_08A8AC64;
    case 455u: goto L_08A8AC70;
    case 456u: goto L_08A8AC7C;
    case 457u: goto L_08A8AC84;
    case 458u: goto L_08A8AC9C;
    case 459u: goto L_08A8ACA4;
    case 460u: goto L_08A8ACBC;
    case 461u: goto L_08A8ACCC;
    case 462u: goto L_08A8ACE4;
    case 463u: goto L_08A8ACFC;
    case 464u: goto L_08A8AD08;
    case 465u: goto L_08A8AD40;
    case 466u: goto L_08A8AD60;
    case 467u: goto L_08A8AD74;
    case 468u: goto L_08A8ADA8;
    case 469u: goto L_08A8ADB0;
    case 470u: goto L_08A8ADB8;
    case 471u: goto L_08A8ADC8;
    case 472u: goto L_08A8ADD0;
    case 473u: goto L_08A8ADE4;
    case 474u: goto L_08A8AE14;
    case 475u: goto L_08A8AE3C;
    case 476u: goto L_08A8AE48;
    case 477u: goto L_08A8AE70;
    case 478u: goto L_08A8AE7C;
    case 479u: goto L_08A8AE9C;
    case 480u: goto L_08A8AEC8;
    case 481u: goto L_08A8AED4;
    case 482u: goto L_08A8AEF0;
    case 483u: goto L_08A8AEF8;
    case 484u: goto L_08A8AF04;
    case 485u: goto L_08A8AF0C;
    case 486u: goto L_08A8AF18;
    case 487u: goto L_08A8AF28;
    case 488u: goto L_08A8AF34;
    case 489u: goto L_08A8AF3C;
    case 490u: goto L_08A8AF48;
    case 491u: goto L_08A8AF5C;
    case 492u: goto L_08A8AF64;
    case 493u: goto L_08A8AF88;
    case 494u: goto L_08A8AFEC;
    case 495u: goto L_08A8B004;
    case 496u: goto L_08A8B01C;
    case 497u: goto L_08A8B028;
    case 498u: goto L_08A8B030;
    case 499u: goto L_08A8B048;
    case 500u: goto L_08A8B04C;
    case 501u: goto L_08A8B058;
    case 502u: goto L_08A8B060;
    case 503u: goto L_08A8B078;
    case 504u: goto L_08A8B08C;
    case 505u: goto L_08A8B0A8;
    case 506u: goto L_08A8B0B0;
    case 507u: goto L_08A8B0BC;
    case 508u: goto L_08A8B0C4;
    case 509u: goto L_08A8B0D0;
    case 510u: goto L_08A8B0DC;
    case 511u: goto L_08A8B0E4;
    case 512u: goto L_08A8B0F8;
    case 513u: goto L_08A8B104;
    case 514u: goto L_08A8B114;
    case 515u: goto L_08A8B128;
    case 516u: goto L_08A8B148;
    case 517u: goto L_08A8B164;
    case 518u: goto L_08A8B170;
    case 519u: goto L_08A8B174;
    case 520u: goto L_08A8B1A4;
    case 521u: goto L_08A8B1C4;
    case 522u: goto L_08A8B1FC;
    case 523u: goto L_08A8B20C;
    case 524u: goto L_08A8B214;
    case 525u: goto L_08A8B228;
    case 526u: goto L_08A8B230;
    case 527u: goto L_08A8B23C;
    case 528u: goto L_08A8B240;
    case 529u: goto L_08A8B25C;
    case 530u: goto L_08A8B26C;
    case 531u: goto L_08A8B278;
    case 532u: goto L_08A8B280;
    case 533u: goto L_08A8B298;
    case 534u: goto L_08A8B2A4;
    case 535u: goto L_08A8B2D0;
    case 536u: goto L_08A8B30C;
    case 537u: goto L_08A8B314;
    case 538u: goto L_08A8B320;
    case 539u: goto L_08A8B34C;
    case 540u: goto L_08A8B370;
    case 541u: goto L_08A8B3C4;
    case 542u: goto L_08A8B3D0;
    case 543u: goto L_08A8B3D8;
    case 544u: goto L_08A8B3EC;
    case 545u: goto L_08A8B3F4;
    case 546u: goto L_08A8B3FC;
    case 547u: goto L_08A8B400;
    case 548u: goto L_08A8B41C;
    case 549u: goto L_08A8B444;
    case 550u: goto L_08A8B470;
    case 551u: goto L_08A8B478;
    case 552u: goto L_08A8B484;
    case 553u: goto L_08A8B498;
    case 554u: goto L_08A8B4A4;
    case 555u: goto L_08A8B4A8;
    case 556u: goto L_08A8B4B0;
    case 557u: goto L_08A8B4B8;
    case 558u: goto L_08A8B4E8;
    case 559u: goto L_08A8B528;
    case 560u: goto L_08A8B54C;
    case 561u: goto L_08A8B568;
    case 562u: goto L_08A8B574;
    case 563u: goto L_08A8B580;
    case 564u: goto L_08A8B5B8;
    case 565u: goto L_08A8B5D0;
    case 566u: goto L_08A8B5DC;
    case 567u: goto L_08A8B5F0;
    case 568u: goto L_08A8B604;
    case 569u: goto L_08A8B630;
    case 570u: goto L_08A8B690;
    case 571u: goto L_08A8B6A0;
    case 572u: goto L_08A8B6C4;
    case 573u: goto L_08A8B6F4;
    case 574u: goto L_08A8B704;
    case 575u: goto L_08A8B714;
    case 576u: goto L_08A8B720;
    case 577u: goto L_08A8B72C;
    case 578u: goto L_08A8B734;
    case 579u: goto L_08A8B744;
    case 580u: goto L_08A8B754;
    case 581u: goto L_08A8B764;
    case 582u: goto L_08A8B788;
    case 583u: goto L_08A8B7A4;
    case 584u: goto L_08A8B7C8;
    case 585u: goto L_08A8B7DC;
    case 586u: goto L_08A8B7F4;
    case 587u: goto L_08A8B808;
    case 588u: goto L_08A8B82C;
    case 589u: goto L_08A8B84C;
    case 590u: goto L_08A8B868;
    case 591u: goto L_08A8B878;
    case 592u: goto L_08A8B884;
    case 593u: goto L_08A8B890;
    case 594u: goto L_08A8B898;
    case 595u: goto L_08A8B8B8;
    case 596u: goto L_08A8B8C8;
    case 597u: goto L_08A8B8D0;
    case 598u: goto L_08A8B8F0;
    case 599u: goto L_08A8B8F8;
    case 600u: goto L_08A8B908;
    case 601u: goto L_08A8B910;
    case 602u: goto L_08A8B930;
    case 603u: goto L_08A8B938;
    case 604u: goto L_08A8B94C;
    case 605u: goto L_08A8B954;
    case 606u: goto L_08A8B96C;
    case 607u: goto L_08A8B974;
    case 608u: goto L_08A8B980;
    case 609u: goto L_08A8B98C;
    case 610u: goto L_08A8B9A0;
    case 611u: goto L_08A8B9A4;
    case 612u: goto L_08A8B9B0;
    case 613u: goto L_08A8B9C0;
    case 614u: goto L_08A8BA2C;
    case 615u: goto L_08A8BA38;
    case 616u: goto L_08A8BA3C;
    case 617u: goto L_08A8BA50;
    case 618u: goto L_08A8BB00;
    case 619u: goto L_08A8BB0C;
    case 620u: goto L_08A8BB1C;
    case 621u: goto L_08A8BB88;
    case 622u: goto L_08A8BB94;
    case 623u: goto L_08A8BB98;
    case 624u: goto L_08A8BBAC;
    case 625u: goto L_08A8BC5C;
    case 626u: goto L_08A8BC6C;
    case 627u: goto L_08A8BCD4;
    case 628u: goto L_08A8BCE0;
    case 629u: goto L_08A8BCE4;
    case 630u: goto L_08A8BCF8;
    case 631u: goto L_08A8BD38;
    case 632u: goto L_08A8BD50;
    case 633u: goto L_08A8BD74;
    case 634u: goto L_08A8BD80;
    case 635u: goto L_08A8BD88;
    case 636u: goto L_08A8BDA8;
    case 637u: goto L_08A8BDC4;
    case 638u: goto L_08A8BDCC;
    case 639u: goto L_08A8BDFC;
    case 640u: goto L_08A8BE28;
    case 641u: goto L_08A8BE40;
    case 642u: goto L_08A8BE4C;
    case 643u: goto L_08A8BE54;
    case 644u: goto L_08A8BE5C;
    case 645u: goto L_08A8BE64;
    case 646u: goto L_08A8BE70;
    case 647u: goto L_08A8BE7C;
    case 648u: goto L_08A8BE80;
    case 649u: goto L_08A8BE90;
    case 650u: goto L_08A8BEAC;
    case 651u: goto L_08A8BEB8;
    case 652u: goto L_08A8BEC0;
    case 653u: goto L_08A8BEC8;
    case 654u: goto L_08A8BED0;
    case 655u: goto L_08A8BF60;
    case 656u: goto L_08A8BF6C;
    case 657u: goto L_08A8BF70;
    case 658u: goto L_08A8BF84;
    case 659u: goto L_08A8BFA4;
    case 660u: goto L_08A8BFB0;
    case 661u: goto L_08A8BFBC;
    case 662u: goto L_08A8BFC4;
    case 663u: goto L_08A8BFCC;
    case 664u: goto L_08A8BFD8;
    case 665u: goto L_08A8BFEC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A88000:
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A88018u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 574u, 0x0890B630u>(ctx, &aot_mem) && ctx.pc == 0x08A88018u) goto L_08A88018;
    return;
L_08A88018:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) > 0;
    // nop
      if (branch_taken) {
          goto L_08A88048;
      }
      goto L_08A88020;
    }
L_08A88020:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A8802Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 553u, 0x0890B3FCu>(ctx, &aot_mem) && ctx.pc == 0x08A8802Cu) goto L_08A8802C;
    return;
L_08A8802C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A88040u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 147u, 0x08A00A34u>(ctx, &aot_mem) && ctx.pc == 0x08A88040u) goto L_08A88040;
    return;
L_08A88040:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A880AC;
      }
      goto L_08A88048;
    }
L_08A88048:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[31] = (0x08A88058u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 423u, 0x08A4B554u>(ctx, &aot_mem) && ctx.pc == 0x08A88058u) goto L_08A88058;
    return;
L_08A88058:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A8806Cu);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 446u, 0x08A4B6CCu>(ctx, &aot_mem) && ctx.pc == 0x08A8806Cu) goto L_08A8806C;
    return;
L_08A8806C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 6u);
    ctx.gpr[31] = (0x08A88084u);
    ctx.gpr[18] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 415u, 0x08A4B4B0u>(ctx, &aot_mem) && ctx.pc == 0x08A88084u) goto L_08A88084;
    return;
L_08A88084:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (2216u << 16u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A88098u);
    ctx.gpr[17] = (ctx.gpr[6] + static_cast<std::uint32_t>(32320));
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 805u, 0x08A87F0Cu>(ctx, &aot_mem) && ctx.pc == 0x08A88098u) goto L_08A88098;
    return;
L_08A88098:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A880ACu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 147u, 0x08A00A34u>(ctx, &aot_mem) && ctx.pc == 0x08A880ACu) goto L_08A880AC;
    return;
L_08A880AC:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A880BCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(23744));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 702u, 0x0890BE64u>(ctx, &aot_mem) && ctx.pc == 0x08A880BCu) goto L_08A880BC;
    return;
L_08A880BC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A880C8u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 572u, 0x0890B5D4u>(ctx, &aot_mem) && ctx.pc == 0x08A880C8u) goto L_08A880C8;
    return;
L_08A880C8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A880D4u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-10000));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 23u, 0x0890C1BCu>(ctx, &aot_mem) && ctx.pc == 0x08A880D4u) goto L_08A880D4;
    return;
L_08A880D4:
    ctx.gpr[2] = (0u | 0u);
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
L_08A880F0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A88108u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 152u, 0x08A00A70u>(ctx, &aot_mem) && ctx.pc == 0x08A88108u) goto L_08A88108;
    return;
L_08A88108:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A88114u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 151u, 0x08A00A68u>(ctx, &aot_mem) && ctx.pc == 0x08A88114u) goto L_08A88114;
    return;
L_08A88110:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A88114;
L_08A88114:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2216u << 16u);
      if (branch_taken) {
          goto L_08A88148;
      }
      goto L_08A88120;
    }
L_08A8811C:
    ctx.gpr[5] = (2216u << 16u);
    goto L_08A88120;
L_08A88120:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32320));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A88148;
      }
      goto L_08A8812C;
    }
L_08A8812C:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 13u);
    ctx.gpr[31] = (0x08A88140u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-22188));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 676u, 0x0890BB8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A88140u) goto L_08A88140;
    return;
L_08A88140:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A88164;
      }
      goto L_08A88148;
    }
L_08A88148:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A88158u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(23744));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 702u, 0x0890BE64u>(ctx, &aot_mem) && ctx.pc == 0x08A88158u) goto L_08A88158;
    return;
L_08A88158:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A88164u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-10000));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 706u, 0x0890BEF0u>(ctx, &aot_mem) && ctx.pc == 0x08A88164u) goto L_08A88164;
    return;
L_08A88164:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08A88170u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 817u, 0x08A87F98u>(ctx, &aot_mem) && ctx.pc == 0x08A88170u) goto L_08A88170;
    return;
L_08A88170:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A8817Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 680u, 0x0890BC14u>(ctx, &aot_mem) && ctx.pc == 0x08A8817Cu) goto L_08A8817C;
    return;
L_08A8817C:
    ctx.gpr[31] = (0x08A88184u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 153u, 0x08A00A78u>(ctx, &aot_mem) && ctx.pc == 0x08A88184u) goto L_08A88184;
    return;
L_08A88184:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A88194u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BB6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A88194u) goto L_08A88194;
    return;
L_08A88194:
    ctx.gpr[2] = (0u | 3u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A881AC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-304));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(268), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(280), ctx.gpr[19]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[19] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-23884)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(272), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(284), ctx.gpr[20]);
    ctx.gpr[20] = (2227u << 16u);
    ctx.gpr[17] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-22172));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-22160));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(288), ctx.gpr[31]);
    goto L_08A881EC;
L_08A881EC:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08A881F8u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 657u, 0x08AEAD20u>(ctx, &aot_mem) && ctx.pc == 0x08A881F8u) goto L_08A881F8;
    return;
L_08A881F8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-23884)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x08A8820Cu);
    ctx.gpr[5] = (0u | 250u);
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 631u, 0x08AEAA78u>(ctx, &aot_mem) && ctx.pc == 0x08A8820Cu) goto L_08A8820C;
    return;
L_08A8820C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08A88224;
      }
      goto L_08A88214;
    }
L_08A88214:
    ctx.gpr[31] = (0x08A8821Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 404u, 0x08AED66Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8821Cu) goto L_08A8821C;
    return;
L_08A8821C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A8822C;
      }
      goto L_08A88224;
    }
L_08A88224:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A88250;
      }
      goto L_08A8822C;
    }
L_08A8822C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A88238u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 87u, 0x08A4C5A8u>(ctx, &aot_mem) && ctx.pc == 0x08A88238u) goto L_08A88238;
    return;
L_08A88238:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A88244u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 553u, 0x0890B3FCu>(ctx, &aot_mem) && ctx.pc == 0x08A88244u) goto L_08A88244;
    return;
L_08A88244:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-23884)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08A881EC;
      }
      goto L_08A88250;
    }
L_08A88250:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(268)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(272)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(280)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(284)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(288)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(304));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A88270:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-192));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[19]);
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A882ACu);
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 552u, 0x0890B3DCu>(ctx, &aot_mem) && ctx.pc == 0x08A882ACu) goto L_08A882AC;
    return;
L_08A882AC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_08A88348;
      }
      goto L_08A882B4;
    }
L_08A882B4:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A882C8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-22152));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 676u, 0x0890BB8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A882C8u) goto L_08A882C8;
    return;
L_08A882C8:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-22124));
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-22116));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-22112));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[5]);
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-22108));
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-22104));
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-22100));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-22080));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[4]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[23] = (2227u << 16u);
    ctx.gpr[22] = (2227u << 16u);
    ctx.gpr[18] = (0u | 2u);
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[30] = (0u | 116u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-22144));
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(-22064));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(-22060));
      if (branch_taken) {
          goto L_08A883F8;
      }
      goto L_08A88348;
    }
L_08A88348:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A88354u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 594u, 0x0890B730u>(ctx, &aot_mem) && ctx.pc == 0x08A88354u) goto L_08A88354;
    return;
L_08A88354:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A883F0;
      }
      goto L_08A8835C;
    }
L_08A8835C:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08A88370u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-22148));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 676u, 0x0890BB8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A88370u) goto L_08A88370;
    return;
L_08A88370:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-22124));
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-22116));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-22112));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[5]);
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-22108));
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-22104));
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-22100));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-22080));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[4]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[23] = (2227u << 16u);
    ctx.gpr[22] = (2227u << 16u);
    ctx.gpr[18] = (0u | 2u);
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[30] = (0u | 116u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-22144));
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(-22064));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(-22060));
      if (branch_taken) {
          goto L_08A883F8;
      }
      goto L_08A883F0;
    }
L_08A883F0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08A885D8;
      }
      goto L_08A883F8;
    }
L_08A883F8:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A88408u);
    ctx.gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 676u, 0x0890BB8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A88408u) goto L_08A88408;
    return;
L_08A88408:
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08A8840C;
L_08A8840C:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A8841Cu);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 154u, 0x08A00A80u>(ctx, &aot_mem) && ctx.pc == 0x08A8841Cu) goto L_08A8841C;
    return;
L_08A8841C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A885C0;
      }
      goto L_08A88424;
    }
L_08A88424:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 13 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A884A0;
      }
      goto L_08A88430;
    }
L_08A88430:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A884A0;
      }
      goto L_08A88438;
    }
L_08A88438:
    ctx.gpr[16] = (ctx.gpr[18] + static_cast<std::uint32_t>(10));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A8844Cu);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 154u, 0x08A00A80u>(ctx, &aot_mem) && ctx.pc == 0x08A8844Cu) goto L_08A8844C;
    return;
L_08A8844C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A88464;
      }
      goto L_08A88454;
    }
L_08A88454:
    ctx.gpr[17] = (ctx.gpr[18] + static_cast<std::uint32_t>(-1));
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08A8845C;
L_08A8845C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_08A885B8;
      }
      goto L_08A88464;
    }
L_08A88464:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A88474u);
    ctx.gpr[6] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 676u, 0x0890BB8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A88474u) goto L_08A88474;
    return;
L_08A88474:
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08A88478;
L_08A88478:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A88488u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 154u, 0x08A00A80u>(ctx, &aot_mem) && ctx.pc == 0x08A88488u) goto L_08A88488;
    return;
L_08A88488:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8845C;
      }
      goto L_08A88490;
    }
L_08A88490:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[17] + static_cast<std::uint32_t>(10));
      if (branch_taken) {
          goto L_08A88478;
      }
      goto L_08A884A0;
    }
L_08A884A0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A884B0u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 676u, 0x0890BB8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A884B0u) goto L_08A884B0;
    return;
L_08A884B0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A884C0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 229u, 0x08A01008u>(ctx, &aot_mem) && ctx.pc == 0x08A884C0u) goto L_08A884C0;
    return;
L_08A884C0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A884D0u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 690u, 0x0890BCD0u>(ctx, &aot_mem) && ctx.pc == 0x08A884D0u) goto L_08A884D0;
    return;
L_08A884D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A884EC;
      }
      goto L_08A884DC;
    }
L_08A884DC:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[31] = (0x08A884ECu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 690u, 0x0890BCD0u>(ctx, &aot_mem) && ctx.pc == 0x08A884ECu) goto L_08A884EC;
    return;
L_08A884EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 104 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 108 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A88514;
      }
      goto L_08A88500;
    }
L_08A88500:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 102 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A8853C;
      }
      goto L_08A8850C;
    }
L_08A8850C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A88524;
      }
      goto L_08A88514;
    }
L_08A88514:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 110 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A8853C;
      }
      goto L_08A8851C;
    }
L_08A8851C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8853C;
      }
      goto L_08A88524;
    }
L_08A88524:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[31] = (0x08A88534u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 690u, 0x0890BCD0u>(ctx, &aot_mem) && ctx.pc == 0x08A88534u) goto L_08A88534;
    return;
L_08A88534:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A885A4;
      }
      goto L_08A8853C;
    }
L_08A8853C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (0u | 109u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A88564;
      }
      goto L_08A88550;
    }
L_08A88550:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[31] = (0x08A8855Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 690u, 0x0890BCD0u>(ctx, &aot_mem) && ctx.pc == 0x08A8855Cu) goto L_08A8855C;
    return;
L_08A8855C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A885A4;
      }
      goto L_08A88564;
    }
L_08A88564:
    ctx.gpr[5] = (0u | 67u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A88578;
      }
      goto L_08A88570;
    }
L_08A88570:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[30];
    // nop
      if (branch_taken) {
          goto L_08A88590;
      }
      goto L_08A88578;
    }
L_08A88578:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A88588u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 676u, 0x0890BB8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A88588u) goto L_08A88588;
    return;
L_08A88588:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A885A4;
      }
      goto L_08A88590;
    }
L_08A88590:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08A885A4u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 690u, 0x0890BCD0u>(ctx, &aot_mem) && ctx.pc == 0x08A885A4u) goto L_08A885A4;
    return;
L_08A885A4:
    ctx.gpr[31] = (0x08A885ACu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 552u, 0x0890B3DCu>(ctx, &aot_mem) && ctx.pc == 0x08A885ACu) goto L_08A885AC;
    return;
L_08A885AC:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A885B8u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 83u, 0x0890C6C0u>(ctx, &aot_mem) && ctx.pc == 0x08A885B8u) goto L_08A885B8;
    return;
L_08A885B8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08A8840C;
      }
      goto L_08A885C0;
    }
L_08A885C0:
    ctx.gpr[31] = (0x08A885C8u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 552u, 0x0890B3DCu>(ctx, &aot_mem) && ctx.pc == 0x08A885C8u) goto L_08A885C8;
    return;
L_08A885C8:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A885D4u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 83u, 0x0890C6C0u>(ctx, &aot_mem) && ctx.pc == 0x08A885D4u) goto L_08A885D4;
    return;
L_08A885D4:
    ctx.gpr[2] = (0u | 1u);
    goto L_08A885D8;
L_08A885D8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A88608:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-22416));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A88630u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(23748));
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 474u, 0x08A4B854u>(ctx, &aot_mem) && ctx.pc == 0x08A88630u) goto L_08A88630;
    return;
L_08A88630:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 10u);
    ctx.gpr[31] = (0x08A88644u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-22036));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 676u, 0x0890BB8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A88644u) goto L_08A88644;
    return;
L_08A88644:
    ctx.gpr[5] = (2217u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A88658u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-32144));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 694u, 0x0890BD50u>(ctx, &aot_mem) && ctx.pc == 0x08A88658u) goto L_08A88658;
    return;
L_08A88658:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A88664u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-10001));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 20u, 0x0890C174u>(ctx, &aot_mem) && ctx.pc == 0x08A88664u) goto L_08A88664;
    return;
L_08A88664:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A88678:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(60)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(64), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(60), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(60), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A88694:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(64)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(64), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(60), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A886AC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[9] = (2277u << 16u);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(23536));
    ctx.gpr[6] = (2277u << 16u);
    ctx.gpr[4] = (2277u << 16u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[9] + static_cast<std::uint32_t>(68));
    ctx.gpr[5] = (ctx.gpr[9] + static_cast<std::uint32_t>(-68));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(25784));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(25712));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    goto L_08A886DC;
L_08A886DC:
    ctx.gpr[10] = (ctx.gpr[11] << 6u);
    ctx.gpr[8] = (ctx.gpr[11] << 2u);
    ctx.gpr[10] = (ctx.gpr[10] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[10] + ctx.gpr[9]);
    ctx.gpr[2] = (static_cast<std::int32_t>(ctx.gpr[11]) < 31 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A88704;
      }
      goto L_08A886F8;
    }
L_08A886F8:
    ctx.gpr[2] = (ctx.gpr[10] + ctx.gpr[7]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(60), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A88708;
      }
      goto L_08A88704;
    }
L_08A88704:
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(60), ctx.gpr[6]);
    goto L_08A88708;
L_08A88708:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[11]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A8871C;
      }
      goto L_08A88710;
    }
L_08A88710:
    ctx.gpr[10] = (ctx.gpr[10] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(64), ctx.gpr[10]);
      if (branch_taken) {
          goto L_08A88720;
      }
      goto L_08A8871C;
    }
L_08A8871C:
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    goto L_08A88720;
L_08A88720:
    ctx.gpr[8] = (ctx.gpr[11] + static_cast<std::uint32_t>(1));
    ctx.gpr[11] = (ctx.gpr[8] << 16u);
    ctx.gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[11]) >> 16u));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[11]) < 32 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A886DC;
      }
      goto L_08A88738;
    }
L_08A88738:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(60), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(64), 0u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(60), 0u);
    ctx.gpr[4] = (ctx.gpr[9] + static_cast<std::uint32_t>(2108));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    ctx.gpr[4] = (2277u << 16u);
    ctx.gpr[5] = (2277u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(25856));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(25928));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(60), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(64), 0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(60), 0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    ctx.gpr[4] = (2277u << 16u);
    ctx.gpr[5] = (2277u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(26000));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(26072));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(60), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(64), 0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(60), 0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    ctx.gpr[4] = (2232u << 16u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(-18740), static_cast<std::uint16_t>(0u));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-18740));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[6] = (0u | 2u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[6]));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (0u | 3u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[31] = (0x08A887BCu);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(ctx.gpr[6]));
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 624u, 0x0892FC30u>(ctx, &aot_mem) && ctx.pc == 0x08A887BCu) goto L_08A887BC;
    return;
L_08A887BC:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08A887C8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-21880));
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 581u, 0x0892F99Cu>(ctx, &aot_mem) && ctx.pc == 0x08A887C8u) goto L_08A887C8;
    return;
L_08A887C8:
    ctx.gpr[31] = (0x08A887D0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 619u, 0x0892FBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A887D0u) goto L_08A887D0;
    return;
L_08A887D0:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A887E0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-21868));
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 101u, 0x08A0D0A0u>(ctx, &aot_mem) && ctx.pc == 0x08A887E0u) goto L_08A887E0;
    return;
L_08A887E0:
    ctx.gpr[16] = (2277u << 16u);
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(23520), ctx.gpr[2]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A887F8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-21852));
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 101u, 0x08A0D0A0u>(ctx, &aot_mem) && ctx.pc == 0x08A887F8u) goto L_08A887F8;
    return;
L_08A887F8:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(23520));
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A88810u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-21836));
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 101u, 0x08A0D0A0u>(ctx, &aot_mem) && ctx.pc == 0x08A88810u) goto L_08A88810;
    return;
L_08A88810:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A88824u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-21820));
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 101u, 0x08A0D0A0u>(ctx, &aot_mem) && ctx.pc == 0x08A88824u) goto L_08A88824;
    return;
L_08A88824:
    ctx.gpr[31] = (0x08A8882Cu);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 626u, 0x0892FC54u>(ctx, &aot_mem) && ctx.pc == 0x08A8882Cu) goto L_08A8882C;
    return;
L_08A8882C:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-5884), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 255u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-5880), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A88850:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (2230u << 16u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-5884), static_cast<std::uint8_t>(ctx.gpr[4]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A88864:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-192));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-5884)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_08A888D0;
      }
      goto L_08A888B4;
    }
L_08A888B4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5880)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 0 ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[5] = (0u | 0u);
        goto L_08A888C8;
    }
    goto L_08A888C8;
L_08A888C8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-5880), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A888EC;
      }
      goto L_08A888D0;
    }
L_08A888D0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5880)));
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[5] = (0u | 255u);
        goto L_08A888E8;
    }
    goto L_08A888E8;
L_08A888E8:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-5880), ctx.gpr[5]);
    goto L_08A888EC;
L_08A888EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5880)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (15820u << 16u);
      if (branch_taken) {
          goto L_08A88938;
      }
      goto L_08A888F8;
    }
L_08A888F8:
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.gpr[23] = (2277u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(25712));
    ctx.gpr[4] = (2277u << 16u);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(60)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(26000));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[4]);
    ctx.gpr[4] = (2277u << 16u);
    ctx.gpr[22] = (2277u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(25784));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(26072));
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    ctx.gpr[30] = (2230u << 16u);
      if (branch_taken) {
          goto L_08A88940;
      }
      goto L_08A88930;
    }
L_08A88930:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A88AFC;
      }
      goto L_08A88938;
    }
L_08A88938:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A89010;
      }
      goto L_08A88940;
    }
L_08A88940:
    ctx.gpr[31] = (0x08A88948u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x08A88948u) goto L_08A88948;
    return;
L_08A88948:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (15232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 32897u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16784u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x08A88978u);
    ctx.fpr[22] = ctx.fpr[12] + ctx.fpr[22];
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x08A88978u) goto L_08A88978;
    return;
L_08A88978:
    ctx.gpr[4] = (ctx.gpr[2] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[16] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] & 1u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(13216));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08A889C0;
      }
      goto L_08A88994;
    }
L_08A88994:
    ctx.gpr[31] = (0x08A8899Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x08A8899Cu) goto L_08A8899C;
    return;
L_08A8899C:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (15560u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 62915u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
      if (branch_taken) {
          goto L_08A889E8;
      }
      goto L_08A889C0;
    }
L_08A889C0:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-128));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(336)));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (15308u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    goto L_08A889E8;
L_08A889E8:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[5]);
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
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<1u>());
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[5]);
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
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<1u>());
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x08A88A54u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 453u, 0x088C2EF0u>(ctx, &aot_mem) && ctx.pc == 0x08A88A54u) goto L_08A88A54;
    return;
L_08A88A54:
    ctx.fpr[13] = ctx.fpr[0] + ctx.fpr[20];
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A88AFC;
      }
      goto L_08A88A68;
    }
L_08A88A68:
    ctx.gpr[31] = (0x08A88A70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x08A88A70u) goto L_08A88A70;
    return;
L_08A88A70:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (15560u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 62915u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[16] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
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
    ctx.gpr[31] = (0x08A88ACCu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 338u, 0x08ACA3A4u>(ctx, &aot_mem) && ctx.pc == 0x08A88ACCu) goto L_08A88ACC;
    return;
L_08A88ACC:
    ctx.gpr[4] = (ctx.gpr[2] & 8u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A88AE0;
      }
      goto L_08A88AD8;
    }
L_08A88AD8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A88AE4;
      }
      goto L_08A88AE0;
    }
L_08A88AE0:
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[16]));
    goto L_08A88AE4;
L_08A88AE4:
    ctx.gpr[31] = (0x08A88AECu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_08A88694;
L_08A88AEC:
    ctx.gpr[5] = (2277u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A88AFCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(25856));
    goto L_08A88678;
L_08A88AFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[22];
    ctx.gpr[4] = (15651u << 16u);
      if (branch_taken) {
          goto L_08A88D14;
      }
      goto L_08A88B0C;
    }
L_08A88B0C:
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[20] = (2277u << 16u);
    ctx.gpr[4] = (16584u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 62915u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (2229u << 16u);
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[21] = (0u | 1u);
    ctx.gpr[4] = (16256u << 16u);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(25856));
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(23884));
    ctx.gpr[19] = (2230u << 16u);
    ctx.gpr[18] = (2230u << 16u);
    goto L_08A88B4C;
L_08A88B4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] < ctx.gpr[6] ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
        goto L_08A88BC4;
    }
    goto L_08A88B68;
L_08A88B68:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[30]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[15];
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(57)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(ctx.gpr[21]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    ctx.gpr[31] = (0x08A88BACu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A88694;
L_08A88BAC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A88BB8u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    goto L_08A88678;
L_08A88BB8:
    ctx.gpr[16] = (ctx.gpr[30] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
      if (branch_taken) {
          goto L_08A88D0C;
      }
      goto L_08A88BC4;
    }
L_08A88BC4:
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    { const std::uint32_t dividend = ctx.gpr[5]; const std::uint32_t divisor = ctx.gpr[6]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[6] = (ctx.gpr[6] >> 4u);
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[7] = (ctx.lo);
    ctx.gpr[7] = (ctx.gpr[4] - ctx.gpr[7]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (static_cast<std::int32_t>(ctx.gpr[7]) < 0) {
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[22];
        goto L_08A88BF8;
    }
    goto L_08A88BF8;
L_08A88BF8:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    if (static_cast<std::int32_t>(ctx.gpr[4]) < 0) {
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[22];
        goto L_08A88C14;
    }
    goto L_08A88C14;
L_08A88C14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    if (static_cast<std::int32_t>(ctx.gpr[4]) < 0) {
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[22];
        goto L_08A88C28;
    }
    goto L_08A88C28;
L_08A88C28:
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[14];
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(29)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (ctx.gpr[4] << 7u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.fpr[0] = ctx.fpr[24] - ctx.fpr[12];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[15];
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(29)));
    ctx.fpr[1] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[4] << 7u);
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.fpr[2] = ctx.fpr[24] - ctx.fpr[13];
    ctx.fpr[3] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[15] = ctx.fpr[17] + ctx.fpr[16];
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[14] = ctx.fpr[19] + ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[14] + ctx.fpr[13];
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.fpr[12] = ctx.fpr[15] + ctx.fpr[12];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-7864)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[18] + ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[28]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A88D08;
      }
      goto L_08A88CFC;
    }
L_08A88CFC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[28];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A88D08;
L_08A88D08:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    goto L_08A88D0C;
L_08A88D0C:
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_08A88B4C;
      }
      goto L_08A88D14;
    }
L_08A88D14:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(-7688)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A88D30;
      }
      goto L_08A88D28;
    }
L_08A88D28:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 31u);
      if (branch_taken) {
          goto L_08A88D84;
      }
      goto L_08A88D30;
    }
L_08A88D30:
    ctx.gpr[4] = (16076u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(-7688)));
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A88D58;
      }
      goto L_08A88D50;
    }
L_08A88D50:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 7u);
      if (branch_taken) {
          goto L_08A88D84;
      }
      goto L_08A88D58;
    }
L_08A88D58:
    ctx.gpr[4] = (16179u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(-7688)));
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A88D80;
      }
      goto L_08A88D78;
    }
L_08A88D78:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08A88D84;
      }
      goto L_08A88D80;
    }
L_08A88D80:
    ctx.gpr[4] = (0u | 0u);
    goto L_08A88D84;
L_08A88D84:
    ctx.gpr[18] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-7820)));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A88F4C;
      }
      goto L_08A88D98;
    }
L_08A88D98:
    ctx.gpr[31] = (0x08A88DA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x08A88DA0u) goto L_08A88DA0;
    return;
L_08A88DA0:
    ctx.gpr[4] = (2277u << 16u);
    ctx.gpr[16] = (ctx.gpr[2] & 65535u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(23536));
      if (branch_taken) {
          goto L_08A88DC8;
      }
      goto L_08A88DB0;
    }
L_08A88DB0:
    ctx.gpr[5] = (0u - ctx.gpr[16]);
    ctx.gpr[5] = (ctx.gpr[5] & 31u);
    ctx.gpr[5] = (0u - ctx.gpr[5]);
    ctx.gpr[16] = (ctx.gpr[5] << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 16u));
      if (branch_taken) {
          goto L_08A88DD4;
      }
      goto L_08A88DC8;
    }
L_08A88DC8:
    ctx.gpr[5] = (ctx.gpr[16] & 31u);
    ctx.gpr[16] = (ctx.gpr[5] << 16u);
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 16u));
    goto L_08A88DD4;
L_08A88DD4:
    ctx.gpr[5] = (ctx.gpr[16] << 6u);
    ctx.gpr[6] = (ctx.gpr[16] << 2u);
    ctx.gpr[16] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (17595u << 16u);
      if (branch_taken) {
          goto L_08A88F4C;
      }
      goto L_08A88DF4;
    }
L_08A88DF4:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(-7688)));
    ctx.gpr[4] = (ctx.gpr[4] | 32768u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (17530u << 16u);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7868)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[15] = ctx.fpr[14] + ctx.fpr[13];
    ctx.gpr[5] = (20224u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08A88E4C;
      }
      goto L_08A88E34;
    }
L_08A88E34:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(-7688)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A88E6C;
      }
      goto L_08A88E4C;
    }
L_08A88E4C:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(-7688)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[5] = (32768u << 16u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    goto L_08A88E6C;
L_08A88E6C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    ctx.gpr[5] = (15948u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(-7688)));
    ctx.gpr[5] = (16448u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[12];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[12];
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = ctx.fpr[16] + ctx.fpr[14];
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[31] = (0x08A88EBCu);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 453u, 0x088C2EF0u>(ctx, &aot_mem) && ctx.pc == 0x08A88EBCu) goto L_08A88EBC;
    return;
L_08A88EBC:
    ctx.fpr[14] = ctx.fpr[0] + ctx.fpr[20];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[16];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[31] = (0x08A88F00u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 338u, 0x08ACA3A4u>(ctx, &aot_mem) && ctx.pc == 0x08A88F00u) goto L_08A88F00;
    return;
L_08A88F00:
    ctx.gpr[4] = (ctx.gpr[2] & 8u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A88F14;
      }
      goto L_08A88F0C;
    }
L_08A88F0C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(57), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A88F1C;
      }
      goto L_08A88F14;
    }
L_08A88F14:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(57), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A88F1C;
L_08A88F1C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A88F4C;
      }
      goto L_08A88F28;
    }
L_08A88F28:
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(29), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x08A88F40u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A88694;
L_08A88F40:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[31] = (0x08A88F4Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A88678;
L_08A88F4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-7820)));
    ctx.gpr[4] = (ctx.gpr[4] & 15u);
    ctx.gpr[17] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[17] << 16u);
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 16u));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(2));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_08A89010;
      }
      goto L_08A88F70;
    }
L_08A88F70:
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    ctx.gpr[4] = (17332u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 32768u);
    ctx.gpr[19] = (2277u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[20] = (0u | 1u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(48));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(23536));
    goto L_08A88F90;
L_08A88F90:
    ctx.gpr[4] = (ctx.gpr[16] << 6u);
    ctx.gpr[5] = (ctx.gpr[16] << 2u);
    ctx.gpr[21] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[21] = (ctx.gpr[21] + ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_08A88FF8;
      }
      goto L_08A88FAC;
    }
L_08A88FAC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[15];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A88FF8;
      }
      goto L_08A88FE0;
    }
L_08A88FE0:
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x08A88FECu);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    goto L_08A88694;
L_08A88FEC:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08A88FF8u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    goto L_08A88678;
L_08A88FF8:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[4] << 16u);
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 16u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A88F90;
      }
      goto L_08A89010;
    }
L_08A89010:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A89054:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-240));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5880)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(220), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(232), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2229u << 16u);
      if (branch_taken) {
          goto L_08A891D4;
      }
      goto L_08A890A8;
    }
L_08A890A8:
    ctx.fpr[24] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(22912)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11240)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[24]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A891D4;
      }
      goto L_08A890C4;
    }
L_08A890C4:
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[31] = (0x08A890D0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x08A890D0u) goto L_08A890D0;
    return;
L_08A890D0:
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[31] = (0x08A890DCu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x08A890DCu) goto L_08A890DC;
    return;
L_08A890DC:
    ctx.gpr[4] = (0u | 14u);
    ctx.gpr[31] = (0x08A890E8u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x08A890E8u) goto L_08A890E8;
    return;
L_08A890E8:
    ctx.gpr[4] = (2277u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(23536));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20400));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(20));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(52));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), ctx.gpr[5]);
    ctx.gpr[7] = (ctx.gpr[4] + static_cast<std::uint32_t>(84));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(116));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[5]);
    ctx.gpr[7] = (ctx.gpr[4] + static_cast<std::uint32_t>(40));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(72));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(104));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[4]);
    ctx.gpr[5] = (2277u << 16u);
    ctx.fpr[8] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(23520));
    ctx.fpr[7] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[5]);
    ctx.fpr[6] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[5] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (2232u << 16u);
    ctx.fpr[4] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[23] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    ctx.fpr[3] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (15948u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[2] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[19] = (2232u << 16u);
    ctx.gpr[18] = (2233u << 16u);
    ctx.gpr[4] = (16256u << 16u);
    ctx.gpr[5] = (20224u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[21] = (0u | 0u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[16] = (0u | 255u);
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(48));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-18740));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-28752));
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[22] = (2230u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[30] = (32768u << 16u);
      if (branch_taken) {
          goto L_08A891DC;
      }
      goto L_08A891D4;
    }
L_08A891D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A89944;
      }
      goto L_08A891DC;
    }
L_08A891DC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[8]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[7]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[6]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[5]));
    ctx.gpr[20] = (ctx.gpr[21] << 5u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[4]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), std::bit_cast<std::uint32_t>(ctx.fpr[3]));
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    ctx.gpr[4] = (ctx.gpr[4] >> 30u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[21]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A89240;
      }
      goto L_08A89230;
    }
L_08A89230:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7252)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[20]) >> 2u));
      if (branch_taken) {
          goto L_08A89260;
      }
      goto L_08A89240;
    }
L_08A89240:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[5] = (ctx.gpr[21] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[31] = (0x08A8925Cu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x08A8925Cu) goto L_08A8925C;
    return;
L_08A8925C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[20]) >> 2u));
    goto L_08A89260;
L_08A89260:
    ctx.gpr[4] = (ctx.gpr[4] >> 30u);
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(-7736), 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-7732), 0u);
    ctx.gpr[20] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.fpr[2] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.fpr[1] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.fpr[3] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.fpr[4] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.fpr[5] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.fpr[6] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[20] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[20]) >> 16u));
    ctx.fpr[7] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[8] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
      if (branch_taken) {
          goto L_08A89818;
      }
      goto L_08A892B4;
    }
L_08A892B4:
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[20] << 6u);
    ctx.gpr[5] = (ctx.gpr[20] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[3] = (ctx.gpr[4] + ctx.gpr[3]);
    ctx.gpr[4] = (48716u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.fpr[9] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A897FC;
      }
      goto L_08A892DC;
    }
L_08A892DC:
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(56)));
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 100u);
    ctx.gpr[9] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[9];
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08A89328;
      }
      goto L_08A892F8;
    }
L_08A892F8:
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.fpr[15] = ctx.fpr[12] - ctx.fpr[17];
    ctx.fpr[16] = ctx.fpr[13] - ctx.fpr[14];
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.fpr[17] = ctx.fpr[17] + ctx.fpr[16];
      if (branch_taken) {
          goto L_08A893EC;
      }
      goto L_08A89320;
    }
L_08A89320:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_08A893EC;
      }
      goto L_08A89328;
    }
L_08A89328:
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(12)));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(57)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.fpr[15] = ctx.fpr[12] - ctx.fpr[17];
    ctx.fpr[16] = ctx.fpr[13] - ctx.fpr[14];
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.fpr[17] = ctx.fpr[17] + ctx.fpr[16];
      if (branch_taken) {
          goto L_08A8935C;
      }
      goto L_08A89354;
    }
L_08A89354:
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A893EC;
      }
      goto L_08A8935C;
    }
L_08A8935C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    if (static_cast<std::int32_t>(ctx.gpr[4]) < 0) {
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[28];
        goto L_08A8937C;
    }
    goto L_08A8937C;
L_08A8937C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(36)));
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[16] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[16])));
    if (static_cast<std::int32_t>(ctx.gpr[4]) < 0) {
    ctx.fpr[16] = ctx.fpr[16] + ctx.fpr[28];
        goto L_08A89390;
    }
    goto L_08A89390;
L_08A89390:
    ctx.fpr[15] = ctx.fpr[15] / ctx.fpr[16];
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A893A4;
      }
      goto L_08A8939C;
    }
L_08A8939C:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[16] = ctx.fpr[22] - ctx.fpr[15];
      if (branch_taken) {
          goto L_08A893A8;
      }
      goto L_08A893A4;
    }
L_08A893A4:
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    goto L_08A893A8;
L_08A893A8:
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A893B4;
      }
      goto L_08A893B0;
    }
L_08A893B0:
    ctx.fpr[16] = ctx.fpr[15] + ctx.fpr[16];
    goto L_08A893B4;
L_08A893B4:
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[16] < ctx.fpr[26]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[15] = ctx.fpr[16] - ctx.fpr[26];
        goto L_08A893DC;
    }
    goto L_08A893D0;
L_08A893D0:
    ctx.fpr[15] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[16]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
      if (branch_taken) {
          goto L_08A893E8;
      }
      goto L_08A893DC;
    }
L_08A893DC:
    ctx.fpr[15] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[15]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[30]);
    goto L_08A893E8;
L_08A893E8:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    goto L_08A893EC;
L_08A893EC:
    ctx.fpr[17] = std::sqrt(ctx.fpr[17]);
    ctx.gpr[4] = (16784u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[17] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A897FC;
      }
      goto L_08A89408;
    }
L_08A89408:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-7732)));
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(52)));
    ctx.gpr[3] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (16772u << 16u);
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[17] < ctx.fpr[18]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_08A89494;
      }
      goto L_08A8942C;
    }
L_08A8942C:
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    if (static_cast<std::int32_t>(ctx.gpr[6]) < 0) {
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[28];
        goto L_08A8943C;
    }
    goto L_08A8943C;
L_08A8943C:
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[16] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[16])));
    if (static_cast<std::int32_t>(ctx.gpr[6]) < 0) {
    ctx.fpr[16] = ctx.fpr[16] + ctx.fpr[28];
        goto L_08A8944C;
    }
    goto L_08A8944C;
L_08A8944C:
    ctx.fpr[17] = ctx.fpr[17] - ctx.fpr[18];
    ctx.gpr[4] = (16320u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[17] = ctx.fpr[16] / ctx.fpr[0];
    ctx.fpr[17] = ctx.fpr[15] - ctx.fpr[17];
    ctx.set_fpu_condition((ctx.fpr[17] < ctx.fpr[26]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[15] = ctx.fpr[17] - ctx.fpr[26];
        goto L_08A89480;
    }
    goto L_08A89474;
L_08A89474:
    ctx.fpr[15] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[17]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
      if (branch_taken) {
          goto L_08A8948C;
      }
      goto L_08A89480;
    }
L_08A89480:
    ctx.fpr[15] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[15]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[30]);
    goto L_08A8948C;
L_08A8948C:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (2230u << 16u);
    goto L_08A89494;
L_08A89494:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5880)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[6] = (ctx.lo);
    { const bool branch_taken = ctx.gpr[21] == 0u;
    ctx.gpr[6] = (ctx.gpr[6] >> 8u);
      if (branch_taken) {
          goto L_08A894B0;
      }
      goto L_08A894A8;
    }
L_08A894A8:
    { const bool branch_taken = ctx.gpr[21] != ctx.gpr[9];
    // nop
      if (branch_taken) {
          goto L_08A89564;
      }
      goto L_08A894B0;
    }
L_08A894B0:
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[19]));
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
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[19]));
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
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[19]));
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
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[2] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[19]));
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
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[9]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[1] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[17] = ctx.fpr[12] + ctx.fpr[15];
    ctx.fpr[19] = ctx.fpr[17] + ctx.fpr[2];
    ctx.fpr[18] = ctx.fpr[13] + ctx.fpr[16];
    ctx.fpr[0] = ctx.fpr[18] + ctx.fpr[1];
    ctx.fpr[17] = ctx.fpr[17] - ctx.fpr[2];
    ctx.fpr[18] = ctx.fpr[18] - ctx.fpr[1];
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[15];
    ctx.fpr[15] = ctx.fpr[12] + ctx.fpr[2];
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[16];
    ctx.fpr[16] = ctx.fpr[13] + ctx.fpr[1];
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[2];
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[1];
      if (branch_taken) {
          goto L_08A89614;
      }
      goto L_08A89564;
    }
L_08A89564:
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[19]));
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
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[19]));
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
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[19]));
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
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[2] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[19]));
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
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[9]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[1] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[17] = ctx.fpr[12] + ctx.fpr[15];
    ctx.fpr[19] = ctx.fpr[17] + ctx.fpr[2];
    ctx.fpr[18] = ctx.fpr[13] + ctx.fpr[16];
    ctx.fpr[0] = ctx.fpr[18] + ctx.fpr[1];
    ctx.fpr[17] = ctx.fpr[17] - ctx.fpr[2];
    ctx.fpr[18] = ctx.fpr[18] - ctx.fpr[1];
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[15];
    ctx.fpr[15] = ctx.fpr[12] + ctx.fpr[2];
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[16];
    ctx.fpr[16] = ctx.fpr[13] + ctx.fpr[1];
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[2];
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[1];
    goto L_08A89614;
L_08A89614:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.fpr[8] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    ctx.fpr[7] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[3] + ctx.gpr[4]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[8]));
    ctx.fpr[6] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[7]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[6]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-7732)));
    ctx.gpr[3] = (ctx.gpr[3] << 5u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.fpr[5] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[5]));
    ctx.gpr[4] = (ctx.gpr[3] + ctx.gpr[4]);
    ctx.fpr[4] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.fpr[3] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[4]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[3]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-7732)));
    ctx.gpr[3] = (ctx.gpr[3] << 5u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.fpr[1] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[2] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[4] = (ctx.gpr[3] + ctx.gpr[4]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-7732)));
    ctx.gpr[3] = (ctx.gpr[3] << 5u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (ctx.gpr[3] + ctx.gpr[4]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    ctx.fpr[30] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-7732)));
    ctx.gpr[3] = (ctx.gpr[3] << 5u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(64), static_cast<std::uint8_t>(ctx.gpr[16]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(65), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(66), static_cast<std::uint8_t>(ctx.gpr[16]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(67), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[4] = (ctx.gpr[3] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-7732)));
    ctx.gpr[3] = (ctx.gpr[3] << 5u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(68), static_cast<std::uint8_t>(ctx.gpr[16]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(69), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(70), static_cast<std::uint8_t>(ctx.gpr[16]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(71), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[3] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-7732)));
    ctx.gpr[3] = (ctx.gpr[3] << 5u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(ctx.gpr[16]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(73), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(74), static_cast<std::uint8_t>(ctx.gpr[16]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(75), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[3] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-7732)));
    ctx.gpr[3] = (ctx.gpr[3] << 5u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(ctx.gpr[16]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(77), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(78), static_cast<std::uint8_t>(ctx.gpr[16]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(79), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[4] = (ctx.gpr[3] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-7732)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[5] = (ctx.gpr[2] << 5u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-7736)));
    goto L_08A897B4;
L_08A897B4:
    ctx.gpr[4] = (ctx.gpr[11] + ctx.gpr[11]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[3] + ctx.gpr[11]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[11] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[18]);
    ctx.gpr[11] = (ctx.gpr[6] << 16u);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[11]) >> 16u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[11]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A897B4;
      }
      goto L_08A897EC;
    }
L_08A897EC:
    ctx.gpr[4] = (ctx.gpr[3] + static_cast<std::uint32_t>(6));
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(-7736), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-7732), ctx.gpr[4]);
    goto L_08A897FC;
L_08A897FC:
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[20] = (ctx.gpr[4] << 16u);
    ctx.gpr[20] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[20]) >> 16u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A892B4;
      }
      goto L_08A89818;
    }
L_08A89818:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[8]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[7]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[6]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[5]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[4]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), std::bit_cast<std::uint32_t>(ctx.fpr[3]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-7736)));
    if (ctx.gpr[4] == 0u) {
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
        goto L_08A898B4;
    }
    goto L_08A89850;
L_08A89850:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[8]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[7]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[6]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[5]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[4]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), std::bit_cast<std::uint32_t>(ctx.fpr[3]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-7732)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A89890u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 50u, 0x08868560u>(ctx, &aot_mem) && ctx.pc == 0x08A89890u) goto L_08A89890;
    return;
L_08A89890:
    if (ctx.gpr[2] == 0u) {
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
        goto L_08A898B4;
    }
    goto L_08A89898;
L_08A89898:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-7736)));
    ctx.gpr[4] = (0u | 3u);
    ctx.gpr[31] = (0x08A898A8u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 71u, 0x0886885Cu>(ctx, &aot_mem) && ctx.pc == 0x08A898A8u) goto L_08A898A8;
    return;
L_08A898A8:
    ctx.gpr[31] = (0x08A898B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 70u, 0x08868844u>(ctx, &aot_mem) && ctx.pc == 0x08A898B0u) goto L_08A898B0;
    return;
L_08A898B0:
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    goto L_08A898B4;
L_08A898B4:
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.fpr[2] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.fpr[1] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.fpr[3] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.fpr[4] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.fpr[5] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[21] = (ctx.gpr[4] << 16u);
    ctx.fpr[6] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[21]) >> 16u));
    ctx.fpr[7] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.fpr[8] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
      if (branch_taken) {
          goto L_08A891DC;
      }
      goto L_08A898F0;
    }
L_08A898F0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[8]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[7]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[6]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[5]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[4]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[3]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[4] = (0u | 14u);
    ctx.gpr[31] = (0x08A8992Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x08A8992Cu) goto L_08A8992C;
    return;
L_08A8992C:
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[31] = (0x08A89938u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x08A89938u) goto L_08A89938;
    return;
L_08A89938:
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[31] = (0x08A89944u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x08A89944u) goto L_08A89944;
    return;
L_08A89944:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(220)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8998C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(86)));
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-7820)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] ^ ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] & 3u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_08A89DB8;
      }
      goto L_08A899F0;
    }
L_08A899F0:
    ctx.gpr[22] = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    ctx.fpr[16] = std::bit_cast<float>(0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (16800u << 16u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[16]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
        goto L_08A89A24;
    }
    goto L_08A89A24;
L_08A89A24:
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A89DB8;
      }
      goto L_08A89A34;
    }
L_08A89A34:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[16]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
        goto L_08A89A50;
    }
    goto L_08A89A50;
L_08A89A50:
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A89DB8;
      }
      goto L_08A89A60;
    }
L_08A89A60:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(112)));
    ctx.gpr[4] = (15692u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[16]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(116)));
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A89A84;
      }
      goto L_08A89A7C;
    }
L_08A89A7C:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
      if (branch_taken) {
          goto L_08A89A88;
      }
      goto L_08A89A84;
    }
L_08A89A84:
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A89A88;
L_08A89A88:
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[15]));
    // nop
    if (!ctx.fpu_condition()) {
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
        goto L_08A89AC4;
    }
    goto L_08A89A98;
L_08A89A98:
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[16]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
        goto L_08A89AB0;
    }
    goto L_08A89AA8;
L_08A89AA8:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) ^ 0x80000000u);
      if (branch_taken) {
          goto L_08A89AB0;
      }
      goto L_08A89AB0;
    }
L_08A89AB0:
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A89DB8;
      }
      goto L_08A89AC0;
    }
L_08A89AC0:
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    goto L_08A89AC4;
L_08A89AC4:
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[22] = ctx.fpr[14] + ctx.fpr[17];
    ctx.fpr[22] = std::sqrt(ctx.fpr[22]);
    ctx.set_fpu_condition((ctx.fpr[22] <= ctx.fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[20] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08A89DB8;
      }
      goto L_08A89AE0;
    }
L_08A89AE0:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (2277u << 16u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[16]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(25928));
      if (branch_taken) {
          goto L_08A89B10;
      }
      goto L_08A89B08;
    }
L_08A89B08:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (0u | 1u);
      if (branch_taken) {
          goto L_08A89B14;
      }
      goto L_08A89B10;
    }
L_08A89B10:
    ctx.gpr[21] = (0u | 0u);
    goto L_08A89B14;
L_08A89B14:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(88))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[7] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[6] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(32));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2277u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(25856));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[4];
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08A89DB8;
      }
      goto L_08A89B64;
    }
L_08A89B64:
    ctx.gpr[4] = (48896u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (16128u << 16u);
    { const float fs = ctx.fpr[30]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (49088u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16320u << 16u);
    { const float fs = ctx.fpr[30]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const float fs = ctx.fpr[30]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[30]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (16840u << 16u);
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[6] = (15820u << 16u);
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[23] = (2277u << 16u);
    ctx.gpr[4] = (16448u << 16u);
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[30]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[30] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[30] = fs * ft; }
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[30] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[28] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[28] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[6] | 52429u);
    ctx.gpr[19] = (0u | 2u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(26000));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08A89BEC;
L_08A89BEC:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    ctx.fpr[13] = ctx.fpr[14] - ctx.fpr[13];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    { const bool branch_taken = ctx.gpr[21] == 0u;
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[16];
      if (branch_taken) {
          goto L_08A89C44;
      }
      goto L_08A89C1C;
    }
L_08A89C1C:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A89C44;
      }
      goto L_08A89C30;
    }
L_08A89C30:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[15]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
        goto L_08A89C78;
    }
    goto L_08A89C44;
L_08A89C44:
    { const bool branch_taken = ctx.gpr[21] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A89DA8;
      }
      goto L_08A89C4C;
    }
L_08A89C4C:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A89DA8;
      }
      goto L_08A89C60;
    }
L_08A89C60:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A89DA8;
      }
      goto L_08A89C74;
    }
L_08A89C74:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_08A89C78;
L_08A89C78:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(0u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[16]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
        goto L_08A89C9C;
    }
    goto L_08A89C9C;
L_08A89C9C:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A89DA8;
      }
      goto L_08A89CB0;
    }
L_08A89CB0:
    ctx.set_fpu_condition((ctx.fpr[24] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A89CC8;
      }
      goto L_08A89CC0;
    }
L_08A89CC0:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
      if (branch_taken) {
          goto L_08A89CCC;
      }
      goto L_08A89CC8;
    }
L_08A89CC8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    goto L_08A89CCC;
L_08A89CCC:
    ctx.gpr[4] = (15692u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A89DA8;
      }
      goto L_08A89CE8;
    }
L_08A89CE8:
    ctx.gpr[4] = (15897u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(ctx.gpr[19]));
      if (branch_taken) {
          goto L_08A89D0C;
      }
      goto L_08A89D04;
    }
L_08A89D04:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(29), static_cast<std::uint8_t>(ctx.gpr[19]));
      if (branch_taken) {
          goto L_08A89D14;
      }
      goto L_08A89D0C;
    }
L_08A89D0C:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(29), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A89D14;
L_08A89D14:
    ctx.gpr[4] = (0u | 2000u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(112)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(116)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[12] = std::sqrt(ctx.fpr[12]);
    ctx.fpr[12] = ctx.fpr[30] / ctx.fpr[12];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(-7868)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (0u | 0u);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[15];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x08A89D8Cu);
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[20];
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 453u, 0x088C2EF0u>(ctx, &aot_mem) && ctx.pc == 0x08A89D8Cu) goto L_08A89D8C;
    return;
L_08A89D8C:
    ctx.fpr[12] = ctx.fpr[0] + ctx.fpr[26];
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A89D9Cu);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A88694;
L_08A89D9C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A89DA8u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    goto L_08A88678;
L_08A89DA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[16] = (ctx.gpr[18] | 0u);
    if (ctx.gpr[16] != ctx.gpr[4]) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_08A89BEC;
    }
    goto L_08A89DB8;
L_08A89DB8:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A89E00:
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(23852)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[5] = (2229u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(23848)));
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.gpr[9] = (2229u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(23876)));
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
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(23856), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[12] = (2229u << 16u);
    ctx.fpr[14] = ctx.fpr[17] / ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(23864), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[19] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(23860), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[8]);
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(23868), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(23872), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(23880), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A89E94:
    jump_target = ctx.gpr[31];
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A89E9C:
    jump_target = ctx.gpr[31];
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A89EA4:
    jump_target = ctx.gpr[31];
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A89EAC:
    jump_target = ctx.gpr[31];
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A89EB4:
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 75 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 81 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A89EE4;
      }
      goto L_08A89EC4;
    }
L_08A89EC4:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A89EE4;
      }
      goto L_08A89ECC;
    }
L_08A89ECC:
    ctx.gpr[6] = (ctx.gpr[5] << 7u);
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[2] = (ctx.gpr[4] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(11552));
      if (branch_taken) {
          goto L_08A89EE8;
      }
      goto L_08A89EE4;
    }
L_08A89EE4:
    ctx.gpr[2] = (ctx.gpr[4] + static_cast<std::uint32_t>(19952));
    goto L_08A89EE8;
L_08A89EE8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A89EF0:
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 72 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 75 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A89F20;
      }
      goto L_08A89F00;
    }
L_08A89F00:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A89F20;
      }
      goto L_08A89F08;
    }
L_08A89F08:
    ctx.gpr[5] = (ctx.gpr[5] << 5u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[2] = (ctx.gpr[4] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(13712));
      if (branch_taken) {
          goto L_08A89F24;
      }
      goto L_08A89F20;
    }
L_08A89F20:
    ctx.gpr[2] = (ctx.gpr[4] + static_cast<std::uint32_t>(20624));
    goto L_08A89F24;
L_08A89F24:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A89F2C:
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24300)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24296)));
    ctx.gpr[7] = (2229u << 16u);
    ctx.gpr[5] = (16014u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 14571u);
    ctx.gpr[9] = (2229u << 16u);
    ctx.gpr[8] = (2229u << 16u);
    ctx.gpr[6] = (16672u << 16u);
    ctx.gpr[10] = (2229u << 16u);
    ctx.gpr[11] = (2229u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[17];
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(24304), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = ctx.fpr[16] / ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(24312), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[18] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(24308), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(24316), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(24320), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A89FA4:
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
L_08A89FD0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    ctx.gpr[19] = (2232u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-18532)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[20]);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[18] = (2227u << 16u);
      if (branch_taken) {
          goto L_08A8A070;
      }
      goto L_08A8A004;
    }
L_08A8A004:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-21648));
    ctx.gpr[16] = (2232u << 16u);
    goto L_08A8A010;
L_08A8A010:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 256u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 2u);
    ctx.gpr[31] = (0x08A8A028u);
    ctx.gpr[8] = (0u | 0u);
    ctx.pc = 0x08B0BAD4u;
    return;
L_08A8A028:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-18508)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A8A054;
      }
      goto L_08A8A038;
    }
L_08A8A038:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-18532)));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(28));
      if (branch_taken) {
          goto L_08A8A010;
      }
      goto L_08A8A04C;
    }
L_08A8A04C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8A070;
      }
      goto L_08A8A054;
    }
L_08A8A054:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-21632));
    ctx.gpr[31] = (0x08A8A068u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21592));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 375u, 0x08AF99BCu>(ctx, &aot_mem) && ctx.pc == 0x08A8A068u) goto L_08A8A068;
    return;
L_08A8A068:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8A158;
      }
      goto L_08A8A070;
    }
L_08A8A070:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[4] << 2u);
    ctx.gpr[31] = (0x08A8A080u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 654u, 0x08AA3104u>(ctx, &aot_mem) && ctx.pc == 0x08A8A080u) goto L_08A8A080;
    return;
L_08A8A080:
    ctx.gpr[17] = (2232u << 16u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-18524), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A8A098u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 376u, 0x08AED4ECu>(ctx, &aot_mem) && ctx.pc == 0x08A8A098u) goto L_08A8A098;
    return;
L_08A8A098:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(-18524));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-18532)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (0u | 256u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 5u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[31] = (0x08A8A0CCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-21580));
    ctx.pc = 0x08B0BAD4u;
    return;
L_08A8A0CC:
    ctx.gpr[4] = (2232u << 16u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-18504), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A8A130;
      }
      goto L_08A8A0D8;
    }
L_08A8A0D8:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16636)));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (2217u << 16u);
    ctx.gpr[7] = (0u | 4096u);
    ctx.gpr[8] = (0u | 16384u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-21528));
    ctx.gpr[31] = (0x08A8A100u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-23304));
    ctx.pc = 0x08B0BB64u;
    return;
L_08A8A100:
    ctx.gpr[4] = (2232u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-18528), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08A8A14C;
      }
      goto L_08A8A114;
    }
L_08A8A114:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-21508));
    ctx.gpr[31] = (0x08A8A128u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21592));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 375u, 0x08AF99BCu>(ctx, &aot_mem) && ctx.pc == 0x08A8A128u) goto L_08A8A128;
    return;
L_08A8A128:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8A158;
      }
      goto L_08A8A130;
    }
L_08A8A130:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-21568));
    ctx.gpr[31] = (0x08A8A144u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21592));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 375u, 0x08AF99BCu>(ctx, &aot_mem) && ctx.pc == 0x08A8A144u) goto L_08A8A144;
    return;
L_08A8A144:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8A158;
      }
      goto L_08A8A14C;
    }
L_08A8A14C:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A8A158u);
    ctx.gpr[6] = (0u | 0u);
    ctx.pc = 0x08B0BB1Cu;
    return;
L_08A8A158:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8A178:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (2232u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-18536), 0u);
    ctx.gpr[16] = (2232u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A8A19Cu);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-18532), ctx.gpr[4]);
    ctx.pc = 0x08B0BB2Cu;
    return;
L_08A8A19C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-18532)));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7032), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[31] = (0x08A8A1B8u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 654u, 0x08AA3104u>(ctx, &aot_mem) && ctx.pc == 0x08A8A1B8u) goto L_08A8A1B8;
    return;
L_08A8A1B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-18532)));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[17] = (2232u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-18508), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A8A1DCu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 376u, 0x08AED4ECu>(ctx, &aot_mem) && ctx.pc == 0x08A8A1DCu) goto L_08A8A1DC;
    return;
L_08A8A1DC:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-18508)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-21468));
    ctx.gpr[31] = (0x08A8A1F4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21592));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 375u, 0x08AF99BCu>(ctx, &aot_mem) && ctx.pc == 0x08A8A1F4u) goto L_08A8A1F4;
    return;
L_08A8A1F4:
    ctx.gpr[31] = (0x08A8A1FCu);
    // nop
    goto L_08A89FD0;
L_08A8A1FC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8A210:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[9] = (ctx.gpr[7] | 0u);
    ctx.gpr[10] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (2232u << 16u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-18508)));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[7] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[7]);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[10] + ctx.gpr[9]);
    ctx.gpr[7] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(24344), ctx.gpr[6]);
    ctx.gpr[6] = (2232u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-18500)));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[10] | 0u);
    { const bool branch_taken = ctx.gpr[11] != 0u;
    ctx.gpr[4] = (ctx.gpr[9] | 0u);
      if (branch_taken) {
          goto L_08A8A278;
      }
      goto L_08A8A26C;
    }
L_08A8A26C:
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(14))))));
    { const bool branch_taken = ctx.gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8A280;
      }
      goto L_08A8A278;
    }
L_08A8A278:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A8A2BC;
      }
      goto L_08A8A280;
    }
L_08A8A280:
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(16), 0u);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(13), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-18524));
    ctx.gpr[31] = (0x08A8A2A4u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    goto L_08A8A428;
L_08A8A2A4:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-18504)));
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[31] = (0x08A8A2B8u);
    ctx.gpr[5] = (0u | 1u);
    ctx.pc = 0x08B0BB54u;
    return;
L_08A8A2B8:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    goto L_08A8A2BC;
L_08A8A2BC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8A2CC:
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-18508)));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(14))))));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A8A320;
      }
      goto L_08A8A2F0;
    }
L_08A8A2F0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A8A318;
      }
      goto L_08A8A2FC;
    }
L_08A8A2FC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8A328;
      }
      goto L_08A8A308;
    }
L_08A8A308:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8A32C;
      }
      goto L_08A8A318;
    }
L_08A8A318:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 250u);
      if (branch_taken) {
          goto L_08A8A32C;
      }
      goto L_08A8A320;
    }
L_08A8A320:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 255u);
      if (branch_taken) {
          goto L_08A8A32C;
      }
      goto L_08A8A328;
    }
L_08A8A328:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A8A32C;
L_08A8A32C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8A334:
    ctx.gpr[4] = (2229u << 16u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24344)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8A340:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-18508)));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8A3A4;
      }
      goto L_08A8A37C;
    }
L_08A8A37C:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(13), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x08A8A38Cu);
    // nop
    ctx.pc = 0x08B0BB2Cu;
    return;
L_08A8A38C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7032)));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A8A3B0;
      }
      goto L_08A8A39C;
    }
L_08A8A39C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8A3F4;
      }
      goto L_08A8A3A4;
    }
L_08A8A3A4:
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(14), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08A8A40C;
      }
      goto L_08A8A3B0;
    }
L_08A8A3B0:
    ctx.gpr[16] = (32770u << 16u);
    ctx.gpr[18] = (0u | 1000u);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(424));
    goto L_08A8A3C0;
L_08A8A3C0:
    ctx.gpr[31] = (0x08A8A3C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 585u, 0x08AB350Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8A3C8u) goto L_08A8A3C8;
    return;
L_08A8A3C8:
    ctx.gpr[31] = (0x08A8A3D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 278u, 0x089C1448u>(ctx, &aot_mem) && ctx.pc == 0x08A8A3D0u) goto L_08A8A3D0;
    return;
L_08A8A3D0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08A8A3E4u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.pc = 0x08B0BB94u;
    return;
L_08A8A3E4:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08A8A3C0;
      }
      goto L_08A8A3EC;
    }
L_08A8A3EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8A404;
      }
      goto L_08A8A3F4;
    }
L_08A8A3F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08A8A404u);
    ctx.gpr[6] = (0u | 0u);
    ctx.pc = 0x08B0BB94u;
    return;
L_08A8A404:
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(14), static_cast<std::uint8_t>(0u));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    goto L_08A8A40C;
L_08A8A40C:
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
L_08A8A428:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[6]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[6] = (ctx.hi);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08A8A474;
      }
      goto L_08A8A468;
    }
L_08A8A468:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08A8A474u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-21448));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 375u, 0x08AF99BCu>(ctx, &aot_mem) && ctx.pc == 0x08A8A474u) goto L_08A8A474;
    return;
L_08A8A474:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8A480:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A8A498;
      }
      goto L_08A8A490;
    }
L_08A8A490:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A8A4A8;
      }
      goto L_08A8A498;
    }
L_08A8A498:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[2] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08A8A4A8;
L_08A8A4A8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8A4B0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    if (ctx.gpr[5] != ctx.gpr[6]) {
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
        goto L_08A8A4DC;
    }
    goto L_08A8A4C8;
L_08A8A4C8:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08A8A4D4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-21432));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 375u, 0x08AF99BCu>(ctx, &aot_mem) && ctx.pc == 0x08A8A4D4u) goto L_08A8A4D4;
    return;
L_08A8A4D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8A4EC;
      }
      goto L_08A8A4DC;
    }
L_08A8A4DC:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[6]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[5] = (ctx.hi);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    goto L_08A8A4EC;
L_08A8A4EC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8A4F8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A8A514u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-21416));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 375u, 0x08AF99BCu>(ctx, &aot_mem) && ctx.pc == 0x08A8A514u) goto L_08A8A514;
    return;
L_08A8A514:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-18504)));
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08A8A52Cu);
    ctx.gpr[6] = (0u | 0u);
    ctx.pc = 0x08B0BB94u;
    return;
L_08A8A52C:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[31] = (0x08A8A538u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-18524));
    goto L_08A8A480;
L_08A8A538:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-18508)));
    ctx.gpr[4] = (ctx.gpr[2] << 5u);
    ctx.gpr[5] = (ctx.gpr[2] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(14), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A8A6C4;
      }
      goto L_08A8A560;
    }
L_08A8A560:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27588)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08A8A580;
      }
      goto L_08A8A570;
    }
L_08A8A570:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27588)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A8A58C;
      }
      goto L_08A8A580;
    }
L_08A8A580:
    ctx.gpr[31] = (0x08A8A588u);
    // nop
    ctx.pc = 0x08B0BB44u;
    return;
L_08A8A588:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    goto L_08A8A58C;
L_08A8A58C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (0u | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A8A65C;
      }
      goto L_08A8A59C;
    }
L_08A8A59C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] << 11u);
    ctx.gpr[5] = (0u + ctx.gpr[5]);
    ctx.gpr[31] = (0x08A8A5B4u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 440u, 0x08AC7074u>(ctx, &aot_mem) && ctx.pc == 0x08A8A5B4u) goto L_08A8A5B4;
    return;
L_08A8A5B4:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27588)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08A8A5D4;
      }
      goto L_08A8A5C4;
    }
L_08A8A5C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27588)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A8A5E0;
      }
      goto L_08A8A5D4;
    }
L_08A8A5D4:
    ctx.gpr[31] = (0x08A8A5DCu);
    // nop
    ctx.pc = 0x08B0BB44u;
    return;
L_08A8A5DC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    goto L_08A8A5E0;
L_08A8A5E0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[6] << 11u);
    ctx.gpr[31] = (0x08A8A5FCu);
    ctx.gpr[6] = (0u + ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 452u, 0x08AC716Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8A5FCu) goto L_08A8A5FC;
    return;
L_08A8A5FC:
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08A8A624;
      }
      goto L_08A8A60C;
    }
L_08A8A60C:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08A8A61Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-21388));
    goto L_08A89FA4;
L_08A8A61C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08A8A654;
      }
      goto L_08A8A624;
    }
L_08A8A624:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[6] << 11u);
    ctx.gpr[6] = (0u + ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A8A654;
      }
      goto L_08A8A638;
    }
L_08A8A638:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-21348));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] << 11u);
    ctx.gpr[31] = (0x08A8A650u);
    ctx.gpr[5] = (0u + ctx.gpr[5]);
    goto L_08A89FA4;
L_08A8A650:
    ctx.gpr[5] = (0u | 0u);
    goto L_08A8A654;
L_08A8A654:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8A59C;
      }
      goto L_08A8A65C;
    }
L_08A8A65C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27588)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08A8A67C;
      }
      goto L_08A8A66C;
    }
L_08A8A66C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27588)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A8A688;
      }
      goto L_08A8A67C;
    }
L_08A8A67C:
    ctx.gpr[31] = (0x08A8A684u);
    // nop
    ctx.pc = 0x08B0BB44u;
    return;
L_08A8A684:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    goto L_08A8A688;
L_08A8A688:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[16] = (ctx.gpr[4] - ctx.gpr[16]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27588)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A8A6B4;
      }
      goto L_08A8A6A0;
    }
L_08A8A6A0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08A8A6B4u);
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.pc = 0x08B0BAECu;
    return;
L_08A8A6B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] << 11u);
    ctx.gpr[31] = (0x08A8A6C4u);
    ctx.gpr[4] = (0u + ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 77u, 0x08A289E8u>(ctx, &aot_mem) && ctx.pc == 0x08A8A6C4u) goto L_08A8A6C4;
    return;
L_08A8A6C4:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[31] = (0x08A8A6D0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-18524));
    goto L_08A8A4B0;
L_08A8A6D0:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(13))))));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8A6EC;
      }
      goto L_08A8A6E0;
    }
L_08A8A6E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (0x08A8A6ECu);
    ctx.gpr[5] = (0u | 1u);
    ctx.pc = 0x08B0BB54u;
    return;
L_08A8A6EC:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(14), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8A514;
      }
      goto L_08A8A6F8;
    }
L_08A8A6F8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8A70C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), 0u);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(-21008));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A8A748u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21300));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 800u, 0x08AFB6BCu>(ctx, &aot_mem) && ctx.pc == 0x08A8A748u) goto L_08A8A748;
    return;
L_08A8A748:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A8A754u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 800u, 0x08AFB6BCu>(ctx, &aot_mem) && ctx.pc == 0x08A8A754u) goto L_08A8A754;
    return;
L_08A8A754:
    ctx.gpr[31] = (0x08A8A75Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 432u, 0x08AC6FE4u>(ctx, &aot_mem) && ctx.pc == 0x08A8A75Cu) goto L_08A8A75C;
    return;
L_08A8A75C:
    ctx.gpr[18] = (2232u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-18536)));
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-18500));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 6u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-18728));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[31] = (0x08A8A790u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 411u, 0x08AED6BCu>(ctx, &aot_mem) && ctx.pc == 0x08A8A790u) goto L_08A8A790;
    return;
L_08A8A790:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-18536)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-18536), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A8A7B4;
      }
      goto L_08A8A7A4;
    }
L_08A8A7A4:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[31] = (0x08A8A7B4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5696));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 730u, 0x08AA367Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8A7B4u) goto L_08A8A7B4;
    return;
L_08A8A7B4:
    ctx.gpr[2] = (0u | 1u);
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
L_08A8A7D0:
    ctx.gpr[5] = (2229u << 16u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(24344), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8A7DC:
    ctx.gpr[5] = (2230u << 16u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7792), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8A7E8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    ctx.gpr[20] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-7792)));
    ctx.gpr[7] = (ctx.gpr[4] << 5u);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(28)));
    goto L_08A8A828;
L_08A8A828:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[18] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A8A8C8;
      }
      goto L_08A8A838;
    }
L_08A8A838:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-7792)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(24)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[8]);
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[7]);
    goto L_08A8A8A8;
L_08A8A8A8:
    ctx.gpr[5] = (0u | 4u);
    ctx.gpr[31] = (0x08A8A8B4u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 123u, 0x089C8A24u>(ctx, &aot_mem) && ctx.pc == 0x08A8A8B4u) goto L_08A8A8B4;
    return;
L_08A8A8B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(28)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[18] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A8A838;
      }
      goto L_08A8A8C8;
    }
L_08A8A8C8:
    ctx.gpr[31] = (0x08A8A8D0u);
    // nop
    goto L_08A8AC00;
L_08A8A8D0:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(32));
    ctx.gpr[5] = (0u | 4u);
    ctx.gpr[31] = (0x08A8A8ECu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 123u, 0x089C8A24u>(ctx, &aot_mem) && ctx.pc == 0x08A8A8ECu) goto L_08A8A8EC;
    return;
L_08A8A8EC:
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
L_08A8A90C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-7792)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-7792)));
    ctx.gpr[6] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[8] = (ctx.gpr[4] << 5u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[8] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-7792)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[7] << 5u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[7]);
      if (branch_taken) {
          goto L_08A8A9E8;
      }
      goto L_08A8A978;
    }
L_08A8A978:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8A9E0;
      }
      goto L_08A8A990;
    }
L_08A8A990:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[31] = (0x08A8A9B0u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 269u, 0x08A5970Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8A9B0u) goto L_08A8A9B0;
    return;
L_08A8A9B0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-7792)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A8A990;
      }
      goto L_08A8A9E0;
    }
L_08A8A9E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8AA84;
      }
      goto L_08A8A9E8;
    }
L_08A8A9E8:
    ctx.gpr[17] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(32), 0u);
        goto L_08A8AA68;
    }
    goto L_08A8A9F8;
L_08A8A9F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[18] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8AA48;
      }
      goto L_08A8AA0C;
    }
L_08A8AA0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    goto L_08A8AA10;
L_08A8AA10:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-7792)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[31] = (0x08A8AA34u);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 131u, 0x089C8AF4u>(ctx, &aot_mem) && ctx.pc == 0x08A8AA34u) goto L_08A8AA34;
    return;
L_08A8AA34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[18] < ctx.gpr[4] ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
        goto L_08A8AA10;
    }
    goto L_08A8AA48;
L_08A8AA48:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x08A8AA54u);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 131u, 0x089C8AF4u>(ctx, &aot_mem) && ctx.pc == 0x08A8AA54u) goto L_08A8AA54;
    return;
L_08A8AA54:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (0x08A8AA64u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26512));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 730u, 0x08AA367Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8AA64u) goto L_08A8AA64;
    return;
L_08A8AA64:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(32), 0u);
    goto L_08A8AA68;
L_08A8AA68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-7792)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    goto L_08A8AA84;
L_08A8AA84:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(0u));
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
L_08A8AAA0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-7792)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21264));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A8AAE4u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 375u, 0x08AF99BCu>(ctx, &aot_mem) && ctx.pc == 0x08A8AAE4u) goto L_08A8AAE4;
    return;
L_08A8AAE4:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[18] = (0u | 0u);
    goto L_08A8AAEC;
L_08A8AAEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-7792)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08A8AB0C;
      }
      goto L_08A8AB04;
    }
L_08A8AB04:
    ctx.gpr[31] = (0x08A8AB0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 483u, 0x0883A25Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8AB0Cu) goto L_08A8AB0C;
    return;
L_08A8AB0C:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 84 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(20));
      if (branch_taken) {
          goto L_08A8AAEC;
      }
      goto L_08A8AB1C;
    }
L_08A8AB1C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8AB94;
      }
      goto L_08A8AB28;
    }
L_08A8AB28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[18] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8AB78;
      }
      goto L_08A8AB3C;
    }
L_08A8AB3C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    goto L_08A8AB40;
L_08A8AB40:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-7792)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[31] = (0x08A8AB64u);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 131u, 0x089C8AF4u>(ctx, &aot_mem) && ctx.pc == 0x08A8AB64u) goto L_08A8AB64;
    return;
L_08A8AB64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[18] < ctx.gpr[4] ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
        goto L_08A8AB40;
    }
    goto L_08A8AB78;
L_08A8AB78:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x08A8AB84u);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 131u, 0x089C8AF4u>(ctx, &aot_mem) && ctx.pc == 0x08A8AB84u) goto L_08A8AB84;
    return;
L_08A8AB84:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (0x08A8AB94u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26512));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 730u, 0x08AA367Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8AB94u) goto L_08A8AB94;
    return;
L_08A8AB94:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(22), static_cast<std::uint16_t>(0u));
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
L_08A8ABBC:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(27768)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8ABEC;
      }
      goto L_08A8ABD4;
    }
L_08A8ABD4:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(48))))));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A8ABF4;
      }
      goto L_08A8ABE0;
    }
L_08A8ABE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A8ABD4;
      }
      goto L_08A8ABEC;
    }
L_08A8ABEC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A8ABF8;
      }
      goto L_08A8ABF4;
    }
L_08A8ABF4:
    ctx.gpr[2] = (0u | 1u);
    goto L_08A8ABF8;
L_08A8ABF8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8AC00:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[18]);
    ctx.gpr[18] = (2227u << 16u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(32564));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[31]);
    ctx.gpr[23] = (2211u << 16u);
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(-5740));
    ctx.gpr[20] = (2230u << 16u);
    ctx.gpr[30] = (2229u << 16u);
    goto L_08A8AC4C;
L_08A8AC4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-7792)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[22]);
    ctx.gpr[31] = (0x08A8AC64u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    goto L_08A8B1C4;
L_08A8AC64:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8AC7C;
      }
      goto L_08A8AC70;
    }
L_08A8AC70:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A8AC84;
      }
      goto L_08A8AC7C;
    }
L_08A8AC7C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8ADD0;
      }
      goto L_08A8AC84;
    }
L_08A8AC84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-7792)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8ACA4;
      }
      goto L_08A8AC9C;
    }
L_08A8AC9C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8ADD0;
      }
      goto L_08A8ACA4;
    }
L_08A8ACA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7872)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08A8ACCC;
      }
      goto L_08A8ACBC;
    }
L_08A8ACBC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08A8ACCC;
L_08A8ACCC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08A8ACE4u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A8ACE4u) goto L_08A8ACE4;
    return;
L_08A8ACE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08A8ACFCu);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A8ACFCu) goto L_08A8ACFC;
    return;
L_08A8ACFC:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A8AD08u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 304u, 0x088656A0u>(ctx, &aot_mem) && ctx.pc == 0x08A8AD08u) goto L_08A8AD08;
    return;
L_08A8AD08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-7792)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-7792)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.gpr[31] = (0x08A8AD40u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 473u, 0x0883A14Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8AD40u) goto L_08A8AD40;
    return;
L_08A8AD40:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-7792)));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[17] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_08A8ADA8;
      }
      goto L_08A8AD60;
    }
L_08A8AD60:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[23]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.gpr[23] = (ctx.gpr[5] + ctx.gpr[16]);
    ctx.gpr[31] = (0x08A8AD74u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 515u, 0x0883A428u>(ctx, &aot_mem) && ctx.pc == 0x08A8AD74u) goto L_08A8AD74;
    return;
L_08A8AD74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-7792)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(8));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[17] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A8AD60;
      }
      goto L_08A8ADA8;
    }
L_08A8ADA8:
    ctx.gpr[31] = (0x08A8ADB0u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 226u, 0x08A4CED8u>(ctx, &aot_mem) && ctx.pc == 0x08A8ADB0u) goto L_08A8ADB0;
    return;
L_08A8ADB0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8ADC8;
      }
      goto L_08A8ADB8;
    }
L_08A8ADB8:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A8ADC8u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0168_entry, 168u, 201u, 0x08AA4FD4u>(ctx, &aot_mem) && ctx.pc == 0x08A8ADC8u) goto L_08A8ADC8;
    return;
L_08A8ADC8:
    ctx.gpr[31] = (0x08A8ADD0u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0168_entry, 168u, 195u, 0x08AA4F70u>(ctx, &aot_mem) && ctx.pc == 0x08A8ADD0u) goto L_08A8ADD0;
    return;
L_08A8ADD0:
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(20));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[22]) < 84 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(24));
      if (branch_taken) {
          goto L_08A8AC4C;
      }
      goto L_08A8ADE4;
    }
L_08A8ADE4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8AE14:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (ctx.gpr[4] << 4u);
    ctx.gpr[7] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-7792)));
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A8AE3Cu);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 516u, 0x0883A448u>(ctx, &aot_mem) && ctx.pc == 0x08A8AE3Cu) goto L_08A8AE3C;
    return;
L_08A8AE3C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8AE48:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (ctx.gpr[4] << 4u);
    ctx.gpr[7] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-7792)));
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A8AE70u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 515u, 0x0883A428u>(ctx, &aot_mem) && ctx.pc == 0x08A8AE70u) goto L_08A8AE70;
    return;
L_08A8AE70:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8AE7C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A8AE9Cu);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    goto L_08A8AE14;
L_08A8AE9C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27768)));
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[5] & 32u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A8AF3C;
      }
      goto L_08A8AEC8;
    }
L_08A8AEC8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8AF04;
      }
      goto L_08A8AED4;
    }
L_08A8AED4:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[6] & 32u);
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8AEF8;
      }
      goto L_08A8AEF0;
    }
L_08A8AEF0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8AF04;
      }
      goto L_08A8AEF8;
    }
L_08A8AEF8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A8AED4;
      }
      goto L_08A8AF04;
    }
L_08A8AF04:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8AF28;
      }
      goto L_08A8AF0C;
    }
L_08A8AF0C:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08A8AF18u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 41u, 0x088B4364u>(ctx, &aot_mem) && ctx.pc == 0x08A8AF18u) goto L_08A8AF18;
    return;
L_08A8AF18:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A8AF34;
      }
      goto L_08A8AF28;
    }
L_08A8AF28:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[31] = (0x08A8AF34u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 45u, 0x088B43BCu>(ctx, &aot_mem) && ctx.pc == 0x08A8AF34u) goto L_08A8AF34;
    return;
L_08A8AF34:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8AF48;
      }
      goto L_08A8AF3C;
    }
L_08A8AF3C:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[31] = (0x08A8AF48u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 45u, 0x088B43BCu>(ctx, &aot_mem) && ctx.pc == 0x08A8AF48u) goto L_08A8AF48;
    return;
L_08A8AF48:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(64), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8AF64;
      }
      goto L_08A8AF5C;
    }
L_08A8AF5C:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08A8AF64;
L_08A8AF64:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
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
L_08A8AF88:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27768)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[23]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[21]);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A8AFECu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_08A8AE48;
L_08A8AFEC:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.gpr[22] = (ctx.gpr[5] & 32u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[22] = (0u < ctx.gpr[22] ? 1u : 0u);
    ctx.gpr[31] = (0x08A8B004u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_08A8AE48;
L_08A8B004:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[23] = (ctx.gpr[4] & 16u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[23] = (0u < ctx.gpr[23] ? 1u : 0u);
      if (branch_taken) {
          goto L_08A8B0DC;
      }
      goto L_08A8B01C;
    }
L_08A8B01C:
    ctx.gpr[5] = (49024u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    goto L_08A8B028;
L_08A8B028:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A8B04C;
      }
      goto L_08A8B030;
    }
L_08A8B030:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[6] & 32u);
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8B04C;
      }
      goto L_08A8B048;
    }
L_08A8B048:
    ctx.gpr[21] = (ctx.gpr[4] | 0u);
    goto L_08A8B04C;
L_08A8B04C:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(48))))));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08A8B060;
      }
      goto L_08A8B058;
    }
L_08A8B058:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A8B0D0;
      }
      goto L_08A8B060;
    }
L_08A8B060:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (ctx.gpr[6] & 16u);
    ctx.gpr[7] = (0u < ctx.gpr[7] ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[23];
    // nop
      if (branch_taken) {
          goto L_08A8B0D0;
      }
      goto L_08A8B078;
    }
L_08A8B078:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A8B0BC;
      }
      goto L_08A8B08C;
    }
L_08A8B08C:
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(36)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A8B0B0;
      }
      goto L_08A8B0A8;
    }
L_08A8B0A8:
    { const bool branch_taken = ctx.gpr[23] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A8B0C4;
      }
      goto L_08A8B0B0;
    }
L_08A8B0B0:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08A8B0C4;
      }
      goto L_08A8B0BC;
    }
L_08A8B0BC:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    goto L_08A8B0C4;
L_08A8B0C4:
    ctx.gpr[6] = (ctx.gpr[6] | 4u);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[19] = (0u | 1u);
    goto L_08A8B0D0;
L_08A8B0D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A8B028;
      }
      goto L_08A8B0DC;
    }
L_08A8B0DC:
    if (ctx.gpr[20] != 0u) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
        goto L_08A8B128;
    }
    goto L_08A8B0E4;
L_08A8B0E4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A8B0F8u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    goto L_08A8B41C;
L_08A8B0F8:
    ctx.gpr[4] = (ctx.gpr[19] | ctx.gpr[23]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08A8B114;
      }
      goto L_08A8B104;
    }
L_08A8B104:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A8B170;
      }
      goto L_08A8B114;
    }
L_08A8B114:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[2] = (ctx.gpr[20] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A8B174;
      }
      goto L_08A8B128;
    }
L_08A8B128:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A8B170;
      }
      goto L_08A8B148;
    }
L_08A8B148:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(40)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A8B170;
      }
      goto L_08A8B164;
    }
L_08A8B164:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[31] = (0x08A8B170u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 45u, 0x088B43BCu>(ctx, &aot_mem) && ctx.pc == 0x08A8B170u) goto L_08A8B170;
    return;
L_08A8B170:
    ctx.gpr[2] = (ctx.gpr[20] | 0u);
    goto L_08A8B174;
L_08A8B174:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8B1A4:
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32564));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8B1C4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-7792)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08A8B23C;
      }
      goto L_08A8B1FC;
    }
L_08A8B1FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A8B20Cu);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 379u, 0x08AED520u>(ctx, &aot_mem) && ctx.pc == 0x08A8B20Cu) goto L_08A8B20C;
    return;
L_08A8B20C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-7792)));
      if (branch_taken) {
          goto L_08A8B230;
      }
      goto L_08A8B214;
    }
L_08A8B214:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(36));
      if (branch_taken) {
          goto L_08A8B1FC;
      }
      goto L_08A8B228;
    }
L_08A8B228:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8B23C;
      }
      goto L_08A8B230;
    }
L_08A8B230:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[17]);
      if (branch_taken) {
          goto L_08A8B240;
      }
      goto L_08A8B23C;
    }
L_08A8B23C:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A8B240;
L_08A8B240:
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
L_08A8B25C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A8B26Cu);
    // nop
    goto L_08A8B1C4;
L_08A8B26C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_08A8B280;
      }
      goto L_08A8B278;
    }
L_08A8B278:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A8B298;
      }
      goto L_08A8B280;
    }
L_08A8B280:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7792)));
    ctx.gpr[6] = (0u | 36u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[6]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[2] = (ctx.lo);
    goto L_08A8B298;
L_08A8B298:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8B2A4:
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-7792)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(22))))));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(22), static_cast<std::uint16_t>(ctx.gpr[5]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8B2D0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[6] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-7792)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(22))))));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(22), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(22))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A8B314;
      }
      goto L_08A8B30C;
    }
L_08A8B30C:
    ctx.gpr[31] = (0x08A8B314u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(6115));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 469u, 0x089C6068u>(ctx, &aot_mem) && ctx.pc == 0x08A8B314u) goto L_08A8B314;
    return;
L_08A8B314:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8B320:
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-7792)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(22))))));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(22), static_cast<std::uint16_t>(ctx.gpr[5]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8B34C:
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-7792)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(22))))));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8B370:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7792)));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8B3FC;
      }
      goto L_08A8B3C4;
    }
L_08A8B3C4:
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x08A8B3D0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 379u, 0x08AED520u>(ctx, &aot_mem) && ctx.pc == 0x08A8B3D0u) goto L_08A8B3D0;
    return;
L_08A8B3D0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8B3F4;
      }
      goto L_08A8B3D8;
    }
L_08A8B3D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(36));
      if (branch_taken) {
          goto L_08A8B3C4;
      }
      goto L_08A8B3EC;
    }
L_08A8B3EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8B3FC;
      }
      goto L_08A8B3F4;
    }
L_08A8B3F4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_08A8B400;
      }
      goto L_08A8B3FC;
    }
L_08A8B3FC:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A8B400;
L_08A8B400:
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
L_08A8B41C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A8B444u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    goto L_08A8AE14;
L_08A8B444:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27768)));
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[5] & 32u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8B498;
      }
      goto L_08A8B470;
    }
L_08A8B470:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8B498;
      }
      goto L_08A8B478;
    }
L_08A8B478:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A8B484u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 41u, 0x088B4364u>(ctx, &aot_mem) && ctx.pc == 0x08A8B484u) goto L_08A8B484;
    return;
L_08A8B484:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A8B4A8;
      }
      goto L_08A8B498;
    }
L_08A8B498:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[31] = (0x08A8B4A4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 45u, 0x088B43BCu>(ctx, &aot_mem) && ctx.pc == 0x08A8B4A4u) goto L_08A8B4A4;
    return;
L_08A8B4A4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_08A8B4A8;
L_08A8B4A8:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8B4B8;
      }
      goto L_08A8B4B0;
    }
L_08A8B4B0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[18]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_08A8B4B8;
L_08A8B4B8:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(64), static_cast<std::uint8_t>(ctx.gpr[4]));
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
L_08A8B4E8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-704));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(684), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(640), ctx.gpr[6]);
    ctx.gpr[23] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(656), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(660), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(664), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(668), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(672), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(676), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(680), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(688), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(692), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A8B528u);
    ctx.gpr[6] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 551u, 0x088730F4u>(ctx, &aot_mem) && ctx.pc == 0x08A8B528u) goto L_08A8B528;
    return;
L_08A8B528:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[16] = (0u + static_cast<std::uint32_t>(-4));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(3));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A8B54Cu);
    ctx.gpr[6] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 551u, 0x088730F4u>(ctx, &aot_mem) && ctx.pc == 0x08A8B54Cu) goto L_08A8B54C;
    return;
L_08A8B54C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(3));
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[16]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[6]);
    ctx.gpr[31] = (0x08A8B568u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 551u, 0x088730F4u>(ctx, &aot_mem) && ctx.pc == 0x08A8B568u) goto L_08A8B568;
    return;
L_08A8B568:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.gpr[31] = (0x08A8B574u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A8B1C4;
L_08A8B574:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.gpr[18] = (2230u << 16u);
      if (branch_taken) {
          goto L_08A8B5D0;
      }
      goto L_08A8B580;
    }
L_08A8B580:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-7792)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[6] << 5u);
    ctx.gpr[7] = (ctx.gpr[6] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A8B5B8u);
    ctx.gpr[6] = (0u | 20u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 548u, 0x08AEDF40u>(ctx, &aot_mem) && ctx.pc == 0x08A8B5B8u) goto L_08A8B5B8;
    return;
L_08A8B5B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-7792)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A8B5F0;
      }
      goto L_08A8B5D0;
    }
L_08A8B5D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A8B5F0;
      }
      goto L_08A8B5DC;
    }
L_08A8B5DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-7792)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    goto L_08A8B5F0;
L_08A8B5F0:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(644), ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A8B604u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-21240));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 375u, 0x08AF99BCu>(ctx, &aot_mem) && ctx.pc == 0x08A8B604u) goto L_08A8B604;
    return;
L_08A8B604:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(32), 0u);
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(636), ctx.gpr[5]);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(632), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08A8BDA8;
      }
      goto L_08A8B630;
    }
L_08A8B630:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-21192));
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(624), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21184));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-21176));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(620), ctx.gpr[5]);
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(616), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21168));
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(612), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-21160));
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(608), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21220));
    ctx.gpr[4] = (2199u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(628), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(17492));
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(320));
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(432));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(528));
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(560));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(648), ctx.gpr[4]);
    goto L_08A8B690;
L_08A8B690:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A8B6A0u);
    ctx.gpr[6] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 551u, 0x088730F4u>(ctx, &aot_mem) && ctx.pc == 0x08A8B6A0u) goto L_08A8B6A0;
    return;
L_08A8B6A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-4));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(3));
    ctx.gpr[6] = (ctx.gpr[4] & ctx.gpr[6]);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A8B6C4u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 551u, 0x088730F4u>(ctx, &aot_mem) && ctx.pc == 0x08A8B6C4u) goto L_08A8B6C4;
    return;
L_08A8B6C4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(636)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7792)));
    ctx.gpr[6] = (ctx.gpr[5] << 5u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[17] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(596), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A8B6F4u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 271u, 0x08A59728u>(ctx, &aot_mem) && ctx.pc == 0x08A8B6F4u) goto L_08A8B6F4;
    return;
L_08A8B6F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(640)));
    ctx.gpr[19] = (0u | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(636), ctx.gpr[17]);
      if (branch_taken) {
          goto L_08A8B754;
      }
      goto L_08A8B704;
    }
L_08A8B704:
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_08A8B754;
      }
      goto L_08A8B714;
    }
L_08A8B714:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(596)));
    ctx.gpr[16] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    goto L_08A8B720;
L_08A8B720:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A8B72Cu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 379u, 0x08AED520u>(ctx, &aot_mem) && ctx.pc == 0x08A8B72Cu) goto L_08A8B72C;
    return;
L_08A8B72C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A8B744;
      }
      goto L_08A8B734;
    }
L_08A8B734:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(628)));
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[31] = (0x08A8B744u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 375u, 0x08AF99BCu>(ctx, &aot_mem) && ctx.pc == 0x08A8B744u) goto L_08A8B744;
    return;
L_08A8B744:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08A8B720;
      }
      goto L_08A8B754;
    }
L_08A8B754:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A8B764u);
    ctx.gpr[6] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 551u, 0x088730F4u>(ctx, &aot_mem) && ctx.pc == 0x08A8B764u) goto L_08A8B764;
    return;
L_08A8B764:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[16] = (0u + static_cast<std::uint32_t>(-4));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(3));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A8B788u);
    ctx.gpr[6] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 551u, 0x088730F4u>(ctx, &aot_mem) && ctx.pc == 0x08A8B788u) goto L_08A8B788;
    return;
L_08A8B788:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(3));
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[6]);
    ctx.gpr[31] = (0x08A8B7A4u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 551u, 0x088730F4u>(ctx, &aot_mem) && ctx.pc == 0x08A8B7A4u) goto L_08A8B7A4;
    return;
L_08A8B7A4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(596)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(600), ctx.gpr[16]);
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(28), static_cast<std::uint16_t>(ctx.gpr[16]));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(648)));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A8B7C8u);
    ctx.gpr[6] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 341u, 0x08AF5A1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8B7C8u) goto L_08A8B7C8;
    return;
L_08A8B7C8:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(588), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A8BD74;
      }
      goto L_08A8B7DC;
    }
L_08A8B7DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(596)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(586), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(592), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(604), ctx.gpr[4]);
    goto L_08A8B7F4;
L_08A8B7F4:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A8B808u);
    ctx.gpr[6] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 551u, 0x088730F4u>(ctx, &aot_mem) && ctx.pc == 0x08A8B808u) goto L_08A8B808;
    return;
L_08A8B808:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[16] = (0u + static_cast<std::uint32_t>(-4));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(3));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A8B82Cu);
    ctx.gpr[6] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 551u, 0x088730F4u>(ctx, &aot_mem) && ctx.pc == 0x08A8B82Cu) goto L_08A8B82C;
    return;
L_08A8B82C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(3));
    ctx.gpr[6] = (ctx.gpr[4] & ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A8B84Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 551u, 0x088730F4u>(ctx, &aot_mem) && ctx.pc == 0x08A8B84Cu) goto L_08A8B84C;
    return;
L_08A8B84C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(596)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(592)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[16] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[31] = (0x08A8B868u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 89u, 0x089744E0u>(ctx, &aot_mem) && ctx.pc == 0x08A8B868u) goto L_08A8B868;
    return;
L_08A8B868:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (0u | 44u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[19] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(586)));
      if (branch_taken) {
          goto L_08A8B884;
      }
      goto L_08A8B878;
    }
L_08A8B878:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (0x08A8B884u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 100u, 0x089745C4u>(ctx, &aot_mem) && ctx.pc == 0x08A8B884u) goto L_08A8B884;
    return;
L_08A8B884:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A8B898;
      }
      goto L_08A8B890;
    }
L_08A8B890:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(586), static_cast<std::uint8_t>(ctx.gpr[19]));
      if (branch_taken) {
          goto L_08A8BD50;
      }
      goto L_08A8B898;
    }
L_08A8B898:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(585), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(584), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A8B8B8u);
    ctx.gpr[6] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 551u, 0x088730F4u>(ctx, &aot_mem) && ctx.pc == 0x08A8B8B8u) goto L_08A8B8B8;
    return;
L_08A8B8B8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(624)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A8B8C8u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 538u, 0x08AEDEDCu>(ctx, &aot_mem) && ctx.pc == 0x08A8B8C8u) goto L_08A8B8C8;
    return;
L_08A8B8C8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A8B8F8;
      }
      goto L_08A8B8D0;
    }
L_08A8B8D0:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(586), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(585), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08A8B8F0u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 91u, 0x0897450Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8B8F0u) goto L_08A8B8F0;
    return;
L_08A8B8F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8B96C;
      }
      goto L_08A8B8F8;
    }
L_08A8B8F8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(620)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A8B908u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 538u, 0x08AEDEDCu>(ctx, &aot_mem) && ctx.pc == 0x08A8B908u) goto L_08A8B908;
    return;
L_08A8B908:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A8B938;
      }
      goto L_08A8B910;
    }
L_08A8B910:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(586), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(584), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08A8B930u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 91u, 0x0897450Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8B930u) goto L_08A8B930;
    return;
L_08A8B930:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8B96C;
      }
      goto L_08A8B938;
    }
L_08A8B938:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(616)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(586), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A8B94Cu);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 538u, 0x08AEDEDCu>(ctx, &aot_mem) && ctx.pc == 0x08A8B94Cu) goto L_08A8B94C;
    return;
L_08A8B94C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A8B96C;
      }
      goto L_08A8B954;
    }
L_08A8B954:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(586), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A8B96Cu);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 91u, 0x0897450Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8B96Cu) goto L_08A8B96C;
    return;
L_08A8B96C:
    ctx.gpr[31] = (0x08A8B974u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(612)));
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 410u, 0x08986604u>(ctx, &aot_mem) && ctx.pc == 0x08A8B974u) goto L_08A8B974;
    return;
L_08A8B974:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A8B98C;
      }
      goto L_08A8B980;
    }
L_08A8B980:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(608)));
    ctx.gpr[31] = (0x08A8B98Cu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(604)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 375u, 0x08AF99BCu>(ctx, &aot_mem) && ctx.pc == 0x08A8B98Cu) goto L_08A8B98C;
    return;
L_08A8B98C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2))))));
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08A8BD50;
      }
      goto L_08A8B9A0;
    }
L_08A8B9A0:
    ctx.gpr[17] = (0u | 0u);
    goto L_08A8B9A4;
L_08A8B9A4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(585)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8BB00;
      }
      goto L_08A8B9B0;
    }
L_08A8B9B0:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08A8B9C0u);
    ctx.gpr[6] = (0u | 44u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 551u, 0x088730F4u>(ctx, &aot_mem) && ctx.pc == 0x08A8B9C0u) goto L_08A8B9C0;
    return;
L_08A8B9C0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(8)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(304), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(308), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(312), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(316), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(304));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(368));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(368)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(368), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(372)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(372), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(376)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(376), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
        goto L_08A8BA38;
    }
    goto L_08A8BA2C;
L_08A8BA2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
      if (branch_taken) {
          goto L_08A8BA3C;
      }
      goto L_08A8BA38;
    }
L_08A8BA38:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    goto L_08A8BA3C;
L_08A8BA3C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(652), ctx.gpr[30]);
    ctx.gpr[30] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(384));
    ctx.gpr[31] = (0x08A8BA50u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(368));
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 23u, 0x08B081ECu>(ctx, &aot_mem) && ctx.pc == 0x08A8BA50u) goto L_08A8BA50;
    return;
L_08A8BA50:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store16(ctx.gpr[30] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(2)));
    aot_mem.aot_store16(ctx.gpr[30] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store16(ctx.gpr[30] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(6)));
    aot_mem.aot_store16(ctx.gpr[30] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(336)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(400), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(340)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(404), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(344)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(408), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[4]);
    { float vfpu_value[4]{};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    ctx.execute_vfpu_vf2h(64u, 0u, 2u);
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<64u>());
    aot_mem.aot_store16(ctx.gpr[30] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(404)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[4]);
    { float vfpu_value[4]{};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    ctx.execute_vfpu_vf2h(64u, 0u, 2u);
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<64u>());
    aot_mem.aot_store16(ctx.gpr[30] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[4]);
    { float vfpu_value[4]{};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    ctx.execute_vfpu_vf2h(64u, 0u, 2u);
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<64u>());
    aot_mem.aot_store16(ctx.gpr[30] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(360)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[4]);
    { float vfpu_value[4]{};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    ctx.execute_vfpu_vf2h(64u, 0u, 2u);
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<64u>());
    aot_mem.aot_store16(ctx.gpr[30] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(652)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8BD38;
      }
      goto L_08A8BB00;
    }
L_08A8BB00:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(584)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8BC5C;
      }
      goto L_08A8BB0C;
    }
L_08A8BB0C:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08A8BB1Cu);
    ctx.gpr[6] = (0u | 32u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 551u, 0x088730F4u>(ctx, &aot_mem) && ctx.pc == 0x08A8BB1Cu) goto L_08A8BB1C;
    return;
L_08A8BB1C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(416), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(420), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(424), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(428), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(416));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(464));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(464)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(464), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(468)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(468), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(472)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(472), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
        goto L_08A8BB94;
    }
    goto L_08A8BB88;
L_08A8BB88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
      if (branch_taken) {
          goto L_08A8BB98;
      }
      goto L_08A8BB94;
    }
L_08A8BB94:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    goto L_08A8BB98;
L_08A8BB98:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(652), ctx.gpr[30]);
    ctx.gpr[30] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(480));
    ctx.gpr[31] = (0x08A8BBACu);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(464));
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 23u, 0x08B081ECu>(ctx, &aot_mem) && ctx.pc == 0x08A8BBACu) goto L_08A8BBAC;
    return;
L_08A8BBAC:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store16(ctx.gpr[30] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(2)));
    aot_mem.aot_store16(ctx.gpr[30] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store16(ctx.gpr[30] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(6)));
    aot_mem.aot_store16(ctx.gpr[30] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(448)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(496), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(452)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(500), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(456)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(504), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[4]);
    { float vfpu_value[4]{};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    ctx.execute_vfpu_vf2h(64u, 0u, 2u);
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<64u>());
    aot_mem.aot_store16(ctx.gpr[30] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(500)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[4]);
    { float vfpu_value[4]{};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    ctx.execute_vfpu_vf2h(64u, 0u, 2u);
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<64u>());
    aot_mem.aot_store16(ctx.gpr[30] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(504)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[4]);
    { float vfpu_value[4]{};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    ctx.execute_vfpu_vf2h(64u, 0u, 2u);
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<64u>());
    aot_mem.aot_store16(ctx.gpr[30] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(460)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[4]);
    { float vfpu_value[4]{};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    ctx.execute_vfpu_vf2h(64u, 0u, 2u);
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<64u>());
    aot_mem.aot_store16(ctx.gpr[30] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(652)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8BD38;
      }
      goto L_08A8BC5C;
    }
L_08A8BC5C:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A8BC6Cu);
    ctx.gpr[6] = (0u | 20u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 551u, 0x088730F4u>(ctx, &aot_mem) && ctx.pc == 0x08A8BC6Cu) goto L_08A8BC6C;
    return;
L_08A8BC6C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(512), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(516), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(520), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(524), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(512));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(560)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(560), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(564)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(564), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(568)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(568), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
        goto L_08A8BCE0;
    }
    goto L_08A8BCD4;
L_08A8BCD4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
      if (branch_taken) {
          goto L_08A8BCE4;
      }
      goto L_08A8BCE0;
    }
L_08A8BCE0:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    goto L_08A8BCE4;
L_08A8BCE4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(652), ctx.gpr[20]);
    ctx.gpr[20] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(576));
    ctx.gpr[31] = (0x08A8BCF8u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 23u, 0x08B081ECu>(ctx, &aot_mem) && ctx.pc == 0x08A8BCF8u) goto L_08A8BCF8;
    return;
L_08A8BCF8:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store16(ctx.gpr[20] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(2)));
    aot_mem.aot_store16(ctx.gpr[20] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store16(ctx.gpr[20] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(6)));
    aot_mem.aot_store16(ctx.gpr[20] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(544)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[4]);
    { float vfpu_value[4]{};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    ctx.execute_vfpu_vf2h(64u, 0u, 2u);
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<64u>());
    aot_mem.aot_store16(ctx.gpr[20] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(652)));
    goto L_08A8BD38;
L_08A8BD38:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2))))));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(10));
      if (branch_taken) {
          goto L_08A8B9A4;
      }
      goto L_08A8BD50;
    }
L_08A8BD50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(588)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(592)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(588), ctx.gpr[4]);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(592), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A8B7F4;
      }
      goto L_08A8BD74;
    }
L_08A8BD74:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(596)));
    ctx.gpr[31] = (0x08A8BD80u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 300u, 0x08A599C0u>(ctx, &aot_mem) && ctx.pc == 0x08A8BD80u) goto L_08A8BD80;
    return;
L_08A8BD80:
    ctx.gpr[31] = (0x08A8BD88u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 277u, 0x08A59804u>(ctx, &aot_mem) && ctx.pc == 0x08A8BD88u) goto L_08A8BD88;
    return;
L_08A8BD88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(632)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(644)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(632), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A8B690;
      }
      goto L_08A8BDA8;
    }
L_08A8BDA8:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7792)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(636)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8BDCC;
      }
      goto L_08A8BDC4;
    }
L_08A8BDC4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7792)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    goto L_08A8BDCC;
L_08A8BDCC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(656)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(660)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(664)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(668)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(672)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(676)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(680)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(684)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(688)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(692)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(704));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8BDFC:
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
L_08A8BE28:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8BE4C;
      }
      goto L_08A8BE40;
    }
L_08A8BE40:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A8BE54;
      }
      goto L_08A8BE4C;
    }
L_08A8BE4C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A8BE80;
      }
      goto L_08A8BE54;
    }
L_08A8BE54:
    ctx.gpr[31] = (0x08A8BE5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 169u, 0x08AC8DC8u>(ctx, &aot_mem) && ctx.pc == 0x08A8BE5Cu) goto L_08A8BE5C;
    return;
L_08A8BE5C:
    ctx.gpr[31] = (0x08A8BE64u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 224u, 0x08A5D7E4u>(ctx, &aot_mem) && ctx.pc == 0x08A8BE64u) goto L_08A8BE64;
    return;
L_08A8BE64:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A8BE70u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 184u, 0x08AC8ED4u>(ctx, &aot_mem) && ctx.pc == 0x08A8BE70u) goto L_08A8BE70;
    return;
L_08A8BE70:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A8BE7Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 91u, 0x089C8788u>(ctx, &aot_mem) && ctx.pc == 0x08A8BE7Cu) goto L_08A8BE7C;
    return;
L_08A8BE7C:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    goto L_08A8BE80;
L_08A8BE80:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8BE90:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A8BEB8;
      }
      goto L_08A8BEAC;
    }
L_08A8BEAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A8BEC0;
      }
      goto L_08A8BEB8;
    }
L_08A8BEB8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A8BF70;
      }
      goto L_08A8BEC0;
    }
L_08A8BEC0:
    ctx.gpr[31] = (0x08A8BEC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 169u, 0x08AC8DC8u>(ctx, &aot_mem) && ctx.pc == 0x08A8BEC8u) goto L_08A8BEC8;
    return;
L_08A8BEC8:
    ctx.gpr[31] = (0x08A8BED0u);
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 224u, 0x08A5D7E4u>(ctx, &aot_mem) && ctx.pc == 0x08A8BED0u) goto L_08A8BED0;
    return;
L_08A8BED0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[2] + static_cast<std::uint32_t>(16));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(20), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(28), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(32), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(40), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(44), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(52), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(56), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(60), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A8BF60u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 184u, 0x08AC8ED4u>(ctx, &aot_mem) && ctx.pc == 0x08A8BF60u) goto L_08A8BF60;
    return;
L_08A8BF60:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A8BF6Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 91u, 0x089C8788u>(ctx, &aot_mem) && ctx.pc == 0x08A8BF6Cu) goto L_08A8BF6C;
    return;
L_08A8BF6C:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    goto L_08A8BF70;
L_08A8BF70:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8BF84:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A8BFC4;
      }
      goto L_08A8BFA4;
    }
L_08A8BFA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A8BFCC;
      }
      goto L_08A8BFB0;
    }
L_08A8BFB0:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08A8BFBCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-21128));
    goto L_08A8BDFC;
L_08A8BFBC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 9u, 0x08A8C07Cu>(ctx, &aot_mem); return;
      }
      goto L_08A8BFC4;
    }
L_08A8BFC4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 9u, 0x08A8C07Cu>(ctx, &aot_mem); return;
      }
      goto L_08A8BFCC;
    }
L_08A8BFCC:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(36));
    ctx.gpr[31] = (0x08A8BFD8u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 131u, 0x089C8AF4u>(ctx, &aot_mem) && ctx.pc == 0x08A8BFD8u) goto L_08A8BFD8;
    return;
L_08A8BFD8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[18] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 2u, 0x08A8C014u>(ctx, &aot_mem); return;
      }
      goto L_08A8BFEC;
    }
L_08A8BFEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[31] = (0x08A8C000u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    (void)rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 109u, 0x089C890Cu>(ctx, &aot_mem);
    return;
}

void recomp_unit_0161(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0161_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_161(Runtime &runtime) {
    runtime.register_generated_unit(161u, 0x08A88000u, 16384u, &recomp_unit_0161, &recomp_unit_0161_entry);
    runtime.register_function(0x08A88000u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88018u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88020u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8802Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88040u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88048u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88058u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8806Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88084u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88098u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A880ACu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A880BCu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A880C8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A880D4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A880F0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88108u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88110u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88114u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8811Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88120u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8812Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88140u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88148u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88158u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88164u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88170u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8817Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88184u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88194u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A881ACu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A881ECu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A881F8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8820Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88214u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8821Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88224u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8822Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88238u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88244u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88250u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88270u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A882ACu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A882B4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A882C8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88348u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88354u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8835Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88370u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A883F0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A883F8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88408u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8840Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8841Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88424u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88430u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88438u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8844Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88454u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8845Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88464u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88474u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88478u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88488u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88490u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A884A0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A884B0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A884C0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A884D0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A884DCu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A884ECu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88500u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8850Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88514u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8851Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88524u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88534u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8853Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88550u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8855Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88564u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88570u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88578u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88588u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88590u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A885A4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A885ACu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A885B8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A885C0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A885C8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A885D4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A885D8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88608u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88630u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88644u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88658u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88664u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88678u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88694u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A886ACu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A886DCu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A886F8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88704u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88708u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88710u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8871Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88720u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88738u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A887BCu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A887C8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A887D0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A887E0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A887F8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88810u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88824u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8882Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88850u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88864u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A888B4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A888C8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A888D0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A888E8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A888ECu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A888F8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88930u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88938u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88940u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88948u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88978u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88994u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8899Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A889C0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A889E8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88A54u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88A68u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88A70u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88ACCu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88AD8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88AE0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88AE4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88AECu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88AFCu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88B0Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88B4Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88B68u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88BACu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88BB8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88BC4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88BF8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88C14u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88C28u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88CFCu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88D08u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88D0Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88D14u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88D28u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88D30u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88D50u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88D58u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88D78u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88D80u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88D84u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88D98u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88DA0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88DB0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88DC8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88DD4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88DF4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88E34u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88E4Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88E6Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88EBCu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88F00u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88F0Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88F14u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88F1Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88F28u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88F40u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88F4Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88F70u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88F90u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88FACu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88FE0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88FECu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88FF8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89010u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89054u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A890A8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A890C4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A890D0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A890DCu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A890E8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A891D4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A891DCu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89230u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89240u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8925Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89260u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A892B4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A892DCu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A892F8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89320u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89328u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89354u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8935Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8937Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89390u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8939Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A893A4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A893A8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A893B0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A893B4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A893D0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A893DCu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A893E8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A893ECu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89408u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8942Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8943Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8944Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89474u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89480u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8948Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89494u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A894A8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A894B0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89564u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89614u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A897B4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A897ECu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A897FCu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89818u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89850u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89890u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89898u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A898A8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A898B0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A898B4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A898F0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8992Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89938u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89944u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8998Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A899F0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89A24u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89A34u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89A50u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89A60u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89A7Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89A84u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89A88u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89A98u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89AA8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89AB0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89AC0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89AC4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89AE0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89B08u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89B10u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89B14u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89B64u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89BECu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89C1Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89C30u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89C44u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89C4Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89C60u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89C74u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89C78u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89C9Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89CB0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89CC0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89CC8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89CCCu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89CE8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89D04u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89D0Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89D14u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89D8Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89D9Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89DA8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89DB8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89E00u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89E94u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89E9Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89EA4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89EACu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89EB4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89EC4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89ECCu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89EE4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89EE8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89EF0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89F00u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89F08u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89F20u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89F24u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89F2Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89FA4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89FD0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A004u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A010u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A028u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A038u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A04Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A054u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A068u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A070u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A080u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A098u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A0CCu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A0D8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A100u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A114u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A128u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A130u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A144u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A14Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A158u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A178u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A19Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A1B8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A1DCu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A1F4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A1FCu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A210u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A26Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A278u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A280u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A2A4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A2B8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A2BCu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A2CCu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A2F0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A2FCu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A308u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A318u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A320u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A328u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A32Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A334u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A340u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A37Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A38Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A39Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A3A4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A3B0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A3C0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A3C8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A3D0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A3E4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A3ECu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A3F4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A404u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A40Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A428u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A468u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A474u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A480u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A490u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A498u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A4A8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A4B0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A4C8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A4D4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A4DCu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A4ECu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A4F8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A514u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A52Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A538u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A560u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A570u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A580u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A588u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A58Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A59Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A5B4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A5C4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A5D4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A5DCu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A5E0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A5FCu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A60Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A61Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A624u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A638u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A650u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A654u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A65Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A66Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A67Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A684u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A688u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A6A0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A6B4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A6C4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A6D0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A6E0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A6ECu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A6F8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A70Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A748u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A754u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A75Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A790u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A7A4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A7B4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A7D0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A7DCu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A7E8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A828u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A838u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A8A8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A8B4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A8C8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A8D0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A8ECu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A90Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A978u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A990u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A9B0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A9E0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A9E8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A9F8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8AA0Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8AA10u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8AA34u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8AA48u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8AA54u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8AA64u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8AA68u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8AA84u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8AAA0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8AAE4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8AAECu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8AB04u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8AB0Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8AB1Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8AB28u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8AB3Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8AB40u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8AB64u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8AB78u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8AB84u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8AB94u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8ABBCu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8ABD4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8ABE0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8ABECu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8ABF4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8ABF8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8AC00u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8AC4Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8AC64u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8AC70u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8AC7Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8AC84u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8AC9Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8ACA4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8ACBCu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8ACCCu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8ACE4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8ACFCu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8AD08u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8AD40u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8AD60u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8AD74u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8ADA8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8ADB0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8ADB8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8ADC8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8ADD0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8ADE4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8AE14u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8AE3Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8AE48u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8AE70u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8AE7Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8AE9Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8AEC8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8AED4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8AEF0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8AEF8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8AF04u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8AF0Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8AF18u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8AF28u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8AF34u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8AF3Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8AF48u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8AF5Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8AF64u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8AF88u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8AFECu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B004u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B01Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B028u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B030u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B048u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B04Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B058u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B060u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B078u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B08Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B0A8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B0B0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B0BCu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B0C4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B0D0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B0DCu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B0E4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B0F8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B104u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B114u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B128u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B148u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B164u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B170u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B174u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B1A4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B1C4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B1FCu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B20Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B214u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B228u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B230u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B23Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B240u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B25Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B26Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B278u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B280u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B298u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B2A4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B2D0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B30Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B314u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B320u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B34Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B370u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B3C4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B3D0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B3D8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B3ECu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B3F4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B3FCu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B400u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B41Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B444u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B470u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B478u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B484u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B498u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B4A4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B4A8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B4B0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B4B8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B4E8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B528u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B54Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B568u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B574u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B580u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B5B8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B5D0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B5DCu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B5F0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B604u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B630u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B690u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B6A0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B6C4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B6F4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B704u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B714u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B720u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B72Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B734u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B744u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B754u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B764u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B788u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B7A4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B7C8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B7DCu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B7F4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B808u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B82Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B84Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B868u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B878u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B884u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B890u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B898u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B8B8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B8C8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B8D0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B8F0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B8F8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B908u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B910u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B930u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B938u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B94Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B954u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B96Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B974u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B980u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B98Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B9A0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B9A4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B9B0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B9C0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BA2Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BA38u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BA3Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BA50u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BB00u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BB0Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BB1Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BB88u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BB94u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BB98u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BBACu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BC5Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BC6Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BCD4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BCE0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BCE4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BCF8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BD38u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BD50u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BD74u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BD80u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BD88u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BDA8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BDC4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BDCCu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BDFCu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BE28u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BE40u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BE4Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BE54u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BE5Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BE64u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BE70u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BE7Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BE80u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BE90u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BEACu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BEB8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BEC0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BEC8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BED0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BF60u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BF6Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BF70u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BF84u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BFA4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BFB0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BFBCu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BFC4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BFCCu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BFD8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BFECu, &recomp_unit_0161, "recomp_unit_0161");
}
} // namespace psprecomp
