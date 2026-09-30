#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0065[4096] = {
    1, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 13, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 19, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 22, 0, 23, 0, 24, 0, 25, 0, 26, 0, 0, 0, 27, 0, 0, 0, 28, 0,
    29, 30, 0, 31, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0,
    0, 0, 35, 0, 36, 0, 37, 38, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0,
    0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 45, 0, 0, 46, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 49, 0, 0, 0, 0, 50, 0, 0, 51, 0, 52, 0, 0, 0, 0, 53, 0, 54, 55, 0, 56, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 62, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    64, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 67, 0, 0, 68, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    70, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 74, 0, 75, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 82, 0, 83, 0, 0, 84, 0, 85, 0, 86, 0,
    87, 0, 88, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0,
    93, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 95, 0, 96, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 99, 0, 0,
    100, 101, 0, 102, 0, 103, 0, 104, 0, 105, 0, 106, 0, 0, 0, 0, 0, 0, 107, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    109, 0, 110, 0, 111, 0, 112, 0, 113, 0, 114, 0, 115, 0, 116, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0,
    0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 123, 0, 0, 0, 0, 0, 124, 0, 0,
    0, 0, 0, 0, 125, 0, 126, 0, 0, 127, 0, 128, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 133, 0, 134, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0,
    0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 139, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 143, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 159, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 165, 0, 0, 0, 0, 166, 167, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 169, 0, 0, 170, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 172, 0, 0, 173, 0, 0, 174, 0, 0, 0, 0, 0, 175, 0, 0, 0,
    0, 0, 176, 0, 0, 0, 177, 0, 0, 178, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 181, 0, 182, 0, 0, 0, 0,
    183, 184, 0, 0, 185, 0, 186, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 189, 0, 0, 0, 0, 0, 190, 0, 191,
    0, 192, 0, 193, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 199, 0, 200, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0,
    205, 0, 0, 0, 0, 0, 206, 0, 207, 0, 208, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 212, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 218, 0, 0, 0, 219, 0, 220, 0, 0, 0, 0, 0, 0, 221, 0, 0, 222, 0, 0, 0, 0, 0, 223, 0, 0, 224, 0,
    225, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 228, 0, 229, 0, 0, 230, 0, 0, 0, 0, 0,
    0, 0, 231, 0, 232, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 234, 0, 235, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 237, 0, 238, 0,
    0, 239, 0, 0, 0, 0, 0, 0, 0, 240, 0, 241, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 243, 0, 244, 0, 0, 245, 0, 0, 0, 0,
    0, 0, 0, 246, 0, 247, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 249, 0, 250, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 252, 0, 253,
    0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 255, 0, 256, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 258, 0, 259, 0, 0, 260, 0, 0, 0,
    0, 0, 0, 0, 261, 0, 262, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 264, 0, 265, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 267, 0,
    268, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 271, 0, 0, 0, 0, 0, 272, 0, 0, 273, 0, 0, 0, 0, 0, 0,
    274, 0, 0, 0, 0, 0, 275, 0, 276, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 278, 0, 279, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0,
    281, 0, 282, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 284, 0, 285, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 287, 0, 288, 0, 0, 289,
    0, 0, 0, 0, 0, 0, 0, 290, 0, 291, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 293, 0, 294, 0, 0, 295, 0, 0, 0, 0, 0, 0,
    0, 296, 0, 297, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 299, 0, 300, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 302, 0, 303, 0, 0,
    304, 0, 0, 0, 0, 0, 0, 0, 305, 0, 306, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 308, 0, 309, 0, 0, 310, 0, 0, 0, 0, 0,
    0, 0, 311, 0, 312, 0, 0, 313, 0, 0, 0, 0, 0, 314, 0, 315, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0,
    318, 0, 0, 0, 0, 0, 319, 0, 0, 320, 321, 322, 0, 323, 0, 0, 324, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 329, 0, 330,
    0, 0, 0, 331, 0, 0, 0, 0, 332, 0, 333, 0, 334, 0, 0, 0, 335, 336, 0, 337, 0, 338, 0, 339, 340, 0, 0, 341, 0, 342, 343, 0,
    344, 345, 0, 346, 0, 0, 347, 0, 348, 0, 0, 0, 349, 0, 350, 0, 0, 351, 0, 352, 0, 0, 0, 353, 0, 354, 0, 0, 0, 355, 0, 356,
    0, 0, 0, 357, 358, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 361, 0, 362, 363, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 364, 0, 0, 365, 0, 366, 0, 367, 0, 0, 368, 0, 369, 0, 370, 0, 371, 0, 0, 372, 0, 373, 0, 0, 0, 374, 0, 375, 0,
    0, 0, 376, 0, 377, 0, 0, 0, 378, 0, 379, 0, 380, 0, 0, 381, 0, 382, 383, 0, 0, 0, 0, 0, 0, 0, 0, 0, 384, 0, 0, 0,
    385, 0, 386, 0, 387, 0, 0, 0, 0, 0, 388, 0, 0, 0, 389, 0, 390, 0, 0, 0, 0, 0, 0, 0, 0, 391, 0, 0, 0, 392, 0, 0,
    0, 393, 0, 394, 0, 395, 0, 0, 0, 0, 0, 396, 0, 397, 0, 398, 0, 399, 0, 0, 0, 0, 0, 0, 0, 0, 400, 0, 0, 0, 401, 0,
    402, 0, 0, 0, 0, 0, 0, 0, 0, 403, 0, 0, 0, 404, 0, 405, 406, 0, 407, 0, 408, 0, 0, 0, 0, 0, 0, 0, 409, 0, 0, 0,
    0, 0, 410, 0, 411, 0, 0, 0, 412, 0, 413, 414, 0, 0, 0, 0, 0, 0, 0, 0, 0, 415, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 416, 0, 0, 0, 0, 0, 417, 0, 0, 0, 0, 0,
    418, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 419, 0, 420, 0, 0, 421, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 422, 0, 0, 0, 0, 0, 0, 0,
    423, 0, 0, 0, 0, 424, 0, 0, 425, 0, 0, 0, 0, 426, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 427, 0, 0, 0, 0, 0, 0,
    0, 0, 428, 0, 0, 0, 0, 0, 0, 429, 0, 0, 430, 0, 0, 0, 0, 0, 0, 0, 431, 0, 432, 0, 0, 0, 0, 433, 0, 434, 0, 0,
    0, 435, 0, 0, 0, 436, 0, 0, 0, 437, 0, 0, 0, 438, 0, 0, 0, 439, 0, 440, 0, 441, 0, 0, 442, 0, 0, 0, 443, 0, 0, 0,
    444, 445, 0, 0, 0, 0, 0, 446, 0, 0, 0, 0, 0, 0, 0, 447, 0, 0, 0, 448, 0, 0, 449, 0, 0, 450, 0, 451, 452, 0, 0, 453,
    0, 0, 454, 455, 0, 0, 0, 0, 0, 0, 0, 0, 456, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 457, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 458, 0, 0, 459, 0, 0, 460, 0, 461, 0, 0, 462, 0, 0, 0, 463, 0, 0, 0, 464, 0, 0, 0, 465, 0,
    0, 0, 0, 466, 0, 467, 0, 0, 468, 0, 469, 0, 0, 0, 0, 470, 0, 0, 471, 0, 472, 0, 473, 0, 0, 0, 474, 0, 0, 0, 475, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 476, 0, 0, 0, 0, 0, 0, 0, 477, 0, 0, 478, 0, 0, 0, 479, 0, 480, 481, 0, 0, 0, 0, 0,
    482, 0, 0, 0, 0, 0, 0, 0, 0, 0, 483, 0, 0, 484, 0, 0, 0, 485, 0, 486, 0, 0, 0, 0, 0, 0, 0, 0, 0, 487, 0, 488,
    489, 0, 0, 0, 0, 490, 0, 0, 0, 0, 0, 0, 0, 0, 0, 491, 0, 0, 492, 0, 0, 0, 493, 0, 494, 0, 0, 0, 0, 0, 0, 0,
    495, 0, 496, 497, 0, 0, 0, 0, 498, 0, 0, 0, 0, 499, 0, 0, 0, 500, 0, 0, 0, 0, 0, 0, 501, 0, 502, 0, 503, 0, 0, 0,
    504, 0, 0, 505, 0, 506, 0, 507, 0, 0, 508, 0, 0, 0, 509, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 510, 0, 0, 511, 0, 0, 0, 512, 0, 0, 513, 0, 514, 0, 0, 0, 515, 0, 516, 0,
    0, 517, 0, 0, 0, 0, 0, 0, 0, 518, 0, 0, 0, 519, 0, 520, 0, 521, 0, 0, 0, 0, 0, 522, 0, 0, 0, 0, 523, 0, 0, 0,
    524, 0, 525, 0, 0, 526, 0, 0, 0, 0, 0, 527, 0, 0, 0, 0, 0, 0, 0, 528, 0, 529, 0, 530, 0, 0, 0, 531, 0, 0, 532, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 533, 0, 0, 534, 0, 535, 0, 0, 0, 0, 536, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 537, 0, 538, 0, 0, 0, 0, 0, 539, 0, 540, 541, 0, 0, 0, 0, 0, 0, 542, 543, 544, 0,
    0, 0, 0, 545, 0, 0, 0, 0, 0, 0, 0, 546, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 547, 0, 548, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 549, 0, 550, 0, 551, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 552, 0, 0, 0, 0, 0, 0, 0, 553,
    0, 0, 0, 554, 0, 0, 0, 0, 0, 555, 556, 0, 0, 0, 0, 0, 0, 0, 0, 557, 0, 558, 0, 0, 559, 0, 560, 0, 0, 0, 0, 561,
    0, 0, 0, 0, 0, 562, 563, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 564, 0, 0, 0, 0, 0, 565, 0, 0, 0, 0, 566, 0,
    0, 0, 0, 0, 567, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 568, 569, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 570, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 571, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 572, 0, 0, 0, 0, 0, 0, 0, 573, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 574, 0, 0, 0, 575, 0, 0, 0, 576, 0, 0, 577, 0, 0, 578, 0, 0, 579, 0, 0,
    0, 580, 0, 581, 0, 0, 0, 582, 0, 0, 583, 0, 0, 0, 584, 0, 0, 0, 585, 586, 0, 0, 587, 0, 0, 0, 0, 588, 0, 0, 589, 0,
    0, 0, 590, 0, 591, 0, 592, 593, 0, 0, 0, 0, 594, 0, 0, 0, 595, 0, 0, 0, 0, 0, 0, 0, 596, 0, 0, 0, 0, 0, 0, 0,
    597, 0, 0, 0, 598, 0, 599, 0, 600, 0, 601, 0, 602, 0, 0, 0, 0, 0, 603, 0, 0, 0, 0, 0, 0, 0, 604, 0, 0, 0, 605, 0,
    606, 0, 607, 0, 608, 0, 0, 609, 0, 0, 0, 0, 0, 610, 0, 0, 0, 611, 0, 0, 612, 0, 0, 0, 613, 0, 614, 0, 0, 615, 0, 616,
    617, 0, 0, 618, 0, 0, 0, 619, 0, 0, 620, 0, 0, 621, 0, 622, 0, 0, 623, 624, 0, 0, 625, 0, 0, 0, 0, 0, 0, 626, 0, 0,
    627, 0, 0, 0, 628, 0, 0, 629, 0, 630, 0, 0, 0, 631, 0, 632, 0, 633, 0, 0, 0, 0, 0, 634, 0, 635, 0, 636, 0, 0, 0, 0,
    0, 637, 0, 0, 0, 0, 0, 638, 0, 0, 639, 0, 0, 0, 640, 0, 0, 641, 0, 642, 0, 0, 0, 643, 0, 644, 0, 645, 0, 646, 0, 0,
    0, 0, 647, 0, 0, 0, 648, 0, 0, 649, 0, 0, 0, 650, 0, 0, 651, 0, 652, 0, 653, 0, 654, 0, 0, 655, 656, 0, 0, 657, 0, 0,
    0, 658, 0, 0, 659, 0, 0, 0, 660, 0, 661, 0, 0, 662, 0, 0, 0, 0, 0, 0, 663, 0, 0, 664, 0, 0, 0, 0, 665, 0, 0, 0,
    0, 0, 666, 0, 667, 0, 668, 0, 669, 0, 670, 0, 0, 671, 0, 672, 673, 0, 0, 0, 0, 674, 0, 0, 0, 0, 0, 675, 0, 0, 0, 0,
    0, 0, 0, 676, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 677, 0, 678, 0, 0, 0, 0, 0, 0, 679, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 680, 0, 0, 0, 0, 0, 0, 681, 0, 682, 0, 683, 0, 684, 0, 0, 0, 685, 0, 0, 0, 0, 686, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 687, 0, 688, 0, 0, 0, 689, 0, 0, 0, 0, 0, 690, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 691, 0, 692, 0, 0, 0, 0, 0, 0, 693, 0, 0, 0, 0, 694, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 695, 0, 696, 0, 0, 697, 0, 0, 0, 0, 0, 0, 0, 0, 698, 0, 0, 699, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 700, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 701, 0, 0, 0, 0, 0, 0, 0, 0, 702, 0, 0, 0, 0, 0, 0,
    0, 703, 0, 0, 0, 0, 0, 0, 0, 704, 0, 0, 0, 0, 0, 705, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 706, 0, 0, 0,
    0, 0, 0, 0, 707, 0, 0, 0, 708, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 709, 0, 0, 0, 0, 0, 0, 0, 0, 0, 710,
    0, 0, 711, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 712, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 713, 0, 714,
};
void recomp_unit_0065_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08908000u;
        entry_id = (entry_delta < 16384u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0065[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08908000;
    case 2u: goto L_0890800C;
    case 3u: goto L_0890803C;
    case 4u: goto L_0890806C;
    case 5u: goto L_0890809C;
    case 6u: goto L_089080CC;
    case 7u: goto L_089080FC;
    case 8u: goto L_0890812C;
    case 9u: goto L_0890815C;
    case 10u: goto L_0890818C;
    case 11u: goto L_089081BC;
    case 12u: goto L_089081DC;
    case 13u: goto L_08908208;
    case 14u: goto L_08908220;
    case 15u: goto L_08908234;
    case 16u: goto L_08908250;
    case 17u: goto L_089082AC;
    case 18u: goto L_089082D8;
    case 19u: goto L_089082DC;
    case 20u: goto L_0890830C;
    case 21u: goto L_089083A0;
    case 22u: goto L_089083B8;
    case 23u: goto L_089083C0;
    case 24u: goto L_089083C8;
    case 25u: goto L_089083D0;
    case 26u: goto L_089083D8;
    case 27u: goto L_089083E8;
    case 28u: goto L_089083F8;
    case 29u: goto L_08908400;
    case 30u: goto L_08908404;
    case 31u: goto L_0890840C;
    case 32u: goto L_08908410;
    case 33u: goto L_08908438;
    case 34u: goto L_08908478;
    case 35u: goto L_08908488;
    case 36u: goto L_08908490;
    case 37u: goto L_08908498;
    case 38u: goto L_0890849C;
    case 39u: goto L_089084C0;
    case 40u: goto L_089084EC;
    case 41u: goto L_08908504;
    case 42u: goto L_08908530;
    case 43u: goto L_08908548;
    case 44u: goto L_0890855C;
    case 45u: goto L_08908590;
    case 46u: goto L_0890859C;
    case 47u: goto L_089085A0;
    case 48u: goto L_089085CC;
    case 49u: goto L_08908610;
    case 50u: goto L_08908624;
    case 51u: goto L_08908630;
    case 52u: goto L_08908638;
    case 53u: goto L_0890864C;
    case 54u: goto L_08908654;
    case 55u: goto L_08908658;
    case 56u: goto L_08908660;
    case 57u: goto L_0890868C;
    case 58u: goto L_089086C4;
    case 59u: goto L_089086CC;
    case 60u: goto L_089086FC;
    case 61u: goto L_0890872C;
    case 62u: goto L_0890873C;
    case 63u: goto L_08908748;
    case 64u: goto L_08908780;
    case 65u: goto L_08908784;
    case 66u: goto L_089087B0;
    case 67u: goto L_089087C4;
    case 68u: goto L_089087D0;
    case 69u: goto L_089087D8;
    case 70u: goto L_08908800;
    case 71u: goto L_08908824;
    case 72u: goto L_0890882C;
    case 73u: goto L_0890885C;
    case 74u: goto L_0890888C;
    case 75u: goto L_08908894;
    case 76u: goto L_08908898;
    case 77u: goto L_089088C0;
    case 78u: goto L_089088C8;
    case 79u: goto L_089088F0;
    case 80u: goto L_08908918;
    case 81u: goto L_08908940;
    case 82u: goto L_08908954;
    case 83u: goto L_0890895C;
    case 84u: goto L_08908968;
    case 85u: goto L_08908970;
    case 86u: goto L_08908978;
    case 87u: goto L_08908980;
    case 88u: goto L_08908988;
    case 89u: goto L_08908990;
    case 90u: goto L_089089BC;
    case 91u: goto L_089089C8;
    case 92u: goto L_089089F4;
    case 93u: goto L_08908A00;
    case 94u: goto L_08908A24;
    case 95u: goto L_08908A30;
    case 96u: goto L_08908A38;
    case 97u: goto L_08908A40;
    case 98u: goto L_08908A6C;
    case 99u: goto L_08908A74;
    case 100u: goto L_08908A80;
    case 101u: goto L_08908A84;
    case 102u: goto L_08908A8C;
    case 103u: goto L_08908A94;
    case 104u: goto L_08908A9C;
    case 105u: goto L_08908AA4;
    case 106u: goto L_08908AAC;
    case 107u: goto L_08908AC8;
    case 108u: goto L_08908AD0;
    case 109u: goto L_08908B00;
    case 110u: goto L_08908B08;
    case 111u: goto L_08908B10;
    case 112u: goto L_08908B18;
    case 113u: goto L_08908B20;
    case 114u: goto L_08908B28;
    case 115u: goto L_08908B30;
    case 116u: goto L_08908B38;
    case 117u: goto L_08908B40;
    case 118u: goto L_08908B70;
    case 119u: goto L_08908B90;
    case 120u: goto L_08908BD4;
    case 121u: goto L_08908C94;
    case 122u: goto L_08908E4C;
    case 123u: goto L_08908E5C;
    case 124u: goto L_08908E74;
    case 125u: goto L_08908E90;
    case 126u: goto L_08908E98;
    case 127u: goto L_08908EA4;
    case 128u: goto L_08908EAC;
    case 129u: goto L_08908EC0;
    case 130u: goto L_08908F00;
    case 131u: goto L_08908F34;
    case 132u: goto L_08908F58;
    case 133u: goto L_08908F60;
    case 134u: goto L_08908F68;
    case 135u: goto L_0890900C;
    case 136u: goto L_089090F4;
    case 137u: goto L_08909110;
    case 138u: goto L_08909144;
    case 139u: goto L_0890914C;
    case 140u: goto L_08909150;
    case 141u: goto L_08909184;
    case 142u: goto L_089091C0;
    case 143u: goto L_089091CC;
    case 144u: goto L_089091D0;
    case 145u: goto L_08909210;
    case 146u: goto L_08909248;
    case 147u: goto L_08909304;
    case 148u: goto L_08909354;
    case 149u: goto L_08909384;
    case 150u: goto L_089093B4;
    case 151u: goto L_089093E4;
    case 152u: goto L_08909414;
    case 153u: goto L_08909444;
    case 154u: goto L_08909474;
    case 155u: goto L_089094A4;
    case 156u: goto L_089094D4;
    case 157u: goto L_08909504;
    case 158u: goto L_08909534;
    case 159u: goto L_08909538;
    case 160u: goto L_08909554;
    case 161u: goto L_08909598;
    case 162u: goto L_089095D4;
    case 163u: goto L_089095F8;
    case 164u: goto L_0890963C;
    case 165u: goto L_08909644;
    case 166u: goto L_08909658;
    case 167u: goto L_0890965C;
    case 168u: goto L_089096B0;
    case 169u: goto L_08909704;
    case 170u: goto L_08909710;
    case 171u: goto L_08909728;
    case 172u: goto L_08909740;
    case 173u: goto L_0890974C;
    case 174u: goto L_08909758;
    case 175u: goto L_08909770;
    case 176u: goto L_08909788;
    case 177u: goto L_08909798;
    case 178u: goto L_089097A4;
    case 179u: goto L_089097AC;
    case 180u: goto L_089097DC;
    case 181u: goto L_089097E4;
    case 182u: goto L_089097EC;
    case 183u: goto L_08909800;
    case 184u: goto L_08909804;
    case 185u: goto L_08909810;
    case 186u: goto L_08909818;
    case 187u: goto L_08909820;
    case 188u: goto L_08909854;
    case 189u: goto L_0890985C;
    case 190u: goto L_08909874;
    case 191u: goto L_0890987C;
    case 192u: goto L_08909884;
    case 193u: goto L_0890988C;
    case 194u: goto L_08909894;
    case 195u: goto L_089098C8;
    case 196u: goto L_089098FC;
    case 197u: goto L_08909924;
    case 198u: goto L_0890994C;
    case 199u: goto L_08909964;
    case 200u: goto L_0890996C;
    case 201u: goto L_08909994;
    case 202u: goto L_089099BC;
    case 203u: goto L_089099C4;
    case 204u: goto L_089099F8;
    case 205u: goto L_08909A00;
    case 206u: goto L_08909A18;
    case 207u: goto L_08909A20;
    case 208u: goto L_08909A28;
    case 209u: goto L_08909A30;
    case 210u: goto L_08909A5C;
    case 211u: goto L_08909AAC;
    case 212u: goto L_08909B0C;
    case 213u: goto L_08909B14;
    case 214u: goto L_08909B44;
    case 215u: goto L_08909B60;
    case 216u: goto L_08909B98;
    case 217u: goto L_08909BB0;
    case 218u: goto L_08909C14;
    case 219u: goto L_08909C24;
    case 220u: goto L_08909C2C;
    case 221u: goto L_08909C48;
    case 222u: goto L_08909C54;
    case 223u: goto L_08909C6C;
    case 224u: goto L_08909C78;
    case 225u: goto L_08909C80;
    case 226u: goto L_08909CA0;
    case 227u: goto L_08909CBC;
    case 228u: goto L_08909CD4;
    case 229u: goto L_08909CDC;
    case 230u: goto L_08909CE8;
    case 231u: goto L_08909D08;
    case 232u: goto L_08909D10;
    case 233u: goto L_08909D1C;
    case 234u: goto L_08909D3C;
    case 235u: goto L_08909D44;
    case 236u: goto L_08909D50;
    case 237u: goto L_08909D70;
    case 238u: goto L_08909D78;
    case 239u: goto L_08909D84;
    case 240u: goto L_08909DA4;
    case 241u: goto L_08909DAC;
    case 242u: goto L_08909DB8;
    case 243u: goto L_08909DD8;
    case 244u: goto L_08909DE0;
    case 245u: goto L_08909DEC;
    case 246u: goto L_08909E0C;
    case 247u: goto L_08909E14;
    case 248u: goto L_08909E20;
    case 249u: goto L_08909E40;
    case 250u: goto L_08909E48;
    case 251u: goto L_08909E54;
    case 252u: goto L_08909E74;
    case 253u: goto L_08909E7C;
    case 254u: goto L_08909E88;
    case 255u: goto L_08909EA8;
    case 256u: goto L_08909EB0;
    case 257u: goto L_08909EBC;
    case 258u: goto L_08909EDC;
    case 259u: goto L_08909EE4;
    case 260u: goto L_08909EF0;
    case 261u: goto L_08909F10;
    case 262u: goto L_08909F18;
    case 263u: goto L_08909F24;
    case 264u: goto L_08909F44;
    case 265u: goto L_08909F4C;
    case 266u: goto L_08909F58;
    case 267u: goto L_08909F78;
    case 268u: goto L_08909F80;
    case 269u: goto L_08909F8C;
    case 270u: goto L_08909FB0;
    case 271u: goto L_08909FC0;
    case 272u: goto L_08909FD8;
    case 273u: goto L_08909FE4;
    case 274u: goto L_0890A000;
    case 275u: goto L_0890A018;
    case 276u: goto L_0890A020;
    case 277u: goto L_0890A02C;
    case 278u: goto L_0890A04C;
    case 279u: goto L_0890A054;
    case 280u: goto L_0890A060;
    case 281u: goto L_0890A080;
    case 282u: goto L_0890A088;
    case 283u: goto L_0890A094;
    case 284u: goto L_0890A0B4;
    case 285u: goto L_0890A0BC;
    case 286u: goto L_0890A0C8;
    case 287u: goto L_0890A0E8;
    case 288u: goto L_0890A0F0;
    case 289u: goto L_0890A0FC;
    case 290u: goto L_0890A11C;
    case 291u: goto L_0890A124;
    case 292u: goto L_0890A130;
    case 293u: goto L_0890A150;
    case 294u: goto L_0890A158;
    case 295u: goto L_0890A164;
    case 296u: goto L_0890A184;
    case 297u: goto L_0890A18C;
    case 298u: goto L_0890A198;
    case 299u: goto L_0890A1B8;
    case 300u: goto L_0890A1C0;
    case 301u: goto L_0890A1CC;
    case 302u: goto L_0890A1EC;
    case 303u: goto L_0890A1F4;
    case 304u: goto L_0890A200;
    case 305u: goto L_0890A220;
    case 306u: goto L_0890A228;
    case 307u: goto L_0890A234;
    case 308u: goto L_0890A254;
    case 309u: goto L_0890A25C;
    case 310u: goto L_0890A268;
    case 311u: goto L_0890A288;
    case 312u: goto L_0890A290;
    case 313u: goto L_0890A29C;
    case 314u: goto L_0890A2B4;
    case 315u: goto L_0890A2BC;
    case 316u: goto L_0890A2C8;
    case 317u: goto L_0890A2EC;
    case 318u: goto L_0890A300;
    case 319u: goto L_0890A318;
    case 320u: goto L_0890A324;
    case 321u: goto L_0890A328;
    case 322u: goto L_0890A32C;
    case 323u: goto L_0890A334;
    case 324u: goto L_0890A340;
    case 325u: goto L_0890A34C;
    case 326u: goto L_0890A380;
    case 327u: goto L_0890A3C8;
    case 328u: goto L_0890A3E4;
    case 329u: goto L_0890A3F4;
    case 330u: goto L_0890A3FC;
    case 331u: goto L_0890A40C;
    case 332u: goto L_0890A420;
    case 333u: goto L_0890A428;
    case 334u: goto L_0890A430;
    case 335u: goto L_0890A440;
    case 336u: goto L_0890A444;
    case 337u: goto L_0890A44C;
    case 338u: goto L_0890A454;
    case 339u: goto L_0890A45C;
    case 340u: goto L_0890A460;
    case 341u: goto L_0890A46C;
    case 342u: goto L_0890A474;
    case 343u: goto L_0890A478;
    case 344u: goto L_0890A480;
    case 345u: goto L_0890A484;
    case 346u: goto L_0890A48C;
    case 347u: goto L_0890A498;
    case 348u: goto L_0890A4A0;
    case 349u: goto L_0890A4B0;
    case 350u: goto L_0890A4B8;
    case 351u: goto L_0890A4C4;
    case 352u: goto L_0890A4CC;
    case 353u: goto L_0890A4DC;
    case 354u: goto L_0890A4E4;
    case 355u: goto L_0890A4F4;
    case 356u: goto L_0890A4FC;
    case 357u: goto L_0890A50C;
    case 358u: goto L_0890A510;
    case 359u: goto L_0890A518;
    case 360u: goto L_0890A548;
    case 361u: goto L_0890A554;
    case 362u: goto L_0890A55C;
    case 363u: goto L_0890A560;
    case 364u: goto L_0890A58C;
    case 365u: goto L_0890A598;
    case 366u: goto L_0890A5A0;
    case 367u: goto L_0890A5A8;
    case 368u: goto L_0890A5B4;
    case 369u: goto L_0890A5BC;
    case 370u: goto L_0890A5C4;
    case 371u: goto L_0890A5CC;
    case 372u: goto L_0890A5D8;
    case 373u: goto L_0890A5E0;
    case 374u: goto L_0890A5F0;
    case 375u: goto L_0890A5F8;
    case 376u: goto L_0890A608;
    case 377u: goto L_0890A610;
    case 378u: goto L_0890A620;
    case 379u: goto L_0890A628;
    case 380u: goto L_0890A630;
    case 381u: goto L_0890A63C;
    case 382u: goto L_0890A644;
    case 383u: goto L_0890A648;
    case 384u: goto L_0890A670;
    case 385u: goto L_0890A680;
    case 386u: goto L_0890A688;
    case 387u: goto L_0890A690;
    case 388u: goto L_0890A6A8;
    case 389u: goto L_0890A6B8;
    case 390u: goto L_0890A6C0;
    case 391u: goto L_0890A6E4;
    case 392u: goto L_0890A6F4;
    case 393u: goto L_0890A704;
    case 394u: goto L_0890A70C;
    case 395u: goto L_0890A714;
    case 396u: goto L_0890A72C;
    case 397u: goto L_0890A734;
    case 398u: goto L_0890A73C;
    case 399u: goto L_0890A744;
    case 400u: goto L_0890A768;
    case 401u: goto L_0890A778;
    case 402u: goto L_0890A780;
    case 403u: goto L_0890A7A4;
    case 404u: goto L_0890A7B4;
    case 405u: goto L_0890A7BC;
    case 406u: goto L_0890A7C0;
    case 407u: goto L_0890A7C8;
    case 408u: goto L_0890A7D0;
    case 409u: goto L_0890A7F0;
    case 410u: goto L_0890A808;
    case 411u: goto L_0890A810;
    case 412u: goto L_0890A820;
    case 413u: goto L_0890A828;
    case 414u: goto L_0890A82C;
    case 415u: goto L_0890A854;
    case 416u: goto L_0890A950;
    case 417u: goto L_0890A968;
    case 418u: goto L_0890A980;
    case 419u: goto L_0890A9AC;
    case 420u: goto L_0890A9B4;
    case 421u: goto L_0890A9C0;
    case 422u: goto L_0890AA60;
    case 423u: goto L_0890AA80;
    case 424u: goto L_0890AA94;
    case 425u: goto L_0890AAA0;
    case 426u: goto L_0890AAB4;
    case 427u: goto L_0890AAE4;
    case 428u: goto L_0890AB08;
    case 429u: goto L_0890AB24;
    case 430u: goto L_0890AB30;
    case 431u: goto L_0890AB50;
    case 432u: goto L_0890AB58;
    case 433u: goto L_0890AB6C;
    case 434u: goto L_0890AB74;
    case 435u: goto L_0890AB84;
    case 436u: goto L_0890AB94;
    case 437u: goto L_0890ABA4;
    case 438u: goto L_0890ABB4;
    case 439u: goto L_0890ABC4;
    case 440u: goto L_0890ABCC;
    case 441u: goto L_0890ABD4;
    case 442u: goto L_0890ABE0;
    case 443u: goto L_0890ABF0;
    case 444u: goto L_0890AC00;
    case 445u: goto L_0890AC04;
    case 446u: goto L_0890AC1C;
    case 447u: goto L_0890AC3C;
    case 448u: goto L_0890AC4C;
    case 449u: goto L_0890AC58;
    case 450u: goto L_0890AC64;
    case 451u: goto L_0890AC6C;
    case 452u: goto L_0890AC70;
    case 453u: goto L_0890AC7C;
    case 454u: goto L_0890AC88;
    case 455u: goto L_0890AC8C;
    case 456u: goto L_0890ACB0;
    case 457u: goto L_0890ACEC;
    case 458u: goto L_0890AD1C;
    case 459u: goto L_0890AD28;
    case 460u: goto L_0890AD34;
    case 461u: goto L_0890AD3C;
    case 462u: goto L_0890AD48;
    case 463u: goto L_0890AD58;
    case 464u: goto L_0890AD68;
    case 465u: goto L_0890AD78;
    case 466u: goto L_0890AD8C;
    case 467u: goto L_0890AD94;
    case 468u: goto L_0890ADA0;
    case 469u: goto L_0890ADA8;
    case 470u: goto L_0890ADBC;
    case 471u: goto L_0890ADC8;
    case 472u: goto L_0890ADD0;
    case 473u: goto L_0890ADD8;
    case 474u: goto L_0890ADE8;
    case 475u: goto L_0890ADF8;
    case 476u: goto L_0890AE20;
    case 477u: goto L_0890AE40;
    case 478u: goto L_0890AE4C;
    case 479u: goto L_0890AE5C;
    case 480u: goto L_0890AE64;
    case 481u: goto L_0890AE68;
    case 482u: goto L_0890AE80;
    case 483u: goto L_0890AEA8;
    case 484u: goto L_0890AEB4;
    case 485u: goto L_0890AEC4;
    case 486u: goto L_0890AECC;
    case 487u: goto L_0890AEF4;
    case 488u: goto L_0890AEFC;
    case 489u: goto L_0890AF00;
    case 490u: goto L_0890AF14;
    case 491u: goto L_0890AF3C;
    case 492u: goto L_0890AF48;
    case 493u: goto L_0890AF58;
    case 494u: goto L_0890AF60;
    case 495u: goto L_0890AF80;
    case 496u: goto L_0890AF88;
    case 497u: goto L_0890AF8C;
    case 498u: goto L_0890AFA0;
    case 499u: goto L_0890AFB4;
    case 500u: goto L_0890AFC4;
    case 501u: goto L_0890AFE0;
    case 502u: goto L_0890AFE8;
    case 503u: goto L_0890AFF0;
    case 504u: goto L_0890B000;
    case 505u: goto L_0890B00C;
    case 506u: goto L_0890B014;
    case 507u: goto L_0890B01C;
    case 508u: goto L_0890B028;
    case 509u: goto L_0890B038;
    case 510u: goto L_0890B0B0;
    case 511u: goto L_0890B0BC;
    case 512u: goto L_0890B0CC;
    case 513u: goto L_0890B0D8;
    case 514u: goto L_0890B0E0;
    case 515u: goto L_0890B0F0;
    case 516u: goto L_0890B0F8;
    case 517u: goto L_0890B104;
    case 518u: goto L_0890B124;
    case 519u: goto L_0890B134;
    case 520u: goto L_0890B13C;
    case 521u: goto L_0890B144;
    case 522u: goto L_0890B15C;
    case 523u: goto L_0890B170;
    case 524u: goto L_0890B180;
    case 525u: goto L_0890B188;
    case 526u: goto L_0890B194;
    case 527u: goto L_0890B1AC;
    case 528u: goto L_0890B1CC;
    case 529u: goto L_0890B1D4;
    case 530u: goto L_0890B1DC;
    case 531u: goto L_0890B1EC;
    case 532u: goto L_0890B1F8;
    case 533u: goto L_0890B240;
    case 534u: goto L_0890B24C;
    case 535u: goto L_0890B254;
    case 536u: goto L_0890B268;
    case 537u: goto L_0890B2A8;
    case 538u: goto L_0890B2B0;
    case 539u: goto L_0890B2C8;
    case 540u: goto L_0890B2D0;
    case 541u: goto L_0890B2D4;
    case 542u: goto L_0890B2F0;
    case 543u: goto L_0890B2F4;
    case 544u: goto L_0890B2F8;
    case 545u: goto L_0890B30C;
    case 546u: goto L_0890B32C;
    case 547u: goto L_0890B370;
    case 548u: goto L_0890B378;
    case 549u: goto L_0890B3A0;
    case 550u: goto L_0890B3A8;
    case 551u: goto L_0890B3B0;
    case 552u: goto L_0890B3DC;
    case 553u: goto L_0890B3FC;
    case 554u: goto L_0890B40C;
    case 555u: goto L_0890B424;
    case 556u: goto L_0890B428;
    case 557u: goto L_0890B44C;
    case 558u: goto L_0890B454;
    case 559u: goto L_0890B460;
    case 560u: goto L_0890B468;
    case 561u: goto L_0890B47C;
    case 562u: goto L_0890B494;
    case 563u: goto L_0890B498;
    case 564u: goto L_0890B4CC;
    case 565u: goto L_0890B4E4;
    case 566u: goto L_0890B4F8;
    case 567u: goto L_0890B510;
    case 568u: goto L_0890B53C;
    case 569u: goto L_0890B540;
    case 570u: goto L_0890B56C;
    case 571u: goto L_0890B598;
    case 572u: goto L_0890B5D4;
    case 573u: goto L_0890B5F4;
    case 574u: goto L_0890B630;
    case 575u: goto L_0890B640;
    case 576u: goto L_0890B650;
    case 577u: goto L_0890B65C;
    case 578u: goto L_0890B668;
    case 579u: goto L_0890B674;
    case 580u: goto L_0890B684;
    case 581u: goto L_0890B68C;
    case 582u: goto L_0890B69C;
    case 583u: goto L_0890B6A8;
    case 584u: goto L_0890B6B8;
    case 585u: goto L_0890B6C8;
    case 586u: goto L_0890B6CC;
    case 587u: goto L_0890B6D8;
    case 588u: goto L_0890B6EC;
    case 589u: goto L_0890B6F8;
    case 590u: goto L_0890B708;
    case 591u: goto L_0890B710;
    case 592u: goto L_0890B718;
    case 593u: goto L_0890B71C;
    case 594u: goto L_0890B730;
    case 595u: goto L_0890B740;
    case 596u: goto L_0890B760;
    case 597u: goto L_0890B780;
    case 598u: goto L_0890B790;
    case 599u: goto L_0890B798;
    case 600u: goto L_0890B7A0;
    case 601u: goto L_0890B7A8;
    case 602u: goto L_0890B7B0;
    case 603u: goto L_0890B7C8;
    case 604u: goto L_0890B7E8;
    case 605u: goto L_0890B7F8;
    case 606u: goto L_0890B800;
    case 607u: goto L_0890B808;
    case 608u: goto L_0890B810;
    case 609u: goto L_0890B81C;
    case 610u: goto L_0890B834;
    case 611u: goto L_0890B844;
    case 612u: goto L_0890B850;
    case 613u: goto L_0890B860;
    case 614u: goto L_0890B868;
    case 615u: goto L_0890B874;
    case 616u: goto L_0890B87C;
    case 617u: goto L_0890B880;
    case 618u: goto L_0890B88C;
    case 619u: goto L_0890B89C;
    case 620u: goto L_0890B8A8;
    case 621u: goto L_0890B8B4;
    case 622u: goto L_0890B8BC;
    case 623u: goto L_0890B8C8;
    case 624u: goto L_0890B8CC;
    case 625u: goto L_0890B8D8;
    case 626u: goto L_0890B8F4;
    case 627u: goto L_0890B900;
    case 628u: goto L_0890B910;
    case 629u: goto L_0890B91C;
    case 630u: goto L_0890B924;
    case 631u: goto L_0890B934;
    case 632u: goto L_0890B93C;
    case 633u: goto L_0890B944;
    case 634u: goto L_0890B95C;
    case 635u: goto L_0890B964;
    case 636u: goto L_0890B96C;
    case 637u: goto L_0890B984;
    case 638u: goto L_0890B99C;
    case 639u: goto L_0890B9A8;
    case 640u: goto L_0890B9B8;
    case 641u: goto L_0890B9C4;
    case 642u: goto L_0890B9CC;
    case 643u: goto L_0890B9DC;
    case 644u: goto L_0890B9E4;
    case 645u: goto L_0890B9EC;
    case 646u: goto L_0890B9F4;
    case 647u: goto L_0890BA08;
    case 648u: goto L_0890BA18;
    case 649u: goto L_0890BA24;
    case 650u: goto L_0890BA34;
    case 651u: goto L_0890BA40;
    case 652u: goto L_0890BA48;
    case 653u: goto L_0890BA50;
    case 654u: goto L_0890BA58;
    case 655u: goto L_0890BA64;
    case 656u: goto L_0890BA68;
    case 657u: goto L_0890BA74;
    case 658u: goto L_0890BA84;
    case 659u: goto L_0890BA90;
    case 660u: goto L_0890BAA0;
    case 661u: goto L_0890BAA8;
    case 662u: goto L_0890BAB4;
    case 663u: goto L_0890BAD0;
    case 664u: goto L_0890BADC;
    case 665u: goto L_0890BAF0;
    case 666u: goto L_0890BB08;
    case 667u: goto L_0890BB10;
    case 668u: goto L_0890BB18;
    case 669u: goto L_0890BB20;
    case 670u: goto L_0890BB28;
    case 671u: goto L_0890BB34;
    case 672u: goto L_0890BB3C;
    case 673u: goto L_0890BB40;
    case 674u: goto L_0890BB54;
    case 675u: goto L_0890BB6C;
    case 676u: goto L_0890BB8C;
    case 677u: goto L_0890BBC4;
    case 678u: goto L_0890BBCC;
    case 679u: goto L_0890BBE8;
    case 680u: goto L_0890BC14;
    case 681u: goto L_0890BC30;
    case 682u: goto L_0890BC38;
    case 683u: goto L_0890BC40;
    case 684u: goto L_0890BC48;
    case 685u: goto L_0890BC58;
    case 686u: goto L_0890BC6C;
    case 687u: goto L_0890BCA0;
    case 688u: goto L_0890BCA8;
    case 689u: goto L_0890BCB8;
    case 690u: goto L_0890BCD0;
    case 691u: goto L_0890BD18;
    case 692u: goto L_0890BD20;
    case 693u: goto L_0890BD3C;
    case 694u: goto L_0890BD50;
    case 695u: goto L_0890BD8C;
    case 696u: goto L_0890BD94;
    case 697u: goto L_0890BDA0;
    case 698u: goto L_0890BDC4;
    case 699u: goto L_0890BDD0;
    case 700u: goto L_0890BE0C;
    case 701u: goto L_0890BE40;
    case 702u: goto L_0890BE64;
    case 703u: goto L_0890BE84;
    case 704u: goto L_0890BEA4;
    case 705u: goto L_0890BEBC;
    case 706u: goto L_0890BEF0;
    case 707u: goto L_0890BF10;
    case 708u: goto L_0890BF20;
    case 709u: goto L_0890BF54;
    case 710u: goto L_0890BF7C;
    case 711u: goto L_0890BF88;
    case 712u: goto L_0890BFC8;
    case 713u: goto L_0890BFF4;
    case 714u: goto L_0890BFFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08908000:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[7]);
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[5];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[8]);
      if (branch_taken) {
          goto L_089081BC;
      }
      goto L_0890800C;
    }
