#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0096[4093] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 4, 0, 5, 6, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 9, 0, 0, 10, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 11, 0, 0, 12, 0, 0, 0, 0, 13, 0, 0, 0, 14, 0, 0, 0, 0, 15, 0, 16, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 17, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 20,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0,
    22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 23, 0, 0, 0, 0, 24, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 26, 0, 0, 0, 27, 0, 0, 0, 0, 28, 0, 0, 0, 0, 29, 0, 0, 0, 30, 0, 0, 0, 0, 31, 0, 32, 0,
    0, 0, 0, 33, 0, 34, 0, 35, 0, 0, 0, 36, 0, 0, 0, 0, 37, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 40,
    0, 0, 0, 41, 0, 0, 0, 42, 0, 0, 0, 43, 0, 0, 0, 0, 44, 0, 0, 0, 0, 45, 0, 0, 46, 0, 0, 0, 47, 0, 0, 0,
    0, 48, 0, 0, 0, 49, 0, 0, 0, 0, 50, 0, 0, 0, 51, 0, 0, 0, 0, 52, 0, 0, 0, 53, 0, 0, 0, 0, 54, 0, 0, 0,
    55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 57, 0, 0, 0, 0, 58, 0, 0, 0, 59, 0, 0, 60, 0,
    0, 0, 61, 0, 0, 0, 0, 62, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 65, 0, 0, 0, 0, 66,
    0, 0, 0, 67, 0, 0, 0, 0, 68, 0, 0, 69, 0, 0, 0, 0, 0, 70, 0, 0, 71, 0, 0, 72, 0, 0, 0, 73, 0, 0, 74, 0,
    0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 77, 0, 78,
    0, 79, 0, 80, 81, 0, 0, 82, 0, 0, 0, 83, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 86, 0, 87,
    0, 88, 0, 0, 0, 0, 0, 89, 0, 0, 90, 0, 0, 91, 0, 92, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 94, 0, 0, 95, 0,
    96, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 98, 0, 99, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0,
    0, 102, 0, 0, 0, 103, 0, 0, 0, 104, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0,
    108, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 112, 0, 113, 0, 114, 0, 0, 0, 115, 0, 0, 0, 0, 0, 116, 0, 0, 0, 117, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 122, 0, 0, 0, 123, 0, 0, 124, 0,
    0, 0, 0, 125, 0, 126, 0, 127, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 129, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 133, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 136, 0, 0,
    137, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 140, 0, 0, 0, 0,
    0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 142, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 145, 146,
    0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 148, 0, 149, 0, 0, 0, 150, 151, 0, 0, 152, 0, 0, 0, 153, 0, 154, 0, 0, 0, 0, 0,
    155, 0, 0, 0, 0, 0, 156, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 159, 0, 0, 0, 160, 0, 0, 161, 0, 0,
    162, 163, 0, 0, 0, 164, 0, 165, 0, 166, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 171, 0,
    0, 0, 0, 0, 0, 0, 0, 172, 0, 173, 0, 174, 0, 0, 0, 175, 0, 0, 0, 0, 176, 177, 0, 0, 0, 178, 0, 0, 0, 179, 0, 0,
    0, 180, 0, 181, 0, 0, 0, 182, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 186, 0,
    187, 0, 188, 189, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 191, 192, 0, 193, 0, 0, 0, 194, 0, 195, 0, 0, 0, 196, 0, 0, 0, 197,
    0, 0, 0, 0, 0, 0, 0, 198, 0, 199, 0, 0, 0, 200, 0, 0, 0, 0, 201, 0, 0, 202, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0,
    0, 204, 0, 0, 205, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 211, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0,
    213, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 216, 0, 217, 0, 0, 0, 0, 0, 0, 218,
    0, 0, 0, 219, 0, 220, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 222, 0, 0, 0, 223, 224, 0, 225, 0, 0, 0, 226, 0, 0, 227, 228,
    229, 0, 0, 0, 0, 0, 230, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 233, 0, 0, 0, 0, 234, 0, 235, 0,
    0, 0, 0, 236, 0, 237, 0, 0, 0, 238, 0, 0, 0, 0, 0, 239, 0, 240, 0, 0, 0, 241, 0, 242, 0, 0, 0, 243, 0, 0, 0, 0,
    0, 244, 245, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 247, 0, 248, 0, 0, 0, 0, 249, 0, 250, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 252, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 254, 0, 0, 255, 256, 0, 0, 0, 257,
    0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 263, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 265, 0, 0, 266, 0, 0, 0,
    267, 0, 0, 0, 268, 0, 269, 0, 270, 0, 0, 271, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 273, 0, 274, 0, 0, 0, 275, 0, 0,
    0, 276, 0, 0, 0, 277, 0, 0, 0, 278, 0, 279, 0, 280, 0, 0, 281, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0,
    284, 0, 0, 0, 0, 0, 285, 0, 0, 0, 286, 0, 0, 287, 0, 0, 288, 0, 0, 0, 289, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291,
    0, 0, 0, 0, 0, 0, 0, 292, 0, 293, 0, 0, 0, 0, 294, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 296, 0, 297, 0, 298, 0, 0, 0, 0, 0, 299, 0, 300, 0, 0, 0, 0, 301, 0, 302, 0, 0, 0, 0, 303, 0, 0,
    304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 306, 0, 307, 0, 0, 308, 0, 309, 0, 310, 0, 311, 0, 312,
    0, 0, 313, 0, 0, 314, 0, 315, 0, 316, 0, 0, 317, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 319, 0, 0, 0, 0, 320, 0, 0, 0,
    0, 321, 0, 322, 0, 323, 0, 324, 0, 325, 0, 326, 0, 327, 0, 0, 328, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 330, 0, 0, 0, 0,
    331, 0, 0, 0, 0, 332, 0, 333, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 336, 0, 0, 337, 0, 338, 0, 0, 0, 339,
    0, 0, 0, 0, 0, 0, 0, 0, 340, 0, 0, 341, 0, 342, 0, 343, 0, 344, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 346, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    349, 0, 0, 0, 0, 0, 0, 350, 0, 351, 0, 0, 352, 0, 353, 0, 354, 0, 355, 0, 356, 0, 0, 357, 0, 358, 0, 0, 0, 0, 0, 0,
    359, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 362, 0, 363, 0, 364, 0, 0, 365, 0, 0, 0, 366, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 368, 0, 369, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    371, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 0, 373, 0, 374, 0, 0, 0, 375, 0, 376, 0, 377, 0, 378,
    0, 379, 0, 0, 380, 0, 381, 0, 382, 0, 383, 0, 0, 0, 0, 0, 0, 384, 0, 0, 0, 0, 385, 0, 0, 0, 0, 386, 0, 0, 0, 0,
    387, 0, 388, 0, 389, 0, 0, 0, 0, 0, 0, 390, 0, 391, 0, 392, 0, 0, 393, 0, 0, 0, 394, 0, 0, 0, 395, 0, 0, 396, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 397, 0, 0, 0, 0, 0, 0, 0, 0, 0, 398, 0, 0, 0, 0, 0, 0, 399, 0, 400, 0, 0, 401, 0, 402,
    0, 0, 0, 0, 0, 0, 0, 0, 403, 0, 404, 0, 0, 0, 405, 0, 0, 0, 0, 0, 0, 406, 0, 0, 0, 0, 407, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 408, 0, 0, 409, 0, 0, 0,
    0, 410, 0, 0, 411, 0, 0, 0, 0, 412, 0, 0, 0, 0, 413, 0, 0, 0, 0, 0, 0, 0, 414, 0, 0, 0, 0, 0, 415, 0, 0, 0,
    416, 0, 417, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 418,
    0, 0, 0, 0, 0, 0, 0, 0, 419, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 420, 0, 0, 0, 0, 421, 0, 0, 0, 0, 0, 0, 422, 0, 0, 423, 0, 0, 0, 0, 424, 0, 0, 0, 0, 425, 0, 0, 426,
    0, 0, 0, 0, 0, 0, 427, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 428, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 429, 0, 0, 0, 0, 0, 0, 0, 0, 430, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 431, 0, 0, 0, 0, 432, 0, 0, 0, 0, 0, 433, 0, 0, 0, 0, 434, 0, 435,
    0, 0, 0, 0, 436, 0, 0, 0, 0, 437, 0, 438, 0, 0, 0, 0, 0, 0, 0, 0, 0, 439, 0, 0, 440, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 441, 0, 0, 442, 0, 443, 0, 0, 0, 0, 0, 0, 0, 0, 444, 445, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 446, 0, 0, 0, 447, 0, 448, 0, 0, 449, 0, 0, 450, 0, 451, 0, 452, 0, 453, 0, 0, 0,
    0, 0, 0, 0, 454, 0, 455, 0, 0, 456, 0, 457, 0, 0, 0, 0, 0, 458, 0, 0, 0, 459, 0, 460, 461, 0, 0, 0, 462, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 463, 0, 0, 0, 464, 0, 0, 465, 0, 0, 0, 0, 0, 0, 466, 0, 467, 0, 0, 468, 0, 0, 0, 0,
    0, 0, 469, 0, 0, 0, 470, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 471, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 472, 0,
    0, 473, 0, 474, 0, 0, 475, 0, 0, 476, 0, 0, 477, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 478, 0, 479, 0, 0, 480, 0, 0, 0,
    0, 0, 0, 0, 481, 0, 482, 0, 483, 0, 484, 0, 485, 0, 0, 0, 0, 0, 0, 0, 486, 0, 487, 0, 488, 0, 489, 0, 0, 0, 0, 490,
    0, 0, 0, 491, 0, 492, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 493, 0, 0, 0, 0, 0, 0, 0, 0, 494,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 495, 0, 0, 0, 0, 496,
    0, 497, 0, 0, 0, 498, 0, 0, 499, 0, 0, 500, 0, 501, 0, 0, 0, 502, 0, 0, 503, 0, 0, 504, 0, 505, 0, 0, 0, 0, 506, 0,
    507, 0, 508, 0, 0, 0, 509, 0, 0, 510, 0, 511, 0, 512, 0, 0, 0, 0, 0, 0, 0, 0, 513, 0, 514, 0, 515, 0, 516, 0, 517, 0,
    518, 0, 0, 0, 0, 0, 519, 0, 520, 0, 521, 0, 522, 0, 0, 523, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 524, 0, 0, 0, 0, 0, 0, 0, 525, 0, 0, 0, 0,
    526, 0, 0, 0, 527, 528, 0, 0, 0, 0, 0, 0, 529, 0, 530, 0, 0, 0, 531, 532, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 533, 0, 0, 534, 0, 0, 0, 535, 0, 0, 536, 537, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 538, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 539, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 540, 0, 0, 0, 0, 0, 0, 0, 0, 0, 541, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 542, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 543, 0, 0,
    0, 0, 0, 544, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 545, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 546, 0, 0, 0, 0, 0, 0, 547, 0, 548, 0, 549, 0, 0, 0, 0, 0, 0, 550, 0, 551, 0, 0, 0, 0, 0, 552, 0, 553, 0,
    554, 0, 0, 0, 0, 0, 0, 555, 0, 0, 556, 0, 0, 0, 0, 557, 0, 0, 558, 0, 559, 0, 0, 0, 0, 560, 0, 0, 0, 0, 0, 561,
    0, 0, 562, 0, 0, 0, 0, 0, 0, 0, 0, 563, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 564, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 565, 0,
    0, 0, 0, 0, 0, 0, 566, 0, 0, 0, 0, 567, 0, 0, 0, 568, 569, 0, 0, 0, 0, 0, 0, 570, 0, 571, 0, 0, 0, 572, 573, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 574, 0, 0, 575, 0, 0, 0, 576, 0, 0, 577, 578, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 579, 0, 0, 0, 0, 0, 0, 0, 0, 0, 580, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 581,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 582, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 583, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 584, 0, 0, 0, 0, 0, 585, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 586, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 587, 0, 0, 0, 0, 0, 0, 588, 0, 589, 0, 590, 0, 0, 0, 0, 0, 0, 591,
    0, 592, 0, 0, 0, 0, 0, 593, 0, 594, 0, 595, 0, 0, 0, 0, 0, 0, 596, 0, 0, 597, 0, 0, 0, 0, 598, 0, 0, 599, 0, 600,
    0, 0, 0, 0, 601, 0, 0, 0, 0, 0, 602, 0, 0, 603, 0, 0, 0, 0, 0, 0, 0, 0, 604, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 605, 0, 0, 0, 0, 0, 0, 606, 0, 607, 0, 0, 608, 0, 609, 0, 610, 0, 611, 0, 612, 0, 613, 0, 614, 0, 615,
    0, 0, 0, 0, 0, 0, 616, 0, 0, 617, 0, 618, 0, 619, 0, 620, 0, 621, 0, 0, 0, 0, 0, 0, 622, 0, 0, 623, 0, 624, 0, 625,
    0, 626, 0, 627, 0, 0, 0, 0, 0, 0, 628, 0, 0, 629, 0, 630, 0, 0, 0, 0, 0, 631, 0, 632, 0, 0, 0, 0, 0, 0, 633, 0,
    0, 634, 0, 0, 0, 635, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 636, 0, 0, 0, 0, 0, 0, 0,
    637, 0, 0, 0, 638, 0, 0, 0, 0, 0, 0, 0, 639, 0, 0, 640, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 641, 0, 642, 0, 0, 0, 0, 643, 644, 0, 0, 0, 645, 0, 0, 646, 0, 0, 647, 0, 648, 0, 0, 0, 0, 0, 649, 0, 0, 0, 0,
    0, 0, 650, 0, 0, 0, 0, 0, 651, 0, 0, 0, 0, 652, 0, 653, 0, 0, 0, 654, 0, 655, 0, 0, 0, 0, 0, 0, 0, 0, 656, 0,
    0, 0, 0, 0, 0, 0, 657, 0, 0, 0, 0, 658, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 659, 0, 0, 0, 660, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    661, 0, 0, 0, 662, 0, 663, 0, 664, 0, 0, 0, 0, 0, 0, 665, 0, 0, 0, 0, 0, 0, 666, 0, 667, 0, 0, 0, 0, 0, 668, 0,
    0, 0, 0, 0, 669, 0, 0, 0, 0, 0, 0, 0, 0, 670, 0, 0, 0, 0, 0, 671, 0, 0, 0, 0, 0, 0, 0, 0, 672, 0, 673, 0,
    0, 674, 0, 675, 0, 0, 0, 0, 676, 0, 0, 677, 0, 0, 0, 0, 0, 0, 0, 678, 0, 0, 0, 679, 0, 0, 0, 0, 680,
};
void recomp_unit_0096_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08984000u;
        entry_id = (entry_delta < 16372u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0096[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08984000;
    case 2u: goto L_08984030;
    case 3u: goto L_0898403C;
    case 4u: goto L_08984084;
    case 5u: goto L_0898408C;
    case 6u: goto L_08984090;
    case 7u: goto L_089840A8;
    case 8u: goto L_089840C8;
    case 9u: goto L_089840DC;
    case 10u: goto L_089840E8;
    case 11u: goto L_08984114;
    case 12u: goto L_08984120;
    case 13u: goto L_08984134;
    case 14u: goto L_08984144;
    case 15u: goto L_08984158;
    case 16u: goto L_08984160;
    case 17u: goto L_0898418C;
    case 18u: goto L_08984198;
    case 19u: goto L_08984270;
    case 20u: goto L_0898427C;
    case 21u: goto L_089842F4;
    case 22u: goto L_08984300;
    case 23u: goto L_0898438C;
    case 24u: goto L_089843A0;
    case 25u: goto L_089843AC;
    case 26u: goto L_08984414;
    case 27u: goto L_08984424;
    case 28u: goto L_08984438;
    case 29u: goto L_0898444C;
    case 30u: goto L_0898445C;
    case 31u: goto L_08984470;
    case 32u: goto L_08984478;
    case 33u: goto L_0898448C;
    case 34u: goto L_08984494;
    case 35u: goto L_0898449C;
    case 36u: goto L_089844AC;
    case 37u: goto L_089844C0;
    case 38u: goto L_089844CC;
    case 39u: goto L_089844EC;
    case 40u: goto L_089844FC;
    case 41u: goto L_0898450C;
    case 42u: goto L_0898451C;
    case 43u: goto L_0898452C;
    case 44u: goto L_08984540;
    case 45u: goto L_08984554;
    case 46u: goto L_08984560;
    case 47u: goto L_08984570;
    case 48u: goto L_08984584;
    case 49u: goto L_08984594;
    case 50u: goto L_089845A8;
    case 51u: goto L_089845B8;
    case 52u: goto L_089845CC;
    case 53u: goto L_089845DC;
    case 54u: goto L_089845F0;
    case 55u: goto L_08984600;
    case 56u: goto L_08984638;
    case 57u: goto L_08984648;
    case 58u: goto L_0898465C;
    case 59u: goto L_0898466C;
    case 60u: goto L_08984678;
    case 61u: goto L_08984688;
    case 62u: goto L_0898469C;
    case 63u: goto L_089846AC;
    case 64u: goto L_089846D8;
    case 65u: goto L_089846E8;
    case 66u: goto L_089846FC;
    case 67u: goto L_0898470C;
    case 68u: goto L_08984720;
    case 69u: goto L_0898472C;
    case 70u: goto L_08984744;
    case 71u: goto L_08984750;
    case 72u: goto L_0898475C;
    case 73u: goto L_0898476C;
    case 74u: goto L_08984778;
    case 75u: goto L_0898479C;
    case 76u: goto L_089847D8;
    case 77u: goto L_089847F4;
    case 78u: goto L_089847FC;
    case 79u: goto L_08984804;
    case 80u: goto L_0898480C;
    case 81u: goto L_08984810;
    case 82u: goto L_0898481C;
    case 83u: goto L_0898482C;
    case 84u: goto L_0898483C;
    case 85u: goto L_08984860;
    case 86u: goto L_08984874;
    case 87u: goto L_0898487C;
    case 88u: goto L_08984884;
    case 89u: goto L_0898489C;
    case 90u: goto L_089848A8;
    case 91u: goto L_089848B4;
    case 92u: goto L_089848BC;
    case 93u: goto L_089848DC;
    case 94u: goto L_089848EC;
    case 95u: goto L_089848F8;
    case 96u: goto L_08984900;
    case 97u: goto L_08984924;
    case 98u: goto L_08984938;
    case 99u: goto L_08984940;
    case 100u: goto L_0898494C;
    case 101u: goto L_08984970;
    case 102u: goto L_08984984;
    case 103u: goto L_08984994;
    case 104u: goto L_089849A4;
    case 105u: goto L_089849B4;
    case 106u: goto L_089849D0;
    case 107u: goto L_089849E8;
    case 108u: goto L_08984A00;
    case 109u: goto L_08984A1C;
    case 110u: goto L_08984A2C;
    case 111u: goto L_08984A98;
    case 112u: goto L_08984AAC;
    case 113u: goto L_08984AB4;
    case 114u: goto L_08984ABC;
    case 115u: goto L_08984ACC;
    case 116u: goto L_08984AE4;
    case 117u: goto L_08984AF4;
    case 118u: goto L_08984B38;
    case 119u: goto L_08984B4C;
    case 120u: goto L_08984B84;
    case 121u: goto L_08984BD0;
    case 122u: goto L_08984BDC;
    case 123u: goto L_08984BEC;
    case 124u: goto L_08984BF8;
    case 125u: goto L_08984C0C;
    case 126u: goto L_08984C14;
    case 127u: goto L_08984C1C;
    case 128u: goto L_08984C34;
    case 129u: goto L_08984C4C;
    case 130u: goto L_08984C5C;
    case 131u: goto L_08984D44;
    case 132u: goto L_08984D9C;
    case 133u: goto L_08984DB0;
    case 134u: goto L_08984DC0;
    case 135u: goto L_08984DDC;
    case 136u: goto L_08984DF4;
    case 137u: goto L_08984E00;
    case 138u: goto L_08984E18;
    case 139u: goto L_08984E60;
    case 140u: goto L_08984E6C;
    case 141u: goto L_08984E90;
    case 142u: goto L_08984EA8;
    case 143u: goto L_08984EB8;
    case 144u: goto L_08984EE4;
    case 145u: goto L_08984EF8;
    case 146u: goto L_08984EFC;
    case 147u: goto L_08984F1C;
    case 148u: goto L_08984F28;
    case 149u: goto L_08984F30;
    case 150u: goto L_08984F40;
    case 151u: goto L_08984F44;
    case 152u: goto L_08984F50;
    case 153u: goto L_08984F60;
    case 154u: goto L_08984F68;
    case 155u: goto L_08984F80;
    case 156u: goto L_08984F98;
    case 157u: goto L_08984FA0;
    case 158u: goto L_08984FC4;
    case 159u: goto L_08984FD8;
    case 160u: goto L_08984FE8;
    case 161u: goto L_08984FF4;
    case 162u: goto L_08985000;
    case 163u: goto L_08985004;
    case 164u: goto L_08985014;
    case 165u: goto L_0898501C;
    case 166u: goto L_08985024;
    case 167u: goto L_08985038;
    case 168u: goto L_08985064;
    case 169u: goto L_089850C8;
    case 170u: goto L_089850E4;
    case 171u: goto L_089850F8;
    case 172u: goto L_0898511C;
    case 173u: goto L_08985124;
    case 174u: goto L_0898512C;
    case 175u: goto L_0898513C;
    case 176u: goto L_08985150;
    case 177u: goto L_08985154;
    case 178u: goto L_08985164;
    case 179u: goto L_08985174;
    case 180u: goto L_08985184;
    case 181u: goto L_0898518C;
    case 182u: goto L_0898519C;
    case 183u: goto L_089851A4;
    case 184u: goto L_089851CC;
    case 185u: goto L_089851E4;
    case 186u: goto L_089851F8;
    case 187u: goto L_08985200;
    case 188u: goto L_08985208;
    case 189u: goto L_0898520C;
    case 190u: goto L_0898522C;
    case 191u: goto L_08985238;
    case 192u: goto L_0898523C;
    case 193u: goto L_08985244;
    case 194u: goto L_08985254;
    case 195u: goto L_0898525C;
    case 196u: goto L_0898526C;
    case 197u: goto L_0898527C;
    case 198u: goto L_0898529C;
    case 199u: goto L_089852A4;
    case 200u: goto L_089852B4;
    case 201u: goto L_089852C8;
    case 202u: goto L_089852D4;
    case 203u: goto L_089852F0;
    case 204u: goto L_08985304;
    case 205u: goto L_08985310;
    case 206u: goto L_0898531C;
    case 207u: goto L_08985354;
    case 208u: goto L_08985680;
    case 209u: goto L_089856B0;
    case 210u: goto L_089856DC;
    case 211u: goto L_089856F0;
    case 212u: goto L_08985774;
    case 213u: goto L_08985780;
    case 214u: goto L_089857A0;
    case 215u: goto L_089857C8;
    case 216u: goto L_089857D8;
    case 217u: goto L_089857E0;
    case 218u: goto L_089857FC;
    case 219u: goto L_0898580C;
    case 220u: goto L_08985814;
    case 221u: goto L_08985830;
    case 222u: goto L_08985840;
    case 223u: goto L_08985850;
    case 224u: goto L_08985854;
    case 225u: goto L_0898585C;
    case 226u: goto L_0898586C;
    case 227u: goto L_08985878;
    case 228u: goto L_0898587C;
    case 229u: goto L_08985880;
    case 230u: goto L_08985898;
    case 231u: goto L_089858A4;
    case 232u: goto L_089858D4;
    case 233u: goto L_089858DC;
    case 234u: goto L_089858F0;
    case 235u: goto L_089858F8;
    case 236u: goto L_0898590C;
    case 237u: goto L_08985914;
    case 238u: goto L_08985924;
    case 239u: goto L_0898593C;
    case 240u: goto L_08985944;
    case 241u: goto L_08985954;
    case 242u: goto L_0898595C;
    case 243u: goto L_0898596C;
    case 244u: goto L_08985984;
    case 245u: goto L_08985988;
    case 246u: goto L_089859A0;
    case 247u: goto L_089859C0;
    case 248u: goto L_089859C8;
    case 249u: goto L_089859DC;
    case 250u: goto L_089859E4;
    case 251u: goto L_08985A28;
    case 252u: goto L_08985A30;
    case 253u: goto L_08985A48;
    case 254u: goto L_08985A5C;
    case 255u: goto L_08985A68;
    case 256u: goto L_08985A6C;
    case 257u: goto L_08985A7C;
    case 258u: goto L_08985A8C;
    case 259u: goto L_08985AAC;
    case 260u: goto L_08985ABC;
    case 261u: goto L_08985AE4;
    case 262u: goto L_08985B30;
    case 263u: goto L_08985B38;
    case 264u: goto L_08985B50;
    case 265u: goto L_08985B64;
    case 266u: goto L_08985B70;
    case 267u: goto L_08985B80;
    case 268u: goto L_08985B90;
    case 269u: goto L_08985B98;
    case 270u: goto L_08985BA0;
    case 271u: goto L_08985BAC;
    case 272u: goto L_08985BC0;
    case 273u: goto L_08985BDC;
    case 274u: goto L_08985BE4;
    case 275u: goto L_08985BF4;
    case 276u: goto L_08985C04;
    case 277u: goto L_08985C14;
    case 278u: goto L_08985C24;
    case 279u: goto L_08985C2C;
    case 280u: goto L_08985C34;
    case 281u: goto L_08985C40;
    case 282u: goto L_08985C54;
    case 283u: goto L_08985C70;
    case 284u: goto L_08985C80;
    case 285u: goto L_08985C98;
    case 286u: goto L_08985CA8;
    case 287u: goto L_08985CB4;
    case 288u: goto L_08985CC0;
    case 289u: goto L_08985CD0;
    case 290u: goto L_08985CD4;
    case 291u: goto L_08985CFC;
    case 292u: goto L_08985D1C;
    case 293u: goto L_08985D24;
    case 294u: goto L_08985D38;
    case 295u: goto L_08985D40;
    case 296u: goto L_08985D94;
    case 297u: goto L_08985D9C;
    case 298u: goto L_08985DA4;
    case 299u: goto L_08985DBC;
    case 300u: goto L_08985DC4;
    case 301u: goto L_08985DD8;
    case 302u: goto L_08985DE0;
    case 303u: goto L_08985DF4;
    case 304u: goto L_08985E00;
    case 305u: goto L_08985E28;
    case 306u: goto L_08985E48;
    case 307u: goto L_08985E50;
    case 308u: goto L_08985E5C;
    case 309u: goto L_08985E64;
    case 310u: goto L_08985E6C;
    case 311u: goto L_08985E74;
    case 312u: goto L_08985E7C;
    case 313u: goto L_08985E88;
    case 314u: goto L_08985E94;
    case 315u: goto L_08985E9C;
    case 316u: goto L_08985EA4;
    case 317u: goto L_08985EB0;
    case 318u: goto L_08985EC8;
    case 319u: goto L_08985EDC;
    case 320u: goto L_08985EF0;
    case 321u: goto L_08985F04;
    case 322u: goto L_08985F0C;
    case 323u: goto L_08985F14;
    case 324u: goto L_08985F1C;
    case 325u: goto L_08985F24;
    case 326u: goto L_08985F2C;
    case 327u: goto L_08985F34;
    case 328u: goto L_08985F40;
    case 329u: goto L_08985F58;
    case 330u: goto L_08985F6C;
    case 331u: goto L_08985F80;
    case 332u: goto L_08985F94;
    case 333u: goto L_08985F9C;
    case 334u: goto L_08985FA4;
    case 335u: goto L_08985FCC;
    case 336u: goto L_08985FD8;
    case 337u: goto L_08985FE4;
    case 338u: goto L_08985FEC;
    case 339u: goto L_08985FFC;
    case 340u: goto L_08986020;
    case 341u: goto L_0898602C;
    case 342u: goto L_08986034;
    case 343u: goto L_0898603C;
    case 344u: goto L_08986044;
    case 345u: goto L_0898604C;
    case 346u: goto L_0898608C;
    case 347u: goto L_08986094;
    case 348u: goto L_089860B8;
    case 349u: goto L_08986100;
    case 350u: goto L_0898611C;
    case 351u: goto L_08986124;
    case 352u: goto L_08986130;
    case 353u: goto L_08986138;
    case 354u: goto L_08986140;
    case 355u: goto L_08986148;
    case 356u: goto L_08986150;
    case 357u: goto L_0898615C;
    case 358u: goto L_08986164;
    case 359u: goto L_08986180;
    case 360u: goto L_08986198;
    case 361u: goto L_089861B0;
    case 362u: goto L_089861C8;
    case 363u: goto L_089861D0;
    case 364u: goto L_089861D8;
    case 365u: goto L_089861E4;
    case 366u: goto L_089861F4;
    case 367u: goto L_08986228;
    case 368u: goto L_08986238;
    case 369u: goto L_08986240;
    case 370u: goto L_0898624C;
    case 371u: goto L_08986280;
    case 372u: goto L_089862B0;
    case 373u: goto L_089862CC;
    case 374u: goto L_089862D4;
    case 375u: goto L_089862E4;
    case 376u: goto L_089862EC;
    case 377u: goto L_089862F4;
    case 378u: goto L_089862FC;
    case 379u: goto L_08986304;
    case 380u: goto L_08986310;
    case 381u: goto L_08986318;
    case 382u: goto L_08986320;
    case 383u: goto L_08986328;
    case 384u: goto L_08986344;
    case 385u: goto L_08986358;
    case 386u: goto L_0898636C;
    case 387u: goto L_08986380;
    case 388u: goto L_08986388;
    case 389u: goto L_08986390;
    case 390u: goto L_089863AC;
    case 391u: goto L_089863B4;
    case 392u: goto L_089863BC;
    case 393u: goto L_089863C8;
    case 394u: goto L_089863D8;
    case 395u: goto L_089863E8;
    case 396u: goto L_089863F4;
    case 397u: goto L_0898641C;
    case 398u: goto L_08986444;
    case 399u: goto L_08986460;
    case 400u: goto L_08986468;
    case 401u: goto L_08986474;
    case 402u: goto L_0898647C;
    case 403u: goto L_089864A0;
    case 404u: goto L_089864A8;
    case 405u: goto L_089864B8;
    case 406u: goto L_089864D4;
    case 407u: goto L_089864E8;
    case 408u: goto L_089865E4;
    case 409u: goto L_089865F0;
    case 410u: goto L_08986604;
    case 411u: goto L_08986610;
    case 412u: goto L_08986624;
    case 413u: goto L_08986638;
    case 414u: goto L_08986658;
    case 415u: goto L_08986670;
    case 416u: goto L_08986680;
    case 417u: goto L_08986688;
    case 418u: goto L_089866FC;
    case 419u: goto L_08986720;
    case 420u: goto L_0898678C;
    case 421u: goto L_089867A0;
    case 422u: goto L_089867BC;
    case 423u: goto L_089867C8;
    case 424u: goto L_089867DC;
    case 425u: goto L_089867F0;
    case 426u: goto L_089867FC;
    case 427u: goto L_08986818;
    case 428u: goto L_08986958;
    case 429u: goto L_089869A4;
    case 430u: goto L_089869C8;
    case 431u: goto L_08986A34;
    case 432u: goto L_08986A48;
    case 433u: goto L_08986A60;
    case 434u: goto L_08986A74;
    case 435u: goto L_08986A7C;
    case 436u: goto L_08986A90;
    case 437u: goto L_08986AA4;
    case 438u: goto L_08986AAC;
    case 439u: goto L_08986AD4;
    case 440u: goto L_08986AE0;
    case 441u: goto L_08986B3C;
    case 442u: goto L_08986B48;
    case 443u: goto L_08986B50;
    case 444u: goto L_08986B74;
    case 445u: goto L_08986B78;
    case 446u: goto L_08986BA8;
    case 447u: goto L_08986BB8;
    case 448u: goto L_08986BC0;
    case 449u: goto L_08986BCC;
    case 450u: goto L_08986BD8;
    case 451u: goto L_08986BE0;
    case 452u: goto L_08986BE8;
    case 453u: goto L_08986BF0;
    case 454u: goto L_08986C10;
    case 455u: goto L_08986C18;
    case 456u: goto L_08986C24;
    case 457u: goto L_08986C2C;
    case 458u: goto L_08986C44;
    case 459u: goto L_08986C54;
    case 460u: goto L_08986C5C;
    case 461u: goto L_08986C60;
    case 462u: goto L_08986C70;
    case 463u: goto L_08986CA0;
    case 464u: goto L_08986CB0;
    case 465u: goto L_08986CBC;
    case 466u: goto L_08986CD8;
    case 467u: goto L_08986CE0;
    case 468u: goto L_08986CEC;
    case 469u: goto L_08986D08;
    case 470u: goto L_08986D18;
    case 471u: goto L_08986D44;
    case 472u: goto L_08986D78;
    case 473u: goto L_08986D84;
    case 474u: goto L_08986D8C;
    case 475u: goto L_08986D98;
    case 476u: goto L_08986DA4;
    case 477u: goto L_08986DB0;
    case 478u: goto L_08986DDC;
    case 479u: goto L_08986DE4;
    case 480u: goto L_08986DF0;
    case 481u: goto L_08986E10;
    case 482u: goto L_08986E18;
    case 483u: goto L_08986E20;
    case 484u: goto L_08986E28;
    case 485u: goto L_08986E30;
    case 486u: goto L_08986E50;
    case 487u: goto L_08986E58;
    case 488u: goto L_08986E60;
    case 489u: goto L_08986E68;
    case 490u: goto L_08986E7C;
    case 491u: goto L_08986E8C;
    case 492u: goto L_08986E94;
    case 493u: goto L_08986ED8;
    case 494u: goto L_08986EFC;
    case 495u: goto L_08986F68;
    case 496u: goto L_08986F7C;
    case 497u: goto L_08986F84;
    case 498u: goto L_08986F94;
    case 499u: goto L_08986FA0;
    case 500u: goto L_08986FAC;
    case 501u: goto L_08986FB4;
    case 502u: goto L_08986FC4;
    case 503u: goto L_08986FD0;
    case 504u: goto L_08986FDC;
    case 505u: goto L_08986FE4;
    case 506u: goto L_08986FF8;
    case 507u: goto L_08987000;
    case 508u: goto L_08987008;
    case 509u: goto L_08987018;
    case 510u: goto L_08987024;
    case 511u: goto L_0898702C;
    case 512u: goto L_08987034;
    case 513u: goto L_08987058;
    case 514u: goto L_08987060;
    case 515u: goto L_08987068;
    case 516u: goto L_08987070;
    case 517u: goto L_08987078;
    case 518u: goto L_08987080;
    case 519u: goto L_08987098;
    case 520u: goto L_089870A0;
    case 521u: goto L_089870A8;
    case 522u: goto L_089870B0;
    case 523u: goto L_089870BC;
    case 524u: goto L_0898714C;
    case 525u: goto L_0898716C;
    case 526u: goto L_08987180;
    case 527u: goto L_08987190;
    case 528u: goto L_08987194;
    case 529u: goto L_089871B0;
    case 530u: goto L_089871B8;
    case 531u: goto L_089871C8;
    case 532u: goto L_089871CC;
    case 533u: goto L_08987204;
    case 534u: goto L_08987210;
    case 535u: goto L_08987220;
    case 536u: goto L_0898722C;
    case 537u: goto L_08987230;
    case 538u: goto L_08987278;
    case 539u: goto L_089872A0;
    case 540u: goto L_089872D0;
    case 541u: goto L_089872F8;
    case 542u: goto L_08987344;
    case 543u: goto L_08987374;
    case 544u: goto L_0898738C;
    case 545u: goto L_089873D8;
    case 546u: goto L_08987408;
    case 547u: goto L_08987424;
    case 548u: goto L_0898742C;
    case 549u: goto L_08987434;
    case 550u: goto L_08987450;
    case 551u: goto L_08987458;
    case 552u: goto L_08987470;
    case 553u: goto L_08987478;
    case 554u: goto L_08987480;
    case 555u: goto L_0898749C;
    case 556u: goto L_089874A8;
    case 557u: goto L_089874BC;
    case 558u: goto L_089874C8;
    case 559u: goto L_089874D0;
    case 560u: goto L_089874E4;
    case 561u: goto L_089874FC;
    case 562u: goto L_08987508;
    case 563u: goto L_0898752C;
    case 564u: goto L_08987568;
    case 565u: goto L_089875F8;
    case 566u: goto L_08987618;
    case 567u: goto L_0898762C;
    case 568u: goto L_0898763C;
    case 569u: goto L_08987640;
    case 570u: goto L_0898765C;
    case 571u: goto L_08987664;
    case 572u: goto L_08987674;
    case 573u: goto L_08987678;
    case 574u: goto L_089876B0;
    case 575u: goto L_089876BC;
    case 576u: goto L_089876CC;
    case 577u: goto L_089876D8;
    case 578u: goto L_089876DC;
    case 579u: goto L_08987724;
    case 580u: goto L_0898774C;
    case 581u: goto L_0898777C;
    case 582u: goto L_089877A4;
    case 583u: goto L_089877F0;
    case 584u: goto L_08987820;
    case 585u: goto L_08987838;
    case 586u: goto L_08987884;
    case 587u: goto L_089878B4;
    case 588u: goto L_089878D0;
    case 589u: goto L_089878D8;
    case 590u: goto L_089878E0;
    case 591u: goto L_089878FC;
    case 592u: goto L_08987904;
    case 593u: goto L_0898791C;
    case 594u: goto L_08987924;
    case 595u: goto L_0898792C;
    case 596u: goto L_08987948;
    case 597u: goto L_08987954;
    case 598u: goto L_08987968;
    case 599u: goto L_08987974;
    case 600u: goto L_0898797C;
    case 601u: goto L_08987990;
    case 602u: goto L_089879A8;
    case 603u: goto L_089879B4;
    case 604u: goto L_089879D8;
    case 605u: goto L_08987A14;
    case 606u: goto L_08987A30;
    case 607u: goto L_08987A38;
    case 608u: goto L_08987A44;
    case 609u: goto L_08987A4C;
    case 610u: goto L_08987A54;
    case 611u: goto L_08987A5C;
    case 612u: goto L_08987A64;
    case 613u: goto L_08987A6C;
    case 614u: goto L_08987A74;
    case 615u: goto L_08987A7C;
    case 616u: goto L_08987A98;
    case 617u: goto L_08987AA4;
    case 618u: goto L_08987AAC;
    case 619u: goto L_08987AB4;
    case 620u: goto L_08987ABC;
    case 621u: goto L_08987AC4;
    case 622u: goto L_08987AE0;
    case 623u: goto L_08987AEC;
    case 624u: goto L_08987AF4;
    case 625u: goto L_08987AFC;
    case 626u: goto L_08987B04;
    case 627u: goto L_08987B0C;
    case 628u: goto L_08987B28;
    case 629u: goto L_08987B34;
    case 630u: goto L_08987B3C;
    case 631u: goto L_08987B54;
    case 632u: goto L_08987B5C;
    case 633u: goto L_08987B78;
    case 634u: goto L_08987B84;
    case 635u: goto L_08987B94;
    case 636u: goto L_08987BE0;
    case 637u: goto L_08987C00;
    case 638u: goto L_08987C10;
    case 639u: goto L_08987C30;
    case 640u: goto L_08987C3C;
    case 641u: goto L_08987C84;
    case 642u: goto L_08987C8C;
    case 643u: goto L_08987CA0;
    case 644u: goto L_08987CA4;
    case 645u: goto L_08987CB4;
    case 646u: goto L_08987CC0;
    case 647u: goto L_08987CCC;
    case 648u: goto L_08987CD4;
    case 649u: goto L_08987CEC;
    case 650u: goto L_08987D08;
    case 651u: goto L_08987D20;
    case 652u: goto L_08987D34;
    case 653u: goto L_08987D3C;
    case 654u: goto L_08987D4C;
    case 655u: goto L_08987D54;
    case 656u: goto L_08987D78;
    case 657u: goto L_08987D98;
    case 658u: goto L_08987DAC;
    case 659u: goto L_08987E28;
    case 660u: goto L_08987E38;
    case 661u: goto L_08987E80;
    case 662u: goto L_08987E90;
    case 663u: goto L_08987E98;
    case 664u: goto L_08987EA0;
    case 665u: goto L_08987EBC;
    case 666u: goto L_08987ED8;
    case 667u: goto L_08987EE0;
    case 668u: goto L_08987EF8;
    case 669u: goto L_08987F10;
    case 670u: goto L_08987F34;
    case 671u: goto L_08987F4C;
    case 672u: goto L_08987F70;
    case 673u: goto L_08987F78;
    case 674u: goto L_08987F84;
    case 675u: goto L_08987F8C;
    case 676u: goto L_08987FA0;
    case 677u: goto L_08987FAC;
    case 678u: goto L_08987FCC;
    case 679u: goto L_08987FDC;
    case 680u: goto L_08987FF0;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08984000:
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] << 8u);
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[6] = (ctx.gpr[6] << 16u);
    ctx.gpr[17] = (ctx.gpr[17] | ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[17] & 1u);
    ctx.gpr[18] = (ctx.gpr[17] & 2u);
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), ctx.gpr[19]);
      if (branch_taken) {
          goto L_089840DC;
      }
      goto L_08984030;
    }
