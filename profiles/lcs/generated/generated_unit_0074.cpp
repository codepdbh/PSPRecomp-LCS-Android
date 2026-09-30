#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0074[4081] = {
    1, 0, 0, 2, 0, 0, 0, 0, 3, 0, 0, 0, 0, 4, 0, 0, 0, 0, 5, 0, 0, 0, 0, 6, 0, 0, 0, 0, 7, 0, 0, 0,
    0, 8, 0, 0, 0, 0, 9, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 12, 0, 0, 0, 0, 13, 0, 0, 0, 0,
    14, 0, 0, 0, 0, 15, 0, 0, 0, 0, 16, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 19, 0, 20, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 23, 0, 24, 0,
    25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 28, 0, 29, 0, 30, 0, 31, 0, 32, 0, 33, 0, 34,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 36, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 38, 0, 39, 0, 0, 0, 40, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    45, 0, 46, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 49, 0, 50, 0, 51, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 54, 0, 55, 0, 56, 0, 57, 0, 58, 0, 59, 0, 60, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 62, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64,
    0, 65, 0, 0, 0, 66, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 69, 0, 0, 0, 70,
    0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 73, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 76, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 78, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 80, 0, 81, 0, 82, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 86, 0,
    87, 0, 88, 0, 89, 0, 90, 0, 91, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 94, 0, 0, 0,
    0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 97, 0, 0, 0, 98, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 103, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    108, 0, 0, 109, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 112, 0, 0,
    0, 0, 0, 113, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0,
    116, 117, 0, 0, 0, 0, 0, 0, 0, 0, 118, 119, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 123, 0, 0,
    124, 0, 0, 0, 125, 0, 126, 0, 0, 127, 0, 0, 0, 128, 0, 0, 0, 129, 0, 0, 0, 130, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 133, 0, 0, 134, 0, 0, 0, 0, 135, 0, 0, 0, 0, 136,
    0, 0, 0, 0, 137, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0,
    0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 146, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 151, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 156, 0, 0, 0, 157, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 159,
    0, 0, 160, 0, 0, 0, 0, 161, 0, 0, 0, 0, 162, 0, 0, 163, 0, 0, 0, 0, 164, 0, 0, 0, 0, 165, 0, 0, 166, 0, 0, 0,
    0, 167, 0, 0, 0, 0, 168, 0, 0, 169, 0, 0, 0, 0, 170, 0, 0, 0, 0, 171, 0, 0, 172, 0, 0, 0, 0, 173, 0, 0, 0, 0,
    174, 0, 0, 175, 0, 0, 0, 0, 176, 0, 0, 0, 0, 177, 0, 0, 178, 0, 0, 0, 0, 179, 0, 0, 0, 0, 180, 0, 0, 181, 0, 0,
    0, 182, 0, 0, 183, 0, 0, 184, 0, 185, 0, 0, 0, 0, 0, 186, 0, 0, 0, 187, 0, 0, 188, 0, 0, 0, 189, 0, 0, 190, 0, 0,
    191, 0, 192, 0, 0, 0, 0, 193, 0, 0, 0, 194, 0, 0, 195, 0, 0, 0, 0, 196, 0, 0, 0, 197, 0, 0, 198, 0, 0, 0, 0, 199,
    0, 0, 0, 200, 0, 0, 201, 0, 0, 0, 0, 202, 0, 0, 0, 203, 0, 0, 204, 0, 0, 0, 0, 205, 0, 0, 0, 206, 0, 0, 207, 0,
    0, 0, 0, 208, 0, 0, 0, 209, 0, 0, 210, 0, 0, 0, 0, 211, 0, 0, 0, 212, 0, 0, 213, 0, 0, 0, 0, 214, 0, 0, 0, 215,
    0, 0, 216, 0, 0, 0, 0, 217, 0, 0, 0, 218, 0, 0, 219, 0, 0, 0, 0, 220, 0, 0, 0, 221, 0, 0, 222, 0, 0, 0, 0, 223,
    0, 0, 0, 224, 0, 0, 225, 0, 0, 0, 0, 226, 0, 0, 0, 227, 0, 0, 228, 0, 0, 0, 0, 229, 0, 0, 0, 230, 0, 0, 231, 0,
    0, 0, 0, 232, 0, 0, 0, 233, 0, 0, 234, 0, 0, 0, 0, 235, 0, 0, 0, 236, 0, 0, 237, 0, 0, 0, 0, 238, 0, 0, 0, 239,
    0, 0, 240, 0, 0, 0, 0, 241, 0, 0, 0, 242, 0, 0, 243, 0, 0, 0, 0, 244, 0, 0, 0, 245, 0, 0, 246, 0, 0, 0, 0, 247,
    0, 0, 0, 248, 0, 0, 249, 0, 0, 0, 0, 250, 0, 0, 0, 251, 0, 0, 252, 0, 0, 0, 0, 253, 0, 0, 0, 254, 0, 0, 255, 0,
    0, 0, 0, 256, 0, 0, 0, 257, 0, 0, 258, 0, 0, 0, 0, 259, 0, 0, 0, 260, 0, 0, 261, 0, 0, 0, 0, 262, 0, 0, 0, 263,
    0, 0, 264, 0, 0, 0, 0, 265, 0, 0, 0, 266, 0, 0, 267, 0, 0, 0, 0, 268, 0, 0, 0, 269, 0, 0, 270, 0, 0, 0, 0, 271,
    0, 0, 0, 272, 0, 0, 273, 0, 0, 0, 0, 274, 0, 0, 0, 275, 0, 0, 276, 0, 0, 0, 0, 277, 0, 0, 0, 278, 0, 0, 279, 0,
    0, 0, 0, 280, 0, 0, 0, 281, 0, 0, 282, 0, 0, 0, 0, 283, 0, 0, 0, 284, 0, 0, 285, 0, 0, 0, 0, 286, 0, 0, 0, 287,
    0, 0, 288, 0, 0, 0, 0, 289, 0, 0, 0, 290, 0, 0, 291, 0, 0, 0, 0, 292, 0, 0, 0, 293, 0, 0, 294, 0, 0, 0, 0, 295,
    0, 0, 0, 296, 0, 0, 297, 0, 0, 0, 0, 298, 0, 0, 0, 299, 0, 0, 300, 0, 0, 0, 0, 301, 0, 0, 0, 302, 0, 0, 303, 0,
    0, 0, 0, 304, 0, 0, 0, 305, 0, 0, 306, 0, 0, 0, 0, 307, 0, 0, 0, 308, 0, 0, 309, 0, 0, 0, 0, 310, 0, 0, 0, 311,
    0, 0, 312, 0, 0, 0, 0, 313, 0, 0, 0, 314, 0, 0, 315, 0, 0, 0, 0, 316, 0, 0, 0, 317, 0, 0, 318, 0, 0, 0, 0, 319,
    0, 0, 0, 320, 0, 0, 321, 0, 0, 0, 0, 322, 0, 0, 0, 323, 0, 0, 324, 0, 0, 0, 0, 325, 0, 0, 0, 326, 0, 0, 327, 0,
    0, 0, 0, 328, 0, 0, 0, 329, 0, 0, 330, 0, 0, 0, 0, 331, 0, 0, 0, 332, 0, 0, 333, 0, 0, 0, 0, 334, 0, 0, 335, 0,
    0, 336, 0, 337, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 339, 0, 0, 340, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 342, 0, 0,
    343, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 345, 0, 0, 346, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 348, 0, 0, 349, 0, 0, 0,
    0, 350, 0, 0, 0, 0, 0, 351, 0, 0, 352, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 354, 0, 0, 355, 0, 0, 0, 0, 356, 0, 0,
    0, 0, 0, 357, 0, 0, 358, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 360, 0, 0, 361, 0, 0, 0, 0, 362, 0, 0, 0, 363, 0, 0,
    364, 0, 0, 0, 0, 365, 0, 0, 0, 0, 366, 0, 0, 367, 0, 0, 0, 0, 368, 0, 0, 0, 369, 0, 0, 370, 0, 0, 0, 0, 371, 0,
    0, 0, 0, 372, 0, 0, 373, 0, 0, 0, 0, 374, 0, 0, 0, 375, 0, 0, 376, 0, 0, 0, 0, 377, 0, 0, 0, 378, 0, 0, 379, 0,
    0, 0, 0, 380, 0, 0, 0, 0, 381, 0, 0, 382, 0, 0, 0, 0, 383, 0, 0, 0, 0, 384, 0, 0, 385, 0, 0, 0, 0, 386, 0, 0,
    0, 387, 0, 0, 388, 0, 0, 0, 389, 0, 0, 0, 0, 390, 0, 0, 391, 0, 0, 0, 0, 392, 0, 0, 0, 0, 393, 0, 0, 394, 0, 0,
    0, 395, 0, 0, 396, 0, 0, 397, 0, 398, 0, 0, 0, 0, 399, 0, 0, 0, 400, 0, 0, 401, 0, 0, 0, 0, 402, 0, 0, 0, 403, 0,
    0, 404, 0, 0, 0, 0, 405, 0, 0, 0, 406, 0, 0, 407, 0, 0, 0, 0, 408, 0, 0, 0, 409, 0, 0, 410, 0, 0, 0, 0, 411, 0,
    0, 0, 412, 0, 0, 413, 0, 0, 0, 414, 0, 0, 0, 415, 0, 0, 416, 0, 0, 0, 0, 417, 0, 0, 0, 418, 0, 0, 419, 0, 0, 0,
    0, 420, 0, 0, 0, 421, 0, 0, 422, 0, 0, 0, 0, 423, 0, 0, 0, 424, 0, 0, 425, 0, 0, 0, 426, 0, 0, 427, 0, 0, 428, 0,
    0, 0, 0, 0, 0, 0, 0, 429, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 430, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 431, 0, 432, 0, 0, 433, 0, 434, 0, 0, 435, 0, 436, 0, 0,
    437, 0, 0, 438, 0, 0, 439, 0, 440, 0, 0, 441, 0, 442, 0, 0, 443, 0, 444, 0, 0, 445, 0, 446, 0, 0, 447, 448, 0, 0, 0, 0,
    0, 449, 0, 0, 0, 450, 0, 0, 0, 451, 452, 0, 0, 0, 453, 0, 454, 0, 0, 455, 0, 0, 0, 456, 0, 457, 0, 0, 0, 458, 0, 459,
    0, 0, 0, 460, 0, 461, 0, 0, 0, 462, 0, 463, 0, 0, 464, 0, 0, 0, 465, 0, 466, 0, 0, 0, 467, 0, 468, 0, 0, 469, 0, 0,
    0, 470, 0, 471, 0, 0, 0, 472, 0, 473, 0, 474, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 475, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 476,
    0, 0, 477, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 478, 0, 0, 479,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 480, 0, 0, 481, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 482, 0, 0, 483, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 484, 0, 0, 485, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 486, 0, 0, 487, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 488, 0, 0, 489, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 490, 0, 0, 491, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 492, 0, 0, 493, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 494, 0, 495, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 496, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    497, 0, 0, 498, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 499, 0, 0, 500, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 501, 0, 0, 502,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 503, 0, 0, 504, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 505, 0, 0, 506, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 507, 0, 0, 508, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 509, 0, 0, 510, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 511, 0, 0, 512, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 513, 0, 0, 514, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 515, 0,
    516, 0, 0, 0, 0, 0, 0, 0, 0, 517, 0, 0, 0, 0, 0, 0, 0, 518, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 519, 0, 0, 0, 0, 0, 0, 520, 0, 0, 0, 0, 521, 0, 0, 0, 522, 0, 0, 0, 0, 523, 524, 0, 0, 525, 0, 0, 0, 0, 0,
    0, 526, 0, 0, 0, 0, 527, 0, 0, 0, 528, 0, 0, 0, 0, 529, 0, 0, 0, 530, 0, 0, 0, 0, 0, 0, 0, 531, 0, 0, 0, 0,
    532, 0, 0, 0, 0, 533, 534, 0, 0, 535, 0, 0, 0, 536, 0, 0, 0, 537, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    538, 0, 0, 0, 0, 539, 0, 0, 0, 540, 0, 0, 0, 0, 541, 542, 0, 0, 543, 0, 0, 544, 0, 545, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 546, 0, 0, 0, 547, 0, 0, 548, 0, 549, 0, 550, 0, 551, 0, 0, 0, 552, 0, 0, 0, 0, 553, 0, 0, 554, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 555, 0, 0, 0, 0, 556, 0, 0, 0, 557, 0, 0, 0, 0,
    558, 0, 559, 0, 0, 560, 0, 0, 0, 0, 0, 0, 561, 0, 0, 0, 0, 562, 0, 0, 0, 563, 0, 0, 0, 0, 564, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 565, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 566, 0, 0, 0, 0, 0, 0, 0, 0, 567, 0, 0, 568, 0, 0, 569, 0, 0, 0, 570, 571, 572, 0, 0, 0, 0, 0, 573, 0,
    0, 0, 0, 0, 0, 0, 0, 574, 0, 0, 0, 0, 0, 0, 575, 0, 0, 576, 0, 0, 0, 0, 0, 577, 0, 0, 0, 0, 0, 0, 0, 578,
    0, 579, 0, 0, 0, 580, 0, 581, 0, 0, 0, 0, 0, 0, 582, 0, 0, 0, 583, 0, 0, 0, 0, 584, 0, 585, 586, 0, 587, 0, 0, 0,
    588, 0, 0, 0, 0, 589, 0, 0, 0, 590, 0, 0, 0, 0, 591, 0, 0, 0, 592, 0, 593, 0, 594, 0, 0, 0, 595, 0, 596, 0, 597, 0,
    598, 0, 0, 0, 599, 0, 600, 0, 601, 602, 0, 603, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 604, 0, 605, 0, 0, 0, 606, 0, 0, 0,
    0, 0, 607, 0, 608, 0, 609, 0, 0, 0, 610, 0, 0, 0, 0, 0, 611, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 612, 0, 613, 0, 0,
    0, 614, 0, 0, 615, 0, 0, 0, 616, 0, 0, 617, 0, 0, 0, 0, 618, 0, 0, 0, 0, 0, 0, 619, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 620, 0, 621, 0, 0, 0, 622, 0, 623, 0, 0, 624, 0, 0, 0, 625, 0, 0, 0, 0, 626, 0, 0, 0, 0, 0, 627, 0, 0, 0, 0,
    628, 0, 0, 0, 0, 0, 0, 0, 629, 0, 630, 0, 0, 0, 631, 0, 0, 0, 632, 0, 0, 0, 0, 0, 0, 0, 633, 0, 634, 0, 0, 0,
    635, 0, 0, 0, 636, 0, 0, 0, 0, 0, 0, 0, 637, 0, 638, 0, 0, 0, 639, 0, 0, 0, 0, 640, 0, 0, 641, 0, 0, 0, 0, 0,
    0, 0, 642, 0, 0, 0, 643, 0, 0, 0, 0, 0, 0, 0, 0, 0, 644, 0, 645, 0, 0, 0, 646, 0, 0, 0, 0, 0, 647, 0, 648, 0,
    0, 649, 0, 0, 0, 0, 0, 0, 0, 650, 0, 651, 0, 0, 0, 652, 0, 0, 0, 0, 0, 0, 0, 0, 0, 653, 0, 0, 654, 0, 0, 0,
    0, 0, 0, 655, 0, 656, 0, 0, 0, 0, 0, 0, 0, 657, 0, 658, 0, 0, 0, 659, 0, 0, 0, 660, 0, 0, 0, 0, 0, 0, 0, 661,
    0, 662, 0, 0, 0, 663, 0, 664, 0, 0, 0, 0, 0, 665, 0, 0, 0, 0, 0, 0, 666, 0, 667, 0, 0, 668, 0, 669, 0, 670, 0, 0,
    671, 0, 0, 0, 672, 0, 673, 0, 674, 675, 676, 0, 0, 0, 677, 0, 678,
};
void recomp_unit_0074_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x0892C000u;
        entry_id = (entry_delta < 16324u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0074[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_0892C000;
    case 2u: goto L_0892C00C;
    case 3u: goto L_0892C020;
    case 4u: goto L_0892C034;
    case 5u: goto L_0892C048;
    case 6u: goto L_0892C05C;
    case 7u: goto L_0892C070;
    case 8u: goto L_0892C084;
    case 9u: goto L_0892C098;
    case 10u: goto L_0892C0AC;
    case 11u: goto L_0892C0C4;
    case 12u: goto L_0892C0D8;
    case 13u: goto L_0892C0EC;
    case 14u: goto L_0892C100;
    case 15u: goto L_0892C114;
    case 16u: goto L_0892C128;
    case 17u: goto L_0892C12C;
    case 18u: goto L_0892C1CC;
    case 19u: goto L_0892C210;
    case 20u: goto L_0892C218;
    case 21u: goto L_0892C220;
    case 22u: goto L_0892C268;
    case 23u: goto L_0892C270;
    case 24u: goto L_0892C278;
    case 25u: goto L_0892C280;
    case 26u: goto L_0892C2C8;
    case 27u: goto L_0892C3C4;
    case 28u: goto L_0892C3CC;
    case 29u: goto L_0892C3D4;
    case 30u: goto L_0892C3DC;
    case 31u: goto L_0892C3E4;
    case 32u: goto L_0892C3EC;
    case 33u: goto L_0892C3F4;
    case 34u: goto L_0892C3FC;
    case 35u: goto L_0892C4C0;
    case 36u: goto L_0892C4C4;
    case 37u: goto L_0892C4D8;
    case 38u: goto L_0892C50C;
    case 39u: goto L_0892C514;
    case 40u: goto L_0892C524;
    case 41u: goto L_0892C52C;
    case 42u: goto L_0892C5F0;
    case 43u: goto L_0892C634;
    case 44u: goto L_0892C63C;
    case 45u: goto L_0892C680;
    case 46u: goto L_0892C688;
    case 47u: goto L_0892C690;
    case 48u: goto L_0892C6D8;
    case 49u: goto L_0892C6E0;
    case 50u: goto L_0892C6E8;
    case 51u: goto L_0892C6F0;
    case 52u: goto L_0892C738;
    case 53u: goto L_0892C834;
    case 54u: goto L_0892C83C;
    case 55u: goto L_0892C844;
    case 56u: goto L_0892C84C;
    case 57u: goto L_0892C854;
    case 58u: goto L_0892C85C;
    case 59u: goto L_0892C864;
    case 60u: goto L_0892C86C;
    case 61u: goto L_0892C930;
    case 62u: goto L_0892C934;
    case 63u: goto L_0892C948;
    case 64u: goto L_0892C97C;
    case 65u: goto L_0892C984;
    case 66u: goto L_0892C994;
    case 67u: goto L_0892C99C;
    case 68u: goto L_0892CA64;
    case 69u: goto L_0892CA6C;
    case 70u: goto L_0892CA7C;
    case 71u: goto L_0892CA84;
    case 72u: goto L_0892CAA8;
    case 73u: goto L_0892CAB8;
    case 74u: goto L_0892CAC0;
    case 75u: goto L_0892CAF4;
    case 76u: goto L_0892CAF8;
    case 77u: goto L_0892CB3C;
    case 78u: goto L_0892CB44;
    case 79u: goto L_0892CB4C;
    case 80u: goto L_0892CB94;
    case 81u: goto L_0892CB9C;
    case 82u: goto L_0892CBA4;
    case 83u: goto L_0892CBAC;
    case 84u: goto L_0892CBF4;
    case 85u: goto L_0892CCF0;
    case 86u: goto L_0892CCF8;
    case 87u: goto L_0892CD00;
    case 88u: goto L_0892CD08;
    case 89u: goto L_0892CD10;
    case 90u: goto L_0892CD18;
    case 91u: goto L_0892CD20;
    case 92u: goto L_0892CD28;
    case 93u: goto L_0892CDEC;
    case 94u: goto L_0892CDF0;
    case 95u: goto L_0892CE04;
    case 96u: goto L_0892CE38;
    case 97u: goto L_0892CE40;
    case 98u: goto L_0892CE50;
    case 99u: goto L_0892CE58;
    case 100u: goto L_0892CF20;
    case 101u: goto L_0892CF2C;
    case 102u: goto L_0892CF58;
    case 103u: goto L_0892CF5C;
    case 104u: goto L_0892CF98;
    case 105u: goto L_0892CFA8;
    case 106u: goto L_0892D014;
    case 107u: goto L_0892D030;
    case 108u: goto L_0892D080;
    case 109u: goto L_0892D08C;
    case 110u: goto L_0892D094;
    case 111u: goto L_0892D0E4;
    case 112u: goto L_0892D0F4;
    case 113u: goto L_0892D10C;
    case 114u: goto L_0892D118;
    case 115u: goto L_0892D174;
    case 116u: goto L_0892D180;
    case 117u: goto L_0892D184;
    case 118u: goto L_0892D1A8;
    case 119u: goto L_0892D1AC;
    case 120u: goto L_0892D1CC;
    case 121u: goto L_0892D214;
    case 122u: goto L_0892D26C;
    case 123u: goto L_0892D274;
    case 124u: goto L_0892D280;
    case 125u: goto L_0892D290;
    case 126u: goto L_0892D298;
    case 127u: goto L_0892D2A4;
    case 128u: goto L_0892D2B4;
    case 129u: goto L_0892D2C4;
    case 130u: goto L_0892D2D4;
    case 131u: goto L_0892D2EC;
    case 132u: goto L_0892D33C;
    case 133u: goto L_0892D348;
    case 134u: goto L_0892D354;
    case 135u: goto L_0892D368;
    case 136u: goto L_0892D37C;
    case 137u: goto L_0892D390;
    case 138u: goto L_0892D398;
    case 139u: goto L_0892D3D0;
    case 140u: goto L_0892D3E8;
    case 141u: goto L_0892D414;
    case 142u: goto L_0892D464;
    case 143u: goto L_0892D484;
    case 144u: goto L_0892D584;
    case 145u: goto L_0892D5E4;
    case 146u: goto L_0892D5EC;
    case 147u: goto L_0892D654;
    case 148u: goto L_0892D66C;
    case 149u: goto L_0892D6B4;
    case 150u: goto L_0892D6E0;
    case 151u: goto L_0892D718;
    case 152u: goto L_0892D724;
    case 153u: goto L_0892D808;
    case 154u: goto L_0892D880;
    case 155u: goto L_0892D8B0;
    case 156u: goto L_0892D8B8;
    case 157u: goto L_0892D8C8;
    case 158u: goto L_0892D8DC;
    case 159u: goto L_0892D8FC;
    case 160u: goto L_0892D908;
    case 161u: goto L_0892D91C;
    case 162u: goto L_0892D930;
    case 163u: goto L_0892D93C;
    case 164u: goto L_0892D950;
    case 165u: goto L_0892D964;
    case 166u: goto L_0892D970;
    case 167u: goto L_0892D984;
    case 168u: goto L_0892D998;
    case 169u: goto L_0892D9A4;
    case 170u: goto L_0892D9B8;
    case 171u: goto L_0892D9CC;
    case 172u: goto L_0892D9D8;
    case 173u: goto L_0892D9EC;
    case 174u: goto L_0892DA00;
    case 175u: goto L_0892DA0C;
    case 176u: goto L_0892DA20;
    case 177u: goto L_0892DA34;
    case 178u: goto L_0892DA40;
    case 179u: goto L_0892DA54;
    case 180u: goto L_0892DA68;
    case 181u: goto L_0892DA74;
    case 182u: goto L_0892DA84;
    case 183u: goto L_0892DA90;
    case 184u: goto L_0892DA9C;
    case 185u: goto L_0892DAA4;
    case 186u: goto L_0892DABC;
    case 187u: goto L_0892DACC;
    case 188u: goto L_0892DAD8;
    case 189u: goto L_0892DAE8;
    case 190u: goto L_0892DAF4;
    case 191u: goto L_0892DB00;
    case 192u: goto L_0892DB08;
    case 193u: goto L_0892DB1C;
    case 194u: goto L_0892DB2C;
    case 195u: goto L_0892DB38;
    case 196u: goto L_0892DB4C;
    case 197u: goto L_0892DB5C;
    case 198u: goto L_0892DB68;
    case 199u: goto L_0892DB7C;
    case 200u: goto L_0892DB8C;
    case 201u: goto L_0892DB98;
    case 202u: goto L_0892DBAC;
    case 203u: goto L_0892DBBC;
    case 204u: goto L_0892DBC8;
    case 205u: goto L_0892DBDC;
    case 206u: goto L_0892DBEC;
    case 207u: goto L_0892DBF8;
    case 208u: goto L_0892DC0C;
    case 209u: goto L_0892DC1C;
    case 210u: goto L_0892DC28;
    case 211u: goto L_0892DC3C;
    case 212u: goto L_0892DC4C;
    case 213u: goto L_0892DC58;
    case 214u: goto L_0892DC6C;
    case 215u: goto L_0892DC7C;
    case 216u: goto L_0892DC88;
    case 217u: goto L_0892DC9C;
    case 218u: goto L_0892DCAC;
    case 219u: goto L_0892DCB8;
    case 220u: goto L_0892DCCC;
    case 221u: goto L_0892DCDC;
    case 222u: goto L_0892DCE8;
    case 223u: goto L_0892DCFC;
    case 224u: goto L_0892DD0C;
    case 225u: goto L_0892DD18;
    case 226u: goto L_0892DD2C;
    case 227u: goto L_0892DD3C;
    case 228u: goto L_0892DD48;
    case 229u: goto L_0892DD5C;
    case 230u: goto L_0892DD6C;
    case 231u: goto L_0892DD78;
    case 232u: goto L_0892DD8C;
    case 233u: goto L_0892DD9C;
    case 234u: goto L_0892DDA8;
    case 235u: goto L_0892DDBC;
    case 236u: goto L_0892DDCC;
    case 237u: goto L_0892DDD8;
    case 238u: goto L_0892DDEC;
    case 239u: goto L_0892DDFC;
    case 240u: goto L_0892DE08;
    case 241u: goto L_0892DE1C;
    case 242u: goto L_0892DE2C;
    case 243u: goto L_0892DE38;
    case 244u: goto L_0892DE4C;
    case 245u: goto L_0892DE5C;
    case 246u: goto L_0892DE68;
    case 247u: goto L_0892DE7C;
    case 248u: goto L_0892DE8C;
    case 249u: goto L_0892DE98;
    case 250u: goto L_0892DEAC;
    case 251u: goto L_0892DEBC;
    case 252u: goto L_0892DEC8;
    case 253u: goto L_0892DEDC;
    case 254u: goto L_0892DEEC;
    case 255u: goto L_0892DEF8;
    case 256u: goto L_0892DF0C;
    case 257u: goto L_0892DF1C;
    case 258u: goto L_0892DF28;
    case 259u: goto L_0892DF3C;
    case 260u: goto L_0892DF4C;
    case 261u: goto L_0892DF58;
    case 262u: goto L_0892DF6C;
    case 263u: goto L_0892DF7C;
    case 264u: goto L_0892DF88;
    case 265u: goto L_0892DF9C;
    case 266u: goto L_0892DFAC;
    case 267u: goto L_0892DFB8;
    case 268u: goto L_0892DFCC;
    case 269u: goto L_0892DFDC;
    case 270u: goto L_0892DFE8;
    case 271u: goto L_0892DFFC;
    case 272u: goto L_0892E00C;
    case 273u: goto L_0892E018;
    case 274u: goto L_0892E02C;
    case 275u: goto L_0892E03C;
    case 276u: goto L_0892E048;
    case 277u: goto L_0892E05C;
    case 278u: goto L_0892E06C;
    case 279u: goto L_0892E078;
    case 280u: goto L_0892E08C;
    case 281u: goto L_0892E09C;
    case 282u: goto L_0892E0A8;
    case 283u: goto L_0892E0BC;
    case 284u: goto L_0892E0CC;
    case 285u: goto L_0892E0D8;
    case 286u: goto L_0892E0EC;
    case 287u: goto L_0892E0FC;
    case 288u: goto L_0892E108;
    case 289u: goto L_0892E11C;
    case 290u: goto L_0892E12C;
    case 291u: goto L_0892E138;
    case 292u: goto L_0892E14C;
    case 293u: goto L_0892E15C;
    case 294u: goto L_0892E168;
    case 295u: goto L_0892E17C;
    case 296u: goto L_0892E18C;
    case 297u: goto L_0892E198;
    case 298u: goto L_0892E1AC;
    case 299u: goto L_0892E1BC;
    case 300u: goto L_0892E1C8;
    case 301u: goto L_0892E1DC;
    case 302u: goto L_0892E1EC;
    case 303u: goto L_0892E1F8;
    case 304u: goto L_0892E20C;
    case 305u: goto L_0892E21C;
    case 306u: goto L_0892E228;
    case 307u: goto L_0892E23C;
    case 308u: goto L_0892E24C;
    case 309u: goto L_0892E258;
    case 310u: goto L_0892E26C;
    case 311u: goto L_0892E27C;
    case 312u: goto L_0892E288;
    case 313u: goto L_0892E29C;
    case 314u: goto L_0892E2AC;
    case 315u: goto L_0892E2B8;
    case 316u: goto L_0892E2CC;
    case 317u: goto L_0892E2DC;
    case 318u: goto L_0892E2E8;
    case 319u: goto L_0892E2FC;
    case 320u: goto L_0892E30C;
    case 321u: goto L_0892E318;
    case 322u: goto L_0892E32C;
    case 323u: goto L_0892E33C;
    case 324u: goto L_0892E348;
    case 325u: goto L_0892E35C;
    case 326u: goto L_0892E36C;
    case 327u: goto L_0892E378;
    case 328u: goto L_0892E38C;
    case 329u: goto L_0892E39C;
    case 330u: goto L_0892E3A8;
    case 331u: goto L_0892E3BC;
    case 332u: goto L_0892E3CC;
    case 333u: goto L_0892E3D8;
    case 334u: goto L_0892E3EC;
    case 335u: goto L_0892E3F8;
    case 336u: goto L_0892E404;
    case 337u: goto L_0892E40C;
    case 338u: goto L_0892E420;
    case 339u: goto L_0892E43C;
    case 340u: goto L_0892E448;
    case 341u: goto L_0892E45C;
    case 342u: goto L_0892E474;
    case 343u: goto L_0892E480;
    case 344u: goto L_0892E494;
    case 345u: goto L_0892E4AC;
    case 346u: goto L_0892E4B8;
    case 347u: goto L_0892E4CC;
    case 348u: goto L_0892E4E4;
    case 349u: goto L_0892E4F0;
    case 350u: goto L_0892E504;
    case 351u: goto L_0892E51C;
    case 352u: goto L_0892E528;
    case 353u: goto L_0892E53C;
    case 354u: goto L_0892E554;
    case 355u: goto L_0892E560;
    case 356u: goto L_0892E574;
    case 357u: goto L_0892E58C;
    case 358u: goto L_0892E598;
    case 359u: goto L_0892E5AC;
    case 360u: goto L_0892E5C4;
    case 361u: goto L_0892E5D0;
    case 362u: goto L_0892E5E4;
    case 363u: goto L_0892E5F4;
    case 364u: goto L_0892E600;
    case 365u: goto L_0892E614;
    case 366u: goto L_0892E628;
    case 367u: goto L_0892E634;
    case 368u: goto L_0892E648;
    case 369u: goto L_0892E658;
    case 370u: goto L_0892E664;
    case 371u: goto L_0892E678;
    case 372u: goto L_0892E68C;
    case 373u: goto L_0892E698;
    case 374u: goto L_0892E6AC;
    case 375u: goto L_0892E6BC;
    case 376u: goto L_0892E6C8;
    case 377u: goto L_0892E6DC;
    case 378u: goto L_0892E6EC;
    case 379u: goto L_0892E6F8;
    case 380u: goto L_0892E70C;
    case 381u: goto L_0892E720;
    case 382u: goto L_0892E72C;
    case 383u: goto L_0892E740;
    case 384u: goto L_0892E754;
    case 385u: goto L_0892E760;
    case 386u: goto L_0892E774;
    case 387u: goto L_0892E784;
    case 388u: goto L_0892E790;
    case 389u: goto L_0892E7A0;
    case 390u: goto L_0892E7B4;
    case 391u: goto L_0892E7C0;
    case 392u: goto L_0892E7D4;
    case 393u: goto L_0892E7E8;
    case 394u: goto L_0892E7F4;
    case 395u: goto L_0892E804;
    case 396u: goto L_0892E810;
    case 397u: goto L_0892E81C;
    case 398u: goto L_0892E824;
    case 399u: goto L_0892E838;
    case 400u: goto L_0892E848;
    case 401u: goto L_0892E854;
    case 402u: goto L_0892E868;
    case 403u: goto L_0892E878;
    case 404u: goto L_0892E884;
    case 405u: goto L_0892E898;
    case 406u: goto L_0892E8A8;
    case 407u: goto L_0892E8B4;
    case 408u: goto L_0892E8C8;
    case 409u: goto L_0892E8D8;
    case 410u: goto L_0892E8E4;
    case 411u: goto L_0892E8F8;
    case 412u: goto L_0892E908;
    case 413u: goto L_0892E914;
    case 414u: goto L_0892E924;
    case 415u: goto L_0892E934;
    case 416u: goto L_0892E940;
    case 417u: goto L_0892E954;
    case 418u: goto L_0892E964;
    case 419u: goto L_0892E970;
    case 420u: goto L_0892E984;
    case 421u: goto L_0892E994;
    case 422u: goto L_0892E9A0;
    case 423u: goto L_0892E9B4;
    case 424u: goto L_0892E9C4;
    case 425u: goto L_0892E9D0;
    case 426u: goto L_0892E9E0;
    case 427u: goto L_0892E9EC;
    case 428u: goto L_0892E9F8;
    case 429u: goto L_0892EA1C;
    case 430u: goto L_0892EA94;
    case 431u: goto L_0892EAC4;
    case 432u: goto L_0892EACC;
    case 433u: goto L_0892EAD8;
    case 434u: goto L_0892EAE0;
    case 435u: goto L_0892EAEC;
    case 436u: goto L_0892EAF4;
    case 437u: goto L_0892EB00;
    case 438u: goto L_0892EB0C;
    case 439u: goto L_0892EB18;
    case 440u: goto L_0892EB20;
    case 441u: goto L_0892EB2C;
    case 442u: goto L_0892EB34;
    case 443u: goto L_0892EB40;
    case 444u: goto L_0892EB48;
    case 445u: goto L_0892EB54;
    case 446u: goto L_0892EB5C;
    case 447u: goto L_0892EB68;
    case 448u: goto L_0892EB6C;
    case 449u: goto L_0892EB84;
    case 450u: goto L_0892EB94;
    case 451u: goto L_0892EBA4;
    case 452u: goto L_0892EBA8;
    case 453u: goto L_0892EBB8;
    case 454u: goto L_0892EBC0;
    case 455u: goto L_0892EBCC;
    case 456u: goto L_0892EBDC;
    case 457u: goto L_0892EBE4;
    case 458u: goto L_0892EBF4;
    case 459u: goto L_0892EBFC;
    case 460u: goto L_0892EC0C;
    case 461u: goto L_0892EC14;
    case 462u: goto L_0892EC24;
    case 463u: goto L_0892EC2C;
    case 464u: goto L_0892EC38;
    case 465u: goto L_0892EC48;
    case 466u: goto L_0892EC50;
    case 467u: goto L_0892EC60;
    case 468u: goto L_0892EC68;
    case 469u: goto L_0892EC74;
    case 470u: goto L_0892EC84;
    case 471u: goto L_0892EC8C;
    case 472u: goto L_0892EC9C;
    case 473u: goto L_0892ECA4;
    case 474u: goto L_0892ECAC;
    case 475u: goto L_0892ED14;
    case 476u: goto L_0892ED7C;
    case 477u: goto L_0892ED88;
    case 478u: goto L_0892EDF0;
    case 479u: goto L_0892EDFC;
    case 480u: goto L_0892EE64;
    case 481u: goto L_0892EE70;
    case 482u: goto L_0892EED8;
    case 483u: goto L_0892EEE4;
    case 484u: goto L_0892EF4C;
    case 485u: goto L_0892EF58;
    case 486u: goto L_0892EFC0;
    case 487u: goto L_0892EFCC;
    case 488u: goto L_0892F034;
    case 489u: goto L_0892F040;
    case 490u: goto L_0892F0A8;
    case 491u: goto L_0892F0B4;
    case 492u: goto L_0892F11C;
    case 493u: goto L_0892F128;
    case 494u: goto L_0892F190;
    case 495u: goto L_0892F198;
    case 496u: goto L_0892F1D4;
    case 497u: goto L_0892F200;
    case 498u: goto L_0892F20C;
    case 499u: goto L_0892F238;
    case 500u: goto L_0892F244;
    case 501u: goto L_0892F270;
    case 502u: goto L_0892F27C;
    case 503u: goto L_0892F2A8;
    case 504u: goto L_0892F2B4;
    case 505u: goto L_0892F2E0;
    case 506u: goto L_0892F2EC;
    case 507u: goto L_0892F318;
    case 508u: goto L_0892F324;
    case 509u: goto L_0892F350;
    case 510u: goto L_0892F35C;
    case 511u: goto L_0892F388;
    case 512u: goto L_0892F394;
    case 513u: goto L_0892F3C0;
    case 514u: goto L_0892F3CC;
    case 515u: goto L_0892F3F8;
    case 516u: goto L_0892F400;
    case 517u: goto L_0892F424;
    case 518u: goto L_0892F444;
    case 519u: goto L_0892F484;
    case 520u: goto L_0892F4A0;
    case 521u: goto L_0892F4B4;
    case 522u: goto L_0892F4C4;
    case 523u: goto L_0892F4D8;
    case 524u: goto L_0892F4DC;
    case 525u: goto L_0892F4E8;
    case 526u: goto L_0892F504;
    case 527u: goto L_0892F518;
    case 528u: goto L_0892F528;
    case 529u: goto L_0892F53C;
    case 530u: goto L_0892F54C;
    case 531u: goto L_0892F56C;
    case 532u: goto L_0892F580;
    case 533u: goto L_0892F594;
    case 534u: goto L_0892F598;
    case 535u: goto L_0892F5A4;
    case 536u: goto L_0892F5B4;
    case 537u: goto L_0892F5C4;
    case 538u: goto L_0892F600;
    case 539u: goto L_0892F614;
    case 540u: goto L_0892F624;
    case 541u: goto L_0892F638;
    case 542u: goto L_0892F63C;
    case 543u: goto L_0892F648;
    case 544u: goto L_0892F654;
    case 545u: goto L_0892F65C;
    case 546u: goto L_0892F684;
    case 547u: goto L_0892F694;
    case 548u: goto L_0892F6A0;
    case 549u: goto L_0892F6A8;
    case 550u: goto L_0892F6B0;
    case 551u: goto L_0892F6B8;
    case 552u: goto L_0892F6C8;
    case 553u: goto L_0892F6DC;
    case 554u: goto L_0892F6E8;
    case 555u: goto L_0892F748;
    case 556u: goto L_0892F75C;
    case 557u: goto L_0892F76C;
    case 558u: goto L_0892F780;
    case 559u: goto L_0892F788;
    case 560u: goto L_0892F794;
    case 561u: goto L_0892F7B0;
    case 562u: goto L_0892F7C4;
    case 563u: goto L_0892F7D4;
    case 564u: goto L_0892F7E8;
    case 565u: goto L_0892F814;
    case 566u: goto L_0892F88C;
    case 567u: goto L_0892F8B0;
    case 568u: goto L_0892F8BC;
    case 569u: goto L_0892F8C8;
    case 570u: goto L_0892F8D8;
    case 571u: goto L_0892F8DC;
    case 572u: goto L_0892F8E0;
    case 573u: goto L_0892F8F8;
    case 574u: goto L_0892F91C;
    case 575u: goto L_0892F938;
    case 576u: goto L_0892F944;
    case 577u: goto L_0892F95C;
    case 578u: goto L_0892F97C;
    case 579u: goto L_0892F984;
    case 580u: goto L_0892F994;
    case 581u: goto L_0892F99C;
    case 582u: goto L_0892F9B8;
    case 583u: goto L_0892F9C8;
    case 584u: goto L_0892F9DC;
    case 585u: goto L_0892F9E4;
    case 586u: goto L_0892F9E8;
    case 587u: goto L_0892F9F0;
    case 588u: goto L_0892FA00;
    case 589u: goto L_0892FA14;
    case 590u: goto L_0892FA24;
    case 591u: goto L_0892FA38;
    case 592u: goto L_0892FA48;
    case 593u: goto L_0892FA50;
    case 594u: goto L_0892FA58;
    case 595u: goto L_0892FA68;
    case 596u: goto L_0892FA70;
    case 597u: goto L_0892FA78;
    case 598u: goto L_0892FA80;
    case 599u: goto L_0892FA90;
    case 600u: goto L_0892FA98;
    case 601u: goto L_0892FAA0;
    case 602u: goto L_0892FAA4;
    case 603u: goto L_0892FAAC;
    case 604u: goto L_0892FAD8;
    case 605u: goto L_0892FAE0;
    case 606u: goto L_0892FAF0;
    case 607u: goto L_0892FB08;
    case 608u: goto L_0892FB10;
    case 609u: goto L_0892FB18;
    case 610u: goto L_0892FB28;
    case 611u: goto L_0892FB40;
    case 612u: goto L_0892FB6C;
    case 613u: goto L_0892FB74;
    case 614u: goto L_0892FB84;
    case 615u: goto L_0892FB90;
    case 616u: goto L_0892FBA0;
    case 617u: goto L_0892FBAC;
    case 618u: goto L_0892FBC0;
    case 619u: goto L_0892FBDC;
    case 620u: goto L_0892FC04;
    case 621u: goto L_0892FC0C;
    case 622u: goto L_0892FC1C;
    case 623u: goto L_0892FC24;
    case 624u: goto L_0892FC30;
    case 625u: goto L_0892FC40;
    case 626u: goto L_0892FC54;
    case 627u: goto L_0892FC6C;
    case 628u: goto L_0892FC80;
    case 629u: goto L_0892FCA0;
    case 630u: goto L_0892FCA8;
    case 631u: goto L_0892FCB8;
    case 632u: goto L_0892FCC8;
    case 633u: goto L_0892FCE8;
    case 634u: goto L_0892FCF0;
    case 635u: goto L_0892FD00;
    case 636u: goto L_0892FD10;
    case 637u: goto L_0892FD30;
    case 638u: goto L_0892FD38;
    case 639u: goto L_0892FD48;
    case 640u: goto L_0892FD5C;
    case 641u: goto L_0892FD68;
    case 642u: goto L_0892FD88;
    case 643u: goto L_0892FD98;
    case 644u: goto L_0892FDC0;
    case 645u: goto L_0892FDC8;
    case 646u: goto L_0892FDD8;
    case 647u: goto L_0892FDF0;
    case 648u: goto L_0892FDF8;
    case 649u: goto L_0892FE04;
    case 650u: goto L_0892FE24;
    case 651u: goto L_0892FE2C;
    case 652u: goto L_0892FE3C;
    case 653u: goto L_0892FE64;
    case 654u: goto L_0892FE70;
    case 655u: goto L_0892FE8C;
    case 656u: goto L_0892FE94;
    case 657u: goto L_0892FEB4;
    case 658u: goto L_0892FEBC;
    case 659u: goto L_0892FECC;
    case 660u: goto L_0892FEDC;
    case 661u: goto L_0892FEFC;
    case 662u: goto L_0892FF04;
    case 663u: goto L_0892FF14;
    case 664u: goto L_0892FF1C;
    case 665u: goto L_0892FF34;
    case 666u: goto L_0892FF50;
    case 667u: goto L_0892FF58;
    case 668u: goto L_0892FF64;
    case 669u: goto L_0892FF6C;
    case 670u: goto L_0892FF74;
    case 671u: goto L_0892FF80;
    case 672u: goto L_0892FF90;
    case 673u: goto L_0892FF98;
    case 674u: goto L_0892FFA0;
    case 675u: goto L_0892FFA4;
    case 676u: goto L_0892FFA8;
    case 677u: goto L_0892FFB8;
    case 678u: goto L_0892FFC0;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_0892C000:
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0892C034;
      }
      goto L_0892C00C;
    }