L_0890800C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089081BC;
      }
      goto L_0890803C;
    }
L_0890803C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 34u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089081BC;
      }
      goto L_0890806C;
    }
L_0890806C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 39u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089081BC;
      }
      goto L_0890809C;
    }
L_0890809C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 40u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089081BC;
      }
      goto L_089080CC;
    }
L_089080CC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 42u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089081BC;
      }
      goto L_089080FC;
    }
L_089080FC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 43u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089081BC;
      }
      goto L_0890812C;
    }
L_0890812C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 45u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089081BC;
      }
      goto L_0890815C;
    }
L_0890815C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 46u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089081BC;
      }
      goto L_0890818C;
    }
L_0890818C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 41u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08908250;
      }
      goto L_089081BC;
    }
L_089081BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(2740)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 6u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08908250;
      }
      goto L_089081DC;
    }
L_089081DC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(816)));
    ctx.gpr[31] = (0x08908208u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(820)));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 282u, 0x089D962Cu>(ctx, &aot_mem) && ctx.pc == 0x08908208u) goto L_08908208;
    return;
L_08908208:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (16329u << 16u);
      if (branch_taken) {
          goto L_08908234;
      }
      goto L_08908220;
    }
L_08908220:
    ctx.gpr[4] = (16585u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[4] = (16329u << 16u);
    goto L_08908234;
L_08908234:
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(2740)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1248), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(2740)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08908250;
L_08908250:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(736));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
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
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(996)));
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
        goto L_089082DC;
    }
    goto L_089082AC;
