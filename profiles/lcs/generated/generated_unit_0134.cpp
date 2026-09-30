#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0134[4094] = {
    1, 2, 0, 0, 0, 0, 0, 3, 0, 4, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 7, 8, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 11, 0, 12, 0, 0, 0, 13, 0, 14, 0, 0, 15, 0, 16, 0, 0, 17, 0, 0, 0, 18,
    0, 0, 0, 19, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 21, 0, 22, 0, 0, 0, 23, 0, 0, 24, 0, 0, 25, 0, 0, 0, 26, 0,
    0, 0, 27, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 29, 0, 30, 0, 0, 0, 31, 0, 32, 0, 33, 0, 0, 0, 0, 34, 0, 0, 0,
    35, 0, 0, 0, 36, 0, 0, 0, 0, 37, 0, 0, 0, 38, 0, 0, 39, 0, 0, 0, 0, 0, 40, 0, 41, 0, 0, 0, 0, 42, 0, 43,
    0, 44, 0, 45, 0, 0, 46, 0, 47, 0, 0, 0, 0, 0, 0, 48, 0, 49, 0, 0, 0, 0, 0, 50, 51, 0, 52, 0, 0, 53, 0, 54,
    0, 0, 0, 0, 0, 0, 55, 0, 56, 0, 0, 0, 0, 0, 57, 58, 0, 59, 0, 0, 0, 0, 0, 0, 60, 61, 0, 0, 0, 62, 63, 0,
    0, 0, 0, 0, 64, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 68,
    0, 0, 0, 69, 0, 0, 0, 70, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 73, 0, 0, 74, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 77, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 80, 0, 0, 0, 0, 81, 0, 82, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 84, 0, 0, 85, 0, 0, 0, 0, 86, 0, 0, 0, 0, 87, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 89, 0, 90, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 94, 0, 95, 0, 96, 0, 97, 0, 98, 0, 99, 0, 0, 0, 0, 100, 0, 0, 0, 101, 0, 0,
    0, 102, 0, 0, 0, 0, 0, 103, 0, 104, 0, 0, 0, 105, 0, 106, 0, 107, 0, 0, 0, 0, 108, 0, 0, 0, 109, 0, 0, 0, 110, 0,
    0, 0, 0, 0, 111, 0, 112, 0, 0, 0, 113, 0, 114, 0, 115, 0, 116, 0, 117, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 119, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 122, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 124, 0, 0, 0, 0, 125, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127,
    0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 130, 0, 0, 0, 0, 131, 0, 0, 0, 132, 0, 0, 0,
    0, 133, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 136, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 140, 0, 141, 0, 0, 0, 142, 0, 143, 0, 144, 0, 0, 0, 145, 0,
    146, 0, 147, 0, 0, 0, 0, 148, 0, 0, 0, 149, 0, 0, 0, 150, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 152, 0, 0, 0, 153, 0,
    0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 156, 0, 0, 0, 0, 157, 0, 158, 0, 159, 0, 160, 0, 0, 0, 0, 161, 0,
    0, 0, 162, 0, 0, 0, 163, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 165, 0, 0, 0, 166, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 168, 0, 169, 0, 0, 0, 0, 170, 0, 171, 0, 172, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174,
    0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 183, 184, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 188,
    0, 189, 0, 0, 0, 0, 0, 190, 0, 191, 0, 192, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 194, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 196, 197, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 199, 0, 0, 0, 200, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 202, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 205, 0, 206,
    0, 0, 207, 0, 208, 0, 209, 0, 210, 0, 0, 0, 211, 0, 0, 212, 0, 213, 0, 0, 214, 0, 0, 215, 0, 0, 216, 0, 0, 217, 0, 0,
    218, 0, 0, 219, 0, 0, 220, 0, 0, 0, 221, 0, 0, 222, 0, 223, 0, 0, 224, 0, 0, 225, 0, 0, 226, 0, 0, 227, 0, 0, 228, 0,
    0, 229, 0, 0, 230, 0, 0, 231, 0, 232, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0,
    0, 236, 0, 0, 0, 0, 0, 0, 237, 0, 238, 0, 0, 0, 0, 239, 0, 0, 0, 240, 241, 0, 0, 0, 0, 242, 0, 243, 0, 0, 0, 244,
    0, 0, 0, 0, 0, 0, 0, 245, 246, 0, 0, 0, 0, 0, 0, 0, 0, 247, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 253, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 255, 0, 0, 256, 0,
    0, 0, 257, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0,
    0, 0, 261, 0, 0, 0, 262, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 266, 0, 0, 267, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 270, 0, 271, 0, 272, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 274, 275, 0, 0, 276, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 278, 0, 0, 0, 279, 0, 280, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 282, 0, 283, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 286, 0, 0, 287, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 291, 0, 292, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 294, 295, 0, 0, 296, 0, 0, 0, 297, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 300, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 304, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 310, 0, 0, 0, 311, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 313, 314, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 316, 0, 0, 0, 0, 0, 0, 317, 0,
    0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 319, 320, 0, 321, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 323, 0, 0, 0, 0, 324, 0, 325, 0, 326, 0, 327, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    329, 0, 0, 0, 0, 0, 330, 0, 331, 0, 0, 0, 0, 332, 0, 333, 0, 0, 0, 334, 0, 0, 335, 0, 0, 336, 0, 337, 0, 338, 0, 339,
    0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 342,
    0, 343, 0, 344, 0, 0, 0, 0, 0, 345, 0, 346, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 348, 0, 349, 0, 0, 0,
    350, 0, 351, 0, 0, 0, 352, 0, 353, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 357, 0,
    0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 359, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0,
    362, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 364, 0, 0, 0, 365, 0, 0, 0, 0, 0, 366, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 368, 0, 369, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 371, 0, 372, 0, 0,
    0, 0, 0, 373, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 0, 0, 0, 375, 0, 376, 377, 0, 0, 0, 0, 0, 0, 0, 0, 378, 0, 379,
    0, 0, 0, 0, 0, 0, 380, 0, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 382, 383, 0, 384, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0,
    386, 0, 0, 0, 387, 0, 0, 0, 388, 0, 0, 389, 0, 0, 0, 0, 0, 0, 390, 0, 0, 0, 0, 391, 0, 0, 392, 0, 0, 393, 0, 0,
    0, 0, 0, 0, 394, 0, 0, 0, 395, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 396, 0, 0, 0, 0, 0, 397, 0, 0, 398, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 399, 0, 0, 0, 400, 0, 401, 0, 0, 0, 402, 0, 403, 0, 0, 0, 0, 0, 0, 404, 0, 0, 0,
    405, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 406, 0, 0, 407, 0, 0, 0, 0, 0, 0, 408, 0, 0, 0, 0, 409, 0, 0, 410,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 411, 0, 0, 0, 0, 0, 412, 0, 0, 413, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 414, 0, 0, 0, 415, 0, 416, 0, 0, 0, 417, 0, 418, 0, 0, 0, 0, 0, 0, 419, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 420, 0, 0, 0, 0, 421, 0, 0, 0, 422, 0, 0, 0, 0, 0, 0, 0, 423, 0, 0, 0, 0, 0, 424, 0, 0, 425, 0, 0, 426, 0,
    0, 0, 0, 0, 0, 427, 0, 0, 0, 428, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 429, 0, 0, 0, 0, 0, 430, 0, 0, 431,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 432, 0, 0, 0, 433, 0, 434, 0, 0, 0, 0, 0, 435, 0, 436, 0, 0, 0, 0, 0, 0, 437,
    0, 0, 0, 438, 0, 0, 0, 0, 0, 439, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 440, 0, 441, 0, 0, 0, 0,
    0, 442, 0, 0, 443, 0, 0, 0, 0, 0, 0, 0, 444, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 445, 0, 0, 446, 0, 0, 0, 447, 0,
    0, 448, 0, 449, 0, 0, 450, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 451, 0, 0, 0, 0, 452, 0, 453, 0, 0, 0, 0,
    0, 454, 0, 455, 0, 456, 0, 457, 458, 0, 0, 0, 0, 0, 0, 0, 0, 459, 0, 460, 0, 0, 0, 0, 0, 0, 461, 0, 0, 0, 0, 462,
    0, 0, 0, 0, 0, 0, 463, 464, 0, 465, 0, 0, 0, 0, 0, 466, 0, 467, 0, 468, 0, 0, 0, 0, 0, 0, 469, 0, 0, 0, 470, 0,
    0, 0, 471, 0, 0, 472, 0, 473, 0, 0, 474, 0, 475, 0, 0, 0, 476, 0, 0, 477, 0, 0, 478, 0, 479, 0, 480, 0, 481, 0, 0, 0,
    0, 0, 482, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 483, 0, 0, 0, 0, 0, 484, 0, 485, 0, 0, 0, 486, 0, 0, 487, 0, 0, 488,
    0, 489, 0, 490, 0, 491, 0, 0, 0, 0, 0, 492, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 493, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 494, 0, 495, 0, 0, 0, 0, 0, 0, 0, 496, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 497, 0, 0, 0, 0, 498, 0,
    499, 0, 0, 0, 0, 0, 0, 500, 0, 0, 501, 0, 0, 0, 0, 0, 502, 0, 503, 0, 0, 0, 0, 0, 504, 0, 0, 0, 0, 505, 0, 506,
    0, 0, 0, 0, 0, 507, 0, 0, 0, 508, 0, 509, 0, 510, 511, 0, 0, 0, 0, 0, 0, 0, 0, 512, 0, 513, 0, 0, 0, 0, 0, 0,
    514, 0, 0, 0, 0, 515, 0, 0, 0, 0, 0, 0, 516, 517, 0, 518, 0, 0, 0, 0, 0, 519, 0, 0, 520, 0, 0, 0, 521, 0, 522, 0,
    523, 0, 0, 0, 0, 0, 524, 0, 0, 0, 525, 0, 0, 0, 0, 526, 527, 0, 0, 0, 0, 0, 0, 0, 0, 528, 0, 529, 0, 0, 0, 0,
    0, 0, 530, 0, 0, 0, 0, 531, 0, 0, 0, 0, 0, 0, 532, 533, 0, 534, 0, 0, 0, 0, 0, 0, 535, 0, 0, 536, 0, 0, 0, 537,
    0, 538, 0, 0, 539, 540, 0, 541, 0, 0, 0, 0, 0, 0, 542, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 543, 0, 544, 0,
    545, 0, 0, 0, 0, 0, 0, 546, 0, 0, 0, 0, 0, 0, 547, 0, 0, 0, 548, 0, 0, 0, 549, 0, 0, 550, 0, 0, 551, 0, 552, 0,
    553, 0, 554, 0, 0, 0, 0, 0, 555, 0, 556, 0, 0, 0, 0, 0, 557, 0, 558, 0, 0, 0, 0, 0, 559, 0, 560, 0, 0, 0, 0, 0,
    0, 561, 0, 0, 0, 562, 0, 0, 0, 0, 0, 563, 0, 0, 0, 0, 0, 0, 564, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 565, 0, 566, 0, 0, 0, 0, 0, 0, 567, 0, 0, 0, 568, 0, 0, 0, 0, 0, 0, 0, 569, 0, 570, 0, 0, 0, 0,
    0, 0, 571, 0, 0, 0, 572, 0, 0, 0, 0, 0, 0, 0, 573, 0, 574, 0, 0, 0, 0, 0, 0, 575, 0, 0, 0, 576, 0, 0, 0, 0,
    0, 577, 578, 0, 0, 0, 0, 0, 0, 0, 0, 579, 0, 580, 0, 0, 0, 0, 0, 0, 581, 0, 0, 0, 0, 582, 0, 0, 0, 0, 0, 0,
    583, 584, 0, 585, 0, 0, 0, 0, 0, 0, 586, 0, 0, 0, 587, 0, 0, 0, 0, 588, 0, 0, 0, 0, 589, 0, 0, 0, 0, 590, 0, 0,
    0, 0, 0, 0, 0, 591, 0, 0, 0, 0, 0, 0, 592, 0, 0, 0, 0, 0, 0, 0, 0, 0, 593, 0, 0, 594, 0, 0, 0, 595, 0, 0,
    596, 0, 0, 0, 597, 0, 0, 0, 598, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 599, 0, 600, 0, 0, 0, 0, 0, 0, 601, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 602, 0, 0, 603, 0, 0, 0, 604, 0, 0, 605, 0, 0, 0, 606, 0, 0, 0, 607, 0, 0, 0, 0, 0, 0, 0,
    0, 608, 0, 609, 0, 0, 0, 0, 0, 0, 610, 0, 0, 0, 611, 0, 0, 0, 612, 0, 0, 0, 0, 613, 0, 0, 614, 0, 615, 0, 0, 0,
    0, 0, 0, 616, 0, 0, 0, 617, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 618, 0, 0, 619, 0, 620, 0, 0, 0, 0,
    0, 0, 621, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 622, 0, 0, 0, 0, 623, 0, 0, 624, 0, 625, 0, 0, 0, 0, 0, 626,
    0, 0, 0, 627, 0, 0, 628, 0, 0, 0, 0, 0, 0, 0, 629, 0, 0, 0, 630, 0, 631, 0, 632, 0, 0, 0, 0, 0, 633, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 634, 0, 0, 0, 0, 0, 0, 0, 0, 0, 635, 0, 0, 0, 0, 636, 0, 637, 0, 638, 0, 0, 0, 0, 0,
    0, 639, 0, 0, 0, 0, 0, 640, 0, 641, 0, 0, 0, 0, 0, 0, 642, 0, 0, 0, 0, 643, 0, 644, 0, 0, 0, 0, 0, 0, 645, 0,
    0, 0, 0, 0, 646, 0, 647, 0, 0, 0, 0, 0, 0, 648, 0, 0, 0, 649, 0, 0, 0, 0, 0, 650, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 651, 0, 652, 0, 0, 0, 0, 0, 653, 0, 0, 0, 0, 0, 0, 0, 0, 0, 654, 0, 0, 0, 655, 0, 0,
    0, 0, 656, 0, 0, 0, 657, 0, 0, 0, 658, 0, 0, 0, 0, 659, 0, 0, 660, 0, 0, 0, 0, 661, 0, 662, 0, 0, 0, 0, 663, 0,
    0, 0, 0, 664, 0, 0, 0, 0, 0, 665, 0, 0, 0, 0, 0, 666, 0, 667, 668, 0, 0, 0, 0, 0, 0, 0, 0, 669, 0, 670, 0, 0,
    0, 0, 0, 0, 671, 0, 0, 0, 0, 672, 0, 0, 0, 0, 0, 0, 673, 674, 0, 675, 0, 0, 0, 0, 0, 676, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 677, 0, 678, 679, 0, 0, 0, 0, 0, 0, 0, 0, 680, 0, 681, 0, 0, 0, 0, 0, 0, 682, 0, 0, 0, 0, 683,
    0, 0, 0, 0, 0, 0, 684, 685, 0, 686, 0, 0, 0, 0, 0, 0, 687, 0, 0, 0, 688, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 689,
    0, 0, 690, 0, 0, 0, 0, 0, 0, 691, 0, 0, 0, 692, 0, 0, 693, 0, 694, 0, 0, 0, 0, 0, 0, 695, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 696, 0, 0, 0, 0, 0, 0, 697, 0, 0, 0, 698, 0, 0, 0, 0, 0, 0, 0, 699, 0, 0, 0, 0, 0, 700,
    0, 0, 701, 0, 0, 0, 0, 0, 0, 0, 702, 0, 0, 703, 0, 0, 704, 0, 705, 0, 0, 706, 0, 0, 707, 0, 0, 708, 0, 709, 0, 0,
    0, 0, 0, 710, 0, 0, 711, 0, 0, 0, 0, 0, 0, 0, 712, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 713, 0, 714,
};
void recomp_unit_0134_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08A1C000u;
        entry_id = (entry_delta < 16376u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0134[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A1C000;
    case 2u: goto L_08A1C004;
    case 3u: goto L_08A1C01C;
    case 4u: goto L_08A1C024;
    case 5u: goto L_08A1C030;
    case 6u: goto L_08A1C064;
    case 7u: goto L_08A1C06C;
    case 8u: goto L_08A1C070;
    case 9u: goto L_08A1C0B8;
    case 10u: goto L_08A1C120;
    case 11u: goto L_08A1C12C;
    case 12u: goto L_08A1C134;
    case 13u: goto L_08A1C144;
    case 14u: goto L_08A1C14C;
    case 15u: goto L_08A1C158;
    case 16u: goto L_08A1C160;
    case 17u: goto L_08A1C16C;
    case 18u: goto L_08A1C17C;
    case 19u: goto L_08A1C18C;
    case 20u: goto L_08A1C1A0;
    case 21u: goto L_08A1C1B8;
    case 22u: goto L_08A1C1C0;
    case 23u: goto L_08A1C1D0;
    case 24u: goto L_08A1C1DC;
    case 25u: goto L_08A1C1E8;
    case 26u: goto L_08A1C1F8;
    case 27u: goto L_08A1C208;
    case 28u: goto L_08A1C21C;
    case 29u: goto L_08A1C234;
    case 30u: goto L_08A1C23C;
    case 31u: goto L_08A1C24C;
    case 32u: goto L_08A1C254;
    case 33u: goto L_08A1C25C;
    case 34u: goto L_08A1C270;
    case 35u: goto L_08A1C280;
    case 36u: goto L_08A1C290;
    case 37u: goto L_08A1C2A4;
    case 38u: goto L_08A1C2B4;
    case 39u: goto L_08A1C2C0;
    case 40u: goto L_08A1C2D8;
    case 41u: goto L_08A1C2E0;
    case 42u: goto L_08A1C2F4;
    case 43u: goto L_08A1C2FC;
    case 44u: goto L_08A1C304;
    case 45u: goto L_08A1C30C;
    case 46u: goto L_08A1C318;
    case 47u: goto L_08A1C320;
    case 48u: goto L_08A1C33C;
    case 49u: goto L_08A1C344;
    case 50u: goto L_08A1C35C;
    case 51u: goto L_08A1C360;
    case 52u: goto L_08A1C368;
    case 53u: goto L_08A1C374;
    case 54u: goto L_08A1C37C;
    case 55u: goto L_08A1C398;
    case 56u: goto L_08A1C3A0;
    case 57u: goto L_08A1C3B8;
    case 58u: goto L_08A1C3BC;
    case 59u: goto L_08A1C3C4;
    case 60u: goto L_08A1C3E0;
    case 61u: goto L_08A1C3E4;
    case 62u: goto L_08A1C3F4;
    case 63u: goto L_08A1C3F8;
    case 64u: goto L_08A1C410;
    case 65u: goto L_08A1C420;
    case 66u: goto L_08A1C450;
    case 67u: goto L_08A1C460;
    case 68u: goto L_08A1C47C;
    case 69u: goto L_08A1C48C;
    case 70u: goto L_08A1C49C;
    case 71u: goto L_08A1C4B4;
    case 72u: goto L_08A1C4CC;
    case 73u: goto L_08A1C504;
    case 74u: goto L_08A1C510;
    case 75u: goto L_08A1C524;
    case 76u: goto L_08A1C53C;
    case 77u: goto L_08A1C554;
    case 78u: goto L_08A1C55C;
    case 79u: goto L_08A1C5A4;
    case 80u: goto L_08A1C5B0;
    case 81u: goto L_08A1C5C4;
    case 82u: goto L_08A1C5CC;
    case 83u: goto L_08A1C5D0;
    case 84u: goto L_08A1C614;
    case 85u: goto L_08A1C620;
    case 86u: goto L_08A1C634;
    case 87u: goto L_08A1C648;
    case 88u: goto L_08A1C654;
    case 89u: goto L_08A1C684;
    case 90u: goto L_08A1C68C;
    case 91u: goto L_08A1C690;
    case 92u: goto L_08A1C6D0;
    case 93u: goto L_08A1C71C;
    case 94u: goto L_08A1C728;
    case 95u: goto L_08A1C730;
    case 96u: goto L_08A1C738;
    case 97u: goto L_08A1C740;
    case 98u: goto L_08A1C748;
    case 99u: goto L_08A1C750;
    case 100u: goto L_08A1C764;
    case 101u: goto L_08A1C774;
    case 102u: goto L_08A1C784;
    case 103u: goto L_08A1C79C;
    case 104u: goto L_08A1C7A4;
    case 105u: goto L_08A1C7B4;
    case 106u: goto L_08A1C7BC;
    case 107u: goto L_08A1C7C4;
    case 108u: goto L_08A1C7D8;
    case 109u: goto L_08A1C7E8;
    case 110u: goto L_08A1C7F8;
    case 111u: goto L_08A1C810;
    case 112u: goto L_08A1C818;
    case 113u: goto L_08A1C828;
    case 114u: goto L_08A1C830;
    case 115u: goto L_08A1C838;
    case 116u: goto L_08A1C840;
    case 117u: goto L_08A1C848;
    case 118u: goto L_08A1C864;
    case 119u: goto L_08A1C878;
    case 120u: goto L_08A1C8B4;
    case 121u: goto L_08A1C8E0;
    case 122u: goto L_08A1C8F0;
    case 123u: goto L_08A1C918;
    case 124u: goto L_08A1C928;
    case 125u: goto L_08A1C93C;
    case 126u: goto L_08A1C94C;
    case 127u: goto L_08A1C97C;
    case 128u: goto L_08A1C9A0;
    case 129u: goto L_08A1C9C0;
    case 130u: goto L_08A1C9CC;
    case 131u: goto L_08A1C9E0;
    case 132u: goto L_08A1C9F0;
    case 133u: goto L_08A1CA04;
    case 134u: goto L_08A1CA08;
    case 135u: goto L_08A1CA3C;
    case 136u: goto L_08A1CA44;
    case 137u: goto L_08A1CA48;
    case 138u: goto L_08A1CA74;
    case 139u: goto L_08A1CAB4;
    case 140u: goto L_08A1CAC0;
    case 141u: goto L_08A1CAC8;
    case 142u: goto L_08A1CAD8;
    case 143u: goto L_08A1CAE0;
    case 144u: goto L_08A1CAE8;
    case 145u: goto L_08A1CAF8;
    case 146u: goto L_08A1CB00;
    case 147u: goto L_08A1CB08;
    case 148u: goto L_08A1CB1C;
    case 149u: goto L_08A1CB2C;
    case 150u: goto L_08A1CB3C;
    case 151u: goto L_08A1CB54;
    case 152u: goto L_08A1CB68;
    case 153u: goto L_08A1CB78;
    case 154u: goto L_08A1CB88;
    case 155u: goto L_08A1CBB0;
    case 156u: goto L_08A1CBB8;
    case 157u: goto L_08A1CBCC;
    case 158u: goto L_08A1CBD4;
    case 159u: goto L_08A1CBDC;
    case 160u: goto L_08A1CBE4;
    case 161u: goto L_08A1CBF8;
    case 162u: goto L_08A1CC08;
    case 163u: goto L_08A1CC18;
    case 164u: goto L_08A1CC30;
    case 165u: goto L_08A1CC44;
    case 166u: goto L_08A1CC54;
    case 167u: goto L_08A1CC64;
    case 168u: goto L_08A1CC8C;
    case 169u: goto L_08A1CC94;
    case 170u: goto L_08A1CCA8;
    case 171u: goto L_08A1CCB0;
    case 172u: goto L_08A1CCB8;
    case 173u: goto L_08A1CCC0;
    case 174u: goto L_08A1CCFC;
    case 175u: goto L_08A1CD18;
    case 176u: goto L_08A1CD28;
    case 177u: goto L_08A1CD54;
    case 178u: goto L_08A1CD64;
    case 179u: goto L_08A1CDA8;
    case 180u: goto L_08A1CDC4;
    case 181u: goto L_08A1CDEC;
    case 182u: goto L_08A1CE30;
    case 183u: goto L_08A1CE38;
    case 184u: goto L_08A1CE3C;
    case 185u: goto L_08A1CE60;
    case 186u: goto L_08A1CEA8;
    case 187u: goto L_08A1CEE0;
    case 188u: goto L_08A1CEFC;
    case 189u: goto L_08A1CF04;
    case 190u: goto L_08A1CF1C;
    case 191u: goto L_08A1CF24;
    case 192u: goto L_08A1CF2C;
    case 193u: goto L_08A1CF40;
    case 194u: goto L_08A1CF84;
    case 195u: goto L_08A1CFA4;
    case 196u: goto L_08A1CFB0;
    case 197u: goto L_08A1CFB4;
    case 198u: goto L_08A1CFD4;
    case 199u: goto L_08A1CFE4;
    case 200u: goto L_08A1CFF4;
    case 201u: goto L_08A1D038;
    case 202u: goto L_08A1D040;
    case 203u: goto L_08A1D048;
    case 204u: goto L_08A1D06C;
    case 205u: goto L_08A1D074;
    case 206u: goto L_08A1D07C;
    case 207u: goto L_08A1D088;
    case 208u: goto L_08A1D090;
    case 209u: goto L_08A1D098;
    case 210u: goto L_08A1D0A0;
    case 211u: goto L_08A1D0B0;
    case 212u: goto L_08A1D0BC;
    case 213u: goto L_08A1D0C4;
    case 214u: goto L_08A1D0D0;
    case 215u: goto L_08A1D0DC;
    case 216u: goto L_08A1D0E8;
    case 217u: goto L_08A1D0F4;
    case 218u: goto L_08A1D100;
    case 219u: goto L_08A1D10C;
    case 220u: goto L_08A1D118;
    case 221u: goto L_08A1D128;
    case 222u: goto L_08A1D134;
    case 223u: goto L_08A1D13C;
    case 224u: goto L_08A1D148;
    case 225u: goto L_08A1D154;
    case 226u: goto L_08A1D160;
    case 227u: goto L_08A1D16C;
    case 228u: goto L_08A1D178;
    case 229u: goto L_08A1D184;
    case 230u: goto L_08A1D190;
    case 231u: goto L_08A1D19C;
    case 232u: goto L_08A1D1A4;
    case 233u: goto L_08A1D1C0;
    case 234u: goto L_08A1D254;
    case 235u: goto L_08A1D268;
    case 236u: goto L_08A1D284;
    case 237u: goto L_08A1D2A0;
    case 238u: goto L_08A1D2A8;
    case 239u: goto L_08A1D2BC;
    case 240u: goto L_08A1D2CC;
    case 241u: goto L_08A1D2D0;
    case 242u: goto L_08A1D2E4;
    case 243u: goto L_08A1D2EC;
    case 244u: goto L_08A1D2FC;
    case 245u: goto L_08A1D31C;
    case 246u: goto L_08A1D320;
    case 247u: goto L_08A1D344;
    case 248u: goto L_08A1D348;
    case 249u: goto L_08A1D378;
    case 250u: goto L_08A1D3A4;
    case 251u: goto L_08A1D3AC;
    case 252u: goto L_08A1D3E4;
    case 253u: goto L_08A1D3EC;
    case 254u: goto L_08A1D45C;
    case 255u: goto L_08A1D46C;
    case 256u: goto L_08A1D478;
    case 257u: goto L_08A1D488;
    case 258u: goto L_08A1D498;
    case 259u: goto L_08A1D4B4;
    case 260u: goto L_08A1D4F8;
    case 261u: goto L_08A1D508;
    case 262u: goto L_08A1D518;
    case 263u: goto L_08A1D528;
    case 264u: goto L_08A1D55C;
    case 265u: goto L_08A1D5A8;
    case 266u: goto L_08A1D5BC;
    case 267u: goto L_08A1D5C8;
    case 268u: goto L_08A1D5D0;
    case 269u: goto L_08A1D654;
    case 270u: goto L_08A1D65C;
    case 271u: goto L_08A1D664;
    case 272u: goto L_08A1D66C;
    case 273u: goto L_08A1D738;
    case 274u: goto L_08A1D808;
    case 275u: goto L_08A1D80C;
    case 276u: goto L_08A1D818;
    case 277u: goto L_08A1D834;
    case 278u: goto L_08A1D848;
    case 279u: goto L_08A1D858;
    case 280u: goto L_08A1D860;
    case 281u: goto L_08A1D8D0;
    case 282u: goto L_08A1D8DC;
    case 283u: goto L_08A1D8E4;
    case 284u: goto L_08A1D9B0;
    case 285u: goto L_08A1DA4C;
    case 286u: goto L_08A1DA58;
    case 287u: goto L_08A1DA64;
    case 288u: goto L_08A1DB54;
    case 289u: goto L_08A1DB5C;
    case 290u: goto L_08A1DBE0;
    case 291u: goto L_08A1DBE8;
    case 292u: goto L_08A1DBF0;
    case 293u: goto L_08A1DCC0;
    case 294u: goto L_08A1DD90;
    case 295u: goto L_08A1DD94;
    case 296u: goto L_08A1DDA0;
    case 297u: goto L_08A1DDB0;
    case 298u: goto L_08A1DDB8;
    case 299u: goto L_08A1DE28;
    case 300u: goto L_08A1DE34;
    case 301u: goto L_08A1DE3C;
    case 302u: goto L_08A1DE78;
    case 303u: goto L_08A1DF2C;
    case 304u: goto L_08A1DF38;
    case 305u: goto L_08A1DF44;
    case 306u: goto L_08A1DFC4;
    case 307u: goto L_08A1DFF0;
    case 308u: goto L_08A1E030;
    case 309u: goto L_08A1E04C;
    case 310u: goto L_08A1E064;
    case 311u: goto L_08A1E074;
    case 312u: goto L_08A1E0A4;
    case 313u: goto L_08A1E0AC;
    case 314u: goto L_08A1E0B0;
    case 315u: goto L_08A1E0D4;
    case 316u: goto L_08A1E0DC;
    case 317u: goto L_08A1E0F8;
    case 318u: goto L_08A1E10C;
    case 319u: goto L_08A1E128;
    case 320u: goto L_08A1E12C;
    case 321u: goto L_08A1E134;
    case 322u: goto L_08A1E150;
    case 323u: goto L_08A1E188;
    case 324u: goto L_08A1E19C;
    case 325u: goto L_08A1E1A4;
    case 326u: goto L_08A1E1AC;
    case 327u: goto L_08A1E1B4;
    case 328u: goto L_08A1E1D0;
    case 329u: goto L_08A1E200;
    case 330u: goto L_08A1E218;
    case 331u: goto L_08A1E220;
    case 332u: goto L_08A1E234;
    case 333u: goto L_08A1E23C;
    case 334u: goto L_08A1E24C;
    case 335u: goto L_08A1E258;
    case 336u: goto L_08A1E264;
    case 337u: goto L_08A1E26C;
    case 338u: goto L_08A1E274;
    case 339u: goto L_08A1E27C;
    case 340u: goto L_08A1E294;
    case 341u: goto L_08A1E2C0;
    case 342u: goto L_08A1E2FC;
    case 343u: goto L_08A1E304;
    case 344u: goto L_08A1E30C;
    case 345u: goto L_08A1E324;
    case 346u: goto L_08A1E32C;
    case 347u: goto L_08A1E348;
    case 348u: goto L_08A1E368;
    case 349u: goto L_08A1E370;
    case 350u: goto L_08A1E380;
    case 351u: goto L_08A1E388;
    case 352u: goto L_08A1E398;
    case 353u: goto L_08A1E3A0;
    case 354u: goto L_08A1E3C0;
    case 355u: goto L_08A1E3CC;
    case 356u: goto L_08A1E3F0;
    case 357u: goto L_08A1E3F8;
    case 358u: goto L_08A1E418;
    case 359u: goto L_08A1E428;
    case 360u: goto L_08A1E43C;
    case 361u: goto L_08A1E478;
    case 362u: goto L_08A1E480;
    case 363u: goto L_08A1E49C;
    case 364u: goto L_08A1E4AC;
    case 365u: goto L_08A1E4BC;
    case 366u: goto L_08A1E4D4;
    case 367u: goto L_08A1E4E4;
    case 368u: goto L_08A1E50C;
    case 369u: goto L_08A1E514;
    case 370u: goto L_08A1E530;
    case 371u: goto L_08A1E56C;
    case 372u: goto L_08A1E574;
    case 373u: goto L_08A1E58C;
    case 374u: goto L_08A1E59C;
    case 375u: goto L_08A1E5C4;
    case 376u: goto L_08A1E5CC;
    case 377u: goto L_08A1E5D0;
    case 378u: goto L_08A1E5F4;
    case 379u: goto L_08A1E5FC;
    case 380u: goto L_08A1E618;
    case 381u: goto L_08A1E62C;
    case 382u: goto L_08A1E648;
    case 383u: goto L_08A1E64C;
    case 384u: goto L_08A1E654;
    case 385u: goto L_08A1E670;
    case 386u: goto L_08A1E680;
    case 387u: goto L_08A1E690;
    case 388u: goto L_08A1E6A0;
    case 389u: goto L_08A1E6AC;
    case 390u: goto L_08A1E6C8;
    case 391u: goto L_08A1E6DC;
    case 392u: goto L_08A1E6E8;
    case 393u: goto L_08A1E6F4;
    case 394u: goto L_08A1E710;
    case 395u: goto L_08A1E720;
    case 396u: goto L_08A1E754;
    case 397u: goto L_08A1E76C;
    case 398u: goto L_08A1E778;
    case 399u: goto L_08A1E7A4;
    case 400u: goto L_08A1E7B4;
    case 401u: goto L_08A1E7BC;
    case 402u: goto L_08A1E7CC;
    case 403u: goto L_08A1E7D4;
    case 404u: goto L_08A1E7F0;
    case 405u: goto L_08A1E800;
    case 406u: goto L_08A1E834;
    case 407u: goto L_08A1E840;
    case 408u: goto L_08A1E85C;
    case 409u: goto L_08A1E870;
    case 410u: goto L_08A1E87C;
    case 411u: goto L_08A1E8B4;
    case 412u: goto L_08A1E8CC;
    case 413u: goto L_08A1E8D8;
    case 414u: goto L_08A1E904;
    case 415u: goto L_08A1E914;
    case 416u: goto L_08A1E91C;
    case 417u: goto L_08A1E92C;
    case 418u: goto L_08A1E934;
    case 419u: goto L_08A1E950;
    case 420u: goto L_08A1E984;
    case 421u: goto L_08A1E998;
    case 422u: goto L_08A1E9A8;
    case 423u: goto L_08A1E9C8;
    case 424u: goto L_08A1E9E0;
    case 425u: goto L_08A1E9EC;
    case 426u: goto L_08A1E9F8;
    case 427u: goto L_08A1EA14;
    case 428u: goto L_08A1EA24;
    case 429u: goto L_08A1EA58;
    case 430u: goto L_08A1EA70;
    case 431u: goto L_08A1EA7C;
    case 432u: goto L_08A1EAA8;
    case 433u: goto L_08A1EAB8;
    case 434u: goto L_08A1EAC0;
    case 435u: goto L_08A1EAD8;
    case 436u: goto L_08A1EAE0;
    case 437u: goto L_08A1EAFC;
    case 438u: goto L_08A1EB0C;
    case 439u: goto L_08A1EB24;
    case 440u: goto L_08A1EB64;
    case 441u: goto L_08A1EB6C;
    case 442u: goto L_08A1EB84;
    case 443u: goto L_08A1EB90;
    case 444u: goto L_08A1EBB0;
    case 445u: goto L_08A1EBDC;
    case 446u: goto L_08A1EBE8;
    case 447u: goto L_08A1EBF8;
    case 448u: goto L_08A1EC04;
    case 449u: goto L_08A1EC0C;
    case 450u: goto L_08A1EC18;
    case 451u: goto L_08A1EC50;
    case 452u: goto L_08A1EC64;
    case 453u: goto L_08A1EC6C;
    case 454u: goto L_08A1EC84;
    case 455u: goto L_08A1EC8C;
    case 456u: goto L_08A1EC94;
    case 457u: goto L_08A1EC9C;
    case 458u: goto L_08A1ECA0;
    case 459u: goto L_08A1ECC4;
    case 460u: goto L_08A1ECCC;
    case 461u: goto L_08A1ECE8;
    case 462u: goto L_08A1ECFC;
    case 463u: goto L_08A1ED18;
    case 464u: goto L_08A1ED1C;
    case 465u: goto L_08A1ED24;
    case 466u: goto L_08A1ED3C;
    case 467u: goto L_08A1ED44;
    case 468u: goto L_08A1ED4C;
    case 469u: goto L_08A1ED68;
    case 470u: goto L_08A1ED78;
    case 471u: goto L_08A1ED88;
    case 472u: goto L_08A1ED94;
    case 473u: goto L_08A1ED9C;
    case 474u: goto L_08A1EDA8;
    case 475u: goto L_08A1EDB0;
    case 476u: goto L_08A1EDC0;
    case 477u: goto L_08A1EDCC;
    case 478u: goto L_08A1EDD8;
    case 479u: goto L_08A1EDE0;
    case 480u: goto L_08A1EDE8;
    case 481u: goto L_08A1EDF0;
    case 482u: goto L_08A1EE08;
    case 483u: goto L_08A1EE34;
    case 484u: goto L_08A1EE4C;
    case 485u: goto L_08A1EE54;
    case 486u: goto L_08A1EE64;
    case 487u: goto L_08A1EE70;
    case 488u: goto L_08A1EE7C;
    case 489u: goto L_08A1EE84;
    case 490u: goto L_08A1EE8C;
    case 491u: goto L_08A1EE94;
    case 492u: goto L_08A1EEAC;
    case 493u: goto L_08A1EED8;
    case 494u: goto L_08A1EF0C;
    case 495u: goto L_08A1EF14;
    case 496u: goto L_08A1EF34;
    case 497u: goto L_08A1EF64;
    case 498u: goto L_08A1EF78;
    case 499u: goto L_08A1EF80;
    case 500u: goto L_08A1EF9C;
    case 501u: goto L_08A1EFA8;
    case 502u: goto L_08A1EFC0;
    case 503u: goto L_08A1EFC8;
    case 504u: goto L_08A1EFE0;
    case 505u: goto L_08A1EFF4;
    case 506u: goto L_08A1EFFC;
    case 507u: goto L_08A1F014;
    case 508u: goto L_08A1F024;
    case 509u: goto L_08A1F02C;
    case 510u: goto L_08A1F034;
    case 511u: goto L_08A1F038;
    case 512u: goto L_08A1F05C;
    case 513u: goto L_08A1F064;
    case 514u: goto L_08A1F080;
    case 515u: goto L_08A1F094;
    case 516u: goto L_08A1F0B0;
    case 517u: goto L_08A1F0B4;
    case 518u: goto L_08A1F0BC;
    case 519u: goto L_08A1F0D4;
    case 520u: goto L_08A1F0E0;
    case 521u: goto L_08A1F0F0;
    case 522u: goto L_08A1F0F8;
    case 523u: goto L_08A1F100;
    case 524u: goto L_08A1F118;
    case 525u: goto L_08A1F128;
    case 526u: goto L_08A1F13C;
    case 527u: goto L_08A1F140;
    case 528u: goto L_08A1F164;
    case 529u: goto L_08A1F16C;
    case 530u: goto L_08A1F188;
    case 531u: goto L_08A1F19C;
    case 532u: goto L_08A1F1B8;
    case 533u: goto L_08A1F1BC;
    case 534u: goto L_08A1F1C4;
    case 535u: goto L_08A1F1E0;
    case 536u: goto L_08A1F1EC;
    case 537u: goto L_08A1F1FC;
    case 538u: goto L_08A1F204;
    case 539u: goto L_08A1F210;
    case 540u: goto L_08A1F214;
    case 541u: goto L_08A1F21C;
    case 542u: goto L_08A1F238;
    case 543u: goto L_08A1F270;
    case 544u: goto L_08A1F278;
    case 545u: goto L_08A1F280;
    case 546u: goto L_08A1F29C;
    case 547u: goto L_08A1F2B8;
    case 548u: goto L_08A1F2C8;
    case 549u: goto L_08A1F2D8;
    case 550u: goto L_08A1F2E4;
    case 551u: goto L_08A1F2F0;
    case 552u: goto L_08A1F2F8;
    case 553u: goto L_08A1F300;
    case 554u: goto L_08A1F308;
    case 555u: goto L_08A1F320;
    case 556u: goto L_08A1F328;
    case 557u: goto L_08A1F340;
    case 558u: goto L_08A1F348;
    case 559u: goto L_08A1F360;
    case 560u: goto L_08A1F368;
    case 561u: goto L_08A1F384;
    case 562u: goto L_08A1F394;
    case 563u: goto L_08A1F3AC;
    case 564u: goto L_08A1F3C8;
    case 565u: goto L_08A1F410;
    case 566u: goto L_08A1F418;
    case 567u: goto L_08A1F434;
    case 568u: goto L_08A1F444;
    case 569u: goto L_08A1F464;
    case 570u: goto L_08A1F46C;
    case 571u: goto L_08A1F488;
    case 572u: goto L_08A1F498;
    case 573u: goto L_08A1F4B8;
    case 574u: goto L_08A1F4C0;
    case 575u: goto L_08A1F4DC;
    case 576u: goto L_08A1F4EC;
    case 577u: goto L_08A1F504;
    case 578u: goto L_08A1F508;
    case 579u: goto L_08A1F52C;
    case 580u: goto L_08A1F534;
    case 581u: goto L_08A1F550;
    case 582u: goto L_08A1F564;
    case 583u: goto L_08A1F580;
    case 584u: goto L_08A1F584;
    case 585u: goto L_08A1F58C;
    case 586u: goto L_08A1F5A8;
    case 587u: goto L_08A1F5B8;
    case 588u: goto L_08A1F5CC;
    case 589u: goto L_08A1F5E0;
    case 590u: goto L_08A1F5F4;
    case 591u: goto L_08A1F614;
    case 592u: goto L_08A1F630;
    case 593u: goto L_08A1F658;
    case 594u: goto L_08A1F664;
    case 595u: goto L_08A1F674;
    case 596u: goto L_08A1F680;
    case 597u: goto L_08A1F690;
    case 598u: goto L_08A1F6A0;
    case 599u: goto L_08A1F6CC;
    case 600u: goto L_08A1F6D4;
    case 601u: goto L_08A1F6F0;
    case 602u: goto L_08A1F718;
    case 603u: goto L_08A1F724;
    case 604u: goto L_08A1F734;
    case 605u: goto L_08A1F740;
    case 606u: goto L_08A1F750;
    case 607u: goto L_08A1F760;
    case 608u: goto L_08A1F784;
    case 609u: goto L_08A1F78C;
    case 610u: goto L_08A1F7A8;
    case 611u: goto L_08A1F7B8;
    case 612u: goto L_08A1F7C8;
    case 613u: goto L_08A1F7DC;
    case 614u: goto L_08A1F7E8;
    case 615u: goto L_08A1F7F0;
    case 616u: goto L_08A1F80C;
    case 617u: goto L_08A1F81C;
    case 618u: goto L_08A1F858;
    case 619u: goto L_08A1F864;
    case 620u: goto L_08A1F86C;
    case 621u: goto L_08A1F888;
    case 622u: goto L_08A1F8BC;
    case 623u: goto L_08A1F8D0;
    case 624u: goto L_08A1F8DC;
    case 625u: goto L_08A1F8E4;
    case 626u: goto L_08A1F8FC;
    case 627u: goto L_08A1F90C;
    case 628u: goto L_08A1F918;
    case 629u: goto L_08A1F938;
    case 630u: goto L_08A1F948;
    case 631u: goto L_08A1F950;
    case 632u: goto L_08A1F958;
    case 633u: goto L_08A1F970;
    case 634u: goto L_08A1F99C;
    case 635u: goto L_08A1F9C4;
    case 636u: goto L_08A1F9D8;
    case 637u: goto L_08A1F9E0;
    case 638u: goto L_08A1F9E8;
    case 639u: goto L_08A1FA04;
    case 640u: goto L_08A1FA1C;
    case 641u: goto L_08A1FA24;
    case 642u: goto L_08A1FA40;
    case 643u: goto L_08A1FA54;
    case 644u: goto L_08A1FA5C;
    case 645u: goto L_08A1FA78;
    case 646u: goto L_08A1FA90;
    case 647u: goto L_08A1FA98;
    case 648u: goto L_08A1FAB4;
    case 649u: goto L_08A1FAC4;
    case 650u: goto L_08A1FADC;
    case 651u: goto L_08A1FB1C;
    case 652u: goto L_08A1FB24;
    case 653u: goto L_08A1FB3C;
    case 654u: goto L_08A1FB64;
    case 655u: goto L_08A1FB74;
    case 656u: goto L_08A1FB88;
    case 657u: goto L_08A1FB98;
    case 658u: goto L_08A1FBA8;
    case 659u: goto L_08A1FBBC;
    case 660u: goto L_08A1FBC8;
    case 661u: goto L_08A1FBDC;
    case 662u: goto L_08A1FBE4;
    case 663u: goto L_08A1FBF8;
    case 664u: goto L_08A1FC0C;
    case 665u: goto L_08A1FC24;
    case 666u: goto L_08A1FC3C;
    case 667u: goto L_08A1FC44;
    case 668u: goto L_08A1FC48;
    case 669u: goto L_08A1FC6C;
    case 670u: goto L_08A1FC74;
    case 671u: goto L_08A1FC90;
    case 672u: goto L_08A1FCA4;
    case 673u: goto L_08A1FCC0;
    case 674u: goto L_08A1FCC4;
    case 675u: goto L_08A1FCCC;
    case 676u: goto L_08A1FCE4;
    case 677u: goto L_08A1FD14;
    case 678u: goto L_08A1FD1C;
    case 679u: goto L_08A1FD20;
    case 680u: goto L_08A1FD44;
    case 681u: goto L_08A1FD4C;
    case 682u: goto L_08A1FD68;
    case 683u: goto L_08A1FD7C;
    case 684u: goto L_08A1FD98;
    case 685u: goto L_08A1FD9C;
    case 686u: goto L_08A1FDA4;
    case 687u: goto L_08A1FDC0;
    case 688u: goto L_08A1FDD0;
    case 689u: goto L_08A1FDFC;
    case 690u: goto L_08A1FE08;
    case 691u: goto L_08A1FE24;
    case 692u: goto L_08A1FE34;
    case 693u: goto L_08A1FE40;
    case 694u: goto L_08A1FE48;
    case 695u: goto L_08A1FE64;
    case 696u: goto L_08A1FE98;
    case 697u: goto L_08A1FEB4;
    case 698u: goto L_08A1FEC4;
    case 699u: goto L_08A1FEE4;
    case 700u: goto L_08A1FEFC;
    case 701u: goto L_08A1FF08;
    case 702u: goto L_08A1FF28;
    case 703u: goto L_08A1FF34;
    case 704u: goto L_08A1FF40;
    case 705u: goto L_08A1FF48;
    case 706u: goto L_08A1FF54;
    case 707u: goto L_08A1FF60;
    case 708u: goto L_08A1FF6C;
    case 709u: goto L_08A1FF74;
    case 710u: goto L_08A1FF8C;
    case 711u: goto L_08A1FF98;
    case 712u: goto L_08A1FFB8;
    case 713u: goto L_08A1FFEC;
    case 714u: goto L_08A1FFF4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A1C000:
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(40)));
    goto L_08A1C004;