L_0892C00C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[30]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0892C034;
      }
      goto L_0892C020;
    }
L_0892C020:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[30]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0892D180;
      }
      goto L_0892C034;
    }
L_0892C034:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[28]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0892C070;
      }
      goto L_0892C048;
    }
L_0892C048:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[28]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0892C070;
      }
      goto L_0892C05C;
    }
L_0892C05C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[28]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0892D180;
      }
      goto L_0892C070;
    }
L_0892C070:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[24]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0892C0AC;
      }
      goto L_0892C084;
    }
L_0892C084:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[24]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0892C0AC;
      }
      goto L_0892C098;
    }
L_0892C098:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[24]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0892D180;
      }
      goto L_0892C0AC;
    }
L_0892C0AC:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(220)));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0892C0EC;
      }
      goto L_0892C0C4;
    }
L_0892C0C4:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0892C0EC;
      }
      goto L_0892C0D8;
    }
L_0892C0D8:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0892D180;
      }
      goto L_0892C0EC;
    }
L_0892C0EC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[26]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (2231u << 16u);
      if (branch_taken) {
          goto L_0892C12C;
      }
      goto L_0892C100;
    }
L_0892C100:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[26]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (2231u << 16u);
      if (branch_taken) {
          goto L_0892C12C;
      }
      goto L_0892C114;
    }
L_0892C114:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0892D180;
      }
      goto L_0892C128;
    }
L_0892C128:
    ctx.gpr[4] = (2231u << 16u);
    goto L_0892C12C;
L_0892C12C:
    ctx.gpr[5] = (2231u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-30944)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-31584), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (2231u << 16u);
    ctx.gpr[12] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-31264), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[3] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[11] = (0u | 160u);
    ctx.gpr[10] = (ctx.gpr[11] + ctx.gpr[2]);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[2] = (ctx.gpr[4] + ctx.gpr[2]);
    ctx.gpr[11] = (ctx.gpr[11] + ctx.gpr[12]);
    ctx.gpr[12] = (ctx.gpr[4] + ctx.gpr[12]);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[12] | 0u);
    goto L_0892C1CC;
L_0892C1CC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[15];
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = ctx.fpr[16] - ctx.fpr[14];
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[15] = ctx.fpr[17] - ctx.fpr[15];
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[15];
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0892C3CC;
      }
      goto L_0892C210;
    }
L_0892C210:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[8]) > 0;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[8]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_0892C268;
      }
      goto L_0892C218;
    }
L_0892C218:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[8]) < 0;
    // nop
      if (branch_taken) {
          goto L_0892C3C4;
      }
      goto L_0892C220;
    }