L_08984030:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(112)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
        goto L_08984090;
    }
    goto L_0898403C;
L_0898403C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(112)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(40));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (ctx.gpr[7] << 8u);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[8]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08984084u);
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08984084u) goto L_08984084;
    return;
L_08984084:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089840A8;
      }
      goto L_0898408C;
    }
L_0898408C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    goto L_08984090;
L_08984090:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    goto L_089840A8;
L_089840A8:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 6u);
    aot_mem.aot_store8(ctx.gpr[30] + static_cast<std::uint32_t>(182), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(182)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089840DC;
      }
      goto L_089840C8;
    }
L_089840C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(210), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_089840DC;
L_089840DC:
    ctx.gpr[4] = (ctx.gpr[17] & 8192u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08984114;
      }
      goto L_089840E8;
    }
L_089840E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[30] + static_cast<std::uint32_t>(178), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_08984114;
L_08984114:
    ctx.gpr[4] = (ctx.gpr[17] & 4096u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08984134;
      }
      goto L_08984120;
    }
L_08984120:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[30] + static_cast<std::uint32_t>(180), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08984134;
L_08984134:
    ctx.gpr[4] = (1024u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] & ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08984158;
      }
      goto L_08984144;
    }
L_08984144:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[30] + static_cast<std::uint32_t>(181), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08984158;
L_08984158:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), ctx.gpr[18]);
      if (branch_taken) {
          goto L_0898418C;
      }
      goto L_08984160;
    }