L_08A1C004:
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 64u);
    { const bool branch_taken = ctx.gpr[22] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 89u);
      if (branch_taken) {
          goto L_08A1C024;
      }
      goto L_08A1C01C;
    }
L_08A1C01C:
    { const bool branch_taken = ctx.gpr[22] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A1C030;
      }
      goto L_08A1C024;
    }
L_08A1C024:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (ctx.gpr[4] >> 1u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    goto L_08A1C030;
L_08A1C030:
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(64), 0u);
    ctx.gpr[4] = (16576u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 8u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(100), ctx.gpr[4]);
    ctx.gpr[4] = (2233u << 16u);
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A1C064u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10640));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 868u, 0x08A9B020u>(ctx, &aot_mem) && ctx.pc == 0x08A1C064u) goto L_08A1C064;
    return;
L_08A1C064:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A1C070;
      }
      goto L_08A1C06C;
    }
L_08A1C06C:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A1C070;
L_08A1C070:
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
L_08A1C0B8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[6] = (17608u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[19]);
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[16] = (0u | 0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[31]);
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A1C68C;
      }
      goto L_08A1C120;
    }
L_08A1C120:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    ctx.gpr[22] = (0u | 1u);
      if (branch_taken) {
          goto L_08A1C14C;
      }
      goto L_08A1C12C;
    }