L_0892C220:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[3] << 4u);
    ctx.gpr[7] = (ctx.gpr[11] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[10] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[3] << 4u);
    ctx.gpr[7] = (ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.gpr[3] = (ctx.gpr[7] << 16u);
    ctx.gpr[3] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 16u));
    ctx.gpr[6] = (ctx.gpr[10] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892C3C4;
      }
      goto L_0892C268;
    }
L_0892C268:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[8]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_0892C280;
      }
      goto L_0892C270;
    }
L_0892C270:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892C2C8;
      }
      goto L_0892C278;
    }
L_0892C278:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892C3C4;
      }
      goto L_0892C280;
    }
L_0892C280:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[3] << 4u);
    ctx.gpr[7] = (ctx.gpr[11] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[10] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[3] << 4u);
    ctx.gpr[7] = (ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.gpr[3] = (ctx.gpr[7] << 16u);
    ctx.gpr[3] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 16u));
    ctx.gpr[6] = (ctx.gpr[10] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892C3C4;
      }
      goto L_0892C2C8;
    }
L_0892C2C8:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-16)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[15] = ctx.fpr[15] - ctx.fpr[16];
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-12)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[17] = ctx.fpr[17] - ctx.fpr[18];
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[15] = ctx.fpr[15] - ctx.fpr[17];
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]) & 0x7FFFFFFFu);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]) & 0x7FFFFFFFu);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]) & 0x7FFFFFFFu);
    ctx.fpr[14] = ctx.fpr[15] + ctx.fpr[14];
    ctx.fpr[14] = ctx.fpr[16] / ctx.fpr[14];
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-16)));
    ctx.fpr[0] = ctx.fpr[20] - ctx.fpr[14];
    { const float fs = ctx.fpr[19]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[19] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[19] = fs * ft; }
    ctx.fpr[15] = ctx.fpr[17] + ctx.fpr[19];
    ctx.gpr[6] = (ctx.gpr[3] << 4u);
    ctx.gpr[7] = (ctx.gpr[11] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-12)));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[16];
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-16)));
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[17];
    ctx.gpr[6] = (ctx.gpr[10] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-12)));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[16];
    ctx.gpr[6] = (ctx.gpr[3] << 4u);
    ctx.gpr[7] = (ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[7] << 16u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 16u));
    ctx.gpr[6] = (ctx.gpr[10] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[7] << 4u);
    ctx.gpr[8] = (ctx.gpr[11] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[10] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[7] << 4u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[3] = (ctx.gpr[7] << 16u);
    ctx.gpr[3] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 16u));
    ctx.gpr[6] = (ctx.gpr[10] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    goto L_0892C3C4;
L_0892C3C4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (ctx.gpr[25] | 0u);
      if (branch_taken) {
          goto L_0892C4C4;
      }
      goto L_0892C3CC;
    }
L_0892C3CC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[8]) > 0;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[8]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_0892C3E4;
      }
      goto L_0892C3D4;
    }
L_0892C3D4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[8]) < 0;
    // nop
      if (branch_taken) {
          goto L_0892C4C0;
      }
      goto L_0892C3DC;
    }
L_0892C3DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892C4C0;
      }
      goto L_0892C3E4;
    }
L_0892C3E4:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[8]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_0892C3FC;
      }
      goto L_0892C3EC;
    }
L_0892C3EC:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892C4C0;
      }
      goto L_0892C3F4;
    }
L_0892C3F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892C4C0;
      }
      goto L_0892C3FC;
    }
L_0892C3FC:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-16)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[15] = ctx.fpr[15] - ctx.fpr[16];
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-12)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[17] = ctx.fpr[17] - ctx.fpr[18];
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[15] = ctx.fpr[15] - ctx.fpr[17];
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]) & 0x7FFFFFFFu);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]) & 0x7FFFFFFFu);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]) & 0x7FFFFFFFu);
    ctx.fpr[14] = ctx.fpr[15] + ctx.fpr[14];
    ctx.fpr[14] = ctx.fpr[16] / ctx.fpr[14];
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-16)));
    ctx.fpr[0] = ctx.fpr[20] - ctx.fpr[14];
    { const float fs = ctx.fpr[19]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[19] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[19] = fs * ft; }
    ctx.fpr[15] = ctx.fpr[17] + ctx.fpr[19];
    ctx.gpr[6] = (ctx.gpr[3] << 4u);
    ctx.gpr[7] = (ctx.gpr[11] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-12)));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[16];
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-16)));
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[17];
    ctx.gpr[6] = (ctx.gpr[10] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-12)));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[16];
    ctx.gpr[6] = (ctx.gpr[3] << 4u);
    ctx.gpr[7] = (ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.gpr[3] = (ctx.gpr[7] << 16u);
    ctx.gpr[3] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 16u));
    ctx.gpr[6] = (ctx.gpr[10] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892C4C0;
      }
      goto L_0892C4C0;
    }
L_0892C4C0:
    ctx.gpr[8] = (ctx.gpr[31] | 0u);
    goto L_0892C4C4;
L_0892C4C4:
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[9]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_0892C1CC;
      }
      goto L_0892C4D8;
    }
L_0892C4D8:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[15];
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[16] = ctx.fpr[16] - ctx.fpr[17];
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[16];
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0892C514;
      }
      goto L_0892C50C;
    }
L_0892C50C:
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[31];
    // nop
      if (branch_taken) {
          goto L_0892C52C;
      }
      goto L_0892C514;
    }
L_0892C514:
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0892C5F0;
      }
      goto L_0892C524;
    }
L_0892C524:
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[25];
    // nop
      if (branch_taken) {
          goto L_0892C5F0;
      }
      goto L_0892C52C;
    }
L_0892C52C:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(64));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-16)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[15] = ctx.fpr[15] - ctx.fpr[16];
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-12)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[17] = ctx.fpr[17] - ctx.fpr[18];
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[15] = ctx.fpr[15] - ctx.fpr[17];
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]) & 0x7FFFFFFFu);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]) & 0x7FFFFFFFu);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]) & 0x7FFFFFFFu);
    ctx.fpr[14] = ctx.fpr[15] + ctx.fpr[14];
    ctx.fpr[14] = ctx.fpr[16] / ctx.fpr[14];
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.gpr[5] = (ctx.gpr[12] + static_cast<std::uint32_t>(64));
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-16)));
    ctx.fpr[0] = ctx.fpr[20] - ctx.fpr[14];
    { const float fs = ctx.fpr[19]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[15] = ctx.fpr[17] + ctx.fpr[15];
    ctx.gpr[6] = (ctx.gpr[3] << 4u);
    ctx.gpr[7] = (ctx.gpr[11] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-12)));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[16];
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-16)));
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[17];
    ctx.gpr[5] = (ctx.gpr[10] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-12)));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[16];
    ctx.gpr[4] = (ctx.gpr[3] << 4u);
    ctx.gpr[5] = (ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.gpr[3] = (ctx.gpr[5] << 16u);
    ctx.gpr[3] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 16u));
    ctx.gpr[4] = (ctx.gpr[10] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    goto L_0892C5F0;
L_0892C5F0:
    ctx.gpr[13] = (0u | 160u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    ctx.gpr[14] = (ctx.gpr[13] + ctx.gpr[5]);
    ctx.gpr[13] = (ctx.gpr[13] + ctx.gpr[4]);
    ctx.gpr[15] = (ctx.gpr[31] | 0u);
    ctx.gpr[2] = (ctx.gpr[3] | 0u);
    ctx.gpr[3] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[9] = (ctx.gpr[10] + ctx.gpr[5]);
    ctx.gpr[12] = (ctx.gpr[14] | 0u);
    ctx.gpr[10] = (ctx.gpr[10] + ctx.gpr[4]);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[11]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[24] = (ctx.gpr[25] | 0u);
      if (branch_taken) {
          goto L_0892C948;
      }
      goto L_0892C634;
    }
L_0892C634:
    ctx.gpr[4] = (ctx.gpr[14] | 0u);
    ctx.gpr[5] = (ctx.gpr[13] | 0u);
    goto L_0892C63C;
L_0892C63C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[15];
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = ctx.fpr[16] - ctx.fpr[14];
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[15] = ctx.fpr[17] - ctx.fpr[15];
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[15];
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0892C83C;
      }
      goto L_0892C680;
    }
L_0892C680:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[8]) > 0;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[8]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_0892C6D8;
      }
      goto L_0892C688;
    }
L_0892C688:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[8]) < 0;
    // nop
      if (branch_taken) {
          goto L_0892C834;
      }
      goto L_0892C690;
    }
L_0892C690:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[3] << 4u);
    ctx.gpr[7] = (ctx.gpr[10] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[9] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[3] << 4u);
    ctx.gpr[7] = (ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.gpr[3] = (ctx.gpr[7] << 16u);
    ctx.gpr[3] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 16u));
    ctx.gpr[6] = (ctx.gpr[9] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892C834;
      }
      goto L_0892C6D8;
    }
L_0892C6D8:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[8]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_0892C6F0;
      }
      goto L_0892C6E0;
    }
L_0892C6E0:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892C738;
      }
      goto L_0892C6E8;
    }
L_0892C6E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892C834;
      }
      goto L_0892C6F0;
    }
L_0892C6F0:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[3] << 4u);
    ctx.gpr[7] = (ctx.gpr[10] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[9] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[3] << 4u);
    ctx.gpr[7] = (ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.gpr[3] = (ctx.gpr[7] << 16u);
    ctx.gpr[3] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 16u));
    ctx.gpr[6] = (ctx.gpr[9] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892C834;
      }
      goto L_0892C738;
    }
L_0892C738:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-16)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[15] = ctx.fpr[15] - ctx.fpr[16];
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-12)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[17] = ctx.fpr[17] - ctx.fpr[18];
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[15] = ctx.fpr[15] - ctx.fpr[17];
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]) & 0x7FFFFFFFu);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]) & 0x7FFFFFFFu);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]) & 0x7FFFFFFFu);
    ctx.fpr[14] = ctx.fpr[15] + ctx.fpr[14];
    ctx.fpr[14] = ctx.fpr[16] / ctx.fpr[14];
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-16)));
    ctx.fpr[0] = ctx.fpr[20] - ctx.fpr[14];
    { const float fs = ctx.fpr[19]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[19] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[19] = fs * ft; }
    ctx.fpr[15] = ctx.fpr[17] + ctx.fpr[19];
    ctx.gpr[6] = (ctx.gpr[3] << 4u);
    ctx.gpr[7] = (ctx.gpr[10] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-12)));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[16];
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-16)));
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[17];
    ctx.gpr[6] = (ctx.gpr[9] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-12)));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[16];
    ctx.gpr[6] = (ctx.gpr[3] << 4u);
    ctx.gpr[7] = (ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[7] << 16u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 16u));
    ctx.gpr[6] = (ctx.gpr[9] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[7] << 4u);
    ctx.gpr[8] = (ctx.gpr[10] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[9] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[7] << 4u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[3] = (ctx.gpr[7] << 16u);
    ctx.gpr[3] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 16u));
    ctx.gpr[6] = (ctx.gpr[9] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    goto L_0892C834;
L_0892C834:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (ctx.gpr[25] | 0u);
      if (branch_taken) {
          goto L_0892C934;
      }
      goto L_0892C83C;
    }
L_0892C83C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[8]) > 0;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[8]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_0892C854;
      }
      goto L_0892C844;
    }
L_0892C844:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[8]) < 0;
    // nop
      if (branch_taken) {
          goto L_0892C930;
      }
      goto L_0892C84C;
    }
L_0892C84C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892C930;
      }
      goto L_0892C854;
    }
L_0892C854:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[8]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_0892C86C;
      }
      goto L_0892C85C;
    }
L_0892C85C:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892C930;
      }
      goto L_0892C864;
    }
L_0892C864:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892C930;
      }
      goto L_0892C86C;
    }
L_0892C86C:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-16)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[15] = ctx.fpr[15] - ctx.fpr[16];
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-12)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[17] = ctx.fpr[17] - ctx.fpr[18];
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[15] = ctx.fpr[15] - ctx.fpr[17];
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]) & 0x7FFFFFFFu);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]) & 0x7FFFFFFFu);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]) & 0x7FFFFFFFu);
    ctx.fpr[14] = ctx.fpr[15] + ctx.fpr[14];
    ctx.fpr[14] = ctx.fpr[16] / ctx.fpr[14];
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-16)));
    ctx.fpr[0] = ctx.fpr[20] - ctx.fpr[14];
    { const float fs = ctx.fpr[19]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[19] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[19] = fs * ft; }
    ctx.fpr[15] = ctx.fpr[17] + ctx.fpr[19];
    ctx.gpr[6] = (ctx.gpr[3] << 4u);
    ctx.gpr[7] = (ctx.gpr[10] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-12)));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[16];
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-16)));
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[17];
    ctx.gpr[6] = (ctx.gpr[9] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-12)));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[16];
    ctx.gpr[6] = (ctx.gpr[3] << 4u);
    ctx.gpr[7] = (ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.gpr[3] = (ctx.gpr[7] << 16u);
    ctx.gpr[3] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 16u));
    ctx.gpr[6] = (ctx.gpr[9] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892C930;
      }
      goto L_0892C930;
    }
L_0892C930:
    ctx.gpr[8] = (ctx.gpr[31] | 0u);
    goto L_0892C934;
L_0892C934:
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[11]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_0892C63C;
      }
      goto L_0892C948;
    }
L_0892C948:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(0)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[15];
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(4)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[16] = ctx.fpr[16] - ctx.fpr[17];
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[16];
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0892C984;
      }
      goto L_0892C97C;
    }
L_0892C97C:
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[31];
    // nop
      if (branch_taken) {
          goto L_0892C99C;
      }
      goto L_0892C984;
    }
L_0892C984:
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0892CA64;
      }
      goto L_0892C994;
    }
L_0892C994:
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[25];
    // nop
      if (branch_taken) {
          goto L_0892CA64;
      }
      goto L_0892C99C;
    }
L_0892C99C:
    ctx.gpr[4] = (ctx.gpr[2] << 4u);
    ctx.gpr[5] = (ctx.gpr[14] + ctx.gpr[4]);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-16)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[15] = ctx.fpr[15] - ctx.fpr[16];
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-12)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[17] = ctx.fpr[17] - ctx.fpr[18];
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[15] = ctx.fpr[15] - ctx.fpr[17];
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]) & 0x7FFFFFFFu);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]) & 0x7FFFFFFFu);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]) & 0x7FFFFFFFu);
    ctx.fpr[14] = ctx.fpr[15] + ctx.fpr[14];
    ctx.fpr[14] = ctx.fpr[16] / ctx.fpr[14];
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[13] + ctx.gpr[4]);
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-16)));
    ctx.fpr[0] = ctx.fpr[20] - ctx.fpr[14];
    { const float fs = ctx.fpr[19]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[15] = ctx.fpr[17] + ctx.fpr[15];
    ctx.gpr[6] = (ctx.gpr[3] << 4u);
    ctx.gpr[7] = (ctx.gpr[10] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-12)));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[16];
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-16)));
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[17];
    ctx.gpr[4] = (ctx.gpr[9] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-12)));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[16];
    ctx.gpr[4] = (ctx.gpr[3] << 4u);
    ctx.gpr[5] = (ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.gpr[3] = (ctx.gpr[5] << 16u);
    ctx.gpr[3] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 16u));
    ctx.gpr[4] = (ctx.gpr[9] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    goto L_0892CA64;
L_0892CA64:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[15]) >= 0;
    ctx.gpr[8] = (ctx.gpr[15] & 1u);
      if (branch_taken) {
          goto L_0892CA7C;
      }
      goto L_0892CA6C;
    }
L_0892CA6C:
    ctx.gpr[4] = (0u - ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[4] << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 16u));
      if (branch_taken) {
          goto L_0892CA84;
      }
      goto L_0892CA7C;
    }
L_0892CA7C:
    ctx.gpr[8] = (ctx.gpr[8] << 16u);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 16u));
    goto L_0892CA84;
L_0892CA84:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    ctx.gpr[6] = (ctx.gpr[8] << 7u);
    ctx.gpr[7] = (ctx.gpr[8] << 5u);
    ctx.gpr[2] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[12] = (ctx.gpr[2] + ctx.gpr[5]);
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[24]) >= 0;
    ctx.gpr[8] = (ctx.gpr[24] & 1u);
      if (branch_taken) {
          goto L_0892CAB8;
      }
      goto L_0892CAA8;
    }
L_0892CAA8:
    ctx.gpr[6] = (0u - ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[6] << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 16u));
      if (branch_taken) {
          goto L_0892CAC0;
      }
      goto L_0892CAB8;
    }
L_0892CAB8:
    ctx.gpr[8] = (ctx.gpr[8] << 16u);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 16u));
    goto L_0892CAC0;
L_0892CAC0:
    ctx.gpr[10] = (ctx.gpr[3] | 0u);
    ctx.gpr[3] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[8] << 7u);
    ctx.gpr[7] = (ctx.gpr[8] << 5u);
    ctx.gpr[18] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[17] = (ctx.gpr[18] + ctx.gpr[5]);
    ctx.gpr[11] = (ctx.gpr[12] | 0u);
    ctx.gpr[18] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[10]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[12] | 0u);
      if (branch_taken) {
          goto L_0892CE04;
      }
      goto L_0892CAF4;
    }
L_0892CAF4:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    goto L_0892CAF8;
L_0892CAF8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[15];
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = ctx.fpr[16] - ctx.fpr[14];
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[15] = ctx.fpr[17] - ctx.fpr[15];
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[15];
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0892CCF8;
      }
      goto L_0892CB3C;
    }
L_0892CB3C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[8]) > 0;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[8]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_0892CB94;
      }
      goto L_0892CB44;
    }
L_0892CB44:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[8]) < 0;
    // nop
      if (branch_taken) {
          goto L_0892CCF0;
      }
      goto L_0892CB4C;
    }
L_0892CB4C:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[3] << 4u);
    ctx.gpr[7] = (ctx.gpr[18] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[17] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[3] << 4u);
    ctx.gpr[7] = (ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.gpr[3] = (ctx.gpr[7] << 16u);
    ctx.gpr[3] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 16u));
    ctx.gpr[6] = (ctx.gpr[17] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892CCF0;
      }
      goto L_0892CB94;
    }
L_0892CB94:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[8]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_0892CBAC;
      }
      goto L_0892CB9C;
    }
L_0892CB9C:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892CBF4;
      }
      goto L_0892CBA4;
    }
L_0892CBA4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892CCF0;
      }
      goto L_0892CBAC;
    }
L_0892CBAC:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[3] << 4u);
    ctx.gpr[7] = (ctx.gpr[18] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[17] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[3] << 4u);
    ctx.gpr[7] = (ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.gpr[3] = (ctx.gpr[7] << 16u);
    ctx.gpr[3] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 16u));
    ctx.gpr[6] = (ctx.gpr[17] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892CCF0;
      }
      goto L_0892CBF4;
    }
L_0892CBF4:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-16)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[15] = ctx.fpr[15] - ctx.fpr[16];
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-12)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[17] = ctx.fpr[17] - ctx.fpr[18];
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[15] = ctx.fpr[15] - ctx.fpr[17];
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]) & 0x7FFFFFFFu);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]) & 0x7FFFFFFFu);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]) & 0x7FFFFFFFu);
    ctx.fpr[14] = ctx.fpr[15] + ctx.fpr[14];
    ctx.fpr[14] = ctx.fpr[16] / ctx.fpr[14];
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-16)));
    ctx.fpr[0] = ctx.fpr[20] - ctx.fpr[14];
    { const float fs = ctx.fpr[19]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[19] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[19] = fs * ft; }
    ctx.fpr[15] = ctx.fpr[17] + ctx.fpr[19];
    ctx.gpr[6] = (ctx.gpr[3] << 4u);
    ctx.gpr[7] = (ctx.gpr[18] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-12)));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[16];
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-16)));
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[17];
    ctx.gpr[6] = (ctx.gpr[17] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-12)));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[16];
    ctx.gpr[6] = (ctx.gpr[3] << 4u);
    ctx.gpr[7] = (ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[7] << 16u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 16u));
    ctx.gpr[6] = (ctx.gpr[17] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[7] << 4u);
    ctx.gpr[8] = (ctx.gpr[18] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[17] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[7] << 4u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[3] = (ctx.gpr[7] << 16u);
    ctx.gpr[3] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 16u));
    ctx.gpr[6] = (ctx.gpr[17] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    goto L_0892CCF0;
L_0892CCF0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (ctx.gpr[25] | 0u);
      if (branch_taken) {
          goto L_0892CDF0;
      }
      goto L_0892CCF8;
    }
L_0892CCF8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[8]) > 0;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[8]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_0892CD10;
      }
      goto L_0892CD00;
    }
L_0892CD00:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[8]) < 0;
    // nop
      if (branch_taken) {
          goto L_0892CDEC;
      }
      goto L_0892CD08;
    }
L_0892CD08:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892CDEC;
      }
      goto L_0892CD10;
    }
L_0892CD10:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[8]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_0892CD28;
      }
      goto L_0892CD18;
    }
L_0892CD18:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892CDEC;
      }
      goto L_0892CD20;
    }
L_0892CD20:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892CDEC;
      }
      goto L_0892CD28;
    }
L_0892CD28:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-16)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[15] = ctx.fpr[15] - ctx.fpr[16];
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-12)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[17] = ctx.fpr[17] - ctx.fpr[18];
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[15] = ctx.fpr[15] - ctx.fpr[17];
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]) & 0x7FFFFFFFu);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]) & 0x7FFFFFFFu);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]) & 0x7FFFFFFFu);
    ctx.fpr[14] = ctx.fpr[15] + ctx.fpr[14];
    ctx.fpr[14] = ctx.fpr[16] / ctx.fpr[14];
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-16)));
    ctx.fpr[0] = ctx.fpr[20] - ctx.fpr[14];
    { const float fs = ctx.fpr[19]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[19] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[19] = fs * ft; }
    ctx.fpr[15] = ctx.fpr[17] + ctx.fpr[19];
    ctx.gpr[6] = (ctx.gpr[3] << 4u);
    ctx.gpr[7] = (ctx.gpr[18] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-12)));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[16];
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-16)));
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[17];
    ctx.gpr[6] = (ctx.gpr[17] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-12)));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[16];
    ctx.gpr[6] = (ctx.gpr[3] << 4u);
    ctx.gpr[7] = (ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.gpr[3] = (ctx.gpr[7] << 16u);
    ctx.gpr[3] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 16u));
    ctx.gpr[6] = (ctx.gpr[17] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892CDEC;
      }
      goto L_0892CDEC;
    }
L_0892CDEC:
    ctx.gpr[8] = (ctx.gpr[31] | 0u);
    goto L_0892CDF0;
L_0892CDF0:
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[10]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_0892CAF8;
      }
      goto L_0892CE04;
    }
L_0892CE04:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(0)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[15];
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(4)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[16] = ctx.fpr[16] - ctx.fpr[17];
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[16];
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0892CE40;
      }
      goto L_0892CE38;
    }
L_0892CE38:
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[31];
    // nop
      if (branch_taken) {
          goto L_0892CE58;
      }
      goto L_0892CE40;
    }
L_0892CE40:
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0892CF20;
      }
      goto L_0892CE50;
    }
L_0892CE50:
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[25];
    // nop
      if (branch_taken) {
          goto L_0892CF20;
      }
      goto L_0892CE58;
    }