L_089082AC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(996)));
    ctx.gpr[31] = (0x089082D8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(996));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 700u, 0x0883B934u>(ctx, &aot_mem) && ctx.pc == 0x089082D8u) goto L_089082D8;
    return;
L_089082D8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    goto L_089082DC;
L_089082DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(2740)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(127)));
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[6] = (0u + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(996), ctx.gpr[4]);
    ctx.gpr[31] = (0x0890830Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(996));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 689u, 0x0883B8A4u>(ctx, &aot_mem) && ctx.pc == 0x0890830Cu) goto L_0890830C;
    return;
L_0890830C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(752));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
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
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(768));
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(127)));
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[6] = (0u + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(418), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(-3));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(44) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890885C;
      }
      goto L_089083A0;
    }
L_089083A0:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2225u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(16136)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089083B8:
    ctx.gpr[31] = (0x089083C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x089083C0u) goto L_089083C0;
    return;
L_089083C0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.fpr[22] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_08908438;
      }
      goto L_089083C8;
    }
L_089083C8:
    ctx.gpr[31] = (0x089083D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x089083D0u) goto L_089083D0;
    return;
L_089083D0:
    ctx.gpr[31] = (0x089083D8u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x089083D8u) goto L_089083D8;
    return;
L_089083D8:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[20]) || std::isnan(ctx.fpr[22])) && ctx.fpr[20] == ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_08908400;
      }
      goto L_089083E8;
    }
L_089083E8:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[22])) && ctx.fpr[12] == ctx.fpr[22]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_08908404;
    }
    goto L_089083F8;
L_089083F8:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
      if (branch_taken) {
          goto L_08908410;
      }
      goto L_08908400;
    }
L_08908400:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08908404;
L_08908404:
    ctx.gpr[31] = (0x0890840Cu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 282u, 0x089D962Cu>(ctx, &aot_mem) && ctx.pc == 0x0890840Cu) goto L_0890840C;
    return;
L_0890840C:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08908410;
L_08908410:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(604), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
      if (branch_taken) {
          goto L_089084C0;
      }
      goto L_08908438;
    }
L_08908438:
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
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[22])) && ctx.fpr[12] == ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_08908490;
      }
      goto L_08908478;
    }
L_08908478:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[22])) && ctx.fpr[13] == ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08908490;
      }
      goto L_08908488;
    }
L_08908488:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
      if (branch_taken) {
          goto L_0890849C;
      }
      goto L_08908490;
    }
L_08908490:
    ctx.gpr[31] = (0x08908498u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 282u, 0x089D962Cu>(ctx, &aot_mem) && ctx.pc == 0x08908498u) goto L_08908498;
    return;
L_08908498:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_0890849C;
L_0890849C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(604), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089084C0;
L_089084C0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(588), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890885C;
      }
      goto L_089084EC;
    }
L_089084EC:
    ctx.gpr[4] = (16245u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 48651u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08908590;
      }
      goto L_08908504;
    }
L_08908504:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(816)));
    ctx.gpr[31] = (0x08908530u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(820)));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 282u, 0x089D962Cu>(ctx, &aot_mem) && ctx.pc == 0x08908530u) goto L_08908530;
    return;
L_08908530:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (16457u << 16u);
      if (branch_taken) {
          goto L_0890855C;
      }
      goto L_08908548;
    }
L_08908548:
    ctx.gpr[4] = (16585u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.gpr[4] = (16457u << 16u);
    goto L_0890855C;
L_0890855C:
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(604), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(572), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_08908590;
L_08908590:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(109)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089085A0;
      }
      goto L_0890859C;
    }
L_0890859C:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(83), static_cast<std::uint8_t>(ctx.gpr[21]));
    goto L_089085A0;
L_089085A0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_089086C4;
      }
      goto L_089085CC;
    }
L_089085CC:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(111), static_cast<std::uint8_t>(ctx.gpr[21]));
    ctx.fpr[24] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (16329u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(816)));
    ctx.gpr[31] = (0x08908610u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(820)));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 282u, 0x089D962Cu>(ctx, &aot_mem) && ctx.pc == 0x08908610u) goto L_08908610;
    return;
L_08908610:
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_fpu_condition((ctx.fpr[24] < ctx.fpr[26]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (16585u << 16u);
      if (branch_taken) {
          goto L_08908630;
      }
      goto L_08908624;
    }
L_08908624:
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[24] = ctx.fpr[24] + ctx.fpr[12];
    goto L_08908630;
L_08908630:
    ctx.gpr[31] = (0x08908638u);
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[24];
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 253u, 0x08A1D3ECu>(ctx, &aot_mem) && ctx.pc == 0x08908638u) goto L_08908638;
    return;
L_08908638:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]) & 0x7FFFFFFFu);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08908654;
      }
      goto L_0890864C;
    }
L_0890864C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08908658;
      }
      goto L_08908654;
    }
L_08908654:
    ctx.gpr[4] = (0u | 0u);
    goto L_08908658;
L_08908658:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890868C;
      }
      goto L_08908660;
    }
L_08908660:
    ctx.fpr[12] = ctx.fpr[22] + ctx.fpr[24];
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(572), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089086C4;
      }
      goto L_0890868C;
    }
L_0890868C:
    ctx.gpr[4] = (16457u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[24] + ctx.fpr[12];
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[22];
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(572), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089086C4;
L_089086C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890885C;
      }
      goto L_089086CC;
    }
L_089086CC:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(608), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890885C;
      }
      goto L_089086FC;
    }
L_089086FC:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(608), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890885C;
      }
      goto L_0890872C;
    }
L_0890872C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(99)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08908824;
      }
      goto L_0890873C;
    }
L_0890873C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08908824;
      }
      goto L_08908748;
    }
L_08908748:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(111), static_cast<std::uint8_t>(ctx.gpr[21]));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 15u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.fpr[20] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_08908784;
      }
      goto L_08908780;
    }
L_08908780:
    ctx.gpr[17] = (0u | 1u);
    goto L_08908784;
L_08908784:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(816)));
    ctx.gpr[31] = (0x089087B0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(820)));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 282u, 0x089D962Cu>(ctx, &aot_mem) && ctx.pc == 0x089087B0u) goto L_089087B0;
    return;
L_089087B0:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (16585u << 16u);
      if (branch_taken) {
          goto L_089087D0;
      }
      goto L_089087C4;
    }
L_089087C4:
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_089087D0;
L_089087D0:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08908800;
      }
      goto L_089087D8;
    }
L_089087D8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(572), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08908824;
      }
      goto L_08908800;
    }
L_08908800:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(572), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08908824;
L_08908824:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890885C;
      }
      goto L_0890882C;
    }
L_0890882C:
    ctx.gpr[4] = (16006u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 2706u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(588), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0890885C;
L_0890885C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(604)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    if (ctx.gpr[4] != ctx.gpr[23]) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(127)));
        goto L_08908898;
    }
    goto L_0890888C;
L_0890888C:
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_089088C8;
      }
      goto L_08908894;
    }
L_08908894:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(127)));
    goto L_08908898;
L_08908898:
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_089088F0;
      }
      goto L_089088C0;
    }
L_089088C0:
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[23];
    // nop
      if (branch_taken) {
          goto L_089088F0;
      }
      goto L_089088C8;
    }
L_089088C8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(428), static_cast<std::uint16_t>(ctx.gpr[19]));
      if (branch_taken) {
          goto L_08908940;
      }
      goto L_089088F0;
    }
L_089088F0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[31] = (0x08908918u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(400));
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 541u, 0x088EAF2Cu>(ctx, &aot_mem) && ctx.pc == 0x08908918u) goto L_08908918;
    return;
L_08908918:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(428), static_cast<std::uint16_t>(ctx.gpr[19]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(604), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_08908940;
L_08908940:
    ctx.gpr[4] = (0u | 1350u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(164), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 0u);
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[30];
    ctx.gpr[5] = (0u | 28u);
      if (branch_taken) {
          goto L_08908968;
      }
      goto L_08908954;
    }
L_08908954:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08908968;
      }
      goto L_0890895C;
    }
L_0890895C:
    ctx.gpr[5] = (0u | 1800u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(164), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08908B70;
      }
      goto L_08908968;
    }
L_08908968:
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[22];
    ctx.gpr[5] = (0u | 28u);
      if (branch_taken) {
          goto L_089089BC;
      }
      goto L_08908970;
    }
L_08908970:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08908990;
      }
      goto L_08908978;
    }
L_08908978:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[23];
    // nop
      if (branch_taken) {
          goto L_08908990;
      }
      goto L_08908980;
    }
L_08908980:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[30];
    ctx.gpr[5] = (0u | 35u);
      if (branch_taken) {
          goto L_08908990;
      }
      goto L_08908988;
    }
L_08908988:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089089BC;
      }
      goto L_08908990;
    }
L_08908990:
    ctx.gpr[5] = (15820u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(7072), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (16230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 26214u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(7076), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (0u | 750u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(164), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08908B70;
      }
      goto L_089089BC;
    }
L_089089BC:
    ctx.gpr[5] = (0u | 35u);
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089089F4;
      }
      goto L_089089C8;
    }
L_089089C8:
    ctx.gpr[5] = (2227u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24152)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(7072), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (2227u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24156)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(7076), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24160)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(164), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08908B70;
      }
      goto L_089089F4;
    }
L_089089F4:
    ctx.gpr[6] = (0u | 15u);
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08908A24;
      }
      goto L_08908A00;
    }
L_08908A00:
    ctx.gpr[5] = (15692u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(7072), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (16243u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 13107u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(7076), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08908B70;
      }
      goto L_08908A24;
    }
L_08908A24:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(95)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08908A6C;
      }
      goto L_08908A30;
    }
L_08908A30:
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[23];
    // nop
      if (branch_taken) {
          goto L_08908A6C;
      }
      goto L_08908A38;
    }
L_08908A38:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_08908A6C;
      }
      goto L_08908A40;
    }
L_08908A40:
    ctx.gpr[5] = (0u | 800u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(164), ctx.gpr[5]);
    ctx.gpr[5] = (15523u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 55050u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(7072), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (16250u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 57672u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(7076), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08908B70;
      }
      goto L_08908A6C;
    }
L_08908A6C:
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[22];
    ctx.gpr[6] = (0u | 39u);
      if (branch_taken) {
          goto L_08908A84;
      }
      goto L_08908A74;
    }
L_08908A74:
    ctx.gpr[6] = (0u | 22u);
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08908AC8;
      }
      goto L_08908A80;
    }
L_08908A80:
    ctx.gpr[6] = (0u | 39u);
    goto L_08908A84;
L_08908A84:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 40u);
      if (branch_taken) {
          goto L_08908AAC;
      }
      goto L_08908A8C;
    }
L_08908A8C:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 41u);
      if (branch_taken) {
          goto L_08908AAC;
      }
      goto L_08908A94;
    }
L_08908A94:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 43u);
      if (branch_taken) {
          goto L_08908AAC;
      }
      goto L_08908A9C;
    }
L_08908A9C:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 46u);
      if (branch_taken) {
          goto L_08908AAC;
      }
      goto L_08908AA4;
    }
L_08908AA4:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08908AC8;
      }
      goto L_08908AAC;
    }
L_08908AAC:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(7072), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(7076), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(164), ctx.gpr[21]);
      if (branch_taken) {
          goto L_08908B70;
      }
      goto L_08908AC8;
    }
L_08908AC8:
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[30];
    // nop
      if (branch_taken) {
          goto L_08908B00;
      }
      goto L_08908AD0;
    }
L_08908AD0:
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24164)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(7072), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24168)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(7076), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24172)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(164), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08908B70;
      }
      goto L_08908B00;
    }
L_08908B00:
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[23];
    ctx.gpr[6] = (0u | 28u);
      if (branch_taken) {
          goto L_08908B20;
      }
      goto L_08908B08;
    }
L_08908B08:
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08908B20;
      }
      goto L_08908B10;
    }
L_08908B10:
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[30];
    // nop
      if (branch_taken) {
          goto L_08908B20;
      }
      goto L_08908B18;
    }