L_08984160:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[30] + static_cast<std::uint32_t>(176), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_0898418C;
L_0898418C:
    ctx.gpr[4] = (ctx.gpr[17] & 4u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08984270;
      }
      goto L_08984198;
    }
L_08984198:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] << 8u);
    ctx.gpr[9] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[7] << 8u);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[6] | ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    ctx.gpr[9] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[7] << 8u);
    ctx.gpr[7] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[8] | ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (ctx.gpr[6] | ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    goto L_08984270;
L_08984270:
    ctx.gpr[4] = (ctx.gpr[17] & 8u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089842F4;
      }
      goto L_0898427C;
    }
L_0898427C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] << 8u);
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[5] = (ctx.gpr[5] << 8u);
    ctx.gpr[5] = (ctx.gpr[6] | ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    goto L_089842F4;
L_089842F4:
    ctx.gpr[4] = (ctx.gpr[17] & 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), ctx.gpr[16]);
      if (branch_taken) {
          goto L_089843A0;
      }
      goto L_08984300;
    }
L_08984300:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] << 8u);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[16] = (ctx.gpr[30] + static_cast<std::uint32_t>(16));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0898438Cu);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 492u, 0x08A05FFCu>(ctx, &aot_mem) && ctx.pc == 0x0898438Cu) goto L_0898438C;
    return;
L_0898438C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[31] = (0x089843A0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 515u, 0x08A06668u>(ctx, &aot_mem) && ctx.pc == 0x089843A0u) goto L_089843A0;
    return;
L_089843A0:
    ctx.gpr[4] = (ctx.gpr[17] & 32u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08984414;
      }
      goto L_089843AC;
    }
L_089843AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] << 8u);
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[5] = (ctx.gpr[5] << 8u);
    ctx.gpr[5] = (ctx.gpr[6] | ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(188), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08984414;
L_08984414:
    ctx.gpr[22] = (aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(214)));
    ctx.gpr[4] = (ctx.gpr[17] & 64u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), ctx.gpr[17]);
      if (branch_taken) {
          goto L_08984438;
      }
      goto L_08984424;
    }
L_08984424:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[30] + static_cast<std::uint32_t>(214), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08984438;
L_08984438:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(214)));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[17] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (2226u << 16u);
      if (branch_taken) {
          goto L_089844C0;
      }
      goto L_0898444C;
    }
L_0898444C:
    ctx.gpr[21] = (0u | 128u);
    ctx.gpr[20] = (0u | 255u);
    ctx.gpr[18] = (ctx.gpr[30] + static_cast<std::uint32_t>(216));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-23596));
    goto L_0898445C;
L_0898445C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    ctx.gpr[4] = (ctx.gpr[21] << (ctx.gpr[17] & 31u));
    ctx.gpr[5] = (ctx.gpr[17] < ctx.gpr[22] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] & ctx.gpr[4]);
      if (branch_taken) {
          goto L_08984494;
      }
      goto L_08984470;
    }
L_08984470:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898448C;
      }
      goto L_08984478;
    }
L_08984478:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_08984494;
      }
      goto L_0898448C;
    }
L_0898448C:
    ctx.gpr[31] = (0x08984494u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 668u, 0x0897F738u>(ctx, &aot_mem) && ctx.pc == 0x08984494u) goto L_08984494;
    return;
L_08984494:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089844AC;
      }
      goto L_0898449C;
    }
L_0898449C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    ctx.gpr[31] = (0x089844ACu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 207u, 0x08981278u>(ctx, &aot_mem) && ctx.pc == 0x089844ACu) goto L_089844AC;
    return;
L_089844AC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(214)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[17] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(24));
      if (branch_taken) {
          goto L_0898445C;
      }
      goto L_089844C0;
    }
L_089844C0:
    ctx.gpr[4] = (ctx.gpr[17] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[17] << 3u);
      if (branch_taken) {
          goto L_0898451C;
      }
      goto L_089844CC;
    }
L_089844CC:
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    ctx.gpr[16] = (ctx.gpr[30] + ctx.gpr[4]);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    ctx.gpr[18] = (0u | 128u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(216));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    goto L_089844EC;
L_089844EC:
    ctx.gpr[4] = (ctx.gpr[18] << (ctx.gpr[17] & 31u));
    ctx.gpr[4] = (ctx.gpr[19] & ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898450C;
      }
      goto L_089844FC;
    }
L_089844FC:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x0898450Cu);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 207u, 0x08981278u>(ctx, &aot_mem) && ctx.pc == 0x0898450Cu) goto L_0898450C;
    return;
L_0898450C:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[17] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
      if (branch_taken) {
          goto L_089844EC;
      }
      goto L_0898451C;
    }
L_0898451C:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    ctx.gpr[4] = (ctx.gpr[19] & 16384u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08984540;
      }
      goto L_0898452C;
    }
L_0898452C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[30] + static_cast<std::uint32_t>(192), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08984540;
L_08984540:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    ctx.gpr[4] = (ctx.gpr[19] & 32768u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
      if (branch_taken) {
          goto L_08984560;
      }
      goto L_08984554;
    }
L_08984554:
    ctx.gpr[5] = (ctx.gpr[30] + static_cast<std::uint32_t>(192));
    ctx.gpr[31] = (0x08984560u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 495u, 0x0892F198u>(ctx, &aot_mem) && ctx.pc == 0x08984560u) goto L_08984560;
    return;
L_08984560:
    ctx.gpr[4] = (1u << 16u);
    ctx.gpr[4] = (ctx.gpr[19] & ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08984584;
      }
      goto L_08984570;
    }
L_08984570:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[30] + static_cast<std::uint32_t>(183), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08984584;
L_08984584:
    ctx.gpr[4] = (512u << 16u);
    ctx.gpr[4] = (ctx.gpr[19] & ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089845A8;
      }
      goto L_08984594;
    }
L_08984594:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[30] + static_cast<std::uint32_t>(345), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_089845A8;
L_089845A8:
    ctx.gpr[4] = (2u << 16u);
    ctx.gpr[4] = (ctx.gpr[19] & ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089845CC;
      }
      goto L_089845B8;
    }
L_089845B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[30] + static_cast<std::uint32_t>(336), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_089845CC;
L_089845CC:
    ctx.gpr[4] = (4u << 16u);
    ctx.gpr[4] = (ctx.gpr[19] & ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089845F0;
      }
      goto L_089845DC;
    }
L_089845DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[30] + static_cast<std::uint32_t>(337), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_089845F0;
L_089845F0:
    ctx.gpr[4] = (8u << 16u);
    ctx.gpr[4] = (ctx.gpr[19] & ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08984638;
      }
      goto L_08984600;
    }
L_08984600:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[30] + static_cast<std::uint32_t>(338), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[30] + static_cast<std::uint32_t>(338)));
    ctx.gpr[31] = (0x08984638u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 143u, 0x08980A94u>(ctx, &aot_mem) && ctx.pc == 0x08984638u) goto L_08984638;
    return;
L_08984638:
    ctx.gpr[4] = (16u << 16u);
    ctx.gpr[4] = (ctx.gpr[19] & ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898465C;
      }
      goto L_08984648;
    }
L_08984648:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[30] + static_cast<std::uint32_t>(340), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0898465C;
L_0898465C:
    ctx.gpr[4] = (32u << 16u);
    ctx.gpr[4] = (ctx.gpr[19] & ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08984678;
      }
      goto L_0898466C;
    }
L_0898466C:
    ctx.gpr[5] = (ctx.gpr[30] + static_cast<std::uint32_t>(96));
    ctx.gpr[31] = (0x08984678u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 99u, 0x08A5CC64u>(ctx, &aot_mem) && ctx.pc == 0x08984678u) goto L_08984678;
    return;
L_08984678:
    ctx.gpr[4] = (64u << 16u);
    ctx.gpr[4] = (ctx.gpr[19] & ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898469C;
      }
      goto L_08984688;
    }
L_08984688:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[30] + static_cast<std::uint32_t>(341), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0898469C;
L_0898469C:
    ctx.gpr[4] = (128u << 16u);
    ctx.gpr[4] = (ctx.gpr[19] & ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089846D8;
      }
      goto L_089846AC;
    }
L_089846AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[30] + static_cast<std::uint32_t>(342), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_089846D8;
L_089846D8:
    ctx.gpr[4] = (256u << 16u);
    ctx.gpr[4] = (ctx.gpr[19] & ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089846FC;
      }
      goto L_089846E8;
    }
L_089846E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[30] + static_cast<std::uint32_t>(344), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_089846FC;
L_089846FC:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[30] + static_cast<std::uint32_t>(176)));
    ctx.gpr[5] = (0u | 65535u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08984940;
      }
      goto L_0898470C;
    }
L_0898470C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[30] + static_cast<std::uint32_t>(176)));
    ctx.gpr[31] = (0x08984720u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5992));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 138u, 0x088A87D4u>(ctx, &aot_mem) && ctx.pc == 0x08984720u) goto L_08984720;
    return;
L_08984720:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898487C;
      }
      goto L_0898472C;
    }
L_0898472C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(64));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08984744u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08984744u) goto L_08984744;
    return;
L_08984744:
    ctx.gpr[4] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0898487C;
      }
      goto L_08984750;
    }
L_08984750:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.fpr[22] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_08984778;
      }
      goto L_0898475C;
    }
L_0898475C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    ctx.gpr[31] = (0x0898476Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 206u, 0x08AC5834u>(ctx, &aot_mem) && ctx.pc == 0x0898476Cu) goto L_0898476C;
    return;
L_0898476C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08984778;
L_08984778:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.gpr[5] = (16256u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
      if (branch_taken) {
          goto L_08984810;
      }
      goto L_0898479C;
    }
L_0898479C:
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 2u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = ctx.fpr[13] / ctx.fpr[12];
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16329u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[22]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
        goto L_089847D8;
    }
    goto L_089847D8;
L_089847D8:
    ctx.gpr[4] = (15897u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08984804;
      }
      goto L_089847F4;
    }
L_089847F4:
    ctx.gpr[31] = (0x089847FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 219u, 0x08AF50DCu>(ctx, &aot_mem) && ctx.pc == 0x089847FCu) goto L_089847FC;
    return;
L_089847FC:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = ctx.fpr[20] - ctx.fpr[0];
      if (branch_taken) {
          goto L_08984810;
      }
      goto L_08984804;
    }
L_08984804:
    ctx.gpr[31] = (0x0898480Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 280u, 0x089D95E4u>(ctx, &aot_mem) && ctx.pc == 0x0898480Cu) goto L_0898480C;
    return;
L_0898480C:
    ctx.fpr[20] = ctx.fpr[20] - ctx.fpr[0];
    goto L_08984810;
L_08984810:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
        goto L_0898483C;
    }
    goto L_0898481C;
L_0898481C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(129));
    ctx.gpr[31] = (0x0898482Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 206u, 0x08AC5834u>(ctx, &aot_mem) && ctx.pc == 0x0898482Cu) goto L_0898482C;
    return;
L_0898482C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(129)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    goto L_0898483C;
L_0898483C:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(516)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(184)));
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[16] = (ctx.gpr[30] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08984860u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 492u, 0x08A05FFCu>(ctx, &aot_mem) && ctx.pc == 0x08984860u) goto L_08984860;
    return;
L_08984860:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[31] = (0x08984874u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 515u, 0x08A06668u>(ctx, &aot_mem) && ctx.pc == 0x08984874u) goto L_08984874;
    return;
L_08984874:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08984938;
      }
      goto L_0898487C;
    }
L_0898487C:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08984938;
      }
      goto L_08984884;
    }
L_08984884:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(64));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0898489Cu);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0898489Cu) goto L_0898489C;
    return;
L_0898489C:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08984938;
      }
      goto L_089848A8;
    }
L_089848A8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08984938;
      }
      goto L_089848B4;
    }
L_089848B4:
    ctx.gpr[31] = (0x089848BCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 824u, 0x08AFB8B0u>(ctx, &aot_mem) && ctx.pc == 0x089848BCu) goto L_089848BC;
    return;
L_089848BC:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) ^ 0x80000000u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[12])) && ctx.fpr[13] == ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
      if (branch_taken) {
          goto L_089848EC;
      }
      goto L_089848DC;
    }
L_089848DC:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[14]) || std::isnan(ctx.fpr[12])) && ctx.fpr[14] == ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08984900;
      }
      goto L_089848EC;
    }
L_089848EC:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[31] = (0x089848F8u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 282u, 0x089D962Cu>(ctx, &aot_mem) && ctx.pc == 0x089848F8u) goto L_089848F8;
    return;
L_089848F8:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08984900;
      }
      goto L_08984900;
    }
L_08984900:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(184)));
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[16] = (ctx.gpr[30] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08984924u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 492u, 0x08A05FFCu>(ctx, &aot_mem) && ctx.pc == 0x08984924u) goto L_08984924;
    return;
L_08984924:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.gpr[31] = (0x08984938u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 515u, 0x08A06668u>(ctx, &aot_mem) && ctx.pc == 0x08984938u) goto L_08984938;
    return;
L_08984938:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08984984;
      }
      goto L_08984940;
    }
L_08984940:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08984984;
      }
      goto L_0898494C;
    }
L_0898494C:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(184)));
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
    ctx.gpr[16] = (ctx.gpr[30] + static_cast<std::uint32_t>(16));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08984970u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 492u, 0x08A05FFCu>(ctx, &aot_mem) && ctx.pc == 0x08984970u) goto L_08984970;
    return;
L_08984970:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.gpr[31] = (0x08984984u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 515u, 0x08A06668u>(ctx, &aot_mem) && ctx.pc == 0x08984984u) goto L_08984984;
    return;
L_08984984:
    ctx.gpr[4] = (2226u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08984994u);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(-23516));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 377u, 0x08AF5D84u>(ctx, &aot_mem) && ctx.pc == 0x08984994u) goto L_08984994;
    return;
L_08984994:
    ctx.gpr[21] = (ctx.gpr[3] | 0u);
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089849A4u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 377u, 0x08AF5D84u>(ctx, &aot_mem) && ctx.pc == 0x089849A4u) goto L_089849A4;
    return;
L_089849A4:
    ctx.gpr[23] = (ctx.gpr[3] | 0u);
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089849B4u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 377u, 0x08AF5D84u>(ctx, &aot_mem) && ctx.pc == 0x089849B4u) goto L_089849B4;
    return;
L_089849B4:
    ctx.gpr[19] = (ctx.gpr[3] | 0u);
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(220), ctx.gpr[19]);
    ctx.gpr[17] = (ctx.gpr[30] + static_cast<std::uint32_t>(32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), ctx.gpr[18]);
    ctx.gpr[31] = (0x089849D0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 377u, 0x08AF5D84u>(ctx, &aot_mem) && ctx.pc == 0x089849D0u) goto L_089849D0;
    return;
L_089849D0:
    ctx.gpr[19] = (ctx.gpr[3] | 0u);
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), ctx.gpr[18]);
    ctx.gpr[31] = (0x089849E8u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 377u, 0x08AF5D84u>(ctx, &aot_mem) && ctx.pc == 0x089849E8u) goto L_089849E8;
    return;
L_089849E8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[19] = (ctx.gpr[3] | 0u);
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(236), ctx.gpr[19]);
    ctx.gpr[31] = (0x08984A00u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(232), ctx.gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 377u, 0x08AF5D84u>(ctx, &aot_mem) && ctx.pc == 0x08984A00u) goto L_08984A00;
    return;
L_08984A00:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(184)));
    ctx.gpr[19] = (ctx.gpr[3] | 0u);
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), ctx.gpr[18]);
    ctx.gpr[31] = (0x08984A1Cu);
    ctx.gpr[17] = (aot_mem.aot_load16(ctx.gpr[30] + static_cast<std::uint32_t>(176)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 377u, 0x08AF5D84u>(ctx, &aot_mem) && ctx.pc == 0x08984A1Cu) goto L_08984A1C;
    return;
L_08984A1C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(188)));
    ctx.gpr[19] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08984A2Cu);
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 377u, 0x08AF5D84u>(ctx, &aot_mem) && ctx.pc == 0x08984A2Cu) goto L_08984A2C;
    return;
L_08984A2C:
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(220)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    ctx.gpr[12] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[13]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[12]);
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(236)));
    ctx.gpr[12] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[13]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[12]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(214)));
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(244)));
    ctx.gpr[12] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(240)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[13]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[12]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[9] = (ctx.gpr[23] | 0u);
    ctx.gpr[8] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08984A98u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 431u, 0x089824F8u>(ctx, &aot_mem) && ctx.pc == 0x08984A98u) goto L_08984A98;
    return;
L_08984A98:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(214)));
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[16] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (2226u << 16u);
      if (branch_taken) {
          goto L_08984B4C;
      }
      goto L_08984AAC;
    }
L_08984AAC:
    ctx.gpr[18] = (ctx.gpr[30] | 0u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-23452));
    goto L_08984AB4;
L_08984AB4:
    ctx.gpr[31] = (0x08984ABCu);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(216)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 377u, 0x08AF5D84u>(ctx, &aot_mem) && ctx.pc == 0x08984ABCu) goto L_08984ABC;
    return;