L_0892CE58:
    ctx.gpr[4] = (ctx.gpr[10] << 4u);
    ctx.gpr[5] = (ctx.gpr[12] + ctx.gpr[4]);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-16)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[15] = ctx.fpr[15] - ctx.fpr[16];
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-12)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[17] = ctx.fpr[17] - ctx.fpr[18];
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) & 0x7FFFFFFFu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) & 0x7FFFFFFFu);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]) & 0x7FFFFFFFu);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[12] = ctx.fpr[16] / ctx.fpr[12];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[4]);
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-16)));
    ctx.fpr[18] = ctx.fpr[20] - ctx.fpr[12];
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    ctx.gpr[6] = (ctx.gpr[3] << 4u);
    ctx.gpr[7] = (ctx.gpr[18] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-12)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-16)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-12)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[15];
    ctx.gpr[4] = (ctx.gpr[3] << 4u);
    ctx.gpr[5] = (ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.gpr[3] = (ctx.gpr[5] << 16u);
    ctx.gpr[3] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 16u));
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0892CF20;
L_0892CF20:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[3]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892D180;
      }
      goto L_0892CF2C;
    }
L_0892CF2C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
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
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[20] = (ctx.gpr[3] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0892CF98;
      }
      goto L_0892CF58;
    }
L_0892CF58:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_0892CF5C;
L_0892CF5C:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[15];
    ctx.fpr[13] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[17];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_0892CF5C;
      }
      goto L_0892CF98;
    }
L_0892CF98:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_0892D014;
      }
      goto L_0892CFA8;
    }
L_0892CFA8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[16];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[16];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_0892CFA8;
      }
      goto L_0892D014;
    }
L_0892D014:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-6680)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6684)));
    ctx.gpr[16] = (ctx.gpr[5] ^ ctx.gpr[4]);
    ctx.gpr[16] = (0u < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892D080;
      }
      goto L_0892D030;
    }
L_0892D030:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-6680)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-20));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[8]);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-6680)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(-6680), ctx.gpr[4]);
    goto L_0892D080;
L_0892D080:
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x0892D08Cu);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 82u, 0x08928580u>(ctx, &aot_mem) && ctx.pc == 0x0892D08Cu) goto L_0892D08C;
    return;
L_0892D08C:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892D0E4;
      }
      goto L_0892D094;
    }
L_0892D094:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-6680)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-20));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[8]);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-6680)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(-6680), ctx.gpr[4]);
    goto L_0892D0E4;
L_0892D0E4:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-6680)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0892D0F4u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 82u, 0x08928580u>(ctx, &aot_mem) && ctx.pc == 0x0892D0F4u) goto L_0892D0F4;
    return;
L_0892D0F4:
    ctx.gpr[16] = (0u | 2u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    ctx.gpr[5] = (0u | 32u);
    ctx.gpr[18] = (ctx.gpr[18] + ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[5]);
      if (branch_taken) {
          goto L_0892D174;
      }
      goto L_0892D10C;
    }
L_0892D10C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0892D118u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 82u, 0x08928580u>(ctx, &aot_mem) && ctx.pc == 0x0892D118u) goto L_0892D118;
    return;
L_0892D118:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-6680)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(20));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(-6680), ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_0892D10C;
      }
      goto L_0892D174;
    }
L_0892D174:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0892D180u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 82u, 0x08928580u>(ctx, &aot_mem) && ctx.pc == 0x0892D180u) goto L_0892D180;
    return;
L_0892D180:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    goto L_0892D184;
L_0892D184:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(34))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), ctx.gpr[5]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 512u, 0x0892BEF4u>(ctx, &aot_mem); return;
      }
      goto L_0892D1A8;
    }
L_0892D1A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    goto L_0892D1AC;
L_0892D1AC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(236)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(232), ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(236), ctx.gpr[5]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 506u, 0x0892BE5Cu>(ctx, &aot_mem); return;
      }
      goto L_0892D1CC;
    }
L_0892D1CC:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(240)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(244)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(248)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(252)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(264)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(268)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(272)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(280)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(284)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(288)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(292)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(296)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(300)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(304));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892D214:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-224));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), ctx.gpr[31]);
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(22912)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(11142))))));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892D66C;
      }
      goto L_0892D26C;
    }
L_0892D26C:
    ctx.gpr[31] = (0x0892D274u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x0892D274u) goto L_0892D274;
    return;
L_0892D274:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892D66C;
      }
      goto L_0892D280;
    }
L_0892D280:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u | 169u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0892D66C;
      }
      goto L_0892D290;
    }
L_0892D290:
    ctx.gpr[31] = (0x0892D298u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 124u, 0x088A08C4u>(ctx, &aot_mem) && ctx.pc == 0x0892D298u) goto L_0892D298;
    return;
L_0892D298:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0892D66C;
      }
      goto L_0892D2A4;
    }
L_0892D2A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(836)));
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0892D66C;
      }
      goto L_0892D2B4;
    }
L_0892D2B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(836)));
    ctx.gpr[5] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0892D66C;
      }
      goto L_0892D2C4;
    }
L_0892D2C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(836)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0892D66C;
      }
      goto L_0892D2D4;
    }
L_0892D2D4:
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7776)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (2275u << 16u);
      if (branch_taken) {
          goto L_0892D66C;
      }
      goto L_0892D2EC;
    }
L_0892D2EC:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(30640));
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[4] = (16281u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[19] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(32));
    ctx.gpr[23] = (2227u << 16u);
    ctx.gpr[5] = (16528u << 16u);
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[4]);
    goto L_0892D33C;
L_0892D33C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892D654;
      }
      goto L_0892D348;
    }
L_0892D348:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(50)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892D654;
      }
      goto L_0892D354;
    }
L_0892D354:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[20])) && ctx.fpr[12] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0892D390;
      }
      goto L_0892D368;
    }
L_0892D368:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[20])) && ctx.fpr[12] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0892D390;
      }
      goto L_0892D37C;
    }
L_0892D37C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(44)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[20])) && ctx.fpr[12] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0892D654;
      }
      goto L_0892D390;
    }
L_0892D390:
    ctx.gpr[31] = (0x0892D398u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 166u, 0x089D568Cu>(ctx, &aot_mem) && ctx.pc == 0x0892D398u) goto L_0892D398;
    return;
L_0892D398:
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (2229u << 16u);
      if (branch_taken) {
          goto L_0892D654;
      }
      goto L_0892D3D0;
    }
L_0892D3D0:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0892D414;
      }
      goto L_0892D3E8;
    }
L_0892D3E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(22912)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(11142))))));
    ctx.gpr[5] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 3u));
    ctx.gpr[5] = (ctx.gpr[5] >> 29u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 3u));
    ctx.gpr[16] = (ctx.gpr[4] << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 16u));
      if (branch_taken) {
          goto L_0892D464;
      }
      goto L_0892D414;
    }
L_0892D414:
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[14];
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[14];
    ctx.fpr[13] = ctx.fpr[26] - ctx.fpr[13];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(22912)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(11142))))));
    ctx.gpr[5] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 3u));
    ctx.gpr[5] = (ctx.gpr[5] >> 29u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 3u));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[16] = (ctx.gpr[4] << 16u);
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 16u));
    goto L_0892D464;
L_0892D464:
    ctx.fpr[12] = ctx.fpr[26] / ctx.fpr[12];
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<1u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 1u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x0892D484u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x0892D484u) goto L_0892D484;
    return;
L_0892D484:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[6] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(32));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(16));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[15];
    ctx.gpr[6] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(32));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(16));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.fpr[15] = ctx.fpr[16] - ctx.fpr[15];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[16] = ctx.fpr[12] - ctx.fpr[16];
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[17];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[14] - ctx.fpr[13];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((ctx.fpr[18] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
      if (branch_taken) {
          goto L_0892D5EC;
      }
      goto L_0892D584;
    }
L_0892D584:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(27904)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[11] = (0u | 0u);
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[31] = (0x0892D5E4u);
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 149u, 0x0892930Cu>(ctx, &aot_mem) && ctx.pc == 0x0892D5E4u) goto L_0892D5E4;
    return;
L_0892D5E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892D654;
      }
      goto L_0892D5EC;
    }
L_0892D5EC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(27904)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]) ^ 0x80000000u);
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]) ^ 0x80000000u);
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[11] = (0u | 0u);
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[31] = (0x0892D654u);
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 149u, 0x0892930Cu>(ctx, &aot_mem) && ctx.pc == 0x0892D654u) goto L_0892D654;
    return;
L_0892D654:
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7776)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          goto L_0892D33C;
      }
      goto L_0892D66C;
    }
L_0892D66C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892D6B4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[31]);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]) ^ 0x80000000u);
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
        goto L_0892D6E0;
    }
    goto L_0892D6E0;
L_0892D6E0:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(27900)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(27900));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1)));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(2)));
    ctx.gpr[5] = (15948u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[10] = (0u | 255u);
    ctx.gpr[11] = (0u | 2048u);
    ctx.gpr[31] = (0x0892D718u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0008_entry, 8u, 295u, 0x08825BFCu>(ctx, &aot_mem) && ctx.pc == 0x0892D718u) goto L_0892D718;
    return;
L_0892D718:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892D724:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27844)));
    ctx.fpr[14] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(27848), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27840)));
    ctx.fpr[14] = ctx.fpr[14] / ctx.fpr[15];
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(27852), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(27856), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16672u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(27860), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16014u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 14571u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(27864), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27868)));
    ctx.gpr[4] = (15744u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(27872), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27876)));
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(27884), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27880)));
    ctx.gpr[4] = (16281u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(27888), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(27892), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16268u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (2227u << 16u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(27896), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892D808:
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27972)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(27968)));
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
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(27976), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = ctx.fpr[16] / ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(27984), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[18] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(27980), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(27988), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(27992), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892D880:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.gpr[16] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-21000)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892D8B8;
      }
      goto L_0892D8B0;
    }
L_0892D8B0:
    ctx.gpr[31] = (0x0892D8B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 315u, 0x08AF96A0u>(ctx, &aot_mem) && ctx.pc == 0x0892D8B8u) goto L_0892D8B8;
    return;
L_0892D8B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-21000)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x0892D8C8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 712u, 0x0890BFC8u>(ctx, &aot_mem) && ctx.pc == 0x0892D8C8u) goto L_0892D8C8;
    return;
L_0892D8C8:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[31] = (0x0892D8DCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(21056));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 676u, 0x0890BB8Cu>(ctx, &aot_mem) && ctx.pc == 0x0892D8DCu) goto L_0892D8DC;
    return;
L_0892D8DC:
    ctx.gpr[5] = (17279u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x0892D8FCu);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 692u, 0x089BF5B0u>(ctx, &aot_mem) && ctx.pc == 0x0892D8FCu) goto L_0892D8FC;
    return;
L_0892D8FC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0892D908u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 20u, 0x0890C174u>(ctx, &aot_mem) && ctx.pc == 0x0892D908u) goto L_0892D908;
    return;
L_0892D908:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 5u);
    ctx.gpr[31] = (0x0892D91Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(21060));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 676u, 0x0890BB8Cu>(ctx, &aot_mem) && ctx.pc == 0x0892D91Cu) goto L_0892D91C;
    return;
L_0892D91C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x0892D930u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 692u, 0x089BF5B0u>(ctx, &aot_mem) && ctx.pc == 0x0892D930u) goto L_0892D930;
    return;
L_0892D930:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0892D93Cu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 20u, 0x0890C174u>(ctx, &aot_mem) && ctx.pc == 0x0892D93Cu) goto L_0892D93C;
    return;
L_0892D93C:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 6u);
    ctx.gpr[31] = (0x0892D950u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(21068));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 676u, 0x0890BB8Cu>(ctx, &aot_mem) && ctx.pc == 0x0892D950u) goto L_0892D950;
    return;
L_0892D950:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x0892D964u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 692u, 0x089BF5B0u>(ctx, &aot_mem) && ctx.pc == 0x0892D964u) goto L_0892D964;
    return;
L_0892D964:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0892D970u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 20u, 0x0890C174u>(ctx, &aot_mem) && ctx.pc == 0x0892D970u) goto L_0892D970;
    return;
L_0892D970:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x0892D984u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(21076));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 676u, 0x0890BB8Cu>(ctx, &aot_mem) && ctx.pc == 0x0892D984u) goto L_0892D984;
    return;
L_0892D984:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x0892D998u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 692u, 0x089BF5B0u>(ctx, &aot_mem) && ctx.pc == 0x0892D998u) goto L_0892D998;
    return;
L_0892D998:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0892D9A4u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 20u, 0x0890C174u>(ctx, &aot_mem) && ctx.pc == 0x0892D9A4u) goto L_0892D9A4;
    return;
L_0892D9A4:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 6u);
    ctx.gpr[31] = (0x0892D9B8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(21084));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 676u, 0x0890BB8Cu>(ctx, &aot_mem) && ctx.pc == 0x0892D9B8u) goto L_0892D9B8;
    return;
L_0892D9B8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x0892D9CCu);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 692u, 0x089BF5B0u>(ctx, &aot_mem) && ctx.pc == 0x0892D9CCu) goto L_0892D9CC;
    return;
L_0892D9CC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0892D9D8u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 20u, 0x0890C174u>(ctx, &aot_mem) && ctx.pc == 0x0892D9D8u) goto L_0892D9D8;
    return;
L_0892D9D8:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 7u);
    ctx.gpr[31] = (0x0892D9ECu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(21092));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 676u, 0x0890BB8Cu>(ctx, &aot_mem) && ctx.pc == 0x0892D9ECu) goto L_0892D9EC;
    return;
L_0892D9EC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x0892DA00u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 692u, 0x089BF5B0u>(ctx, &aot_mem) && ctx.pc == 0x0892DA00u) goto L_0892DA00;
    return;
L_0892DA00:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0892DA0Cu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 20u, 0x0890C174u>(ctx, &aot_mem) && ctx.pc == 0x0892DA0Cu) goto L_0892DA0C;
    return;
L_0892DA0C:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x0892DA20u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(21100));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 676u, 0x0890BB8Cu>(ctx, &aot_mem) && ctx.pc == 0x0892DA20u) goto L_0892DA20;
    return;
L_0892DA20:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x0892DA34u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 692u, 0x089BF5B0u>(ctx, &aot_mem) && ctx.pc == 0x0892DA34u) goto L_0892DA34;
    return;
L_0892DA34:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0892DA40u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 20u, 0x0890C174u>(ctx, &aot_mem) && ctx.pc == 0x0892DA40u) goto L_0892DA40;
    return;
L_0892DA40:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 5u);
    ctx.gpr[31] = (0x0892DA54u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(21108));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 676u, 0x0890BB8Cu>(ctx, &aot_mem) && ctx.pc == 0x0892DA54u) goto L_0892DA54;
    return;
L_0892DA54:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x0892DA68u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 692u, 0x089BF5B0u>(ctx, &aot_mem) && ctx.pc == 0x0892DA68u) goto L_0892DA68;
    return;
L_0892DA68:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0892DA74u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 20u, 0x0890C174u>(ctx, &aot_mem) && ctx.pc == 0x0892DA74u) goto L_0892DA74;
    return;
L_0892DA74:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0892DA84u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(21116));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 680u, 0x0890BC14u>(ctx, &aot_mem) && ctx.pc == 0x0892DA84u) goto L_0892DA84;
    return;
L_0892DA84:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0892DA90u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 565u, 0x0890B4E4u>(ctx, &aot_mem) && ctx.pc == 0x0892DA90u) goto L_0892DA90;
    return;
L_0892DA90:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0892DA9Cu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-10001));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 20u, 0x0890C174u>(ctx, &aot_mem) && ctx.pc == 0x0892DA9Cu) goto L_0892DA9C;
    return;
L_0892DA9C:
    ctx.gpr[31] = (0x0892DAA4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 712u, 0x0890BFC8u>(ctx, &aot_mem) && ctx.pc == 0x0892DAA4u) goto L_0892DAA4;
    return;
L_0892DAA4:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(21124));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0892DABCu);
    ctx.gpr[6] = (0u | 15u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 676u, 0x0890BB8Cu>(ctx, &aot_mem) && ctx.pc == 0x0892DABCu) goto L_0892DABC;
    return;
L_0892DABC:
    ctx.gpr[5] = (16880u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0892DACCu);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BB6Cu>(ctx, &aot_mem) && ctx.pc == 0x0892DACCu) goto L_0892DACC;
    return;
L_0892DACC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0892DAD8u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 20u, 0x0890C174u>(ctx, &aot_mem) && ctx.pc == 0x0892DAD8u) goto L_0892DAD8;
    return;
L_0892DAD8:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0892DAE8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(21140));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 680u, 0x0890BC14u>(ctx, &aot_mem) && ctx.pc == 0x0892DAE8u) goto L_0892DAE8;
    return;
L_0892DAE8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0892DAF4u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 565u, 0x0890B4E4u>(ctx, &aot_mem) && ctx.pc == 0x0892DAF4u) goto L_0892DAF4;
    return;
L_0892DAF4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0892DB00u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-10001));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 20u, 0x0890C174u>(ctx, &aot_mem) && ctx.pc == 0x0892DB00u) goto L_0892DB00;
    return;
L_0892DB00:
    ctx.gpr[31] = (0x0892DB08u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 712u, 0x0890BFC8u>(ctx, &aot_mem) && ctx.pc == 0x0892DB08u) goto L_0892DB08;
    return;
L_0892DB08:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 6u);
    ctx.gpr[31] = (0x0892DB1Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(21148));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 676u, 0x0890BB8Cu>(ctx, &aot_mem) && ctx.pc == 0x0892DB1Cu) goto L_0892DB1C;
    return;
L_0892DB1C:
    ctx.gpr[5] = (17154u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0892DB2Cu);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BB6Cu>(ctx, &aot_mem) && ctx.pc == 0x0892DB2Cu) goto L_0892DB2C;
    return;
L_0892DB2C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0892DB38u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 20u, 0x0890C174u>(ctx, &aot_mem) && ctx.pc == 0x0892DB38u) goto L_0892DB38;
    return;
L_0892DB38:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 11u);
    ctx.gpr[31] = (0x0892DB4Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(21156));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 676u, 0x0890BB8Cu>(ctx, &aot_mem) && ctx.pc == 0x0892DB4Cu) goto L_0892DB4C;
    return;
L_0892DB4C:
    ctx.gpr[5] = (17155u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0892DB5Cu);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BB6Cu>(ctx, &aot_mem) && ctx.pc == 0x0892DB5Cu) goto L_0892DB5C;
    return;
L_0892DB5C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0892DB68u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 20u, 0x0890C174u>(ctx, &aot_mem) && ctx.pc == 0x0892DB68u) goto L_0892DB68;
    return;
L_0892DB68:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 5u);
    ctx.gpr[31] = (0x0892DB7Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(21168));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 676u, 0x0890BB8Cu>(ctx, &aot_mem) && ctx.pc == 0x0892DB7Cu) goto L_0892DB7C;
    return;
L_0892DB7C:
    ctx.gpr[5] = (17156u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0892DB8Cu);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BB6Cu>(ctx, &aot_mem) && ctx.pc == 0x0892DB8Cu) goto L_0892DB8C;
    return;
L_0892DB8C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0892DB98u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 20u, 0x0890C174u>(ctx, &aot_mem) && ctx.pc == 0x0892DB98u) goto L_0892DB98;
    return;
L_0892DB98:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 7u);
    ctx.gpr[31] = (0x0892DBACu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(21176));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 676u, 0x0890BB8Cu>(ctx, &aot_mem) && ctx.pc == 0x0892DBACu) goto L_0892DBAC;
    return;
L_0892DBAC:
    ctx.gpr[5] = (17157u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0892DBBCu);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BB6Cu>(ctx, &aot_mem) && ctx.pc == 0x0892DBBCu) goto L_0892DBBC;
    return;
L_0892DBBC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0892DBC8u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 20u, 0x0890C174u>(ctx, &aot_mem) && ctx.pc == 0x0892DBC8u) goto L_0892DBC8;
    return;
L_0892DBC8:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 9u);
    ctx.gpr[31] = (0x0892DBDCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(21184));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 676u, 0x0890BB8Cu>(ctx, &aot_mem) && ctx.pc == 0x0892DBDCu) goto L_0892DBDC;
    return;
L_0892DBDC:
    ctx.gpr[5] = (17159u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0892DBECu);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BB6Cu>(ctx, &aot_mem) && ctx.pc == 0x0892DBECu) goto L_0892DBEC;
    return;
L_0892DBEC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0892DBF8u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 20u, 0x0890C174u>(ctx, &aot_mem) && ctx.pc == 0x0892DBF8u) goto L_0892DBF8;
    return;
L_0892DBF8:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 8u);
    ctx.gpr[31] = (0x0892DC0Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(21196));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 676u, 0x0890BB8Cu>(ctx, &aot_mem) && ctx.pc == 0x0892DC0Cu) goto L_0892DC0C;
    return;
L_0892DC0C:
    ctx.gpr[5] = (17160u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0892DC1Cu);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BB6Cu>(ctx, &aot_mem) && ctx.pc == 0x0892DC1Cu) goto L_0892DC1C;
    return;
L_0892DC1C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0892DC28u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 20u, 0x0890C174u>(ctx, &aot_mem) && ctx.pc == 0x0892DC28u) goto L_0892DC28;
    return;
L_0892DC28:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 7u);
    ctx.gpr[31] = (0x0892DC3Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(21208));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 676u, 0x0890BB8Cu>(ctx, &aot_mem) && ctx.pc == 0x0892DC3Cu) goto L_0892DC3C;
    return;
L_0892DC3C:
    ctx.gpr[5] = (17161u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0892DC4Cu);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BB6Cu>(ctx, &aot_mem) && ctx.pc == 0x0892DC4Cu) goto L_0892DC4C;
    return;
L_0892DC4C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0892DC58u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 20u, 0x0890C174u>(ctx, &aot_mem) && ctx.pc == 0x0892DC58u) goto L_0892DC58;
    return;
L_0892DC58:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 6u);
    ctx.gpr[31] = (0x0892DC6Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(21216));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 676u, 0x0890BB8Cu>(ctx, &aot_mem) && ctx.pc == 0x0892DC6Cu) goto L_0892DC6C;
    return;
L_0892DC6C:
    ctx.gpr[5] = (17165u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0892DC7Cu);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BB6Cu>(ctx, &aot_mem) && ctx.pc == 0x0892DC7Cu) goto L_0892DC7C;
    return;
L_0892DC7C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0892DC88u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 20u, 0x0890C174u>(ctx, &aot_mem) && ctx.pc == 0x0892DC88u) goto L_0892DC88;
    return;
L_0892DC88:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 8u);
    ctx.gpr[31] = (0x0892DC9Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(21224));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 676u, 0x0890BB8Cu>(ctx, &aot_mem) && ctx.pc == 0x0892DC9Cu) goto L_0892DC9C;
    return;
L_0892DC9C:
    ctx.gpr[5] = (17166u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0892DCACu);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BB6Cu>(ctx, &aot_mem) && ctx.pc == 0x0892DCACu) goto L_0892DCAC;
    return;
L_0892DCAC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0892DCB8u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 20u, 0x0890C174u>(ctx, &aot_mem) && ctx.pc == 0x0892DCB8u) goto L_0892DCB8;
    return;
L_0892DCB8:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 6u);
    ctx.gpr[31] = (0x0892DCCCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(21236));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 676u, 0x0890BB8Cu>(ctx, &aot_mem) && ctx.pc == 0x0892DCCCu) goto L_0892DCCC;
    return;
L_0892DCCC:
    ctx.gpr[5] = (17167u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0892DCDCu);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BB6Cu>(ctx, &aot_mem) && ctx.pc == 0x0892DCDCu) goto L_0892DCDC;
    return;