L_08A1C12C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08A1C160;
      }
      goto L_08A1C134;
    }
L_08A1C134:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x08A1C144u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1748));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 375u, 0x08AF99BCu>(ctx, &aot_mem) && ctx.pc == 0x08A1C144u) goto L_08A1C144;
    return;
L_08A1C144:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[22] | 0u);
      if (branch_taken) {
          goto L_08A1C690;
      }
      goto L_08A1C14C;
    }
L_08A1C14C:
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A1C134;
      }
      goto L_08A1C158;
    }
L_08A1C158:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1C1DC;
      }
      goto L_08A1C160;
    }
L_08A1C160:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    goto L_08A1C16C;
L_08A1C16C:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(336)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(96)));
        goto L_08A1C1A0;
    }
    goto L_08A1C17C;
L_08A1C17C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A1C18Cu);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 206u, 0x08AC5834u>(ctx, &aot_mem) && ctx.pc == 0x08A1C18Cu) goto L_08A1C18C;
    return;
L_08A1C18C:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(96)));
    goto L_08A1C1A0;
L_08A1C1A0:
    ctx.gpr[6] = (ctx.gpr[17] & 255u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(209)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1C1C0;
      }
      goto L_08A1C1B8;
    }
L_08A1C1B8:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] & 255u);
    goto L_08A1C1C0;
L_08A1C1C0:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[17]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A1C16C;
      }
      goto L_08A1C1D0;
    }
L_08A1C1D0:
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(360)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 4u);
      if (branch_taken) {
          goto L_08A1C254;
      }
      goto L_08A1C1DC;
    }
L_08A1C1DC:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(33));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    goto L_08A1C1E8;
L_08A1C1E8:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(336)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(96)));
        goto L_08A1C21C;
    }
    goto L_08A1C1F8;
L_08A1C1F8:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A1C208u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 206u, 0x08AC5834u>(ctx, &aot_mem) && ctx.pc == 0x08A1C208u) goto L_08A1C208;
    return;
L_08A1C208:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(33)));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(96)));
    goto L_08A1C21C;
L_08A1C21C:
    ctx.gpr[6] = (ctx.gpr[17] & 255u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(209)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1C23C;
      }
      goto L_08A1C234;
    }
L_08A1C234:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] & 255u);
    goto L_08A1C23C;
L_08A1C23C:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[17]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A1C1E8;
      }
      goto L_08A1C24C;
    }
L_08A1C24C:
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(360)));
    ctx.gpr[20] = (0u | 2u);
    goto L_08A1C254;
L_08A1C254:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A1C684;
      }
      goto L_08A1C25C;
    }
L_08A1C25C:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(ctx.gpr[20]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x08A1C270u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 274u, 0x08A5DC80u>(ctx, &aot_mem) && ctx.pc == 0x08A1C270u) goto L_08A1C270;
    return;
L_08A1C270:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[30] = (0u | 70u);
      if (branch_taken) {
          goto L_08A1C410;
      }
      goto L_08A1C280;
    }
L_08A1C280:
    ctx.gpr[23] = (0u | 52u);
    ctx.gpr[22] = (0u | 1u);
    ctx.gpr[21] = (0u | 3u);
    ctx.gpr[20] = (0u | 2u);
    goto L_08A1C290;
L_08A1C290:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(336)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A1C2C0;
      }
      goto L_08A1C2A4;
    }
L_08A1C2A4:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(34));
    ctx.gpr[31] = (0x08A1C2B4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 206u, 0x08AC5834u>(ctx, &aot_mem) && ctx.pc == 0x08A1C2B4u) goto L_08A1C2B4;
    return;
L_08A1C2B4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(34)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A1C2C0;
L_08A1C2C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.gpr[5] = (ctx.gpr[17] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(216)));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A1C2E0;
      }
      goto L_08A1C2D8;
    }
L_08A1C2D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1C3F8;
      }
      goto L_08A1C2E0;
    }
L_08A1C2E0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (0u | 82u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(72))))));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A1C30C;
      }
      goto L_08A1C2F4;
    }
L_08A1C2F4:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[30];
    // nop
      if (branch_taken) {
          goto L_08A1C368;
      }
      goto L_08A1C2FC;
    }
L_08A1C2FC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[23];
    // nop
      if (branch_taken) {
          goto L_08A1C3C4;
      }
      goto L_08A1C304;
    }
L_08A1C304:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1C3E4;
      }
      goto L_08A1C30C;
    }
L_08A1C30C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[22];
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_08A1C320;
      }
      goto L_08A1C318;
    }
L_08A1C318:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_08A1C344;
      }
      goto L_08A1C320;
    }
L_08A1C320:
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A1C33Cu);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 524u, 0x08A1B1A4u>(ctx, &aot_mem) && ctx.pc == 0x08A1C33Cu) goto L_08A1C33C;
    return;
L_08A1C33C:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08A1C360;
      }
      goto L_08A1C344;
    }
L_08A1C344:
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A1C35Cu);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 547u, 0x08A1B38Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1C35Cu) goto L_08A1C35C;
    return;
L_08A1C35C:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08A1C360;
L_08A1C360:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1C3E4;
      }
      goto L_08A1C368;
    }
L_08A1C368:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_08A1C37C;
      }
      goto L_08A1C374;
    }
L_08A1C374:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_08A1C3A0;
      }
      goto L_08A1C37C;
    }
L_08A1C37C:
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A1C398u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 524u, 0x08A1B1A4u>(ctx, &aot_mem) && ctx.pc == 0x08A1C398u) goto L_08A1C398;
    return;
L_08A1C398:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08A1C3BC;
      }
      goto L_08A1C3A0;
    }
L_08A1C3A0:
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A1C3B8u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 547u, 0x08A1B38Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1C3B8u) goto L_08A1C3B8;
    return;
L_08A1C3B8:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08A1C3BC;
L_08A1C3BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1C3E4;
      }
      goto L_08A1C3C4;
    }
L_08A1C3C4:
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A1C3E0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 524u, 0x08A1B1A4u>(ctx, &aot_mem) && ctx.pc == 0x08A1C3E0u) goto L_08A1C3E0;
    return;
L_08A1C3E0:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08A1C3E4;
L_08A1C3E4:
    ctx.set_fpu_condition((ctx.fpr[24] < ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A1C3F8;
      }
      goto L_08A1C3F4;
    }
L_08A1C3F4:
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    goto L_08A1C3F8;
L_08A1C3F8:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[17] = (ctx.gpr[17] & 255u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A1C290;
      }
      goto L_08A1C410;
    }
L_08A1C410:
    ctx.set_fpu_condition((ctx.fpr[24] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[22] = (0u | 1u);
      if (branch_taken) {
          goto L_08A1C684;
      }
      goto L_08A1C420;
    }
L_08A1C420:
    ctx.gpr[4] = (16988u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (16928u << 16u);
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(60)));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08A1C450u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 924u, 0x08A9B62Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1C450u) goto L_08A1C450;
    return;
L_08A1C450:
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.gpr[16] = (0u | 3u);
      if (branch_taken) {
          goto L_08A1C684;
      }
      goto L_08A1C460;
    }
L_08A1C460:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (20224u << 16u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(336)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A1C49C;
      }
      goto L_08A1C47C;
    }
L_08A1C47C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(35));
    ctx.gpr[31] = (0x08A1C48Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 206u, 0x08AC5834u>(ctx, &aot_mem) && ctx.pc == 0x08A1C48Cu) goto L_08A1C48C;
    return;
L_08A1C48C:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(35)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08A1C49C;
L_08A1C49C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(304));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(32) ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (17820u << 16u);
        goto L_08A1C5D0;
    }
    goto L_08A1C4B4;
L_08A1C4B4:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(1872)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1C4CC:
    ctx.gpr[4] = (17995u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 8192u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (18184u << 16u);
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    ctx.gpr[5] = (ctx.gpr[5] | 47104u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (0u | 258u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.fpr[24] = ctx.fpr[24] + ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[24] < ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(56)));
      if (branch_taken) {
          goto L_08A1C510;
      }
      goto L_08A1C504;
    }
L_08A1C504:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[24]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A1C524;
      }
      goto L_08A1C510;
    }
L_08A1C510:
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[22];
    ctx.gpr[5] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    goto L_08A1C524;
L_08A1C524:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(52), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1C554;
      }
      goto L_08A1C53C;
    }
L_08A1C53C:
    ctx.gpr[4] = (16448u << 16u);
    ctx.gpr[6] = (2233u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (0u | 8u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(10640));
      if (branch_taken) {
          goto L_08A1C654;
      }
      goto L_08A1C554;
    }
L_08A1C554:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[22] | 0u);
      if (branch_taken) {
          goto L_08A1C690;
      }
      goto L_08A1C55C;
    }
L_08A1C55C:
    ctx.gpr[4] = (17723u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 32768u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (17820u << 16u);
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    ctx.gpr[5] = (ctx.gpr[5] | 16384u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (0u | 196u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[24] = ctx.fpr[24] + ctx.fpr[13];
    ctx.gpr[6] = (2233u << 16u);
    ctx.gpr[5] = (0u | 8u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[24] < ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(10640));
      if (branch_taken) {
          goto L_08A1C5B0;
      }
      goto L_08A1C5A4;
    }
L_08A1C5A4:
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[24]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_08A1C5C4;
      }
      goto L_08A1C5B0;
    }
L_08A1C5B0:
    ctx.fpr[13] = ctx.fpr[24] - ctx.fpr[22];
    ctx.gpr[4] = (32768u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    goto L_08A1C5C4;
L_08A1C5C4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A1C654;
      }
      goto L_08A1C5CC;
    }
L_08A1C5CC:
    ctx.gpr[4] = (17820u << 16u);
    goto L_08A1C5D0;
L_08A1C5D0:
    ctx.gpr[4] = (ctx.gpr[4] | 16384u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (17963u << 16u);
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    ctx.gpr[5] = (ctx.gpr[5] | 57344u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (0u | 280u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[24] = ctx.fpr[24] + ctx.fpr[13];
    ctx.gpr[6] = (2233u << 16u);
    ctx.gpr[5] = (0u | 8u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[24] < ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(10640));
      if (branch_taken) {
          goto L_08A1C620;
      }
      goto L_08A1C614;
    }
L_08A1C614:
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[24]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_08A1C634;
      }
      goto L_08A1C620;
    }
L_08A1C620:
    ctx.fpr[13] = ctx.fpr[24] - ctx.fpr[22];
    ctx.gpr[4] = (32768u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    goto L_08A1C634;
L_08A1C634:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A1C654;
      }
      goto L_08A1C648;
    }
L_08A1C648:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2000));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    goto L_08A1C654;
L_08A1C654:
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(48), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(64), 0u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(100), ctx.gpr[16]);
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A1C684u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 868u, 0x08A9B020u>(ctx, &aot_mem) && ctx.pc == 0x08A1C684u) goto L_08A1C684;
    return;
L_08A1C684:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[22] | 0u);
      if (branch_taken) {
          goto L_08A1C690;
      }
      goto L_08A1C68C;
    }
L_08A1C68C:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A1C690;
L_08A1C690:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1C6D0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    ctx.gpr[6] = (17817u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[6] | 8192u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[18]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A1CA44;
      }
      goto L_08A1C71C;
    }
L_08A1C71C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    ctx.gpr[5] = (0u | 5u);
      if (branch_taken) {
          goto L_08A1C738;
      }
      goto L_08A1C728;
    }
L_08A1C728:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A1C830;
      }
      goto L_08A1C730;
    }
L_08A1C730:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1C748;
      }
      goto L_08A1C738;
    }
L_08A1C738:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A1C7BC;
      }
      goto L_08A1C740;
    }
L_08A1C740:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1C830;
      }
      goto L_08A1C748;
    }
L_08A1C748:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
    goto L_08A1C750;
L_08A1C750:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(336)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(96)));
        goto L_08A1C784;
    }
    goto L_08A1C764;
L_08A1C764:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A1C774u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 206u, 0x08AC5834u>(ctx, &aot_mem) && ctx.pc == 0x08A1C774u) goto L_08A1C774;
    return;
L_08A1C774:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(96)));
    goto L_08A1C784;
L_08A1C784:
    ctx.gpr[5] = (ctx.gpr[19] & 255u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(209)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1C7A4;
      }
      goto L_08A1C79C;
    }
L_08A1C79C:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[18] & 255u);
    goto L_08A1C7A4;
L_08A1C7A4:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A1C750;
      }
      goto L_08A1C7B4;
    }
L_08A1C7B4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08A1C838;
      }
      goto L_08A1C7BC;
    }
L_08A1C7BC:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(25));
    goto L_08A1C7C4;
L_08A1C7C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(336)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(96)));
        goto L_08A1C7F8;
    }
    goto L_08A1C7D8;
L_08A1C7D8:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A1C7E8u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 206u, 0x08AC5834u>(ctx, &aot_mem) && ctx.pc == 0x08A1C7E8u) goto L_08A1C7E8;
    return;
L_08A1C7E8:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(25)));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(96)));
    goto L_08A1C7F8;
L_08A1C7F8:
    ctx.gpr[5] = (ctx.gpr[19] & 255u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(209)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1C818;
      }
      goto L_08A1C810;
    }
L_08A1C810:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[18] & 255u);
    goto L_08A1C818;
L_08A1C818:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A1C7C4;
      }
      goto L_08A1C828;
    }
L_08A1C828:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08A1C838;
      }
      goto L_08A1C830;
    }
L_08A1C830:
    ctx.gpr[18] = (0u | 4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    goto L_08A1C838;
L_08A1C838:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1CA3C;
      }
      goto L_08A1C840;
    }
L_08A1C840:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A1CA3C;
      }
      goto L_08A1C848;
    }
L_08A1C848:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]) & 0x7FFFFFFFu);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A1CA3C;
      }
      goto L_08A1C864;
    }
L_08A1C864:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x08A1C878u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 274u, 0x08A5DC80u>(ctx, &aot_mem) && ctx.pc == 0x08A1C878u) goto L_08A1C878;
    return;
L_08A1C878:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[22] / ctx.fpr[13];
    ctx.gpr[4] = (16256u << 16u);
    ctx.gpr[5] = (17036u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_08A1C8B4;
    }
    goto L_08A1C8B4;
L_08A1C8B4:
    ctx.gpr[4] = (16880u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[15]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[18] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[18] = (ctx.gpr[18] & 255u);
    ctx.gpr[31] = (0x08A1C8E0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 924u, 0x08A9B62Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1C8E0u) goto L_08A1C8E0;
    return;
L_08A1C8E0:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A1CA3C;
      }
      goto L_08A1C8F0;
    }
L_08A1C8F0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(336)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(304));
      if (branch_taken) {
          goto L_08A1C93C;
      }
      goto L_08A1C918;
    }
L_08A1C918:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(26));
    ctx.gpr[31] = (0x08A1C928u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 206u, 0x08AC5834u>(ctx, &aot_mem) && ctx.pc == 0x08A1C928u) goto L_08A1C928;
    return;