L_08984ABC:
    ctx.gpr[21] = (ctx.gpr[3] | 0u);
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08984ACCu);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(220)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 377u, 0x08AF5D84u>(ctx, &aot_mem) && ctx.pc == 0x08984ACCu) goto L_08984ACC;
    return;
L_08984ACC:
    ctx.gpr[23] = (ctx.gpr[3] | 0u);
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), ctx.gpr[22]);
    ctx.gpr[31] = (0x08984AE4u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(224)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 377u, 0x08AF5D84u>(ctx, &aot_mem) && ctx.pc == 0x08984AE4u) goto L_08984AE4;
    return;
L_08984AE4:
    ctx.gpr[23] = (ctx.gpr[3] | 0u);
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08984AF4u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(228)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 377u, 0x08AF5D84u>(ctx, &aot_mem) && ctx.pc == 0x08984AF4u) goto L_08984AF4;
    return;
L_08984AF4:
    ctx.gpr[12] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(232))))));
    ctx.gpr[13] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(234))))));
    ctx.gpr[14] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(236)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(244)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(240)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[12]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[13]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[11] = (ctx.gpr[23] | 0u);
    ctx.gpr[10] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08984B38u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[14]);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 431u, 0x089824F8u>(ctx, &aot_mem) && ctx.pc == 0x08984B38u) goto L_08984B38;
    return;
L_08984B38:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(214)));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[16] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(24));
      if (branch_taken) {
          goto L_08984AB4;
      }
      goto L_08984B4C;
    }
L_08984B4C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(248)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(252)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(264)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(268)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(272)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(280)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(284)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(288)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(292)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(304));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08984B84:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[7]);
    ctx.gpr[7] = (2232u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(5992));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(100)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08985024;
      }
      goto L_08984BD0;
    }
L_08984BD0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08984BF8;
      }
      goto L_08984BDC;
    }
L_08984BDC:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.gpr[31] = (0x08984BECu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 206u, 0x08AC5834u>(ctx, &aot_mem) && ctx.pc == 0x08984BECu) goto L_08984BEC;
    return;
L_08984BEC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08984BF8;
L_08984BF8:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.gpr[4] = (0u | 6u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(182)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08984C14;
      }
      goto L_08984C0C;
    }
L_08984C0C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(210)));
      if (branch_taken) {
          goto L_08984C1C;
      }
      goto L_08984C14;
    }
L_08984C14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    ctx.gpr[20] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    goto L_08984C1C;
L_08984C1C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(182)));
    ctx.gpr[6] = (ctx.gpr[19] + static_cast<std::uint32_t>(64));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08984C34u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 118u, 0x08AA0754u>(ctx, &aot_mem) && ctx.pc == 0x08984C34u) goto L_08984C34;
    return;
L_08984C34:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5992));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08984C4Cu);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 426u, 0x088A9DD4u>(ctx, &aot_mem) && ctx.pc == 0x08984C4Cu) goto L_08984C4C;
    return;
L_08984C4C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(104), ctx.gpr[20]);
    ctx.gpr[5] = (ctx.gpr[19] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08984C5Cu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 519u, 0x08A0695Cu>(ctx, &aot_mem) && ctx.pc == 0x08984C5Cu) goto L_08984C5C;
    return;
L_08984C5C:
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(96));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(112));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(128));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(128));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(144));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(144));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(160));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(178)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(1208), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(340)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(324), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(184)));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(1248), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(188)));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(183)));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(1720), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(182)));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(1376), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(180)));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(844), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(181)));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(592), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (65504u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(336)));
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    ctx.gpr[5] = (ctx.gpr[5] << 21u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[5] = (61440u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(337)));
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    ctx.gpr[5] = (ctx.gpr[5] << 28u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(338)));
    aot_mem.aot_store16(ctx.gpr[20] + static_cast<std::uint32_t>(1914), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (16457u << 16u);
      if (branch_taken) {
          goto L_08984DB0;
      }
      goto L_08984D44;
    }
L_08984D44:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(184)));
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[4] = (16290u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 63875u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<3u>(ctx.fpr[12]));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.gpr[5] = (0u | 5u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 24u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 24u));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 1 ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[5] = (0u | 8u);
        goto L_08984D9C;
    }
    goto L_08984D9C;
L_08984D9C:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] << 24u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 24u));
    ctx.gpr[31] = (0x08984DB0u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 270u, 0x089A13B4u>(ctx, &aot_mem) && ctx.pc == 0x08984DB0u) goto L_08984DB0;
    return;
L_08984DB0:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(176)));
    ctx.gpr[5] = (0u | 65535u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08984EFC;
      }
      goto L_08984DC0;
    }
L_08984DC0:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(6)));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[8] = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(176)));
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08984DDCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-23392));
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 668u, 0x0897F738u>(ctx, &aot_mem) && ctx.pc == 0x08984DDCu) goto L_08984DDC;
    return;
L_08984DDC:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(176)));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08984DF4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5992));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 154u, 0x088A88CCu>(ctx, &aot_mem) && ctx.pc == 0x08984DF4u) goto L_08984DF4;
    return;
L_08984DF4:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_08984E6C;
      }
      goto L_08984E00;
    }
L_08984E00:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(176)));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08984E18u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-23324));
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 668u, 0x0897F738u>(ctx, &aot_mem) && ctx.pc == 0x08984E18u) goto L_08984E18;
    return;
L_08984E18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(104)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(1332), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(1332)));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(1336), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(68)));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(1412), ctx.gpr[4]);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-513));
    ctx.gpr[6] = (ctx.gpr[6] & 1u);
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[6] << 9u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(1332)));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08984E60u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 725u, 0x08887A68u>(ctx, &aot_mem) && ctx.pc == 0x08984E60u) goto L_08984E60;
    return;
L_08984E60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(504), ctx.gpr[20]);
      if (branch_taken) {
          goto L_08984EFC;
      }
      goto L_08984E6C;
    }
L_08984E6C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[18]);
    ctx.gpr[21] = (ctx.gpr[20] + static_cast<std::uint32_t>(48));
    ctx.gpr[22] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3))))));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(176)));
    ctx.gpr[4] = (2226u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[19]);
    ctx.gpr[31] = (0x08984E90u);
    ctx.gpr[23] = (ctx.gpr[4] + static_cast<std::uint32_t>(-23268));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 377u, 0x08AF5D84u>(ctx, &aot_mem) && ctx.pc == 0x08984E90u) goto L_08984E90;
    return;
L_08984E90:
    ctx.gpr[19] = (ctx.gpr[3] | 0u);
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[18]);
    ctx.gpr[31] = (0x08984EA8u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 377u, 0x08AF5D84u>(ctx, &aot_mem) && ctx.pc == 0x08984EA8u) goto L_08984EA8;
    return;
L_08984EA8:
    ctx.gpr[19] = (ctx.gpr[3] | 0u);
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08984EB8u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 377u, 0x08AF5D84u>(ctx, &aot_mem) && ctx.pc == 0x08984EB8u) goto L_08984EB8;
    return;
L_08984EB8:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    ctx.gpr[11] = (ctx.gpr[19] | 0u);
    ctx.gpr[10] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08984EE4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 668u, 0x0897F738u>(ctx, &aot_mem) && ctx.pc == 0x08984EE4u) goto L_08984EE4;
    return;
L_08984EE4:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5992));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    ctx.gpr[31] = (0x08984EF8u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 228u, 0x088A8FA4u>(ctx, &aot_mem) && ctx.pc == 0x08984EF8u) goto L_08984EF8;
    return;
L_08984EF8:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    goto L_08984EFC;
L_08984EFC:
    ctx.gpr[4] = (2276u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27960));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-27960)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[31] = (0x08984F1Cu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 694u, 0x08B03308u>(ctx, &aot_mem) && ctx.pc == 0x08984F1Cu) goto L_08984F1C;
    return;
L_08984F1C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08984F30;
      }
      goto L_08984F28;
    }
L_08984F28:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08984F68;
      }
      goto L_08984F30;
    }
L_08984F30:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08984F68;
      }
      goto L_08984F40;
    }
L_08984F40:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08984F44;
L_08984F44:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    if (ctx.gpr[6] == ctx.gpr[7]) {
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
        goto L_08984F60;
    }
    goto L_08984F50;
L_08984F50:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    goto L_08984F60;
L_08984F60:
    if (ctx.gpr[4] != ctx.gpr[19]) {
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
        goto L_08984F44;
    }
    goto L_08984F68;
L_08984F68:
    ctx.gpr[4] = (2276u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27960));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[6];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(53), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08984FA0;
      }
      goto L_08984F80;
    }
L_08984F80:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[19] = (ctx.gpr[6] - ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[31] = (0x08984F98u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 539u, 0x08932C08u>(ctx, &aot_mem) && ctx.pc == 0x08984F98u) goto L_08984F98;
    return;
L_08984F98:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[2] + ctx.gpr[19]);
      if (branch_taken) {
          goto L_08984FA0;
      }
      goto L_08984FA0;
    }
L_08984FA0:
    ctx.gpr[4] = (2276u << 16u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(54), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27960));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(128))))));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08984FC4u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 231u, 0x08A49E44u>(ctx, &aot_mem) && ctx.pc == 0x08984FC4u) goto L_08984FC4;
    return;
L_08984FC4:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[4]);
    ctx.gpr[31] = (0x08984FD8u);
    ctx.gpr[4] = (0u | 352u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 738u, 0x089C70F0u>(ctx, &aot_mem) && ctx.pc == 0x08984FD8u) goto L_08984FD8;
    return;
L_08984FD8:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (0u | 352u);
    ctx.gpr[31] = (0x08984FE8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26512));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 687u, 0x08AA33C4u>(ctx, &aot_mem) && ctx.pc == 0x08984FE8u) goto L_08984FE8;
    return;
L_08984FE8:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
      if (branch_taken) {
          goto L_08985004;
      }
      goto L_08984FF4;
    }
L_08984FF4:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08985000u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 685u, 0x0897F888u>(ctx, &aot_mem) && ctx.pc == 0x08985000u) goto L_08985000;
    return;
L_08985000:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_08985004;
L_08985004:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08985014u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 131u, 0x08AC5034u>(ctx, &aot_mem) && ctx.pc == 0x08985014u) goto L_08985014;
    return;
L_08985014:
    ctx.gpr[31] = (0x0898501Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 145u, 0x08A0D328u>(ctx, &aot_mem) && ctx.pc == 0x0898501Cu) goto L_0898501C;
    return;
L_0898501C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08985038;
      }
      goto L_08985024;
    }
L_08985024:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(128))))));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08985038u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 231u, 0x08A49E44u>(ctx, &aot_mem) && ctx.pc == 0x08985038u) goto L_08985038;
    return;
L_08985038:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08985064:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[5]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(120));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(80))))));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(22), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(22))))));
    ctx.gpr[5] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08985124;
      }
      goto L_089850C8;
    }
L_089850C8:
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(80))))));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(24))))));
    ctx.gpr[31] = (0x089850E4u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 206u, 0x08AC5834u>(ctx, &aot_mem) && ctx.pc == 0x089850E4u) goto L_089850E4;
    return;
L_089850E4:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089850F8u);
    ctx.gpr[6] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 376u, 0x08AED4ECu>(ctx, &aot_mem) && ctx.pc == 0x089850F8u) goto L_089850F8;
    return;
L_089850F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(27768)));
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[20] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(214)));
      if (branch_taken) {
          goto L_0898512C;
      }
      goto L_0898511C;
    }
L_0898511C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08985244;
      }
      goto L_08985124;
    }
L_08985124:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0898531C;
      }
      goto L_0898512C;
    }
L_0898512C:
    ctx.gpr[5] = (16256u << 16u);
    ctx.gpr[22] = (ctx.gpr[17] + static_cast<std::uint32_t>(216));
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[30] = (0u | 1u);
    goto L_0898513C;
L_0898513C:
    ctx.gpr[21] = (ctx.gpr[20] | 0u);
    ctx.gpr[23] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[23] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0898519C;
      }
      goto L_08985150;
    }
L_08985150:
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    goto L_08985154;
L_08985154:
    ctx.gpr[7] = (ctx.gpr[29] + ctx.gpr[23]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898518C;
      }
      goto L_08985164;
    }
L_08985164:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(18))))));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_0898518C;
      }
      goto L_08985174;
    }
L_08985174:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(50))))));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(16))))));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_0898518C;
      }
      goto L_08985184;
    }
L_08985184:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0898519C;
      }
      goto L_0898518C;
    }
L_0898518C:
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[23] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(24));
      if (branch_taken) {
          goto L_08985154;
      }
      goto L_0898519C;
    }
L_0898519C:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898522C;
      }
      goto L_089851A4;
    }
L_089851A4:
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[23]);
    ctx.gpr[5] = (ctx.gpr[23] << 3u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[30]));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[23] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[23] = (ctx.gpr[22] + ctx.gpr[23]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x089851CCu);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 44u, 0x088B43B0u>(ctx, &aot_mem) && ctx.pc == 0x089851CCu) goto L_089851CC;
    return;
L_089851CC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(40)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08985200;
      }
      goto L_089851E4;
    }
L_089851E4:
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x089851F8u);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 359u, 0x08972418u>(ctx, &aot_mem) && ctx.pc == 0x089851F8u) goto L_089851F8;
    return;
L_089851F8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[21] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(0u));
      if (branch_taken) {
          goto L_0898520C;
      }
      goto L_08985200;
    }
L_08985200:
    ctx.gpr[31] = (0x08985208u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 28u, 0x088B4280u>(ctx, &aot_mem) && ctx.pc == 0x08985208u) goto L_08985208;
    return;
L_08985208:
    aot_mem.aot_store16(ctx.gpr[21] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(0u));
    goto L_0898520C;
L_0898520C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store16(ctx.gpr[21] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(214)));
      if (branch_taken) {
          goto L_0898523C;
      }
      goto L_0898522C;
    }
L_0898522C:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08985238u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 863u, 0x088B3EA4u>(ctx, &aot_mem) && ctx.pc == 0x08985238u) goto L_08985238;
    return;
L_08985238:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(214)));
    goto L_0898523C;
L_0898523C:
    { const bool branch_taken = ctx.gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898513C;
      }
      goto L_08985244;
    }
L_08985244:
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[20] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[22] = (2232u << 16u);
      if (branch_taken) {
          goto L_08985304;
      }
      goto L_08985254;
    }
L_08985254:
    ctx.gpr[21] = (ctx.gpr[17] + static_cast<std::uint32_t>(216));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(5992));
    goto L_0898525C;
L_0898525C:
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089852F0;
      }
      goto L_0898526C;
    }
L_0898526C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(18))))));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 229 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(16))))));
      if (branch_taken) {
          goto L_089852A4;
      }
      goto L_0898527C;
    }
L_0898527C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(100)));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(52)));
    ctx.gpr[6] = (ctx.gpr[7] ^ ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_089852A4;
      }
      goto L_0898529C;
    }
L_0898529C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089852F0;
      }
      goto L_089852A4;
    }
L_089852A4:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x089852B4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 478u, 0x08A8AE7Cu>(ctx, &aot_mem) && ctx.pc == 0x089852B4u) goto L_089852B4;
    return;
L_089852B4:
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x089852C8u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 44u, 0x088B43B0u>(ctx, &aot_mem) && ctx.pc == 0x089852C8u) goto L_089852C8;
    return;
L_089852C8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x089852D4u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 28u, 0x088B4280u>(ctx, &aot_mem) && ctx.pc == 0x089852D4u) goto L_089852D4;
    return;
L_089852D4:
    aot_mem.aot_store16(ctx.gpr[23] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[23] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store16(ctx.gpr[23] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089852F0;
L_089852F0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(214)));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[20] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(24));
      if (branch_taken) {
          goto L_0898525C;
      }
      goto L_08985304;
    }
L_08985304:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898531C;
      }
      goto L_08985310;
    }
L_08985310:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x0898531Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-23164));
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 668u, 0x0897F738u>(ctx, &aot_mem) && ctx.pc == 0x0898531Cu) goto L_0898531C;
    return;
L_0898531C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
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
L_08985354:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    ctx.gpr[4] = (2228u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-26460)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[17];
    ctx.gpr[4] = (17096u << 16u);
    ctx.gpr[5] = (2228u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[22]);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-26464)));
    ctx.gpr[22] = (2228u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[23]);
    ctx.gpr[23] = (2228u << 16u);
    ctx.gpr[5] = (16014u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = ctx.fpr[16] / ctx.fpr[15];
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-26436)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-26424)));
    ctx.gpr[22] = (2228u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 14571u);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(-26456), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[14] / ctx.fpr[12];
    ctx.gpr[5] = (2228u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[30]);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-26428)));
    ctx.gpr[30] = (16281u << 16u);
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[22] = (ctx.gpr[30] | 39322u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-26452), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[30] = (16672u << 16u);
    ctx.gpr[5] = (2228u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-26448), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[30]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[21]);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[22]);
    ctx.gpr[21] = (16268u << 16u);
    ctx.gpr[22] = (2228u << 16u);
    ctx.gpr[21] = (ctx.gpr[21] | 52429u);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(-26444), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[21]);
    ctx.gpr[21] = (15744u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[21]);
    ctx.gpr[21] = (2228u << 16u);
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(-26416), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[21] = (2228u << 16u);
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(-26440), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[21] = (2228u << 16u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(-26432), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[21] = (2228u << 16u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(-26408), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[21] = (0u | 27u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(-6936), static_cast<std::uint8_t>(ctx.gpr[21]));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(-6936)));
    ctx.gpr[9] = (2232u << 16u);
    ctx.gpr[11] = (2226u << 16u);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(6264));
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(-23120));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[11]);
    ctx.gpr[6] = (2228u << 16u);
    ctx.gpr[7] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-26420), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[11] = (0u | 28u);
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(-7116), static_cast<std::uint8_t>(ctx.gpr[11]));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(-7116)));
    ctx.gpr[3] = (2226u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.gpr[5] = (ctx.gpr[3] + static_cast<std::uint32_t>(-23108));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (2228u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-26412), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[8] = (2230u << 16u);
    ctx.gpr[5] = (0u | 29u);
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(-7117), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(-7117)));
    ctx.gpr[13] = (2226u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (ctx.gpr[13] + static_cast<std::uint32_t>(-23100));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[10] = (2230u << 16u);
    ctx.gpr[5] = (0u | 30u);
    aot_mem.aot_store8(ctx.gpr[10] + static_cast<std::uint32_t>(-7113), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(-7113)));
    ctx.gpr[15] = (2226u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (ctx.gpr[15] + static_cast<std::uint32_t>(-23084));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[2] = (2230u << 16u);
    ctx.gpr[5] = (0u | 31u);
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(-7114), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(-7114)));
    ctx.gpr[12] = (2230u << 16u);
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (0u | 32u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-23072));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[9]);
    aot_mem.aot_store8(ctx.gpr[12] + static_cast<std::uint32_t>(-7727), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[12] + static_cast<std::uint32_t>(-7727)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[14] = (2230u << 16u);
    ctx.gpr[16] = (2226u << 16u);
    ctx.gpr[5] = (0u | 33u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(-23060));
    aot_mem.aot_store8(ctx.gpr[14] + static_cast<std::uint32_t>(-6935), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[14] + static_cast<std::uint32_t>(-6935)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    ctx.gpr[24] = (2230u << 16u);
    ctx.gpr[18] = (2226u << 16u);
    ctx.gpr[5] = (0u | 34u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(-23044));
    aot_mem.aot_store8(ctx.gpr[24] + static_cast<std::uint32_t>(-7126), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[24] + static_cast<std::uint32_t>(-7126)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    ctx.gpr[25] = (2230u << 16u);
    ctx.gpr[20] = (2226u << 16u);
    ctx.gpr[5] = (0u | 35u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (ctx.gpr[20] + static_cast<std::uint32_t>(-23028));
    aot_mem.aot_store8(ctx.gpr[25] + static_cast<std::uint32_t>(-7111), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[25] + static_cast<std::uint32_t>(-7111)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[5] = (0u | 36u);
    ctx.gpr[6] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-23012));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(-7110), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(-7110)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    ctx.gpr[19] = (2230u << 16u);
    ctx.gpr[5] = (0u | 37u);
    ctx.gpr[6] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-22996));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(-6924), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(-6924)));
    ctx.gpr[23] = (2226u << 16u);
    ctx.gpr[5] = (0u | 38u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[7] = (2230u << 16u);
    ctx.gpr[6] = (ctx.gpr[23] + static_cast<std::uint32_t>(-22976));
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(-7115), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(-7115)));
    ctx.gpr[5] = (0u | 39u);
    ctx.gpr[6] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[7] = (2230u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-22960));
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(-7120), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(-7120)));
    ctx.gpr[5] = (0u | 40u);
    ctx.gpr[6] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[7] = (2230u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-22948));
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(-6926), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(-6926)));
    ctx.gpr[3] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[3] + static_cast<std::uint32_t>(-22940));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[9]);
    ctx.gpr[6] = (2276u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(-27960));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-27960), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[4] = (2228u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[31]);
    ctx.gpr[31] = (0x08985680u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26400));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 251u, 0x08AF5420u>(ctx, &aot_mem) && ctx.pc == 0x08985680u) goto L_08985680;
    return;