L_0892DCDC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0892DCE8u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 20u, 0x0890C174u>(ctx, &aot_mem) && ctx.pc == 0x0892DCE8u) goto L_0892DCE8;
    return;
L_0892DCE8:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x0892DCFCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(21244));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 676u, 0x0890BB8Cu>(ctx, &aot_mem) && ctx.pc == 0x0892DCFCu) goto L_0892DCFC;
    return;
L_0892DCFC:
    ctx.gpr[5] = (17168u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0892DD0Cu);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BB6Cu>(ctx, &aot_mem) && ctx.pc == 0x0892DD0Cu) goto L_0892DD0C;
    return;
L_0892DD0C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0892DD18u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 20u, 0x0890C174u>(ctx, &aot_mem) && ctx.pc == 0x0892DD18u) goto L_0892DD18;
    return;
L_0892DD18:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x0892DD2Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(21252));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 676u, 0x0890BB8Cu>(ctx, &aot_mem) && ctx.pc == 0x0892DD2Cu) goto L_0892DD2C;
    return;
L_0892DD2C:
    ctx.gpr[5] = (17169u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0892DD3Cu);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BB6Cu>(ctx, &aot_mem) && ctx.pc == 0x0892DD3Cu) goto L_0892DD3C;
    return;
L_0892DD3C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0892DD48u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 20u, 0x0890C174u>(ctx, &aot_mem) && ctx.pc == 0x0892DD48u) goto L_0892DD48;
    return;
L_0892DD48:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 7u);
    ctx.gpr[31] = (0x0892DD5Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(21260));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 676u, 0x0890BB8Cu>(ctx, &aot_mem) && ctx.pc == 0x0892DD5Cu) goto L_0892DD5C;
    return;
L_0892DD5C:
    ctx.gpr[5] = (17170u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0892DD6Cu);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BB6Cu>(ctx, &aot_mem) && ctx.pc == 0x0892DD6Cu) goto L_0892DD6C;
    return;
L_0892DD6C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0892DD78u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 20u, 0x0890C174u>(ctx, &aot_mem) && ctx.pc == 0x0892DD78u) goto L_0892DD78;
    return;
L_0892DD78:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 8u);
    ctx.gpr[31] = (0x0892DD8Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(21268));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 676u, 0x0890BB8Cu>(ctx, &aot_mem) && ctx.pc == 0x0892DD8Cu) goto L_0892DD8C;
    return;
L_0892DD8C:
    ctx.gpr[5] = (17173u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0892DD9Cu);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BB6Cu>(ctx, &aot_mem) && ctx.pc == 0x0892DD9Cu) goto L_0892DD9C;
    return;
L_0892DD9C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0892DDA8u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 20u, 0x0890C174u>(ctx, &aot_mem) && ctx.pc == 0x0892DDA8u) goto L_0892DDA8;
    return;
L_0892DDA8:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 9u);
    ctx.gpr[31] = (0x0892DDBCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(21280));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 676u, 0x0890BB8Cu>(ctx, &aot_mem) && ctx.pc == 0x0892DDBCu) goto L_0892DDBC;
    return;
L_0892DDBC:
    ctx.gpr[5] = (17174u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0892DDCCu);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BB6Cu>(ctx, &aot_mem) && ctx.pc == 0x0892DDCCu) goto L_0892DDCC;
    return;
L_0892DDCC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0892DDD8u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 20u, 0x0890C174u>(ctx, &aot_mem) && ctx.pc == 0x0892DDD8u) goto L_0892DDD8;
    return;
L_0892DDD8:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 6u);
    ctx.gpr[31] = (0x0892DDECu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(21292));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 676u, 0x0890BB8Cu>(ctx, &aot_mem) && ctx.pc == 0x0892DDECu) goto L_0892DDEC;
    return;
L_0892DDEC:
    ctx.gpr[5] = (17176u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0892DDFCu);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BB6Cu>(ctx, &aot_mem) && ctx.pc == 0x0892DDFCu) goto L_0892DDFC;
    return;
L_0892DDFC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0892DE08u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 20u, 0x0890C174u>(ctx, &aot_mem) && ctx.pc == 0x0892DE08u) goto L_0892DE08;
    return;
L_0892DE08:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 6u);
    ctx.gpr[31] = (0x0892DE1Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(21300));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 676u, 0x0890BB8Cu>(ctx, &aot_mem) && ctx.pc == 0x0892DE1Cu) goto L_0892DE1C;
    return;
L_0892DE1C:
    ctx.gpr[5] = (17177u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0892DE2Cu);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BB6Cu>(ctx, &aot_mem) && ctx.pc == 0x0892DE2Cu) goto L_0892DE2C;
    return;
L_0892DE2C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0892DE38u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 20u, 0x0890C174u>(ctx, &aot_mem) && ctx.pc == 0x0892DE38u) goto L_0892DE38;
    return;
L_0892DE38:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 6u);
    ctx.gpr[31] = (0x0892DE4Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(21308));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 676u, 0x0890BB8Cu>(ctx, &aot_mem) && ctx.pc == 0x0892DE4Cu) goto L_0892DE4C;
    return;
L_0892DE4C:
    ctx.gpr[5] = (17180u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0892DE5Cu);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BB6Cu>(ctx, &aot_mem) && ctx.pc == 0x0892DE5Cu) goto L_0892DE5C;
    return;
L_0892DE5C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0892DE68u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 20u, 0x0890C174u>(ctx, &aot_mem) && ctx.pc == 0x0892DE68u) goto L_0892DE68;
    return;
L_0892DE68:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 9u);
    ctx.gpr[31] = (0x0892DE7Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(21316));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 676u, 0x0890BB8Cu>(ctx, &aot_mem) && ctx.pc == 0x0892DE7Cu) goto L_0892DE7C;
    return;
L_0892DE7C:
    ctx.gpr[5] = (17183u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0892DE8Cu);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BB6Cu>(ctx, &aot_mem) && ctx.pc == 0x0892DE8Cu) goto L_0892DE8C;
    return;
L_0892DE8C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0892DE98u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 20u, 0x0890C174u>(ctx, &aot_mem) && ctx.pc == 0x0892DE98u) goto L_0892DE98;
    return;
L_0892DE98:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 7u);
    ctx.gpr[31] = (0x0892DEACu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(21328));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 676u, 0x0890BB8Cu>(ctx, &aot_mem) && ctx.pc == 0x0892DEACu) goto L_0892DEAC;
    return;
L_0892DEAC:
    ctx.gpr[5] = (17184u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0892DEBCu);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BB6Cu>(ctx, &aot_mem) && ctx.pc == 0x0892DEBCu) goto L_0892DEBC;
    return;
L_0892DEBC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0892DEC8u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 20u, 0x0890C174u>(ctx, &aot_mem) && ctx.pc == 0x0892DEC8u) goto L_0892DEC8;
    return;
L_0892DEC8:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 6u);
    ctx.gpr[31] = (0x0892DEDCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(21336));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 676u, 0x0890BB8Cu>(ctx, &aot_mem) && ctx.pc == 0x0892DEDCu) goto L_0892DEDC;
    return;
L_0892DEDC:
    ctx.gpr[5] = (17190u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0892DEECu);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BB6Cu>(ctx, &aot_mem) && ctx.pc == 0x0892DEECu) goto L_0892DEEC;
    return;
L_0892DEEC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0892DEF8u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 20u, 0x0890C174u>(ctx, &aot_mem) && ctx.pc == 0x0892DEF8u) goto L_0892DEF8;
    return;
L_0892DEF8:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 8u);
    ctx.gpr[31] = (0x0892DF0Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(21344));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 676u, 0x0890BB8Cu>(ctx, &aot_mem) && ctx.pc == 0x0892DF0Cu) goto L_0892DF0C;
    return;
L_0892DF0C:
    ctx.gpr[5] = (17191u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0892DF1Cu);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BB6Cu>(ctx, &aot_mem) && ctx.pc == 0x0892DF1Cu) goto L_0892DF1C;
    return;
L_0892DF1C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0892DF28u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 20u, 0x0890C174u>(ctx, &aot_mem) && ctx.pc == 0x0892DF28u) goto L_0892DF28;
    return;
L_0892DF28:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 5u);
    ctx.gpr[31] = (0x0892DF3Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(21356));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 676u, 0x0890BB8Cu>(ctx, &aot_mem) && ctx.pc == 0x0892DF3Cu) goto L_0892DF3C;
    return;
L_0892DF3C:
    ctx.gpr[5] = (17192u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0892DF4Cu);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BB6Cu>(ctx, &aot_mem) && ctx.pc == 0x0892DF4Cu) goto L_0892DF4C;
    return;
L_0892DF4C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0892DF58u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 20u, 0x0890C174u>(ctx, &aot_mem) && ctx.pc == 0x0892DF58u) goto L_0892DF58;
    return;
L_0892DF58:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 7u);
    ctx.gpr[31] = (0x0892DF6Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(21364));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 676u, 0x0890BB8Cu>(ctx, &aot_mem) && ctx.pc == 0x0892DF6Cu) goto L_0892DF6C;
    return;
L_0892DF6C:
    ctx.gpr[5] = (17194u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0892DF7Cu);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BB6Cu>(ctx, &aot_mem) && ctx.pc == 0x0892DF7Cu) goto L_0892DF7C;
    return;
L_0892DF7C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0892DF88u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 20u, 0x0890C174u>(ctx, &aot_mem) && ctx.pc == 0x0892DF88u) goto L_0892DF88;
    return;
L_0892DF88:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 7u);
    ctx.gpr[31] = (0x0892DF9Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(21372));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 676u, 0x0890BB8Cu>(ctx, &aot_mem) && ctx.pc == 0x0892DF9Cu) goto L_0892DF9C;
    return;
L_0892DF9C:
    ctx.gpr[5] = (17195u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0892DFACu);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BB6Cu>(ctx, &aot_mem) && ctx.pc == 0x0892DFACu) goto L_0892DFAC;
    return;
L_0892DFAC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0892DFB8u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 20u, 0x0890C174u>(ctx, &aot_mem) && ctx.pc == 0x0892DFB8u) goto L_0892DFB8;
    return;
L_0892DFB8:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 5u);
    ctx.gpr[31] = (0x0892DFCCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(21380));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 676u, 0x0890BB8Cu>(ctx, &aot_mem) && ctx.pc == 0x0892DFCCu) goto L_0892DFCC;
    return;
L_0892DFCC:
    ctx.gpr[5] = (17196u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0892DFDCu);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BB6Cu>(ctx, &aot_mem) && ctx.pc == 0x0892DFDCu) goto L_0892DFDC;
    return;
L_0892DFDC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0892DFE8u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 20u, 0x0890C174u>(ctx, &aot_mem) && ctx.pc == 0x0892DFE8u) goto L_0892DFE8;
    return;
L_0892DFE8:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 6u);
    ctx.gpr[31] = (0x0892DFFCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(21388));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 676u, 0x0890BB8Cu>(ctx, &aot_mem) && ctx.pc == 0x0892DFFCu) goto L_0892DFFC;
    return;
L_0892DFFC:
    ctx.gpr[5] = (17197u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0892E00Cu);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BB6Cu>(ctx, &aot_mem) && ctx.pc == 0x0892E00Cu) goto L_0892E00C;
    return;
L_0892E00C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0892E018u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 20u, 0x0890C174u>(ctx, &aot_mem) && ctx.pc == 0x0892E018u) goto L_0892E018;
    return;
L_0892E018:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 6u);
    ctx.gpr[31] = (0x0892E02Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(21396));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 676u, 0x0890BB8Cu>(ctx, &aot_mem) && ctx.pc == 0x0892E02Cu) goto L_0892E02C;
    return;
L_0892E02C:
    ctx.gpr[5] = (17198u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0892E03Cu);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BB6Cu>(ctx, &aot_mem) && ctx.pc == 0x0892E03Cu) goto L_0892E03C;
    return;
L_0892E03C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0892E048u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 20u, 0x0890C174u>(ctx, &aot_mem) && ctx.pc == 0x0892E048u) goto L_0892E048;
    return;
L_0892E048:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 7u);
    ctx.gpr[31] = (0x0892E05Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(21404));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 676u, 0x0890BB8Cu>(ctx, &aot_mem) && ctx.pc == 0x0892E05Cu) goto L_0892E05C;
    return;
L_0892E05C:
    ctx.gpr[5] = (17199u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0892E06Cu);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BB6Cu>(ctx, &aot_mem) && ctx.pc == 0x0892E06Cu) goto L_0892E06C;
    return;
L_0892E06C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0892E078u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 20u, 0x0890C174u>(ctx, &aot_mem) && ctx.pc == 0x0892E078u) goto L_0892E078;
    return;
L_0892E078:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 10u);
    ctx.gpr[31] = (0x0892E08Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(21412));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 676u, 0x0890BB8Cu>(ctx, &aot_mem) && ctx.pc == 0x0892E08Cu) goto L_0892E08C;
    return;
L_0892E08C:
    ctx.gpr[5] = (17200u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0892E09Cu);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BB6Cu>(ctx, &aot_mem) && ctx.pc == 0x0892E09Cu) goto L_0892E09C;
    return;
L_0892E09C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0892E0A8u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 20u, 0x0890C174u>(ctx, &aot_mem) && ctx.pc == 0x0892E0A8u) goto L_0892E0A8;
    return;
L_0892E0A8:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 5u);
    ctx.gpr[31] = (0x0892E0BCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(21424));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 676u, 0x0890BB8Cu>(ctx, &aot_mem) && ctx.pc == 0x0892E0BCu) goto L_0892E0BC;
    return;
L_0892E0BC:
    ctx.gpr[5] = (17201u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0892E0CCu);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BB6Cu>(ctx, &aot_mem) && ctx.pc == 0x0892E0CCu) goto L_0892E0CC;
    return;
L_0892E0CC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0892E0D8u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 20u, 0x0890C174u>(ctx, &aot_mem) && ctx.pc == 0x0892E0D8u) goto L_0892E0D8;
    return;
L_0892E0D8:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 7u);
    ctx.gpr[31] = (0x0892E0ECu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(21432));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 676u, 0x0890BB8Cu>(ctx, &aot_mem) && ctx.pc == 0x0892E0ECu) goto L_0892E0EC;
    return;
L_0892E0EC:
    ctx.gpr[5] = (17202u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0892E0FCu);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BB6Cu>(ctx, &aot_mem) && ctx.pc == 0x0892E0FCu) goto L_0892E0FC;
    return;
L_0892E0FC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0892E108u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 20u, 0x0890C174u>(ctx, &aot_mem) && ctx.pc == 0x0892E108u) goto L_0892E108;
    return;
L_0892E108:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 6u);
    ctx.gpr[31] = (0x0892E11Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(21440));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 676u, 0x0890BB8Cu>(ctx, &aot_mem) && ctx.pc == 0x0892E11Cu) goto L_0892E11C;
    return;
L_0892E11C:
    ctx.gpr[5] = (17204u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0892E12Cu);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BB6Cu>(ctx, &aot_mem) && ctx.pc == 0x0892E12Cu) goto L_0892E12C;
    return;
L_0892E12C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0892E138u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 20u, 0x0890C174u>(ctx, &aot_mem) && ctx.pc == 0x0892E138u) goto L_0892E138;
    return;
L_0892E138:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 6u);
    ctx.gpr[31] = (0x0892E14Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(21448));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 676u, 0x0890BB8Cu>(ctx, &aot_mem) && ctx.pc == 0x0892E14Cu) goto L_0892E14C;
    return;
L_0892E14C:
    ctx.gpr[5] = (17209u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0892E15Cu);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BB6Cu>(ctx, &aot_mem) && ctx.pc == 0x0892E15Cu) goto L_0892E15C;
    return;
L_0892E15C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0892E168u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 20u, 0x0890C174u>(ctx, &aot_mem) && ctx.pc == 0x0892E168u) goto L_0892E168;
    return;
L_0892E168:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 7u);
    ctx.gpr[31] = (0x0892E17Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(21456));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 676u, 0x0890BB8Cu>(ctx, &aot_mem) && ctx.pc == 0x0892E17Cu) goto L_0892E17C;
    return;
L_0892E17C:
    ctx.gpr[5] = (17210u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0892E18Cu);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BB6Cu>(ctx, &aot_mem) && ctx.pc == 0x0892E18Cu) goto L_0892E18C;
    return;
L_0892E18C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0892E198u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 20u, 0x0890C174u>(ctx, &aot_mem) && ctx.pc == 0x0892E198u) goto L_0892E198;
    return;
L_0892E198:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 6u);
    ctx.gpr[31] = (0x0892E1ACu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(21464));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 676u, 0x0890BB8Cu>(ctx, &aot_mem) && ctx.pc == 0x0892E1ACu) goto L_0892E1AC;
    return;
L_0892E1AC:
    ctx.gpr[5] = (17211u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0892E1BCu);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BB6Cu>(ctx, &aot_mem) && ctx.pc == 0x0892E1BCu) goto L_0892E1BC;
    return;
L_0892E1BC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0892E1C8u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 20u, 0x0890C174u>(ctx, &aot_mem) && ctx.pc == 0x0892E1C8u) goto L_0892E1C8;
    return;
L_0892E1C8:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x0892E1DCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(21472));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 676u, 0x0890BB8Cu>(ctx, &aot_mem) && ctx.pc == 0x0892E1DCu) goto L_0892E1DC;
    return;
L_0892E1DC:
    ctx.gpr[5] = (17212u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0892E1ECu);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BB6Cu>(ctx, &aot_mem) && ctx.pc == 0x0892E1ECu) goto L_0892E1EC;
    return;
L_0892E1EC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0892E1F8u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 20u, 0x0890C174u>(ctx, &aot_mem) && ctx.pc == 0x0892E1F8u) goto L_0892E1F8;
    return;
L_0892E1F8:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 6u);
    ctx.gpr[31] = (0x0892E20Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(21480));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 676u, 0x0890BB8Cu>(ctx, &aot_mem) && ctx.pc == 0x0892E20Cu) goto L_0892E20C;
    return;
L_0892E20C:
    ctx.gpr[5] = (17213u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0892E21Cu);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BB6Cu>(ctx, &aot_mem) && ctx.pc == 0x0892E21Cu) goto L_0892E21C;
    return;
L_0892E21C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0892E228u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 20u, 0x0890C174u>(ctx, &aot_mem) && ctx.pc == 0x0892E228u) goto L_0892E228;
    return;
L_0892E228:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 8u);
    ctx.gpr[31] = (0x0892E23Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(21488));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 676u, 0x0890BB8Cu>(ctx, &aot_mem) && ctx.pc == 0x0892E23Cu) goto L_0892E23C;
    return;
L_0892E23C:
    ctx.gpr[5] = (17214u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0892E24Cu);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BB6Cu>(ctx, &aot_mem) && ctx.pc == 0x0892E24Cu) goto L_0892E24C;
    return;
L_0892E24C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0892E258u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 20u, 0x0890C174u>(ctx, &aot_mem) && ctx.pc == 0x0892E258u) goto L_0892E258;
    return;
L_0892E258:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 7u);
    ctx.gpr[31] = (0x0892E26Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(21500));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 676u, 0x0890BB8Cu>(ctx, &aot_mem) && ctx.pc == 0x0892E26Cu) goto L_0892E26C;
    return;
L_0892E26C:
    ctx.gpr[5] = (17215u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0892E27Cu);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BB6Cu>(ctx, &aot_mem) && ctx.pc == 0x0892E27Cu) goto L_0892E27C;
    return;
L_0892E27C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0892E288u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 20u, 0x0890C174u>(ctx, &aot_mem) && ctx.pc == 0x0892E288u) goto L_0892E288;
    return;
L_0892E288:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 5u);
    ctx.gpr[31] = (0x0892E29Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(21508));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 676u, 0x0890BB8Cu>(ctx, &aot_mem) && ctx.pc == 0x0892E29Cu) goto L_0892E29C;
    return;
L_0892E29C:
    ctx.gpr[5] = (17226u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0892E2ACu);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BB6Cu>(ctx, &aot_mem) && ctx.pc == 0x0892E2ACu) goto L_0892E2AC;
    return;
L_0892E2AC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0892E2B8u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 20u, 0x0890C174u>(ctx, &aot_mem) && ctx.pc == 0x0892E2B8u) goto L_0892E2B8;
    return;
L_0892E2B8:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x0892E2CCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(21516));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 676u, 0x0890BB8Cu>(ctx, &aot_mem) && ctx.pc == 0x0892E2CCu) goto L_0892E2CC;
    return;
L_0892E2CC:
    ctx.gpr[5] = (17229u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0892E2DCu);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BB6Cu>(ctx, &aot_mem) && ctx.pc == 0x0892E2DCu) goto L_0892E2DC;
    return;
L_0892E2DC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0892E2E8u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 20u, 0x0890C174u>(ctx, &aot_mem) && ctx.pc == 0x0892E2E8u) goto L_0892E2E8;
    return;
L_0892E2E8:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 5u);
    ctx.gpr[31] = (0x0892E2FCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(21524));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 676u, 0x0890BB8Cu>(ctx, &aot_mem) && ctx.pc == 0x0892E2FCu) goto L_0892E2FC;
    return;
L_0892E2FC:
    ctx.gpr[5] = (17230u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0892E30Cu);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BB6Cu>(ctx, &aot_mem) && ctx.pc == 0x0892E30Cu) goto L_0892E30C;
    return;
L_0892E30C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0892E318u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 20u, 0x0890C174u>(ctx, &aot_mem) && ctx.pc == 0x0892E318u) goto L_0892E318;
    return;
L_0892E318:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 6u);
    ctx.gpr[31] = (0x0892E32Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(21532));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 676u, 0x0890BB8Cu>(ctx, &aot_mem) && ctx.pc == 0x0892E32Cu) goto L_0892E32C;
    return;
L_0892E32C:
    ctx.gpr[5] = (17231u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0892E33Cu);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BB6Cu>(ctx, &aot_mem) && ctx.pc == 0x0892E33Cu) goto L_0892E33C;
    return;
L_0892E33C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0892E348u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 20u, 0x0890C174u>(ctx, &aot_mem) && ctx.pc == 0x0892E348u) goto L_0892E348;
    return;
L_0892E348:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 8u);
    ctx.gpr[31] = (0x0892E35Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(21540));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 676u, 0x0890BB8Cu>(ctx, &aot_mem) && ctx.pc == 0x0892E35Cu) goto L_0892E35C;
    return;
L_0892E35C:
    ctx.gpr[5] = (17234u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0892E36Cu);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BB6Cu>(ctx, &aot_mem) && ctx.pc == 0x0892E36Cu) goto L_0892E36C;
    return;
L_0892E36C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0892E378u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 20u, 0x0890C174u>(ctx, &aot_mem) && ctx.pc == 0x0892E378u) goto L_0892E378;
    return;
L_0892E378:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 9u);
    ctx.gpr[31] = (0x0892E38Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(21552));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 676u, 0x0890BB8Cu>(ctx, &aot_mem) && ctx.pc == 0x0892E38Cu) goto L_0892E38C;
    return;
L_0892E38C:
    ctx.gpr[5] = (17233u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0892E39Cu);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BB6Cu>(ctx, &aot_mem) && ctx.pc == 0x0892E39Cu) goto L_0892E39C;
    return;
L_0892E39C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0892E3A8u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 20u, 0x0890C174u>(ctx, &aot_mem) && ctx.pc == 0x0892E3A8u) goto L_0892E3A8;
    return;
L_0892E3A8:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 6u);
    ctx.gpr[31] = (0x0892E3BCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(21564));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 676u, 0x0890BB8Cu>(ctx, &aot_mem) && ctx.pc == 0x0892E3BCu) goto L_0892E3BC;
    return;