L_08908B18:
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08908B70;
      }
      goto L_08908B20;
    }
L_08908B20:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08908B40;
      }
      goto L_08908B28;
    }
L_08908B28:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[23];
    // nop
      if (branch_taken) {
          goto L_08908B40;
      }
      goto L_08908B30;
    }
L_08908B30:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[30];
    // nop
      if (branch_taken) {
          goto L_08908B40;
      }
      goto L_08908B38;
    }
L_08908B38:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08908B70;
      }
      goto L_08908B40;
    }
L_08908B40:
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(7072), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(7076), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (0u | 350u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(164), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08908B70;
      }
      goto L_08908B70;
    }
L_08908B70:
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(145), static_cast<std::uint8_t>(ctx.gpr[21]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7868)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(160), ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(144), static_cast<std::uint8_t>(ctx.gpr[21]));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(6857)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08908BD4;
      }
      goto L_08908B90;
    }
L_08908B90:
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(2688));
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(2704));
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(2720));
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(240)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(268), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(244)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(264), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08908C94;
      }
      goto L_08908BD4;
    }
L_08908BD4:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(127)));
    ctx.gpr[6] = (ctx.gpr[6] << 4u);
    ctx.gpr[7] = (0u + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[16] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(832));
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(127)));
    ctx.gpr[6] = (ctx.gpr[6] << 4u);
    ctx.gpr[7] = (0u + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[16] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(720));
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(127)));
    ctx.gpr[6] = (ctx.gpr[6] << 4u);
    ctx.gpr[7] = (0u + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[16] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(864));
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(127)));
    ctx.gpr[6] = (ctx.gpr[6] << 4u);
    ctx.gpr[7] = (0u + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[16] + ctx.gpr[6]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(580)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(268), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(576)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(264), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08908C94;
L_08908C94:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(127)));
    ctx.gpr[7] = (ctx.gpr[7] << 4u);
    ctx.gpr[8] = (0u + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] << 3u);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.gpr[7] = (ctx.gpr[8] + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[16] + ctx.gpr[7]);
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(418), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(736));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    { const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(127)));
    ctx.gpr[6] = (ctx.gpr[6] << 4u);
    ctx.gpr[7] = (0u + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[16] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(752));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    { const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(127)));
    ctx.gpr[6] = (ctx.gpr[6] << 4u);
    ctx.gpr[7] = (0u + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[16] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(768));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(127)));
    ctx.gpr[6] = (ctx.gpr[6] << 4u);
    ctx.gpr[7] = (0u + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[20]);
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(428), static_cast<std::uint16_t>(ctx.gpr[19]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(2740)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(127)));
    ctx.gpr[7] = (ctx.gpr[7] << 4u);
    ctx.gpr[8] = (0u + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] << 3u);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.gpr[7] = (ctx.gpr[8] + ctx.gpr[7]);
    ctx.gpr[8] = (ctx.gpr[16] + ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(996), ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(145), static_cast<std::uint8_t>(ctx.gpr[21]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7868)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(160), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(144), static_cast<std::uint8_t>(ctx.gpr[21]));
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[20]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(596)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(372), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[8] + static_cast<std::uint32_t>(672));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(2560));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(127)));
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[6] = (0u + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(688));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(2576));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(127)));
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[6] = (0u + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(704));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(2592));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(127)));
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[6] = (0u + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(480)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(232), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(484)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(248), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(532)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(260), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(426), static_cast<std::uint8_t>(ctx.gpr[21]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(99)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08908E90;
      }
      goto L_08908E4C;
    }
L_08908E4C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(6858)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08908E74;
      }
      goto L_08908E5C;
    }
L_08908E5C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(7092)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(7072), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(7096)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(7076), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(7100)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(164), ctx.gpr[4]);
    goto L_08908E74;
L_08908E74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(164)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(168), ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(7072)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(7080), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(7076)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(7084), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08908EC0;
      }
      goto L_08908E90;
    }
L_08908E90:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08908EA4;
      }
      goto L_08908E98;
    }
L_08908E98:
    ctx.gpr[4] = (0u | 350u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(168), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08908EAC;
      }
      goto L_08908EA4;
    }
L_08908EA4:
    ctx.gpr[4] = (0u | 600u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(168), ctx.gpr[4]);
    goto L_08908EAC;
L_08908EAC:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(7080), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(7084), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08908EC0;
L_08908EC0:
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
L_08908F00:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08908F34u);
    ctx.gpr[6] = (0u | 7184u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 376u, 0x08AED4ECu>(ctx, &aot_mem) && ctx.pc == 0x08908F34u) goto L_08908F34;
    return;
L_08908F34:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2736), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(95), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(118), static_cast<std::uint8_t>(0u));
    ctx.fpr[22] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(320), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(123), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x08908F58u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(400));
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 541u, 0x088EAF2Cu>(ctx, &aot_mem) && ctx.pc == 0x08908F58u) goto L_08908F58;
    return;
L_08908F58:
    ctx.gpr[31] = (0x08908F60u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(1056));
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 541u, 0x088EAF2Cu>(ctx, &aot_mem) && ctx.pc == 0x08908F60u) goto L_08908F60;
    return;
L_08908F60:
    ctx.gpr[31] = (0x08908F68u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(1712));
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 541u, 0x088EAF2Cu>(ctx, &aot_mem) && ctx.pc == 0x08908F68u) goto L_08908F68;
    return;
L_08908F68:
    ctx.gpr[20] = (0u | 4u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(428), static_cast<std::uint16_t>(ctx.gpr[20]));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(1084), static_cast<std::uint16_t>(ctx.gpr[20]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(121), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(122), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(120), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(22360)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(660), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(22364)));
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(664), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(22368)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(632), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(22372)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(636), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(22376)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(640), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (15733u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 49807u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(644), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (48588u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(648), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (48527u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 23593u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(652), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 33043u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(656), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(101), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x0890900Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 327u, 0x088EE310u>(ctx, &aot_mem) && ctx.pc == 0x0890900Cu) goto L_0890900C;
    return;
L_0890900C:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(90), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 21u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(7108), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(996), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1652), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2308), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(500), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(504), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1156), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1160), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(418), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1074), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1730), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1008), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1664), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2320), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(119), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (16000u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(7072), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16192u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(7076), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16217u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(7088), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(7176), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(6858), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(128), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(284), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(93), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(114), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2368), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2372), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(94), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(96), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (16230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(300), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(105), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(6857), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(80), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(81), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(6860), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(117), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(296), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(104), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(204), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(340), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(316), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2740), 0u);
    ctx.gpr[31] = (0x089090F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x089090F4u) goto L_089090F4;
    return;
L_089090F4:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[19] = (2233u << 16u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-4576));
    ctx.gpr[18] = (2227u << 16u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_08909144;
      }
      goto L_08909110;
    }
L_08909110:
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
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2740), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08909150;
      }
      goto L_08909144;
    }
L_08909144:
    ctx.gpr[31] = (0x0890914Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x0890914Cu) goto L_0890914C;
    return;
L_0890914C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2740), ctx.gpr[2]);
    goto L_08909150;
L_08909150:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(91), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(324), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(328), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(117), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(116), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(126), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(344), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(22558), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(272), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(308)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089091C0;
      }
      goto L_08909184;
    }
L_08909184:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(6848), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(6849), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(3439), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(6852), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(6859), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(7068), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(7060), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (15139u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(376), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (15172u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39846u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(380), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089091C0;
L_089091C0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(308)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_089091D0;
      }
      goto L_089091CC;
    }
L_089091CC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(7068), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    goto L_089091D0;
L_089091D0:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(107), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(7116), static_cast<std::uint16_t>(ctx.gpr[17]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(112), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(312), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(288), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(110), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (17036u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(292), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(7112), static_cast<std::uint16_t>(ctx.gpr[20]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(98), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(111), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08909210u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 511u, 0x08A06588u>(ctx, &aot_mem) && ctx.pc == 0x08909210u) goto L_08909210;
    return;
L_08909210:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(108), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 5000u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(136), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(148), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(89), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(152), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(156), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(224), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(82), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(83), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(6856), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x08909248u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(7128));
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 368u, 0x088E9FFCu>(ctx, &aot_mem) && ctx.pc == 0x08909248u) goto L_08909248;
    return;
L_08909248:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(86), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(124), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 6u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(184), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(188), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(276), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(280), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(2400));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(172), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(176), 0u);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(145), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(160), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(99), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (16135u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 44564u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(384), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16112u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 41943u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(388), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(360), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(364), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (17279u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(6852), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (0u | 255u);
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(3439), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(7180), static_cast<std::uint8_t>(0u));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08909304:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-272));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(264), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(268), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[8] = (0u | 16u);
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[8];
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_08909534;
      }
      goto L_08909354;
    }
L_08909354:
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(127)));
    ctx.gpr[7] = (ctx.gpr[7] << 4u);
    ctx.gpr[8] = (0u + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] << 3u);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.gpr[7] = (ctx.gpr[8] + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[16] + ctx.gpr[7]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[8] = (0u | 7u);
    if (ctx.gpr[7] == ctx.gpr[8]) {
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2740)));
        goto L_08909538;
    }
    goto L_08909384;
L_08909384:
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(127)));
    ctx.gpr[7] = (ctx.gpr[7] << 4u);
    ctx.gpr[8] = (0u + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] << 3u);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.gpr[7] = (ctx.gpr[8] + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[16] + ctx.gpr[7]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[8] = (0u | 39u);
    if (ctx.gpr[7] == ctx.gpr[8]) {
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2740)));
        goto L_08909538;
    }
    goto L_089093B4;
L_089093B4:
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(127)));
    ctx.gpr[7] = (ctx.gpr[7] << 4u);
    ctx.gpr[8] = (0u + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] << 3u);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.gpr[7] = (ctx.gpr[8] + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[16] + ctx.gpr[7]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[8] = (0u | 40u);
    if (ctx.gpr[7] == ctx.gpr[8]) {
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2740)));
        goto L_08909538;
    }
    goto L_089093E4;
L_089093E4:
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(127)));
    ctx.gpr[7] = (ctx.gpr[7] << 4u);
    ctx.gpr[8] = (0u + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] << 3u);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.gpr[7] = (ctx.gpr[8] + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[16] + ctx.gpr[7]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[8] = (0u | 42u);
    if (ctx.gpr[7] == ctx.gpr[8]) {
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2740)));
        goto L_08909538;
    }
    goto L_08909414;
L_08909414:
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(127)));
    ctx.gpr[7] = (ctx.gpr[7] << 4u);
    ctx.gpr[8] = (0u + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] << 3u);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.gpr[7] = (ctx.gpr[8] + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[16] + ctx.gpr[7]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[8] = (0u | 43u);
    if (ctx.gpr[7] == ctx.gpr[8]) {
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2740)));
        goto L_08909538;
    }
    goto L_08909444;
L_08909444:
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(127)));
    ctx.gpr[7] = (ctx.gpr[7] << 4u);
    ctx.gpr[8] = (0u + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] << 3u);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.gpr[7] = (ctx.gpr[8] + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[16] + ctx.gpr[7]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[8] = (0u | 41u);
    if (ctx.gpr[7] == ctx.gpr[8]) {
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2740)));
        goto L_08909538;
    }
    goto L_08909474;
L_08909474:
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(127)));
    ctx.gpr[7] = (ctx.gpr[7] << 4u);
    ctx.gpr[8] = (0u + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] << 3u);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.gpr[7] = (ctx.gpr[8] + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[16] + ctx.gpr[7]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[8] = (0u | 45u);
    if (ctx.gpr[7] == ctx.gpr[8]) {
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2740)));
        goto L_08909538;
    }
    goto L_089094A4;
L_089094A4:
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(127)));
    ctx.gpr[7] = (ctx.gpr[7] << 4u);
    ctx.gpr[8] = (0u + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] << 3u);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.gpr[7] = (ctx.gpr[8] + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[16] + ctx.gpr[7]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[8] = (0u | 46u);
    if (ctx.gpr[7] == ctx.gpr[8]) {
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2740)));
        goto L_08909538;
    }
    goto L_089094D4;
L_089094D4:
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(127)));
    ctx.gpr[7] = (ctx.gpr[7] << 4u);
    ctx.gpr[8] = (0u + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] << 3u);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.gpr[7] = (ctx.gpr[8] + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[16] + ctx.gpr[7]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[8] = (0u | 34u);
    if (ctx.gpr[7] == ctx.gpr[8]) {
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2740)));
        goto L_08909538;
    }
    goto L_08909504;
L_08909504:
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(127)));
    ctx.gpr[7] = (ctx.gpr[7] << 4u);
    ctx.gpr[8] = (0u + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] << 3u);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.gpr[7] = (ctx.gpr[8] + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[16] + ctx.gpr[7]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[8] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_08909598;
      }
      goto L_08909534;
    }
L_08909534:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2740)));
    goto L_08909538;
L_08909538:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(68)));
    ctx.gpr[7] = (ctx.gpr[7] & 14u);
    ctx.gpr[7] = (ctx.gpr[7] ^ 6u);
    ctx.gpr[7] = (ctx.gpr[7] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08909598;
      }
      goto L_08909554;
    }
L_08909554:
    ctx.gpr[7] = (16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[7]);
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089095D4;
      }
      goto L_08909598;
    }
L_08909598:
    ctx.gpr[7] = (16544u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[7]);
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    goto L_089095D4;
L_089095D4:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7820)));
    ctx.gpr[6] = (0u | 12u);
    { const std::uint32_t dividend = ctx.gpr[5]; const std::uint32_t divisor = ctx.gpr[6]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[5] = (ctx.hi);
    ctx.gpr[17] = (ctx.gpr[5] << 16u);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 16u));
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890965C;
      }
      goto L_089095F8;
    }
L_089095F8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(352)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(356), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[5] = (16800u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[20];
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[31] = (0x0890963Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 95u, 0x088C06D4u>(ctx, &aot_mem) && ctx.pc == 0x0890963Cu) goto L_0890963C;
    return;
L_0890963C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08909658;
      }
      goto L_08909644;
    }
L_08909644:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(352), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0890965C;
      }
      goto L_08909658;
    }
L_08909658:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(352), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_0890965C;
L_0890965C:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (16576u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(352)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(356)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[16] - ctx.fpr[12];
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[14] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(348), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(264)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089096B0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[31]);
    ctx.gpr[23] = (2232u << 16u);
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(13216));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(2740)));
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[18] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(110), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(868)));
    ctx.gpr[19] = (0u | 1u);
    ctx.gpr[17] = (2227u << 16u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08909740;
      }
      goto L_08909704;
    }
L_08909704:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08909740;
      }
      goto L_08909710;
    }
L_08909710:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(80), static_cast<std::uint8_t>(ctx.gpr[18]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(81), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(15744));
    ctx.gpr[31] = (0x08909728u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08909A5C;
L_08909728:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7868)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(148), ctx.gpr[4]);
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(24176), static_cast<std::uint8_t>(ctx.gpr[18]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(180), 0u);
    goto L_08909740;
L_08909740:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(868)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08909788;
      }
      goto L_0890974C;
    }
L_0890974C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(81)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08909788;
      }
      goto L_08909758;
    }
L_08909758:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(81), static_cast<std::uint8_t>(ctx.gpr[18]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(80), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(15752));
    ctx.gpr[31] = (0x08909770u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08909A5C;
L_08909770:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7868)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(148), ctx.gpr[4]);
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(24176), static_cast<std::uint8_t>(ctx.gpr[18]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(180), 0u);
    goto L_08909788;
L_08909788:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(108), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(180)));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(140)));
    goto L_08909798;
L_08909798:
    ctx.gpr[4] = (ctx.gpr[18] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08909810;
      }
      goto L_089097A4;
    }
L_089097A4:
    { const bool branch_taken = ctx.gpr[21] != 0u;
    // nop
      if (branch_taken) {
          goto L_08909810;
      }
      goto L_089097AC;
    }
L_089097AC:
    ctx.gpr[4] = (ctx.gpr[20] << 6u);
    ctx.gpr[5] = (ctx.gpr[20] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2800)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2804)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2808)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2816)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2820)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2824)));
    ctx.gpr[31] = (0x089097DCu);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 57u, 0x08A28888u>(ctx, &aot_mem) && ctx.pc == 0x089097DCu) goto L_089097DC;
    return;
L_089097DC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089097EC;
      }
      goto L_089097E4;
    }
L_089097E4:
    ctx.gpr[21] = (ctx.gpr[19] | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(180), ctx.gpr[20]);
    goto L_089097EC;
L_089097EC:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(140)));
    ctx.gpr[4] = (ctx.gpr[20] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08909804;
      }
      goto L_08909800;
    }
L_08909800:
    ctx.gpr[20] = (0u | 0u);
    goto L_08909804;
L_08909804:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(140)));
      if (branch_taken) {
          goto L_08909798;
      }
      goto L_08909810;
    }
L_08909810:
    { const bool branch_taken = ctx.gpr[21] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_089099C4;
      }
      goto L_08909818;
    }
L_08909818:
    ctx.gpr[31] = (0x08909820u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 277u, 0x088EDF38u>(ctx, &aot_mem) && ctx.pc == 0x08909820u) goto L_08909820;
    return;
L_08909820:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2740)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(112));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22564)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08909894;
      }
      goto L_08909854;
    }
L_08909854:
    ctx.gpr[31] = (0x0890985Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x0890985Cu) goto L_0890985C;
    return;
L_0890985C:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[7] = (0u | 2u);
    ctx.gpr[31] = (0x08909874u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 345u, 0x088EE3F4u>(ctx, &aot_mem) && ctx.pc == 0x08909874u) goto L_08909874;
    return;
L_08909874:
    ctx.gpr[31] = (0x0890987Cu);
    ctx.gpr[4] = (ctx.gpr[22] + static_cast<std::uint32_t>(880));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 600u, 0x08A06EFCu>(ctx, &aot_mem) && ctx.pc == 0x0890987Cu) goto L_0890987C;
    return;
L_0890987C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089099BC;
      }
      goto L_08909884;
    }
L_08909884:
    ctx.gpr[31] = (0x0890988Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 278u, 0x088EDF4Cu>(ctx, &aot_mem) && ctx.pc == 0x0890988Cu) goto L_0890988C;
    return;
L_0890988C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089099BC;
      }
      goto L_08909894;
    }
L_08909894:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(180)));
    ctx.gpr[5] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2768));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[31] = (0x089098C8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 343u, 0x088EE3C0u>(ctx, &aot_mem) && ctx.pc == 0x089098C8u) goto L_089098C8;
    return;
L_089098C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(180)));
    ctx.gpr[5] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2784)));
    ctx.gpr[4] = (17529u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 49152u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[12])) && ctx.fpr[13] == ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0890996C;
      }
      goto L_089098FC;
    }