L_08985680:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089856B0:
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
L_089856DC:
    ctx.gpr[7] = (2231u << 16u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(32048)));
    ctx.gpr[6] = (2231u << 16u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(32064));
      if (branch_taken) {
          goto L_08985774;
      }
      goto L_089856F0;
    }
L_089856F0:
    ctx.gpr[8] = (17540u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[8] = (ctx.gpr[8] | 32768u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[8] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(32064), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(32048), ctx.gpr[8]);
    ctx.gpr[6] = (50248u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[7] = (17327u << 16u);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(32));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[7] = (50204u << 16u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[7] = (50215u << 16u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[7] = (ctx.gpr[7] | 32768u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    ctx.gpr[7] = (50175u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] | 32768u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08985774;
L_08985774:
    ctx.gpr[2] = (ctx.gpr[4] << 4u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08985780:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[31]);
    ctx.gpr[31] = (0x089857A0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 166u, 0x089D568Cu>(ctx, &aot_mem) && ctx.pc == 0x089857A0u) goto L_089857A0;
    return;
L_089857A0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[4] = (16544u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(0u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[22]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
        goto L_089857C8;
    }
    goto L_089857C8;
L_089857C8:
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0898585C;
      }
      goto L_089857D8;
    }
L_089857D8:
    ctx.gpr[31] = (0x089857E0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 166u, 0x089D568Cu>(ctx, &aot_mem) && ctx.pc == 0x089857E0u) goto L_089857E0;
    return;
L_089857E0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[22]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
        goto L_089857FC;
    }
    goto L_089857FC;
L_089857FC:
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0898585C;
      }
      goto L_0898580C;
    }
L_0898580C:
    ctx.gpr[31] = (0x08985814u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 166u, 0x089D568Cu>(ctx, &aot_mem) && ctx.pc == 0x08985814u) goto L_08985814;
    return;
L_08985814:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[22]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
        goto L_08985830;
    }
    goto L_08985830;
L_08985830:
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0898585C;
      }
      goto L_08985840;
    }
L_08985840:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7060)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[4] = (2228u << 16u);
      if (branch_taken) {
          goto L_08985854;
      }
      goto L_08985850;
    }
L_08985850:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-26324), ctx.gpr[16]);
    goto L_08985854;
L_08985854:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-26324)));
      if (branch_taken) {
          goto L_08985880;
      }
      goto L_0898585C;
    }
L_0898585C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(13820)));
    ctx.gpr[31] = (0x0898586Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 281u, 0x08871AF4u>(ctx, &aot_mem) && ctx.pc == 0x0898586Cu) goto L_0898586C;
    return;
L_0898586C:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[4] = (2228u << 16u);
      if (branch_taken) {
          goto L_0898587C;
      }
      goto L_08985878;
    }
L_08985878:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-26320), ctx.gpr[16]);
    goto L_0898587C;
L_0898587C:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-26320)));
    goto L_08985880;
L_08985880:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08985898:
    ctx.gpr[4] = (2231u << 16u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(32016), static_cast<std::uint8_t>(0u));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089858A4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2228u << 16u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-26316)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[5] & 128u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
      if (branch_taken) {
          goto L_089858DC;
      }
      goto L_089858D4;
    }
L_089858D4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_089858F0;
      }
      goto L_089858DC;
    }
L_089858DC:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[4]);
    goto L_089858F0;
L_089858F0:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08985988;
      }
      goto L_089858F8;
    }
L_089858F8:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0898590Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-22920));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 404u, 0x08AED66Cu>(ctx, &aot_mem) && ctx.pc == 0x0898590Cu) goto L_0898590C;
    return;
L_0898590C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08985944;
      }
      goto L_08985914;
    }
L_08985914:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6548)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2228u << 16u);
      if (branch_taken) {
          goto L_08985988;
      }
      goto L_08985924;
    }
L_08985924:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-29316)));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08985988;
      }
      goto L_0898593C;
    }
L_0898593C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_08985988;
      }
      goto L_08985944;
    }
L_08985944:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08985954u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-22904));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 404u, 0x08AED66Cu>(ctx, &aot_mem) && ctx.pc == 0x08985954u) goto L_08985954;
    return;
L_08985954:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08985988;
      }
      goto L_0898595C;
    }
L_0898595C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6548)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2228u << 16u);
      if (branch_taken) {
          goto L_08985988;
      }
      goto L_0898596C;
    }
L_0898596C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-29316)));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08985988;
      }
      goto L_08985984;
    }
L_08985984:
    ctx.gpr[16] = (0u | 0u);
    goto L_08985988;
L_08985988:
    ctx.gpr[2] = (0u < ctx.gpr[16] ? 1u : 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089859A0:
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-26316)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] & 128u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (ctx.gpr[4] << 4u);
      if (branch_taken) {
          goto L_089859C8;
      }
      goto L_089859C0;
    }
L_089859C0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089859DC;
      }
      goto L_089859C8;
    }
L_089859C8:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_089859DC;
L_089859DC:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089859E4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2228u << 16u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-26316)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[18] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (ctx.gpr[7] & 128u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08985A30;
      }
      goto L_08985A28;
    }
L_08985A28:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_08985A48;
      }
      goto L_08985A30;
    }
L_08985A30:
    ctx.gpr[6] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[4]);
    goto L_08985A48;
L_08985A48:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08985A5Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 123u, 0x089C8A24u>(ctx, &aot_mem) && ctx.pc == 0x08985A5Cu) goto L_08985A5C;
    return;
L_08985A5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[18];
    ctx.gpr[19] = (2230u << 16u);
      if (branch_taken) {
          goto L_08985ABC;
      }
      goto L_08985A68;
    }
L_08985A68:
    ctx.gpr[20] = (2229u << 16u);
    goto L_08985A6C;
L_08985A6C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-7872)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08985A8C;
      }
      goto L_08985A7C;
    }
L_08985A7C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08985A8C;
L_08985A8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(20));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08985AACu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 123u, 0x089C8A24u>(ctx, &aot_mem) && ctx.pc == 0x08985AACu) goto L_08985AAC;
    return;
L_08985AAC:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(8));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08985A6C;
      }
      goto L_08985ABC;
    }
L_08985ABC:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
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
L_08985AE4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2228u << 16u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-26316)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (2229u << 16u);
      if (branch_taken) {
          goto L_08985B38;
      }
      goto L_08985B30;
    }
L_08985B30:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08985B50;
      }
      goto L_08985B38;
    }
L_08985B38:
    ctx.gpr[4] = (ctx.gpr[16] << 4u);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[4]);
    goto L_08985B50;
L_08985B50:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(24));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08985B64u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-22888));
    goto L_089856B0;
L_08985B64:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(0u));
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[21] = (0u | 0u);
    goto L_08985B70;
L_08985B70:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-7872)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08985B90;
      }
      goto L_08985B80;
    }
L_08985B80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[21]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    goto L_08985B90;
L_08985B90:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08985BE4;
      }
      goto L_08985B98;
    }
L_08985B98:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08985BAC;
      }
      goto L_08985BA0;
    }
L_08985BA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[21]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08985BAC;
L_08985BAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08985BE4;
      }
      goto L_08985BC0;
    }
L_08985BC0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[21]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08985BE4;
      }
      goto L_08985BDC;
    }
L_08985BDC:
    ctx.gpr[31] = (0x08985BE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 590u, 0x088064E4u>(ctx, &aot_mem) && ctx.pc == 0x08985BE4u) goto L_08985BE4;
    return;
L_08985BE4:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < 4900 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08985B70;
      }
      goto L_08985BF4;
    }
L_08985BF4:
    ctx.gpr[22] = (2277u << 16u);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(-13536));
    goto L_08985C04;
L_08985C04:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-7872)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08985C24;
      }
      goto L_08985C14;
    }
L_08985C14:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[21]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    goto L_08985C24;
L_08985C24:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08985C98;
      }
      goto L_08985C2C;
    }
L_08985C2C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08985C40;
      }
      goto L_08985C34;
    }
L_08985C34:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[21]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    goto L_08985C40;
L_08985C40:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08985C98;
      }
      goto L_08985C54;
    }
L_08985C54:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[21]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08985C98;
      }
      goto L_08985C70;
    }
L_08985C70:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (0u | 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
        goto L_08985C80;
    }
    goto L_08985C80;
L_08985C80:
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[22]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20));
    ctx.gpr[31] = (0x08985C98u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 131u, 0x089C8AF4u>(ctx, &aot_mem) && ctx.pc == 0x08985C98u) goto L_08985C98;
    return;
L_08985C98:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < 4900 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08985C04;
      }
      goto L_08985CA8;
    }
L_08985CA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08985CD4;
      }
      goto L_08985CB4;
    }
L_08985CB4:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
    ctx.gpr[31] = (0x08985CC0u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 131u, 0x089C8AF4u>(ctx, &aot_mem) && ctx.pc == 0x08985CC0u) goto L_08985CC0;
    return;
L_08985CC0:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (0x08985CD0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26512));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 730u, 0x08AA367Cu>(ctx, &aot_mem) && ctx.pc == 0x08985CD0u) goto L_08985CD0;
    return;
L_08985CD0:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), 0u);
    goto L_08985CD4;
L_08985CD4:
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
L_08985CFC:
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-26316)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] & 128u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (ctx.gpr[4] << 4u);
      if (branch_taken) {
          goto L_08985D24;
      }
      goto L_08985D1C;
    }
L_08985D1C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08985D38;
      }
      goto L_08985D24;
    }
L_08985D24:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_08985D38;
L_08985D38:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08985D40:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    ctx.gpr[7] = (2230u << 16u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(-7788)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[22] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08985DBC;
      }
      goto L_08985D94;
    }
L_08985D94:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[21] = (2230u << 16u);
      if (branch_taken) {
          goto L_08985DC4;
      }
      goto L_08985D9C;
    }
L_08985D9C:
    ctx.gpr[31] = (0x08985DA4u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    goto L_08985780;
L_08985DA4:
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[22] ^ 1u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-7104)));
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08985DD8;
      }
      goto L_08985DBC;
    }
L_08985DBC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0898604C;
      }
      goto L_08985DC4;
    }
L_08985DC4:
    ctx.gpr[22] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[22] ^ 1u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-7104)));
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    goto L_08985DD8;
L_08985DD8:
    { const bool branch_taken = ctx.gpr[22] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08985DF4;
      }
      goto L_08985DE0;
    }
L_08985DE0:
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(-7104));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[23] = (ctx.gpr[21] ^ 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[23] = (ctx.gpr[23] < static_cast<std::uint32_t>(1) ? 1u : 0u);
      if (branch_taken) {
          goto L_08985E00;
      }
      goto L_08985DF4;
    }
L_08985DF4:
    ctx.gpr[21] = (ctx.gpr[4] | 0u);
    ctx.gpr[23] = (ctx.gpr[21] ^ 1u);
    ctx.gpr[23] = (ctx.gpr[23] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    goto L_08985E00;
L_08985E00:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-22868));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (0u | 1u);
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[20] = (0u | 52u);
    ctx.gpr[30] = (2229u << 16u);
    goto L_08985E28;
L_08985E28:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-26316)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] & 128u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
        goto L_08985E50;
    }
    goto L_08985E48;
L_08985E48:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08985E5C;
      }
      goto L_08985E50;
    }
L_08985E50:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08985E5C;
L_08985E5C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08985FEC;
      }
      goto L_08985E64;
    }
L_08985E64:
    ctx.gpr[31] = (0x08985E6Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_089858A4;
L_08985E6C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08985FEC;
      }
      goto L_08985E74;
    }
L_08985E74:
    ctx.gpr[31] = (0x08985E7Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_089859A0;
L_08985E7C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (0x08985E88u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 379u, 0x08AED520u>(ctx, &aot_mem) && ctx.pc == 0x08985E88u) goto L_08985E88;
    return;
L_08985E88:
    ctx.gpr[18] = (ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[19] = (ctx.gpr[17] + static_cast<std::uint32_t>(6100));
      if (branch_taken) {
          goto L_08985E9C;
      }
      goto L_08985E94;
    }
L_08985E94:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_08985F0C;
      }
      goto L_08985E9C;
    }
L_08985E9C:
    ctx.gpr[31] = (0x08985EA4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08985CFC;
L_08985EA4:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08985EB0u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    goto L_089856DC;
L_08985EB0:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08985F04;
      }
      goto L_08985EC8;
    }
L_08985EC8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08985F04;
      }
      goto L_08985EDC;
    }
L_08985EDC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08985F04;
      }
      goto L_08985EF0;
    }
L_08985EF0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((ctx.fpr[22] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08985F0C;
      }
      goto L_08985F04;
    }
L_08985F04:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08985F0C;
      }
      goto L_08985F0C;
    }
L_08985F0C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08985F9C;
      }
      goto L_08985F14;
    }
L_08985F14:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_08985F9C;
      }
      goto L_08985F1C;
    }
L_08985F1C:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08985F2C;
      }
      goto L_08985F24;
    }
L_08985F24:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
      if (branch_taken) {
          goto L_08985F9C;
      }
      goto L_08985F2C;
    }
L_08985F2C:
    ctx.gpr[31] = (0x08985F34u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08985CFC;
L_08985F34:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08985F40u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    goto L_089856DC;
L_08985F40:
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((ctx.fpr[24] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08985F94;
      }
      goto L_08985F58;
    }
L_08985F58:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((ctx.fpr[24] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08985F94;
      }
      goto L_08985F6C;
    }
L_08985F6C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_fpu_condition((ctx.fpr[26] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08985F94;
      }
      goto L_08985F80;
    }
L_08985F80:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((ctx.fpr[26] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08985F9C;
      }
      goto L_08985F94;
    }
L_08985F94:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08985F9C;
      }
      goto L_08985F9C;
    }
L_08985F9C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[19] << 4u);
      if (branch_taken) {
          goto L_08985FE4;
      }
      goto L_08985FA4;
    }
L_08985FA4:
    ctx.gpr[5] = (ctx.gpr[19] << 2u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[4] ^ 1u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08985FEC;
      }
      goto L_08985FCC;
    }
L_08985FCC:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08985FD8u);
    ctx.gpr[5] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 659u, 0x089CAC28u>(ctx, &aot_mem) && ctx.pc == 0x08985FD8u) goto L_08985FD8;
    return;
L_08985FD8:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08985FEC;
      }
      goto L_08985FE4;
    }
L_08985FE4:
    ctx.gpr[31] = (0x08985FECu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 469u, 0x089C6068u>(ctx, &aot_mem) && ctx.pc == 0x08985FECu) goto L_08985FEC;
    return;
L_08985FEC:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 15 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(52));
      if (branch_taken) {
          goto L_08985E28;
      }
      goto L_08985FFC;
    }
L_08985FFC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[4] = (2231u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(32016), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898604C;
      }
      goto L_08986020;
    }
L_08986020:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x0898602Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-22860));
    goto L_089856B0;
L_0898602C:
    ctx.gpr[31] = (0x08986034u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 755u, 0x0891B674u>(ctx, &aot_mem) && ctx.pc == 0x08986034u) goto L_08986034;
    return;
L_08986034:
    ctx.gpr[31] = (0x0898603Cu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 711u, 0x089CAF64u>(ctx, &aot_mem) && ctx.pc == 0x0898603Cu) goto L_0898603C;
    return;
L_0898603C:
    ctx.gpr[31] = (0x08986044u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 685u, 0x0893B780u>(ctx, &aot_mem) && ctx.pc == 0x08986044u) goto L_08986044;
    return;
L_08986044:
    ctx.gpr[31] = (0x0898604Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 757u, 0x0891B698u>(ctx, &aot_mem) && ctx.pc == 0x0898604Cu) goto L_0898604C;
    return;
L_0898604C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898608C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986094:
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (2231u << 16u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(32016), static_cast<std::uint8_t>(ctx.gpr[5]));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (2231u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32032));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089860B8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (2228u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[31]);
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (49894u << 16u);
    ctx.gpr[19] = (0u | 1u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (0u | 52u);
    goto L_08986100;
L_08986100:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-26316)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[19]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] & 128u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
        goto L_08986124;
    }
    goto L_0898611C;
L_0898611C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08986130;
      }
      goto L_08986124;
    }
L_08986124:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08986130;
L_08986130:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089861E4;
      }
      goto L_08986138;
    }
L_08986138:
    ctx.gpr[31] = (0x08986140u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    goto L_089858A4;
L_08986140:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089861E4;
      }
      goto L_08986148;
    }
L_08986148:
    ctx.gpr[31] = (0x08986150u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    goto L_08985CFC;
L_08986150:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0898615Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08985780;
L_0898615C:
    ctx.gpr[31] = (0x08986164u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_089856DC;
L_08986164:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[20];
    ctx.set_fpu_condition((ctx.fpr[24] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_089861C8;
      }
      goto L_08986180;
    }
L_08986180:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[20];
    ctx.set_fpu_condition((ctx.fpr[24] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089861C8;
      }
      goto L_08986198;
    }
L_08986198:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[20];
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089861C8;
      }
      goto L_089861B0;
    }
L_089861B0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[20];
    ctx.set_fpu_condition((ctx.fpr[22] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_089861D0;
      }
      goto L_089861C8;
    }
L_089861C8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089861D0;
      }
      goto L_089861D0;
    }
L_089861D0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089861E4;
      }
      goto L_089861D8;
    }
L_089861D8:
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(6100));
    ctx.gpr[31] = (0x089861E4u);
    ctx.gpr[5] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 659u, 0x089CAC28u>(ctx, &aot_mem) && ctx.pc == 0x089861E4u) goto L_089861E4;
    return;
L_089861E4:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 15 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(52));
      if (branch_taken) {
          goto L_08986100;
      }
      goto L_089861F4;
    }
L_089861F4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986228:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08986238u);
    // nop
    goto L_08985780;
L_08986238:
    ctx.gpr[31] = (0x08986240u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_0898624C;
L_08986240:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898624C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[31]);
    ctx.gpr[18] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08986280u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_089856DC;
L_08986280:
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
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[17] = (2228u << 16u);
    ctx.gpr[19] = (2226u << 16u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-22868));
    ctx.gpr[20] = (ctx.gpr[18] ^ 1u);
    ctx.gpr[20] = (ctx.gpr[20] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (0u | 52u);
    goto L_089862B0;
L_089862B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-26316)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-26316)));
        goto L_089862D4;
    }
    goto L_089862CC;
L_089862CC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089862E4;
      }
      goto L_089862D4;
    }
L_089862D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_089862E4;
L_089862E4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089863D8;
      }
      goto L_089862EC;
    }
L_089862EC:
    ctx.gpr[31] = (0x089862F4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089858A4;
L_089862F4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089863D8;
      }
      goto L_089862FC;
    }
L_089862FC:
    ctx.gpr[31] = (0x08986304u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089859A0;
L_08986304:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08986310u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 379u, 0x08AED520u>(ctx, &aot_mem) && ctx.pc == 0x08986310u) goto L_08986310;
    return;