L_0892E3BC:
    ctx.gpr[5] = (17232u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0892E3CCu);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BB6Cu>(ctx, &aot_mem) && ctx.pc == 0x0892E3CCu) goto L_0892E3CC;
    return;
L_0892E3CC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0892E3D8u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 20u, 0x0890C174u>(ctx, &aot_mem) && ctx.pc == 0x0892E3D8u) goto L_0892E3D8;
    return;
L_0892E3D8:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(21572));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0892E3ECu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 680u, 0x0890BC14u>(ctx, &aot_mem) && ctx.pc == 0x0892E3ECu) goto L_0892E3EC;
    return;
L_0892E3EC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0892E3F8u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 565u, 0x0890B4E4u>(ctx, &aot_mem) && ctx.pc == 0x0892E3F8u) goto L_0892E3F8;
    return;
L_0892E3F8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0892E404u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-10001));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 20u, 0x0890C174u>(ctx, &aot_mem) && ctx.pc == 0x0892E404u) goto L_0892E404;
    return;
L_0892E404:
    ctx.gpr[31] = (0x0892E40Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 712u, 0x0890BFC8u>(ctx, &aot_mem) && ctx.pc == 0x0892E40Cu) goto L_0892E40C;
    return;
L_0892E40C:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 6u);
    ctx.gpr[31] = (0x0892E420u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(21576));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 676u, 0x0890BB8Cu>(ctx, &aot_mem) && ctx.pc == 0x0892E420u) goto L_0892E420;
    return;
L_0892E420:
    ctx.gpr[19] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-30860)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(288)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[31] = (0x0892E43Cu);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BB6Cu>(ctx, &aot_mem) && ctx.pc == 0x0892E43Cu) goto L_0892E43C;
    return;
L_0892E43C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0892E448u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 20u, 0x0890C174u>(ctx, &aot_mem) && ctx.pc == 0x0892E448u) goto L_0892E448;
    return;
L_0892E448:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 6u);
    ctx.gpr[31] = (0x0892E45Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(21584));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 676u, 0x0890BB8Cu>(ctx, &aot_mem) && ctx.pc == 0x0892E45Cu) goto L_0892E45C;
    return;
L_0892E45C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-30860)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(284)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[31] = (0x0892E474u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BB6Cu>(ctx, &aot_mem) && ctx.pc == 0x0892E474u) goto L_0892E474;
    return;
L_0892E474:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0892E480u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 20u, 0x0890C174u>(ctx, &aot_mem) && ctx.pc == 0x0892E480u) goto L_0892E480;
    return;
L_0892E480:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 10u);
    ctx.gpr[31] = (0x0892E494u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(21592));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 676u, 0x0890BB8Cu>(ctx, &aot_mem) && ctx.pc == 0x0892E494u) goto L_0892E494;
    return;
L_0892E494:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-30860)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(294)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[31] = (0x0892E4ACu);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BB6Cu>(ctx, &aot_mem) && ctx.pc == 0x0892E4ACu) goto L_0892E4AC;
    return;
L_0892E4AC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0892E4B8u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 20u, 0x0890C174u>(ctx, &aot_mem) && ctx.pc == 0x0892E4B8u) goto L_0892E4B8;
    return;
L_0892E4B8:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 10u);
    ctx.gpr[31] = (0x0892E4CCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(21604));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 676u, 0x0890BB8Cu>(ctx, &aot_mem) && ctx.pc == 0x0892E4CCu) goto L_0892E4CC;
    return;
L_0892E4CC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-30860)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(272)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[31] = (0x0892E4E4u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BB6Cu>(ctx, &aot_mem) && ctx.pc == 0x0892E4E4u) goto L_0892E4E4;
    return;
L_0892E4E4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0892E4F0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 20u, 0x0890C174u>(ctx, &aot_mem) && ctx.pc == 0x0892E4F0u) goto L_0892E4F0;
    return;
L_0892E4F0:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 11u);
    ctx.gpr[31] = (0x0892E504u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(21616));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 676u, 0x0890BB8Cu>(ctx, &aot_mem) && ctx.pc == 0x0892E504u) goto L_0892E504;
    return;
L_0892E504:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-30860)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(274)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[31] = (0x0892E51Cu);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BB6Cu>(ctx, &aot_mem) && ctx.pc == 0x0892E51Cu) goto L_0892E51C;
    return;
L_0892E51C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0892E528u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 20u, 0x0890C174u>(ctx, &aot_mem) && ctx.pc == 0x0892E528u) goto L_0892E528;
    return;
L_0892E528:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 9u);
    ctx.gpr[31] = (0x0892E53Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(21628));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 676u, 0x0890BB8Cu>(ctx, &aot_mem) && ctx.pc == 0x0892E53Cu) goto L_0892E53C;
    return;
L_0892E53C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-30860)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(276)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[31] = (0x0892E554u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BB6Cu>(ctx, &aot_mem) && ctx.pc == 0x0892E554u) goto L_0892E554;
    return;
L_0892E554:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0892E560u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 20u, 0x0890C174u>(ctx, &aot_mem) && ctx.pc == 0x0892E560u) goto L_0892E560;
    return;
L_0892E560:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 8u);
    ctx.gpr[31] = (0x0892E574u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(21640));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 676u, 0x0890BB8Cu>(ctx, &aot_mem) && ctx.pc == 0x0892E574u) goto L_0892E574;
    return;
L_0892E574:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-30860)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(278)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[31] = (0x0892E58Cu);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BB6Cu>(ctx, &aot_mem) && ctx.pc == 0x0892E58Cu) goto L_0892E58C;
    return;
L_0892E58C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0892E598u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 20u, 0x0890C174u>(ctx, &aot_mem) && ctx.pc == 0x0892E598u) goto L_0892E598;
    return;
L_0892E598:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 7u);
    ctx.gpr[31] = (0x0892E5ACu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(21652));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 676u, 0x0890BB8Cu>(ctx, &aot_mem) && ctx.pc == 0x0892E5ACu) goto L_0892E5AC;
    return;
L_0892E5AC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-30860)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(280)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[31] = (0x0892E5C4u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BB6Cu>(ctx, &aot_mem) && ctx.pc == 0x0892E5C4u) goto L_0892E5C4;
    return;
L_0892E5C4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0892E5D0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 20u, 0x0890C174u>(ctx, &aot_mem) && ctx.pc == 0x0892E5D0u) goto L_0892E5D0;
    return;
L_0892E5D0:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[31] = (0x0892E5E4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(21660));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 676u, 0x0890BB8Cu>(ctx, &aot_mem) && ctx.pc == 0x0892E5E4u) goto L_0892E5E4;
    return;
L_0892E5E4:
    ctx.gpr[5] = (17284u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0892E5F4u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BB6Cu>(ctx, &aot_mem) && ctx.pc == 0x0892E5F4u) goto L_0892E5F4;
    return;
L_0892E5F4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0892E600u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 20u, 0x0890C174u>(ctx, &aot_mem) && ctx.pc == 0x0892E600u) goto L_0892E600;
    return;
L_0892E600:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 8u);
    ctx.gpr[31] = (0x0892E614u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(21664));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 676u, 0x0890BB8Cu>(ctx, &aot_mem) && ctx.pc == 0x0892E614u) goto L_0892E614;
    return;
L_0892E614:
    ctx.gpr[5] = (17286u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 32768u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0892E628u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BB6Cu>(ctx, &aot_mem) && ctx.pc == 0x0892E628u) goto L_0892E628;
    return;
L_0892E628:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0892E634u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 20u, 0x0890C174u>(ctx, &aot_mem) && ctx.pc == 0x0892E634u) goto L_0892E634;
    return;
L_0892E634:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 7u);
    ctx.gpr[31] = (0x0892E648u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(21676));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 676u, 0x0890BB8Cu>(ctx, &aot_mem) && ctx.pc == 0x0892E648u) goto L_0892E648;
    return;
L_0892E648:
    ctx.gpr[5] = (17287u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0892E658u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BB6Cu>(ctx, &aot_mem) && ctx.pc == 0x0892E658u) goto L_0892E658;
    return;
L_0892E658:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0892E664u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 20u, 0x0890C174u>(ctx, &aot_mem) && ctx.pc == 0x0892E664u) goto L_0892E664;
    return;
L_0892E664:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 11u);
    ctx.gpr[31] = (0x0892E678u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(21684));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 676u, 0x0890BB8Cu>(ctx, &aot_mem) && ctx.pc == 0x0892E678u) goto L_0892E678;
    return;
L_0892E678:
    ctx.gpr[5] = (17297u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 32768u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0892E68Cu);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BB6Cu>(ctx, &aot_mem) && ctx.pc == 0x0892E68Cu) goto L_0892E68C;
    return;
L_0892E68C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0892E698u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 20u, 0x0890C174u>(ctx, &aot_mem) && ctx.pc == 0x0892E698u) goto L_0892E698;
    return;
L_0892E698:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 7u);
    ctx.gpr[31] = (0x0892E6ACu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(21696));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 676u, 0x0890BB8Cu>(ctx, &aot_mem) && ctx.pc == 0x0892E6ACu) goto L_0892E6AC;
    return;
L_0892E6AC:
    ctx.gpr[5] = (17288u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0892E6BCu);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BB6Cu>(ctx, &aot_mem) && ctx.pc == 0x0892E6BCu) goto L_0892E6BC;
    return;
L_0892E6BC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0892E6C8u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 20u, 0x0890C174u>(ctx, &aot_mem) && ctx.pc == 0x0892E6C8u) goto L_0892E6C8;
    return;
L_0892E6C8:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 7u);
    ctx.gpr[31] = (0x0892E6DCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(21704));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 676u, 0x0890BB8Cu>(ctx, &aot_mem) && ctx.pc == 0x0892E6DCu) goto L_0892E6DC;
    return;
L_0892E6DC:
    ctx.gpr[5] = (17289u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0892E6ECu);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BB6Cu>(ctx, &aot_mem) && ctx.pc == 0x0892E6ECu) goto L_0892E6EC;
    return;
L_0892E6EC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0892E6F8u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 20u, 0x0890C174u>(ctx, &aot_mem) && ctx.pc == 0x0892E6F8u) goto L_0892E6F8;
    return;
L_0892E6F8:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 7u);
    ctx.gpr[31] = (0x0892E70Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(21712));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 676u, 0x0890BB8Cu>(ctx, &aot_mem) && ctx.pc == 0x0892E70Cu) goto L_0892E70C;
    return;
L_0892E70C:
    ctx.gpr[5] = (17290u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 32768u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0892E720u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BB6Cu>(ctx, &aot_mem) && ctx.pc == 0x0892E720u) goto L_0892E720;
    return;
L_0892E720:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0892E72Cu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 20u, 0x0890C174u>(ctx, &aot_mem) && ctx.pc == 0x0892E72Cu) goto L_0892E72C;
    return;
L_0892E72C:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x0892E740u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(21720));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 676u, 0x0890BB8Cu>(ctx, &aot_mem) && ctx.pc == 0x0892E740u) goto L_0892E740;
    return;
L_0892E740:
    ctx.gpr[5] = (17292u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 32768u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0892E754u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BB6Cu>(ctx, &aot_mem) && ctx.pc == 0x0892E754u) goto L_0892E754;
    return;
L_0892E754:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0892E760u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 20u, 0x0890C174u>(ctx, &aot_mem) && ctx.pc == 0x0892E760u) goto L_0892E760;
    return;
L_0892E760:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x0892E774u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(21728));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 676u, 0x0890BB8Cu>(ctx, &aot_mem) && ctx.pc == 0x0892E774u) goto L_0892E774;
    return;
L_0892E774:
    ctx.gpr[5] = (17290u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0892E784u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BB6Cu>(ctx, &aot_mem) && ctx.pc == 0x0892E784u) goto L_0892E784;
    return;
L_0892E784:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0892E790u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 20u, 0x0890C174u>(ctx, &aot_mem) && ctx.pc == 0x0892E790u) goto L_0892E790;
    return;
L_0892E790:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0892E7A0u);
    ctx.gpr[6] = (0u | 15u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 676u, 0x0890BB8Cu>(ctx, &aot_mem) && ctx.pc == 0x0892E7A0u) goto L_0892E7A0;
    return;
L_0892E7A0:
    ctx.gpr[5] = (17295u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 32768u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0892E7B4u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BB6Cu>(ctx, &aot_mem) && ctx.pc == 0x0892E7B4u) goto L_0892E7B4;
    return;
L_0892E7B4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0892E7C0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 20u, 0x0890C174u>(ctx, &aot_mem) && ctx.pc == 0x0892E7C0u) goto L_0892E7C0;
    return;
L_0892E7C0:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 6u);
    ctx.gpr[31] = (0x0892E7D4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(21736));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 676u, 0x0890BB8Cu>(ctx, &aot_mem) && ctx.pc == 0x0892E7D4u) goto L_0892E7D4;
    return;
L_0892E7D4:
    ctx.gpr[5] = (17294u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 32768u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0892E7E8u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BB6Cu>(ctx, &aot_mem) && ctx.pc == 0x0892E7E8u) goto L_0892E7E8;
    return;
L_0892E7E8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0892E7F4u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 20u, 0x0890C174u>(ctx, &aot_mem) && ctx.pc == 0x0892E7F4u) goto L_0892E7F4;
    return;
L_0892E7F4:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0892E804u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(21744));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 680u, 0x0890BC14u>(ctx, &aot_mem) && ctx.pc == 0x0892E804u) goto L_0892E804;
    return;
L_0892E804:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0892E810u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 565u, 0x0890B4E4u>(ctx, &aot_mem) && ctx.pc == 0x0892E810u) goto L_0892E810;
    return;
L_0892E810:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0892E81Cu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-10001));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 20u, 0x0890C174u>(ctx, &aot_mem) && ctx.pc == 0x0892E81Cu) goto L_0892E81C;
    return;
L_0892E81C:
    ctx.gpr[31] = (0x0892E824u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 712u, 0x0890BFC8u>(ctx, &aot_mem) && ctx.pc == 0x0892E824u) goto L_0892E824;
    return;
L_0892E824:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 7u);
    ctx.gpr[31] = (0x0892E838u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(21752));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 676u, 0x0890BB8Cu>(ctx, &aot_mem) && ctx.pc == 0x0892E838u) goto L_0892E838;
    return;
L_0892E838:
    ctx.gpr[5] = (16948u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0892E848u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BB6Cu>(ctx, &aot_mem) && ctx.pc == 0x0892E848u) goto L_0892E848;
    return;
L_0892E848:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0892E854u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 20u, 0x0890C174u>(ctx, &aot_mem) && ctx.pc == 0x0892E854u) goto L_0892E854;
    return;
L_0892E854:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x0892E868u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(21760));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 676u, 0x0890BB8Cu>(ctx, &aot_mem) && ctx.pc == 0x0892E868u) goto L_0892E868;
    return;
L_0892E868:
    ctx.gpr[5] = (16952u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0892E878u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BB6Cu>(ctx, &aot_mem) && ctx.pc == 0x0892E878u) goto L_0892E878;
    return;
L_0892E878:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0892E884u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 20u, 0x0890C174u>(ctx, &aot_mem) && ctx.pc == 0x0892E884u) goto L_0892E884;
    return;
L_0892E884:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 10u);
    ctx.gpr[31] = (0x0892E898u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(21768));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 676u, 0x0890BB8Cu>(ctx, &aot_mem) && ctx.pc == 0x0892E898u) goto L_0892E898;
    return;
L_0892E898:
    ctx.gpr[5] = (16956u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0892E8A8u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BB6Cu>(ctx, &aot_mem) && ctx.pc == 0x0892E8A8u) goto L_0892E8A8;
    return;
L_0892E8A8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0892E8B4u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 20u, 0x0890C174u>(ctx, &aot_mem) && ctx.pc == 0x0892E8B4u) goto L_0892E8B4;
    return;
L_0892E8B4:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 6u);
    ctx.gpr[31] = (0x0892E8C8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(21780));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 676u, 0x0890BB8Cu>(ctx, &aot_mem) && ctx.pc == 0x0892E8C8u) goto L_0892E8C8;
    return;
L_0892E8C8:
    ctx.gpr[5] = (16960u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0892E8D8u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BB6Cu>(ctx, &aot_mem) && ctx.pc == 0x0892E8D8u) goto L_0892E8D8;
    return;
L_0892E8D8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0892E8E4u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 20u, 0x0890C174u>(ctx, &aot_mem) && ctx.pc == 0x0892E8E4u) goto L_0892E8E4;
    return;
L_0892E8E4:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 9u);
    ctx.gpr[31] = (0x0892E8F8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(21788));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 676u, 0x0890BB8Cu>(ctx, &aot_mem) && ctx.pc == 0x0892E8F8u) goto L_0892E8F8;
    return;
L_0892E8F8:
    ctx.gpr[5] = (16964u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0892E908u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BB6Cu>(ctx, &aot_mem) && ctx.pc == 0x0892E908u) goto L_0892E908;
    return;
L_0892E908:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0892E914u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 20u, 0x0890C174u>(ctx, &aot_mem) && ctx.pc == 0x0892E914u) goto L_0892E914;
    return;
L_0892E914:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0892E924u);
    ctx.gpr[6] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 676u, 0x0890BB8Cu>(ctx, &aot_mem) && ctx.pc == 0x0892E924u) goto L_0892E924;
    return;
L_0892E924:
    ctx.gpr[5] = (16968u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0892E934u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BB6Cu>(ctx, &aot_mem) && ctx.pc == 0x0892E934u) goto L_0892E934;
    return;
L_0892E934:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0892E940u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 20u, 0x0890C174u>(ctx, &aot_mem) && ctx.pc == 0x0892E940u) goto L_0892E940;
    return;
L_0892E940:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x0892E954u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(21800));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 676u, 0x0890BB8Cu>(ctx, &aot_mem) && ctx.pc == 0x0892E954u) goto L_0892E954;
    return;
L_0892E954:
    ctx.gpr[5] = (16972u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0892E964u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BB6Cu>(ctx, &aot_mem) && ctx.pc == 0x0892E964u) goto L_0892E964;
    return;
L_0892E964:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0892E970u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 20u, 0x0890C174u>(ctx, &aot_mem) && ctx.pc == 0x0892E970u) goto L_0892E970;
    return;
L_0892E970:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 9u);
    ctx.gpr[31] = (0x0892E984u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(21808));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 676u, 0x0890BB8Cu>(ctx, &aot_mem) && ctx.pc == 0x0892E984u) goto L_0892E984;
    return;
L_0892E984:
    ctx.gpr[5] = (16976u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0892E994u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BB6Cu>(ctx, &aot_mem) && ctx.pc == 0x0892E994u) goto L_0892E994;
    return;
L_0892E994:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0892E9A0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 20u, 0x0890C174u>(ctx, &aot_mem) && ctx.pc == 0x0892E9A0u) goto L_0892E9A0;
    return;
L_0892E9A0:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 12u);
    ctx.gpr[31] = (0x0892E9B4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(21820));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 676u, 0x0890BB8Cu>(ctx, &aot_mem) && ctx.pc == 0x0892E9B4u) goto L_0892E9B4;
    return;
L_0892E9B4:
    ctx.gpr[5] = (16980u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0892E9C4u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BB6Cu>(ctx, &aot_mem) && ctx.pc == 0x0892E9C4u) goto L_0892E9C4;
    return;
L_0892E9C4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0892E9D0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 20u, 0x0890C174u>(ctx, &aot_mem) && ctx.pc == 0x0892E9D0u) goto L_0892E9D0;
    return;
L_0892E9D0:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0892E9E0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(21836));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 680u, 0x0890BC14u>(ctx, &aot_mem) && ctx.pc == 0x0892E9E0u) goto L_0892E9E0;
    return;
L_0892E9E0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0892E9ECu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 565u, 0x0890B4E4u>(ctx, &aot_mem) && ctx.pc == 0x0892E9ECu) goto L_0892E9EC;
    return;
L_0892E9EC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0892E9F8u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-10001));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 20u, 0x0890C174u>(ctx, &aot_mem) && ctx.pc == 0x0892E9F8u) goto L_0892E9F8;
    return;
L_0892E9F8:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892EA1C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28004)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28000)));
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
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(28008), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = ctx.fpr[16] / ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(28016), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[18] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(28012), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(28020), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(28024), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892EA94:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] & 32u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892EAE0;
      }
      goto L_0892EAC4;
    }
L_0892EAC4:
    ctx.gpr[31] = (0x0892EACCu);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    goto L_0892F400;
L_0892EACC:
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.gpr[31] = (0x0892EAD8u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_0892F400;
L_0892EAD8:
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_0892EAE0;
L_0892EAE0:
    ctx.gpr[5] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892EB20;
      }
      goto L_0892EAEC;
    }
L_0892EAEC:
    ctx.gpr[31] = (0x0892EAF4u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    goto L_0892F400;
L_0892EAF4:
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.gpr[31] = (0x0892EB00u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    goto L_0892F400;
L_0892EB00:
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.gpr[31] = (0x0892EB0Cu);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    goto L_0892F400;
L_0892EB0C:
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.gpr[31] = (0x0892EB18u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    goto L_0892F400;
L_0892EB18:
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(20), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_0892EB20;
L_0892EB20:
    ctx.gpr[5] = (ctx.gpr[4] & 8u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892EB48;
      }
      goto L_0892EB2C;
    }
L_0892EB2C:
    ctx.gpr[31] = (0x0892EB34u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    goto L_0892F400;
L_0892EB34:
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.gpr[31] = (0x0892EB40u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    goto L_0892F400;
L_0892EB40:
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_0892EB48;
L_0892EB48:
    ctx.gpr[4] = (ctx.gpr[4] & 192u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892EB6C;
      }
      goto L_0892EB54;
    }
L_0892EB54:
    ctx.gpr[31] = (0x0892EB5Cu);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    goto L_0892F400;
L_0892EB5C:
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.gpr[31] = (0x0892EB68u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    goto L_0892F400;
L_0892EB68:
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[2]));
    goto L_0892EB6C;
L_0892EB6C:
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
L_0892EB84:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[6] & 32u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_0892EBC0;
      }
      goto L_0892EB94;
    }
L_0892EB94:
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(2))))));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(2))))));
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[9];
    // nop
      if (branch_taken) {
          goto L_0892EBA8;
      }
      goto L_0892EBA4;
    }
L_0892EBA4:
    ctx.gpr[7] = (0u | 1u);
    goto L_0892EBA8;
L_0892EBA8:
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(4))))));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4))))));
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[9];
    // nop
      if (branch_taken) {
          goto L_0892EBC0;
      }
      goto L_0892EBB8;
    }
L_0892EBB8:
    ctx.gpr[7] = (ctx.gpr[7] | 2u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    goto L_0892EBC0;
L_0892EBC0:
    ctx.gpr[8] = (ctx.gpr[6] & 16u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892EC2C;
      }
      goto L_0892EBCC;
    }
L_0892EBCC:
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(10))))));
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[9];
    // nop
      if (branch_taken) {
          goto L_0892EBE4;
      }
      goto L_0892EBDC;
    }
L_0892EBDC:
    ctx.gpr[7] = (ctx.gpr[7] | 16u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    goto L_0892EBE4;
L_0892EBE4:
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(12))))));
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[9];
    // nop
      if (branch_taken) {
          goto L_0892EBFC;
      }
      goto L_0892EBF4;
    }