L_089098FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(180)));
    ctx.gpr[5] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2788)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[12])) && ctx.fpr[13] == ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0890996C;
      }
      goto L_08909924;
    }
L_08909924:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(180)));
    ctx.gpr[5] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2792)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[12])) && ctx.fpr[13] == ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0890996C;
      }
      goto L_0890994C;
    }
L_0890994C:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[6] = (0u | 15u);
    ctx.gpr[7] = (0u | 2u);
    ctx.gpr[31] = (0x08909964u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 345u, 0x088EE3F4u>(ctx, &aot_mem) && ctx.pc == 0x08909964u) goto L_08909964;
    return;
L_08909964:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08909994;
      }
      goto L_0890996C;
    }
L_0890996C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(180)));
    ctx.gpr[5] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2784));
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08909994u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 362u, 0x088EE534u>(ctx, &aot_mem) && ctx.pc == 0x08909994u) goto L_08909994;
    return;
L_08909994:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7680));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(180)));
    ctx.gpr[6] = (ctx.gpr[5] << 6u);
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[31] = (0x089099BCu);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(2836)));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 596u, 0x0887352Cu>(ctx, &aot_mem) && ctx.pc == 0x089099BCu) goto L_089099BC;
    return;
L_089099BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08909A30;
      }
      goto L_089099C4;
    }
L_089099C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2740)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(112));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22564)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08909A30;
      }
      goto L_089099F8;
    }
L_089099F8:
    ctx.gpr[31] = (0x08909A00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08909A00u) goto L_08909A00;
    return;
L_08909A00:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[7] = (0u | 2u);
    ctx.gpr[31] = (0x08909A18u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 345u, 0x088EE3F4u>(ctx, &aot_mem) && ctx.pc == 0x08909A18u) goto L_08909A18;
    return;
L_08909A18:
    ctx.gpr[31] = (0x08909A20u);
    ctx.gpr[4] = (ctx.gpr[22] + static_cast<std::uint32_t>(880));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 600u, 0x08A06EFCu>(ctx, &aot_mem) && ctx.pc == 0x08909A20u) goto L_08909A20;
    return;
L_08909A20:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08909A30;
      }
      goto L_08909A28;
    }
L_08909A28:
    ctx.gpr[31] = (0x08909A30u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 278u, 0x088EDF4Cu>(ctx, &aot_mem) && ctx.pc == 0x08909A30u) goto L_08909A30;
    return;
L_08909A30:
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
L_08909A5C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[31]);
    ctx.gpr[6] = (2232u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(13216));
    ctx.gpr[30] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[5]);
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x08909AACu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(15760));
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 183u, 0x088B8FBCu>(ctx, &aot_mem) && ctx.pc == 0x08909AACu) goto L_08909AAC;
    return;
L_08909AAC:
    ctx.gpr[23] = (0u | 0u);
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), 0u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(28), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(30), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[16] = (0u | 16384u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 48u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(33), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(34), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), 0u);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x08909B0Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 411u, 0x08AED6BCu>(ctx, &aot_mem) && ctx.pc == 0x08909B0Cu) goto L_08909B0C;
    return;
L_08909B0C:
    ctx.gpr[31] = (0x08909B14u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 498u, 0x08AEDD14u>(ctx, &aot_mem) && ctx.pc == 0x08909B14u) goto L_08909B14;
    return;
L_08909B14:
    ctx.gpr[4] = (0u | 46u);
    ctx.gpr[5] = (ctx.gpr[29] + ctx.gpr[2]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 100u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(33), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 97u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(34), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 116u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(35), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(140), 0u);
    ctx.gpr[31] = (0x08909B44u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 654u, 0x08AA3104u>(ctx, &aot_mem) && ctx.pc == 0x08909B44u) goto L_08909B44;
    return;
L_08909B44:
    ctx.gpr[7] = (2225u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[2]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(15768));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08909B60u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 191u, 0x088B904Cu>(ctx, &aot_mem) && ctx.pc == 0x08909B60u) goto L_08909B60;
    return;
L_08909B60:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[2]);
    ctx.gpr[22] = (0u | 0u);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[21] = (ctx.gpr[16] + static_cast<std::uint32_t>(2768));
    ctx.gpr[21] = (ctx.gpr[18] + ctx.gpr[21]);
    ctx.gpr[20] = (ctx.gpr[16] + static_cast<std::uint32_t>(2784));
    ctx.gpr[20] = (ctx.gpr[18] + ctx.gpr[20]);
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(2800));
    ctx.gpr[19] = (ctx.gpr[18] + ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(2816));
    ctx.gpr[18] = (ctx.gpr[18] + ctx.gpr[4]);
    goto L_08909B98;
L_08909B98:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08909BB0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 558u, 0x08927438u>(ctx, &aot_mem) && ctx.pc == 0x08909BB0u) goto L_08909BB0;
    return;
L_08909BB0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2832), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2836), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(80));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(80));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(80));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(80));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[22]) < 50 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(80));
      if (branch_taken) {
          goto L_08909B98;
      }
      goto L_08909C14;
    }
L_08909C14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 0 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (0u | 14u);
      if (branch_taken) {
          goto L_0890A334;
      }
      goto L_08909C24;
    }
L_08909C24:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    goto L_08909C2C;
L_08909C2C:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[23]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 60 ? 1u : 0u);
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
      if (branch_taken) {
          goto L_08909C6C;
      }
      goto L_08909C48;
    }
L_08909C48:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 44 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-44));
      if (branch_taken) {
          goto L_0890A324;
      }
      goto L_08909C54;
    }
L_08909C54:
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[1] = (2225u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[5]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(16312)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08909C6C:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 12592 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 12596 ? 1u : 0u);
      if (branch_taken) {
          goto L_0890A324;
      }
      goto L_08909C78;
    }
L_08909C78:
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
        goto L_0890A328;
    }
    goto L_08909C80;
L_08909C80:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[29] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
      if (branch_taken) {
          goto L_0890A32C;
      }
      goto L_08909CA0;
    }
L_08909CA0:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(14));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[17]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(14) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08909FB0;
      }
      goto L_08909CBC;
    }
L_08909CBC:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2225u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(16376)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08909CD4:
    ctx.gpr[31] = (0x08909CDCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 224u, 0x08AECB38u>(ctx, &aot_mem) && ctx.pc == 0x08909CDCu) goto L_08909CDC;
    return;
L_08909CDC:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08909CE8u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 551u, 0x08AF6A14u>(ctx, &aot_mem) && ctx.pc == 0x08909CE8u) goto L_08909CE8;
    return;
L_08909CE8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(140)));
    ctx.gpr[5] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(2768), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08909FB0;
      }
      goto L_08909D08;
    }
L_08909D08:
    ctx.gpr[31] = (0x08909D10u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 224u, 0x08AECB38u>(ctx, &aot_mem) && ctx.pc == 0x08909D10u) goto L_08909D10;
    return;
L_08909D10:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08909D1Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 551u, 0x08AF6A14u>(ctx, &aot_mem) && ctx.pc == 0x08909D1Cu) goto L_08909D1C;
    return;
L_08909D1C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(140)));
    ctx.gpr[5] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(2772), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08909FB0;
      }
      goto L_08909D3C;
    }
L_08909D3C:
    ctx.gpr[31] = (0x08909D44u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 224u, 0x08AECB38u>(ctx, &aot_mem) && ctx.pc == 0x08909D44u) goto L_08909D44;
    return;
L_08909D44:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08909D50u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 551u, 0x08AF6A14u>(ctx, &aot_mem) && ctx.pc == 0x08909D50u) goto L_08909D50;
    return;
L_08909D50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(140)));
    ctx.gpr[5] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(2776), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08909FB0;
      }
      goto L_08909D70;
    }
L_08909D70:
    ctx.gpr[31] = (0x08909D78u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 224u, 0x08AECB38u>(ctx, &aot_mem) && ctx.pc == 0x08909D78u) goto L_08909D78;
    return;
L_08909D78:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08909D84u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 551u, 0x08AF6A14u>(ctx, &aot_mem) && ctx.pc == 0x08909D84u) goto L_08909D84;
    return;
L_08909D84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(140)));
    ctx.gpr[5] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(2784), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08909FB0;
      }
      goto L_08909DA4;
    }
L_08909DA4:
    ctx.gpr[31] = (0x08909DACu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 224u, 0x08AECB38u>(ctx, &aot_mem) && ctx.pc == 0x08909DACu) goto L_08909DAC;
    return;
L_08909DAC:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08909DB8u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 551u, 0x08AF6A14u>(ctx, &aot_mem) && ctx.pc == 0x08909DB8u) goto L_08909DB8;
    return;
L_08909DB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(140)));
    ctx.gpr[5] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(2788), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08909FB0;
      }
      goto L_08909DD8;
    }
L_08909DD8:
    ctx.gpr[31] = (0x08909DE0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 224u, 0x08AECB38u>(ctx, &aot_mem) && ctx.pc == 0x08909DE0u) goto L_08909DE0;
    return;
L_08909DE0:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08909DECu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 551u, 0x08AF6A14u>(ctx, &aot_mem) && ctx.pc == 0x08909DECu) goto L_08909DEC;
    return;
L_08909DEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(140)));
    ctx.gpr[5] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(2792), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08909FB0;
      }
      goto L_08909E0C;
    }
L_08909E0C:
    ctx.gpr[31] = (0x08909E14u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 224u, 0x08AECB38u>(ctx, &aot_mem) && ctx.pc == 0x08909E14u) goto L_08909E14;
    return;
L_08909E14:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08909E20u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 551u, 0x08AF6A14u>(ctx, &aot_mem) && ctx.pc == 0x08909E20u) goto L_08909E20;
    return;
L_08909E20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(140)));
    ctx.gpr[5] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(2800), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08909FB0;
      }
      goto L_08909E40;
    }
L_08909E40:
    ctx.gpr[31] = (0x08909E48u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 224u, 0x08AECB38u>(ctx, &aot_mem) && ctx.pc == 0x08909E48u) goto L_08909E48;
    return;
L_08909E48:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08909E54u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 551u, 0x08AF6A14u>(ctx, &aot_mem) && ctx.pc == 0x08909E54u) goto L_08909E54;
    return;
L_08909E54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(140)));
    ctx.gpr[5] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(2804), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08909FB0;
      }
      goto L_08909E74;
    }
L_08909E74:
    ctx.gpr[31] = (0x08909E7Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 224u, 0x08AECB38u>(ctx, &aot_mem) && ctx.pc == 0x08909E7Cu) goto L_08909E7C;
    return;
L_08909E7C:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08909E88u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 551u, 0x08AF6A14u>(ctx, &aot_mem) && ctx.pc == 0x08909E88u) goto L_08909E88;
    return;
L_08909E88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(140)));
    ctx.gpr[5] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(2808), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08909FB0;
      }
      goto L_08909EA8;
    }
L_08909EA8:
    ctx.gpr[31] = (0x08909EB0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 224u, 0x08AECB38u>(ctx, &aot_mem) && ctx.pc == 0x08909EB0u) goto L_08909EB0;
    return;
L_08909EB0:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08909EBCu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 551u, 0x08AF6A14u>(ctx, &aot_mem) && ctx.pc == 0x08909EBCu) goto L_08909EBC;
    return;
L_08909EBC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(140)));
    ctx.gpr[5] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(2816), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08909FB0;
      }
      goto L_08909EDC;
    }
L_08909EDC:
    ctx.gpr[31] = (0x08909EE4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 224u, 0x08AECB38u>(ctx, &aot_mem) && ctx.pc == 0x08909EE4u) goto L_08909EE4;
    return;
L_08909EE4:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08909EF0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 551u, 0x08AF6A14u>(ctx, &aot_mem) && ctx.pc == 0x08909EF0u) goto L_08909EF0;
    return;
L_08909EF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(140)));
    ctx.gpr[5] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(2820), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08909FB0;
      }
      goto L_08909F10;
    }
L_08909F10:
    ctx.gpr[31] = (0x08909F18u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 224u, 0x08AECB38u>(ctx, &aot_mem) && ctx.pc == 0x08909F18u) goto L_08909F18;
    return;
L_08909F18:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08909F24u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 551u, 0x08AF6A14u>(ctx, &aot_mem) && ctx.pc == 0x08909F24u) goto L_08909F24;
    return;
L_08909F24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(140)));
    ctx.gpr[5] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(2824), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08909FB0;
      }
      goto L_08909F44;
    }
L_08909F44:
    ctx.gpr[31] = (0x08909F4Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 224u, 0x08AECB38u>(ctx, &aot_mem) && ctx.pc == 0x08909F4Cu) goto L_08909F4C;
    return;
L_08909F4C:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08909F58u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 551u, 0x08AF6A14u>(ctx, &aot_mem) && ctx.pc == 0x08909F58u) goto L_08909F58;
    return;
L_08909F58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(140)));
    ctx.gpr[5] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(2832), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08909FB0;
      }
      goto L_08909F78;
    }
L_08909F78:
    ctx.gpr[31] = (0x08909F80u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 224u, 0x08AECB38u>(ctx, &aot_mem) && ctx.pc == 0x08909F80u) goto L_08909F80;
    return;
L_08909F80:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08909F8Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 551u, 0x08AF6A14u>(ctx, &aot_mem) && ctx.pc == 0x08909F8Cu) goto L_08909F8C;
    return;
L_08909F8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(140)));
    ctx.gpr[5] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(2836), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(140)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(140), ctx.gpr[4]);
    goto L_08909FB0;
L_08909FB0:
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    goto L_08909FC0;
L_08909FC0:
    ctx.gpr[6] = (ctx.gpr[29] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 14 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08909FC0;
      }
      goto L_08909FD8;
    }
L_08909FD8:
    ctx.gpr[5] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
      if (branch_taken) {
          goto L_0890A32C;
      }
      goto L_08909FE4;
    }
L_08909FE4:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(14));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[17]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(14) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
      if (branch_taken) {
          goto L_0890A2EC;
      }
      goto L_0890A000;
    }
L_0890A000:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2225u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(16432)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890A018:
    ctx.gpr[31] = (0x0890A020u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 224u, 0x08AECB38u>(ctx, &aot_mem) && ctx.pc == 0x0890A020u) goto L_0890A020;
    return;
L_0890A020:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x0890A02Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 551u, 0x08AF6A14u>(ctx, &aot_mem) && ctx.pc == 0x0890A02Cu) goto L_0890A02C;
    return;
L_0890A02C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(140)));
    ctx.gpr[5] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(2768), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890A2EC;
      }
      goto L_0890A04C;
    }
L_0890A04C:
    ctx.gpr[31] = (0x0890A054u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 224u, 0x08AECB38u>(ctx, &aot_mem) && ctx.pc == 0x0890A054u) goto L_0890A054;
    return;
L_0890A054:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x0890A060u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 551u, 0x08AF6A14u>(ctx, &aot_mem) && ctx.pc == 0x0890A060u) goto L_0890A060;
    return;
L_0890A060:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(140)));
    ctx.gpr[5] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(2772), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890A2EC;
      }
      goto L_0890A080;
    }
L_0890A080:
    ctx.gpr[31] = (0x0890A088u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 224u, 0x08AECB38u>(ctx, &aot_mem) && ctx.pc == 0x0890A088u) goto L_0890A088;
    return;
L_0890A088:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x0890A094u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 551u, 0x08AF6A14u>(ctx, &aot_mem) && ctx.pc == 0x0890A094u) goto L_0890A094;
    return;
L_0890A094:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(140)));
    ctx.gpr[5] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(2776), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890A2EC;
      }
      goto L_0890A0B4;
    }
L_0890A0B4:
    ctx.gpr[31] = (0x0890A0BCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 224u, 0x08AECB38u>(ctx, &aot_mem) && ctx.pc == 0x0890A0BCu) goto L_0890A0BC;
    return;
L_0890A0BC:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x0890A0C8u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 551u, 0x08AF6A14u>(ctx, &aot_mem) && ctx.pc == 0x0890A0C8u) goto L_0890A0C8;
    return;
L_0890A0C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(140)));
    ctx.gpr[5] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(2784), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890A2EC;
      }
      goto L_0890A0E8;
    }
L_0890A0E8:
    ctx.gpr[31] = (0x0890A0F0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 224u, 0x08AECB38u>(ctx, &aot_mem) && ctx.pc == 0x0890A0F0u) goto L_0890A0F0;
    return;
L_0890A0F0:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x0890A0FCu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 551u, 0x08AF6A14u>(ctx, &aot_mem) && ctx.pc == 0x0890A0FCu) goto L_0890A0FC;
    return;
L_0890A0FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(140)));
    ctx.gpr[5] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(2788), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890A2EC;
      }
      goto L_0890A11C;
    }
L_0890A11C:
    ctx.gpr[31] = (0x0890A124u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 224u, 0x08AECB38u>(ctx, &aot_mem) && ctx.pc == 0x0890A124u) goto L_0890A124;
    return;
L_0890A124:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x0890A130u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 551u, 0x08AF6A14u>(ctx, &aot_mem) && ctx.pc == 0x0890A130u) goto L_0890A130;
    return;
L_0890A130:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(140)));
    ctx.gpr[5] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(2792), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890A2EC;
      }
      goto L_0890A150;
    }
L_0890A150:
    ctx.gpr[31] = (0x0890A158u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 224u, 0x08AECB38u>(ctx, &aot_mem) && ctx.pc == 0x0890A158u) goto L_0890A158;
    return;
L_0890A158:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x0890A164u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 551u, 0x08AF6A14u>(ctx, &aot_mem) && ctx.pc == 0x0890A164u) goto L_0890A164;
    return;
L_0890A164:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(140)));
    ctx.gpr[5] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(2800), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890A2EC;
      }
      goto L_0890A184;
    }
L_0890A184:
    ctx.gpr[31] = (0x0890A18Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 224u, 0x08AECB38u>(ctx, &aot_mem) && ctx.pc == 0x0890A18Cu) goto L_0890A18C;
    return;
L_0890A18C:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x0890A198u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 551u, 0x08AF6A14u>(ctx, &aot_mem) && ctx.pc == 0x0890A198u) goto L_0890A198;
    return;
L_0890A198:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(140)));
    ctx.gpr[5] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(2804), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890A2EC;
      }
      goto L_0890A1B8;
    }
L_0890A1B8:
    ctx.gpr[31] = (0x0890A1C0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 224u, 0x08AECB38u>(ctx, &aot_mem) && ctx.pc == 0x0890A1C0u) goto L_0890A1C0;
    return;
L_0890A1C0:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x0890A1CCu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 551u, 0x08AF6A14u>(ctx, &aot_mem) && ctx.pc == 0x0890A1CCu) goto L_0890A1CC;
    return;
L_0890A1CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(140)));
    ctx.gpr[5] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(2808), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890A2EC;
      }
      goto L_0890A1EC;
    }