L_08986310:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08986320;
      }
      goto L_08986318;
    }
L_08986318:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_08986388;
      }
      goto L_08986320;
    }
L_08986320:
    ctx.gpr[31] = (0x08986328u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08985CFC;
L_08986328:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_08986380;
      }
      goto L_08986344;
    }
L_08986344:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08986380;
      }
      goto L_08986358;
    }
L_08986358:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08986380;
      }
      goto L_0898636C;
    }
L_0898636C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((ctx.fpr[22] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08986388;
      }
      goto L_08986380;
    }
L_08986380:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08986388;
      }
      goto L_08986388;
    }
L_08986388:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089863D8;
      }
      goto L_08986390;
    }
L_08986390:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-26316)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-26316)));
        goto L_089863B4;
    }
    goto L_089863AC;
L_089863AC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089863BC;
      }
      goto L_089863B4;
    }
L_089863B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    goto L_089863BC;
L_089863BC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089863D8;
      }
      goto L_089863C8;
    }
L_089863C8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089863F4;
      }
      goto L_089863D8;
    }
L_089863D8:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 15 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(52));
      if (branch_taken) {
          goto L_089862B0;
      }
      goto L_089863E8;
    }
L_089863E8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[2] = (0u | 1u);
    goto L_089863F4;
L_089863F4:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898641C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (2228u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[19] = (0u | 1u);
    ctx.gpr[17] = (0u | 52u);
    ctx.gpr[16] = (2229u << 16u);
    goto L_08986444;
L_08986444:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-26316)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[19]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] & 128u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
        goto L_08986468;
    }
    goto L_08986460;
L_08986460:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08986474;
      }
      goto L_08986468;
    }
L_08986468:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08986474;
L_08986474:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(6100));
      if (branch_taken) {
          goto L_089864A8;
      }
      goto L_0898647C;
    }
L_0898647C:
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[6] = (ctx.gpr[4] << 2u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(13)));
    ctx.gpr[5] = (ctx.gpr[5] & 131u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089864A8;
      }
      goto L_089864A0;
    }
L_089864A0:
    ctx.gpr[31] = (0x089864A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 469u, 0x089C6068u>(ctx, &aot_mem) && ctx.pc == 0x089864A8u) goto L_089864A8;
    return;
L_089864A8:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 15 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(52));
      if (branch_taken) {
          goto L_08986444;
      }
      goto L_089864B8;
    }
L_089864B8:
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
L_089864D4:
    ctx.gpr[6] = (2228u << 16u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-26316), ctx.gpr[5]);
    ctx.gpr[5] = (2228u << 16u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-26312), static_cast<std::uint8_t>(ctx.gpr[4]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089864E8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2228u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-26380)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[17];
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-26384)));
    ctx.gpr[2] = (2228u << 16u);
    ctx.gpr[6] = (2228u << 16u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-26376), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[3] = (2228u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-26352)));
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = ctx.fpr[16] / ctx.fpr[15];
    ctx.gpr[4] = (2228u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-26356)));
    ctx.gpr[9] = (2228u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-26348), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.gpr[5] = (16014u << 16u);
    ctx.gpr[25] = (2228u << 16u);
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(-26332)));
    ctx.gpr[5] = (ctx.gpr[5] | 14571u);
    aot_mem.aot_store32(ctx.gpr[25] + static_cast<std::uint32_t>(-26340), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[17] / ctx.fpr[12];
    ctx.gpr[13] = (2228u << 16u);
    ctx.gpr[12] = (2228u << 16u);
    aot_mem.aot_store32(ctx.gpr[13] + static_cast<std::uint32_t>(-26368), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[10] = (16672u << 16u);
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(-26372), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[7] = (16281u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[10]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[6] = (ctx.gpr[7] | 39322u);
    ctx.gpr[14] = (2228u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[8] = (16268u << 16u);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.gpr[15] = (2228u << 16u);
    ctx.gpr[7] = (ctx.gpr[8] | 52429u);
    aot_mem.aot_store32(ctx.gpr[14] + static_cast<std::uint32_t>(-26364), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[15] + static_cast<std::uint32_t>(-26360), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[24] = (2228u << 16u);
    ctx.gpr[11] = (15744u << 16u);
    aot_mem.aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(-26344), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[11]);
    ctx.gpr[16] = (2228u << 16u);
    ctx.gpr[17] = (2277u << 16u);
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.gpr[2] = (2228u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(-13536));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-26336), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x089865E4u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-26328), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 582u, 0x088063D8u>(ctx, &aot_mem) && ctx.pc == 0x089865E4u) goto L_089865E4;
    return;
L_089865E4:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[31] = (0x089865F0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26308));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 251u, 0x08AF5420u>(ctx, &aot_mem) && ctx.pc == 0x089865F0u) goto L_089865F0;
    return;
L_089865F0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986604:
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08986680;
      }
      goto L_08986610;
    }
L_08986610:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(-24896));
    ctx.gpr[6] = (2228u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-26296));
    goto L_08986624;
L_08986624:
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[9] = (ctx.gpr[9] & 2u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[5] = (ctx.gpr[2] >> 8u);
      if (branch_taken) {
          goto L_08986658;
      }
      goto L_08986638;
    }
L_08986638:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-32));
    ctx.gpr[8] = (ctx.gpr[8] ^ ctx.gpr[2]);
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    ctx.gpr[8] = (ctx.gpr[8] << 2u);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[6]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] ^ ctx.gpr[8]);
      if (branch_taken) {
          goto L_08986670;
      }
      goto L_08986658;
    }
L_08986658:
    ctx.gpr[8] = (ctx.gpr[8] ^ ctx.gpr[2]);
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    ctx.gpr[8] = (ctx.gpr[8] << 2u);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[6]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] ^ ctx.gpr[8]);
    goto L_08986670;
L_08986670:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[2] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08986624;
      }
      goto L_08986680;
    }
L_08986680:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986688:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-7660), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-6140), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-7096), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6148), 0u);
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6808), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7628), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7632), 0u);
    ctx.gpr[10] = (2277u << 16u);
    ctx.gpr[9] = (2277u << 16u);
    ctx.gpr[8] = (2277u << 16u);
    ctx.gpr[7] = (2277u << 16u);
    ctx.gpr[6] = (2269u << 16u);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(-8768));
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(-8256));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-7744));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-9280));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4880));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6168));
    goto L_089866FC;
L_089866FC:
    aot_mem.aot_store16(ctx.gpr[10] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[9] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(2));
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(2));
    ctx.gpr[11] = (static_cast<std::int32_t>(ctx.gpr[5]) < 256 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[11] != 0u;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089866FC;
      }
      goto L_08986720;
    }
L_08986720:
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6136), 0u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6132), 0u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6128), 0u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-6124), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-6123), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6116), 0u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6112), 0u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6100), 0u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6108), 0u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6104), 0u);
    ctx.gpr[8] = (16256u << 16u);
    ctx.gpr[5] = (2230u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6836), 0u);
    ctx.gpr[8] = (2230u << 16u);
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(-6120), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_0898678C;
L_0898678C:
    aot_mem.aot_store16(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[5]) < 256 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0898678C;
      }
      goto L_089867A0;
    }
L_089867A0:
    ctx.gpr[8] = (ctx.gpr[6] | 0u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-6152), static_cast<std::uint8_t>(0u));
    ctx.gpr[6] = (2233u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4624));
    goto L_089867BC;
L_089867BC:
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[9] = (ctx.gpr[7] + ctx.gpr[6]);
    goto L_089867C8;
L_089867C8:
    aot_mem.aot_store16(ctx.gpr[9] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(1));
    ctx.gpr[11] = (static_cast<std::int32_t>(ctx.gpr[10]) < 256 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[11] != 0u;
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089867C8;
      }
      goto L_089867DC;
    }
L_089867DC:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(4));
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[5]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(512));
      if (branch_taken) {
          goto L_089867BC;
      }
      goto L_089867F0;
    }
L_089867F0:
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-6172));
    goto L_089867FC;
L_089867FC:
    ctx.gpr[7] = (ctx.gpr[5] + ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089867FC;
      }
      goto L_08986818;
    }
L_08986818:
    ctx.gpr[6] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(-6162), static_cast<std::uint8_t>(0u));
    ctx.gpr[6] = (2230u << 16u);
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(-6160), static_cast<std::uint16_t>(0u));
    ctx.gpr[6] = (2230u << 16u);
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(-6040), static_cast<std::uint16_t>(0u));
    ctx.gpr[6] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(-6803), static_cast<std::uint8_t>(0u));
    ctx.gpr[6] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(-6804), static_cast<std::uint8_t>(0u));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (2230u << 16u);
    aot_mem.aot_store16(ctx.gpr[7] + static_cast<std::uint32_t>(-6520), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[6] = (2228u << 16u);
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(-25212), static_cast<std::uint16_t>(0u));
    ctx.gpr[6] = (2230u << 16u);
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(-6192), static_cast<std::uint16_t>(0u));
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(-6184), static_cast<std::uint16_t>(0u));
    ctx.gpr[6] = (2228u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-7828)));
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(-25210), static_cast<std::uint16_t>(0u));
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[7] = (ctx.gpr[4] << 7u);
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(-6182), static_cast<std::uint16_t>(0u));
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[8] = (ctx.gpr[7] + ctx.gpr[7]);
    ctx.gpr[5] = (2233u << 16u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-6180), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[7] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-25840));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-6176), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(248)));
    ctx.gpr[6] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-6096), ctx.gpr[5]);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6092), 0u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6088), 0u);
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(192)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-6084), ctx.gpr[5]);
    ctx.gpr[6] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-6080), ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6076), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6072), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6508), ctx.gpr[5]);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6068), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6064), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6060), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6512), ctx.gpr[5]);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6056), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6052), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6048), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6044), ctx.gpr[5]);
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6516), ctx.gpr[4]);
    ctx.gpr[4] = (17174u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6188), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986958:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6148), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6808), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7628), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7632), 0u);
    ctx.gpr[9] = (2277u << 16u);
    ctx.gpr[8] = (2277u << 16u);
    ctx.gpr[7] = (2277u << 16u);
    ctx.gpr[6] = (2277u << 16u);
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(-8768));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-8256));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-7744));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-9280));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4880));
    goto L_089869A4;
L_089869A4:
    aot_mem.aot_store16(ctx.gpr[9] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(2));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(2));
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[4]) < 256 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089869A4;
      }
      goto L_089869C8;
    }
L_089869C8:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6136), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6132), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6128), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-6124), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-6123), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6116), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6112), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6100), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6108), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6104), 0u);
    ctx.gpr[7] = (16256u << 16u);
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6836), 0u);
    ctx.gpr[7] = (2230u << 16u);
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(-6120), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08986A34;
L_08986A34:
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < 256 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08986A34;
      }
      goto L_08986A48;
    }
L_08986A48:
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4624));
    goto L_08986A60;
L_08986A60:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[12])) && ctx.fpr[13] == ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08986A90;
      }
      goto L_08986A74;
    }
L_08986A74:
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[8] = (ctx.gpr[6] + ctx.gpr[5]);
    goto L_08986A7C;
L_08986A7C:
    aot_mem.aot_store16(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[9]) < 256 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08986A7C;
      }
      goto L_08986A90;
    }
L_08986A90:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[4]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(512));
      if (branch_taken) {
          goto L_08986A60;
      }
      goto L_08986AA4;
    }
L_08986AA4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986AAC:
    ctx.gpr[4] = (2269u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(4880));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(4624));
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(1024), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4880), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(4624), static_cast<std::uint16_t>(0u));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986AD4:
    ctx.gpr[5] = (2230u << 16u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6808), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986AE0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[22]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[19] = (2277u << 16u);
    ctx.gpr[21] = (2277u << 16u);
    ctx.gpr[22] = (2277u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[23]);
    ctx.gpr[17] = (ctx.gpr[5] & 255u);
    ctx.gpr[18] = (ctx.gpr[6] & 255u);
    ctx.gpr[4] = (ctx.gpr[7] & 255u);
    ctx.gpr[20] = (ctx.gpr[19] + static_cast<std::uint32_t>(-8768));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-8256));
    ctx.gpr[23] = (ctx.gpr[22] + static_cast<std::uint32_t>(-7744));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.gpr[30] = (2230u << 16u);
      if (branch_taken) {
          goto L_08986B48;
      }
      goto L_08986B3C;
    }
L_08986B3C:
    ctx.gpr[4] = (2230u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-7096), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08986B74;
      }
      goto L_08986B48;
    }
L_08986B48:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08986B74;
      }
      goto L_08986B50;
    }
L_08986B50:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[9] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[10] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x08986B74u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 495u, 0x0887AFFCu>(ctx, &aot_mem) && ctx.pc == 0x08986B74u) goto L_08986B74;
    return;
L_08986B74:
    ctx.gpr[4] = (0u | 0u);
    goto L_08986B78;
L_08986B78:
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[20]);
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[21]);
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[23]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 256 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08986B78;
      }
      goto L_08986BA8;
    }
L_08986BA8:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08986BB8u);
    ctx.gpr[6] = (0u | 256u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 187u, 0x08878F8Cu>(ctx, &aot_mem) && ctx.pc == 0x08986BB8u) goto L_08986BB8;
    return;
L_08986BB8:
    ctx.gpr[31] = (0x08986BC0u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 348u, 0x08879F60u>(ctx, &aot_mem) && ctx.pc == 0x08986BC0u) goto L_08986BC0;
    return;
L_08986BC0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(-6128)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_08986BE0;
      }
      goto L_08986BCC;
    }
L_08986BCC:
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08986BD8u);
    ctx.gpr[6] = (0u | 256u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 195u, 0x0887900Cu>(ctx, &aot_mem) && ctx.pc == 0x08986BD8u) goto L_08986BD8;
    return;
L_08986BD8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08986BE8;
      }
      goto L_08986BE0;
    }
L_08986BE0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08986BF0;
      }
      goto L_08986BE8;
    }
L_08986BE8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08986C70;
      }
      goto L_08986BF0;
    }
L_08986BF0:
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[21]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 256 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08986BF0;
      }
      goto L_08986C10;
    }
L_08986C10:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08986C24;
      }
      goto L_08986C18;
    }
L_08986C18:
    aot_mem.aot_store16(ctx.gpr[19] + static_cast<std::uint32_t>(-8768), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[22] + static_cast<std::uint32_t>(-7744), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(-6128), 0u);
    goto L_08986C24;
L_08986C24:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08986C5C;
      }
      goto L_08986C2C;
    }
L_08986C2C:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(-6128), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08986C44u);
    ctx.gpr[6] = (0u | 256u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 187u, 0x08878F8Cu>(ctx, &aot_mem) && ctx.pc == 0x08986C44u) goto L_08986C44;
    return;
L_08986C44:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08986C54u);
    ctx.gpr[6] = (0u | 256u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 187u, 0x08878F8Cu>(ctx, &aot_mem) && ctx.pc == 0x08986C54u) goto L_08986C54;
    return;
L_08986C54:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08986C60;
      }
      goto L_08986C5C;
    }
L_08986C5C:
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(-6128), 0u);
    goto L_08986C60;
L_08986C60:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-6124), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-6123), static_cast<std::uint8_t>(ctx.gpr[18]));
    goto L_08986C70;
L_08986C70:
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
L_08986CA0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6128)));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u < ctx.gpr[2] ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986CB0:
    ctx.gpr[5] = (2230u << 16u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6116), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986CBC:
    ctx.gpr[6] = (2277u << 16u);
    ctx.gpr[10] = (ctx.gpr[5] & 255u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-9280));
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    goto L_08986CD8;
L_08986CD8:
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[7]);
      if (branch_taken) {
          goto L_08986D08;
      }
      goto L_08986CE0;
    }
L_08986CE0:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08986D08;
      }
      goto L_08986CEC;
    }
L_08986CEC:
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[9] = (ctx.gpr[9] & 65535u);
    ctx.gpr[7] = (ctx.gpr[9] + ctx.gpr[9]);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[9]) < 256 ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[6]);
      if (branch_taken) {
          goto L_08986CD8;
      }
      goto L_08986D08;
    }
L_08986D08:
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (2230u << 16u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-6152), static_cast<std::uint8_t>(ctx.gpr[10]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986D18:
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[7] = (2269u << 16u);
    ctx.gpr[6] = (ctx.gpr[5] << 2u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4880));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[12])) && ctx.fpr[13] == ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08986E20;
      }
      goto L_08986D44;
    }
L_08986D44:
    ctx.gpr[2] = (ctx.gpr[5] | 0u);
    ctx.gpr[8] = (ctx.gpr[2] << 9u);
    ctx.gpr[6] = (2233u << 16u);
    ctx.gpr[12] = (ctx.gpr[8] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4624));
    ctx.gpr[7] = (2277u << 16u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[3] = (0u | 5u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-13440));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    ctx.gpr[5] = (ctx.gpr[12] + ctx.gpr[6]);
      if (branch_taken) {
          goto L_08986DDC;
      }
      goto L_08986D78;
    }
L_08986D78:
    ctx.gpr[12] = (ctx.gpr[12] + ctx.gpr[7]);
    ctx.gpr[3] = (2230u << 16u);
    ctx.gpr[2] = (2228u << 16u);
    goto L_08986D84;
L_08986D84:
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.gpr[10] = (ctx.gpr[4] + ctx.gpr[9]);
      if (branch_taken) {
          goto L_08986E18;
      }
      goto L_08986D8C;
    }
L_08986D8C:
    ctx.gpr[9] = (aot_mem.aot_load16(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_08986E18;
      }
      goto L_08986D98;
    }
L_08986D98:
    ctx.gpr[13] = (aot_mem.aot_load16(ctx.gpr[12] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[9] == ctx.gpr[13];
    // nop
      if (branch_taken) {
          goto L_08986DB0;
      }
      goto L_08986DA4;
    }
L_08986DA4:
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-6176), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(-25210), static_cast<std::uint16_t>(0u));
    ctx.gpr[9] = (aot_mem.aot_load16(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    goto L_08986DB0;
L_08986DB0:
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[9]));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(1));
    ctx.gpr[11] = (ctx.gpr[11] & 65535u);
    aot_mem.aot_store16(ctx.gpr[12] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[9] = (ctx.gpr[11] + ctx.gpr[11]);
    ctx.gpr[5] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[12] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[11]) < 256 ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
      if (branch_taken) {
          goto L_08986D84;
      }
      goto L_08986DDC;
    }
L_08986DDC:
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.gpr[9] = (ctx.gpr[4] + ctx.gpr[9]);
      if (branch_taken) {
          goto L_08986E10;
      }
      goto L_08986DE4;
    }
L_08986DE4:
    ctx.gpr[9] = (aot_mem.aot_load16(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_08986E10;
      }
      goto L_08986DF0;
    }
L_08986DF0:
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[9]));
    ctx.gpr[11] = (ctx.gpr[11] & 65535u);
    ctx.gpr[9] = (ctx.gpr[11] + ctx.gpr[11]);
    ctx.gpr[12] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[11]) < 256 ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[12] + ctx.gpr[6]);
      if (branch_taken) {
          goto L_08986DDC;
      }
      goto L_08986E10;
    }
L_08986E10:
    ctx.gpr[12] = (ctx.gpr[12] + ctx.gpr[7]);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    goto L_08986E18;
L_08986E18:
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[12] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    goto L_08986E20;
L_08986E20:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986E28:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986E30:
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[6] = (ctx.gpr[5] << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 16u));
    ctx.gpr[7] = (2233u << 16u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4624));
    goto L_08986E50;
L_08986E50:
    { const bool branch_taken = ctx.gpr[10] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08986E7C;
      }
      goto L_08986E58;
    }
L_08986E58:
    { const bool branch_taken = ctx.gpr[10] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08986E7C;
      }
      goto L_08986E60;
    }
L_08986E60:
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[8] + ctx.gpr[7]);
    goto L_08986E68;
L_08986E68:
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    ctx.gpr[11] = (static_cast<std::int32_t>(ctx.gpr[9]) < 256 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[11] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08986E68;
      }
      goto L_08986E7C;
    }