L_0892EBF4:
    ctx.gpr[7] = (ctx.gpr[7] | 32u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    goto L_0892EBFC;
L_0892EBFC:
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(18))))));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(18))))));
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[9];
    // nop
      if (branch_taken) {
          goto L_0892EC14;
      }
      goto L_0892EC0C;
    }
L_0892EC0C:
    ctx.gpr[7] = (ctx.gpr[7] | 512u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    goto L_0892EC14;
L_0892EC14:
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(20))))));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(20))))));
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[9];
    // nop
      if (branch_taken) {
          goto L_0892EC2C;
      }
      goto L_0892EC24;
    }
L_0892EC24:
    ctx.gpr[7] = (ctx.gpr[7] | 256u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    goto L_0892EC2C;
L_0892EC2C:
    ctx.gpr[8] = (ctx.gpr[6] & 8u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892EC68;
      }
      goto L_0892EC38;
    }
L_0892EC38:
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(14))))));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(14))))));
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[9];
    // nop
      if (branch_taken) {
          goto L_0892EC50;
      }
      goto L_0892EC48;
    }
L_0892EC48:
    ctx.gpr[7] = (ctx.gpr[7] | 64u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    goto L_0892EC50;
L_0892EC50:
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(16))))));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(16))))));
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[9];
    // nop
      if (branch_taken) {
          goto L_0892EC68;
      }
      goto L_0892EC60;
    }
L_0892EC60:
    ctx.gpr[7] = (ctx.gpr[7] | 128u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    goto L_0892EC68;
L_0892EC68:
    ctx.gpr[6] = (ctx.gpr[6] & 128u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892ECA4;
      }
      goto L_0892EC74;
    }
L_0892EC74:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(6))))));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(6))))));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_0892EC8C;
      }
      goto L_0892EC84;
    }
L_0892EC84:
    ctx.gpr[7] = (ctx.gpr[7] | 4u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    goto L_0892EC8C;
L_0892EC8C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(8))))));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8))))));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0892ECA4;
      }
      goto L_0892EC9C;
    }
L_0892EC9C:
    ctx.gpr[7] = (ctx.gpr[7] | 8u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    goto L_0892ECA4;
L_0892ECA4:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[7] & 255u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892ECAC:
    ctx.gpr[6] = (ctx.gpr[7] & 65535u);
    ctx.gpr[7] = (rt.memory().aot_load_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[7]));
    ctx.gpr[7] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(3), ctx.gpr[7]));
    ctx.gpr[8] = (ctx.gpr[6] & 65535u);
    ctx.gpr[7] = (ctx.gpr[7] & 65535u);
    ctx.gpr[10] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (ctx.gpr[8] & 255u);
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[7]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[10]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[10]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[7] = (rt.memory().aot_load_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[7]));
    ctx.gpr[7] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(3), ctx.gpr[7]));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 8u));
    ctx.gpr[7] = (ctx.gpr[7] & 65535u);
    ctx.gpr[9] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[7]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[7] = (ctx.gpr[6] & 1u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892ED7C;
      }
      goto L_0892ED14;
    }
L_0892ED14:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(2))))));
    ctx.gpr[8] = (rt.memory().aot_load_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[8]));
    ctx.gpr[8] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(3), ctx.gpr[8]));
    ctx.gpr[7] = (ctx.gpr[7] << 16u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 16u));
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    ctx.gpr[7] = (ctx.gpr[7] & 65535u);
    ctx.gpr[7] = (ctx.gpr[7] & 65535u);
    ctx.gpr[10] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (ctx.gpr[7] & 255u);
    ctx.gpr[8] = (ctx.gpr[4] + ctx.gpr[8]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[10]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[10]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[8] = (rt.memory().aot_load_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[8]));
    ctx.gpr[8] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(3), ctx.gpr[8]));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 8u));
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    ctx.gpr[9] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    ctx.gpr[8] = (ctx.gpr[4] + ctx.gpr[8]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    goto L_0892ED7C;
L_0892ED7C:
    ctx.gpr[7] = (ctx.gpr[6] & 2u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892EDF0;
      }
      goto L_0892ED88;
    }
L_0892ED88:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(4))))));
    ctx.gpr[8] = (rt.memory().aot_load_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[8]));
    ctx.gpr[8] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(3), ctx.gpr[8]));
    ctx.gpr[7] = (ctx.gpr[7] << 16u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 16u));
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    ctx.gpr[7] = (ctx.gpr[7] & 65535u);
    ctx.gpr[7] = (ctx.gpr[7] & 65535u);
    ctx.gpr[10] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (ctx.gpr[7] & 255u);
    ctx.gpr[8] = (ctx.gpr[4] + ctx.gpr[8]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[10]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[10]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[8] = (rt.memory().aot_load_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[8]));
    ctx.gpr[8] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(3), ctx.gpr[8]));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 8u));
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    ctx.gpr[9] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    ctx.gpr[8] = (ctx.gpr[4] + ctx.gpr[8]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    goto L_0892EDF0;
L_0892EDF0:
    ctx.gpr[7] = (ctx.gpr[6] & 16u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892EE64;
      }
      goto L_0892EDFC;
    }
L_0892EDFC:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[8] = (rt.memory().aot_load_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[8]));
    ctx.gpr[8] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(3), ctx.gpr[8]));
    ctx.gpr[7] = (ctx.gpr[7] << 16u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 16u));
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    ctx.gpr[7] = (ctx.gpr[7] & 65535u);
    ctx.gpr[7] = (ctx.gpr[7] & 65535u);
    ctx.gpr[10] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (ctx.gpr[7] & 255u);
    ctx.gpr[8] = (ctx.gpr[4] + ctx.gpr[8]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[10]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[10]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[8] = (rt.memory().aot_load_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[8]));
    ctx.gpr[8] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(3), ctx.gpr[8]));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 8u));
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    ctx.gpr[9] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    ctx.gpr[8] = (ctx.gpr[4] + ctx.gpr[8]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    goto L_0892EE64;
L_0892EE64:
    ctx.gpr[7] = (ctx.gpr[6] & 32u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892EED8;
      }
      goto L_0892EE70;
    }
L_0892EE70:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[8] = (rt.memory().aot_load_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[8]));
    ctx.gpr[8] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(3), ctx.gpr[8]));
    ctx.gpr[7] = (ctx.gpr[7] << 16u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 16u));
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    ctx.gpr[7] = (ctx.gpr[7] & 65535u);
    ctx.gpr[7] = (ctx.gpr[7] & 65535u);
    ctx.gpr[10] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (ctx.gpr[7] & 255u);
    ctx.gpr[8] = (ctx.gpr[4] + ctx.gpr[8]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[10]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[10]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[8] = (rt.memory().aot_load_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[8]));
    ctx.gpr[8] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(3), ctx.gpr[8]));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 8u));
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    ctx.gpr[9] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    ctx.gpr[8] = (ctx.gpr[4] + ctx.gpr[8]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    goto L_0892EED8;
L_0892EED8:
    ctx.gpr[7] = (ctx.gpr[6] & 64u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892EF4C;
      }
      goto L_0892EEE4;
    }
L_0892EEE4:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(14))))));
    ctx.gpr[8] = (rt.memory().aot_load_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[8]));
    ctx.gpr[8] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(3), ctx.gpr[8]));
    ctx.gpr[7] = (ctx.gpr[7] << 16u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 16u));
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    ctx.gpr[7] = (ctx.gpr[7] & 65535u);
    ctx.gpr[7] = (ctx.gpr[7] & 65535u);
    ctx.gpr[10] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (ctx.gpr[7] & 255u);
    ctx.gpr[8] = (ctx.gpr[4] + ctx.gpr[8]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[10]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[10]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[8] = (rt.memory().aot_load_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[8]));
    ctx.gpr[8] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(3), ctx.gpr[8]));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 8u));
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    ctx.gpr[9] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    ctx.gpr[8] = (ctx.gpr[4] + ctx.gpr[8]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    goto L_0892EF4C;
L_0892EF4C:
    ctx.gpr[7] = (ctx.gpr[6] & 128u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892EFC0;
      }
      goto L_0892EF58;
    }
L_0892EF58:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(16))))));
    ctx.gpr[8] = (rt.memory().aot_load_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[8]));
    ctx.gpr[8] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(3), ctx.gpr[8]));
    ctx.gpr[7] = (ctx.gpr[7] << 16u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 16u));
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    ctx.gpr[7] = (ctx.gpr[7] & 65535u);
    ctx.gpr[7] = (ctx.gpr[7] & 65535u);
    ctx.gpr[10] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (ctx.gpr[7] & 255u);
    ctx.gpr[8] = (ctx.gpr[4] + ctx.gpr[8]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[10]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[10]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[8] = (rt.memory().aot_load_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[8]));
    ctx.gpr[8] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(3), ctx.gpr[8]));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 8u));
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    ctx.gpr[9] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    ctx.gpr[8] = (ctx.gpr[4] + ctx.gpr[8]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    goto L_0892EFC0;
L_0892EFC0:
    ctx.gpr[7] = (ctx.gpr[6] & 4u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892F034;
      }
      goto L_0892EFCC;
    }
L_0892EFCC:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(6))))));
    ctx.gpr[8] = (rt.memory().aot_load_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[8]));
    ctx.gpr[8] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(3), ctx.gpr[8]));
    ctx.gpr[7] = (ctx.gpr[7] << 16u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 16u));
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    ctx.gpr[7] = (ctx.gpr[7] & 65535u);
    ctx.gpr[7] = (ctx.gpr[7] & 65535u);
    ctx.gpr[10] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (ctx.gpr[7] & 255u);
    ctx.gpr[8] = (ctx.gpr[4] + ctx.gpr[8]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[10]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[10]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[8] = (rt.memory().aot_load_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[8]));
    ctx.gpr[8] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(3), ctx.gpr[8]));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 8u));
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    ctx.gpr[9] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    ctx.gpr[8] = (ctx.gpr[4] + ctx.gpr[8]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    goto L_0892F034;
L_0892F034:
    ctx.gpr[7] = (ctx.gpr[6] & 8u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892F0A8;
      }
      goto L_0892F040;
    }
L_0892F040:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(8))))));
    ctx.gpr[8] = (rt.memory().aot_load_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[8]));
    ctx.gpr[8] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(3), ctx.gpr[8]));
    ctx.gpr[7] = (ctx.gpr[7] << 16u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 16u));
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    ctx.gpr[7] = (ctx.gpr[7] & 65535u);
    ctx.gpr[7] = (ctx.gpr[7] & 65535u);
    ctx.gpr[10] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (ctx.gpr[7] & 255u);
    ctx.gpr[8] = (ctx.gpr[4] + ctx.gpr[8]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[10]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[10]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[8] = (rt.memory().aot_load_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[8]));
    ctx.gpr[8] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(3), ctx.gpr[8]));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 8u));
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    ctx.gpr[9] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    ctx.gpr[8] = (ctx.gpr[4] + ctx.gpr[8]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    goto L_0892F0A8;
L_0892F0A8:
    ctx.gpr[7] = (ctx.gpr[6] & 512u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892F11C;
      }
      goto L_0892F0B4;
    }
L_0892F0B4:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(18))))));
    ctx.gpr[8] = (rt.memory().aot_load_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[8]));
    ctx.gpr[8] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(3), ctx.gpr[8]));
    ctx.gpr[7] = (ctx.gpr[7] << 16u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 16u));
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    ctx.gpr[7] = (ctx.gpr[7] & 65535u);
    ctx.gpr[7] = (ctx.gpr[7] & 65535u);
    ctx.gpr[10] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (ctx.gpr[7] & 255u);
    ctx.gpr[8] = (ctx.gpr[4] + ctx.gpr[8]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[10]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[10]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[8] = (rt.memory().aot_load_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[8]));
    ctx.gpr[8] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(3), ctx.gpr[8]));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 8u));
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    ctx.gpr[9] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    ctx.gpr[8] = (ctx.gpr[4] + ctx.gpr[8]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    goto L_0892F11C;
L_0892F11C:
    ctx.gpr[6] = (ctx.gpr[6] & 256u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892F190;
      }
      goto L_0892F128;
    }
L_0892F128:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(20))))));
    ctx.gpr[6] = (rt.memory().aot_load_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]));
    ctx.gpr[6] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(3), ctx.gpr[6]));
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[8] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[5] & 255u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[6] = (rt.memory().aot_load_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]));
    ctx.gpr[6] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(3), ctx.gpr[6]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 8u));
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_0892F190;
L_0892F190:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892F198:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[7] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892F200;
      }
      goto L_0892F1D4;
    }
L_0892F1D4:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[8] << 8u);
    ctx.gpr[7] = (ctx.gpr[7] | ctx.gpr[8]);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[7]));
    goto L_0892F200;
L_0892F200:
    ctx.gpr[7] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892F238;
      }
      goto L_0892F20C;
    }
L_0892F20C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[8] << 8u);
    ctx.gpr[7] = (ctx.gpr[7] | ctx.gpr[8]);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[7]));
    goto L_0892F238;
L_0892F238:
    ctx.gpr[7] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892F270;
      }
      goto L_0892F244;
    }
L_0892F244:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[8] << 8u);
    ctx.gpr[7] = (ctx.gpr[7] | ctx.gpr[8]);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(ctx.gpr[7]));
    goto L_0892F270;
L_0892F270:
    ctx.gpr[7] = (ctx.gpr[4] & 32u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892F2A8;
      }
      goto L_0892F27C;
    }
L_0892F27C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[8] << 8u);
    ctx.gpr[7] = (ctx.gpr[7] | ctx.gpr[8]);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(ctx.gpr[7]));
    goto L_0892F2A8;
L_0892F2A8:
    ctx.gpr[7] = (ctx.gpr[4] & 64u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892F2E0;
      }
      goto L_0892F2B4;
    }
L_0892F2B4:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[8] << 8u);
    ctx.gpr[7] = (ctx.gpr[7] | ctx.gpr[8]);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(ctx.gpr[7]));
    goto L_0892F2E0;
L_0892F2E0:
    ctx.gpr[7] = (ctx.gpr[4] & 128u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892F318;
      }
      goto L_0892F2EC;
    }
L_0892F2EC:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[8] << 8u);
    ctx.gpr[7] = (ctx.gpr[7] | ctx.gpr[8]);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(ctx.gpr[7]));
    goto L_0892F318;
L_0892F318:
    ctx.gpr[7] = (ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892F350;
      }
      goto L_0892F324;
    }
L_0892F324:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[8] << 8u);
    ctx.gpr[7] = (ctx.gpr[7] | ctx.gpr[8]);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(ctx.gpr[7]));
    goto L_0892F350;
L_0892F350:
    ctx.gpr[7] = (ctx.gpr[4] & 8u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892F388;
      }
      goto L_0892F35C;
    }
L_0892F35C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[8] << 8u);
    ctx.gpr[7] = (ctx.gpr[7] | ctx.gpr[8]);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[7]));
    goto L_0892F388;
L_0892F388:
    ctx.gpr[7] = (ctx.gpr[4] & 512u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892F3C0;
      }
      goto L_0892F394;
    }
L_0892F394:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[8] << 8u);
    ctx.gpr[7] = (ctx.gpr[7] | ctx.gpr[8]);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(ctx.gpr[7]));
    goto L_0892F3C0;
L_0892F3C0:
    ctx.gpr[4] = (ctx.gpr[4] & 256u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892F3F8;
      }
      goto L_0892F3CC;
    }
L_0892F3CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[6]);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(20), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_0892F3F8;
L_0892F3F8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892F400:
    ctx.gpr[4] = (17826u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 63875u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[2] = (ctx.gpr[4] << 16u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 16u));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892F424:
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (15412u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892F444:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[5] + static_cast<std::uint32_t>(136));
    ctx.gpr[6] = (ctx.gpr[4] & 32u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_0892F4DC;
      }
      goto L_0892F484;
    }
L_0892F484:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(2))))));
    ctx.gpr[19] = (ctx.gpr[6] + static_cast<std::uint32_t>(8));
    ctx.gpr[31] = (0x0892F4A0u);
    ctx.gpr[20] = (ctx.gpr[5] + static_cast<std::uint32_t>(28084));
    goto L_0892F424;
L_0892F4A0:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x0892F4B4u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 188u, 0x0890D044u>(ctx, &aot_mem) && ctx.pc == 0x0892F4B4u) goto L_0892F4B4;
    return;
L_0892F4B4:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(4))))));
    ctx.gpr[31] = (0x0892F4C4u);
    ctx.gpr[20] = (ctx.gpr[5] + static_cast<std::uint32_t>(28060));
    goto L_0892F424;
L_0892F4C4:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x0892F4D8u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 188u, 0x0890D044u>(ctx, &aot_mem) && ctx.pc == 0x0892F4D8u) goto L_0892F4D8;
    return;
L_0892F4D8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_0892F4DC;
L_0892F4DC:
    ctx.gpr[5] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892F598;
      }
      goto L_0892F4E8;
    }
L_0892F4E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(18))))));
    ctx.gpr[19] = (ctx.gpr[6] + static_cast<std::uint32_t>(8));
    ctx.gpr[31] = (0x0892F504u);
    ctx.gpr[20] = (ctx.gpr[5] + static_cast<std::uint32_t>(28060));
    goto L_0892F424;
L_0892F504:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x0892F518u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 188u, 0x0890D044u>(ctx, &aot_mem) && ctx.pc == 0x0892F518u) goto L_0892F518;
    return;
L_0892F518:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[31] = (0x0892F528u);
    ctx.gpr[21] = (ctx.gpr[5] + static_cast<std::uint32_t>(28072));
    goto L_0892F424;
L_0892F528:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]) ^ 0x80000000u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x0892F53Cu);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 188u, 0x0890D044u>(ctx, &aot_mem) && ctx.pc == 0x0892F53Cu) goto L_0892F53C;
    return;
L_0892F53C:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[31] = (0x0892F54Cu);
    ctx.gpr[21] = (ctx.gpr[5] + static_cast<std::uint32_t>(28084));
    goto L_0892F424;
L_0892F54C:
    ctx.gpr[4] = (17076u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]) ^ 0x80000000u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[31] = (0x0892F56Cu);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 188u, 0x0890D044u>(ctx, &aot_mem) && ctx.pc == 0x0892F56Cu) goto L_0892F56C;
    return;
L_0892F56C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(20))))));
    ctx.gpr[31] = (0x0892F580u);
    ctx.gpr[19] = (ctx.gpr[6] + static_cast<std::uint32_t>(8));
    goto L_0892F424;
L_0892F580:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x0892F594u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 188u, 0x0890D044u>(ctx, &aot_mem) && ctx.pc == 0x0892F594u) goto L_0892F594;
    return;
L_0892F594:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_0892F598;
L_0892F598:
    ctx.gpr[5] = (ctx.gpr[4] & 8u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892F63C;
      }
      goto L_0892F5A4;
    }
L_0892F5A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x0892F5B4u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 244u, 0x08A4D04Cu>(ctx, &aot_mem) && ctx.pc == 0x0892F5B4u) goto L_0892F5B4;
    return;
L_0892F5B4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(56)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0892F5C4u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 174u, 0x0890CF70u>(ctx, &aot_mem) && ctx.pc == 0x0892F5C4u) goto L_0892F5C4;
    return;
L_0892F5C4:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27768)));
    ctx.gpr[5] = (ctx.gpr[2] << 3u);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[19] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(16))))));
    ctx.gpr[31] = (0x0892F600u);
    ctx.gpr[20] = (ctx.gpr[5] + static_cast<std::uint32_t>(28084));
    goto L_0892F424;
L_0892F600:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]) ^ 0x80000000u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x0892F614u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 188u, 0x0890D044u>(ctx, &aot_mem) && ctx.pc == 0x0892F614u) goto L_0892F614;
    return;
L_0892F614:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(14))))));
    ctx.gpr[31] = (0x0892F624u);
    ctx.gpr[20] = (ctx.gpr[5] + static_cast<std::uint32_t>(28060));
    goto L_0892F424;
L_0892F624:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]) ^ 0x80000000u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x0892F638u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 188u, 0x0890D044u>(ctx, &aot_mem) && ctx.pc == 0x0892F638u) goto L_0892F638;
    return;
L_0892F638:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_0892F63C;
L_0892F63C:
    ctx.gpr[5] = (ctx.gpr[4] & 128u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892F788;
      }
      goto L_0892F648;
    }
L_0892F648:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    ctx.gpr[31] = (0x0892F654u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 244u, 0x08A4D04Cu>(ctx, &aot_mem) && ctx.pc == 0x0892F654u) goto L_0892F654;
    return;
L_0892F654:
    ctx.gpr[31] = (0x0892F65Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 173u, 0x0890CF68u>(ctx, &aot_mem) && ctx.pc == 0x0892F65Cu) goto L_0892F65C;
    return;
L_0892F65C:
    ctx.gpr[4] = (0u | 128u);
    ctx.fpr[22] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[22])) && ctx.fpr[12] == ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]) ^ 0x80000000u);
      if (branch_taken) {
          goto L_0892F6A0;
      }
      goto L_0892F684;
    }
L_0892F684:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[20]) || std::isnan(ctx.fpr[22])) && ctx.fpr[20] == ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0892F6A0;
      }
      goto L_0892F694;
    }
L_0892F694:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
      if (branch_taken) {
          goto L_0892F6B0;
      }
      goto L_0892F6A0;
    }
L_0892F6A0:
    ctx.gpr[31] = (0x0892F6A8u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 282u, 0x089D962Cu>(ctx, &aot_mem) && ctx.pc == 0x0892F6A8u) goto L_0892F6A8;
    return;
L_0892F6A8:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    goto L_0892F6B0;
L_0892F6B0:
    if (ctx.gpr[4] != 0u) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(184)));
        goto L_0892F6DC;
    }
    goto L_0892F6B8;
L_0892F6B8:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.gpr[31] = (0x0892F6C8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 206u, 0x08AC5834u>(ctx, &aot_mem) && ctx.pc == 0x0892F6C8u) goto L_0892F6C8;
    return;
L_0892F6C8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(184)));
    goto L_0892F6DC;
L_0892F6DC:
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[12];
    ctx.gpr[31] = (0x0892F6E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 253u, 0x08A1D3ECu>(ctx, &aot_mem) && ctx.pc == 0x0892F6E8u) goto L_0892F6E8;
    return;
L_0892F6E8:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
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
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
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
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    ctx.gpr[31] = (0x0892F748u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(6))))));
    goto L_0892F424;
L_0892F748:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x0892F75Cu);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 188u, 0x0890D044u>(ctx, &aot_mem) && ctx.pc == 0x0892F75Cu) goto L_0892F75C;
    return;
L_0892F75C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(28060));
    ctx.gpr[31] = (0x0892F76Cu);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(8))))));
    goto L_0892F424;
L_0892F76C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x0892F780u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 188u, 0x0890D044u>(ctx, &aot_mem) && ctx.pc == 0x0892F780u) goto L_0892F780;
    return;
L_0892F780:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892F7E8;
      }
      goto L_0892F788;
    }
L_0892F788:
    ctx.gpr[4] = (ctx.gpr[4] & 64u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892F7E8;
      }
      goto L_0892F794;
    }
L_0892F794:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(8))))));
    ctx.gpr[16] = (ctx.gpr[6] + static_cast<std::uint32_t>(8));
    ctx.gpr[31] = (0x0892F7B0u);
    ctx.gpr[18] = (ctx.gpr[5] + static_cast<std::uint32_t>(28060));
    goto L_0892F424;
L_0892F7B0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0892F7C4u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 188u, 0x0890D044u>(ctx, &aot_mem) && ctx.pc == 0x0892F7C4u) goto L_0892F7C4;
    return;