L_0890A1EC:
    ctx.gpr[31] = (0x0890A1F4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 224u, 0x08AECB38u>(ctx, &aot_mem) && ctx.pc == 0x0890A1F4u) goto L_0890A1F4;
    return;
L_0890A1F4:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x0890A200u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 551u, 0x08AF6A14u>(ctx, &aot_mem) && ctx.pc == 0x0890A200u) goto L_0890A200;
    return;
L_0890A200:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(140)));
    ctx.gpr[5] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(2816), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890A2EC;
      }
      goto L_0890A220;
    }
L_0890A220:
    ctx.gpr[31] = (0x0890A228u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 224u, 0x08AECB38u>(ctx, &aot_mem) && ctx.pc == 0x0890A228u) goto L_0890A228;
    return;
L_0890A228:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x0890A234u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 551u, 0x08AF6A14u>(ctx, &aot_mem) && ctx.pc == 0x0890A234u) goto L_0890A234;
    return;
L_0890A234:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(140)));
    ctx.gpr[5] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(2820), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890A2EC;
      }
      goto L_0890A254;
    }
L_0890A254:
    ctx.gpr[31] = (0x0890A25Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 224u, 0x08AECB38u>(ctx, &aot_mem) && ctx.pc == 0x0890A25Cu) goto L_0890A25C;
    return;
L_0890A25C:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x0890A268u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 551u, 0x08AF6A14u>(ctx, &aot_mem) && ctx.pc == 0x0890A268u) goto L_0890A268;
    return;
L_0890A268:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(140)));
    ctx.gpr[5] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(2824), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890A2EC;
      }
      goto L_0890A288;
    }
L_0890A288:
    ctx.gpr[31] = (0x0890A290u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 224u, 0x08AECB38u>(ctx, &aot_mem) && ctx.pc == 0x0890A290u) goto L_0890A290;
    return;
L_0890A290:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x0890A29Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 551u, 0x08AF6A14u>(ctx, &aot_mem) && ctx.pc == 0x0890A29Cu) goto L_0890A29C;
    return;
L_0890A29C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(140)));
    ctx.gpr[5] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(2832), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_0890A2B4;
L_0890A2B4:
    ctx.gpr[31] = (0x0890A2BCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 224u, 0x08AECB38u>(ctx, &aot_mem) && ctx.pc == 0x0890A2BCu) goto L_0890A2BC;
    return;
L_0890A2BC:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x0890A2C8u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 551u, 0x08AF6A14u>(ctx, &aot_mem) && ctx.pc == 0x0890A2C8u) goto L_0890A2C8;
    return;
L_0890A2C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(140)));
    ctx.gpr[5] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(2836), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(140)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(140), ctx.gpr[4]);
    goto L_0890A2EC;
L_0890A2EC:
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    goto L_0890A300;
L_0890A300:
    ctx.gpr[6] = (ctx.gpr[29] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 14 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890A300;
      }
      goto L_0890A318;
    }
L_0890A318:
    ctx.gpr[5] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
      if (branch_taken) {
          goto L_0890A32C;
      }
      goto L_0890A324;
    }
L_0890A324:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    goto L_0890A328;
L_0890A328:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    goto L_0890A32C;
L_0890A32C:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
        goto L_08909C2C;
    }
    goto L_0890A334;
L_0890A334:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[31] = (0x0890A340u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 658u, 0x08AA314Cu>(ctx, &aot_mem) && ctx.pc == 0x0890A340u) goto L_0890A340;
    return;
L_0890A340:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x0890A34Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(15772));
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 183u, 0x088B8FBCu>(ctx, &aot_mem) && ctx.pc == 0x0890A34Cu) goto L_0890A34C;
    return;
L_0890A34C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890A380:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[18] = (2232u << 16u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(13216));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(95), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2740)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[20] = (0u | 1u);
      if (branch_taken) {
          goto L_0890A3FC;
      }
      goto L_0890A3C8;
    }
L_0890A3C8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] & 14u);
    ctx.gpr[5] = (ctx.gpr[5] ^ 4u);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890A3FC;
      }
      goto L_0890A3E4;
    }
L_0890A3E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(836)));
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0890A3FC;
      }
      goto L_0890A3F4;
    }
L_0890A3F4:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(95), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0890A3FC;
L_0890A3FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(192)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0890A460;
      }
      goto L_0890A40C;
    }
L_0890A40C:
    ctx.gpr[19] = (ctx.gpr[20] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(7108)));
    ctx.gpr[5] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 7u);
      if (branch_taken) {
          goto L_0890A428;
      }
      goto L_0890A420;
    }
L_0890A420:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0890A460;
      }
      goto L_0890A428;
    }
L_0890A428:
    ctx.gpr[31] = (0x0890A430u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x0890A430u) goto L_0890A430;
    return;
L_0890A430:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 62u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0890A444;
      }
      goto L_0890A440;
    }
L_0890A440:
    ctx.gpr[19] = (0u | 0u);
    goto L_0890A444;
L_0890A444:
    ctx.gpr[31] = (0x0890A44Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x0890A44Cu) goto L_0890A44C;
    return;
L_0890A44C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890A460;
      }
      goto L_0890A454;
    }
L_0890A454:
    ctx.gpr[31] = (0x0890A45Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x0890A45Cu) goto L_0890A45C;
    return;
L_0890A45C:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(2740), ctx.gpr[2]);
    goto L_0890A460;
L_0890A460:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(99)));
    if (ctx.gpr[4] == ctx.gpr[20]) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(145)));
        goto L_0890A478;
    }
    goto L_0890A46C;
L_0890A46C:
    if (ctx.gpr[19] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2740)));
        goto L_0890A484;
    }
    goto L_0890A474;
L_0890A474:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(145)));
    goto L_0890A478;
L_0890A478:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890A498;
      }
      goto L_0890A480;
    }
L_0890A480:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2740)));
    goto L_0890A484;
L_0890A484:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890A498;
      }
      goto L_0890A48C;
    }
L_0890A48C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_0890A7C0;
      }
      goto L_0890A498;
    }
L_0890A498:
    ctx.gpr[31] = (0x0890A4A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x0890A4A0u) goto L_0890A4A0;
    return;
L_0890A4A0:
    ctx.gpr[20] = (2230u << 16u);
    ctx.gpr[21] = (2233u << 16u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-25840));
      if (branch_taken) {
          goto L_0890A554;
      }
      goto L_0890A4B0;
    }
L_0890A4B0:
    ctx.gpr[31] = (0x0890A4B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x0890A4B8u) goto L_0890A4B8;
    return;
L_0890A4B8:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(2740), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890A560;
      }
      goto L_0890A4C4;
    }
L_0890A4C4:
    ctx.gpr[31] = (0x0890A4CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x0890A4CCu) goto L_0890A4CC;
    return;
L_0890A4CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 58u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0890A50C;
      }
      goto L_0890A4DC;
    }
L_0890A4DC:
    ctx.gpr[31] = (0x0890A4E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x0890A4E4u) goto L_0890A4E4;
    return;
L_0890A4E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 56u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0890A50C;
      }
      goto L_0890A4F4;
    }
L_0890A4F4:
    ctx.gpr[31] = (0x0890A4FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x0890A4FCu) goto L_0890A4FC;
    return;
L_0890A4FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 53u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0890A510;
      }
      goto L_0890A50C;
    }
L_0890A50C:
    ctx.gpr[17] = (0u | 1u);
    goto L_0890A510;
L_0890A510:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890A560;
      }
      goto L_0890A518;
    }
L_0890A518:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2740)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[6] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(996)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0890A560;
      }
      goto L_0890A548;
    }
L_0890A548:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2740)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(996), ctx.gpr[5]);
      if (branch_taken) {
          goto L_0890A560;
      }
      goto L_0890A554;
    }
L_0890A554:
    ctx.gpr[31] = (0x0890A55Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x0890A55Cu) goto L_0890A55C;
    return;
L_0890A55C:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(2740), ctx.gpr[2]);
    goto L_0890A560;
L_0890A560:
    ctx.gpr[19] = (0u | 1u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(-7828)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[21]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890A648;
      }
      goto L_0890A58C;
    }
L_0890A58C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890A5C4;
      }
      goto L_0890A598;
    }
L_0890A598:
    ctx.gpr[31] = (0x0890A5A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x0890A5A0u) goto L_0890A5A0;
    return;
L_0890A5A0:
    ctx.gpr[31] = (0x0890A5A8u);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1332)));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x0890A5A8u) goto L_0890A5A8;
    return;
L_0890A5A8:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x0890A5B4u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 858u, 0x0889FE9Cu>(ctx, &aot_mem) && ctx.pc == 0x0890A5B4u) goto L_0890A5B4;
    return;
L_0890A5B4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890A648;
      }
      goto L_0890A5BC;
    }
L_0890A5BC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_0890A648;
      }
      goto L_0890A5C4;
    }
L_0890A5C4:
    ctx.gpr[31] = (0x0890A5CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x0890A5CCu) goto L_0890A5CC;
    return;
L_0890A5CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(604)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890A648;
      }
      goto L_0890A5D8;
    }
L_0890A5D8:
    ctx.gpr[31] = (0x0890A5E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x0890A5E0u) goto L_0890A5E0;
    return;
L_0890A5E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 58u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0890A620;
      }
      goto L_0890A5F0;
    }
L_0890A5F0:
    ctx.gpr[31] = (0x0890A5F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x0890A5F8u) goto L_0890A5F8;
    return;
L_0890A5F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 56u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0890A620;
      }
      goto L_0890A608;
    }
L_0890A608:
    ctx.gpr[31] = (0x0890A610u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x0890A610u) goto L_0890A610;
    return;
L_0890A610:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 53u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0890A648;
      }
      goto L_0890A620;
    }
L_0890A620:
    ctx.gpr[31] = (0x0890A628u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x0890A628u) goto L_0890A628;
    return;
L_0890A628:
    ctx.gpr[31] = (0x0890A630u);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(604)));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x0890A630u) goto L_0890A630;
    return;
L_0890A630:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x0890A63Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 858u, 0x0889FE9Cu>(ctx, &aot_mem) && ctx.pc == 0x0890A63Cu) goto L_0890A63C;
    return;
L_0890A63C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890A648;
      }
      goto L_0890A644;
    }
L_0890A644:
    ctx.gpr[19] = (0u | 0u);
    goto L_0890A648;
L_0890A648:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(-7828)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[21]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890A7C0;
      }
      goto L_0890A670;
    }
L_0890A670:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    ctx.gpr[6] = (0u | 58u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0890A6E4;
      }
      goto L_0890A680;
    }
L_0890A680:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890A6E4;
      }
      goto L_0890A688;
    }
L_0890A688:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890A6E4;
      }
      goto L_0890A690;
    }
L_0890A690:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(204)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0890A6E4;
      }
      goto L_0890A6A8;
    }
L_0890A6A8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(2740), ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890A6E4;
      }
      goto L_0890A6B8;
    }
L_0890A6B8:
    ctx.gpr[31] = (0x0890A6C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x0890A6C0u) goto L_0890A6C0;
    return;
L_0890A6C0:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(2740), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(-7828)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[21]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_0890A6E4;
L_0890A6E4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    ctx.gpr[6] = (0u | 56u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0890A704;
      }
      goto L_0890A6F4;
    }
L_0890A6F4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    ctx.gpr[6] = (0u | 53u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0890A768;
      }
      goto L_0890A704;
    }
L_0890A704:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890A768;
      }
      goto L_0890A70C;
    }
L_0890A70C:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
      if (branch_taken) {
          goto L_0890A734;
      }
      goto L_0890A714;
    }
L_0890A714:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(204)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0890A734;
      }
      goto L_0890A72C;
    }
L_0890A72C:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(2740), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    goto L_0890A734;
L_0890A734:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890A768;
      }
      goto L_0890A73C;
    }
L_0890A73C:
    ctx.gpr[31] = (0x0890A744u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x0890A744u) goto L_0890A744;
    return;
L_0890A744:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(2740), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(-7828)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[21]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_0890A768;
L_0890A768:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    ctx.gpr[6] = (0u | 60u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0890A7A4;
      }
      goto L_0890A778;
    }
L_0890A778:
    ctx.gpr[31] = (0x0890A780u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x0890A780u) goto L_0890A780;
    return;
L_0890A780:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(2740), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(-7828)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[21]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_0890A7A4;
L_0890A7A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 57u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0890A7C0;
      }
      goto L_0890A7B4;
    }
L_0890A7B4:
    ctx.gpr[31] = (0x0890A7BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x0890A7BCu) goto L_0890A7BC;
    return;
L_0890A7BC:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(2740), ctx.gpr[2]);
    goto L_0890A7C0;
L_0890A7C0:
    ctx.gpr[31] = (0x0890A7C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x0890A7C8u) goto L_0890A7C8;
    return;
L_0890A7C8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890A82C;
      }
      goto L_0890A7D0;
    }
L_0890A7D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2740)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 4u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890A82C;
      }
      goto L_0890A7F0;
    }
L_0890A7F0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(204)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0890A82C;
      }
      goto L_0890A808;
    }
L_0890A808:
    ctx.gpr[31] = (0x0890A810u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x0890A810u) goto L_0890A810;
    return;
L_0890A810:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 62u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0890A82C;
      }
      goto L_0890A820;
    }
L_0890A820:
    ctx.gpr[31] = (0x0890A828u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x0890A828u) goto L_0890A828;
    return;
L_0890A828:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(2740), ctx.gpr[2]);
    goto L_0890A82C;
L_0890A82C:
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
L_0890A854:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(22264)));
    ctx.fpr[14] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(22268), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(22260)));
    ctx.fpr[14] = ctx.fpr[14] / ctx.fpr[15];
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(22272), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(22276), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16672u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(22280), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16014u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 14571u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(22284), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(22288)));
    ctx.gpr[4] = (15744u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(22292), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(22300)));
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(22308), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(22304)));
    ctx.gpr[4] = (16281u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(22312), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(22316), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16268u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(22320), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    ctx.gpr[31] = (0x0890A950u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 41u, 0x08A28764u>(ctx, &aot_mem) && ctx.pc == 0x0890A950u) goto L_0890A950;
    return;
L_0890A950:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(400));
    ctx.gpr[7] = (2224u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(3668));
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[31] = (0x0890A968u);
    ctx.gpr[6] = (0u | 656u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 341u, 0x08AF5A1Cu>(ctx, &aot_mem) && ctx.pc == 0x0890A968u) goto L_0890A968;
    return;
L_0890A968:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(2744));
    ctx.gpr[7] = (2224u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(3656));
    ctx.gpr[5] = (0u | 4u);
    ctx.gpr[31] = (0x0890A980u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 341u, 0x08AF5A1Cu>(ctx, &aot_mem) && ctx.pc == 0x0890A980u) goto L_0890A980;
    return;
L_0890A980:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(6832), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(6836)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(6836), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(6928), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(6932)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(6932), ctx.gpr[4]);
    ctx.gpr[31] = (0x0890A9ACu);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(7128));
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 348u, 0x088E9EB0u>(ctx, &aot_mem) && ctx.pc == 0x0890A9ACu) goto L_0890A9AC;
    return;
L_0890A9AC:
    ctx.gpr[31] = (0x0890A9B4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08908F00;
L_0890A9B4:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x0890A9C0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(24180));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 251u, 0x08AF5420u>(ctx, &aot_mem) && ctx.pc == 0x0890A9C0u) goto L_0890A9C0;
    return;
L_0890A9C0:
    ctx.gpr[4] = (15733u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 49807u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(22608), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (15692u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(22608));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (48896u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2275u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(2480), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (48972u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2480));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (16025u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (15948u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2275u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(2496), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (48716u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2496));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890AA60:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x0890AA80u);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 92u, 0x0890C78Cu>(ctx, &aot_mem) && ctx.pc == 0x0890AA80u) goto L_0890AA80;
    return;
L_0890AA80:
    ctx.gpr[5] = (2225u << 16u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0890AA94u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16584));
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 395u, 0x08A4B388u>(ctx, &aot_mem) && ctx.pc == 0x0890AA94u) goto L_0890AA94;
    return;
L_0890AA94:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0890AAA0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 29u, 0x0890C2B8u>(ctx, &aot_mem) && ctx.pc == 0x0890AAA0u) goto L_0890AAA0;
    return;
L_0890AAA0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890AAB4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[31]);
    ctx.gpr[31] = (0x0890AAE4u);
    ctx.gpr[5] = (0u | 1u);
    goto L_0890B834;
L_0890AAE4:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[18] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x0890AB08u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 702u, 0x089BF670u>(ctx, &aot_mem) && ctx.pc == 0x0890AB08u) goto L_0890AB08;
    return;
L_0890AB08:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[4] = (49864u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0890AB58;
      }
      goto L_0890AB24;
    }
L_0890AB24:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0890AB30u);
    ctx.gpr[5] = (0u | 3u);
    goto L_0890B834;
L_0890AB30:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[19] = (2232u << 16u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(5992));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] & 1u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0890AB74;
      }
      goto L_0890AB50;
    }
L_0890AB50:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890ABB4;
      }
      goto L_0890AB58;
    }
L_0890AB58:
    ctx.gpr[6] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[31] = (0x0890AB6Cu);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(16600));
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 347u, 0x08A4B014u>(ctx, &aot_mem) && ctx.pc == 0x0890AB6Cu) goto L_0890AB6C;
    return;
L_0890AB6C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890AC8C;
      }
      goto L_0890AB74;
    }
L_0890AB74:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-30860)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(294)));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0890ABCC;
      }
      goto L_0890AB84;
    }
L_0890AB84:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-30860)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(272)));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0890ABCC;
      }
      goto L_0890AB94;
    }
L_0890AB94:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-30860)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(274)));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0890ABCC;
      }
      goto L_0890ABA4;
    }
L_0890ABA4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-30860)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(276)));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0890ABCC;
      }
      goto L_0890ABB4;
    }
L_0890ABB4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-30860)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(294)));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0890AC00;
      }
      goto L_0890ABC4;
    }
L_0890ABC4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-30860)));
      if (branch_taken) {
          goto L_0890ABD4;
      }
      goto L_0890ABCC;
    }
L_0890ABCC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_0890AC8C;
      }
      goto L_0890ABD4;
    }
L_0890ABD4:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(272)));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0890AC00;
      }
      goto L_0890ABE0;
    }
L_0890ABE0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-30860)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(274)));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0890AC00;
      }
      goto L_0890ABF0;
    }
L_0890ABF0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-30860)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(276)));
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0890AC04;
      }
      goto L_0890AC00;
    }
L_0890AC00:
    ctx.gpr[20] = (ctx.gpr[17] | 0u);
    goto L_0890AC04;