L_08A1C928:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(26)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(304));
    goto L_08A1C93C;
L_08A1C93C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (0u | 19u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(6050));
      if (branch_taken) {
          goto L_08A1C97C;
      }
      goto L_08A1C94C;
    }
L_08A1C94C:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[18])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (0u | 30u);
    ctx.gpr[5] = (ctx.lo);
    // nop
    // nop
    { const std::uint32_t dividend = ctx.gpr[5]; const std::uint32_t divisor = ctx.gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (0u | 18u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16000));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A1CA08;
      }
      goto L_08A1C97C;
    }
L_08A1C97C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[22];
    ctx.gpr[4] = (0u | 264u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25200));
    ctx.gpr[5] = (0u | 264u);
    ctx.gpr[31] = (0x08A1C9A0u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 335u, 0x088B5ECCu>(ctx, &aot_mem) && ctx.pc == 0x08A1C9A0u) goto L_08A1C9A0;
    return;
L_08A1C9A0:
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[5] = (20224u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (ctx.gpr[4] >> 2u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A1C9CC;
      }
      goto L_08A1C9C0;
    }
L_08A1C9C0:
    ctx.gpr[5] = (20352u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    goto L_08A1C9CC;
L_08A1C9CC:
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[13];
        goto L_08A1C9F0;
    }
    goto L_08A1C9E0;
L_08A1C9E0:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[20]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A1CA04;
      }
      goto L_08A1C9F0;
    }
L_08A1C9F0:
    ctx.gpr[5] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    goto L_08A1CA04;
L_08A1CA04:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    goto L_08A1CA08;
L_08A1CA08:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), 0u);
    ctx.gpr[4] = (16576u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 4u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), ctx.gpr[4]);
    ctx.gpr[4] = (2233u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A1CA3Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10640));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 868u, 0x08A9B020u>(ctx, &aot_mem) && ctx.pc == 0x08A1CA3Cu) goto L_08A1CA3C;
    return;
L_08A1CA3C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A1CA48;
      }
      goto L_08A1CA44;
    }
L_08A1CA44:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A1CA48;
L_08A1CA48:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1CA74:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (17505u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A1CE38;
      }
      goto L_08A1CAB4;
    }
L_08A1CAB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    ctx.gpr[5] = (0u | 5u);
      if (branch_taken) {
          goto L_08A1CAE0;
      }
      goto L_08A1CAC0;
    }
L_08A1CAC0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A1CB00;
      }
      goto L_08A1CAC8;
    }
L_08A1CAC8:
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A1CB08;
      }
      goto L_08A1CAD8;
    }
L_08A1CAD8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1CBCC;
      }
      goto L_08A1CAE0;
    }
L_08A1CAE0:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A1CB00;
      }
      goto L_08A1CAE8;
    }
L_08A1CAE8:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A1CBE4;
      }
      goto L_08A1CAF8;
    }
L_08A1CAF8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1CCA8;
      }
      goto L_08A1CB00;
    }
L_08A1CB00:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A1CE3C;
      }
      goto L_08A1CB08;
    }
L_08A1CB08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(336)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(96)));
        goto L_08A1CB3C;
    }
    goto L_08A1CB1C;
L_08A1CB1C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.gpr[31] = (0x08A1CB2Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 206u, 0x08AC5834u>(ctx, &aot_mem) && ctx.pc == 0x08A1CB2Cu) goto L_08A1CB2C;
    return;
L_08A1CB2C:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(96)));
    goto L_08A1CB3C;
L_08A1CB3C:
    ctx.gpr[5] = (ctx.gpr[20] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(216)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A1CBB8;
      }
      goto L_08A1CB54;
    }
L_08A1CB54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(336)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(96)));
        goto L_08A1CB88;
    }
    goto L_08A1CB68;
L_08A1CB68:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(25));
    ctx.gpr[31] = (0x08A1CB78u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 206u, 0x08AC5834u>(ctx, &aot_mem) && ctx.pc == 0x08A1CB78u) goto L_08A1CB78;
    return;
L_08A1CB78:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(25)));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(96)));
    goto L_08A1CB88;
L_08A1CB88:
    ctx.gpr[5] = (ctx.gpr[20] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(209)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A1CBB8;
      }
      goto L_08A1CBB0;
    }
L_08A1CBB0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_08A1CBCC;
      }
      goto L_08A1CBB8;
    }
L_08A1CBB8:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[20] = (ctx.gpr[20] & 255u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A1CB08;
      }
      goto L_08A1CBCC;
    }
L_08A1CBCC:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1CBDC;
      }
      goto L_08A1CBD4;
    }
L_08A1CBD4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1CCC0;
      }
      goto L_08A1CBDC;
    }
L_08A1CBDC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A1CE3C;
      }
      goto L_08A1CBE4;
    }
L_08A1CBE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(336)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(96)));
        goto L_08A1CC18;
    }
    goto L_08A1CBF8;
L_08A1CBF8:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(26));
    ctx.gpr[31] = (0x08A1CC08u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 206u, 0x08AC5834u>(ctx, &aot_mem) && ctx.pc == 0x08A1CC08u) goto L_08A1CC08;
    return;
L_08A1CC08:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(26)));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(96)));
    goto L_08A1CC18;
L_08A1CC18:
    ctx.gpr[5] = (ctx.gpr[19] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(216)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A1CC94;
      }
      goto L_08A1CC30;
    }
L_08A1CC30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(336)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(96)));
        goto L_08A1CC64;
    }
    goto L_08A1CC44;
L_08A1CC44:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(27));
    ctx.gpr[31] = (0x08A1CC54u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 206u, 0x08AC5834u>(ctx, &aot_mem) && ctx.pc == 0x08A1CC54u) goto L_08A1CC54;
    return;
L_08A1CC54:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(27)));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(96)));
    goto L_08A1CC64;
L_08A1CC64:
    ctx.gpr[5] = (ctx.gpr[19] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(209)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A1CC94;
      }
      goto L_08A1CC8C;
    }
L_08A1CC8C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_08A1CCA8;
      }
      goto L_08A1CC94;
    }
L_08A1CC94:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[19] = (ctx.gpr[19] & 255u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A1CBE4;
      }
      goto L_08A1CCA8;
    }
L_08A1CCA8:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1CCB8;
      }
      goto L_08A1CCB0;
    }
L_08A1CCB0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1CCC0;
      }
      goto L_08A1CCB8;
    }
L_08A1CCB8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A1CE3C;
      }
      goto L_08A1CCC0;
    }
L_08A1CCC0:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) & 0x7FFFFFFFu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (16025u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[20] = ctx.fpr[20] / ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_08A1CCFC;
    }
    goto L_08A1CCFC;
L_08A1CCFC:
    ctx.gpr[4] = (15395u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A1CE30;
      }
      goto L_08A1CD18;
    }
L_08A1CD18:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x08A1CD28u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 274u, 0x08A5DC80u>(ctx, &aot_mem) && ctx.pc == 0x08A1CD28u) goto L_08A1CD28;
    return;
L_08A1CD28:
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[5] = (16880u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[31] = (0x08A1CD54u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 924u, 0x08A9B62Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1CD54u) goto L_08A1CD54;
    return;
L_08A1CD54:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.gpr[4] = (0u | 95u);
      if (branch_taken) {
          goto L_08A1CE30;
      }
      goto L_08A1CD64;
    }
L_08A1CD64:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (17835u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 5u);
    ctx.gpr[5] = (ctx.gpr[5] | 57344u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 303u);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (20224u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (17835u << 16u);
      if (branch_taken) {
          goto L_08A1CDC4;
      }
      goto L_08A1CDA8;
    }
L_08A1CDA8:
    ctx.gpr[4] = (17835u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 57344u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A1CDEC;
      }
      goto L_08A1CDC4;
    }
L_08A1CDC4:
    ctx.gpr[4] = (ctx.gpr[4] | 57344u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (20224u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (32768u << 16u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_08A1CDEC;
L_08A1CDEC:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8000));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (16384u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16880u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), ctx.gpr[4]);
    ctx.gpr[4] = (2233u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x08A1CE30u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10640));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 868u, 0x08A9B020u>(ctx, &aot_mem) && ctx.pc == 0x08A1CE30u) goto L_08A1CE30;
    return;
L_08A1CE30:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A1CE3C;
      }
      goto L_08A1CE38;
    }
L_08A1CE38:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A1CE3C;
L_08A1CE3C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
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
L_08A1CE60:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(336)));
    ctx.gpr[7] = (2232u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(5992));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(100)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[17]);
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(52)));
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] ^ ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A1CEFC;
      }
      goto L_08A1CEA8;
    }
L_08A1CEA8:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29200)));
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(17) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08A1CF24;
      }
      goto L_08A1CEE0;
    }
L_08A1CEE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29200)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(2000)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1CEFC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1D1A4;
      }
      goto L_08A1CF04;
    }
L_08A1CF04:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7872)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_08A1CF2C;
      }
      goto L_08A1CF1C;
    }
L_08A1CF1C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1CF40;
      }
      goto L_08A1CF24;
    }
L_08A1CF24:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1D1A4;
      }
      goto L_08A1CF2C;
    }
L_08A1CF2C:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08A1CF40;
L_08A1CF40:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(66))))));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24340)));
    ctx.gpr[19] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x08A1CF84u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 304u, 0x08A6D4E8u>(ctx, &aot_mem) && ctx.pc == 0x08A1CF84u) goto L_08A1CF84;
    return;
L_08A1CF84:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-130));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1CFB0;
      }
      goto L_08A1CFA4;
    }
L_08A1CFA4:
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(56));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A1CFB4;
      }
      goto L_08A1CFB0;
    }
L_08A1CFB0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
    goto L_08A1CFB4;
L_08A1CFB4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-130));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(336)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(96)));
        goto L_08A1CFF4;
    }
    goto L_08A1CFD4;
L_08A1CFD4:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.gpr[31] = (0x08A1CFE4u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 206u, 0x08AC5834u>(ctx, &aot_mem) && ctx.pc == 0x08A1CFE4u) goto L_08A1CFE4;
    return;
L_08A1CFE4:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(96)));
    goto L_08A1CFF4;
L_08A1CFF4:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(96));
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
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(336)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(108)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2224u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08A1D038u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(23512));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A1D038u) goto L_08A1D038;
    return;
L_08A1D038:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
        goto L_08A1D048;
    }
    goto L_08A1D040;
L_08A1D040:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), 0u);
      if (branch_taken) {
          goto L_08A1D07C;
      }
      goto L_08A1D048;
    }
L_08A1D048:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(336)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (2224u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08A1D06Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(20356));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A1D06Cu) goto L_08A1D06C;
    return;
L_08A1D06C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1D07C;
      }
      goto L_08A1D074;
    }
L_08A1D074:
    ctx.gpr[4] = (0u | 5u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    goto L_08A1D07C;
L_08A1D07C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    ctx.gpr[5] = (0u | 5u);
      if (branch_taken) {
          goto L_08A1D098;
      }
      goto L_08A1D088;
    }
L_08A1D088:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A1D1A4;
      }
      goto L_08A1D090;
    }
L_08A1D090:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1D118;
      }
      goto L_08A1D098;
    }
L_08A1D098:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A1D1A4;
      }
      goto L_08A1D0A0;
    }
L_08A1D0A0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x08A1D0B0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 355u, 0x08A1A2ECu>(ctx, &aot_mem) && ctx.pc == 0x08A1D0B0u) goto L_08A1D0B0;
    return;
L_08A1D0B0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A1D0BCu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_08A1C6D0;
L_08A1D0BC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1D10C;
      }
      goto L_08A1D0C4;
    }
L_08A1D0C4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A1D0D0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_08A1C0B8;
L_08A1D0D0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A1D0DCu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 449u, 0x08A1AB78u>(ctx, &aot_mem) && ctx.pc == 0x08A1D0DCu) goto L_08A1D0DC;
    return;
L_08A1D0DC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A1D0E8u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 488u, 0x08A1AEB4u>(ctx, &aot_mem) && ctx.pc == 0x08A1D0E8u) goto L_08A1D0E8;
    return;
L_08A1D0E8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A1D0F4u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 394u, 0x08A1A630u>(ctx, &aot_mem) && ctx.pc == 0x08A1D0F4u) goto L_08A1D0F4;
    return;
L_08A1D0F4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A1D100u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 555u, 0x08A1B460u>(ctx, &aot_mem) && ctx.pc == 0x08A1D100u) goto L_08A1D100;
    return;
L_08A1D100:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A1D10Cu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_08A1CA74;
L_08A1D10C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(356), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A1D1A4;
      }
      goto L_08A1D118;
    }
L_08A1D118:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x08A1D128u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 355u, 0x08A1A2ECu>(ctx, &aot_mem) && ctx.pc == 0x08A1D128u) goto L_08A1D128;
    return;
L_08A1D128:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A1D134u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_08A1C6D0;
L_08A1D134:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1D19C;
      }
      goto L_08A1D13C;
    }
L_08A1D13C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A1D148u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 364u, 0x08A1A3A4u>(ctx, &aot_mem) && ctx.pc == 0x08A1D148u) goto L_08A1D148;
    return;
L_08A1D148:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A1D154u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_08A1C0B8;
L_08A1D154:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A1D160u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_08A1CA74;
L_08A1D160:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A1D16Cu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 449u, 0x08A1AB78u>(ctx, &aot_mem) && ctx.pc == 0x08A1D16Cu) goto L_08A1D16C;
    return;
L_08A1D16C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A1D178u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 488u, 0x08A1AEB4u>(ctx, &aot_mem) && ctx.pc == 0x08A1D178u) goto L_08A1D178;
    return;
L_08A1D178:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A1D184u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 555u, 0x08A1B460u>(ctx, &aot_mem) && ctx.pc == 0x08A1D184u) goto L_08A1D184;
    return;
L_08A1D184:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A1D190u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 394u, 0x08A1A630u>(ctx, &aot_mem) && ctx.pc == 0x08A1D190u) goto L_08A1D190;
    return;
L_08A1D190:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A1D19Cu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 422u, 0x08A1A878u>(ctx, &aot_mem) && ctx.pc == 0x08A1D19Cu) goto L_08A1D19C;
    return;
L_08A1D19C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(356), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A1D1A4;
L_08A1D1A4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1D1C0:
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-14628)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[5] = (2229u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-14632)));
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.gpr[9] = (2229u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-14604)));
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
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(-14624), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[12] = (2229u << 16u);
    ctx.fpr[14] = ctx.fpr[17] / ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(-14616), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[19] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(-14620), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[8]);
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-14612), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-14608), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(-14600), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1D254:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A1D268u);
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[15];
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 282u, 0x089D962Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1D268u) goto L_08A1D268;
    return;
L_08A1D268:
    ctx.gpr[4] = (16997u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 12000u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1D284:
    ctx.gpr[4] = (17204u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (49972u << 16u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A1D2BC;
      }
      goto L_08A1D2A0;
    }
L_08A1D2A0:
    ctx.gpr[4] = (17332u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_08A1D2A8;
L_08A1D2A8:
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A1D2A8;
      }
      goto L_08A1D2BC;
    }
L_08A1D2BC:
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (17332u << 16u);
      if (branch_taken) {
          goto L_08A1D2E4;
      }
      goto L_08A1D2CC;
    }
L_08A1D2CC:
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_08A1D2D0;
L_08A1D2D0:
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A1D2D0;
      }
      goto L_08A1D2E4;
    }
L_08A1D2E4:
    jump_target = ctx.gpr[31];
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1D2EC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A1D2FCu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 282u, 0x089D962Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1D2FCu) goto L_08A1D2FC;
    return;
L_08A1D2FC:
    ctx.gpr[4] = (16585u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A1D320;
      }
      goto L_08A1D31C;
    }
L_08A1D31C:
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[12];
    goto L_08A1D320;
L_08A1D320:
    ctx.fpr[13] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[4] = (16073u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A1D348;
      }
      goto L_08A1D344;
    }
L_08A1D344:
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[12];
    goto L_08A1D348;
L_08A1D348:
    ctx.fpr[12] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[4] = (16640u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<3u>(ctx.fpr[12]));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[2] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[2] = (ctx.gpr[2] & 65535u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1D378:
    ctx.gpr[6] = (16512u << 16u);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(0u);
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[14] = ctx.fpr[15] - ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[17]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A1D3AC;
      }
      goto L_08A1D3A4;
    }
L_08A1D3A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A1D3E4;
      }
      goto L_08A1D3AC;
    }
L_08A1D3AC:
    ctx.fpr[14] = std::sqrt(ctx.fpr[14]);
    ctx.fpr[15] = ctx.fpr[14] - ctx.fpr[13];
    ctx.gpr[6] = (16128u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[15] = ctx.fpr[15] / ctx.fpr[12];
    ctx.gpr[2] = (0u | 1u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) ^ 0x80000000u);
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[14];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[13] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A1D3E4;
      }
      goto L_08A1D3E4;
    }
L_08A1D3E4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1D3EC:
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[8]);
    { const std::uint16_t vfpu_half = 14336u;
      const std::uint32_t vfpu_sign = static_cast<std::uint32_t>(vfpu_half & 0x8000u) << 16u;
      std::uint32_t vfpu_exponent = (vfpu_half >> 10u) & 0x1Fu;
      std::uint32_t vfpu_mantissa = vfpu_half & 0x03FFu;
      std::uint32_t vfpu_bits = 0u;
      if (vfpu_exponent == 0u) {
        if (vfpu_mantissa == 0u) vfpu_bits = vfpu_sign;
        else {
          std::uint32_t shift = 0u;
          while ((vfpu_mantissa & 0x0400u) == 0u) { vfpu_mantissa <<= 1u; ++shift; }
          vfpu_mantissa &= 0x03FFu;
          vfpu_bits = vfpu_sign | ((113u - shift) << 23u) | (vfpu_mantissa << 13u);
        }
      } else if (vfpu_exponent == 31u) {
        vfpu_bits = vfpu_sign | 0x7F800000u | (vfpu_mantissa << 13u);
      } else {
        vfpu_bits = vfpu_sign | ((vfpu_exponent + 112u) << 23u) | (vfpu_mantissa << 13u);
      }
      const float vfpu_value[1]{std::bit_cast<float>(vfpu_bits)};
      ctx.write_vfpu_vector_with_destination_prefix_ct<1u, 1u>(vfpu_value); }
    { const float vfpu_constant = std::bit_cast<float>(0x3EA2F983u);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<33u, 1u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<33u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<1u, 1u>(vfpu_d); }
    { const std::uint16_t vfpu_half = 20032u;
      const std::uint32_t vfpu_sign = static_cast<std::uint32_t>(vfpu_half & 0x8000u) << 16u;
      std::uint32_t vfpu_exponent = (vfpu_half >> 10u) & 0x1Fu;
      std::uint32_t vfpu_mantissa = vfpu_half & 0x03FFu;
      std::uint32_t vfpu_bits = 0u;
      if (vfpu_exponent == 0u) {
        if (vfpu_mantissa == 0u) vfpu_bits = vfpu_sign;
        else {
          std::uint32_t shift = 0u;
          while ((vfpu_mantissa & 0x0400u) == 0u) { vfpu_mantissa <<= 1u; ++shift; }
          vfpu_mantissa &= 0x03FFu;
          vfpu_bits = vfpu_sign | ((113u - shift) << 23u) | (vfpu_mantissa << 13u);
        }
      } else if (vfpu_exponent == 31u) {
        vfpu_bits = vfpu_sign | 0x7F800000u | (vfpu_mantissa << 13u);
      } else {
        vfpu_bits = vfpu_sign | ((vfpu_exponent + 112u) << 23u) | (vfpu_mantissa << 13u);
      }
      const float vfpu_value[1]{std::bit_cast<float>(vfpu_bits)};
      ctx.write_vfpu_vector_with_destination_prefix_ct<2u, 1u>(vfpu_value); }
    { const std::uint16_t vfpu_half = 52800u;
      const std::uint32_t vfpu_sign = static_cast<std::uint32_t>(vfpu_half & 0x8000u) << 16u;
      std::uint32_t vfpu_exponent = (vfpu_half >> 10u) & 0x1Fu;
      std::uint32_t vfpu_mantissa = vfpu_half & 0x03FFu;
      std::uint32_t vfpu_bits = 0u;
      if (vfpu_exponent == 0u) {
        if (vfpu_mantissa == 0u) vfpu_bits = vfpu_sign;
        else {
          std::uint32_t shift = 0u;
          while ((vfpu_mantissa & 0x0400u) == 0u) { vfpu_mantissa <<= 1u; ++shift; }
          vfpu_mantissa &= 0x03FFu;
          vfpu_bits = vfpu_sign | ((113u - shift) << 23u) | (vfpu_mantissa << 13u);
        }
      } else if (vfpu_exponent == 31u) {
        vfpu_bits = vfpu_sign | 0x7F800000u | (vfpu_mantissa << 13u);
      } else {
        vfpu_bits = vfpu_sign | ((vfpu_exponent + 112u) << 23u) | (vfpu_mantissa << 13u);
      }
      const float vfpu_value[1]{std::bit_cast<float>(vfpu_bits)};
      ctx.write_vfpu_vector_with_destination_prefix_ct<34u, 1u>(vfpu_value); }
    { const float vfpu_constant = std::bit_cast<float>(0x40490FDBu);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<65u, 1u>(vfpu_value); }
    { const float vfpu_constant = std::bit_cast<float>(0x40C90FDBu);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<97u, 1u>(vfpu_value); }
    ctx.execute_vfpu_vminmax(0u, 0u, 2u, 1u, false);
    ctx.execute_vfpu_vminmax(0u, 0u, 34u, 1u, true);
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}; std::int32_t vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<32u, 1u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<1u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, static_cast<int>(0u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 1u; ++vfpu_i) {
        if (std::isnan(vfpu_s[vfpu_i])) { vfpu_d[vfpu_i] = std::numeric_limits<std::int32_t>::max(); continue; }
        const double vfpu_scaled = static_cast<double>(vfpu_s[vfpu_i] * vfpu_scale);
        if (vfpu_scaled > static_cast<double>(std::numeric_limits<std::int32_t>::max())) vfpu_d[vfpu_i] = std::numeric_limits<std::int32_t>::max();
        else if (vfpu_scaled <= static_cast<double>(std::numeric_limits<std::int32_t>::min())) vfpu_d[vfpu_i] = std::numeric_limits<std::int32_t>::min();
        else { double vfpu_rounded = 0.0;
          switch (17u) {
          case 16u: vfpu_rounded = psprecomp::AllegrexContext::round_ties_to_even(vfpu_scaled); break;
          case 17u: vfpu_rounded = std::trunc(vfpu_scaled); break;
          case 18u: vfpu_rounded = std::ceil(vfpu_scaled); break;
          default: vfpu_rounded = std::floor(vfpu_scaled); break;
          }
          vfpu_d[vfpu_i] = static_cast<std::int32_t>(vfpu_rounded);
        }
      }
      const std::uint32_t vfpu_destination_prefix = ctx.vfpu_ctrl[2];
      for (std::uint32_t vfpu_i = 0; vfpu_i < 1u; ++vfpu_i) {
        if (((vfpu_destination_prefix >> (8u + vfpu_i)) & 1u) == 0u)
          ctx.vfpu[psprecomp::AllegrexContext::vfpu_vector_lane_index(32u, 1u, vfpu_i)] = std::bit_cast<float>(static_cast<std::uint32_t>(vfpu_d[vfpu_i]));
      }
      ctx.eat_vfpu_prefixes(); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<32u, 1u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<1u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, -static_cast<int>(0u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 1u; ++vfpu_i) {
        const auto vfpu_integer = static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(vfpu_s[vfpu_i]));
        vfpu_d[vfpu_i] = static_cast<float>(vfpu_integer) * vfpu_scale;
      }
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_d); }
    { float vfpu_value[4]{};
      ctx.write_vfpu_vector_with_destination_prefix_ct<2u, 2u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vcmp_ct<0u, 65u, 1u, 6u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<65u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = -vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<33u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vcmov_ct<2u, 97u, 1u, 0u, false>();
    ctx.execute_vfpu_vcmp_ct<0u, 33u, 1u, 2u>();
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<2u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vcmov_ct<34u, 97u, 1u, 0u, false>();
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<34u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    ctx.gpr[8] = (ctx.vfpu_scalar_bits_ct<0u>());
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[8]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1D45C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A1D46Cu);
    ctx.gpr[4] = (0u | 64u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08A1D46Cu) goto L_08A1D46C;
    return;