L_0892F7C4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(6))))));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[31] = (0x0892F7D4u);
    ctx.gpr[17] = (ctx.gpr[5] + static_cast<std::uint32_t>(28084));
    goto L_0892F424;
L_0892F7D4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0892F7E8u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 188u, 0x0890D044u>(ctx, &aot_mem) && ctx.pc == 0x0892F7E8u) goto L_0892F7E8;
    return;
L_0892F7E8:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892F814:
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28036)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28032)));
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
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(28040), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = ctx.fpr[16] / ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(28048), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[18] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(28044), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(28052), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(28056), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892F88C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28096)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892F8E0;
      }
      goto L_0892F8B0;
    }
L_0892F8B0:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x0892F8BCu);
    ctx.gpr[4] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x0892F8BCu) goto L_0892F8BC;
    return;
L_0892F8BC:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[6] = (2225u << 16u);
      if (branch_taken) {
          goto L_0892F8DC;
      }
      goto L_0892F8C8;
    }
L_0892F8C8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 1200u);
    ctx.gpr[31] = (0x0892F8D8u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(21848));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 318u, 0x08B01488u>(ctx, &aot_mem) && ctx.pc == 0x0892F8D8u) goto L_0892F8D8;
    return;
L_0892F8D8:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_0892F8DC;
L_0892F8DC:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(28096), ctx.gpr[17]);
    goto L_0892F8E0;
L_0892F8E0:
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
L_0892F8F8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x0892F91Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28096)));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 324u, 0x08B0152Cu>(ctx, &aot_mem) && ctx.pc == 0x0892F91Cu) goto L_0892F91C;
    return;
L_0892F91C:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(8));
    ctx.gpr[31] = (0x0892F938u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 411u, 0x08AED6BCu>(ctx, &aot_mem) && ctx.pc == 0x0892F938u) goto L_0892F938;
    return;
L_0892F938:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28096)));
    ctx.gpr[31] = (0x0892F944u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 332u, 0x08B015ECu>(ctx, &aot_mem) && ctx.pc == 0x0892F944u) goto L_0892F944;
    return;
L_0892F944:
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
L_0892F95C:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28096)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] & 128u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
      if (branch_taken) {
          goto L_0892F984;
      }
      goto L_0892F97C;
    }
L_0892F97C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0892F994;
      }
      goto L_0892F984;
    }
L_0892F984:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_0892F994;
L_0892F994:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892F99C:
    ctx.gpr[9] = (2227u << 16u);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(28096)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(8)));
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_0892FAA0;
      }
      goto L_0892F9B8;
    }
L_0892F9B8:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-24896));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    goto L_0892F9C8;
L_0892F9C8:
    ctx.gpr[10] = (ctx.gpr[7] + ctx.gpr[2]);
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (ctx.gpr[10] & 128u);
    if (ctx.gpr[10] == 0u) {
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
        goto L_0892F9E4;
    }
    goto L_0892F9DC;
L_0892F9DC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[11] = (0u | 0u);
      if (branch_taken) {
          goto L_0892F9E8;
      }
      goto L_0892F9E4;
    }
L_0892F9E4:
    ctx.gpr[11] = (ctx.gpr[11] + ctx.gpr[6]);
    goto L_0892F9E8;
L_0892F9E8:
    { const bool branch_taken = ctx.gpr[11] == 0u;
    ctx.gpr[3] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0892FA80;
      }
      goto L_0892F9F0;
    }
L_0892F9F0:
    ctx.gpr[12] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[12] == 0u;
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[11] + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_0892FA68;
      }
      goto L_0892FA00;
    }
L_0892FA00:
    ctx.gpr[13] = (ctx.gpr[5] + ctx.gpr[12]);
    ctx.gpr[13] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[13] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[13] = (ctx.gpr[13] & 2u);
    { const bool branch_taken = ctx.gpr[13] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892FA24;
      }
      goto L_0892FA14;
    }
L_0892FA14:
    ctx.gpr[12] = (ctx.gpr[12] + static_cast<std::uint32_t>(-32));
    ctx.gpr[12] = (ctx.gpr[12] << 24u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[12] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[12]) >> 24u));
      if (branch_taken) {
          goto L_0892FA24;
      }
      goto L_0892FA24;
    }
L_0892FA24:
    ctx.gpr[13] = (ctx.gpr[5] + ctx.gpr[10]);
    ctx.gpr[13] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[13] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[13] = (ctx.gpr[13] & 2u);
    { const bool branch_taken = ctx.gpr[13] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892FA48;
      }
      goto L_0892FA38;
    }
L_0892FA38:
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(-32));
    ctx.gpr[10] = (ctx.gpr[10] << 24u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[10]) >> 24u));
      if (branch_taken) {
          goto L_0892FA48;
      }
      goto L_0892FA48;
    }
L_0892FA48:
    { const bool branch_taken = ctx.gpr[12] == ctx.gpr[10];
    ctx.gpr[3] = (ctx.gpr[3] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0892FA58;
      }
      goto L_0892FA50;
    }
L_0892FA50:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[10] = (0u | 1u);
      if (branch_taken) {
          goto L_0892FA78;
      }
      goto L_0892FA58;
    }
L_0892FA58:
    ctx.gpr[12] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[12] != 0u;
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[11] + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_0892FA00;
      }
      goto L_0892FA68;
    }
L_0892FA68:
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.gpr[10] = (0u | 0u);
      if (branch_taken) {
          goto L_0892FA78;
      }
      goto L_0892FA70;
    }
L_0892FA70:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[10] = (0u | 1u);
      if (branch_taken) {
          goto L_0892FA78;
      }
      goto L_0892FA78;
    }
L_0892FA78:
    { const bool branch_taken = ctx.gpr[10] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892FA98;
      }
      goto L_0892FA80;
    }
L_0892FA80:
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(28));
      if (branch_taken) {
          goto L_0892F9C8;
      }
      goto L_0892FA90;
    }
L_0892FA90:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892FAA0;
      }
      goto L_0892FA98;
    }
L_0892FA98:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892FAA4;
      }
      goto L_0892FAA0;
    }
L_0892FAA0:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    goto L_0892FAA4;
L_0892FAA4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892FAAC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2227u << 16u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28096)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[6] = (ctx.gpr[6] & 128u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
      if (branch_taken) {
          goto L_0892FAE0;
      }
      goto L_0892FAD8;
    }
L_0892FAD8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_0892FAF0;
      }
      goto L_0892FAE0;
    }
L_0892FAE0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[4]);
    goto L_0892FAF0;
L_0892FAF0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(8));
    ctx.gpr[6] = (0u | 5u);
    ctx.gpr[31] = (0x0892FB08u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(21860));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 510u, 0x08AEDD98u>(ctx, &aot_mem) && ctx.pc == 0x0892FB08u) goto L_0892FB08;
    return;
L_0892FB08:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892FB18;
      }
      goto L_0892FB10;
    }
L_0892FB10:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(0u));
    goto L_0892FB18;
L_0892FB18:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[31] = (0x0892FB28u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 123u, 0x089C8A24u>(ctx, &aot_mem) && ctx.pc == 0x0892FB28u) goto L_0892FB28;
    return;
L_0892FB28:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (0u < ctx.gpr[2] ? 1u : 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892FB40:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2227u << 16u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28096)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[5] = (ctx.gpr[5] & 128u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
      if (branch_taken) {
          goto L_0892FB74;
      }
      goto L_0892FB6C;
    }
L_0892FB6C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_0892FB84;
      }
      goto L_0892FB74;
    }
L_0892FB74:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[4]);
    goto L_0892FB84;
L_0892FB84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892FBC0;
      }
      goto L_0892FB90;
    }
L_0892FB90:
    ctx.gpr[5] = (2197u << 16u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x0892FBA0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7720));
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 56u, 0x08A0CDE0u>(ctx, &aot_mem) && ctx.pc == 0x0892FBA0u) goto L_0892FBA0;
    return;
L_0892FBA0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0892FBACu);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 131u, 0x089C8AF4u>(ctx, &aot_mem) && ctx.pc == 0x0892FBACu) goto L_0892FBAC;
    return;
L_0892FBAC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26512));
    ctx.gpr[31] = (0x0892FBC0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-32));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 730u, 0x08AA367Cu>(ctx, &aot_mem) && ctx.pc == 0x0892FBC0u) goto L_0892FBC0;
    return;
L_0892FBC0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(0u));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892FBDC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28096)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[6] = (ctx.gpr[6] & 128u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
      if (branch_taken) {
          goto L_0892FC0C;
      }
      goto L_0892FC04;
    }
L_0892FC04:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0892FC1C;
      }
      goto L_0892FC0C;
    }
L_0892FC0C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_0892FC1C;
L_0892FC1C:
    ctx.gpr[31] = (0x0892FC24u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 55u, 0x08A0CDD0u>(ctx, &aot_mem) && ctx.pc == 0x0892FC24u) goto L_0892FC24;
    return;
L_0892FC24:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892FC30:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x0892FC40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 54u, 0x08A0CDC4u>(ctx, &aot_mem) && ctx.pc == 0x0892FC40u) goto L_0892FC40;
    return;
L_0892FC40:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28100), ctx.gpr[2]);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892FC54:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x0892FC6Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28100)));
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 55u, 0x08A0CDD0u>(ctx, &aot_mem) && ctx.pc == 0x0892FC6Cu) goto L_0892FC6C;
    return;
L_0892FC6C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28100), 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892FC80:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28096)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] & 128u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
      if (branch_taken) {
          goto L_0892FCA8;
      }
      goto L_0892FCA0;
    }
L_0892FCA0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0892FCB8;
      }
      goto L_0892FCA8;
    }
L_0892FCA8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_0892FCB8;
L_0892FCB8:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4))))));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[5]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892FCC8:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28096)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] & 128u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
      if (branch_taken) {
          goto L_0892FCF0;
      }
      goto L_0892FCE8;
    }
L_0892FCE8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0892FD00;
      }
      goto L_0892FCF0;
    }
L_0892FCF0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_0892FD00;
L_0892FD00:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4))))));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[5]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892FD10:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28096)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] & 128u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
      if (branch_taken) {
          goto L_0892FD38;
      }
      goto L_0892FD30;
    }
L_0892FD30:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0892FD48;
      }
      goto L_0892FD38;
    }
L_0892FD38:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_0892FD48;
L_0892FD48:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(6))))));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_0892FD88;
      }
      goto L_0892FD5C;
    }
L_0892FD5C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892FD88;
      }
      goto L_0892FD68;
    }
L_0892FD68:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(8));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (61440u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    goto L_0892FD88;
L_0892FD88:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(6))))));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(ctx.gpr[5]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892FD98:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28096)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[6] = (ctx.gpr[6] & 128u);
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
        goto L_0892FDC8;
    }
    goto L_0892FDC0;
L_0892FDC0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_0892FDD8;
      }
      goto L_0892FDC8;
    }
L_0892FDC8:
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[7] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    goto L_0892FDD8;
L_0892FDD8:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(4))))));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(4))))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) > 0;
    // nop
      if (branch_taken) {
          goto L_0892FDF8;
      }
      goto L_0892FDF0;
    }
L_0892FDF0:
    ctx.gpr[31] = (0x0892FDF8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4900));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 469u, 0x089C6068u>(ctx, &aot_mem) && ctx.pc == 0x0892FDF8u) goto L_0892FDF8;
    return;
L_0892FDF8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892FE04:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28096)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] & 128u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
      if (branch_taken) {
          goto L_0892FE2C;
      }
      goto L_0892FE24;
    }
L_0892FE24:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0892FE3C;
      }
      goto L_0892FE2C;
    }
L_0892FE2C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_0892FE3C;
L_0892FE3C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(6))))));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (ctx.gpr[5] << 16u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 16u));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892FE8C;
      }
      goto L_0892FE64;
    }
L_0892FE64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892FE8C;
      }
      goto L_0892FE70;
    }
L_0892FE70:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(8));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (4096u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    goto L_0892FE8C;
L_0892FE8C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892FE94:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28096)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] & 128u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
      if (branch_taken) {
          goto L_0892FEBC;
      }
      goto L_0892FEB4;
    }
L_0892FEB4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0892FECC;
      }
      goto L_0892FEBC;
    }
L_0892FEBC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_0892FECC;
L_0892FECC:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4))))));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[5]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892FEDC:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28096)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] & 128u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
      if (branch_taken) {
          goto L_0892FF04;
      }
      goto L_0892FEFC;
    }
L_0892FEFC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0892FF14;
      }
      goto L_0892FF04;
    }
L_0892FF04:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_0892FF14;
L_0892FF14:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4))))));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892FF1C:
    ctx.gpr[6] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(28096), ctx.gpr[5]);
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(28100), ctx.gpr[4]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (0u | 0u);
    goto L_0892FF34;
L_0892FF34:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(28096)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[5]);
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (ctx.gpr[9] & 128u);
    if (ctx.gpr[9] == 0u) {
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
        goto L_0892FF58;
    }
    goto L_0892FF50;
L_0892FF50:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (0u | 0u);
      if (branch_taken) {
          goto L_0892FF64;
      }
      goto L_0892FF58;
    }
L_0892FF58:
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[4]);
    ctx.gpr[8] = (0u < ctx.gpr[8] ? 1u : 0u);
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    goto L_0892FF64;
L_0892FF64:
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892FFA8;
      }
      goto L_0892FF6C;
    }
L_0892FF6C:
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[8] = (0u | 0u);
      if (branch_taken) {
          goto L_0892FF80;
      }
      goto L_0892FF74;
    }
L_0892FF74:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (0u < ctx.gpr[8] ? 1u : 0u);
      if (branch_taken) {
          goto L_0892FF90;
      }
      goto L_0892FF80;
    }
L_0892FF80:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[4]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (0u < ctx.gpr[8] ? 1u : 0u);
    goto L_0892FF90;
L_0892FF90:
    if (ctx.gpr[9] == 0u) {
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
        goto L_0892FFA0;
    }
    goto L_0892FF98;
L_0892FF98:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_0892FFA4;
      }
      goto L_0892FFA0;
    }
L_0892FFA0:
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[4]);
    goto L_0892FFA4;
L_0892FFA4:
    aot_mem.aot_store16(ctx.gpr[7] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[8]));
    goto L_0892FFA8;
L_0892FFA8:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < 1200 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(28));
      if (branch_taken) {
          goto L_0892FF34;
      }
      goto L_0892FFB8;
    }
L_0892FFB8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892FFC0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (16640u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[18] = (2230u << 16u);
    ctx.gpr[17] = (2231u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    ctx.gpr[20] = (ctx.gpr[5] | 0u);
    ctx.gpr[19] = (0u | 0u);
    ctx.pc = 0x08930000u; return;
}

void recomp_unit_0074(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0074_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_74(Runtime &runtime) {
    runtime.register_generated_unit(74u, 0x0892C000u, 16384u, &recomp_unit_0074, &recomp_unit_0074_entry);
    runtime.register_function(0x0892C000u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C00Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C020u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C034u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C048u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C05Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C070u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C084u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C098u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C0ACu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C0C4u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C0D8u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C0ECu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C100u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C114u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C128u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C12Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C1CCu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C210u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C218u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C220u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C268u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C270u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C278u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C280u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C2C8u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C3C4u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C3CCu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C3D4u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C3DCu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C3E4u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C3ECu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C3F4u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C3FCu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C4C0u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C4C4u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C4D8u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C50Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C514u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C524u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C52Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C5F0u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C634u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C63Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C680u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C688u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C690u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C6D8u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C6E0u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C6E8u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C6F0u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C738u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C834u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C83Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C844u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C84Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C854u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C85Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C864u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C86Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C930u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C934u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C948u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C97Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C984u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C994u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C99Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892CA64u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892CA6Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892CA7Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892CA84u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892CAA8u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892CAB8u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892CAC0u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892CAF4u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892CAF8u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892CB3Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892CB44u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892CB4Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892CB94u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892CB9Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892CBA4u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892CBACu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892CBF4u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892CCF0u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892CCF8u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892CD00u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892CD08u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892CD10u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892CD18u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892CD20u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892CD28u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892CDECu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892CDF0u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892CE04u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892CE38u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892CE40u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892CE50u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892CE58u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892CF20u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892CF2Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892CF58u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892CF5Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892CF98u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892CFA8u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D014u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D030u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D080u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D08Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D094u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D0E4u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D0F4u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D10Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D118u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D174u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D180u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D184u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D1A8u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D1ACu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D1CCu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D214u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D26Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D274u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D280u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D290u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D298u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D2A4u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D2B4u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D2C4u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D2D4u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D2ECu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D33Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D348u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D354u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D368u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D37Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D390u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D398u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D3D0u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D3E8u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D414u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D464u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D484u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D584u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D5E4u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D5ECu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D654u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D66Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D6B4u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D6E0u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D718u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D724u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D808u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D880u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D8B0u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D8B8u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D8C8u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D8DCu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D8FCu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D908u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D91Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D930u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D93Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D950u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D964u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D970u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D984u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D998u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D9A4u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D9B8u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D9CCu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D9D8u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D9ECu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892DA00u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892DA0Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892DA20u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892DA34u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892DA40u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892DA54u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892DA68u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892DA74u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892DA84u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892DA90u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892DA9Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892DAA4u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892DABCu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892DACCu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892DAD8u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892DAE8u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892DAF4u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892DB00u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892DB08u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892DB1Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892DB2Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892DB38u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892DB4Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892DB5Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892DB68u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892DB7Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892DB8Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892DB98u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892DBACu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892DBBCu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892DBC8u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892DBDCu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892DBECu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892DBF8u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892DC0Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892DC1Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892DC28u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892DC3Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892DC4Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892DC58u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892DC6Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892DC7Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892DC88u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892DC9Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892DCACu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892DCB8u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892DCCCu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892DCDCu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892DCE8u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892DCFCu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892DD0Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892DD18u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892DD2Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892DD3Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892DD48u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892DD5Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892DD6Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892DD78u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892DD8Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892DD9Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892DDA8u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892DDBCu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892DDCCu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892DDD8u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892DDECu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892DDFCu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892DE08u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892DE1Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892DE2Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892DE38u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892DE4Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892DE5Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892DE68u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892DE7Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892DE8Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892DE98u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892DEACu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892DEBCu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892DEC8u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892DEDCu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892DEECu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892DEF8u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892DF0Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892DF1Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892DF28u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892DF3Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892DF4Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892DF58u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892DF6Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892DF7Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892DF88u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892DF9Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892DFACu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892DFB8u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892DFCCu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892DFDCu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892DFE8u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892DFFCu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E00Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E018u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E02Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E03Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E048u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E05Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E06Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E078u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E08Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E09Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E0A8u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E0BCu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E0CCu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E0D8u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E0ECu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E0FCu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E108u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E11Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E12Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E138u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E14Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E15Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E168u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E17Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E18Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E198u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E1ACu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E1BCu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E1C8u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E1DCu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E1ECu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E1F8u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E20Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E21Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E228u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E23Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E24Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E258u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E26Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E27Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E288u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E29Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E2ACu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E2B8u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E2CCu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E2DCu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E2E8u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E2FCu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E30Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E318u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E32Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E33Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E348u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E35Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E36Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E378u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E38Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E39Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E3A8u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E3BCu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E3CCu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E3D8u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E3ECu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E3F8u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E404u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E40Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E420u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E43Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E448u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E45Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E474u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E480u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E494u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E4ACu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E4B8u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E4CCu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E4E4u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E4F0u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E504u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E51Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E528u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E53Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E554u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E560u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E574u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E58Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E598u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E5ACu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E5C4u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E5D0u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E5E4u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E5F4u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E600u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E614u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E628u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E634u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E648u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E658u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E664u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E678u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E68Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E698u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E6ACu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E6BCu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E6C8u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E6DCu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E6ECu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E6F8u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E70Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E720u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E72Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E740u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E754u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E760u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E774u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E784u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E790u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E7A0u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E7B4u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E7C0u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E7D4u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E7E8u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E7F4u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E804u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E810u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E81Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E824u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E838u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E848u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E854u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E868u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E878u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E884u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E898u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E8A8u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E8B4u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E8C8u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E8D8u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E8E4u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E8F8u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E908u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E914u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E924u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E934u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E940u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E954u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E964u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E970u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E984u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E994u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E9A0u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E9B4u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E9C4u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E9D0u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E9E0u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E9ECu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E9F8u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892EA1Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892EA94u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892EAC4u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892EACCu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892EAD8u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892EAE0u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892EAECu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892EAF4u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892EB00u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892EB0Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892EB18u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892EB20u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892EB2Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892EB34u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892EB40u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892EB48u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892EB54u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892EB5Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892EB68u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892EB6Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892EB84u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892EB94u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892EBA4u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892EBA8u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892EBB8u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892EBC0u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892EBCCu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892EBDCu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892EBE4u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892EBF4u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892EBFCu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892EC0Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892EC14u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892EC24u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892EC2Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892EC38u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892EC48u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892EC50u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892EC60u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892EC68u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892EC74u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892EC84u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892EC8Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892EC9Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892ECA4u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892ECACu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892ED14u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892ED7Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892ED88u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892EDF0u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892EDFCu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892EE64u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892EE70u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892EED8u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892EEE4u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892EF4Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892EF58u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892EFC0u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892EFCCu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F034u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F040u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F0A8u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F0B4u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F11Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F128u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F190u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F198u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F1D4u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F200u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F20Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F238u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F244u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F270u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F27Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F2A8u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F2B4u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F2E0u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F2ECu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F318u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F324u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F350u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F35Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F388u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F394u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F3C0u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F3CCu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F3F8u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F400u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F424u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F444u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F484u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F4A0u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F4B4u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F4C4u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F4D8u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F4DCu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F4E8u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F504u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F518u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F528u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F53Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F54Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F56Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F580u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F594u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F598u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F5A4u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F5B4u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F5C4u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F600u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F614u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F624u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F638u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F63Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F648u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F654u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F65Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F684u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F694u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F6A0u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F6A8u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F6B0u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F6B8u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F6C8u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F6DCu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F6E8u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F748u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F75Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F76Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F780u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F788u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F794u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F7B0u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F7C4u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F7D4u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F7E8u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F814u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F88Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F8B0u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F8BCu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F8C8u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F8D8u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F8DCu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F8E0u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F8F8u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F91Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F938u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F944u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F95Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F97Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F984u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F994u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F99Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F9B8u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F9C8u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F9DCu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F9E4u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F9E8u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F9F0u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892FA00u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892FA14u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892FA24u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892FA38u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892FA48u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892FA50u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892FA58u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892FA68u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892FA70u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892FA78u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892FA80u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892FA90u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892FA98u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892FAA0u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892FAA4u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892FAACu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892FAD8u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892FAE0u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892FAF0u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892FB08u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892FB10u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892FB18u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892FB28u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892FB40u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892FB6Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892FB74u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892FB84u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892FB90u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892FBA0u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892FBACu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892FBC0u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892FBDCu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892FC04u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892FC0Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892FC1Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892FC24u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892FC30u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892FC40u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892FC54u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892FC6Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892FC80u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892FCA0u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892FCA8u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892FCB8u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892FCC8u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892FCE8u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892FCF0u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892FD00u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892FD10u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892FD30u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892FD38u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892FD48u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892FD5Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892FD68u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892FD88u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892FD98u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892FDC0u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892FDC8u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892FDD8u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892FDF0u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892FDF8u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892FE04u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892FE24u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892FE2Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892FE3Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892FE64u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892FE70u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892FE8Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892FE94u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892FEB4u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892FEBCu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892FECCu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892FEDCu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892FEFCu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892FF04u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892FF14u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892FF1Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892FF34u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892FF50u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892FF58u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892FF64u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892FF6Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892FF74u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892FF80u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892FF90u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892FF98u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892FFA0u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892FFA4u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892FFA8u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892FFB8u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892FFC0u, &recomp_unit_0074, "recomp_unit_0074");
}
} // namespace psprecomp