L_08986E7C:
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[10]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(512));
      if (branch_taken) {
          goto L_08986E50;
      }
      goto L_08986E8C;
    }
L_08986E8C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986E94:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6148), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6808), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7628), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7632), 0u);
    ctx.gpr[8] = (2277u << 16u);
    ctx.gpr[7] = (2277u << 16u);
    ctx.gpr[6] = (2277u << 16u);
    ctx.gpr[4] = (2277u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-8768));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-8256));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-7744));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9280));
    goto L_08986ED8;
L_08986ED8:
    aot_mem.aot_store16(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(2));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(2));
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[5]) < 256 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08986ED8;
      }
      goto L_08986EFC;
    }
L_08986EFC:
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6136), 0u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6132), 0u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6128), 0u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-6124), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-6123), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6116), 0u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6112), 0u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6100), 0u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6108), 0u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6104), 0u);
    ctx.gpr[6] = (16256u << 16u);
    ctx.gpr[5] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6836), 0u);
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-6120), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08986F68;
L_08986F68:
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 256 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08986F68;
      }
      goto L_08986F7C;
    }
L_08986F7C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986F84:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27772)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08986FA0;
      }
      goto L_08986F94;
    }
L_08986F94:
    ctx.gpr[4] = (17080u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08986FAC;
      }
      goto L_08986FA0;
    }
L_08986FA0:
    ctx.gpr[4] = (17027u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_08986FAC;
L_08986FAC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986FB4:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27772)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08986FD0;
      }
      goto L_08986FC4;
    }
L_08986FC4:
    ctx.gpr[4] = (17080u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08986FDC;
      }
      goto L_08986FD0;
    }
L_08986FD0:
    ctx.gpr[4] = (17027u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_08986FDC;
L_08986FDC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986FE4:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27772)));
    ctx.gpr[5] = (16704u << 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[5]);
      if (branch_taken) {
          goto L_08987000;
      }
      goto L_08986FF8;
    }
L_08986FF8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08987000;
      }
      goto L_08987000;
    }
L_08987000:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08987008:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27772)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08987024;
      }
      goto L_08987018;
    }
L_08987018:
    ctx.gpr[4] = (17194u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_0898702C;
      }
      goto L_08987024;
    }
L_08987024:
    ctx.gpr[4] = (17220u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_0898702C;
L_0898702C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08987034:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[4] = (16079u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 16882u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16225u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 18350u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x08987058u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 197u, 0x08A54DF8u>(ctx, &aot_mem) && ctx.pc == 0x08987058u) goto L_08987058;
    return;
L_08987058:
    ctx.gpr[31] = (0x08987060u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 227u, 0x08A55054u>(ctx, &aot_mem) && ctx.pc == 0x08987060u) goto L_08987060;
    return;
L_08987060:
    ctx.gpr[31] = (0x08987068u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 206u, 0x08A54EE8u>(ctx, &aot_mem) && ctx.pc == 0x08987068u) goto L_08987068;
    return;
L_08987068:
    ctx.gpr[31] = (0x08987070u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 207u, 0x08A54EF8u>(ctx, &aot_mem) && ctx.pc == 0x08987070u) goto L_08987070;
    return;
L_08987070:
    ctx.gpr[31] = (0x08987078u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 209u, 0x08A54F2Cu>(ctx, &aot_mem) && ctx.pc == 0x08987078u) goto L_08987078;
    return;
L_08987078:
    ctx.gpr[31] = (0x08987080u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 232u, 0x08A5509Cu>(ctx, &aot_mem) && ctx.pc == 0x08987080u) goto L_08987080;
    return;
L_08987080:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08987098u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x08987098u) goto L_08987098;
    return;
L_08987098:
    ctx.gpr[31] = (0x089870A0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 233u, 0x08A550ACu>(ctx, &aot_mem) && ctx.pc == 0x089870A0u) goto L_089870A0;
    return;
L_089870A0:
    ctx.gpr[31] = (0x089870A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 221u, 0x08A54FD0u>(ctx, &aot_mem) && ctx.pc == 0x089870A8u) goto L_089870A8;
    return;
L_089870A8:
    ctx.gpr[31] = (0x089870B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 224u, 0x08A55020u>(ctx, &aot_mem) && ctx.pc == 0x089870B0u) goto L_089870B0;
    return;
L_089870B0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089870BC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-160));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-7828)));
    ctx.gpr[6] = (ctx.gpr[5] << 7u);
    ctx.gpr[8] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[8]);
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[5] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(-6520))))));
    ctx.gpr[9] = (16256u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[22] = std::bit_cast<float>(0u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[7] = (0u | 4u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[7];
    ctx.gpr[16] = (2228u << 16u);
      if (branch_taken) {
          goto L_08987190;
      }
      goto L_0898714C;
    }
L_0898714C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (16672u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(1208)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[14]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(359)));
        goto L_08987194;
    }
    goto L_0898716C;
L_0898716C:
    ctx.gpr[7] = (2228u << 16u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-24612)));
    ctx.gpr[9] = (ctx.gpr[8] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[8] != 0u;
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(-24612), ctx.gpr[9]);
      if (branch_taken) {
          goto L_08987190;
      }
      goto L_08987180;
    }
L_08987180:
    ctx.gpr[8] = (0u | 50u);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(-24612), ctx.gpr[8]);
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(-6520), static_cast<std::uint16_t>(ctx.gpr[7]));
    goto L_08987190;
L_08987190:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(359)));
    goto L_08987194;
L_08987194:
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[20])));
    ctx.set_fpu_condition((ctx.fpr[24] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089871B8;
      }
      goto L_089871B0;
    }
L_089871B0:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
      if (branch_taken) {
          goto L_089871CC;
      }
      goto L_089871B8;
    }
L_089871B8:
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089871CC;
      }
      goto L_089871C8;
    }
L_089871C8:
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    goto L_089871CC;
L_089871CC:
    ctx.fpr[13] = ctx.fpr[24] / ctx.fpr[20];
    ctx.gpr[5] = (16928u << 16u);
    ctx.gpr[6] = (16768u << 16u);
    ctx.gpr[7] = (16512u << 16u);
    ctx.gpr[8] = (15488u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[7]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[15];
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[16];
    { const bool branch_taken = ctx.gpr[4] != 0u;
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
      if (branch_taken) {
          goto L_08987210;
      }
      goto L_08987204;
    }
L_08987204:
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
      if (branch_taken) {
          goto L_0898722C;
      }
      goto L_08987210;
    }
L_08987210:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[20])) && ctx.fpr[12] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (16267u << 16u);
      if (branch_taken) {
          goto L_08987230;
      }
      goto L_08987220;
    }
L_08987220:
    ctx.gpr[4] = (17024u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_0898722C;
L_0898722C:
    ctx.gpr[4] = (16267u << 16u);
    goto L_08987230;
L_08987230:
    ctx.gpr[4] = (ctx.gpr[4] | 34079u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (17328u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (16936u << 16u);
    ctx.gpr[6] = (17000u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(68));
    ctx.fpr[30] = ctx.fpr[13] + ctx.fpr[12];
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08987278u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 133u, 0x089FD378u>(ctx, &aot_mem) && ctx.pc == 0x08987278u) goto L_08987278;
    return;
L_08987278:
    ctx.gpr[7] = (2277u << 16u);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[19] = (ctx.gpr[7] + static_cast<std::uint32_t>(-7232));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(-24628)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[20] = (ctx.gpr[19] + static_cast<std::uint32_t>(244));
    ctx.gpr[31] = (0x089872A0u);
    ctx.gpr[7] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x089872A0u) goto L_089872A0;
    return;
L_089872A0:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x089872D0u);
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 918u, 0x08AD3BE4u>(ctx, &aot_mem) && ctx.pc == 0x089872D0u) goto L_089872D0;
    return;
L_089872D0:
    ctx.gpr[5] = (17362u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[5] = (ctx.gpr[5] | 57672u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[31] = (0x089872F8u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 133u, 0x089FD378u>(ctx, &aot_mem) && ctx.pc == 0x089872F8u) goto L_089872F8;
    return;
L_089872F8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[5]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(-24628)));
    ctx.gpr[21] = (ctx.gpr[19] + static_cast<std::uint32_t>(232));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[31] = (0x08987344u);
    ctx.gpr[7] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x08987344u) goto L_08987344;
    return;
L_08987344:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[31] = (0x08987374u);
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 918u, 0x08AD3BE4u>(ctx, &aot_mem) && ctx.pc == 0x08987374u) goto L_08987374;
    return;
L_08987374:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[31] = (0x0898738Cu);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 133u, 0x089FD378u>(ctx, &aot_mem) && ctx.pc == 0x0898738Cu) goto L_0898738C;
    return;
L_0898738C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[5]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(-24628)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(248));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[31] = (0x089873D8u);
    ctx.gpr[7] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x089873D8u) goto L_089873D8;
    return;
L_089873D8:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[31] = (0x08987408u);
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 918u, 0x08AD3BE4u>(ctx, &aot_mem) && ctx.pc == 0x08987408u) goto L_08987408;
    return;
L_08987408:
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0898752C;
      }
      goto L_08987424;
    }
L_08987424:
    ctx.gpr[31] = (0x0898742Cu);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 227u, 0x08A55054u>(ctx, &aot_mem) && ctx.pc == 0x0898742Cu) goto L_0898742C;
    return;
L_0898742C:
    ctx.gpr[31] = (0x08987434u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 232u, 0x08A5509Cu>(ctx, &aot_mem) && ctx.pc == 0x08987434u) goto L_08987434;
    return;
L_08987434:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(84));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(-24628)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08987450u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x08987450u) goto L_08987450;
    return;
L_08987450:
    ctx.gpr[31] = (0x08987458u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 233u, 0x08A550ACu>(ctx, &aot_mem) && ctx.pc == 0x08987458u) goto L_08987458;
    return;
L_08987458:
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(-24628)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[31] = (0x08987470u);
    ctx.gpr[7] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x08987470u) goto L_08987470;
    return;
L_08987470:
    ctx.gpr[31] = (0x08987478u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 200u, 0x08A54E30u>(ctx, &aot_mem) && ctx.pc == 0x08987478u) goto L_08987478;
    return;
L_08987478:
    ctx.gpr[31] = (0x08987480u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 205u, 0x08A54ECCu>(ctx, &aot_mem) && ctx.pc == 0x08987480u) goto L_08987480;
    return;
L_08987480:
    ctx.gpr[4] = (17146u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[16] = (2233u << 16u);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-4576));
      if (branch_taken) {
          goto L_089874D0;
      }
      goto L_0898749C;
    }
L_0898749C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089874A8u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 403u, 0x08AD9B5Cu>(ctx, &aot_mem) && ctx.pc == 0x089874A8u) goto L_089874A8;
    return;
L_089874A8:
    ctx.gpr[5] = (16384u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089874BCu);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 407u, 0x08AD9BA0u>(ctx, &aot_mem) && ctx.pc == 0x089874BCu) goto L_089874BC;
    return;
L_089874BC:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x089874C8u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 197u, 0x08A54DF8u>(ctx, &aot_mem) && ctx.pc == 0x089874C8u) goto L_089874C8;
    return;
L_089874C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08987508;
      }
      goto L_089874D0;
    }
L_089874D0:
    ctx.gpr[5] = (16179u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 13107u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089874E4u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 403u, 0x08AD9B5Cu>(ctx, &aot_mem) && ctx.pc == 0x089874E4u) goto L_089874E4;
    return;
L_089874E4:
    ctx.gpr[4] = (16307u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x089874FCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 407u, 0x08AD9BA0u>(ctx, &aot_mem) && ctx.pc == 0x089874FCu) goto L_089874FC;
    return;
L_089874FC:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08987508u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 197u, 0x08A54DF8u>(ctx, &aot_mem) && ctx.pc == 0x08987508u) goto L_08987508;
    return;
L_08987508:
    ctx.gpr[4] = (17337u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 32768u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (16920u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x0898752Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-21912));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56AD4u>(ctx, &aot_mem) && ctx.pc == 0x0898752Cu) goto L_0898752C;
    return;
L_0898752C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08987568:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-160));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-7828)));
    ctx.gpr[6] = (ctx.gpr[5] << 7u);
    ctx.gpr[8] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[8]);
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[5] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(-6520))))));
    ctx.gpr[9] = (16256u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[22] = std::bit_cast<float>(0u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[7] = (0u | 3u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[7];
    ctx.gpr[16] = (2228u << 16u);
      if (branch_taken) {
          goto L_0898763C;
      }
      goto L_089875F8;
    }
L_089875F8:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (16672u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(1212)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[14]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(360)));
        goto L_08987640;
    }
    goto L_08987618;
L_08987618:
    ctx.gpr[7] = (2228u << 16u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-24608)));
    ctx.gpr[9] = (ctx.gpr[8] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[8] != 0u;
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(-24608), ctx.gpr[9]);
      if (branch_taken) {
          goto L_0898763C;
      }
      goto L_0898762C;
    }
L_0898762C:
    ctx.gpr[8] = (0u | 50u);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(-24608), ctx.gpr[8]);
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(-6520), static_cast<std::uint16_t>(ctx.gpr[7]));
    goto L_0898763C;
L_0898763C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(360)));
    goto L_08987640;
L_08987640:
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[20])));
    ctx.set_fpu_condition((ctx.fpr[24] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08987664;
      }
      goto L_0898765C;
    }
L_0898765C:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
      if (branch_taken) {
          goto L_08987678;
      }
      goto L_08987664;
    }
L_08987664:
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08987678;
      }
      goto L_08987674;
    }
L_08987674:
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    goto L_08987678;
L_08987678:
    ctx.fpr[13] = ctx.fpr[24] / ctx.fpr[20];
    ctx.gpr[5] = (16928u << 16u);
    ctx.gpr[6] = (16768u << 16u);
    ctx.gpr[7] = (16512u << 16u);
    ctx.gpr[8] = (15488u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[7]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[15];
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[16];
    { const bool branch_taken = ctx.gpr[4] != 0u;
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
      if (branch_taken) {
          goto L_089876BC;
      }
      goto L_089876B0;
    }
L_089876B0:
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
      if (branch_taken) {
          goto L_089876D8;
      }
      goto L_089876BC;
    }
L_089876BC:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[20])) && ctx.fpr[12] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (16267u << 16u);
      if (branch_taken) {
          goto L_089876DC;
      }
      goto L_089876CC;
    }
L_089876CC:
    ctx.gpr[4] = (17024u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_089876D8;
L_089876D8:
    ctx.gpr[4] = (16267u << 16u);
    goto L_089876DC;
L_089876DC:
    ctx.gpr[4] = (ctx.gpr[4] | 34079u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (17328u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (16840u << 16u);
    ctx.gpr[6] = (16932u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(68));
    ctx.fpr[30] = ctx.fpr[13] + ctx.fpr[12];
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08987724u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 133u, 0x089FD378u>(ctx, &aot_mem) && ctx.pc == 0x08987724u) goto L_08987724;
    return;
L_08987724:
    ctx.gpr[7] = (2277u << 16u);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[19] = (ctx.gpr[7] + static_cast<std::uint32_t>(-7232));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(-24628)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[20] = (ctx.gpr[19] + static_cast<std::uint32_t>(240));
    ctx.gpr[31] = (0x0898774Cu);
    ctx.gpr[7] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x0898774Cu) goto L_0898774C;
    return;
L_0898774C:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x0898777Cu);
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 918u, 0x08AD3BE4u>(ctx, &aot_mem) && ctx.pc == 0x0898777Cu) goto L_0898777C;
    return;
L_0898777C:
    ctx.gpr[5] = (17362u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[5] = (ctx.gpr[5] | 57672u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[31] = (0x089877A4u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 133u, 0x089FD378u>(ctx, &aot_mem) && ctx.pc == 0x089877A4u) goto L_089877A4;
    return;
L_089877A4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[5]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(-24628)));
    ctx.gpr[21] = (ctx.gpr[19] + static_cast<std::uint32_t>(228));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[31] = (0x089877F0u);
    ctx.gpr[7] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x089877F0u) goto L_089877F0;
    return;
L_089877F0:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[31] = (0x08987820u);
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 918u, 0x08AD3BE4u>(ctx, &aot_mem) && ctx.pc == 0x08987820u) goto L_08987820;
    return;
L_08987820:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[31] = (0x08987838u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 133u, 0x089FD378u>(ctx, &aot_mem) && ctx.pc == 0x08987838u) goto L_08987838;
    return;
L_08987838:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[5]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(-24628)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(248));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[31] = (0x08987884u);
    ctx.gpr[7] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x08987884u) goto L_08987884;
    return;
L_08987884:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[31] = (0x089878B4u);
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 918u, 0x08AD3BE4u>(ctx, &aot_mem) && ctx.pc == 0x089878B4u) goto L_089878B4;
    return;
L_089878B4:
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089879D8;
      }
      goto L_089878D0;
    }
L_089878D0:
    ctx.gpr[31] = (0x089878D8u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 227u, 0x08A55054u>(ctx, &aot_mem) && ctx.pc == 0x089878D8u) goto L_089878D8;
    return;
L_089878D8:
    ctx.gpr[31] = (0x089878E0u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 232u, 0x08A5509Cu>(ctx, &aot_mem) && ctx.pc == 0x089878E0u) goto L_089878E0;
    return;
L_089878E0:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(84));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(-24628)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x089878FCu);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x089878FCu) goto L_089878FC;
    return;
L_089878FC:
    ctx.gpr[31] = (0x08987904u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 233u, 0x08A550ACu>(ctx, &aot_mem) && ctx.pc == 0x08987904u) goto L_08987904;
    return;
L_08987904:
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(-24628)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[31] = (0x0898791Cu);
    ctx.gpr[7] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x0898791Cu) goto L_0898791C;
    return;
L_0898791C:
    ctx.gpr[31] = (0x08987924u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 200u, 0x08A54E30u>(ctx, &aot_mem) && ctx.pc == 0x08987924u) goto L_08987924;
    return;
L_08987924:
    ctx.gpr[31] = (0x0898792Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 205u, 0x08A54ECCu>(ctx, &aot_mem) && ctx.pc == 0x0898792Cu) goto L_0898792C;
    return;
L_0898792C:
    ctx.gpr[4] = (17146u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[16] = (2233u << 16u);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-4576));
      if (branch_taken) {
          goto L_0898797C;
      }
      goto L_08987948;
    }
L_08987948:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08987954u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 403u, 0x08AD9B5Cu>(ctx, &aot_mem) && ctx.pc == 0x08987954u) goto L_08987954;
    return;
L_08987954:
    ctx.gpr[5] = (16384u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08987968u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 407u, 0x08AD9BA0u>(ctx, &aot_mem) && ctx.pc == 0x08987968u) goto L_08987968;
    return;
L_08987968:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08987974u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 197u, 0x08A54DF8u>(ctx, &aot_mem) && ctx.pc == 0x08987974u) goto L_08987974;
    return;
L_08987974:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089879B4;
      }
      goto L_0898797C;
    }
L_0898797C:
    ctx.gpr[5] = (16179u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 13107u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08987990u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 403u, 0x08AD9B5Cu>(ctx, &aot_mem) && ctx.pc == 0x08987990u) goto L_08987990;
    return;
L_08987990:
    ctx.gpr[4] = (16307u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x089879A8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 407u, 0x08AD9BA0u>(ctx, &aot_mem) && ctx.pc == 0x089879A8u) goto L_089879A8;
    return;
L_089879A8:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x089879B4u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 197u, 0x08A54DF8u>(ctx, &aot_mem) && ctx.pc == 0x089879B4u) goto L_089879B4;
    return;
L_089879B4:
    ctx.gpr[4] = (17337u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 32768u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (16808u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089879D8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-21912));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56AD4u>(ctx, &aot_mem) && ctx.pc == 0x089879D8u) goto L_089879D8;
    return;
L_089879D8:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08987A14:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27772)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08987A6C;
      }
      goto L_08987A30;
    }