L_08A1D46C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1D478:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A1D488u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 656u, 0x08AA3128u>(ctx, &aot_mem) && ctx.pc == 0x08A1D488u) goto L_08A1D488;
    return;
L_08A1D488:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1D498:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (65534u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-4));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1D4B4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    ctx.gpr[7] = (15502u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] | 64053u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[16]);
    ctx.fpr[15] = std::bit_cast<float>(0u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[16]) || std::isnan(ctx.fpr[15])) && ctx.fpr[16] == ctx.fpr[15]));
    ctx.gpr[5] = (16256u << 16u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A1D528;
      }
      goto L_08A1D4F8;
    }
L_08A1D4F8:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[14]) || std::isnan(ctx.fpr[15])) && ctx.fpr[14] == ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A1D528;
      }
      goto L_08A1D508;
    }
L_08A1D508:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[15])) && ctx.fpr[13] == ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A1D528;
      }
      goto L_08A1D518;
    }
L_08A1D518:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
      if (branch_taken) {
          goto L_08A1D55C;
      }
      goto L_08A1D528;
    }
L_08A1D528:
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[19] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[19] = fs * ft; }
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[18];
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[19];
    ctx.fpr[15] = std::sqrt(ctx.fpr[15]);
    ctx.fpr[15] = ctx.fpr[12] / ctx.fpr[15];
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_08A1D55C;
L_08A1D55C:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[17]));
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
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[17]));
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
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x08A1D5A8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A1DA64;
L_08A1D5A8:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1D5BC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) > 0;
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A1D654;
      }
      goto L_08A1D5C8;
    }
L_08A1D5C8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A1D808;
      }
      goto L_08A1D5D0;
    }
L_08A1D5D0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(60)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), ctx.gpr[8]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(60), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A1D80C;
      }
      goto L_08A1D654;
    }
L_08A1D654:
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A1D66C;
      }
      goto L_08A1D65C;
    }
L_08A1D65C:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A1D738;
      }
      goto L_08A1D664;
    }
L_08A1D664:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1D808;
      }
      goto L_08A1D66C;
    }
L_08A1D66C:
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<7u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<8u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<9u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<10u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<11u, 4u>(vfpu_value); }
    { float vfpu_value[4]{};
      ctx.write_vfpu_vector_with_destination_prefix_ct<39u, 3u>(vfpu_value); }
    { float vfpu_value[4]{};
      ctx.write_vfpu_vector_with_destination_prefix_ct<43u, 3u>(vfpu_value); }
    { float vfpu_value[4]{1.0f, 1.0f, 1.0f, 1.0f};
      ctx.write_vfpu_vector_with_destination_prefix_ct<103u, 1u>(vfpu_value); }
    { float vfpu_value[4]{1.0f, 1.0f, 1.0f, 1.0f};
      ctx.write_vfpu_vector_with_destination_prefix_ct<107u, 1u>(vfpu_value); }
    { float vfpu_s[16]{}, vfpu_t[16]{}, vfpu_d[16]{};
      ctx.read_vfpu_matrix(vfpu_s, 4u, 4u);
      ctx.read_vfpu_matrix(vfpu_t, 40u, 4u);
      for (std::uint32_t a = 0; a < 4u; ++a) {
        for (std::uint32_t b = 0; b < 4u; ++b) {
          float sum = 0.0f;
          for (std::uint32_t c = 0; c < 4u; ++c) sum += vfpu_s[b * 4u + c] * vfpu_t[a * 4u + c];
          vfpu_d[a * 4u + b] = sum;
        }
      }
      ctx.write_vfpu_matrix(vfpu_d, 32u, 4u);
      ctx.eat_vfpu_prefixes(); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(16);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(32);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<3u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(48);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(60), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1D80C;
      }
      goto L_08A1D738;
    }
L_08A1D738:
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<7u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<8u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<9u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<10u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<11u, 4u>(vfpu_value); }
    { float vfpu_value[4]{};
      ctx.write_vfpu_vector_with_destination_prefix_ct<39u, 3u>(vfpu_value); }
    { float vfpu_value[4]{};
      ctx.write_vfpu_vector_with_destination_prefix_ct<43u, 3u>(vfpu_value); }
    { float vfpu_value[4]{1.0f, 1.0f, 1.0f, 1.0f};
      ctx.write_vfpu_vector_with_destination_prefix_ct<103u, 1u>(vfpu_value); }
    { float vfpu_value[4]{1.0f, 1.0f, 1.0f, 1.0f};
      ctx.write_vfpu_vector_with_destination_prefix_ct<107u, 1u>(vfpu_value); }
    { float vfpu_s[16]{}, vfpu_t[16]{}, vfpu_d[16]{};
      ctx.read_vfpu_matrix(vfpu_s, 4u, 4u);
      ctx.read_vfpu_matrix(vfpu_t, 40u, 4u);
      for (std::uint32_t a = 0; a < 4u; ++a) {
        for (std::uint32_t b = 0; b < 4u; ++b) {
          float sum = 0.0f;
          for (std::uint32_t c = 0; c < 4u; ++c) sum += vfpu_s[b * 4u + c] * vfpu_t[a * 4u + c];
          vfpu_d[a * 4u + b] = sum;
        }
      }
      ctx.write_vfpu_matrix(vfpu_d, 32u, 4u);
      ctx.eat_vfpu_prefixes(); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(16);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(32);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<3u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(48);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(60), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1D80C;
      }
      goto L_08A1D808;
    }
L_08A1D808:
    ctx.gpr[4] = (0u | 0u);
    goto L_08A1D80C;
L_08A1D80C:
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1D818:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A1D834u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 503u, 0x08A06460u>(ctx, &aot_mem) && ctx.pc == 0x08A1D834u) goto L_08A1D834;
    return;
L_08A1D834:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1D848:
    ctx.gpr[7] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (65534u << 16u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) > 0;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-4));
      if (branch_taken) {
          goto L_08A1D8D0;
      }
      goto L_08A1D858;
    }
L_08A1D858:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) < 0;
    ctx.gpr[7] = (16256u << 16u);
      if (branch_taken) {
          goto L_08A1DA4C;
      }
      goto L_08A1D860;
    }
L_08A1D860:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[8] = (2u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(3));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[7] = (ctx.gpr[7] | ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[7]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[7] & ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A1DA58;
      }
      goto L_08A1D8D0;
    }
L_08A1D8D0:
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[7]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A1D9B0;
      }
      goto L_08A1D8DC;
    }
L_08A1D8DC:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1DA4C;
      }
      goto L_08A1D8E4;
    }
L_08A1D8E4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[6] = (ctx.gpr[7] & ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A1DA58;
      }
      goto L_08A1D9B0;
    }
L_08A1D9B0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[6] = (ctx.gpr[7] & ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A1DA58;
      }
      goto L_08A1DA4C;
    }
L_08A1DA4C:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (ctx.gpr[5] & ctx.gpr[6]);
    goto L_08A1DA58;
L_08A1DA58:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[6]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1DA64:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-176));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.gpr[7] = (16256u << 16u);
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[16] = ctx.fpr[19] - ctx.fpr[16];
    ctx.fpr[17] = ctx.fpr[19] - ctx.fpr[17];
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[2] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[19] - ctx.fpr[0];
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[1] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[3] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[3] = fs * ft; }
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[2] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[1] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    ctx.fpr[16] = ctx.fpr[19] - ctx.fpr[16];
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[4] = ctx.fpr[1] - ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[3] = ctx.fpr[2] + ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[5] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[15] = ctx.fpr[1] + ctx.fpr[15];
    ctx.fpr[16] = ctx.fpr[19] - ctx.fpr[17];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[4]));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[5]));
    ctx.gpr[5] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.fpr[12] = ctx.fpr[2] - ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[16] = ctx.fpr[19] - ctx.fpr[0];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[3]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) > 0;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A1DBE0;
      }
      goto L_08A1DB54;
    }
L_08A1DB54:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A1DD90;
      }
      goto L_08A1DB5C;
    }
L_08A1DB5C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), ctx.gpr[7]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(60), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A1DD94;
      }
      goto L_08A1DBE0;
    }
L_08A1DBE0:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A1DCC0;
      }
      goto L_08A1DBE8;
    }
L_08A1DBE8:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1DD90;
      }
      goto L_08A1DBF0;
    }
L_08A1DBF0:
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<7u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<8u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<9u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<10u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<11u, 4u>(vfpu_value); }
    { float vfpu_value[4]{};
      ctx.write_vfpu_vector_with_destination_prefix_ct<39u, 3u>(vfpu_value); }
    { float vfpu_value[4]{};
      ctx.write_vfpu_vector_with_destination_prefix_ct<43u, 3u>(vfpu_value); }
    { float vfpu_value[4]{1.0f, 1.0f, 1.0f, 1.0f};
      ctx.write_vfpu_vector_with_destination_prefix_ct<103u, 1u>(vfpu_value); }
    { float vfpu_value[4]{1.0f, 1.0f, 1.0f, 1.0f};
      ctx.write_vfpu_vector_with_destination_prefix_ct<107u, 1u>(vfpu_value); }
    { float vfpu_s[16]{}, vfpu_t[16]{}, vfpu_d[16]{};
      ctx.read_vfpu_matrix(vfpu_s, 4u, 4u);
      ctx.read_vfpu_matrix(vfpu_t, 40u, 4u);
      for (std::uint32_t a = 0; a < 4u; ++a) {
        for (std::uint32_t b = 0; b < 4u; ++b) {
          float sum = 0.0f;
          for (std::uint32_t c = 0; c < 4u; ++c) sum += vfpu_s[b * 4u + c] * vfpu_t[a * 4u + c];
          vfpu_d[a * 4u + b] = sum;
        }
      }
      ctx.write_vfpu_matrix(vfpu_d, 32u, 4u);
      ctx.eat_vfpu_prefixes(); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(16);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(32);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<3u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(48);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(60), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1DD94;
      }
      goto L_08A1DCC0;
    }
L_08A1DCC0:
    { const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<7u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<8u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<9u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<10u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<11u, 4u>(vfpu_value); }
    { float vfpu_value[4]{};
      ctx.write_vfpu_vector_with_destination_prefix_ct<39u, 3u>(vfpu_value); }
    { float vfpu_value[4]{};
      ctx.write_vfpu_vector_with_destination_prefix_ct<43u, 3u>(vfpu_value); }
    { float vfpu_value[4]{1.0f, 1.0f, 1.0f, 1.0f};
      ctx.write_vfpu_vector_with_destination_prefix_ct<103u, 1u>(vfpu_value); }
    { float vfpu_value[4]{1.0f, 1.0f, 1.0f, 1.0f};
      ctx.write_vfpu_vector_with_destination_prefix_ct<107u, 1u>(vfpu_value); }
    { float vfpu_s[16]{}, vfpu_t[16]{}, vfpu_d[16]{};
      ctx.read_vfpu_matrix(vfpu_s, 4u, 4u);
      ctx.read_vfpu_matrix(vfpu_t, 40u, 4u);
      for (std::uint32_t a = 0; a < 4u; ++a) {
        for (std::uint32_t b = 0; b < 4u; ++b) {
          float sum = 0.0f;
          for (std::uint32_t c = 0; c < 4u; ++c) sum += vfpu_s[b * 4u + c] * vfpu_t[a * 4u + c];
          vfpu_d[a * 4u + b] = sum;
        }
      }
      ctx.write_vfpu_matrix(vfpu_d, 32u, 4u);
      ctx.eat_vfpu_prefixes(); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(16);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(32);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<3u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(48);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(60), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1DD94;
      }
      goto L_08A1DD90;
    }
L_08A1DD90:
    ctx.gpr[4] = (0u | 0u);
    goto L_08A1DD94;
L_08A1DD94:
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1DDA0:
    ctx.gpr[7] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (65534u << 16u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) > 0;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A1DE28;
      }
      goto L_08A1DDB0;
    }
L_08A1DDB0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) < 0;
    ctx.gpr[7] = (16256u << 16u);
      if (branch_taken) {
          goto L_08A1DF2C;
      }
      goto L_08A1DDB8;
    }
L_08A1DDB8:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[8] = (2u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(3));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[7] = (ctx.gpr[7] | ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[7]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[7] & ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A1DF38;
      }
      goto L_08A1DE28;
    }
L_08A1DE28:
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[7]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A1DE78;
      }
      goto L_08A1DE34;
    }
L_08A1DE34:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1DF2C;
      }
      goto L_08A1DE3C;
    }
L_08A1DE3C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.fpr[12] = ctx.fpr[14] + ctx.fpr[12];
    ctx.gpr[6] = (ctx.gpr[7] & ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = ctx.fpr[15] + ctx.fpr[12];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A1DF38;
      }
      goto L_08A1DE78;
    }
L_08A1DE78:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[16];
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[18];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[15];
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[17];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.gpr[6] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[16];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A1DF38;
      }
      goto L_08A1DF2C;
    }
L_08A1DF2C:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (ctx.gpr[5] & ctx.gpr[6]);
    goto L_08A1DF38;
L_08A1DF38:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[6]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1DF44:
    ctx.gpr[9] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(2)));
    ctx.gpr[11] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[5]);
    ctx.gpr[10] = (ctx.gpr[10] + ctx.gpr[5]);
    ctx.gpr[11] = (ctx.gpr[11] + ctx.gpr[5]);
    ctx.gpr[12] = (rt.memory().aot_load_word_right(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[12]));
    ctx.gpr[12] = (rt.memory().aot_load_word_left(ctx.gpr[9] + static_cast<std::uint32_t>(3), ctx.gpr[12]));
    ctx.gpr[9] = (aot_mem.aot_load16(ctx.gpr[9] + static_cast<std::uint32_t>(4)));
    ctx.gpr[13] = (rt.memory().aot_load_word_right(ctx.gpr[10] + static_cast<std::uint32_t>(0), ctx.gpr[13]));
    ctx.gpr[13] = (rt.memory().aot_load_word_left(ctx.gpr[10] + static_cast<std::uint32_t>(3), ctx.gpr[13]));
    ctx.gpr[10] = (aot_mem.aot_load16(ctx.gpr[10] + static_cast<std::uint32_t>(4)));
    ctx.gpr[14] = (rt.memory().aot_load_word_right(ctx.gpr[11] + static_cast<std::uint32_t>(0), ctx.gpr[14]));
    ctx.gpr[14] = (rt.memory().aot_load_word_left(ctx.gpr[11] + static_cast<std::uint32_t>(3), ctx.gpr[14]));
    ctx.gpr[11] = (aot_mem.aot_load16(ctx.gpr[11] + static_cast<std::uint32_t>(4)));
    ctx.set_vfpu_scalar_bits_ct<8u>(ctx.gpr[12]);
    ctx.set_vfpu_scalar_bits_ct<40u>(ctx.gpr[9]);
    ctx.set_vfpu_scalar_bits_ct<9u>(ctx.gpr[13]);
    ctx.set_vfpu_scalar_bits_ct<41u>(ctx.gpr[10]);
    ctx.set_vfpu_scalar_bits_ct<10u>(ctx.gpr[14]);
    ctx.set_vfpu_scalar_bits_ct<42u>(ctx.gpr[11]);
    ctx.execute_vfpu_vx2i(4u, 8u, 2u, 3u);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<4u, 4u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<4u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, -static_cast<int>(23u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 4u; ++vfpu_i) {
        const auto vfpu_integer = static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(vfpu_s[vfpu_i]));
        vfpu_d[vfpu_i] = static_cast<float>(vfpu_integer) * vfpu_scale;
      }
      ctx.write_vfpu_vector_with_destination_prefix_ct<4u, 4u>(vfpu_d); }
    ctx.execute_vfpu_vx2i(5u, 9u, 2u, 3u);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<5u, 4u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<4u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, -static_cast<int>(23u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 4u; ++vfpu_i) {
        const auto vfpu_integer = static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(vfpu_s[vfpu_i]));
        vfpu_d[vfpu_i] = static_cast<float>(vfpu_integer) * vfpu_scale;
      }
      ctx.write_vfpu_vector_with_destination_prefix_ct<5u, 4u>(vfpu_d); }
    ctx.execute_vfpu_vx2i(6u, 10u, 2u, 3u);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<6u, 4u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<4u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, -static_cast<int>(23u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 4u; ++vfpu_i) {
        const auto vfpu_integer = static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(vfpu_s[vfpu_i]));
        vfpu_d[vfpu_i] = static_cast<float>(vfpu_integer) * vfpu_scale;
      }
      ctx.write_vfpu_vector_with_destination_prefix_ct<6u, 4u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<4u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<5u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<6u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
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
L_08A1DFC4:
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
L_08A1DFF0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-560));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(516), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(520), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(524), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(528), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(532), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(536), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(540), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(544), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(548), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(552), ctx.gpr[31]);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-505));
    ctx.gpr[6] = (ctx.gpr[6] < static_cast<std::uint32_t>(100) ? 1u : 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 70u, 0x08A204E4u>(ctx, &aot_mem); return;
      }
      goto L_08A1E030;
    }
L_08A1E030:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-505));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[5]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(2352)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1E04C:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A1E064u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A1E064u) goto L_08A1E064;
    return;
L_08A1E064:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    ctx.gpr[31] = (0x08A1E074u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 829u, 0x08AFB924u>(ctx, &aot_mem) && ctx.pc == 0x08A1E074u) goto L_08A1E074;
    return;
L_08A1E074:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(32));
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[4] = (49016u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 20972u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A1E0AC;
      }
      goto L_08A1E0A4;
    }
L_08A1E0A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08A1E0B0;
      }
      goto L_08A1E0AC;
    }
L_08A1E0AC:
    ctx.gpr[4] = (0u | 0u);
    goto L_08A1E0B0;
L_08A1E0B0:
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_08A1E0DC;
      }
      goto L_08A1E0D4;
    }
L_08A1E0D4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A1E12C;
      }
      goto L_08A1E0DC;
    }
L_08A1E0DC:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_08A1E10C;
    }
    goto L_08A1E0F8;