L_0890AC04:
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (0u | 2u);
    if (ctx.gpr[20] != 0u) {
    ctx.gpr[5] = (0u | 19u);
        goto L_0890AC1C;
    }
    goto L_0890AC1C;
L_0890AC1C:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[31] = (0x0890AC3Cu);
    ctx.gpr[10] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 206u, 0x08A84F08u>(ctx, &aot_mem) && ctx.pc == 0x0890AC3Cu) goto L_0890AC3C;
    return;
L_0890AC3C:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0890AC4Cu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_0890AA60;
L_0890AC4C:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x0890AC58u);
    ctx.gpr[4] = (0u | 132u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x0890AC58u) goto L_0890AC58;
    return;
L_0890AC58:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_0890AC70;
      }
      goto L_0890AC64;
    }
L_0890AC64:
    ctx.gpr[31] = (0x0890AC6Cu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 414u, 0x089198E0u>(ctx, &aot_mem) && ctx.pc == 0x0890AC6Cu) goto L_0890AC6C;
    return;
L_0890AC6C:
    ctx.gpr[16] = (ctx.gpr[20] | 0u);
    goto L_0890AC70;
L_0890AC70:
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(116));
    ctx.gpr[31] = (0x0890AC7Cu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 57u, 0x089C0478u>(ctx, &aot_mem) && ctx.pc == 0x0890AC7Cu) goto L_0890AC7C;
    return;
L_0890AC7C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0890AC88u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 426u, 0x08A5A2CCu>(ctx, &aot_mem) && ctx.pc == 0x0890AC88u) goto L_0890AC88;
    return;
L_0890AC88:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    goto L_0890AC8C;
L_0890AC8C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890ACB0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    ctx.gpr[19] = (2232u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(5992));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(100)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    goto L_0890ACEC;
L_0890ACEC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(112)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[6] >> 30u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
        goto L_0890AD1C;
    }
    goto L_0890AD1C;
L_0890AD1C:
    ctx.gpr[4] = (ctx.gpr[18] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890ADA0;
      }
      goto L_0890AD28;
    }
L_0890AD28:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0890AD34u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 646u, 0x088A7DB8u>(ctx, &aot_mem) && ctx.pc == 0x0890AD34u) goto L_0890AD34;
    return;
L_0890AD34:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890AD94;
      }
      goto L_0890AD3C;
    }
L_0890AD3C:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0890AD48u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 646u, 0x088A7DB8u>(ctx, &aot_mem) && ctx.pc == 0x0890AD48u) goto L_0890AD48;
    return;
L_0890AD48:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(96)));
        goto L_0890AD78;
    }
    goto L_0890AD58;
L_0890AD58:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x0890AD68u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 206u, 0x08AC5834u>(ctx, &aot_mem) && ctx.pc == 0x0890AD68u) goto L_0890AD68;
    return;
L_0890AD68:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(96)));
    goto L_0890AD78;
L_0890AD78:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(102)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890AD94;
      }
      goto L_0890AD8C;
    }
L_0890AD8C:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[17] & 255u);
    goto L_0890AD94;
L_0890AD94:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(100)));
      if (branch_taken) {
          goto L_0890ACEC;
      }
      goto L_0890ADA0;
    }
L_0890ADA0:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890ADE8;
      }
      goto L_0890ADA8;
    }
L_0890ADA8:
    ctx.gpr[5] = (2275u << 16u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[7] = (0u | 19u);
    ctx.gpr[8] = (0u | 20u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-30336));
    goto L_0890ADBC;
L_0890ADBC:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(50)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_0890ADD0;
      }
      goto L_0890ADC8;
    }
L_0890ADC8:
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_0890ADD8;
      }
      goto L_0890ADD0;
    }
L_0890ADD0:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[17] & 255u);
    goto L_0890ADD8;
L_0890ADD8:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 336 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(96));
      if (branch_taken) {
          goto L_0890ADBC;
      }
      goto L_0890ADE8;
    }
L_0890ADE8:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0890ADF8u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    goto L_0890BB6C;
L_0890ADF8:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890AE20:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (2225u << 16u);
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x0890AE40u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(16584));
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 398u, 0x08A4B3B8u>(ctx, &aot_mem) && ctx.pc == 0x0890AE40u) goto L_0890AE40;
    return;
L_0890AE40:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890AE68;
      }
      goto L_0890AE4C;
    }
L_0890AE4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[16] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_0890AE68;
      }
      goto L_0890AE5C;
    }
L_0890AE5C:
    ctx.gpr[31] = (0x0890AE64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 159u, 0x08A8180Cu>(ctx, &aot_mem) && ctx.pc == 0x0890AE64u) goto L_0890AE64;
    return;
L_0890AE64:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    goto L_0890AE68;
L_0890AE68:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890AE80:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[6] = (2225u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x0890AEA8u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(16584));
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 398u, 0x08A4B3B8u>(ctx, &aot_mem) && ctx.pc == 0x0890AEA8u) goto L_0890AEA8;
    return;
L_0890AEA8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890AEFC;
      }
      goto L_0890AEB4;
    }
L_0890AEB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0890AEFC;
      }
      goto L_0890AEC4;
    }
L_0890AEC4:
    ctx.gpr[31] = (0x0890AECCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 227u, 0x08A822ACu>(ctx, &aot_mem) && ctx.pc == 0x0890AECCu) goto L_0890AECC;
    return;
L_0890AECC:
    ctx.gpr[4] = (ctx.gpr[2] << 5u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2275u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-30336));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(51)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0890AEF4u);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    goto L_0890BE40;
L_0890AEF4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_0890AF00;
      }
      goto L_0890AEFC;
    }
L_0890AEFC:
    ctx.gpr[2] = (0u | 0u);
    goto L_0890AF00;
L_0890AF00:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890AF14:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[6] = (2225u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x0890AF3Cu);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(16584));
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 398u, 0x08A4B3B8u>(ctx, &aot_mem) && ctx.pc == 0x0890AF3Cu) goto L_0890AF3C;
    return;
L_0890AF3C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890AF88;
      }
      goto L_0890AF48;
    }
L_0890AF48:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0890AF88;
      }
      goto L_0890AF58;
    }
L_0890AF58:
    ctx.gpr[31] = (0x0890AF60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 227u, 0x08A822ACu>(ctx, &aot_mem) && ctx.pc == 0x0890AF60u) goto L_0890AF60;
    return;
L_0890AF60:
    ctx.gpr[4] = (ctx.gpr[2] << 5u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (2275u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-30336));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[31] = (0x0890AF80u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 700u, 0x089BF64Cu>(ctx, &aot_mem) && ctx.pc == 0x0890AF80u) goto L_0890AF80;
    return;
L_0890AF80:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_0890AF8C;
      }
      goto L_0890AF88;
    }
L_0890AF88:
    ctx.gpr[2] = (0u | 0u);
    goto L_0890AF8C;
L_0890AF8C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890AFA0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x0890AFB4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-11072));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 212u, 0x08A82188u>(ctx, &aot_mem) && ctx.pc == 0x0890AFB4u) goto L_0890AFB4;
    return;
L_0890AFB4:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890AFC4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-21000)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2227u << 16u);
      if (branch_taken) {
          goto L_0890AFF0;
      }
      goto L_0890AFE0;
    }
L_0890AFE0:
    ctx.gpr[31] = (0x0890AFE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 315u, 0x08AF96A0u>(ctx, &aot_mem) && ctx.pc == 0x0890AFE8u) goto L_0890AFE8;
    return;
L_0890AFE8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-21000)));
    ctx.gpr[5] = (2227u << 16u);
    goto L_0890AFF0;
L_0890AFF0:
    ctx.gpr[6] = (2225u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(24220));
    ctx.gpr[31] = (0x0890B000u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(16584));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 5u, 0x0883C058u>(ctx, &aot_mem) && ctx.pc == 0x0890B000u) goto L_0890B000;
    return;
L_0890B000:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-21000)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2227u << 16u);
      if (branch_taken) {
          goto L_0890B01C;
      }
      goto L_0890B00C;
    }
L_0890B00C:
    ctx.gpr[31] = (0x0890B014u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 315u, 0x08AF96A0u>(ctx, &aot_mem) && ctx.pc == 0x0890B014u) goto L_0890B014;
    return;
L_0890B014:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-21000)));
    ctx.gpr[5] = (2227u << 16u);
    goto L_0890B01C;
L_0890B01C:
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x0890B028u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(24252));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 787u, 0x0883BFF4u>(ctx, &aot_mem) && ctx.pc == 0x0890B028u) goto L_0890B028;
    return;
L_0890B028:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890B038:
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24196)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24192)));
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
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(24200), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = ctx.fpr[16] / ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(24208), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[18] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(24204), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(24212), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(24216), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890B0B0:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < -9999 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890B0E0;
      }
      goto L_0890B0BC;
    }
L_0890B0BC:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < -10000 ? 1u : 0u);
    if (ctx.gpr[7] == 0u) {
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < -9999 ? 1u : 0u);
        goto L_0890B0F0;
    }
    goto L_0890B0CC;
L_0890B0CC:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < -10001 ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
        goto L_0890B104;
    }
    goto L_0890B0D8;
L_0890B0D8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[4] + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          goto L_0890B13C;
      }
      goto L_0890B0E0;
    }
L_0890B0E0:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[5] << 3u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_0890B13C;
      }
      goto L_0890B0F0;
    }
L_0890B0F0:
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
        goto L_0890B104;
    }
    goto L_0890B0F8;
L_0890B0F8:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(44));
      if (branch_taken) {
          goto L_0890B13C;
      }
      goto L_0890B104;
    }
L_0890B104:
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-10001));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(7)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0890B134;
      }
      goto L_0890B124;
    }
L_0890B124:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[2] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(8));
    goto L_0890B134;
L_0890B134:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890B13C;
      }
      goto L_0890B13C;
    }
L_0890B13C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890B144:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) <= 0;
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_0890B170;
      }
      goto L_0890B15C;
    }
L_0890B15C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[2] = (ctx.gpr[5] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-8));
      if (branch_taken) {
          goto L_0890B188;
      }
      goto L_0890B170;
    }
L_0890B170:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x0890B180u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    goto L_0890B0B0;
L_0890B180:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890B188;
      }
      goto L_0890B188;
    }
L_0890B188:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890B194:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) <= 0;
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_0890B1DC;
      }
      goto L_0890B1AC;
    }
L_0890B1AC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[2] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.gpr[4] = (ctx.gpr[2] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890B1D4;
      }
      goto L_0890B1CC;
    }
L_0890B1CC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0890B1EC;
      }
      goto L_0890B1D4;
    }
L_0890B1D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890B1EC;
      }
      goto L_0890B1DC;
    }
L_0890B1DC:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x0890B1ECu);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    goto L_0890B0B0;
L_0890B1EC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890B1F8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_0890B254;
      }
      goto L_0890B240;
    }
L_0890B240:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0890B24Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 265u, 0x088B9728u>(ctx, &aot_mem) && ctx.pc == 0x0890B24Cu) goto L_0890B24C;
    return;
L_0890B24C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    goto L_0890B254;
L_0890B254:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890B268:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 3u));
    ctx.gpr[7] = (ctx.gpr[7] >> 29u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 3u));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < 2049 ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890B2B0;
      }
      goto L_0890B2A8;
    }
L_0890B2A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0890B2F8;
      }
      goto L_0890B2B0;
    }
L_0890B2B0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (ctx.gpr[5] << 3u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890B2D4;
      }
      goto L_0890B2C8;
    }
L_0890B2C8:
    ctx.gpr[31] = (0x0890B2D0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 265u, 0x088B9728u>(ctx, &aot_mem) && ctx.pc == 0x0890B2D0u) goto L_0890B2D0;
    return;
L_0890B2D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    goto L_0890B2D4;
L_0890B2D4:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[16] = (ctx.gpr[5] + ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890B2F4;
      }
      goto L_0890B2F0;
    }
L_0890B2F0:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    goto L_0890B2F4;
L_0890B2F4:
    ctx.gpr[2] = (0u | 1u);
    goto L_0890B2F8;
L_0890B2F8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890B30C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[8] = (ctx.gpr[6] << 3u);
    ctx.gpr[7] = (ctx.gpr[7] - ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_0890B370;
      }
      goto L_0890B32C;
    }
L_0890B32C:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[7]);
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(0), ctx.gpr[11]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (ctx.gpr[10] + static_cast<std::uint32_t>(4));
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[10]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[9]);
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_0890B32C;
      }
      goto L_0890B370;
    }
L_0890B370:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890B378:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890B3A8;
      }
      goto L_0890B3A0;
    }
L_0890B3A0:
    ctx.gpr[31] = (0x0890B3A8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 102u, 0x0891C7F4u>(ctx, &aot_mem) && ctx.pc == 0x0890B3A8u) goto L_0890B3A8;
    return;
L_0890B3A8:
    ctx.gpr[31] = (0x0890B3B0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 106u, 0x089FD15Cu>(ctx, &aot_mem) && ctx.pc == 0x0890B3B0u) goto L_0890B3B0;
    return;
L_0890B3B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (0u | 8u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890B3DC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 3u));
    ctx.gpr[5] = (ctx.gpr[5] >> 29u);
    ctx.gpr[2] = (ctx.gpr[4] + ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 3u));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890B3FC:
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) < 0;
    ctx.gpr[5] = (ctx.gpr[7] << 3u);
      if (branch_taken) {
          goto L_0890B454;
      }
      goto L_0890B40C;
    }
L_0890B40C:
    ctx.gpr[7] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[7] = (ctx.gpr[7] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[7] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_0890B44C;
      }
      goto L_0890B424;
    }
L_0890B424:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    goto L_0890B428;
L_0890B428:
    ctx.gpr[8] = (ctx.gpr[6] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[8] = (ctx.gpr[8] < ctx.gpr[6] ? 1u : 0u);
    if (ctx.gpr[8] != 0u) {
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
        goto L_0890B428;
    }
    goto L_0890B44C;
L_0890B44C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
      if (branch_taken) {
          goto L_0890B460;
      }
      goto L_0890B454;
    }
L_0890B454:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    goto L_0890B460;
L_0890B460:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890B468:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x0890B47Cu);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_0890B144;
L_0890B47C:
    ctx.gpr[5] = (ctx.gpr[2] + static_cast<std::uint32_t>(8));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[7] = (ctx.gpr[6] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890B4CC;
      }
      goto L_0890B494;
    }
L_0890B494:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    goto L_0890B498;
L_0890B498:
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[7] = (ctx.gpr[6] < ctx.gpr[4] ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
        goto L_0890B498;
    }
    goto L_0890B4CC;
L_0890B4CC:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890B4E4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x0890B4F8u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_0890B144;
L_0890B4F8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[7] = (ctx.gpr[6] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890B540;
      }
      goto L_0890B510;
    }
L_0890B510:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[8] = (ctx.gpr[6] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_0890B510;
      }
      goto L_0890B53C;
    }
L_0890B53C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    goto L_0890B540;
L_0890B540:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890B56C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0890B598u);
    ctx.gpr[17] = (ctx.gpr[6] + static_cast<std::uint32_t>(-8));
    goto L_0890B144;
L_0890B598:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890B5D4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x0890B5F4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0890B144;
L_0890B5F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[2] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890B630:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x0890B640u);
    // nop
    goto L_0890B194;
L_0890B640:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
        goto L_0890B650;
    }
    goto L_0890B650;
L_0890B650:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890B65C:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    ctx.gpr[4] = (ctx.gpr[5] << 2u);
      if (branch_taken) {
          goto L_0890B674;
      }
      goto L_0890B668;
    }
L_0890B668:
    ctx.gpr[2] = (2225u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(16648));
      if (branch_taken) {
          goto L_0890B684;
      }
      goto L_0890B674;
    }
L_0890B674:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(26328));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_0890B684;
L_0890B684:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890B68C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x0890B69Cu);
    // nop
    goto L_0890B194;
L_0890B69C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0890B6CC;
      }
      goto L_0890B6A8;
    }
L_0890B6A8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0890B6CC;
      }
      goto L_0890B6B8;
    }
L_0890B6B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(6)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890B6CC;
      }
      goto L_0890B6C8;
    }
L_0890B6C8:
    ctx.gpr[2] = (0u | 1u);
    goto L_0890B6CC;
L_0890B6CC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890B6D8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x0890B6ECu);
    // nop
    goto L_0890B194;
L_0890B6EC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_0890B71C;
      }
      goto L_0890B6F8;
    }
L_0890B6F8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 3u);
    if (ctx.gpr[5] == ctx.gpr[6]) {
    ctx.gpr[16] = (0u | 1u);
        goto L_0890B71C;
    }
    goto L_0890B708;
L_0890B708:
    ctx.gpr[31] = (0x0890B710u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0051_entry, 51u, 106u, 0x088D19D8u>(ctx, &aot_mem) && ctx.pc == 0x0890B710u) goto L_0890B710;
    return;
L_0890B710:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890B71C;
      }
      goto L_0890B718;
    }
L_0890B718:
    ctx.gpr[16] = (0u | 1u);
    goto L_0890B71C;
L_0890B71C:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890B730:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x0890B740u);
    // nop
    goto L_0890B630;
L_0890B740:
    ctx.gpr[4] = (ctx.gpr[2] ^ 4u);
    ctx.gpr[5] = (ctx.gpr[2] ^ 3u);
    ctx.gpr[2] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[2] = (ctx.gpr[2] | ctx.gpr[4]);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890B760:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x0890B780u);
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    goto L_0890B194;
L_0890B780:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0890B790u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_0890B194;
L_0890B790:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_0890B7A0;
      }
      goto L_0890B798;
    }
L_0890B798:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0890B7A8;
      }
      goto L_0890B7A0;
    }
L_0890B7A0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0890B7B0;
      }
      goto L_0890B7A8;
    }
L_0890B7A8:
    ctx.gpr[31] = (0x0890B7B0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 186u, 0x08A59128u>(ctx, &aot_mem) && ctx.pc == 0x0890B7B0u) goto L_0890B7B0;
    return;
L_0890B7B0:
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
L_0890B7C8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x0890B7E8u);
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    goto L_0890B194;
L_0890B7E8:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0890B7F8u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_0890B194;
L_0890B7F8:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_0890B808;
      }
      goto L_0890B800;
    }
L_0890B800:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0890B810;
      }
      goto L_0890B808;
    }
L_0890B808:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0890B81C;
      }
      goto L_0890B810;
    }
L_0890B810:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0890B81Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0051_entry, 51u, 261u, 0x088D25DCu>(ctx, &aot_mem) && ctx.pc == 0x0890B81Cu) goto L_0890B81C;
    return;
L_0890B81C:
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
L_0890B834:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x0890B844u);
    // nop
    goto L_0890B194;
L_0890B844:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890B87C;
      }
      goto L_0890B850;
    }