L_08987A30:
    ctx.gpr[31] = (0x08987A38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08987A38u) goto L_08987A38;
    return;
L_08987A38:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08987A44u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 310u, 0x089454F4u>(ctx, &aot_mem) && ctx.pc == 0x08987A44u) goto L_08987A44;
    return;
L_08987A44:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08987A64;
      }
      goto L_08987A4C;
    }
L_08987A4C:
    ctx.gpr[31] = (0x08987A54u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 322u, 0x08945574u>(ctx, &aot_mem) && ctx.pc == 0x08987A54u) goto L_08987A54;
    return;
L_08987A54:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08987A74;
      }
      goto L_08987A5C;
    }
L_08987A5C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08987AAC;
      }
      goto L_08987A64;
    }
L_08987A64:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08987B84;
      }
      goto L_08987A6C;
    }
L_08987A6C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08987B84;
      }
      goto L_08987A74;
    }
L_08987A74:
    ctx.gpr[31] = (0x08987A7Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 350u, 0x08945790u>(ctx, &aot_mem) && ctx.pc == 0x08987A7Cu) goto L_08987A7C;
    return;
L_08987A7C:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[5] = (0u | 30u);
    ctx.gpr[6] = (0u | 130u);
    ctx.gpr[7] = (0u | 230u);
    ctx.gpr[31] = (0x08987A98u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x08987A98u) goto L_08987A98;
    return;
L_08987A98:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08987AA4u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 674u, 0x08917868u>(ctx, &aot_mem) && ctx.pc == 0x08987AA4u) goto L_08987AA4;
    return;
L_08987AA4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08987B84;
      }
      goto L_08987AAC;
    }
L_08987AAC:
    ctx.gpr[31] = (0x08987AB4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 324u, 0x08945590u>(ctx, &aot_mem) && ctx.pc == 0x08987AB4u) goto L_08987AB4;
    return;
L_08987AB4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08987AF4;
      }
      goto L_08987ABC;
    }
L_08987ABC:
    ctx.gpr[31] = (0x08987AC4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 350u, 0x08945790u>(ctx, &aot_mem) && ctx.pc == 0x08987AC4u) goto L_08987AC4;
    return;
L_08987AC4:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[5] = (0u | 235u);
    ctx.gpr[6] = (0u | 45u);
    ctx.gpr[7] = (0u | 45u);
    ctx.gpr[31] = (0x08987AE0u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x08987AE0u) goto L_08987AE0;
    return;
L_08987AE0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08987AECu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 674u, 0x08917868u>(ctx, &aot_mem) && ctx.pc == 0x08987AECu) goto L_08987AEC;
    return;
L_08987AEC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08987B84;
      }
      goto L_08987AF4;
    }
L_08987AF4:
    ctx.gpr[31] = (0x08987AFCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 323u, 0x08945580u>(ctx, &aot_mem) && ctx.pc == 0x08987AFCu) goto L_08987AFC;
    return;
L_08987AFC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08987B3C;
      }
      goto L_08987B04;
    }
L_08987B04:
    ctx.gpr[31] = (0x08987B0Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 350u, 0x08945790u>(ctx, &aot_mem) && ctx.pc == 0x08987B0Cu) goto L_08987B0C;
    return;
L_08987B0C:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.gpr[5] = (0u | 235u);
    ctx.gpr[6] = (0u | 220u);
    ctx.gpr[7] = (0u | 220u);
    ctx.gpr[31] = (0x08987B28u);
    ctx.gpr[8] = (0u | 220u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x08987B28u) goto L_08987B28;
    return;
L_08987B28:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08987B34u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 674u, 0x08917868u>(ctx, &aot_mem) && ctx.pc == 0x08987B34u) goto L_08987B34;
    return;
L_08987B34:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08987B84;
      }
      goto L_08987B3C;
    }
L_08987B3C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3228)));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08987B84;
      }
      goto L_08987B54;
    }
L_08987B54:
    ctx.gpr[31] = (0x08987B5Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 350u, 0x08945790u>(ctx, &aot_mem) && ctx.pc == 0x08987B5Cu) goto L_08987B5C;
    return;
L_08987B5C:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.gpr[5] = (0u | 235u);
    ctx.gpr[6] = (0u | 220u);
    ctx.gpr[7] = (0u | 220u);
    ctx.gpr[31] = (0x08987B78u);
    ctx.gpr[8] = (0u | 220u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x08987B78u) goto L_08987B78;
    return;
L_08987B78:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08987B84u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 674u, 0x08917868u>(ctx, &aot_mem) && ctx.pc == 0x08987B84u) goto L_08987B84;
    return;
L_08987B84:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08987B94:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-224));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-7828)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(192)));
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(220), ctx.gpr[31]);
    ctx.gpr[31] = (0x08987BE0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21908));
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 806u, 0x08AEB698u>(ctx, &aot_mem) && ctx.pc == 0x08987BE0u) goto L_08987BE0;
    return;
L_08987BE0:
    ctx.gpr[6] = (17336u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 32768u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (17008u << 16u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08987C00u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    goto L_08987DAC;
L_08987C00:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(220)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08987C10:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-240));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(220), ctx.gpr[17]);
    ctx.gpr[17] = (2228u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(-24624)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (2228u << 16u);
      if (branch_taken) {
          goto L_08987D3C;
      }
      goto L_08987C30;
    }
L_08987C30:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(-24622)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (0u | 60u);
      if (branch_taken) {
          goto L_08987CCC;
      }
      goto L_08987C3C;
    }
L_08987C3C:
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[4] = (17008u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[12] / ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[7] = (2228u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(-24626)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[7] - ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08987C8C;
      }
      goto L_08987C84;
    }
L_08987C84:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(60));
    goto L_08987C8C;
L_08987C8C:
    ctx.gpr[7] = (2228u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(-24627)));
    ctx.gpr[5] = (ctx.gpr[7] - ctx.gpr[5]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08987CA4;
      }
      goto L_08987CA0;
    }
L_08987CA0:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(24));
    goto L_08987CA4;
L_08987CA4:
    ctx.gpr[7] = (2230u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(-7768)));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[5];
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_08987CCC;
      }
      goto L_08987CB4;
    }
L_08987CB4:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-7767)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08987CCC;
      }
      goto L_08987CC0;
    }
L_08987CC0:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(-24622), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(-24622)));
    goto L_08987CCC;
L_08987CCC:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08987D3C;
      }
      goto L_08987CD4;
    }
L_08987CD4:
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(-24622), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(-24622)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08987D08;
      }
      goto L_08987CEC;
    }
L_08987CEC:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(-24622), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (0u | 167u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08987D08u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 138u, 0x088649ECu>(ctx, &aot_mem) && ctx.pc == 0x08987D08u) goto L_08987D08;
    return;
L_08987D08:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-7768)));
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-24627)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_08987D3C;
      }
      goto L_08987D20;
    }
L_08987D20:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-7767)));
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-24626)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08987D3C;
      }
      goto L_08987D34;
    }
L_08987D34:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(-24622), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(-24624), static_cast<std::uint16_t>(0u));
    goto L_08987D3C;
L_08987D3C:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(-24622)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 11 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08987D54;
      }
      goto L_08987D4C;
    }
L_08987D4C:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08987D98;
      }
      goto L_08987D54;
    }
L_08987D54:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-7768)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-7767)));
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08987D78u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21900));
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 806u, 0x08AEB698u>(ctx, &aot_mem) && ctx.pc == 0x08987D78u) goto L_08987D78;
    return;
L_08987D78:
    ctx.gpr[6] = (17336u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 32768u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (16640u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08987D98u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    goto L_08987DAC;
L_08987D98:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(220)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08987DAC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-160));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[30]);
    ctx.gpr[20] = (ctx.gpr[5] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[16]);
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[23] = (2228u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[19]);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(-24628)));
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[31]);
    ctx.gpr[31] = (0x08987E28u);
    ctx.gpr[7] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x08987E28u) goto L_08987E28;
    return;
L_08987E28:
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (16720u << 16u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 5u, 0x08988078u>(ctx, &aot_mem); return;
      }
      goto L_08987E38;
    }
L_08987E38:
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2277u << 16u);
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[12];
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7232));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(236));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[4]);
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[22] = (0u | 22u);
    ctx.gpr[4] = (15872u << 16u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.gpr[4] = (16008u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (17392u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_08987E80;
L_08987E80:
    ctx.gpr[16] = (ctx.gpr[16] & 255u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 48 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 58 ? 1u : 0u);
      if (branch_taken) {
          goto L_08987ED8;
      }
      goto L_08987E90;
    }
L_08987E90:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08987ED8;
      }
      goto L_08987E98;
    }
L_08987E98:
    { const bool branch_taken = ctx.gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_08987EBC;
      }
      goto L_08987EA0;
    }
L_08987EA0:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-48));
    ctx.gpr[16] = (ctx.gpr[16] & 255u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 3u));
    ctx.gpr[4] = (ctx.gpr[4] >> 29u);
    ctx.gpr[17] = (ctx.gpr[16] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 3u));
      if (branch_taken) {
          goto L_08987F8C;
      }
      goto L_08987EBC;
    }
L_08987EBC:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-37));
    ctx.gpr[16] = (ctx.gpr[16] & 255u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 3u));
    ctx.gpr[4] = (ctx.gpr[4] >> 29u);
    ctx.gpr[17] = (ctx.gpr[16] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 3u));
      if (branch_taken) {
          goto L_08987F8C;
      }
      goto L_08987ED8;
    }
L_08987ED8:
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_08987F70;
      }
      goto L_08987EE0;
    }
L_08987EE0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 3u));
    ctx.gpr[5] = (ctx.gpr[4] >> 29u);
    ctx.gpr[17] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(-24628)));
    { const bool branch_taken = ctx.gpr[20] != 0u;
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 3u));
      if (branch_taken) {
          goto L_08987F34;
      }
      goto L_08987EF8;
    }
L_08987EF8:
    ctx.gpr[8] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(68));
    ctx.gpr[5] = (0u | 241u);
    ctx.gpr[6] = (0u | 170u);
    ctx.gpr[31] = (0x08987F10u);
    ctx.gpr[7] = (0u | 57u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x08987F10u) goto L_08987F10;
    return;
L_08987F10:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(49), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(50), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(51), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08987F8C;
      }
      goto L_08987F34;
    }
L_08987F34:
    ctx.gpr[8] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(72));
    ctx.gpr[5] = (0u | 62u);
    ctx.gpr[6] = (0u | 141u);
    ctx.gpr[31] = (0x08987F4Cu);
    ctx.gpr[7] = (0u | 188u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x08987F4Cu) goto L_08987F4C;
    return;
L_08987F4C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(49), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(50), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(51), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08987F8C;
      }
      goto L_08987F70;
    }
L_08987F70:
    { const bool branch_taken = ctx.gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_08987F84;
      }
      goto L_08987F78;
    }
L_08987F78:
    ctx.gpr[16] = (0u | 10u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_08987F8C;
      }
      goto L_08987F84;
    }
L_08987F84:
    ctx.gpr[16] = (0u | 21u);
    ctx.gpr[17] = (0u | 2u);
    goto L_08987F8C;
L_08987F8C:
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[17] = (ctx.gpr[18] << 3u);
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[22];
    ctx.gpr[17] = (ctx.gpr[16] - ctx.gpr[17]);
      if (branch_taken) {
          goto L_08987FAC;
      }
      goto L_08987FA0;
    }
L_08987FA0:
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[22] + ctx.fpr[12];
    goto L_08987FAC;
L_08987FAC:
    ctx.fpr[14] = ctx.fpr[20] + ctx.fpr[12];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[4] = (16768u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.fpr[15] = ctx.fpr[13] + ctx.fpr[15];
    ctx.gpr[31] = (0x08987FCCu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 133u, 0x089FD378u>(ctx, &aot_mem) && ctx.pc == 0x08987FCCu) goto L_08987FCC;
    return;
L_08987FCC:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (static_cast<std::int32_t>(ctx.gpr[17]) < 0) {
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[30];
        goto L_08987FDC;
    }
    goto L_08987FDC;
L_08987FDC:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[18]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    if (static_cast<std::int32_t>(ctx.gpr[18]) < 0) {
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[30];
        goto L_08987FF0;
    }
    goto L_08987FF0;
L_08987FF0:
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    ctx.fpr[14] = ctx.fpr[28] + ctx.fpr[12];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.pc = 0x08988000u; return;
}

void recomp_unit_0096(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0096_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_96(Runtime &runtime) {
    runtime.register_generated_unit(96u, 0x08984000u, 16384u, &recomp_unit_0096, &recomp_unit_0096_entry);
    runtime.register_function(0x08984000u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984030u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898403Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984084u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898408Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984090u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089840A8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089840C8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089840DCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089840E8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984114u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984120u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984134u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984144u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984158u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984160u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898418Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984198u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984270u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898427Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089842F4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984300u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898438Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089843A0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089843ACu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984414u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984424u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984438u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898444Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898445Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984470u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984478u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898448Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984494u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898449Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089844ACu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089844C0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089844CCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089844ECu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089844FCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898450Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898451Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898452Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984540u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984554u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984560u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984570u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984584u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984594u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089845A8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089845B8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089845CCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089845DCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089845F0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984600u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984638u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984648u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898465Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898466Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984678u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984688u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898469Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089846ACu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089846D8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089846E8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089846FCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898470Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984720u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898472Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984744u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984750u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898475Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898476Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984778u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898479Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089847D8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089847F4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089847FCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984804u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898480Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984810u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898481Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898482Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898483Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984860u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984874u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898487Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984884u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898489Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089848A8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089848B4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089848BCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089848DCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089848ECu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089848F8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984900u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984924u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984938u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984940u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898494Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984970u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984984u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984994u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089849A4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089849B4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089849D0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089849E8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984A00u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984A1Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984A2Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984A98u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984AACu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984AB4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984ABCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984ACCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984AE4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984AF4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984B38u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984B4Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984B84u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984BD0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984BDCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984BECu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984BF8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984C0Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984C14u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984C1Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984C34u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984C4Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984C5Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984D44u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984D9Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984DB0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984DC0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984DDCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984DF4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984E00u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984E18u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984E60u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984E6Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984E90u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984EA8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984EB8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984EE4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984EF8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984EFCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984F1Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984F28u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984F30u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984F40u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984F44u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984F50u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984F60u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984F68u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984F80u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984F98u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984FA0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984FC4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984FD8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984FE8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984FF4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985000u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985004u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985014u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898501Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985024u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985038u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985064u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089850C8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089850E4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089850F8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898511Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985124u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898512Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898513Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985150u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985154u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985164u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985174u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985184u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898518Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898519Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089851A4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089851CCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089851E4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089851F8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985200u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985208u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898520Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898522Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985238u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898523Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985244u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985254u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898525Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898526Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898527Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898529Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089852A4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089852B4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089852C8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089852D4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089852F0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985304u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985310u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898531Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985354u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985680u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089856B0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089856DCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089856F0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985774u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985780u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089857A0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089857C8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089857D8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089857E0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089857FCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898580Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985814u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985830u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985840u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985850u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985854u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898585Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898586Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985878u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898587Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985880u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985898u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089858A4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089858D4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089858DCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089858F0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089858F8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898590Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985914u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985924u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898593Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985944u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985954u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898595Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898596Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985984u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985988u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089859A0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089859C0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089859C8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089859DCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089859E4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985A28u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985A30u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985A48u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985A5Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985A68u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985A6Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985A7Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985A8Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985AACu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985ABCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985AE4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985B30u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985B38u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985B50u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985B64u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985B70u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985B80u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985B90u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985B98u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985BA0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985BACu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985BC0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985BDCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985BE4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985BF4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985C04u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985C14u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985C24u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985C2Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985C34u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985C40u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985C54u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985C70u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985C80u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985C98u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985CA8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985CB4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985CC0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985CD0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985CD4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985CFCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985D1Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985D24u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985D38u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985D40u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985D94u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985D9Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985DA4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985DBCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985DC4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985DD8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985DE0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985DF4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985E00u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985E28u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985E48u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985E50u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985E5Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985E64u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985E6Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985E74u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985E7Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985E88u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985E94u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985E9Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985EA4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985EB0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985EC8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985EDCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985EF0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985F04u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985F0Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985F14u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985F1Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985F24u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985F2Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985F34u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985F40u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985F58u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985F6Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985F80u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985F94u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985F9Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985FA4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985FCCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985FD8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985FE4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985FECu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985FFCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986020u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898602Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986034u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898603Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986044u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898604Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898608Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986094u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089860B8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986100u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898611Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986124u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986130u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986138u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986140u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986148u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986150u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898615Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986164u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986180u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986198u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089861B0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089861C8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089861D0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089861D8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089861E4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089861F4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986228u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986238u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986240u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898624Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986280u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089862B0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089862CCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089862D4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089862E4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089862ECu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089862F4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089862FCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986304u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986310u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986318u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986320u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986328u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986344u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986358u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898636Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986380u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986388u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986390u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089863ACu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089863B4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089863BCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089863C8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089863D8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089863E8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089863F4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898641Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986444u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986460u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986468u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986474u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898647Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089864A0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089864A8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089864B8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089864D4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089864E8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089865E4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089865F0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986604u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986610u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986624u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986638u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986658u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986670u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986680u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986688u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089866FCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986720u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898678Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089867A0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089867BCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089867C8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089867DCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089867F0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089867FCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986818u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986958u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089869A4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089869C8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986A34u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986A48u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986A60u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986A74u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986A7Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986A90u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986AA4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986AACu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986AD4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986AE0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986B3Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986B48u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986B50u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986B74u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986B78u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986BA8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986BB8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986BC0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986BCCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986BD8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986BE0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986BE8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986BF0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986C10u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986C18u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986C24u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986C2Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986C44u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986C54u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986C5Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986C60u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986C70u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986CA0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986CB0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986CBCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986CD8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986CE0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986CECu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986D08u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986D18u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986D44u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986D78u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986D84u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986D8Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986D98u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986DA4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986DB0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986DDCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986DE4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986DF0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986E10u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986E18u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986E20u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986E28u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986E30u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986E50u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986E58u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986E60u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986E68u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986E7Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986E8Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986E94u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986ED8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986EFCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986F68u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986F7Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986F84u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986F94u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986FA0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986FACu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986FB4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986FC4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986FD0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986FDCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986FE4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986FF8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987000u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987008u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987018u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987024u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898702Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987034u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987058u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987060u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987068u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987070u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987078u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987080u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987098u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089870A0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089870A8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089870B0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089870BCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898714Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898716Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987180u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987190u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987194u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089871B0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089871B8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089871C8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089871CCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987204u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987210u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987220u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898722Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987230u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987278u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089872A0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089872D0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089872F8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987344u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987374u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898738Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089873D8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987408u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987424u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898742Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987434u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987450u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987458u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987470u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987478u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987480u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898749Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089874A8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089874BCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089874C8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089874D0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089874E4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089874FCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987508u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898752Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987568u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089875F8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987618u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898762Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898763Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987640u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898765Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987664u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987674u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987678u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089876B0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089876BCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089876CCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089876D8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089876DCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987724u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898774Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898777Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089877A4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089877F0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987820u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987838u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987884u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089878B4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089878D0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089878D8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089878E0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089878FCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987904u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898791Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987924u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898792Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987948u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987954u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987968u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987974u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898797Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987990u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089879A8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089879B4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089879D8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987A14u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987A30u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987A38u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987A44u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987A4Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987A54u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987A5Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987A64u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987A6Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987A74u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987A7Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987A98u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987AA4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987AACu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987AB4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987ABCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987AC4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987AE0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987AECu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987AF4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987AFCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987B04u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987B0Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987B28u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987B34u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987B3Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987B54u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987B5Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987B78u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987B84u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987B94u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987BE0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987C00u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987C10u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987C30u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987C3Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987C84u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987C8Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987CA0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987CA4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987CB4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987CC0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987CCCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987CD4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987CECu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987D08u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987D20u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987D34u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987D3Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987D4Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987D54u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987D78u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987D98u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987DACu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987E28u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987E38u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987E80u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987E90u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987E98u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987EA0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987EBCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987ED8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987EE0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987EF8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987F10u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987F34u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987F4Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987F70u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987F78u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987F84u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987F8Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987FA0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987FACu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987FCCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987FDCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987FF0u, &recomp_unit_0096, "recomp_unit_0096");
}
} // namespace psprecomp