L_08A1E0F8:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A1E12C;
      }
      goto L_08A1E10C;
    }
L_08A1E10C:
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1E12C;
      }
      goto L_08A1E128;
    }
L_08A1E128:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_08A1E12C;
L_08A1E12C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 71u, 0x08A204E8u>(ctx, &aot_mem); return;
      }
      goto L_08A1E134;
    }
L_08A1E134:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[18] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A1E150u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A1E150u) goto L_08A1E150;
    return;
L_08A1E150:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-15044)));
    ctx.gpr[31] = (0x08A1E188u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 472u, 0x08AFDFC8u>(ctx, &aot_mem) && ctx.pc == 0x08A1E188u) goto L_08A1E188;
    return;
L_08A1E188:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-2736), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A1E19Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 640u, 0x08957EB8u>(ctx, &aot_mem) && ctx.pc == 0x08A1E19Cu) goto L_08A1E19C;
    return;
L_08A1E19C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 71u, 0x08A204E8u>(ctx, &aot_mem); return;
      }
      goto L_08A1E1A4;
    }
L_08A1E1A4:
    ctx.gpr[31] = (0x08A1E1ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 237u, 0x08A25570u>(ctx, &aot_mem) && ctx.pc == 0x08A1E1ACu) goto L_08A1E1AC;
    return;
L_08A1E1AC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 71u, 0x08A204E8u>(ctx, &aot_mem); return;
      }
      goto L_08A1E1B4;
    }
L_08A1E1B4:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08A1E1D0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A1E1D0u) goto L_08A1E1D0;
    return;
L_08A1E1D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[16] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1E220;
      }
      goto L_08A1E200;
    }
L_08A1E200:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2094))))));
    ctx.gpr[5] = (ctx.gpr[5] | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2094), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[31] = (0x08A1E218u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 141u, 0x088C4B30u>(ctx, &aot_mem) && ctx.pc == 0x08A1E218u) goto L_08A1E218;
    return;
L_08A1E218:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1E234;
      }
      goto L_08A1E220;
    }
L_08A1E220:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2094))))));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2094), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08A1E234;
L_08A1E234:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 71u, 0x08A204E8u>(ctx, &aot_mem); return;
      }
      goto L_08A1E23C;
    }
L_08A1E23C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08A1E27C;
      }
      goto L_08A1E24C;
    }
L_08A1E24C:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08A1E258u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08A1E258u) goto L_08A1E258;
    return;
L_08A1E258:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08A1E274;
      }
      goto L_08A1E264;
    }
L_08A1E264:
    ctx.gpr[31] = (0x08A1E26Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08A1E26Cu) goto L_08A1E26C;
    return;
L_08A1E26C:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    ctx.gpr[4] = (2227u << 16u);
    goto L_08A1E274;
L_08A1E274:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_08A1E27C;
L_08A1E27C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-29316)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x08A1E294u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08A1E294u) goto L_08A1E294;
    return;
L_08A1E294:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[18] = (2269u << 16u);
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 8u);
    ctx.gpr[31] = (0x08A1E2C0u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A1E2C0u) goto L_08A1E2C0;
    return;
L_08A1E2C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(28)));
    ctx.gpr[8] = (0u < ctx.gpr[8] ? 1u : 0u);
    ctx.gpr[2] = (ctx.gpr[8] & 255u);
    ctx.gpr[8] = (ctx.gpr[17] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[31] = (0x08A1E2FCu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 700u, 0x08917A78u>(ctx, &aot_mem) && ctx.pc == 0x08A1E2FCu) goto L_08A1E2FC;
    return;
L_08A1E2FC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 71u, 0x08A204E8u>(ctx, &aot_mem); return;
      }
      goto L_08A1E304;
    }
L_08A1E304:
    ctx.gpr[31] = (0x08A1E30Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 699u, 0x08917A6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1E30Cu) goto L_08A1E30C;
    return;
L_08A1E30C:
    ctx.gpr[4] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-2736), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A1E324u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 640u, 0x08957EB8u>(ctx, &aot_mem) && ctx.pc == 0x08A1E324u) goto L_08A1E324;
    return;
L_08A1E324:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 71u, 0x08A204E8u>(ctx, &aot_mem); return;
      }
      goto L_08A1E32C;
    }
L_08A1E32C:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[18] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A1E348u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A1E348u) goto L_08A1E348;
    return;
L_08A1E348:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-2736)));
    ctx.fpr[12] = std::sqrt(ctx.fpr[12]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-2736), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A1E368u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 640u, 0x08957EB8u>(ctx, &aot_mem) && ctx.pc == 0x08A1E368u) goto L_08A1E368;
    return;
L_08A1E368:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 71u, 0x08A204E8u>(ctx, &aot_mem); return;
      }
      goto L_08A1E370;
    }
L_08A1E370:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[31] = (0x08A1E380u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 321u, 0x0887D95Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1E380u) goto L_08A1E380;
    return;
L_08A1E380:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 71u, 0x08A204E8u>(ctx, &aot_mem); return;
      }
      goto L_08A1E388;
    }
L_08A1E388:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[31] = (0x08A1E398u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 501u, 0x0887E5A0u>(ctx, &aot_mem) && ctx.pc == 0x08A1E398u) goto L_08A1E398;
    return;
L_08A1E398:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 71u, 0x08A204E8u>(ctx, &aot_mem); return;
      }
      goto L_08A1E3A0;
    }
L_08A1E3A0:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[18] = (2269u << 16u);
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08A1E3C0u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A1E3C0u) goto L_08A1E3C0;
    return;
L_08A1E3C0:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[31] = (0x08A1E3CCu);
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x08A1E3CCu) goto L_08A1E3CC;
    return;
L_08A1E3CC:
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[20];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-2736), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A1E3F0u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 640u, 0x08957EB8u>(ctx, &aot_mem) && ctx.pc == 0x08A1E3F0u) goto L_08A1E3F0;
    return;
L_08A1E3F0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 71u, 0x08A204E8u>(ctx, &aot_mem); return;
      }
      goto L_08A1E3F8;
    }
L_08A1E3F8:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[18] = (2269u << 16u);
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08A1E418u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A1E418u) goto L_08A1E418;
    return;
L_08A1E418:
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[23] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[22]) >> 31u));
    ctx.gpr[31] = (0x08A1E428u);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x08A1E428u) goto L_08A1E428;
    return;
L_08A1E428:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[19] - ctx.gpr[22]);
    ctx.gpr[31] = (0x08A1E43Cu);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 31u));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 360u, 0x08AF5BFCu>(ctx, &aot_mem) && ctx.pc == 0x08A1E43Cu) goto L_08A1E43C;
    return;
L_08A1E43C:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[22] + ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[6] < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[23]);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-2736), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A1E478u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 640u, 0x08957EB8u>(ctx, &aot_mem) && ctx.pc == 0x08A1E478u) goto L_08A1E478;
    return;
L_08A1E478:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 71u, 0x08A204E8u>(ctx, &aot_mem); return;
      }
      goto L_08A1E480;
    }
L_08A1E480:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08A1E49Cu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A1E49Cu) goto L_08A1E49C;
    return;
L_08A1E49C:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    ctx.gpr[31] = (0x08A1E4ACu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 829u, 0x08AFB924u>(ctx, &aot_mem) && ctx.pc == 0x08A1E4ACu) goto L_08A1E4AC;
    return;
L_08A1E4AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(660), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 71u, 0x08A204E8u>(ctx, &aot_mem); return;
      }
      goto L_08A1E4BC;
    }
L_08A1E4BC:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A1E4D4u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A1E4D4u) goto L_08A1E4D4;
    return;
L_08A1E4D4:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    ctx.gpr[31] = (0x08A1E4E4u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 829u, 0x08AFB924u>(ctx, &aot_mem) && ctx.pc == 0x08A1E4E4u) goto L_08A1E4E4;
    return;
L_08A1E4E4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(599))))));
    ctx.gpr[4] = (ctx.gpr[4] | 64u);
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(599), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(280));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08A1E50Cu);
    ctx.gpr[5] = (0u | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A1E50Cu) goto L_08A1E50C;
    return;
L_08A1E50C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 71u, 0x08A204E8u>(ctx, &aot_mem); return;
      }
      goto L_08A1E514;
    }
L_08A1E514:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08A1E530u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A1E530u) goto L_08A1E530;
    return;
L_08A1E530:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(416), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(420), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(424), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(416));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[31] = (0x08A1E56Cu);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 406u, 0x08A46A1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1E56Cu) goto L_08A1E56C;
    return;
L_08A1E56C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 71u, 0x08A204E8u>(ctx, &aot_mem); return;
      }
      goto L_08A1E574;
    }
L_08A1E574:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A1E58Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A1E58Cu) goto L_08A1E58C;
    return;
L_08A1E58C:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    ctx.gpr[31] = (0x08A1E59Cu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 829u, 0x08AFB924u>(ctx, &aot_mem) && ctx.pc == 0x08A1E59Cu) goto L_08A1E59C;
    return;
L_08A1E59C:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(32));
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A1E5CC;
      }
      goto L_08A1E5C4;
    }
L_08A1E5C4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08A1E5D0;
      }
      goto L_08A1E5CC;
    }
L_08A1E5CC:
    ctx.gpr[4] = (0u | 0u);
    goto L_08A1E5D0;
L_08A1E5D0:
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_08A1E5FC;
      }
      goto L_08A1E5F4;
    }
L_08A1E5F4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A1E64C;
      }
      goto L_08A1E5FC;
    }
L_08A1E5FC:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_08A1E62C;
    }
    goto L_08A1E618;
L_08A1E618:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A1E64C;
      }
      goto L_08A1E62C;
    }
L_08A1E62C:
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1E64C;
      }
      goto L_08A1E648;
    }
L_08A1E648:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_08A1E64C;
L_08A1E64C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 71u, 0x08A204E8u>(ctx, &aot_mem); return;
      }
      goto L_08A1E654;
    }
L_08A1E654:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08A1E670u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A1E670u) goto L_08A1E670;
    return;
L_08A1E670:
    ctx.gpr[19] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-15044)));
    ctx.gpr[31] = (0x08A1E680u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x08A1E680u) goto L_08A1E680;
    return;
L_08A1E680:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-15044)));
    ctx.gpr[31] = (0x08A1E690u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x08A1E690u) goto L_08A1E690;
    return;
L_08A1E690:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1E6C8;
      }
      goto L_08A1E6A0;
    }
L_08A1E6A0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1E6C8;
      }
      goto L_08A1E6AC;
    }
L_08A1E6AC:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1E6DC;
      }
      goto L_08A1E6C8;
    }
L_08A1E6C8:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    goto L_08A1E6DC;
L_08A1E6DC:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1E710;
      }
      goto L_08A1E6E8;
    }
L_08A1E6E8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1E710;
      }
      goto L_08A1E6F4;
    }
L_08A1E6F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1E720;
      }
      goto L_08A1E710;
    }
L_08A1E710:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    goto L_08A1E720;
L_08A1E720:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(416));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[31] = (0x08A1E754u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 282u, 0x089D962Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1E754u) goto L_08A1E754;
    return;
L_08A1E754:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (16585u << 16u);
      if (branch_taken) {
          goto L_08A1E778;
      }
      goto L_08A1E76C;
    }
L_08A1E76C:
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_08A1E778;
L_08A1E778:
    ctx.gpr[4] = (16329u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[4] = (16585u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A1E7B4;
      }
      goto L_08A1E7A4;
    }
L_08A1E7A4:
    ctx.gpr[4] = (16585u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    goto L_08A1E7B4;
L_08A1E7B4:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A1E7CC;
      }
      goto L_08A1E7BC;
    }
L_08A1E7BC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1248), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08A1E7CCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 43u, 0x08A287ACu>(ctx, &aot_mem) && ctx.pc == 0x08A1E7CCu) goto L_08A1E7CC;
    return;
L_08A1E7CC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 71u, 0x08A204E8u>(ctx, &aot_mem); return;
      }
      goto L_08A1E7D4;
    }
L_08A1E7D4:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08A1E7F0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A1E7F0u) goto L_08A1E7F0;
    return;
L_08A1E7F0:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    ctx.gpr[31] = (0x08A1E800u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x08A1E800u) goto L_08A1E800;
    return;
L_08A1E800:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1E85C;
      }
      goto L_08A1E834;
    }
L_08A1E834:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1E85C;
      }
      goto L_08A1E840;
    }
L_08A1E840:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1E870;
      }
      goto L_08A1E85C;
    }
L_08A1E85C:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    goto L_08A1E870;
L_08A1E870:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(416));
    ctx.gpr[31] = (0x08A1E87Cu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 295u, 0x089D61ECu>(ctx, &aot_mem) && ctx.pc == 0x08A1E87Cu) goto L_08A1E87C;
    return;
L_08A1E87C:
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[31] = (0x08A1E8B4u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 282u, 0x089D962Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1E8B4u) goto L_08A1E8B4;
    return;
L_08A1E8B4:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (16585u << 16u);
      if (branch_taken) {
          goto L_08A1E8D8;
      }
      goto L_08A1E8CC;
    }
L_08A1E8CC:
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_08A1E8D8;
L_08A1E8D8:
    ctx.gpr[4] = (16329u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[4] = (16585u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A1E914;
      }
      goto L_08A1E904;
    }
L_08A1E904:
    ctx.gpr[4] = (16585u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    goto L_08A1E914;
L_08A1E914:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A1E92C;
      }
      goto L_08A1E91C;
    }
L_08A1E91C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1248), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08A1E92Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 43u, 0x08A287ACu>(ctx, &aot_mem) && ctx.pc == 0x08A1E92Cu) goto L_08A1E92C;
    return;
L_08A1E92C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 71u, 0x08A204E8u>(ctx, &aot_mem); return;
      }
      goto L_08A1E934;
    }
L_08A1E934:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08A1E950u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A1E950u) goto L_08A1E950;
    return;
L_08A1E950:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[16] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    ctx.gpr[31] = (0x08A1E984u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x08A1E984u) goto L_08A1E984;
    return;
L_08A1E984:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1E9C8;
      }
      goto L_08A1E998;
    }
L_08A1E998:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1E9C8;
      }
      goto L_08A1E9A8;
    }
L_08A1E9A8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1E9E0;
      }
      goto L_08A1E9C8;
    }
L_08A1E9C8:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    goto L_08A1E9E0;
L_08A1E9E0:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1EA14;
      }
      goto L_08A1E9EC;
    }
L_08A1E9EC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1EA14;
      }
      goto L_08A1E9F8;
    }
L_08A1E9F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1EA24;
      }
      goto L_08A1EA14;
    }
L_08A1EA14:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    goto L_08A1EA24;
L_08A1EA24:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(416));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[31] = (0x08A1EA58u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 282u, 0x089D962Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1EA58u) goto L_08A1EA58;
    return;
L_08A1EA58:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (16585u << 16u);
      if (branch_taken) {
          goto L_08A1EA7C;
      }
      goto L_08A1EA70;
    }
L_08A1EA70:
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_08A1EA7C;
L_08A1EA7C:
    ctx.gpr[4] = (16329u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[4] = (16585u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A1EAB8;
      }
      goto L_08A1EAA8;
    }
L_08A1EAA8:
    ctx.gpr[4] = (16585u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    goto L_08A1EAB8;
L_08A1EAB8:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A1EAD8;
      }
      goto L_08A1EAC0;
    }
L_08A1EAC0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1248), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08A1EAD8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 43u, 0x08A287ACu>(ctx, &aot_mem) && ctx.pc == 0x08A1EAD8u) goto L_08A1EAD8;
    return;
L_08A1EAD8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 71u, 0x08A204E8u>(ctx, &aot_mem); return;
      }
      goto L_08A1EAE0;
    }
L_08A1EAE0:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[31] = (0x08A1EAFCu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A1EAFCu) goto L_08A1EAFC;
    return;
L_08A1EAFC:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    ctx.gpr[31] = (0x08A1EB0Cu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x08A1EB0Cu) goto L_08A1EB0C;
    return;
L_08A1EB0C:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08A1EB24u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 448u, 0x088C2E78u>(ctx, &aot_mem) && ctx.pc == 0x08A1EB24u) goto L_08A1EB24;
    return;
L_08A1EB24:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[6] = (32768u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 31u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(416), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(420), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(424), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(416));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A1EB64u);
    ctx.gpr[5] = (0u | 24u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 1046u, 0x08893734u>(ctx, &aot_mem) && ctx.pc == 0x08A1EB64u) goto L_08A1EB64;
    return;
L_08A1EB64:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 71u, 0x08A204E8u>(ctx, &aot_mem); return;
      }
      goto L_08A1EB6C;
    }
L_08A1EB6C:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A1EB84u);
    ctx.gpr[6] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A1EB84u) goto L_08A1EB84;
    return;
L_08A1EB84:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08A1EBB0;
      }
      goto L_08A1EB90;
    }
L_08A1EB90:
    ctx.gpr[4] = (0u - ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5168));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    goto L_08A1EBB0;
L_08A1EBB0:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2736));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (49864u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(512), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_08A1EBF8;
    }
    goto L_08A1EBDC;
L_08A1EBDC:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x08A1EBE8u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 448u, 0x088C2E78u>(ctx, &aot_mem) && ctx.pc == 0x08A1EBE8u) goto L_08A1EBE8;
    return;
L_08A1EBE8:
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[0] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(512), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A1EBF8;
L_08A1EBF8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x08A1EC04u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 627u, 0x08957D28u>(ctx, &aot_mem) && ctx.pc == 0x08A1EC04u) goto L_08A1EC04;
    return;
L_08A1EC04:
    ctx.gpr[31] = (0x08A1EC0Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 227u, 0x08A822ACu>(ctx, &aot_mem) && ctx.pc == 0x08A1EC0Cu) goto L_08A1EC0C;
    return;
L_08A1EC0C:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(512)));
      if (branch_taken) {
          goto L_08A1EC18;
      }
      goto L_08A1EC18;
    }
L_08A1EC18:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(416), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(420), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(424), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(416));
    ctx.gpr[18] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[31] = (0x08A1EC50u);
    ctx.gpr[10] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 206u, 0x08A84F08u>(ctx, &aot_mem) && ctx.pc == 0x08A1EC50u) goto L_08A1EC50;
    return;
L_08A1EC50:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-2736), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A1EC64u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 640u, 0x08957EB8u>(ctx, &aot_mem) && ctx.pc == 0x08A1EC64u) goto L_08A1EC64;
    return;
L_08A1EC64:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 71u, 0x08A204E8u>(ctx, &aot_mem); return;
      }
      goto L_08A1EC6C;
    }
L_08A1EC6C:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A1EC84u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A1EC84u) goto L_08A1EC84;
    return;
L_08A1EC84:
    ctx.gpr[31] = (0x08A1EC8Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 153u, 0x08A817CCu>(ctx, &aot_mem) && ctx.pc == 0x08A1EC8Cu) goto L_08A1EC8C;
    return;
L_08A1EC8C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1EC9C;
      }
      goto L_08A1EC94;
    }
L_08A1EC94:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08A1ECA0;
      }
      goto L_08A1EC9C;
    }
L_08A1EC9C:
    ctx.gpr[4] = (0u | 0u);
    goto L_08A1ECA0;
L_08A1ECA0:
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_08A1ECCC;
      }
      goto L_08A1ECC4;
    }
L_08A1ECC4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A1ED1C;
      }
      goto L_08A1ECCC;
    }
L_08A1ECCC:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_08A1ECFC;
    }
    goto L_08A1ECE8;
L_08A1ECE8:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A1ED1C;
      }
      goto L_08A1ECFC;
    }
L_08A1ECFC:
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1ED1C;
      }
      goto L_08A1ED18;
    }
L_08A1ED18:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_08A1ED1C;
L_08A1ED1C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 71u, 0x08A204E8u>(ctx, &aot_mem); return;
      }
      goto L_08A1ED24;
    }
L_08A1ED24:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A1ED3Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A1ED3Cu) goto L_08A1ED3C;
    return;
L_08A1ED3C:
    ctx.gpr[31] = (0x08A1ED44u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 159u, 0x08A8180Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1ED44u) goto L_08A1ED44;
    return;
L_08A1ED44:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 71u, 0x08A204E8u>(ctx, &aot_mem); return;
      }
      goto L_08A1ED4C;
    }
L_08A1ED4C:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08A1ED68u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A1ED68u) goto L_08A1ED68;
    return;
L_08A1ED68:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    ctx.gpr[31] = (0x08A1ED78u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 829u, 0x08AFB924u>(ctx, &aot_mem) && ctx.pc == 0x08A1ED78u) goto L_08A1ED78;
    return;
L_08A1ED78:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1ED9C;
      }
      goto L_08A1ED88;
    }
L_08A1ED88:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A1ED94u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 107u, 0x0880C788u>(ctx, &aot_mem) && ctx.pc == 0x08A1ED94u) goto L_08A1ED94;
    return;
L_08A1ED94:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1EDA8;
      }
      goto L_08A1ED9C;
    }
L_08A1ED9C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A1EDA8u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 107u, 0x0880C788u>(ctx, &aot_mem) && ctx.pc == 0x08A1EDA8u) goto L_08A1EDA8;
    return;
L_08A1EDA8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 71u, 0x08A204E8u>(ctx, &aot_mem); return;
      }
      goto L_08A1EDB0;
    }