L_0890B850:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0890B874;
      }
      goto L_0890B860;
    }
L_0890B860:
    ctx.gpr[31] = (0x0890B868u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0051_entry, 51u, 106u, 0x088D19D8u>(ctx, &aot_mem) && ctx.pc == 0x0890B868u) goto L_0890B868;
    return;
L_0890B868:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890B87C;
      }
      goto L_0890B874;
    }
L_0890B874:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_0890B880;
      }
      goto L_0890B87C;
    }
L_0890B87C:
    ctx.fpr[0] = std::bit_cast<float>(0u);
    goto L_0890B880;
L_0890B880:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890B88C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x0890B89Cu);
    // nop
    goto L_0890B194;
L_0890B89C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0890B8CC;
      }
      goto L_0890B8A8;
    }
L_0890B8A8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[6] = (0u | 1u);
      if (branch_taken) {
          goto L_0890B8CC;
      }
      goto L_0890B8B4;
    }
L_0890B8B4:
    if (ctx.gpr[5] != ctx.gpr[6]) {
    ctx.gpr[2] = (0u | 1u);
        goto L_0890B8CC;
    }
    goto L_0890B8BC;
L_0890B8BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890B8CC;
      }
      goto L_0890B8C8;
    }
L_0890B8C8:
    ctx.gpr[2] = (0u | 1u);
    goto L_0890B8CC;
L_0890B8CC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890B8D8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x0890B8F4u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_0890B194;
L_0890B8F4:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890B91C;
      }
      goto L_0890B900;
    }
L_0890B900:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0890B924;
      }
      goto L_0890B910;
    }
L_0890B910:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_0890B96C;
      }
      goto L_0890B91C;
    }
L_0890B91C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0890B96C;
      }
      goto L_0890B924;
    }
L_0890B924:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0890B934u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0051_entry, 51u, 114u, 0x088D1A54u>(ctx, &aot_mem) && ctx.pc == 0x0890B934u) goto L_0890B934;
    return;
L_0890B934:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890B944;
      }
      goto L_0890B93C;
    }
L_0890B93C:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    goto L_0890B944;
L_0890B944:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890B964;
      }
      goto L_0890B95C;
    }
L_0890B95C:
    ctx.gpr[31] = (0x0890B964u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 102u, 0x0891C7F4u>(ctx, &aot_mem) && ctx.pc == 0x0890B964u) goto L_0890B964;
    return;
L_0890B964:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_0890B96C;
      }
      goto L_0890B96C;
    }
L_0890B96C:
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
L_0890B984:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x0890B99Cu);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_0890B194;
L_0890B99C:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890B9C4;
      }
      goto L_0890B9A8;
    }
L_0890B9A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0890B9CC;
      }
      goto L_0890B9B8;
    }
L_0890B9B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_0890B9F4;
      }
      goto L_0890B9C4;
    }
L_0890B9C4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0890B9F4;
      }
      goto L_0890B9CC;
    }
L_0890B9CC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x0890B9DCu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0051_entry, 51u, 114u, 0x088D1A54u>(ctx, &aot_mem) && ctx.pc == 0x0890B9DCu) goto L_0890B9DC;
    return;
L_0890B9DC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890B9EC;
      }
      goto L_0890B9E4;
    }
L_0890B9E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    goto L_0890B9EC;
L_0890B9EC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_0890B9F4;
      }
      goto L_0890B9F4;
    }
L_0890B9F4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890BA08:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x0890BA18u);
    // nop
    goto L_0890B194;
L_0890BA18:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890BA48;
      }
      goto L_0890BA24;
    }
L_0890BA24:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (0u | 7u);
      if (branch_taken) {
          goto L_0890BA50;
      }
      goto L_0890BA34;
    }
L_0890BA34:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890BA64;
      }
      goto L_0890BA40;
    }
L_0890BA40:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0890BA68;
      }
      goto L_0890BA48;
    }
L_0890BA48:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0890BA68;
      }
      goto L_0890BA50;
    }
L_0890BA50:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0890BA40;
      }
      goto L_0890BA58;
    }
L_0890BA58:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_0890BA68;
      }
      goto L_0890BA64;
    }
L_0890BA64:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    goto L_0890BA68;
L_0890BA68:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890BA74:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x0890BA84u);
    // nop
    goto L_0890B194;
L_0890BA84:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890BAA0;
      }
      goto L_0890BA90;
    }
L_0890BA90:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 8u);
    if (ctx.gpr[5] == ctx.gpr[6]) {
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
        goto L_0890BAA8;
    }
    goto L_0890BAA0;
L_0890BAA0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0890BAA8;
      }
      goto L_0890BAA8;
    }
L_0890BAA8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890BAB4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x0890BAD0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    goto L_0890B194;
L_0890BAD0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890BB08;
      }
      goto L_0890BADC;
    }
L_0890BADC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2));
    ctx.gpr[6] = (ctx.gpr[5] < static_cast<std::uint32_t>(7) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890BB3C;
      }
      goto L_0890BAF0;
    }
L_0890BAF0:
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[1] = (2225u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[5]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(16680)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890BB08:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0890BB40;
      }
      goto L_0890BB10;
    }
L_0890BB10:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_0890BB40;
      }
      goto L_0890BB18;
    }
L_0890BB18:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_0890BB40;
      }
      goto L_0890BB20;
    }
L_0890BB20:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_0890BB40;
      }
      goto L_0890BB28;
    }
L_0890BB28:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0890BB34u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_0890BA08;
L_0890BB34:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890BB40;
      }
      goto L_0890BB3C;
    }
L_0890BB3C:
    ctx.gpr[2] = (0u | 0u);
    goto L_0890BB40;
L_0890BB40:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890BB54:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890BB6C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890BB8C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(36)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[7] ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_0890BBCC;
      }
      goto L_0890BBC4;
    }
L_0890BBC4:
    ctx.gpr[31] = (0x0890BBCCu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 102u, 0x0891C7F4u>(ctx, &aot_mem) && ctx.pc == 0x0890BBCCu) goto L_0890BBCC;
    return;
L_0890BBCC:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (0u | 4u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0890BBE8u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 555u, 0x0891713Cu>(ctx, &aot_mem) && ctx.pc == 0x0890BBE8u) goto L_0890BBE8;
    return;
L_0890BBE8:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
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
L_0890BC14:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_0890BC40;
      }
      goto L_0890BC30;
    }
L_0890BC30:
    ctx.gpr[31] = (0x0890BC38u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_0890BB54;
L_0890BC38:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890BC58;
      }
      goto L_0890BC40;
    }
L_0890BC40:
    ctx.gpr[31] = (0x0890BC48u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 498u, 0x08AEDD14u>(ctx, &aot_mem) && ctx.pc == 0x0890BC48u) goto L_0890BC48;
    return;
L_0890BC48:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0890BC58u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    goto L_0890BB8C;
L_0890BC58:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890BC6C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(36)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[7] ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_0890BCA8;
      }
      goto L_0890BCA0;
    }
L_0890BCA0:
    ctx.gpr[31] = (0x0890BCA8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 102u, 0x0891C7F4u>(ctx, &aot_mem) && ctx.pc == 0x0890BCA8u) goto L_0890BCA8;
    return;
L_0890BCA8:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0890BCB8u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 241u, 0x08A594CCu>(ctx, &aot_mem) && ctx.pc == 0x0890BCB8u) goto L_0890BCB8;
    return;
L_0890BCB8:
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
L_0890BCD0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[11]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890BD20;
      }
      goto L_0890BD18;
    }
L_0890BD18:
    ctx.gpr[31] = (0x0890BD20u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 102u, 0x0891C7F4u>(ctx, &aot_mem) && ctx.pc == 0x0890BD20u) goto L_0890BD20;
    return;
L_0890BD20:
    ctx.gpr[4] = (0u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    ctx.gpr[6] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(8));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0890BD3Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 241u, 0x08A594CCu>(ctx, &aot_mem) && ctx.pc == 0x0890BD3Cu) goto L_0890BD3C;
    return;
L_0890BD3C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890BD50:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(36)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[18] = (ctx.gpr[6] << 3u);
    ctx.gpr[4] = (ctx.gpr[8] < ctx.gpr[7] ? 1u : 0u);
    ctx.gpr[19] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_0890BD94;
      }
      goto L_0890BD8C;
    }
L_0890BD8C:
    ctx.gpr[31] = (0x0890BD94u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 102u, 0x0891C7F4u>(ctx, &aot_mem) && ctx.pc == 0x0890BD94u) goto L_0890BD94;
    return;
L_0890BD94:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0890BDA0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 127u, 0x08878A0Cu>(ctx, &aot_mem) && ctx.pc == 0x0890BDA0u) goto L_0890BDA0;
    return;
L_0890BDA0:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[18]);
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[16] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_0890BE0C;
      }
      goto L_0890BDC4;
    }
L_0890BDC4:
    ctx.gpr[18] = (ctx.gpr[19] << 3u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[18]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(16));
    goto L_0890BDD0;
L_0890BDD0:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(-1));
    ctx.gpr[16] = (ctx.gpr[19] | 0u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-8));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-8));
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_0890BDD0;
      }
      goto L_0890BE0C;
    }
L_0890BE0C:
    ctx.gpr[6] = (0u | 6u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
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
L_0890BE40:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890BE64:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890BE84:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x0890BEA4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0890B144;
L_0890BEA4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0890BEBCu);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0051_entry, 51u, 174u, 0x088D1FB0u>(ctx, &aot_mem) && ctx.pc == 0x0890BEBCu) goto L_0890BEBC;
    return;
L_0890BEBC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[2] + static_cast<std::uint32_t>(4));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890BEF0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x0890BF10u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0890B144;
L_0890BF10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8));
    ctx.gpr[31] = (0x0890BF20u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 53u, 0x0892833Cu>(ctx, &aot_mem) && ctx.pc == 0x0890BF20u) goto L_0890BF20;
    return;
L_0890BF20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[2] + static_cast<std::uint32_t>(4));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890BF54:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x0890BF7Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_0890B144;
L_0890BF7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x0890BF88u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 35u, 0x08928224u>(ctx, &aot_mem) && ctx.pc == 0x0890BF88u) goto L_0890BF88;
    return;
L_0890BF88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[2] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890BFC8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890BFFC;
      }
      goto L_0890BFF4;
    }
L_0890BFF4:
    ctx.gpr[31] = (0x0890BFFCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 102u, 0x0891C7F4u>(ctx, &aot_mem) && ctx.pc == 0x0890BFFCu) goto L_0890BFFC;
    return;
L_0890BFFC:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.pc = 0x0890C000u; return;
}

void recomp_unit_0065(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0065_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_65(Runtime &runtime) {
    runtime.register_generated_unit(65u, 0x08908000u, 16384u, &recomp_unit_0065, &recomp_unit_0065_entry);
    runtime.register_function(0x08908000u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890800Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890803Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890806Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890809Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089080CCu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089080FCu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890812Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890815Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890818Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089081BCu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089081DCu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908208u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908220u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908234u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908250u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089082ACu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089082D8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089082DCu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890830Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089083A0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089083B8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089083C0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089083C8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089083D0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089083D8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089083E8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089083F8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908400u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908404u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890840Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908410u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908438u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908478u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908488u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908490u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908498u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890849Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089084C0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089084ECu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908504u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908530u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908548u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890855Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908590u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890859Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089085A0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089085CCu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908610u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908624u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908630u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908638u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890864Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908654u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908658u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908660u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890868Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089086C4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089086CCu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089086FCu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890872Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890873Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908748u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908780u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908784u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089087B0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089087C4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089087D0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089087D8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908800u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908824u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890882Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890885Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890888Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908894u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908898u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089088C0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089088C8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089088F0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908918u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908940u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908954u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890895Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908968u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908970u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908978u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908980u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908988u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908990u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089089BCu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089089C8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089089F4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908A00u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908A24u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908A30u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908A38u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908A40u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908A6Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908A74u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908A80u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908A84u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908A8Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908A94u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908A9Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908AA4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908AACu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908AC8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908AD0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908B00u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908B08u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908B10u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908B18u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908B20u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908B28u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908B30u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908B38u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908B40u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908B70u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908B90u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908BD4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908C94u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908E4Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908E5Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908E74u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908E90u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908E98u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908EA4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908EACu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908EC0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908F00u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908F34u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908F58u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908F60u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908F68u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890900Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089090F4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909110u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909144u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890914Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909150u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909184u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089091C0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089091CCu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089091D0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909210u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909248u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909304u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909354u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909384u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089093B4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089093E4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909414u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909444u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909474u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089094A4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089094D4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909504u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909534u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909538u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909554u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909598u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089095D4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089095F8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890963Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909644u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909658u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890965Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089096B0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909704u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909710u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909728u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909740u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890974Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909758u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909770u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909788u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909798u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089097A4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089097ACu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089097DCu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089097E4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089097ECu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909800u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909804u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909810u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909818u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909820u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909854u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890985Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909874u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890987Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909884u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890988Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909894u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089098C8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089098FCu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909924u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890994Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909964u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890996Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909994u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089099BCu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089099C4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089099F8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909A00u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909A18u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909A20u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909A28u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909A30u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909A5Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909AACu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909B0Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909B14u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909B44u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909B60u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909B98u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909BB0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909C14u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909C24u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909C2Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909C48u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909C54u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909C6Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909C78u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909C80u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909CA0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909CBCu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909CD4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909CDCu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909CE8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909D08u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909D10u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909D1Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909D3Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909D44u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909D50u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909D70u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909D78u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909D84u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909DA4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909DACu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909DB8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909DD8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909DE0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909DECu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909E0Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909E14u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909E20u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909E40u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909E48u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909E54u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909E74u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909E7Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909E88u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909EA8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909EB0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909EBCu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909EDCu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909EE4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909EF0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909F10u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909F18u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909F24u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909F44u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909F4Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909F58u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909F78u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909F80u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909F8Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909FB0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909FC0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909FD8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909FE4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A000u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A018u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A020u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A02Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A04Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A054u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A060u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A080u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A088u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A094u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A0B4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A0BCu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A0C8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A0E8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A0F0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A0FCu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A11Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A124u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A130u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A150u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A158u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A164u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A184u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A18Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A198u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A1B8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A1C0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A1CCu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A1ECu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A1F4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A200u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A220u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A228u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A234u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A254u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A25Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A268u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A288u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A290u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A29Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A2B4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A2BCu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A2C8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A2ECu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A300u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A318u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A324u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A328u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A32Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A334u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A340u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A34Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A380u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A3C8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A3E4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A3F4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A3FCu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A40Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A420u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A428u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A430u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A440u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A444u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A44Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A454u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A45Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A460u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A46Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A474u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A478u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A480u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A484u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A48Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A498u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A4A0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A4B0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A4B8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A4C4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A4CCu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A4DCu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A4E4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A4F4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A4FCu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A50Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A510u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A518u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A548u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A554u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A55Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A560u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A58Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A598u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A5A0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A5A8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A5B4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A5BCu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A5C4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A5CCu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A5D8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A5E0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A5F0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A5F8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A608u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A610u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A620u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A628u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A630u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A63Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A644u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A648u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A670u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A680u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A688u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A690u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A6A8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A6B8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A6C0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A6E4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A6F4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A704u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A70Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A714u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A72Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A734u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A73Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A744u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A768u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A778u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A780u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A7A4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A7B4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A7BCu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A7C0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A7C8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A7D0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A7F0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A808u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A810u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A820u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A828u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A82Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A854u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A950u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A968u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A980u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A9ACu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A9B4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A9C0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AA60u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AA80u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AA94u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AAA0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AAB4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AAE4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AB08u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AB24u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AB30u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AB50u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AB58u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AB6Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AB74u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AB84u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AB94u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890ABA4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890ABB4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890ABC4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890ABCCu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890ABD4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890ABE0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890ABF0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AC00u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AC04u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AC1Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AC3Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AC4Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AC58u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AC64u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AC6Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AC70u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AC7Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AC88u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AC8Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890ACB0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890ACECu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AD1Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AD28u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AD34u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AD3Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AD48u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AD58u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AD68u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AD78u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AD8Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AD94u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890ADA0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890ADA8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890ADBCu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890ADC8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890ADD0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890ADD8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890ADE8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890ADF8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AE20u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AE40u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AE4Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AE5Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AE64u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AE68u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AE80u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AEA8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AEB4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AEC4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AECCu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AEF4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AEFCu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AF00u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AF14u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AF3Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AF48u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AF58u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AF60u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AF80u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AF88u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AF8Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AFA0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AFB4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AFC4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AFE0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AFE8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AFF0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B000u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B00Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B014u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B01Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B028u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B038u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B0B0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B0BCu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B0CCu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B0D8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B0E0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B0F0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B0F8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B104u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B124u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B134u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B13Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B144u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B15Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B170u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B180u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B188u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B194u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B1ACu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B1CCu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B1D4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B1DCu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B1ECu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B1F8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B240u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B24Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B254u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B268u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B2A8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B2B0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B2C8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B2D0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B2D4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B2F0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B2F4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B2F8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B30Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B32Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B370u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B378u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B3A0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B3A8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B3B0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B3DCu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B3FCu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B40Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B424u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B428u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B44Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B454u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B460u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B468u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B47Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B494u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B498u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B4CCu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B4E4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B4F8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B510u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B53Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B540u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B56Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B598u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B5D4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B5F4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B630u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B640u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B650u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B65Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B668u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B674u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B684u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B68Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B69Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B6A8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B6B8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B6C8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B6CCu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B6D8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B6ECu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B6F8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B708u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B710u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B718u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B71Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B730u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B740u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B760u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B780u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B790u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B798u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B7A0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B7A8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B7B0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B7C8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B7E8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B7F8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B800u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B808u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B810u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B81Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B834u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B844u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B850u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B860u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B868u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B874u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B87Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B880u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B88Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B89Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B8A8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B8B4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B8BCu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B8C8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B8CCu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B8D8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B8F4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B900u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B910u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B91Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B924u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B934u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B93Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B944u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B95Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B964u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B96Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B984u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B99Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B9A8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B9B8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B9C4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B9CCu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B9DCu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B9E4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B9ECu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B9F4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BA08u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BA18u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BA24u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BA34u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BA40u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BA48u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BA50u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BA58u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BA64u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BA68u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BA74u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BA84u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BA90u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BAA0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BAA8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BAB4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BAD0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BADCu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BAF0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BB08u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BB10u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BB18u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BB20u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BB28u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BB34u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BB3Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BB40u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BB54u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BB6Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BB8Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BBC4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BBCCu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BBE8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BC14u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BC30u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BC38u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BC40u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BC48u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BC58u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BC6Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BCA0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BCA8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BCB8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BCD0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BD18u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BD20u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BD3Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BD50u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BD8Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BD94u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BDA0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BDC4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BDD0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BE0Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BE40u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BE64u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BE84u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BEA4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BEBCu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BEF0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BF10u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BF20u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BF54u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BF7Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BF88u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BFC8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BFF4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BFFCu, &recomp_unit_0065, "recomp_unit_0065");
}
} // namespace psprecomp