L_08A1EDB0:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08A1EDF0;
      }
      goto L_08A1EDC0;
    }
L_08A1EDC0:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08A1EDCCu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08A1EDCCu) goto L_08A1EDCC;
    return;
L_08A1EDCC:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08A1EDE8;
      }
      goto L_08A1EDD8;
    }
L_08A1EDD8:
    ctx.gpr[31] = (0x08A1EDE0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08A1EDE0u) goto L_08A1EDE0;
    return;
L_08A1EDE0:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    ctx.gpr[4] = (2227u << 16u);
    goto L_08A1EDE8;
L_08A1EDE8:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_08A1EDF0;
L_08A1EDF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-29316)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x08A1EE08u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08A1EE08u) goto L_08A1EE08;
    return;
L_08A1EE08:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[18] = (2269u << 16u);
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08A1EE34u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A1EE34u) goto L_08A1EE34;
    return;
L_08A1EE34:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[31] = (0x08A1EE4Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 292u, 0x08879B2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1EE4Cu) goto L_08A1EE4C;
    return;
L_08A1EE4C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 71u, 0x08A204E8u>(ctx, &aot_mem); return;
      }
      goto L_08A1EE54;
    }
L_08A1EE54:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08A1EE94;
      }
      goto L_08A1EE64;
    }
L_08A1EE64:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08A1EE70u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08A1EE70u) goto L_08A1EE70;
    return;
L_08A1EE70:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08A1EE8C;
      }
      goto L_08A1EE7C;
    }
L_08A1EE7C:
    ctx.gpr[31] = (0x08A1EE84u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08A1EE84u) goto L_08A1EE84;
    return;
L_08A1EE84:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    ctx.gpr[4] = (2227u << 16u);
    goto L_08A1EE8C;
L_08A1EE8C:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_08A1EE94;
L_08A1EE94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-29316)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x08A1EEACu);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08A1EEACu) goto L_08A1EEAC;
    return;
L_08A1EEAC:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[18] = (2269u << 16u);
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[31] = (0x08A1EED8u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A1EED8u) goto L_08A1EED8;
    return;
L_08A1EED8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[9] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[10] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[11] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x08A1EF0Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 402u, 0x0887A728u>(ctx, &aot_mem) && ctx.pc == 0x08A1EF0Cu) goto L_08A1EF0C;
    return;
L_08A1EF0C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 71u, 0x08A204E8u>(ctx, &aot_mem); return;
      }
      goto L_08A1EF14;
    }
L_08A1EF14:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[18] = (2269u << 16u);
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 9u);
    ctx.gpr[31] = (0x08A1EF34u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A1EF34u) goto L_08A1EF34;
    return;
L_08A1EF34:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-2736)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24)));
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[31] = (0x08A1EF64u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 419u, 0x08941CE4u>(ctx, &aot_mem) && ctx.pc == 0x08A1EF64u) goto L_08A1EF64;
    return;
L_08A1EF64:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-2736), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A1EF78u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 640u, 0x08957EB8u>(ctx, &aot_mem) && ctx.pc == 0x08A1EF78u) goto L_08A1EF78;
    return;
L_08A1EF78:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 71u, 0x08A204E8u>(ctx, &aot_mem); return;
      }
      goto L_08A1EF80;
    }
L_08A1EF80:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08A1EF9Cu);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A1EF9Cu) goto L_08A1EF9C;
    return;
L_08A1EF9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08A1EFC8;
      }
      goto L_08A1EFA8;
    }
L_08A1EFA8:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[31] = (0x08A1EFC0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 777u, 0x0893BE18u>(ctx, &aot_mem) && ctx.pc == 0x08A1EFC0u) goto L_08A1EFC0;
    return;
L_08A1EFC0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1EFF4;
      }
      goto L_08A1EFC8;
    }
L_08A1EFC8:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[31] = (0x08A1EFE0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 829u, 0x08AFB924u>(ctx, &aot_mem) && ctx.pc == 0x08A1EFE0u) goto L_08A1EFE0;
    return;
L_08A1EFE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[31] = (0x08A1EFF4u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 777u, 0x0893BE18u>(ctx, &aot_mem) && ctx.pc == 0x08A1EFF4u) goto L_08A1EFF4;
    return;
L_08A1EFF4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 71u, 0x08A204E8u>(ctx, &aot_mem); return;
      }
      goto L_08A1EFFC;
    }
L_08A1EFFC:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A1F014u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A1F014u) goto L_08A1F014;
    return;
L_08A1F014:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[31] = (0x08A1F024u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 791u, 0x0893BF30u>(ctx, &aot_mem) && ctx.pc == 0x08A1F024u) goto L_08A1F024;
    return;
L_08A1F024:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1F034;
      }
      goto L_08A1F02C;
    }
L_08A1F02C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08A1F038;
      }
      goto L_08A1F034;
    }
L_08A1F034:
    ctx.gpr[4] = (0u | 0u);
    goto L_08A1F038;
L_08A1F038:
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_08A1F064;
      }
      goto L_08A1F05C;
    }
L_08A1F05C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A1F0B4;
      }
      goto L_08A1F064;
    }
L_08A1F064:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_08A1F094;
    }
    goto L_08A1F080;
L_08A1F080:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A1F0B4;
      }
      goto L_08A1F094;
    }
L_08A1F094:
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1F0B4;
      }
      goto L_08A1F0B0;
    }
L_08A1F0B0:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_08A1F0B4;
L_08A1F0B4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 71u, 0x08A204E8u>(ctx, &aot_mem); return;
      }
      goto L_08A1F0BC;
    }
L_08A1F0BC:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A1F0D4u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A1F0D4u) goto L_08A1F0D4;
    return;
L_08A1F0D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1F0F0;
      }
      goto L_08A1F0E0;
    }
L_08A1F0E0:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2230u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-6591), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A1F0F8;
      }
      goto L_08A1F0F0;
    }
L_08A1F0F0:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-6591), static_cast<std::uint8_t>(0u));
    goto L_08A1F0F8;
L_08A1F0F8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 71u, 0x08A204E8u>(ctx, &aot_mem); return;
      }
      goto L_08A1F100;
    }
L_08A1F100:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A1F118u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A1F118u) goto L_08A1F118;
    return;
L_08A1F118:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    ctx.gpr[31] = (0x08A1F128u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 829u, 0x08AFB924u>(ctx, &aot_mem) && ctx.pc == 0x08A1F128u) goto L_08A1F128;
    return;
L_08A1F128:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1509))))));
    ctx.gpr[5] = (ctx.gpr[5] & 7u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1F140;
      }
      goto L_08A1F13C;
    }
L_08A1F13C:
    ctx.gpr[4] = (0u | 1u);
    goto L_08A1F140;
L_08A1F140:
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_08A1F16C;
      }
      goto L_08A1F164;
    }
L_08A1F164:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A1F1BC;
      }
      goto L_08A1F16C;
    }
L_08A1F16C:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_08A1F19C;
    }
    goto L_08A1F188;
L_08A1F188:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A1F1BC;
      }
      goto L_08A1F19C;
    }
L_08A1F19C:
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1F1BC;
      }
      goto L_08A1F1B8;
    }
L_08A1F1B8:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_08A1F1BC;
L_08A1F1BC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 71u, 0x08A204E8u>(ctx, &aot_mem); return;
      }
      goto L_08A1F1C4;
    }
L_08A1F1C4:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08A1F1E0u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A1F1E0u) goto L_08A1F1E0;
    return;
L_08A1F1E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1F204;
      }
      goto L_08A1F1EC;
    }
L_08A1F1EC:
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[31] = (0x08A1F1FCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2736)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08A1F1FCu) goto L_08A1F1FC;
    return;
L_08A1F1FC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(148), static_cast<std::uint8_t>(ctx.gpr[16]));
      if (branch_taken) {
          goto L_08A1F214;
      }
      goto L_08A1F204;
    }
L_08A1F204:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[31] = (0x08A1F210u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2736)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08A1F210u) goto L_08A1F210;
    return;
L_08A1F210:
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(148), static_cast<std::uint8_t>(0u));
    goto L_08A1F214;
L_08A1F214:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 71u, 0x08A204E8u>(ctx, &aot_mem); return;
      }
      goto L_08A1F21C;
    }
L_08A1F21C:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08A1F238u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A1F238u) goto L_08A1F238;
    return;
L_08A1F238:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[16] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(359)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2269u << 16u);
      if (branch_taken) {
          goto L_08A1F278;
      }
      goto L_08A1F270;
    }
L_08A1F270:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(359)));
      if (branch_taken) {
          goto L_08A1F280;
      }
      goto L_08A1F278;
    }
L_08A1F278:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    goto L_08A1F280;
L_08A1F280:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1208), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 71u, 0x08A204E8u>(ctx, &aot_mem); return;
      }
      goto L_08A1F29C;
    }
L_08A1F29C:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08A1F2B8u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A1F2B8u) goto L_08A1F2B8;
    return;
L_08A1F2B8:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    ctx.gpr[31] = (0x08A1F2C8u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x08A1F2C8u) goto L_08A1F2C8;
    return;
L_08A1F2C8:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A1F348;
      }
      goto L_08A1F2D8;
    }
L_08A1F2D8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1F328;
      }
      goto L_08A1F2E4;
    }
L_08A1F2E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1F328;
      }
      goto L_08A1F2F0;
    }
L_08A1F2F0:
    ctx.gpr[31] = (0x08A1F2F8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 424u, 0x089A1DB8u>(ctx, &aot_mem) && ctx.pc == 0x08A1F2F8u) goto L_08A1F2F8;
    return;
L_08A1F2F8:
    ctx.gpr[31] = (0x08A1F300u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x08A1F300u) goto L_08A1F300;
    return;
L_08A1F300:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A1F360;
      }
      goto L_08A1F308;
    }
L_08A1F308:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(152));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08A1F320u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A1F320u) goto L_08A1F320;
    return;
L_08A1F320:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1F360;
      }
      goto L_08A1F328;
    }
L_08A1F328:
    ctx.gpr[4] = (16512u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A1F340u);
    ctx.gpr[5] = (0u | 13u);
    if (rt.invoke_chained_direct<&recomp_unit_0107_entry, 107u, 144u, 0x089B07D0u>(ctx, &aot_mem) && ctx.pc == 0x08A1F340u) goto L_08A1F340;
    return;
L_08A1F340:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1F360;
      }
      goto L_08A1F348;
    }
L_08A1F348:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1208), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A1F360;
L_08A1F360:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 71u, 0x08A204E8u>(ctx, &aot_mem); return;
      }
      goto L_08A1F368;
    }
L_08A1F368:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08A1F384u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A1F384u) goto L_08A1F384;
    return;
L_08A1F384:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    ctx.gpr[31] = (0x08A1F394u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 829u, 0x08AFB924u>(ctx, &aot_mem) && ctx.pc == 0x08A1F394u) goto L_08A1F394;
    return;
L_08A1F394:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(616), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 71u, 0x08A204E8u>(ctx, &aot_mem); return;
      }
      goto L_08A1F3AC;
    }
L_08A1F3AC:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[18] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A1F3C8u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A1F3C8u) goto L_08A1F3C8;
    return;
L_08A1F3C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1208)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-2736), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A1F410u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 640u, 0x08957EB8u>(ctx, &aot_mem) && ctx.pc == 0x08A1F410u) goto L_08A1F410;
    return;
L_08A1F410:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 71u, 0x08A204E8u>(ctx, &aot_mem); return;
      }
      goto L_08A1F418;
    }
L_08A1F418:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[18] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A1F434u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A1F434u) goto L_08A1F434;
    return;
L_08A1F434:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    ctx.gpr[31] = (0x08A1F444u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-2736)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x08A1F444u) goto L_08A1F444;
    return;
L_08A1F444:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1208)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-2736), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A1F464u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 640u, 0x08957EB8u>(ctx, &aot_mem) && ctx.pc == 0x08A1F464u) goto L_08A1F464;
    return;
L_08A1F464:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 71u, 0x08A204E8u>(ctx, &aot_mem); return;
      }
      goto L_08A1F46C;
    }
L_08A1F46C:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[18] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A1F488u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A1F488u) goto L_08A1F488;
    return;
L_08A1F488:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    ctx.gpr[31] = (0x08A1F498u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-2736)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 829u, 0x08AFB924u>(ctx, &aot_mem) && ctx.pc == 0x08A1F498u) goto L_08A1F498;
    return;
L_08A1F498:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(616)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-2736), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A1F4B8u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 640u, 0x08957EB8u>(ctx, &aot_mem) && ctx.pc == 0x08A1F4B8u) goto L_08A1F4B8;
    return;
L_08A1F4B8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 71u, 0x08A204E8u>(ctx, &aot_mem); return;
      }
      goto L_08A1F4C0;
    }
L_08A1F4C0:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08A1F4DCu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A1F4DCu) goto L_08A1F4DC;
    return;
L_08A1F4DC:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    ctx.gpr[31] = (0x08A1F4ECu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 829u, 0x08AFB924u>(ctx, &aot_mem) && ctx.pc == 0x08A1F4ECu) goto L_08A1F4EC;
    return;
L_08A1F4EC:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1509))))));
    ctx.gpr[5] = (ctx.gpr[5] & 7u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A1F508;
      }
      goto L_08A1F504;
    }
L_08A1F504:
    ctx.gpr[4] = (0u | 1u);
    goto L_08A1F508;
L_08A1F508:
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_08A1F534;
      }
      goto L_08A1F52C;
    }
L_08A1F52C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A1F584;
      }
      goto L_08A1F534;
    }
L_08A1F534:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_08A1F564;
    }
    goto L_08A1F550;
L_08A1F550:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A1F584;
      }
      goto L_08A1F564;
    }
L_08A1F564:
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1F584;
      }
      goto L_08A1F580;
    }
L_08A1F580:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_08A1F584;
L_08A1F584:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 71u, 0x08A204E8u>(ctx, &aot_mem); return;
      }
      goto L_08A1F58C;
    }
L_08A1F58C:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[31] = (0x08A1F5A8u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A1F5A8u) goto L_08A1F5A8;
    return;
L_08A1F5A8:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    ctx.gpr[31] = (0x08A1F5B8u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 829u, 0x08AFB924u>(ctx, &aot_mem) && ctx.pc == 0x08A1F5B8u) goto L_08A1F5B8;
    return;
L_08A1F5B8:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 256 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2269u << 16u);
      if (branch_taken) {
          goto L_08A1F5E0;
      }
      goto L_08A1F5CC;
    }
L_08A1F5CC:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 256 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A1F5F4;
      }
      goto L_08A1F5E0;
    }
L_08A1F5E0:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(152));
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2080));
    ctx.gpr[31] = (0x08A1F5F4u);
    ctx.gpr[6] = (0u | 256u);
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 806u, 0x08AEB698u>(ctx, &aot_mem) && ctx.pc == 0x08A1F5F4u) goto L_08A1F5F4;
    return;
L_08A1F5F4:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(496), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(497), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 71u, 0x08A204E8u>(ctx, &aot_mem); return;
      }
      goto L_08A1F614;
    }
L_08A1F614:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 6u);
    ctx.gpr[31] = (0x08A1F630u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A1F630u) goto L_08A1F630;
    return;
L_08A1F630:
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[17]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A1F664;
      }
      goto L_08A1F658;
    }
L_08A1F658:
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    goto L_08A1F664;
L_08A1F664:
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[16]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A1F680;
      }
      goto L_08A1F674;
    }
L_08A1F674:
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    goto L_08A1F680;
L_08A1F680:
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
        goto L_08A1F6A0;
    }
    goto L_08A1F690;
L_08A1F690:
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    goto L_08A1F6A0;
L_08A1F6A0:
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-26612)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    ctx.gpr[31] = (0x08A1F6CCu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 606u, 0x08976BFCu>(ctx, &aot_mem) && ctx.pc == 0x08A1F6CCu) goto L_08A1F6CC;
    return;
L_08A1F6CC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 71u, 0x08A204E8u>(ctx, &aot_mem); return;
      }
      goto L_08A1F6D4;
    }
L_08A1F6D4:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 6u);
    ctx.gpr[31] = (0x08A1F6F0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A1F6F0u) goto L_08A1F6F0;
    return;
L_08A1F6F0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A1F724;
      }
      goto L_08A1F718;
    }
L_08A1F718:
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    goto L_08A1F724;
L_08A1F724:
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A1F740;
      }
      goto L_08A1F734;
    }
L_08A1F734:
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    goto L_08A1F740;
L_08A1F740:
    ctx.set_fpu_condition((ctx.fpr[16] < ctx.fpr[17]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
        goto L_08A1F760;
    }
    goto L_08A1F750;
L_08A1F750:
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    goto L_08A1F760;
L_08A1F760:
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-26612)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.gpr[31] = (0x08A1F784u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 606u, 0x08976BFCu>(ctx, &aot_mem) && ctx.pc == 0x08A1F784u) goto L_08A1F784;
    return;
L_08A1F784:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 71u, 0x08A204E8u>(ctx, &aot_mem); return;
      }
      goto L_08A1F78C;
    }
L_08A1F78C:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08A1F7A8u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A1F7A8u) goto L_08A1F7A8;
    return;
L_08A1F7A8:
    ctx.gpr[16] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-15044)));
    ctx.gpr[31] = (0x08A1F7B8u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x08A1F7B8u) goto L_08A1F7B8;
    return;
L_08A1F7B8:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-15044)));
    ctx.gpr[31] = (0x08A1F7C8u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x08A1F7C8u) goto L_08A1F7C8;
    return;
L_08A1F7C8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08A1F7DCu);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 77u, 0x089A0598u>(ctx, &aot_mem) && ctx.pc == 0x08A1F7DCu) goto L_08A1F7DC;
    return;
L_08A1F7DC:
    ctx.gpr[5] = (0u | 60000u);
    ctx.gpr[31] = (0x08A1F7E8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 787u, 0x0899FEE8u>(ctx, &aot_mem) && ctx.pc == 0x08A1F7E8u) goto L_08A1F7E8;
    return;
L_08A1F7E8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 71u, 0x08A204E8u>(ctx, &aot_mem); return;
      }
      goto L_08A1F7F0;
    }
L_08A1F7F0:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08A1F80Cu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A1F80Cu) goto L_08A1F80C;
    return;
L_08A1F80C:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    ctx.gpr[31] = (0x08A1F81Cu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x08A1F81Cu) goto L_08A1F81C;
    return;
L_08A1F81C:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08A1F858u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 77u, 0x089A0598u>(ctx, &aot_mem) && ctx.pc == 0x08A1F858u) goto L_08A1F858;
    return;
L_08A1F858:
    ctx.gpr[5] = (0u | 60000u);
    ctx.gpr[31] = (0x08A1F864u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 787u, 0x0899FEE8u>(ctx, &aot_mem) && ctx.pc == 0x08A1F864u) goto L_08A1F864;
    return;
L_08A1F864:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 71u, 0x08A204E8u>(ctx, &aot_mem); return;
      }
      goto L_08A1F86C;
    }
L_08A1F86C:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08A1F888u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A1F888u) goto L_08A1F888;
    return;
L_08A1F888:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[16] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    ctx.gpr[31] = (0x08A1F8BCu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x08A1F8BCu) goto L_08A1F8BC;
    return;
L_08A1F8BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08A1F8D0u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 77u, 0x089A0598u>(ctx, &aot_mem) && ctx.pc == 0x08A1F8D0u) goto L_08A1F8D0;
    return;
L_08A1F8D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08A1F8DCu);
    ctx.gpr[5] = (0u | 60000u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 787u, 0x0899FEE8u>(ctx, &aot_mem) && ctx.pc == 0x08A1F8DCu) goto L_08A1F8DC;
    return;
L_08A1F8DC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 71u, 0x08A204E8u>(ctx, &aot_mem); return;
      }
      goto L_08A1F8E4;
    }
L_08A1F8E4:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A1F8FCu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A1F8FCu) goto L_08A1F8FC;
    return;
L_08A1F8FC:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    ctx.gpr[31] = (0x08A1F90Cu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x08A1F90Cu) goto L_08A1F90C;
    return;
L_08A1F90C:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A1F918u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 84u, 0x089A0660u>(ctx, &aot_mem) && ctx.pc == 0x08A1F918u) goto L_08A1F918;
    return;
L_08A1F918:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-33));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A1F948;
      }
      goto L_08A1F938;
    }
L_08A1F938:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A1F950;
      }
      goto L_08A1F948;
    }
L_08A1F948:
    ctx.gpr[31] = (0x08A1F950u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 222u, 0x089AD70Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1F950u) goto L_08A1F950;
    return;
L_08A1F950:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 71u, 0x08A204E8u>(ctx, &aot_mem); return;
      }
      goto L_08A1F958;
    }
L_08A1F958:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A1F970u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A1F970u) goto L_08A1F970;
    return;
L_08A1F970:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[16] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[31] = (0x08A1F99Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 84u, 0x089A0660u>(ctx, &aot_mem) && ctx.pc == 0x08A1F99Cu) goto L_08A1F99C;
    return;
L_08A1F99C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(404)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-33));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(404), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A1F9D8;
      }
      goto L_08A1F9C4;
    }
L_08A1F9C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A1F9E0;
      }
      goto L_08A1F9D8;
    }
L_08A1F9D8:
    ctx.gpr[31] = (0x08A1F9E0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 222u, 0x089AD70Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1F9E0u) goto L_08A1F9E0;
    return;
L_08A1F9E0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 71u, 0x08A204E8u>(ctx, &aot_mem); return;
      }
      goto L_08A1F9E8;
    }
L_08A1F9E8:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[31] = (0x08A1FA04u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A1FA04u) goto L_08A1FA04;
    return;
L_08A1FA04:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x08A1FA1Cu);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0175_entry, 175u, 631u, 0x08AC3BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A1FA1Cu) goto L_08A1FA1C;
    return;
L_08A1FA1C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 71u, 0x08A204E8u>(ctx, &aot_mem); return;
      }
      goto L_08A1FA24;
    }
L_08A1FA24:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08A1FA40u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A1FA40u) goto L_08A1FA40;
    return;
L_08A1FA40:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[31] = (0x08A1FA54u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0175_entry, 175u, 630u, 0x08AC3BA8u>(ctx, &aot_mem) && ctx.pc == 0x08A1FA54u) goto L_08A1FA54;
    return;
L_08A1FA54:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 71u, 0x08A204E8u>(ctx, &aot_mem); return;
      }
      goto L_08A1FA5C;
    }
L_08A1FA5C:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[31] = (0x08A1FA78u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A1FA78u) goto L_08A1FA78;
    return;
L_08A1FA78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x08A1FA90u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0175_entry, 175u, 632u, 0x08AC3BFCu>(ctx, &aot_mem) && ctx.pc == 0x08A1FA90u) goto L_08A1FA90;
    return;
L_08A1FA90:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 71u, 0x08A204E8u>(ctx, &aot_mem); return;
      }
      goto L_08A1FA98;
    }
L_08A1FA98:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[31] = (0x08A1FAB4u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A1FAB4u) goto L_08A1FAB4;
    return;
L_08A1FAB4:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    ctx.gpr[31] = (0x08A1FAC4u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x08A1FAC4u) goto L_08A1FAC4;
    return;
L_08A1FAC4:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08A1FADCu);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 448u, 0x088C2E78u>(ctx, &aot_mem) && ctx.pc == 0x08A1FADCu) goto L_08A1FADC;
    return;
L_08A1FADC:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[6] = (32768u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 31u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(416), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(420), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(424), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(416));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A1FB1Cu);
    ctx.gpr[5] = (0u | 25u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 1046u, 0x08893734u>(ctx, &aot_mem) && ctx.pc == 0x08A1FB1Cu) goto L_08A1FB1C;
    return;
L_08A1FB1C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 71u, 0x08A204E8u>(ctx, &aot_mem); return;
      }
      goto L_08A1FB24;
    }
L_08A1FB24:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A1FB3Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A1FB3Cu) goto L_08A1FB3C;
    return;
L_08A1FB3C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-29316)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[31] = (0x08A1FB64u);
    ctx.gpr[6] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 548u, 0x08AEDF40u>(ctx, &aot_mem) && ctx.pc == 0x08A1FB64u) goto L_08A1FB64;
    return;
L_08A1FB64:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1FBBC;
      }
      goto L_08A1FB74;
    }
L_08A1FB74:
    ctx.gpr[5] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(64))))));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 65 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (ctx.gpr[29] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A1FBA8;
      }
      goto L_08A1FB88;
    }
L_08A1FB88:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(64))))));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 91 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1FBA8;
      }
      goto L_08A1FB98;
    }
L_08A1FB98:
    ctx.gpr[5] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(64))))));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(32));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(64), static_cast<std::uint8_t>(ctx.gpr[6]));
    goto L_08A1FBA8;
L_08A1FBA8:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A1FB74;
      }
      goto L_08A1FBBC;
    }
L_08A1FBBC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(526)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1FBE4;
      }
      goto L_08A1FBC8;
    }
L_08A1FBC8:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[31] = (0x08A1FBDCu);
    ctx.gpr[6] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 879u, 0x089C7924u>(ctx, &aot_mem) && ctx.pc == 0x08A1FBDCu) goto L_08A1FBDC;
    return;
L_08A1FBDC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1FBF8;
      }
      goto L_08A1FBE4;
    }
L_08A1FBE4:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[31] = (0x08A1FBF8u);
    ctx.gpr[6] = (0u | 132u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 879u, 0x089C7924u>(ctx, &aot_mem) && ctx.pc == 0x08A1FBF8u) goto L_08A1FBF8;
    return;
L_08A1FBF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 71u, 0x08A204E8u>(ctx, &aot_mem); return;
      }
      goto L_08A1FC0C;
    }
L_08A1FC0C:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A1FC24u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A1FC24u) goto L_08A1FC24;
    return;
L_08A1FC24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736), ctx.gpr[4]);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08A1FC3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 881u, 0x089C7940u>(ctx, &aot_mem) && ctx.pc == 0x08A1FC3Cu) goto L_08A1FC3C;
    return;
L_08A1FC3C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1FC48;
      }
      goto L_08A1FC44;
    }
L_08A1FC44:
    ctx.gpr[17] = (0u | 1u);
    goto L_08A1FC48;
L_08A1FC48:
    ctx.gpr[4] = (0u < ctx.gpr[17] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[17] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (0u < ctx.gpr[17] ? 1u : 0u);
      if (branch_taken) {
          goto L_08A1FC74;
      }
      goto L_08A1FC6C;
    }
L_08A1FC6C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[17]));
      if (branch_taken) {
          goto L_08A1FCC4;
      }
      goto L_08A1FC74;
    }
L_08A1FC74:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 9 ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_08A1FCA4;
    }
    goto L_08A1FC90;
L_08A1FC90:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[17] & ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A1FCC4;
      }
      goto L_08A1FCA4;
    }
L_08A1FCA4:
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[17] | ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1FCC4;
      }
      goto L_08A1FCC0;
    }
L_08A1FCC0:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_08A1FCC4;
L_08A1FCC4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 71u, 0x08A204E8u>(ctx, &aot_mem); return;
      }
      goto L_08A1FCCC;
    }
L_08A1FCCC:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A1FCE4u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A1FCE4u) goto L_08A1FCE4;
    return;
L_08A1FCE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08A1FD14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 237u, 0x089D5C94u>(ctx, &aot_mem) && ctx.pc == 0x08A1FD14u) goto L_08A1FD14;
    return;
L_08A1FD14:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1FD20;
      }
      goto L_08A1FD1C;
    }
L_08A1FD1C:
    ctx.gpr[17] = (0u | 1u);
    goto L_08A1FD20;
L_08A1FD20:
    ctx.gpr[4] = (0u < ctx.gpr[17] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[17] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (0u < ctx.gpr[17] ? 1u : 0u);
      if (branch_taken) {
          goto L_08A1FD4C;
      }
      goto L_08A1FD44;
    }
L_08A1FD44:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[17]));
      if (branch_taken) {
          goto L_08A1FD9C;
      }
      goto L_08A1FD4C;
    }
L_08A1FD4C:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 9 ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_08A1FD7C;
    }
    goto L_08A1FD68;
L_08A1FD68:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[17] & ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A1FD9C;
      }
      goto L_08A1FD7C;
    }
L_08A1FD7C:
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[17] | ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1FD9C;
      }
      goto L_08A1FD98;
    }
L_08A1FD98:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_08A1FD9C;
L_08A1FD9C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 71u, 0x08A204E8u>(ctx, &aot_mem); return;
      }
      goto L_08A1FDA4;
    }
L_08A1FDA4:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08A1FDC0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A1FDC0u) goto L_08A1FDC0;
    return;
L_08A1FDC0:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    ctx.gpr[31] = (0x08A1FDD0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 829u, 0x08AFB924u>(ctx, &aot_mem) && ctx.pc == 0x08A1FDD0u) goto L_08A1FDD0;
    return;
L_08A1FDD0:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1509))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-8));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[5] = (ctx.gpr[5] & 7u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1509), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x08A1FDFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08A1FDFCu) goto L_08A1FDFC;
    return;
L_08A1FDFC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1512), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 71u, 0x08A204E8u>(ctx, &aot_mem); return;
      }
      goto L_08A1FE08;
    }
L_08A1FE08:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08A1FE24u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A1FE24u) goto L_08A1FE24;
    return;
L_08A1FE24:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    ctx.gpr[31] = (0x08A1FE34u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x08A1FE34u) goto L_08A1FE34;
    return;
L_08A1FE34:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x08A1FE40u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 264u, 0x0899DB34u>(ctx, &aot_mem) && ctx.pc == 0x08A1FE40u) goto L_08A1FE40;
    return;
L_08A1FE40:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 71u, 0x08A204E8u>(ctx, &aot_mem); return;
      }
      goto L_08A1FE48;
    }
L_08A1FE48:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[31] = (0x08A1FE64u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A1FE64u) goto L_08A1FE64;
    return;
L_08A1FE64:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(416), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(420), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(424), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(416));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-18496));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 71u, 0x08A204E8u>(ctx, &aot_mem); return;
      }
      goto L_08A1FE98;
    }
L_08A1FE98:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08A1FEB4u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A1FEB4u) goto L_08A1FEB4;
    return;
L_08A1FEB4:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    ctx.gpr[31] = (0x08A1FEC4u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x08A1FEC4u) goto L_08A1FEC4;
    return;
L_08A1FEC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(744), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(416)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-8193));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(416), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 71u, 0x08A204E8u>(ctx, &aot_mem); return;
      }
      goto L_08A1FEE4;
    }
L_08A1FEE4:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A1FEFCu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A1FEFCu) goto L_08A1FEFC;
    return;
L_08A1FEFC:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08A1FF28;
      }
      goto L_08A1FF08;
    }
L_08A1FF08:
    ctx.gpr[4] = (0u - ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5168));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    goto L_08A1FF28;
L_08A1FF28:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(526)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1FF48;
      }
      goto L_08A1FF34;
    }
L_08A1FF34:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A1FF40u);
    ctx.gpr[5] = (0u | 22u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 659u, 0x089CAC28u>(ctx, &aot_mem) && ctx.pc == 0x08A1FF40u) goto L_08A1FF40;
    return;
L_08A1FF40:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1FF54;
      }
      goto L_08A1FF48;
    }
L_08A1FF48:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A1FF54u);
    ctx.gpr[5] = (0u | 148u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 659u, 0x089CAC28u>(ctx, &aot_mem) && ctx.pc == 0x08A1FF54u) goto L_08A1FF54;
    return;
L_08A1FF54:
    ctx.gpr[4] = (0u | 290u);
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A1FF6C;
      }
      goto L_08A1FF60;
    }
L_08A1FF60:
    ctx.gpr[4] = (0u | 294u);
    ctx.gpr[31] = (0x08A1FF6Cu);
    ctx.gpr[5] = (0u | 22u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 659u, 0x089CAC28u>(ctx, &aot_mem) && ctx.pc == 0x08A1FF6Cu) goto L_08A1FF6C;
    return;
L_08A1FF6C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 71u, 0x08A204E8u>(ctx, &aot_mem); return;
      }
      goto L_08A1FF74;
    }
L_08A1FF74:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A1FF8Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A1FF8Cu) goto L_08A1FF8C;
    return;
L_08A1FF8C:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08A1FFB8;
      }
      goto L_08A1FF98;
    }
L_08A1FF98:
    ctx.gpr[4] = (0u - ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5168));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    goto L_08A1FFB8;
L_08A1FFB8:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[17] << 4u);
    ctx.gpr[5] = (ctx.gpr[17] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[4] ^ 1u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1FFF4;
      }
      goto L_08A1FFEC;
    }
L_08A1FFEC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 11u, 0x08A2005Cu>(ctx, &aot_mem); return;
      }
      goto L_08A1FFF4;
    }
L_08A1FFF4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-20156)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 4u, 0x08A20010u>(ctx, &aot_mem); return;
      }
      (void)rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 2u, 0x08A20004u>(ctx, &aot_mem); return;
    }
}

void recomp_unit_0134(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0134_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_134(Runtime &runtime) {
    runtime.register_generated_unit(134u, 0x08A1C000u, 16384u, &recomp_unit_0134, &recomp_unit_0134_entry);
    runtime.register_function(0x08A1C000u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C004u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C01Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C024u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C030u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C064u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C06Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C070u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C0B8u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C120u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C12Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C134u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C144u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C14Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C158u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C160u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C16Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C17Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C18Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C1A0u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C1B8u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C1C0u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C1D0u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C1DCu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C1E8u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C1F8u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C208u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C21Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C234u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C23Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C24Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C254u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C25Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C270u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C280u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C290u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C2A4u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C2B4u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C2C0u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C2D8u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C2E0u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C2F4u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C2FCu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C304u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C30Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C318u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C320u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C33Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C344u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C35Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C360u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C368u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C374u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C37Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C398u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C3A0u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C3B8u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C3BCu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C3C4u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C3E0u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C3E4u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C3F4u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C3F8u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C410u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C420u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C450u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C460u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C47Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C48Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C49Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C4B4u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C4CCu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C504u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C510u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C524u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C53Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C554u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C55Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C5A4u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C5B0u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C5C4u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C5CCu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C5D0u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C614u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C620u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C634u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C648u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C654u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C684u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C68Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C690u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C6D0u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C71Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C728u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C730u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C738u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C740u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C748u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C750u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C764u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C774u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C784u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C79Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C7A4u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C7B4u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C7BCu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C7C4u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C7D8u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C7E8u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C7F8u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C810u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C818u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C828u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C830u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C838u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C840u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C848u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C864u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C878u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C8B4u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C8E0u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C8F0u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C918u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C928u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C93Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C94Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C97Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C9A0u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C9C0u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C9CCu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C9E0u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C9F0u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1CA04u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1CA08u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1CA3Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1CA44u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1CA48u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1CA74u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1CAB4u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1CAC0u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1CAC8u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1CAD8u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1CAE0u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1CAE8u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1CAF8u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1CB00u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1CB08u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1CB1Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1CB2Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1CB3Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1CB54u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1CB68u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1CB78u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1CB88u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1CBB0u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1CBB8u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1CBCCu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1CBD4u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1CBDCu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1CBE4u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1CBF8u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1CC08u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1CC18u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1CC30u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1CC44u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1CC54u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1CC64u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1CC8Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1CC94u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1CCA8u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1CCB0u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1CCB8u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1CCC0u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1CCFCu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1CD18u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1CD28u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1CD54u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1CD64u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1CDA8u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1CDC4u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1CDECu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1CE30u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1CE38u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1CE3Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1CE60u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1CEA8u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1CEE0u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1CEFCu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1CF04u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1CF1Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1CF24u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1CF2Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1CF40u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1CF84u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1CFA4u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1CFB0u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1CFB4u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1CFD4u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1CFE4u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1CFF4u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D038u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D040u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D048u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D06Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D074u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D07Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D088u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D090u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D098u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D0A0u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D0B0u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D0BCu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D0C4u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D0D0u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D0DCu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D0E8u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D0F4u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D100u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D10Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D118u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D128u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D134u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D13Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D148u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D154u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D160u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D16Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D178u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D184u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D190u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D19Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D1A4u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D1C0u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D254u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D268u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D284u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D2A0u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D2A8u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D2BCu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D2CCu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D2D0u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D2E4u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D2ECu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D2FCu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D31Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D320u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D344u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D348u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D378u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D3A4u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D3ACu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D3E4u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D3ECu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D45Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D46Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D478u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D488u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D498u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D4B4u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D4F8u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D508u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D518u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D528u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D55Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D5A8u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D5BCu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D5C8u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D5D0u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D654u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D65Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D664u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D66Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D738u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D808u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D80Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D818u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D834u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D848u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D858u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D860u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D8D0u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D8DCu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D8E4u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D9B0u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1DA4Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1DA58u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1DA64u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1DB54u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1DB5Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1DBE0u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1DBE8u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1DBF0u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1DCC0u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1DD90u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1DD94u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1DDA0u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1DDB0u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1DDB8u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1DE28u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1DE34u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1DE3Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1DE78u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1DF2Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1DF38u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1DF44u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1DFC4u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1DFF0u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E030u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E04Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E064u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E074u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E0A4u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E0ACu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E0B0u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E0D4u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E0DCu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E0F8u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E10Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E128u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E12Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E134u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E150u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E188u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E19Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E1A4u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E1ACu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E1B4u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E1D0u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E200u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E218u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E220u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E234u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E23Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E24Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E258u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E264u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E26Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E274u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E27Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E294u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E2C0u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E2FCu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E304u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E30Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E324u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E32Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E348u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E368u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E370u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E380u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E388u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E398u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E3A0u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E3C0u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E3CCu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E3F0u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E3F8u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E418u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E428u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E43Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E478u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E480u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E49Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E4ACu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E4BCu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E4D4u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E4E4u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E50Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E514u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E530u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E56Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E574u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E58Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E59Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E5C4u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E5CCu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E5D0u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E5F4u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E5FCu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E618u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E62Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E648u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E64Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E654u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E670u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E680u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E690u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E6A0u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E6ACu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E6C8u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E6DCu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E6E8u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E6F4u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E710u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E720u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E754u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E76Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E778u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E7A4u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E7B4u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E7BCu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E7CCu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E7D4u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E7F0u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E800u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E834u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E840u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E85Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E870u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E87Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E8B4u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E8CCu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E8D8u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E904u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E914u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E91Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E92Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E934u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E950u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E984u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E998u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E9A8u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E9C8u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E9E0u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E9ECu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E9F8u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1EA14u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1EA24u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1EA58u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1EA70u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1EA7Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1EAA8u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1EAB8u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1EAC0u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1EAD8u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1EAE0u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1EAFCu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1EB0Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1EB24u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1EB64u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1EB6Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1EB84u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1EB90u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1EBB0u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1EBDCu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1EBE8u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1EBF8u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1EC04u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1EC0Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1EC18u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1EC50u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1EC64u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1EC6Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1EC84u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1EC8Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1EC94u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1EC9Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1ECA0u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1ECC4u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1ECCCu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1ECE8u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1ECFCu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1ED18u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1ED1Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1ED24u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1ED3Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1ED44u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1ED4Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1ED68u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1ED78u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1ED88u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1ED94u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1ED9Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1EDA8u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1EDB0u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1EDC0u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1EDCCu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1EDD8u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1EDE0u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1EDE8u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1EDF0u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1EE08u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1EE34u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1EE4Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1EE54u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1EE64u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1EE70u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1EE7Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1EE84u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1EE8Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1EE94u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1EEACu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1EED8u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1EF0Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1EF14u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1EF34u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1EF64u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1EF78u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1EF80u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1EF9Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1EFA8u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1EFC0u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1EFC8u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1EFE0u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1EFF4u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1EFFCu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F014u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F024u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F02Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F034u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F038u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F05Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F064u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F080u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F094u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F0B0u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F0B4u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F0BCu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F0D4u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F0E0u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F0F0u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F0F8u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F100u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F118u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F128u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F13Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F140u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F164u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F16Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F188u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F19Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F1B8u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F1BCu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F1C4u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F1E0u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F1ECu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F1FCu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F204u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F210u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F214u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F21Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F238u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F270u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F278u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F280u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F29Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F2B8u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F2C8u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F2D8u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F2E4u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F2F0u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F2F8u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F300u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F308u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F320u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F328u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F340u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F348u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F360u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F368u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F384u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F394u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F3ACu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F3C8u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F410u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F418u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F434u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F444u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F464u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F46Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F488u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F498u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F4B8u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F4C0u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F4DCu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F4ECu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F504u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F508u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F52Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F534u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F550u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F564u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F580u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F584u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F58Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F5A8u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F5B8u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F5CCu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F5E0u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F5F4u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F614u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F630u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F658u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F664u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F674u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F680u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F690u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F6A0u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F6CCu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F6D4u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F6F0u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F718u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F724u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F734u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F740u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F750u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F760u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F784u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F78Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F7A8u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F7B8u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F7C8u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F7DCu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F7E8u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F7F0u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F80Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F81Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F858u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F864u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F86Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F888u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F8BCu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F8D0u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F8DCu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F8E4u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F8FCu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F90Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F918u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F938u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F948u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F950u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F958u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F970u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F99Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F9C4u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F9D8u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F9E0u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F9E8u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1FA04u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1FA1Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1FA24u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1FA40u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1FA54u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1FA5Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1FA78u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1FA90u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1FA98u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1FAB4u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1FAC4u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1FADCu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1FB1Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1FB24u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1FB3Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1FB64u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1FB74u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1FB88u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1FB98u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1FBA8u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1FBBCu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1FBC8u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1FBDCu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1FBE4u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1FBF8u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1FC0Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1FC24u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1FC3Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1FC44u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1FC48u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1FC6Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1FC74u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1FC90u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1FCA4u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1FCC0u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1FCC4u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1FCCCu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1FCE4u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1FD14u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1FD1Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1FD20u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1FD44u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1FD4Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1FD68u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1FD7Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1FD98u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1FD9Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1FDA4u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1FDC0u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1FDD0u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1FDFCu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1FE08u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1FE24u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1FE34u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1FE40u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1FE48u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1FE64u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1FE98u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1FEB4u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1FEC4u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1FEE4u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1FEFCu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1FF08u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1FF28u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1FF34u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1FF40u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1FF48u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1FF54u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1FF60u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1FF6Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1FF74u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1FF8Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1FF98u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1FFB8u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1FFECu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1FFF4u, &recomp_unit_0134, "recomp_unit_0134");
}
} // namespace psprecomp
