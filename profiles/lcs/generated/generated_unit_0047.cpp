#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0047[4093] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 6, 0, 0, 7, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 11, 0, 12, 0, 13, 0, 14,
    0, 15, 16, 0, 0, 17, 0, 18, 0, 0, 19, 0, 0, 0, 0, 0, 0, 20, 21, 0, 22, 0, 0, 0, 23, 0, 0, 0, 0, 24, 0, 0,
    0, 25, 0, 0, 0, 26, 0, 27, 0, 0, 0, 0, 0, 0, 28, 0, 29, 0, 0, 0, 30, 31, 0, 0, 0, 0, 0, 0, 32, 0, 0, 33,
    0, 34, 0, 35, 0, 0, 0, 0, 0, 0, 36, 0, 37, 0, 0, 38, 0, 0, 0, 39, 0, 40, 0, 0, 0, 0, 0, 0, 41, 0, 42, 0,
    0, 0, 0, 43, 44, 0, 0, 0, 45, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48,
    0, 49, 0, 0, 0, 0, 50, 0, 0, 0, 0, 51, 0, 0, 52, 0, 0, 53, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 56,
    0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 59, 0, 60, 0, 0, 0, 61, 0, 0, 0, 62, 0, 0, 0, 63,
    0, 64, 0, 65, 0, 66, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 69, 0, 0, 0, 0, 70, 0, 0, 0,
    0, 71, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 75, 0, 0, 76, 0, 77, 0, 78,
    0, 79, 0, 80, 0, 81, 0, 82, 83, 0, 84, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 87, 0, 88, 0, 0,
    0, 89, 0, 0, 0, 90, 0, 0, 0, 91, 0, 92, 0, 93, 0, 94, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0,
    0, 0, 0, 97, 0, 98, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0,
    103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 108, 0, 109, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 111, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 114, 0, 115, 116, 0, 0, 117,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 119, 0, 120, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 122, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 126, 0, 127, 0, 128, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    130, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 133, 0, 134, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 137, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 139, 0, 140, 0,
    141, 0, 0, 0, 0, 142, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 149, 0, 0, 0, 0, 0,
    150, 0, 0, 0, 0, 151, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0,
    0, 0, 0, 0, 155, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0,
    0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 163, 0, 164, 0, 165, 0, 166, 0, 0, 0, 0, 0, 167,
    0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0,
    0, 0, 0, 0, 0, 173, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 177, 0, 0, 0, 0,
    0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 179, 0, 180, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0,
    183, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0,
    0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0,
    191, 0, 192, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 195, 0, 0, 0, 196, 0, 0, 0,
    197, 0, 0, 0, 198, 0, 199, 0, 0, 0, 200, 0, 0, 201, 0, 202, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 206, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 207, 0, 208, 0, 0, 209, 0, 210, 0, 0, 0, 0, 0, 0, 211, 0, 212, 0, 0, 213, 0, 214, 0, 0, 215, 0, 216,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 218, 0, 0, 0, 219, 0, 0, 0, 220, 0, 0, 0, 0, 221, 0, 222,
    0, 0, 0, 223, 0, 0, 224, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 231, 0, 232, 0, 233, 0, 234, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 236, 0, 0, 0,
    0, 237, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0,
    0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 246,
    0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0,
    251, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0,
    255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 257, 0, 258, 0, 0, 0, 0, 259, 0, 0, 0, 260,
    0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 262, 0, 0, 0, 263, 0, 0, 0, 264, 0, 0, 0, 265, 0, 266, 0, 0, 0,
    267, 0, 0, 268, 0, 269, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 275, 0, 276, 0, 277, 0, 278,
    0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 282, 0, 0, 0, 283, 0, 0, 0,
    0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 288,
    0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 293, 0, 0,
    0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0,
    298, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0,
    0, 302, 0, 0, 303, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0,
    0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 309, 0, 310, 0, 0, 0, 311, 0, 0, 312, 0, 313, 0, 314, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 319, 0, 320, 0, 321, 0, 322, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0,
    324, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 326, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 329, 0, 0,
    330, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 332, 0, 0, 333, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 335,
    0, 0, 336, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 338, 0, 0, 339, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0,
    0, 341, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 345,
    0, 346, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    349, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    352, 0, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 354, 0, 355, 0, 0, 0, 356, 0, 357, 0, 358, 0, 359, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0,
    0, 0, 0, 0, 363, 0, 0, 0, 364, 0, 365, 0, 366, 0, 367, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 370,
    0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0, 374, 0, 0, 375, 0, 0,
    0, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 0, 377, 0, 0, 378, 0, 0, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 0,
    380, 0, 0, 381, 0, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0, 0, 0, 0, 0, 383, 0, 0, 384, 0, 0, 0, 0, 0, 0, 0, 385, 0,
    0, 0, 0, 0, 0, 0, 386, 0, 0, 0, 0, 387, 0, 0, 0, 0, 0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    389, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 390, 0, 0, 0, 391, 0, 0, 0, 0, 392, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 393, 0, 394, 0, 0, 0, 0, 395, 0, 396, 0, 0, 0, 397, 0, 0, 398, 0, 399, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 400,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 401, 0, 0, 0, 0, 0, 0, 0, 0, 0, 402, 0, 0, 0, 0, 0, 0, 0, 0, 403, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 404, 0, 0, 0, 405, 0, 406, 0, 407, 0, 408, 0, 0, 0, 0, 0, 0, 409, 0, 0, 0, 0, 0, 0, 410, 0, 0, 0, 0,
    411, 0, 0, 0, 0, 0, 412, 0, 0, 0, 0, 413, 0, 0, 0, 0, 0, 0, 0, 0, 0, 414, 0, 0, 0, 0, 0, 0, 0, 0, 0, 415,
    0, 0, 416, 0, 0, 0, 0, 0, 0, 0, 0, 0, 417, 0, 0, 0, 0, 0, 0, 0, 0, 0, 418, 0, 0, 419, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 420, 0, 0, 0, 0, 0, 0, 0, 0, 0, 421, 0, 0, 0, 0, 422, 0, 0, 0, 0, 0, 0, 0, 0, 423, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 424, 0, 0, 0, 0, 0, 0, 425, 0, 0, 426, 0, 0, 0, 0, 427, 0, 0, 428, 0, 0, 429, 0, 430, 0,
    431, 0, 0, 432, 0, 433, 0, 0, 434, 435, 0, 436, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 437, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 438, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 439, 0, 0, 0, 0, 0, 0, 0, 0, 0, 440, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 441, 0, 0, 0, 0, 0, 0, 0, 0, 0, 442, 0, 0, 0, 443, 0, 444, 0, 0, 0, 445, 0, 446, 0, 447, 0, 448, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 449, 0, 450, 0, 0, 451, 452, 0, 0, 453, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 454, 0, 455, 0, 456, 457, 0, 458, 0, 459, 0, 460, 461, 0, 0,
    0, 462, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 463, 0, 464, 0, 465,
    0, 0, 0, 466, 0, 0, 0, 467, 0, 0, 0, 468, 0, 0, 0, 0, 0, 0, 0, 469, 0, 470, 471, 0, 0, 472, 0, 473, 0, 474, 475, 0,
    0, 0, 0, 0, 0, 0, 0, 476, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 477, 0, 0, 478, 0, 0, 0, 0, 0,
    479, 0, 480, 481, 0, 0, 482, 0, 483, 0, 0, 484, 0, 0, 485, 486, 0, 0, 0, 0, 487, 0, 0, 0, 0, 0, 488, 0, 0, 0, 0, 0,
    0, 0, 489, 0, 0, 0, 0, 0, 490, 0, 491, 492, 0, 0, 493, 0, 494, 0, 0, 495, 0, 0, 0, 0, 0, 0, 496, 0, 0, 0, 0, 497,
    0, 0, 0, 0, 0, 498, 0, 0, 0, 499, 0, 0, 0, 0, 0, 500, 0, 501, 502, 0, 0, 503, 0, 504, 0, 0, 505, 0, 0, 0, 0, 506,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 507, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 508, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 509, 0, 0, 0, 0, 0, 510, 0, 511, 512, 0, 513, 0, 0, 514,
    0, 0, 515, 0, 0, 516, 0, 0, 0, 517, 0, 0, 0, 0, 0, 518, 0, 0, 0, 519, 0, 0, 0, 0, 0, 0, 520, 0, 0, 0, 521, 0,
    0, 0, 0, 0, 522, 0, 0, 0, 523, 0, 0, 0, 0, 0, 0, 524, 0, 0, 0, 0, 525, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 526, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 527, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 528, 0, 0, 0, 0, 0, 529, 0, 530, 531, 0, 532, 0, 0, 533, 0, 0, 534, 0, 0,
    535, 0, 0, 0, 536, 0, 0, 0, 0, 0, 0, 537, 0, 0, 0, 538, 0, 0, 0, 0, 0, 539, 0, 0, 0, 540, 0, 0, 0, 0, 0, 541,
    0, 0, 0, 542, 0, 543, 0, 544, 0, 0, 0, 0, 0, 545, 0, 0, 0, 0, 0, 0, 546, 0, 0, 0, 0, 547, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 548, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 549, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 550, 0, 0, 0, 0, 0, 551, 0,
    552, 553, 0, 554, 0, 0, 0, 555, 0, 0, 556, 0, 557, 0, 0, 0, 0, 0, 558, 0, 0, 0, 559, 0, 0, 0, 0, 0, 0, 560, 0, 0,
    0, 561, 0, 0, 0, 0, 0, 562, 0, 0, 0, 563, 0, 0, 0, 0, 0, 0, 564, 0, 0, 0, 0, 565, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 566, 0, 0, 0, 0, 0, 567, 0, 0, 0, 0, 0, 0, 0, 568, 0, 0, 0, 0, 0, 569, 0, 570, 571,
    0, 572, 0, 0, 0, 0, 0, 573, 0, 0, 0, 574, 0, 0, 0, 0, 0, 575, 0, 0, 0, 576, 0, 0, 0, 0, 0, 577, 0, 0, 0, 578,
    579, 0, 0, 0, 0, 580, 0, 581, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 582, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 583, 0, 0, 0, 0, 0, 584, 0, 585, 586, 0, 0, 587, 0, 0, 0, 0, 0, 588, 0, 0, 0,
    589, 0, 590, 0, 591, 0, 592, 0, 593, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 594, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 595, 0, 0, 0, 0, 0, 0, 596, 0, 0, 0, 0, 0, 597, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 598, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 599,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 600, 0, 0, 0, 0, 0, 601, 0, 602, 603, 0, 0, 604, 0,
    0, 0, 0, 0, 605, 0, 0, 0, 606, 0, 0, 0, 0, 607, 0, 608, 0, 609, 0, 0, 610, 0, 611, 0, 612, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 613, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 614, 0, 0,
    0, 0, 0, 0, 0, 0, 615, 0, 0, 0, 616, 0, 0, 0, 617, 0, 618, 0, 619, 0, 0, 0, 0, 0, 0, 620, 0, 0, 0, 0, 0, 621,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 622, 0, 0, 0, 0, 0, 0, 0, 623, 0, 624, 0, 0, 0, 625, 0, 0,
    0, 626, 627, 0, 628, 0, 629, 0, 0, 0, 0, 0, 630, 631, 632, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 633, 0, 634, 635, 0, 636,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 637, 0, 0, 0, 0, 0, 0, 0, 0, 0, 638, 0, 0, 0, 0, 0, 639,
    0, 640, 641, 0, 0, 642, 0, 0, 643, 0, 0, 0, 644, 0, 0, 645, 0, 0, 646, 0, 647, 0, 0, 0, 648, 0, 0, 0, 649,
};
void recomp_unit_0047_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x088C0000u;
        entry_id = (entry_delta < 16372u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0047[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_088C0000;
    case 2u: goto L_088C004C;
    case 3u: goto L_088C0058;
    case 4u: goto L_088C009C;
    case 5u: goto L_088C00C4;
    case 6u: goto L_088C00D8;
    case 7u: goto L_088C00E4;
    case 8u: goto L_088C0144;
    case 9u: goto L_088C0190;
    case 10u: goto L_088C01DC;
    case 11u: goto L_088C01E4;
    case 12u: goto L_088C01EC;
    case 13u: goto L_088C01F4;
    case 14u: goto L_088C01FC;
    case 15u: goto L_088C0204;
    case 16u: goto L_088C0208;
    case 17u: goto L_088C0214;
    case 18u: goto L_088C021C;
    case 19u: goto L_088C0228;
    case 20u: goto L_088C0244;
    case 21u: goto L_088C0248;
    case 22u: goto L_088C0250;
    case 23u: goto L_088C0260;
    case 24u: goto L_088C0274;
    case 25u: goto L_088C0284;
    case 26u: goto L_088C0294;
    case 27u: goto L_088C029C;
    case 28u: goto L_088C02B8;
    case 29u: goto L_088C02C0;
    case 30u: goto L_088C02D0;
    case 31u: goto L_088C02D4;
    case 32u: goto L_088C02F0;
    case 33u: goto L_088C02FC;
    case 34u: goto L_088C0304;
    case 35u: goto L_088C030C;
    case 36u: goto L_088C0328;
    case 37u: goto L_088C0330;
    case 38u: goto L_088C033C;
    case 39u: goto L_088C034C;
    case 40u: goto L_088C0354;
    case 41u: goto L_088C0370;
    case 42u: goto L_088C0378;
    case 43u: goto L_088C038C;
    case 44u: goto L_088C0390;
    case 45u: goto L_088C03A0;
    case 46u: goto L_088C03A8;
    case 47u: goto L_088C03D4;
    case 48u: goto L_088C03FC;
    case 49u: goto L_088C0404;
    case 50u: goto L_088C0418;
    case 51u: goto L_088C042C;
    case 52u: goto L_088C0438;
    case 53u: goto L_088C0444;
    case 54u: goto L_088C044C;
    case 55u: goto L_088C0474;
    case 56u: goto L_088C047C;
    case 57u: goto L_088C0498;
    case 58u: goto L_088C04B0;
    case 59u: goto L_088C04C4;
    case 60u: goto L_088C04CC;
    case 61u: goto L_088C04DC;
    case 62u: goto L_088C04EC;
    case 63u: goto L_088C04FC;
    case 64u: goto L_088C0504;
    case 65u: goto L_088C050C;
    case 66u: goto L_088C0514;
    case 67u: goto L_088C0528;
    case 68u: goto L_088C0554;
    case 69u: goto L_088C055C;
    case 70u: goto L_088C0570;
    case 71u: goto L_088C0584;
    case 72u: goto L_088C05A4;
    case 73u: goto L_088C05B0;
    case 74u: goto L_088C05D8;
    case 75u: goto L_088C05E0;
    case 76u: goto L_088C05EC;
    case 77u: goto L_088C05F4;
    case 78u: goto L_088C05FC;
    case 79u: goto L_088C0604;
    case 80u: goto L_088C060C;
    case 81u: goto L_088C0614;
    case 82u: goto L_088C061C;
    case 83u: goto L_088C0620;
    case 84u: goto L_088C0628;
    case 85u: goto L_088C0640;
    case 86u: goto L_088C0658;
    case 87u: goto L_088C066C;
    case 88u: goto L_088C0674;
    case 89u: goto L_088C0684;
    case 90u: goto L_088C0694;
    case 91u: goto L_088C06A4;
    case 92u: goto L_088C06AC;
    case 93u: goto L_088C06B4;
    case 94u: goto L_088C06BC;
    case 95u: goto L_088C06D4;
    case 96u: goto L_088C0774;
    case 97u: goto L_088C078C;
    case 98u: goto L_088C0794;
    case 99u: goto L_088C07A8;
    case 100u: goto L_088C07C8;
    case 101u: goto L_088C07D4;
    case 102u: goto L_088C07F4;
    case 103u: goto L_088C0800;
    case 104u: goto L_088C0844;
    case 105u: goto L_088C0878;
    case 106u: goto L_088C08B4;
    case 107u: goto L_088C0914;
    case 108u: goto L_088C092C;
    case 109u: goto L_088C0934;
    case 110u: goto L_088C093C;
    case 111u: goto L_088C0990;
    case 112u: goto L_088C0998;
    case 113u: goto L_088C09DC;
    case 114u: goto L_088C09E4;
    case 115u: goto L_088C09EC;
    case 116u: goto L_088C09F0;
    case 117u: goto L_088C09FC;
    case 118u: goto L_088C0A30;
    case 119u: goto L_088C0A38;
    case 120u: goto L_088C0A40;
    case 121u: goto L_088C0A54;
    case 122u: goto L_088C0A9C;
    case 123u: goto L_088C0AA4;
    case 124u: goto L_088C0AD4;
    case 125u: goto L_088C0ADC;
    case 126u: goto L_088C0B10;
    case 127u: goto L_088C0B18;
    case 128u: goto L_088C0B20;
    case 129u: goto L_088C0B34;
    case 130u: goto L_088C0B80;
    case 131u: goto L_088C0B88;
    case 132u: goto L_088C0BAC;
    case 133u: goto L_088C0BB4;
    case 134u: goto L_088C0BBC;
    case 135u: goto L_088C0BD4;
    case 136u: goto L_088C0C3C;
    case 137u: goto L_088C0C44;
    case 138u: goto L_088C0C60;
    case 139u: goto L_088C0C70;
    case 140u: goto L_088C0C78;
    case 141u: goto L_088C0C80;
    case 142u: goto L_088C0C94;
    case 143u: goto L_088C0C98;
    case 144u: goto L_088C0CD8;
    case 145u: goto L_088C0D64;
    case 146u: goto L_088C0D8C;
    case 147u: goto L_088C0DB0;
    case 148u: goto L_088C0DD8;
    case 149u: goto L_088C0DE8;
    case 150u: goto L_088C0E00;
    case 151u: goto L_088C0E14;
    case 152u: goto L_088C0E24;
    case 153u: goto L_088C0E50;
    case 154u: goto L_088C0E70;
    case 155u: goto L_088C0E90;
    case 156u: goto L_088C0EA4;
    case 157u: goto L_088C0EC0;
    case 158u: goto L_088C0EF8;
    case 159u: goto L_088C0FC8;
    case 160u: goto L_088C0FF0;
    case 161u: goto L_088C1014;
    case 162u: goto L_088C103C;
    case 163u: goto L_088C104C;
    case 164u: goto L_088C1054;
    case 165u: goto L_088C105C;
    case 166u: goto L_088C1064;
    case 167u: goto L_088C107C;
    case 168u: goto L_088C1094;
    case 169u: goto L_088C10A8;
    case 170u: goto L_088C10C0;
    case 171u: goto L_088C10D4;
    case 172u: goto L_088C10F4;
    case 173u: goto L_088C1114;
    case 174u: goto L_088C1120;
    case 175u: goto L_088C1140;
    case 176u: goto L_088C1160;
    case 177u: goto L_088C116C;
    case 178u: goto L_088C118C;
    case 179u: goto L_088C11AC;
    case 180u: goto L_088C11B4;
    case 181u: goto L_088C11D4;
    case 182u: goto L_088C11F4;
    case 183u: goto L_088C1200;
    case 184u: goto L_088C1220;
    case 185u: goto L_088C1240;
    case 186u: goto L_088C124C;
    case 187u: goto L_088C1278;
    case 188u: goto L_088C128C;
    case 189u: goto L_088C12B0;
    case 190u: goto L_088C12E4;
    case 191u: goto L_088C1300;
    case 192u: goto L_088C1308;
    case 193u: goto L_088C131C;
    case 194u: goto L_088C1348;
    case 195u: goto L_088C1360;
    case 196u: goto L_088C1370;
    case 197u: goto L_088C1380;
    case 198u: goto L_088C1390;
    case 199u: goto L_088C1398;
    case 200u: goto L_088C13A8;
    case 201u: goto L_088C13B4;
    case 202u: goto L_088C13BC;
    case 203u: goto L_088C13C4;
    case 204u: goto L_088C143C;
    case 205u: goto L_088C1458;
    case 206u: goto L_088C146C;
    case 207u: goto L_088C1494;
    case 208u: goto L_088C149C;
    case 209u: goto L_088C14A8;
    case 210u: goto L_088C14B0;
    case 211u: goto L_088C14CC;
    case 212u: goto L_088C14D4;
    case 213u: goto L_088C14E0;
    case 214u: goto L_088C14E8;
    case 215u: goto L_088C14F4;
    case 216u: goto L_088C14FC;
    case 217u: goto L_088C1528;
    case 218u: goto L_088C1540;
    case 219u: goto L_088C1550;
    case 220u: goto L_088C1560;
    case 221u: goto L_088C1574;
    case 222u: goto L_088C157C;
    case 223u: goto L_088C158C;
    case 224u: goto L_088C1598;
    case 225u: goto L_088C15A0;
    case 226u: goto L_088C15D4;
    case 227u: goto L_088C16A4;
    case 228u: goto L_088C16CC;
    case 229u: goto L_088C16F0;
    case 230u: goto L_088C1718;
    case 231u: goto L_088C1728;
    case 232u: goto L_088C1730;
    case 233u: goto L_088C1738;
    case 234u: goto L_088C1740;
    case 235u: goto L_088C1758;
    case 236u: goto L_088C1770;
    case 237u: goto L_088C1784;
    case 238u: goto L_088C179C;
    case 239u: goto L_088C17B0;
    case 240u: goto L_088C17D4;
    case 241u: goto L_088C17F8;
    case 242u: goto L_088C1804;
    case 243u: goto L_088C1828;
    case 244u: goto L_088C184C;
    case 245u: goto L_088C1858;
    case 246u: goto L_088C187C;
    case 247u: goto L_088C18A0;
    case 248u: goto L_088C18AC;
    case 249u: goto L_088C18D0;
    case 250u: goto L_088C18F4;
    case 251u: goto L_088C1900;
    case 252u: goto L_088C1924;
    case 253u: goto L_088C1948;
    case 254u: goto L_088C195C;
    case 255u: goto L_088C1980;
    case 256u: goto L_088C19B4;
    case 257u: goto L_088C19D0;
    case 258u: goto L_088C19D8;
    case 259u: goto L_088C19EC;
    case 260u: goto L_088C19FC;
    case 261u: goto L_088C1A20;
    case 262u: goto L_088C1A38;
    case 263u: goto L_088C1A48;
    case 264u: goto L_088C1A58;
    case 265u: goto L_088C1A68;
    case 266u: goto L_088C1A70;
    case 267u: goto L_088C1A80;
    case 268u: goto L_088C1A8C;
    case 269u: goto L_088C1A94;
    case 270u: goto L_088C1A9C;
    case 271u: goto L_088C1B60;
    case 272u: goto L_088C1B88;
    case 273u: goto L_088C1BAC;
    case 274u: goto L_088C1BD4;
    case 275u: goto L_088C1BE4;
    case 276u: goto L_088C1BEC;
    case 277u: goto L_088C1BF4;
    case 278u: goto L_088C1BFC;
    case 279u: goto L_088C1C18;
    case 280u: goto L_088C1C34;
    case 281u: goto L_088C1C48;
    case 282u: goto L_088C1C60;
    case 283u: goto L_088C1C70;
    case 284u: goto L_088C1C90;
    case 285u: goto L_088C1CB0;
    case 286u: goto L_088C1CBC;
    case 287u: goto L_088C1CDC;
    case 288u: goto L_088C1CFC;
    case 289u: goto L_088C1D1C;
    case 290u: goto L_088C1D28;
    case 291u: goto L_088C1D48;
    case 292u: goto L_088C1D68;
    case 293u: goto L_088C1D74;
    case 294u: goto L_088C1D94;
    case 295u: goto L_088C1DB4;
    case 296u: goto L_088C1DC0;
    case 297u: goto L_088C1DE0;
    case 298u: goto L_088C1E00;
    case 299u: goto L_088C1E14;
    case 300u: goto L_088C1E38;
    case 301u: goto L_088C1E6C;
    case 302u: goto L_088C1E84;
    case 303u: goto L_088C1E90;
    case 304u: goto L_088C1EA4;
    case 305u: goto L_088C1ED0;
    case 306u: goto L_088C1EF0;
    case 307u: goto L_088C1F08;
    case 308u: goto L_088C1F34;
    case 309u: goto L_088C1F44;
    case 310u: goto L_088C1F4C;
    case 311u: goto L_088C1F5C;
    case 312u: goto L_088C1F68;
    case 313u: goto L_088C1F70;
    case 314u: goto L_088C1F78;
    case 315u: goto L_088C202C;
    case 316u: goto L_088C2054;
    case 317u: goto L_088C2078;
    case 318u: goto L_088C20A0;
    case 319u: goto L_088C20B0;
    case 320u: goto L_088C20B8;
    case 321u: goto L_088C20C0;
    case 322u: goto L_088C20C8;
    case 323u: goto L_088C20E4;
    case 324u: goto L_088C2100;
    case 325u: goto L_088C2114;
    case 326u: goto L_088C212C;
    case 327u: goto L_088C213C;
    case 328u: goto L_088C2158;
    case 329u: goto L_088C2174;
    case 330u: goto L_088C2180;
    case 331u: goto L_088C219C;
    case 332u: goto L_088C21B8;
    case 333u: goto L_088C21C4;
    case 334u: goto L_088C21E0;
    case 335u: goto L_088C21FC;
    case 336u: goto L_088C2208;
    case 337u: goto L_088C2224;
    case 338u: goto L_088C2240;
    case 339u: goto L_088C224C;
    case 340u: goto L_088C2268;
    case 341u: goto L_088C2284;
    case 342u: goto L_088C2298;
    case 343u: goto L_088C22BC;
    case 344u: goto L_088C22EC;
    case 345u: goto L_088C22FC;
    case 346u: goto L_088C2304;
    case 347u: goto L_088C2318;
    case 348u: goto L_088C2358;
    case 349u: goto L_088C2380;
    case 350u: goto L_088C23AC;
    case 351u: goto L_088C23D4;
    case 352u: goto L_088C2400;
    case 353u: goto L_088C2428;
    case 354u: goto L_088C2438;
    case 355u: goto L_088C2440;
    case 356u: goto L_088C2450;
    case 357u: goto L_088C2458;
    case 358u: goto L_088C2460;
    case 359u: goto L_088C2468;
    case 360u: goto L_088C2528;
    case 361u: goto L_088C254C;
    case 362u: goto L_088C256C;
    case 363u: goto L_088C2590;
    case 364u: goto L_088C25A0;
    case 365u: goto L_088C25A8;
    case 366u: goto L_088C25B0;
    case 367u: goto L_088C25B8;
    case 368u: goto L_088C25D0;
    case 369u: goto L_088C25E8;
    case 370u: goto L_088C25FC;
    case 371u: goto L_088C2614;
    case 372u: goto L_088C2628;
    case 373u: goto L_088C2648;
    case 374u: goto L_088C2668;
    case 375u: goto L_088C2674;
    case 376u: goto L_088C2694;
    case 377u: goto L_088C26B4;
    case 378u: goto L_088C26C0;
    case 379u: goto L_088C26E0;
    case 380u: goto L_088C2700;
    case 381u: goto L_088C270C;
    case 382u: goto L_088C272C;
    case 383u: goto L_088C274C;
    case 384u: goto L_088C2758;
    case 385u: goto L_088C2778;
    case 386u: goto L_088C2798;
    case 387u: goto L_088C27AC;
    case 388u: goto L_088C27D0;
    case 389u: goto L_088C2800;
    case 390u: goto L_088C2854;
    case 391u: goto L_088C2864;
    case 392u: goto L_088C2878;
    case 393u: goto L_088C2904;
    case 394u: goto L_088C290C;
    case 395u: goto L_088C2920;
    case 396u: goto L_088C2928;
    case 397u: goto L_088C2938;
    case 398u: goto L_088C2944;
    case 399u: goto L_088C294C;
    case 400u: goto L_088C297C;
    case 401u: goto L_088C2A18;
    case 402u: goto L_088C2A40;
    case 403u: goto L_088C2A64;
    case 404u: goto L_088C2A8C;
    case 405u: goto L_088C2A9C;
    case 406u: goto L_088C2AA4;
    case 407u: goto L_088C2AAC;
    case 408u: goto L_088C2AB4;
    case 409u: goto L_088C2AD0;
    case 410u: goto L_088C2AEC;
    case 411u: goto L_088C2B00;
    case 412u: goto L_088C2B18;
    case 413u: goto L_088C2B2C;
    case 414u: goto L_088C2B54;
    case 415u: goto L_088C2B7C;
    case 416u: goto L_088C2B88;
    case 417u: goto L_088C2BB0;
    case 418u: goto L_088C2BD8;
    case 419u: goto L_088C2BE4;
    case 420u: goto L_088C2C0C;
    case 421u: goto L_088C2C34;
    case 422u: goto L_088C2C48;
    case 423u: goto L_088C2C6C;
    case 424u: goto L_088C2C9C;
    case 425u: goto L_088C2CB8;
    case 426u: goto L_088C2CC4;
    case 427u: goto L_088C2CD8;
    case 428u: goto L_088C2CE4;
    case 429u: goto L_088C2CF0;
    case 430u: goto L_088C2CF8;
    case 431u: goto L_088C2D00;
    case 432u: goto L_088C2D0C;
    case 433u: goto L_088C2D14;
    case 434u: goto L_088C2D20;
    case 435u: goto L_088C2D24;
    case 436u: goto L_088C2D2C;
    case 437u: goto L_088C2D68;
    case 438u: goto L_088C2D90;
    case 439u: goto L_088C2DBC;
    case 440u: goto L_088C2DE4;
    case 441u: goto L_088C2E10;
    case 442u: goto L_088C2E38;
    case 443u: goto L_088C2E48;
    case 444u: goto L_088C2E50;
    case 445u: goto L_088C2E60;
    case 446u: goto L_088C2E68;
    case 447u: goto L_088C2E70;
    case 448u: goto L_088C2E78;
    case 449u: goto L_088C2ECC;
    case 450u: goto L_088C2ED4;
    case 451u: goto L_088C2EE0;
    case 452u: goto L_088C2EE4;
    case 453u: goto L_088C2EF0;
    case 454u: goto L_088C2F44;
    case 455u: goto L_088C2F4C;
    case 456u: goto L_088C2F54;
    case 457u: goto L_088C2F58;
    case 458u: goto L_088C2F60;
    case 459u: goto L_088C2F68;
    case 460u: goto L_088C2F70;
    case 461u: goto L_088C2F74;
    case 462u: goto L_088C2F84;
    case 463u: goto L_088C2FEC;
    case 464u: goto L_088C2FF4;
    case 465u: goto L_088C2FFC;
    case 466u: goto L_088C300C;
    case 467u: goto L_088C301C;
    case 468u: goto L_088C302C;
    case 469u: goto L_088C304C;
    case 470u: goto L_088C3054;
    case 471u: goto L_088C3058;
    case 472u: goto L_088C3064;
    case 473u: goto L_088C306C;
    case 474u: goto L_088C3074;
    case 475u: goto L_088C3078;
    case 476u: goto L_088C309C;
    case 477u: goto L_088C30DC;
    case 478u: goto L_088C30E8;
    case 479u: goto L_088C3100;
    case 480u: goto L_088C3108;
    case 481u: goto L_088C310C;
    case 482u: goto L_088C3118;
    case 483u: goto L_088C3120;
    case 484u: goto L_088C312C;
    case 485u: goto L_088C3138;
    case 486u: goto L_088C313C;
    case 487u: goto L_088C3150;
    case 488u: goto L_088C3168;
    case 489u: goto L_088C3188;
    case 490u: goto L_088C31A0;
    case 491u: goto L_088C31A8;
    case 492u: goto L_088C31AC;
    case 493u: goto L_088C31B8;
    case 494u: goto L_088C31C0;
    case 495u: goto L_088C31CC;
    case 496u: goto L_088C31E8;
    case 497u: goto L_088C31FC;
    case 498u: goto L_088C3214;
    case 499u: goto L_088C3224;
    case 500u: goto L_088C323C;
    case 501u: goto L_088C3244;
    case 502u: goto L_088C3248;
    case 503u: goto L_088C3254;
    case 504u: goto L_088C325C;
    case 505u: goto L_088C3268;
    case 506u: goto L_088C327C;
    case 507u: goto L_088C32A4;
    case 508u: goto L_088C3310;
    case 509u: goto L_088C3344;
    case 510u: goto L_088C335C;
    case 511u: goto L_088C3364;
    case 512u: goto L_088C3368;
    case 513u: goto L_088C3370;
    case 514u: goto L_088C337C;
    case 515u: goto L_088C3388;
    case 516u: goto L_088C3394;
    case 517u: goto L_088C33A4;
    case 518u: goto L_088C33BC;
    case 519u: goto L_088C33CC;
    case 520u: goto L_088C33E8;
    case 521u: goto L_088C33F8;
    case 522u: goto L_088C3410;
    case 523u: goto L_088C3420;
    case 524u: goto L_088C343C;
    case 525u: goto L_088C3450;
    case 526u: goto L_088C3494;
    case 527u: goto L_088C3504;
    case 528u: goto L_088C3530;
    case 529u: goto L_088C3548;
    case 530u: goto L_088C3550;
    case 531u: goto L_088C3554;
    case 532u: goto L_088C355C;
    case 533u: goto L_088C3568;
    case 534u: goto L_088C3574;
    case 535u: goto L_088C3580;
    case 536u: goto L_088C3590;
    case 537u: goto L_088C35AC;
    case 538u: goto L_088C35BC;
    case 539u: goto L_088C35D4;
    case 540u: goto L_088C35E4;
    case 541u: goto L_088C35FC;
    case 542u: goto L_088C360C;
    case 543u: goto L_088C3614;
    case 544u: goto L_088C361C;
    case 545u: goto L_088C3634;
    case 546u: goto L_088C3650;
    case 547u: goto L_088C3664;
    case 548u: goto L_088C36AC;
    case 549u: goto L_088C3718;
    case 550u: goto L_088C3760;
    case 551u: goto L_088C3778;
    case 552u: goto L_088C3780;
    case 553u: goto L_088C3784;
    case 554u: goto L_088C378C;
    case 555u: goto L_088C379C;
    case 556u: goto L_088C37A8;
    case 557u: goto L_088C37B0;
    case 558u: goto L_088C37C8;
    case 559u: goto L_088C37D8;
    case 560u: goto L_088C37F4;
    case 561u: goto L_088C3804;
    case 562u: goto L_088C381C;
    case 563u: goto L_088C382C;
    case 564u: goto L_088C3848;
    case 565u: goto L_088C385C;
    case 566u: goto L_088C38A0;
    case 567u: goto L_088C38B8;
    case 568u: goto L_088C38D8;
    case 569u: goto L_088C38F0;
    case 570u: goto L_088C38F8;
    case 571u: goto L_088C38FC;
    case 572u: goto L_088C3904;
    case 573u: goto L_088C391C;
    case 574u: goto L_088C392C;
    case 575u: goto L_088C3944;
    case 576u: goto L_088C3954;
    case 577u: goto L_088C396C;
    case 578u: goto L_088C397C;
    case 579u: goto L_088C3980;
    case 580u: goto L_088C3994;
    case 581u: goto L_088C399C;
    case 582u: goto L_088C39F0;
    case 583u: goto L_088C3A28;
    case 584u: goto L_088C3A40;
    case 585u: goto L_088C3A48;
    case 586u: goto L_088C3A4C;
    case 587u: goto L_088C3A58;
    case 588u: goto L_088C3A70;
    case 589u: goto L_088C3A80;
    case 590u: goto L_088C3A88;
    case 591u: goto L_088C3A90;
    case 592u: goto L_088C3A98;
    case 593u: goto L_088C3AA0;
    case 594u: goto L_088C3ACC;
    case 595u: goto L_088C3B34;
    case 596u: goto L_088C3B50;
    case 597u: goto L_088C3B68;
    case 598u: goto L_088C3BA8;
    case 599u: goto L_088C3BFC;
    case 600u: goto L_088C3C48;
    case 601u: goto L_088C3C60;
    case 602u: goto L_088C3C68;
    case 603u: goto L_088C3C6C;
    case 604u: goto L_088C3C78;
    case 605u: goto L_088C3C90;
    case 606u: goto L_088C3CA0;
    case 607u: goto L_088C3CB4;
    case 608u: goto L_088C3CBC;
    case 609u: goto L_088C3CC4;
    case 610u: goto L_088C3CD0;
    case 611u: goto L_088C3CD8;
    case 612u: goto L_088C3CE0;
    case 613u: goto L_088C3D0C;
    case 614u: goto L_088C3D74;
    case 615u: goto L_088C3D98;
    case 616u: goto L_088C3DA8;
    case 617u: goto L_088C3DB8;
    case 618u: goto L_088C3DC0;
    case 619u: goto L_088C3DC8;
    case 620u: goto L_088C3DE4;
    case 621u: goto L_088C3DFC;
    case 622u: goto L_088C3E3C;
    case 623u: goto L_088C3E5C;
    case 624u: goto L_088C3E64;
    case 625u: goto L_088C3E74;
    case 626u: goto L_088C3E84;
    case 627u: goto L_088C3E88;
    case 628u: goto L_088C3E90;
    case 629u: goto L_088C3E98;
    case 630u: goto L_088C3EB0;
    case 631u: goto L_088C3EB4;
    case 632u: goto L_088C3EB8;
    case 633u: goto L_088C3EE8;
    case 634u: goto L_088C3EF0;
    case 635u: goto L_088C3EF4;
    case 636u: goto L_088C3EFC;
    case 637u: goto L_088C3F3C;
    case 638u: goto L_088C3F64;
    case 639u: goto L_088C3F7C;
    case 640u: goto L_088C3F84;
    case 641u: goto L_088C3F88;
    case 642u: goto L_088C3F94;
    case 643u: goto L_088C3FA0;
    case 644u: goto L_088C3FB0;
    case 645u: goto L_088C3FBC;
    case 646u: goto L_088C3FC8;
    case 647u: goto L_088C3FD0;
    case 648u: goto L_088C3FE0;
    case 649u: goto L_088C3FF0;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_088C0000:
    aot_mem.aot_store32(ctx.gpr[14] + static_cast<std::uint32_t>(20644), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[15] + static_cast<std::uint32_t>(20648), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[9] = (16268u << 16u);
    ctx.gpr[24] = (2227u << 16u);
    ctx.gpr[7] = (ctx.gpr[9] | 52429u);
    aot_mem.aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(20656), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[25] = (2227u << 16u);
    ctx.gpr[17] = (2233u << 16u);
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[2] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2824));
    aot_mem.aot_store32(ctx.gpr[25] + static_cast<std::uint32_t>(20672), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x088C004Cu);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(20680), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 442u, 0x088BA674u>(ctx, &aot_mem) && ctx.pc == 0x088C004Cu) goto L_088C004C;
    return;
L_088C004C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x088C0058u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20912));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 251u, 0x08AF5420u>(ctx, &aot_mem) && ctx.pc == 0x088C0058u) goto L_088C0058;
    return;
L_088C0058:
    ctx.gpr[4] = (17302u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 22938u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (50081u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20816), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20816));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (16704u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C009C:
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
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
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 36u, 3u);
      ctx.read_vfpu_vector_ct<1u, 3u>(vfpu_target_raw);
      constexpr std::uint32_t vfpu_side = 3u;
      constexpr std::uint32_t vfpu_input_length = 3u;
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_target[i] = i < vfpu_input_length ? vfpu_target_raw[i] : 0.0f;
      if (vfpu_side - 1u >= vfpu_input_length) vfpu_target[vfpu_side - 1u] = 1.0f;
      for (std::uint32_t row = 0; row + 1u < vfpu_side; ++row) {
        float sum = 0.0f;
        for (std::uint32_t column = 0; column < vfpu_side; ++column) sum += vfpu_matrix[row * 4u + column] * vfpu_target[column];
        vfpu_result[row] = sum;
      }
      float vfpu_final_row[4]{vfpu_matrix[(vfpu_side - 1u) * 4u + 0u], vfpu_matrix[(vfpu_side - 1u) * 4u + 1u],
                              vfpu_matrix[(vfpu_side - 1u) * 4u + 2u], vfpu_matrix[(vfpu_side - 1u) * 4u + 3u]};
      ctx.apply_vfpu_source_prefix_ct<4u, 0u>(vfpu_final_row);
      ctx.apply_vfpu_source_prefix_ct<4u, 1u>(vfpu_target);
      for (std::uint32_t column = 0; column < 4u; ++column) vfpu_result[vfpu_side - 1u] += vfpu_final_row[column] * vfpu_target[column];
      const std::uint32_t vfpu_destination_prefix = ctx.vfpu_ctrl[2];
      const std::uint32_t vfpu_last_lane = vfpu_side - 1u;
      ctx.vfpu_ctrl[2] = ((vfpu_destination_prefix & (1u << 8u)) << vfpu_last_lane) |
                         ((vfpu_destination_prefix & 3u) << (vfpu_last_lane * 2u));
      ctx.write_vfpu_vector_with_destination_prefix(vfpu_result, 0u, vfpu_side); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<7u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
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
L_088C00C4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x088C00D8u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 125u, 0x08834A18u>(ctx, &aot_mem) && ctx.pc == 0x088C00D8u) goto L_088C00D8;
    return;
L_088C00D8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C00E4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[7] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
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
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 36u, 3u);
      ctx.read_vfpu_vector_ct<1u, 3u>(vfpu_target_raw);
      constexpr std::uint32_t vfpu_side = 3u;
      constexpr std::uint32_t vfpu_input_length = 3u;
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_target[i] = i < vfpu_input_length ? vfpu_target_raw[i] : 0.0f;
      if (vfpu_side - 1u >= vfpu_input_length) vfpu_target[vfpu_side - 1u] = 1.0f;
      for (std::uint32_t row = 0; row + 1u < vfpu_side; ++row) {
        float sum = 0.0f;
        for (std::uint32_t column = 0; column < vfpu_side; ++column) sum += vfpu_matrix[row * 4u + column] * vfpu_target[column];
        vfpu_result[row] = sum;
      }
      float vfpu_final_row[4]{vfpu_matrix[(vfpu_side - 1u) * 4u + 0u], vfpu_matrix[(vfpu_side - 1u) * 4u + 1u],
                              vfpu_matrix[(vfpu_side - 1u) * 4u + 2u], vfpu_matrix[(vfpu_side - 1u) * 4u + 3u]};
      ctx.apply_vfpu_source_prefix_ct<4u, 0u>(vfpu_final_row);
      ctx.apply_vfpu_source_prefix_ct<4u, 1u>(vfpu_target);
      for (std::uint32_t column = 0; column < 4u; ++column) vfpu_result[vfpu_side - 1u] += vfpu_final_row[column] * vfpu_target[column];
      const std::uint32_t vfpu_destination_prefix = ctx.vfpu_ctrl[2];
      const std::uint32_t vfpu_last_lane = vfpu_side - 1u;
      ctx.vfpu_ctrl[2] = ((vfpu_destination_prefix & (1u << 8u)) << vfpu_last_lane) |
                         ((vfpu_destination_prefix & 3u) << (vfpu_last_lane * 2u));
      ctx.write_vfpu_vector_with_destination_prefix(vfpu_result, 0u, vfpu_side); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<7u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C0144:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-6867), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-6866), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-7119), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-7112), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-7118), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-7811), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-7756), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-6865), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2230u << 16u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7724), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C0190:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(940)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[4] ^ 2u);
    ctx.gpr[16] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-25840));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (2227u << 16u);
      if (branch_taken) {
          goto L_088C01E4;
      }
      goto L_088C01DC;
    }
L_088C01DC:
    ctx.gpr[31] = (0x088C01E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0008_entry, 8u, 41u, 0x088245C0u>(ctx, &aot_mem) && ctx.pc == 0x088C01E4u) goto L_088C01E4;
    return;
L_088C01E4:
    ctx.gpr[31] = (0x088C01ECu);
    ctx.gpr[18] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 140u, 0x08834B8Cu>(ctx, &aot_mem) && ctx.pc == 0x088C01ECu) goto L_088C01EC;
    return;
L_088C01EC:
    ctx.gpr[31] = (0x088C01F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 294u, 0x0883D760u>(ctx, &aot_mem) && ctx.pc == 0x088C01F4u) goto L_088C01F4;
    return;
L_088C01F4:
    ctx.gpr[31] = (0x088C01FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 319u, 0x0883D988u>(ctx, &aot_mem) && ctx.pc == 0x088C01FCu) goto L_088C01FC;
    return;
L_088C01FC:
    ctx.gpr[31] = (0x088C0204u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 318u, 0x08A9DAA8u>(ctx, &aot_mem) && ctx.pc == 0x088C0204u) goto L_088C0204;
    return;
L_088C0204:
    ctx.gpr[16] = (0u | 0u);
    goto L_088C0208;
L_088C0208:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C0248;
      }
      goto L_088C0214;
    }
L_088C0214:
    ctx.gpr[31] = (0x088C021Cu);
    // nop
    goto L_088C0528;
L_088C021C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C0244;
      }
      goto L_088C0228;
    }
L_088C0228:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(24));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088C0244u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C0244u) goto L_088C0244;
    return;
L_088C0244:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), 0u);
    goto L_088C0248;
L_088C0248:
    ctx.gpr[31] = (0x088C0250u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 234u, 0x089D5B7Cu>(ctx, &aot_mem) && ctx.pc == 0x088C0250u) goto L_088C0250;
    return;
L_088C0250:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 1 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(368));
      if (branch_taken) {
          goto L_088C0208;
      }
      goto L_088C0260;
    }
L_088C0260:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[22] = (0u | 4u);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20972)));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[21] = (2227u << 16u);
    goto L_088C0274;
L_088C0274:
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[18]);
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C02C0;
      }
      goto L_088C0284;
    }
L_088C0284:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x088C0294u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    goto L_088C0528;
L_088C0294:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C02B8;
      }
      goto L_088C029C;
    }
L_088C029C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x088C02B8u);
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C02B8u) goto L_088C02B8;
    return;
L_088C02B8:
    { const bool branch_taken = ctx.gpr[23] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C0284;
      }
      goto L_088C02C0;
    }
L_088C02C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(20980)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C0330;
      }
      goto L_088C02D0;
    }
L_088C02D0:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    goto L_088C02D4;
L_088C02D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 4u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_088C0328;
      }
      goto L_088C02F0;
    }
L_088C02F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(836)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_088C0328;
      }
      goto L_088C02FC;
    }
L_088C02FC:
    ctx.gpr[31] = (0x088C0304u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    goto L_088C0528;
L_088C0304:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C0328;
      }
      goto L_088C030C;
    }
L_088C030C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x088C0328u);
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C0328u) goto L_088C0328;
    return;
L_088C0328:
    if (ctx.gpr[23] != 0u) {
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
        goto L_088C02D4;
    }
    goto L_088C0330;
L_088C0330:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C0378;
      }
      goto L_088C033C;
    }
L_088C033C:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x088C034Cu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    goto L_088C0528;
L_088C034C:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C0370;
      }
      goto L_088C0354;
    }
L_088C0354:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x088C0370u);
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C0370u) goto L_088C0370;
    return;
L_088C0370:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C033C;
      }
      goto L_088C0378;
    }
L_088C0378:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(44));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 10000 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20972)));
      if (branch_taken) {
          goto L_088C0274;
      }
      goto L_088C038C;
    }
L_088C038C:
    ctx.gpr[4] = (0u | 0u);
    goto L_088C0390;
L_088C0390:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 10000 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C0390;
      }
      goto L_088C03A0;
    }
L_088C03A0:
    ctx.gpr[31] = (0x088C03A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 565u, 0x08A06C68u>(ctx, &aot_mem) && ctx.pc == 0x088C03A8u) goto L_088C03A8;
    return;
L_088C03A8:
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
L_088C03D4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u | 4u);
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 6u);
      if (branch_taken) {
          goto L_088C0404;
      }
      goto L_088C03FC;
    }
L_088C03FC:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088C0418;
      }
      goto L_088C0404;
    }
L_088C0404:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x088C0418u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 99u, 0x08864748u>(ctx, &aot_mem) && ctx.pc == 0x088C0418u) goto L_088C0418;
    return;
L_088C0418:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (128u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C0498;
      }
      goto L_088C042C;
    }
L_088C042C:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x088C0438u);
    ctx.gpr[4] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0139_entry, 139u, 185u, 0x08A312A8u>(ctx, &aot_mem) && ctx.pc == 0x088C0438u) goto L_088C0438;
    return;
L_088C0438:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C044C;
      }
      goto L_088C0444;
    }
L_088C0444:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    goto L_088C044C;
L_088C044C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(90)));
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(20980)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
      if (branch_taken) {
          goto L_088C047C;
      }
      goto L_088C0474;
    }
L_088C0474:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    goto L_088C047C;
L_088C047C:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[5] = (ctx.gpr[4] ^ 2u);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_088C04C4;
      }
      goto L_088C0498;
    }
L_088C0498:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088C04B0u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C04B0u) goto L_088C04B0;
    return;
L_088C04B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[5] = (ctx.gpr[4] ^ 2u);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    goto L_088C04C4;
L_088C04C4:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] ^ 10u);
      if (branch_taken) {
          goto L_088C0514;
      }
      goto L_088C04CC;
    }
L_088C04CC:
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C0514;
      }
      goto L_088C04DC;
    }
L_088C04DC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] & 2048u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088C04FC;
      }
      goto L_088C04EC;
    }
L_088C04EC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (ctx.gpr[5] & 4096u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_088C0504;
      }
      goto L_088C04FC;
    }
L_088C04FC:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_088C0504;
L_088C0504:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C0514;
      }
      goto L_088C050C;
    }
L_088C050C:
    ctx.gpr[31] = (0x088C0514u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 145u, 0x08A0D328u>(ctx, &aot_mem) && ctx.pc == 0x088C0514u) goto L_088C0514;
    return;
L_088C0514:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C0528:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u | 4u);
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 6u);
      if (branch_taken) {
          goto L_088C055C;
      }
      goto L_088C0554;
    }
L_088C0554:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088C0570;
      }
      goto L_088C055C;
    }
L_088C055C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x088C0570u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 99u, 0x08864748u>(ctx, &aot_mem) && ctx.pc == 0x088C0570u) goto L_088C0570;
    return;
L_088C0570:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (128u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C0640;
      }
      goto L_088C0584;
    }
L_088C0584:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(90)));
    ctx.gpr[17] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20980)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C0628;
      }
      goto L_088C05A4;
    }
L_088C05A4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[16];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_088C061C;
      }
      goto L_088C05B0;
    }
L_088C05B0:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(90)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20980)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[4];
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_088C05E0;
      }
      goto L_088C05D8;
    }
L_088C05D8:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    goto L_088C05E0;
L_088C05E0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C05F4;
      }
      goto L_088C05EC;
    }
L_088C05EC:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    goto L_088C05F4;
L_088C05F4:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C0604;
      }
      goto L_088C05FC;
    }
L_088C05FC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    goto L_088C0604;
L_088C0604:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C0614;
      }
      goto L_088C060C;
    }
L_088C060C:
    ctx.gpr[31] = (0x088C0614u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0139_entry, 139u, 187u, 0x08A312C8u>(ctx, &aot_mem) && ctx.pc == 0x088C0614u) goto L_088C0614;
    return;
L_088C0614:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C0620;
      }
      goto L_088C061C;
    }
L_088C061C:
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    goto L_088C0620;
L_088C0620:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C05A4;
      }
      goto L_088C0628;
    }
L_088C0628:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[5] = (ctx.gpr[4] ^ 2u);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_088C066C;
      }
      goto L_088C0640;
    }
L_088C0640:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088C0658u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C0658u) goto L_088C0658;
    return;
L_088C0658:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[5] = (ctx.gpr[4] ^ 2u);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    goto L_088C066C;
L_088C066C:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] ^ 10u);
      if (branch_taken) {
          goto L_088C06BC;
      }
      goto L_088C0674;
    }
L_088C0674:
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C06BC;
      }
      goto L_088C0684;
    }
L_088C0684:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] & 2048u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088C06A4;
      }
      goto L_088C0694;
    }
L_088C0694:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (ctx.gpr[5] & 4096u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_088C06AC;
      }
      goto L_088C06A4;
    }
L_088C06A4:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_088C06AC;
L_088C06AC:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C06BC;
      }
      goto L_088C06B4;
    }
L_088C06B4:
    ctx.gpr[31] = (0x088C06BCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 157u, 0x08A0D3C0u>(ctx, &aot_mem) && ctx.pc == 0x088C06BCu) goto L_088C06BC;
    return;
L_088C06BC:
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
L_088C06D4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-176));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[18]);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[8] & 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(112), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[21]);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[20]);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[19]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.gpr[16] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(20976)));
    ctx.gpr[7] = (0u | 65535u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    ctx.gpr[7] = (16928u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[7] = (16968u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), ctx.gpr[30]);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[30] = (ctx.gpr[9] & 255u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[23] = (ctx.gpr[10] & 255u);
    ctx.gpr[22] = (ctx.gpr[11] & 255u);
    ctx.gpr[21] = (ctx.gpr[21] & 255u);
    ctx.gpr[20] = (ctx.gpr[20] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[17] = (2227u << 16u);
      if (branch_taken) {
          goto L_088C078C;
      }
      goto L_088C0774;
    }
L_088C0774:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(20976), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20972)));
      if (branch_taken) {
          goto L_088C07A8;
      }
      goto L_088C078C;
    }
L_088C078C:
    ctx.gpr[31] = (0x088C0794u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 155u, 0x088C4C18u>(ctx, &aot_mem) && ctx.pc == 0x088C0794u) goto L_088C0794;
    return;
L_088C0794:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(20976), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20972)));
    goto L_088C07A8;
L_088C07A8:
    ctx.fpr[14] = ctx.fpr[12] / ctx.fpr[22];
    ctx.gpr[5] = (0u | 99u);
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[24];
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (0u | 99u);
        goto L_088C07C8;
    }
    goto L_088C07C8;
L_088C07C8:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 0 ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (0u | 0u);
        goto L_088C07D4;
    }
    goto L_088C07D4;
L_088C07D4:
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[22];
    ctx.gpr[6] = (0u | 99u);
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[24];
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[5] = (0u | 99u);
        goto L_088C07F4;
    }
    goto L_088C07F4;
L_088C07F4:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 0 ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[5] = (0u | 0u);
        goto L_088C0800;
    }
    goto L_088C0800;
L_088C0800:
    ctx.gpr[6] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[31] = (0x088C0844u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 680u, 0x08A075D0u>(ctx, &aot_mem) && ctx.pc == 0x088C0844u) goto L_088C0844;
    return;
L_088C0844:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(113)));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[10] = (ctx.gpr[30] | 0u);
    ctx.gpr[11] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x088C0878u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[20]);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 237u, 0x088C5294u>(ctx, &aot_mem) && ctx.pc == 0x088C0878u) goto L_088C0878;
    return;
L_088C0878:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
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
L_088C08B4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-432));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(372), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(376), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(380), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(384), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(388), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(392), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(396), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(400), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(404), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(408), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(412), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(416), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(420), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(424), ctx.gpr[31]);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) & 0x7FFFFFFFu);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    ctx.gpr[19] = (ctx.gpr[5] | 0u);
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_088C0934;
      }
      goto L_088C0914;
    }
L_088C0914:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
        goto L_088C093C;
    }
    goto L_088C092C;
L_088C092C:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_088C093C;
      }
      goto L_088C0934;
    }
L_088C0934:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088C0C98;
      }
      goto L_088C093C;
    }
L_088C093C:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x088C0990u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 328u, 0x088C5AA4u>(ctx, &aot_mem) && ctx.pc == 0x088C0990u) goto L_088C0990;
    return;
L_088C0990:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C09E4;
      }
      goto L_088C0998;
    }
L_088C0998:
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
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
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<3u>(ctx.fpr[12]));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(368), ctx.gpr[5]);
      if (branch_taken) {
          goto L_088C09EC;
      }
      goto L_088C09DC;
    }
L_088C09DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C09F0;
      }
      goto L_088C09E4;
    }
L_088C09E4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088C0C98;
      }
      goto L_088C09EC;
    }
L_088C09EC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(368), ctx.gpr[16]);
    goto L_088C09F0;
L_088C09F0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(368)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C0A38;
      }
      goto L_088C09FC;
    }
L_088C09FC:
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(368)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
      if (branch_taken) {
          goto L_088C0A40;
      }
      goto L_088C0A30;
    }
L_088C0A30:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C0B34;
      }
      goto L_088C0A38;
    }
L_088C0A38:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088C0C98;
      }
      goto L_088C0A40;
    }
L_088C0A40:
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
    goto L_088C0A54;
L_088C0A54:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x088C0A9Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 287u, 0x0890DDACu>(ctx, &aot_mem) && ctx.pc == 0x088C0A9Cu) goto L_088C0A9C;
    return;
L_088C0A9C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C0B20;
      }
      goto L_088C0AA4;
    }
L_088C0AA4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
        goto L_088C0ADC;
    }
    goto L_088C0AD4;
L_088C0AD4:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_088C0ADC;
      }
      goto L_088C0ADC;
    }
L_088C0ADC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x088C0B10u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    goto L_088C06D4;
L_088C0B10:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C0B20;
      }
      goto L_088C0B18;
    }
L_088C0B18:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088C0C98;
      }
      goto L_088C0B20;
    }
L_088C0B20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(368)));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C0A54;
      }
      goto L_088C0B34;
    }
L_088C0B34:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), 0u);
    ctx.gpr[4] = (16544u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x088C0B80u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    goto L_088C06D4;
L_088C0B80:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C0BB4;
      }
      goto L_088C0B88;
    }
L_088C0B88:
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[16] = (0u | 1u);
    ctx.fpr[22] = ctx.fpr[22] + ctx.fpr[20];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(368)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
      if (branch_taken) {
          goto L_088C0BBC;
      }
      goto L_088C0BAC;
    }
L_088C0BAC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C0C94;
      }
      goto L_088C0BB4;
    }
L_088C0BB4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088C0C98;
      }
      goto L_088C0BBC;
    }
L_088C0BBC:
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(256));
    ctx.gpr[4] = (16256u << 16u);
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_088C0BD4;
L_088C0BD4:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(280), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[24];
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[31] = (0x088C0C3Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    goto L_088C06D4;
L_088C0C3C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C0C78;
      }
      goto L_088C0C44;
    }
L_088C0C44:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[22];
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) & 0x7FFFFFFFu);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[26]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088C0C70;
      }
      goto L_088C0C60;
    }
L_088C0C60:
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.fpr[22] = ctx.fpr[22] + ctx.fpr[20];
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
      if (branch_taken) {
          goto L_088C0C80;
      }
      goto L_088C0C70;
    }
L_088C0C70:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088C0C98;
      }
      goto L_088C0C78;
    }
L_088C0C78:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088C0C98;
      }
      goto L_088C0C80;
    }
L_088C0C80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(368)));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C0BD4;
      }
      goto L_088C0C94;
    }
L_088C0C94:
    ctx.gpr[2] = (0u | 1u);
    goto L_088C0C98;
L_088C0C98:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(372)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(376)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(380)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(384)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(388)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(392)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(396)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(400)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(404)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(408)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(412)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(416)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(420)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(424)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(432));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C0CD8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[18]);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[14] = ctx.fpr[12] - ctx.fpr[20];
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[16] = ctx.fpr[14] / ctx.fpr[13];
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[16] = ctx.fpr[16] + ctx.fpr[14];
    ctx.fpr[16] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[20]);
    ctx.gpr[20] = (ctx.gpr[6] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[21]);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[21] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[7] & 255u);
    ctx.gpr[8] = (0u | 0u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[31]);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[8] = (ctx.gpr[4] | 0u);
        goto L_088C0D64;
    }
    goto L_088C0D64;
L_088C0D64:
    ctx.fpr[16] = ctx.fpr[15] - ctx.fpr[20];
    ctx.fpr[16] = ctx.fpr[16] / ctx.fpr[13];
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[30] = (0u | 0u);
    ctx.fpr[16] = ctx.fpr[16] + ctx.fpr[14];
    ctx.fpr[16] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[16]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[30] = (ctx.gpr[4] | 0u);
        goto L_088C0D8C;
    }
    goto L_088C0D8C;
L_088C0D8C:
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[20];
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[23] = (0u | 99u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 99 ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[23] = (ctx.gpr[4] | 0u);
        goto L_088C0DB0;
    }
    goto L_088C0DB0;
L_088C0DB0:
    ctx.fpr[12] = ctx.fpr[15] + ctx.fpr[20];
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (0u | 99u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 99 ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
        goto L_088C0DD8;
    }
    goto L_088C0DD8;
L_088C0DD8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[30]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[30]);
      if (branch_taken) {
          goto L_088C0EC0;
      }
      goto L_088C0DE8;
    }
L_088C0DE8:
    ctx.gpr[4] = (ctx.gpr[30] << 5u);
    ctx.gpr[5] = (ctx.gpr[30] + ctx.gpr[4]);
    ctx.gpr[30] = (ctx.gpr[5] << 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[8]);
    ctx.gpr[30] = (ctx.gpr[30] - ctx.gpr[4]);
    ctx.gpr[22] = (2227u << 16u);
    goto L_088C0E00;
L_088C0E00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[23]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[30]);
      if (branch_taken) {
          goto L_088C0EA4;
      }
      goto L_088C0E14;
    }
L_088C0E14:
    ctx.gpr[16] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[16] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[16] = (ctx.gpr[4] - ctx.gpr[16]);
    goto L_088C0E24;
L_088C0E24:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[30]);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(20972)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[30] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[30] + static_cast<std::uint32_t>(20));
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088C0E50u);
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 324u, 0x088C99D8u>(ctx, &aot_mem) && ctx.pc == 0x088C0E50u) goto L_088C0E50;
    return;
L_088C0E50:
    ctx.gpr[4] = (ctx.gpr[30] + static_cast<std::uint32_t>(28));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088C0E70u);
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 324u, 0x088C99D8u>(ctx, &aot_mem) && ctx.pc == 0x088C0E70u) goto L_088C0E70;
    return;
L_088C0E70:
    ctx.gpr[4] = (ctx.gpr[30] + static_cast<std::uint32_t>(12));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088C0E90u);
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 324u, 0x088C99D8u>(ctx, &aot_mem) && ctx.pc == 0x088C0E90u) goto L_088C0E90;
    return;
L_088C0E90:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(44));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[23]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
      if (branch_taken) {
          goto L_088C0E24;
      }
      goto L_088C0EA4;
    }
L_088C0EA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(100));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088C0E00;
      }
      goto L_088C0EC0;
    }
L_088C0EC0:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C0EF8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[17]);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[14] = ctx.fpr[12] - ctx.fpr[20];
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[16] = ctx.fpr[14] / ctx.fpr[13];
    ctx.gpr[4] = (ctx.gpr[9] & 255u);
    ctx.gpr[9] = (16968u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[30]);
    ctx.gpr[20] = (ctx.gpr[5] & 255u);
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[5] = (ctx.gpr[10] & 255u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[7] << 16u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(57), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.fpr[16] = ctx.fpr[16] + ctx.fpr[14];
    ctx.gpr[7] = (ctx.gpr[11] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[16]));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[5]);
    ctx.gpr[4] = (0u | 0u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[18]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[7] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    ctx.gpr[16] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[21]);
    ctx.gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[19]) >> 16u));
    ctx.gpr[30] = (ctx.gpr[30] & 255u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(20976)));
    ctx.gpr[21] = (ctx.gpr[8] | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[31]);
    if (ctx.gpr[6] != 0u) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[5]);
        goto L_088C0FC8;
    }
    goto L_088C0FC8;
L_088C0FC8:
    ctx.fpr[16] = ctx.fpr[15] - ctx.fpr[20];
    ctx.fpr[16] = ctx.fpr[16] / ctx.fpr[13];
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[22] = (0u | 0u);
    ctx.fpr[16] = ctx.fpr[16] + ctx.fpr[14];
    ctx.fpr[16] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[16]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[22] = (ctx.gpr[5] | 0u);
        goto L_088C0FF0;
    }
    goto L_088C0FF0;
L_088C0FF0:
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[20];
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[23] = (0u | 99u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 99 ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[23] = (ctx.gpr[5] | 0u);
        goto L_088C1014;
    }
    goto L_088C1014;
L_088C1014:
    ctx.fpr[12] = ctx.fpr[15] + ctx.fpr[20];
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[5] = (0u | 99u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 99 ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[5]);
        goto L_088C103C;
    }
    goto L_088C103C;
L_088C103C:
    ctx.gpr[5] = (0u | 65535u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088C1054;
      }
      goto L_088C104C;
    }
L_088C104C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(20976), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088C1064;
      }
      goto L_088C1054;
    }
L_088C1054:
    ctx.gpr[31] = (0x088C105Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 155u, 0x088C4C18u>(ctx, &aot_mem) && ctx.pc == 0x088C105Cu) goto L_088C105C;
    return;
L_088C105C:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(20976), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_088C1064;
L_088C1064:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[23]);
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[22]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[22]);
      if (branch_taken) {
          goto L_088C12B0;
      }
      goto L_088C107C;
    }
L_088C107C:
    ctx.gpr[4] = (ctx.gpr[22] << 5u);
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[5]);
    goto L_088C1094;
L_088C1094:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[23] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C128C;
      }
      goto L_088C10A8;
    }
L_088C10A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[22] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[22] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[22] = (ctx.gpr[4] - ctx.gpr[22]);
    goto L_088C10C0;
L_088C10C0:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20972)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[22]);
      if (branch_taken) {
          goto L_088C1114;
      }
      goto L_088C10D4;
    }
L_088C10D4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088C10F4u);
    ctx.gpr[9] = (ctx.gpr[21] | 0u);
    goto L_088C12E4;
L_088C10F4:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088C1114u);
    ctx.gpr[9] = (ctx.gpr[21] | 0u);
    goto L_088C12E4;
L_088C1114:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(57)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C1160;
      }
      goto L_088C1120;
    }
L_088C1120:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(20));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088C1140u);
    ctx.gpr[9] = (ctx.gpr[21] | 0u);
    goto L_088C12E4;
L_088C1140:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088C1160u);
    ctx.gpr[9] = (ctx.gpr[21] | 0u);
    goto L_088C12E4;
L_088C1160:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C11AC;
      }
      goto L_088C116C;
    }
L_088C116C:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(28));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088C118Cu);
    ctx.gpr[9] = (ctx.gpr[21] | 0u);
    goto L_088C12E4;
L_088C118C:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088C11ACu);
    ctx.gpr[9] = (ctx.gpr[21] | 0u);
    goto L_088C12E4;
L_088C11AC:
    { const bool branch_taken = ctx.gpr[30] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C11F4;
      }
      goto L_088C11B4;
    }
L_088C11B4:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(12));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088C11D4u);
    ctx.gpr[9] = (ctx.gpr[21] | 0u);
    goto L_088C12E4;
L_088C11D4:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088C11F4u);
    ctx.gpr[9] = (ctx.gpr[21] | 0u);
    goto L_088C12E4;
L_088C11F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C1240;
      }
      goto L_088C1200;
    }
L_088C1200:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(36));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088C1220u);
    ctx.gpr[9] = (ctx.gpr[21] | 0u);
    goto L_088C12E4;
L_088C1220:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(40));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088C1240u);
    ctx.gpr[9] = (ctx.gpr[21] | 0u);
    goto L_088C12E4;
L_088C1240:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C1278;
      }
      goto L_088C124C;
    }
L_088C124C:
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(57)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[11] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(8));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    ctx.gpr[9] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x088C1278u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[30]);
    goto L_088C13C4;
L_088C1278:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(44));
      if (branch_taken) {
          goto L_088C10C0;
      }
      goto L_088C128C;
    }
L_088C128C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(100));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[5]);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[6]);
      if (branch_taken) {
          goto L_088C1094;
      }
      goto L_088C12B0;
    }
L_088C12B0:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C12E4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    ctx.gpr[10] = (ctx.gpr[8] << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[8] = (ctx.gpr[6] & 255u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[10]) >> 16u));
      if (branch_taken) {
          goto L_088C13BC;
      }
      goto L_088C1300;
    }
L_088C1300:
    ctx.gpr[10] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[11] = (2227u << 16u);
    goto L_088C1308;
L_088C1308:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[3] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(84)));
    ctx.gpr[12] = (aot_mem.aot_load16(ctx.gpr[11] + static_cast<std::uint32_t>(20976)));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[12];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_088C13B4;
      }
      goto L_088C131C;
    }
L_088C131C:
    ctx.gpr[3] = (aot_mem.aot_load16(ctx.gpr[11] + static_cast<std::uint32_t>(20976)));
    aot_mem.aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(84), static_cast<std::uint16_t>(ctx.gpr[3]));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[3] = (ctx.gpr[2] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[3] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[10] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[10] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C1360;
      }
      goto L_088C1348;
    }
L_088C1348:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
      if (branch_taken) {
          goto L_088C1370;
      }
      goto L_088C1360;
    }
L_088C1360:
    { const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    ctx.gpr[3] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[3]);
    goto L_088C1370;
L_088C1370:
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088C13B4;
      }
      goto L_088C1380;
    }
L_088C1380:
    ctx.gpr[3] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[3] = (static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C13B4;
      }
      goto L_088C1390;
    }
L_088C1390:
    { const bool branch_taken = ctx.gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C13A8;
      }
      goto L_088C1398;
    }
L_088C1398:
    ctx.gpr[3] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[3] = (ctx.gpr[3] << 2u);
    ctx.gpr[3] = (ctx.gpr[9] + ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    goto L_088C13A8;
L_088C13A8:
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[2]));
    goto L_088C13B4;
L_088C13B4:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C1308;
      }
      goto L_088C13BC;
    }
L_088C13BC:
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C13C4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    ctx.gpr[8] = (ctx.gpr[8] << 16u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 16u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[6]);
    ctx.gpr[10] = (ctx.gpr[10] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[8]);
    ctx.gpr[11] = (ctx.gpr[11] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[11]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[17]);
    ctx.gpr[6] = (ctx.gpr[2] & 255u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[22]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[6]);
    ctx.gpr[18] = (ctx.gpr[7] | 0u);
    ctx.gpr[22] = (ctx.gpr[9] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[5]);
      if (branch_taken) {
          goto L_088C15A0;
      }
      goto L_088C143C;
    }
L_088C143C:
    ctx.gpr[30] = (2224u << 16u);
    ctx.gpr[23] = (2224u << 16u);
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(-18268));
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(-24108));
    ctx.gpr[21] = (2227u << 16u);
    goto L_088C1458;
L_088C1458:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(20976)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_088C1598;
      }
      goto L_088C146C;
    }
L_088C146C:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(20976)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(336)));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(84), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[8];
    ctx.gpr[31] = (0x088C1494u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C1494u) goto L_088C1494;
    return;
L_088C1494:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(336)));
        goto L_088C14B0;
    }
    goto L_088C149C;
L_088C149C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C14FC;
      }
      goto L_088C14A8;
    }
L_088C14A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C1598;
      }
      goto L_088C14B0;
    }
L_088C14B0:
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(108)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(16));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088C14CCu);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C14CCu) goto L_088C14CC;
    return;
L_088C14CC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C14E8;
      }
      goto L_088C14D4;
    }
L_088C14D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C14FC;
      }
      goto L_088C14E0;
    }
L_088C14E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C1598;
      }
      goto L_088C14E8;
    }
L_088C14E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C14FC;
      }
      goto L_088C14F4;
    }
L_088C14F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C1598;
      }
      goto L_088C14FC;
    }
L_088C14FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C1540;
      }
      goto L_088C1528;
    }
L_088C1528:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
      if (branch_taken) {
          goto L_088C1550;
      }
      goto L_088C1540;
    }
L_088C1540:
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_088C1550;
L_088C1550:
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088C1598;
      }
      goto L_088C1560;
    }
L_088C1560:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C1598;
      }
      goto L_088C1574;
    }
L_088C1574:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C158C;
      }
      goto L_088C157C;
    }
L_088C157C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[22] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    goto L_088C158C;
L_088C158C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_088C1598;
L_088C1598:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C1458;
      }
      goto L_088C15A0;
    }
L_088C15A0:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C15D4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[17]);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (16928u << 16u);
    ctx.fpr[14] = ctx.fpr[12] - ctx.fpr[20];
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[16] = ctx.fpr[14] / ctx.fpr[13];
    ctx.gpr[5] = (ctx.gpr[10] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[22]);
    ctx.gpr[22] = (ctx.gpr[4] | 0u);
    ctx.gpr[10] = (16968u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[8] << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[20]);
    ctx.gpr[20] = (ctx.gpr[6] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[11] & 255u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[10]);
    ctx.fpr[16] = ctx.fpr[16] + ctx.fpr[14];
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[8] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.fpr[16] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[16]));
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 0u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[16]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[6] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.gpr[16] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[21]);
    ctx.gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[19]) >> 16u));
    ctx.gpr[18] = (ctx.gpr[7] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(20976)));
    ctx.gpr[21] = (ctx.gpr[9] | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[31]);
    if (ctx.gpr[6] != 0u) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[5]);
        goto L_088C16A4;
    }
    goto L_088C16A4;
L_088C16A4:
    ctx.fpr[16] = ctx.fpr[15] - ctx.fpr[20];
    ctx.fpr[16] = ctx.fpr[16] / ctx.fpr[13];
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[23] = (0u | 0u);
    ctx.fpr[16] = ctx.fpr[16] + ctx.fpr[14];
    ctx.fpr[16] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[16]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[23] = (ctx.gpr[5] | 0u);
        goto L_088C16CC;
    }
    goto L_088C16CC;
L_088C16CC:
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[20];
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[30] = (0u | 100u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 100 ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[30] = (ctx.gpr[5] | 0u);
        goto L_088C16F0;
    }
    goto L_088C16F0;
L_088C16F0:
    ctx.fpr[12] = ctx.fpr[15] + ctx.fpr[20];
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[5] = (0u | 100u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 100 ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[5]);
        goto L_088C1718;
    }
    goto L_088C1718;
L_088C1718:
    ctx.gpr[5] = (0u | 65535u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088C1730;
      }
      goto L_088C1728;
    }
L_088C1728:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(20976), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088C1740;
      }
      goto L_088C1730;
    }
L_088C1730:
    ctx.gpr[31] = (0x088C1738u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 155u, 0x088C4C18u>(ctx, &aot_mem) && ctx.pc == 0x088C1738u) goto L_088C1738;
    return;
L_088C1738:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(20976), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_088C1740;
L_088C1740:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[30]);
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[23]);
      if (branch_taken) {
          goto L_088C1980;
      }
      goto L_088C1758;
    }
L_088C1758:
    ctx.gpr[4] = (ctx.gpr[23] << 5u);
    ctx.gpr[5] = (ctx.gpr[23] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[5]);
    goto L_088C1770;
L_088C1770:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[30] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[30]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C195C;
      }
      goto L_088C1784;
    }
L_088C1784:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[23] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[23] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[23] = (ctx.gpr[4] - ctx.gpr[23]);
    goto L_088C179C;
L_088C179C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20972)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[23]);
      if (branch_taken) {
          goto L_088C17F8;
      }
      goto L_088C17B0;
    }
L_088C17B0:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    ctx.gpr[8] = (ctx.gpr[18] | 0u);
    ctx.gpr[9] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088C17D4u);
    ctx.gpr[10] = (ctx.gpr[21] | 0u);
    goto L_088C19B4;
L_088C17D4:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    ctx.gpr[8] = (ctx.gpr[18] | 0u);
    ctx.gpr[9] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088C17F8u);
    ctx.gpr[10] = (ctx.gpr[21] | 0u);
    goto L_088C19B4;
L_088C17F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C184C;
      }
      goto L_088C1804;
    }
L_088C1804:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(20));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    ctx.gpr[8] = (ctx.gpr[18] | 0u);
    ctx.gpr[9] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088C1828u);
    ctx.gpr[10] = (ctx.gpr[21] | 0u);
    goto L_088C19B4;
L_088C1828:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    ctx.gpr[8] = (ctx.gpr[18] | 0u);
    ctx.gpr[9] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088C184Cu);
    ctx.gpr[10] = (ctx.gpr[21] | 0u);
    goto L_088C19B4;
L_088C184C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C18A0;
      }
      goto L_088C1858;
    }
L_088C1858:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(28));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    ctx.gpr[8] = (ctx.gpr[18] | 0u);
    ctx.gpr[9] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088C187Cu);
    ctx.gpr[10] = (ctx.gpr[21] | 0u);
    goto L_088C19B4;
L_088C187C:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    ctx.gpr[8] = (ctx.gpr[18] | 0u);
    ctx.gpr[9] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088C18A0u);
    ctx.gpr[10] = (ctx.gpr[21] | 0u);
    goto L_088C19B4;
L_088C18A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C18F4;
      }
      goto L_088C18AC;
    }
L_088C18AC:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(12));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    ctx.gpr[8] = (ctx.gpr[18] | 0u);
    ctx.gpr[9] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088C18D0u);
    ctx.gpr[10] = (ctx.gpr[21] | 0u);
    goto L_088C19B4;
L_088C18D0:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    ctx.gpr[8] = (ctx.gpr[18] | 0u);
    ctx.gpr[9] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088C18F4u);
    ctx.gpr[10] = (ctx.gpr[21] | 0u);
    goto L_088C19B4;
L_088C18F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C1948;
      }
      goto L_088C1900;
    }
L_088C1900:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(36));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    ctx.gpr[8] = (ctx.gpr[18] | 0u);
    ctx.gpr[9] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088C1924u);
    ctx.gpr[10] = (ctx.gpr[21] | 0u);
    goto L_088C19B4;
L_088C1924:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(40));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    ctx.gpr[8] = (ctx.gpr[18] | 0u);
    ctx.gpr[9] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088C1948u);
    ctx.gpr[10] = (ctx.gpr[21] | 0u);
    goto L_088C19B4;
L_088C1948:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[30]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(44));
      if (branch_taken) {
          goto L_088C179C;
      }
      goto L_088C195C;
    }
L_088C195C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(100));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[6]);
      if (branch_taken) {
          goto L_088C1770;
      }
      goto L_088C1980;
    }
L_088C1980:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C19B4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    ctx.gpr[11] = (ctx.gpr[9] << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[9] = (ctx.gpr[7] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[11]) >> 16u));
      if (branch_taken) {
          goto L_088C1A94;
      }
      goto L_088C19D0;
    }
L_088C19D0:
    ctx.gpr[11] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[2] = (2227u << 16u);
    goto L_088C19D8;
L_088C19D8:
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[12] = (aot_mem.aot_load16(ctx.gpr[3] + static_cast<std::uint32_t>(84)));
    ctx.gpr[13] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(20976)));
    { const bool branch_taken = ctx.gpr[12] == ctx.gpr[13];
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_088C1A8C;
      }
      goto L_088C19EC;
    }
L_088C19EC:
    ctx.gpr[12] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(20976)));
    ctx.gpr[13] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[3] + static_cast<std::uint32_t>(88))))));
    { const bool branch_taken = ctx.gpr[13] != ctx.gpr[4];
    aot_mem.aot_store16(ctx.gpr[3] + static_cast<std::uint32_t>(84), static_cast<std::uint16_t>(ctx.gpr[12]));
      if (branch_taken) {
          goto L_088C1A8C;
      }
      goto L_088C19FC;
    }
L_088C19FC:
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[12] = (ctx.gpr[3] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[12] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[11] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[11] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = ctx.gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C1A38;
      }
      goto L_088C1A20;
    }
L_088C1A20:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
      if (branch_taken) {
          goto L_088C1A48;
      }
      goto L_088C1A38;
    }
L_088C1A38:
    { const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    ctx.gpr[12] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[12]);
    goto L_088C1A48;
L_088C1A48:
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088C1A8C;
      }
      goto L_088C1A58;
    }
L_088C1A58:
    ctx.gpr[12] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[8] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[12] = (static_cast<std::int32_t>(ctx.gpr[12]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[12] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C1A8C;
      }
      goto L_088C1A68;
    }
L_088C1A68:
    { const bool branch_taken = ctx.gpr[10] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C1A80;
      }
      goto L_088C1A70;
    }
L_088C1A70:
    ctx.gpr[12] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[8] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[12] = (ctx.gpr[12] << 2u);
    ctx.gpr[12] = (ctx.gpr[10] + ctx.gpr[12]);
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    goto L_088C1A80;
L_088C1A80:
    ctx.gpr[3] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[8] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[3] = (ctx.gpr[3] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[3]));
    goto L_088C1A8C;
L_088C1A8C:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C19D8;
      }
      goto L_088C1A94;
    }
L_088C1A94:
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C1A9C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[17]);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[14] = ctx.fpr[12] - ctx.fpr[20];
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[16] = ctx.fpr[14] / ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[20]);
    ctx.gpr[20] = (ctx.gpr[5] & 255u);
    ctx.gpr[5] = (ctx.gpr[10] & 255u);
    ctx.gpr[10] = (16968u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[7] << 16u);
    ctx.gpr[4] = (ctx.gpr[9] & 255u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[10]);
    ctx.fpr[16] = ctx.fpr[16] + ctx.fpr[14];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[9] = (ctx.gpr[11] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[5]);
    ctx.fpr[16] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[16]));
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[9]);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[18]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[7] = (0u | 0u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    ctx.gpr[16] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[30]);
    ctx.gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[19]) >> 16u));
    ctx.gpr[30] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(20976)));
    ctx.gpr[21] = (ctx.gpr[8] | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[31]);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[30] = (ctx.gpr[5] | 0u);
        goto L_088C1B60;
    }
    goto L_088C1B60;
L_088C1B60:
    ctx.fpr[16] = ctx.fpr[15] - ctx.fpr[20];
    ctx.fpr[16] = ctx.fpr[16] / ctx.fpr[13];
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[22] = (0u | 0u);
    ctx.fpr[16] = ctx.fpr[16] + ctx.fpr[14];
    ctx.fpr[16] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[16]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[22] = (ctx.gpr[5] | 0u);
        goto L_088C1B88;
    }
    goto L_088C1B88;
L_088C1B88:
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[20];
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[23] = (0u | 100u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 100 ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[23] = (ctx.gpr[5] | 0u);
        goto L_088C1BAC;
    }
    goto L_088C1BAC;
L_088C1BAC:
    ctx.fpr[12] = ctx.fpr[15] + ctx.fpr[20];
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[5] = (0u | 100u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 100 ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[5]);
        goto L_088C1BD4;
    }
    goto L_088C1BD4;
L_088C1BD4:
    ctx.gpr[5] = (0u | 65535u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088C1BEC;
      }
      goto L_088C1BE4;
    }
L_088C1BE4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(20976), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088C1BFC;
      }
      goto L_088C1BEC;
    }
L_088C1BEC:
    ctx.gpr[31] = (0x088C1BF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 155u, 0x088C4C18u>(ctx, &aot_mem) && ctx.pc == 0x088C1BF4u) goto L_088C1BF4;
    return;
L_088C1BF4:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(20976), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_088C1BFC;
L_088C1BFC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[23]);
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[22]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[22]);
      if (branch_taken) {
          goto L_088C1E38;
      }
      goto L_088C1C18;
    }
L_088C1C18:
    ctx.gpr[4] = (ctx.gpr[22] << 5u);
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[5]);
    ctx.gpr[30] = (2227u << 16u);
    goto L_088C1C34;
L_088C1C34:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[23] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C1E14;
      }
      goto L_088C1C48;
    }
L_088C1C48:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[22] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[22] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[22] = (ctx.gpr[4] - ctx.gpr[22]);
    goto L_088C1C60;
L_088C1C60:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(20972)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[22]);
      if (branch_taken) {
          goto L_088C1CB0;
      }
      goto L_088C1C70;
    }
L_088C1C70:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088C1C90u);
    ctx.gpr[9] = (ctx.gpr[21] | 0u);
    goto L_088C1E6C;
L_088C1C90:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088C1CB0u);
    ctx.gpr[9] = (ctx.gpr[21] | 0u);
    goto L_088C1E6C;
L_088C1CB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C1D1C;
      }
      goto L_088C1CBC;
    }
L_088C1CBC:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(20));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088C1CDCu);
    ctx.gpr[9] = (ctx.gpr[21] | 0u);
    goto L_088C1E6C;
L_088C1CDC:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088C1CFCu);
    ctx.gpr[9] = (ctx.gpr[21] | 0u);
    goto L_088C1E6C;
L_088C1CFC:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(8));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088C1D1Cu);
    ctx.gpr[9] = (ctx.gpr[21] | 0u);
    goto L_088C1E6C;
L_088C1D1C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C1D68;
      }
      goto L_088C1D28;
    }
L_088C1D28:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(28));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088C1D48u);
    ctx.gpr[9] = (ctx.gpr[21] | 0u);
    goto L_088C1E6C;
L_088C1D48:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088C1D68u);
    ctx.gpr[9] = (ctx.gpr[21] | 0u);
    goto L_088C1E6C;
L_088C1D68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C1DB4;
      }
      goto L_088C1D74;
    }
L_088C1D74:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(12));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088C1D94u);
    ctx.gpr[9] = (ctx.gpr[21] | 0u);
    goto L_088C1E6C;
L_088C1D94:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088C1DB4u);
    ctx.gpr[9] = (ctx.gpr[21] | 0u);
    goto L_088C1E6C;
L_088C1DB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C1E00;
      }
      goto L_088C1DC0;
    }
L_088C1DC0:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(36));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088C1DE0u);
    ctx.gpr[9] = (ctx.gpr[21] | 0u);
    goto L_088C1E6C;
L_088C1DE0:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(40));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088C1E00u);
    ctx.gpr[9] = (ctx.gpr[21] | 0u);
    goto L_088C1E6C;
L_088C1E00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(44));
      if (branch_taken) {
          goto L_088C1C60;
      }
      goto L_088C1E14;
    }
L_088C1E14:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(100));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[6]);
      if (branch_taken) {
          goto L_088C1C34;
      }
      goto L_088C1E38;
    }
L_088C1E38:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C1E6C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    ctx.gpr[10] = (ctx.gpr[8] << 16u);
    ctx.gpr[8] = (ctx.gpr[6] & 255u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[10]) >> 16u));
      if (branch_taken) {
          goto L_088C1F70;
      }
      goto L_088C1E84;
    }
L_088C1E84:
    ctx.gpr[11] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[2] = (2227u << 16u);
    ctx.gpr[10] = (2229u << 16u);
    goto L_088C1E90;
L_088C1E90:
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[12] = (aot_mem.aot_load16(ctx.gpr[3] + static_cast<std::uint32_t>(84)));
    ctx.gpr[13] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(20976)));
    { const bool branch_taken = ctx.gpr[12] == ctx.gpr[13];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_088C1F68;
      }
      goto L_088C1EA4;
    }
L_088C1EA4:
    ctx.gpr[12] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(20976)));
    aot_mem.aot_store16(ctx.gpr[3] + static_cast<std::uint32_t>(84), static_cast<std::uint16_t>(ctx.gpr[12]));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[12] = (ctx.gpr[3] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[12] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[11] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[11] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C1EF0;
      }
      goto L_088C1ED0;
    }
L_088C1ED0:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    ctx.fpr[13] = std::sqrt(ctx.fpr[13]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[12] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[3] + static_cast<std::uint32_t>(88))))));
      if (branch_taken) {
          goto L_088C1F08;
      }
      goto L_088C1EF0;
    }
L_088C1EF0:
    { const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[12] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[12]);
    ctx.gpr[12] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[3] + static_cast<std::uint32_t>(88))))));
    goto L_088C1F08;
L_088C1F08:
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[12] = (ctx.gpr[12] << 2u);
    ctx.gpr[12] = (ctx.gpr[13] + ctx.gpr[12]);
    ctx.gpr[12] = (aot_mem.aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(0)));
    ctx.gpr[12] = (aot_mem.aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(20)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(12)));
    ctx.fpr[14] = ctx.fpr[12] + ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088C1F68;
      }
      goto L_088C1F34;
    }
L_088C1F34:
    ctx.gpr[12] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[12] = (static_cast<std::int32_t>(ctx.gpr[12]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[12] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C1F68;
      }
      goto L_088C1F44;
    }
L_088C1F44:
    { const bool branch_taken = ctx.gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C1F5C;
      }
      goto L_088C1F4C;
    }
L_088C1F4C:
    ctx.gpr[12] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[12] = (ctx.gpr[12] << 2u);
    ctx.gpr[12] = (ctx.gpr[9] + ctx.gpr[12]);
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    goto L_088C1F5C;
L_088C1F5C:
    ctx.gpr[3] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[3] = (ctx.gpr[3] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[3]));
    goto L_088C1F68;
L_088C1F68:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C1E90;
      }
      goto L_088C1F70;
    }
L_088C1F70:
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C1F78:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[10] & 255u);
    ctx.gpr[10] = (16968u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[20]);
    ctx.gpr[20] = (ctx.gpr[7] << 16u);
    ctx.gpr[4] = (ctx.gpr[9] & 255u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[10]);
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    ctx.gpr[9] = (ctx.gpr[11] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[5]);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[9]);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[19]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[19] = (ctx.gpr[6] | 0u);
    ctx.gpr[16] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[30]);
    ctx.gpr[20] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[20]) >> 16u));
    ctx.gpr[30] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(20976)));
    ctx.gpr[21] = (ctx.gpr[8] | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[31]);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[30] = (ctx.gpr[5] | 0u);
        goto L_088C202C;
    }
    goto L_088C202C;
L_088C202C:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = ctx.fpr[14] / ctx.fpr[12];
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[22] = (0u | 0u);
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[22] = (ctx.gpr[5] | 0u);
        goto L_088C2054;
    }
    goto L_088C2054;
L_088C2054:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = ctx.fpr[14] / ctx.fpr[12];
    ctx.gpr[23] = (0u | 100u);
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 100 ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[23] = (ctx.gpr[5] | 0u);
        goto L_088C2078;
    }
    goto L_088C2078;
L_088C2078:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[14] / ctx.fpr[12];
    ctx.gpr[5] = (0u | 100u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 100 ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[5]);
        goto L_088C20A0;
    }
    goto L_088C20A0;
L_088C20A0:
    ctx.gpr[5] = (0u | 65535u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088C20B8;
      }
      goto L_088C20B0;
    }
L_088C20B0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(20976), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088C20C8;
      }
      goto L_088C20B8;
    }
L_088C20B8:
    ctx.gpr[31] = (0x088C20C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 155u, 0x088C4C18u>(ctx, &aot_mem) && ctx.pc == 0x088C20C0u) goto L_088C20C0;
    return;
L_088C20C0:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(20976), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_088C20C8;
L_088C20C8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[23]);
    aot_mem.aot_store16(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[22]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[22]);
      if (branch_taken) {
          goto L_088C22BC;
      }
      goto L_088C20E4;
    }
L_088C20E4:
    ctx.gpr[4] = (ctx.gpr[22] << 5u);
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[5]);
    ctx.gpr[30] = (2227u << 16u);
    goto L_088C2100;
L_088C2100:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[23] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C2298;
      }
      goto L_088C2114;
    }
L_088C2114:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[22] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[22] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[22] = (ctx.gpr[4] - ctx.gpr[22]);
    goto L_088C212C;
L_088C212C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(20972)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[22]);
      if (branch_taken) {
          goto L_088C2174;
      }
      goto L_088C213C;
    }
L_088C213C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    ctx.gpr[8] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088C2158u);
    ctx.gpr[9] = (ctx.gpr[21] | 0u);
    goto L_088C22EC;
L_088C2158:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    ctx.gpr[8] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088C2174u);
    ctx.gpr[9] = (ctx.gpr[21] | 0u);
    goto L_088C22EC;
L_088C2174:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C21B8;
      }
      goto L_088C2180;
    }
L_088C2180:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(20));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    ctx.gpr[8] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088C219Cu);
    ctx.gpr[9] = (ctx.gpr[21] | 0u);
    goto L_088C22EC;
L_088C219C:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    ctx.gpr[8] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088C21B8u);
    ctx.gpr[9] = (ctx.gpr[21] | 0u);
    goto L_088C22EC;
L_088C21B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C21FC;
      }
      goto L_088C21C4;
    }
L_088C21C4:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(28));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    ctx.gpr[8] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088C21E0u);
    ctx.gpr[9] = (ctx.gpr[21] | 0u);
    goto L_088C22EC;
L_088C21E0:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    ctx.gpr[8] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088C21FCu);
    ctx.gpr[9] = (ctx.gpr[21] | 0u);
    goto L_088C22EC;
L_088C21FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C2240;
      }
      goto L_088C2208;
    }
L_088C2208:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(12));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    ctx.gpr[8] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088C2224u);
    ctx.gpr[9] = (ctx.gpr[21] | 0u);
    goto L_088C22EC;
L_088C2224:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    ctx.gpr[8] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088C2240u);
    ctx.gpr[9] = (ctx.gpr[21] | 0u);
    goto L_088C22EC;
L_088C2240:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C2284;
      }
      goto L_088C224C;
    }
L_088C224C:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(36));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    ctx.gpr[8] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088C2268u);
    ctx.gpr[9] = (ctx.gpr[21] | 0u);
    goto L_088C22EC;
L_088C2268:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(40));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    ctx.gpr[8] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088C2284u);
    ctx.gpr[9] = (ctx.gpr[21] | 0u);
    goto L_088C22EC;
L_088C2284:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(44));
      if (branch_taken) {
          goto L_088C212C;
      }
      goto L_088C2298;
    }
L_088C2298:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(100));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[6]);
      if (branch_taken) {
          goto L_088C2100;
      }
      goto L_088C22BC;
    }
L_088C22BC:
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
L_088C22EC:
    ctx.gpr[8] = (ctx.gpr[8] << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 16u));
      if (branch_taken) {
          goto L_088C2460;
      }
      goto L_088C22FC;
    }
L_088C22FC:
    ctx.gpr[11] = (2227u << 16u);
    ctx.gpr[10] = (2229u << 16u);
    goto L_088C2304;
L_088C2304:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[3] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(84)));
    ctx.gpr[13] = (aot_mem.aot_load16(ctx.gpr[11] + static_cast<std::uint32_t>(20976)));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[13];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_088C2458;
      }
      goto L_088C2318;
    }
L_088C2318:
    aot_mem.aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(84), static_cast<std::uint16_t>(ctx.gpr[13]));
    ctx.gpr[13] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[12] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[3] = (ctx.gpr[13] << 2u);
    ctx.gpr[3] = (ctx.gpr[12] + ctx.gpr[3]);
    ctx.gpr[14] = (aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.gpr[3] = (ctx.gpr[2] + static_cast<std::uint32_t>(48));
    ctx.gpr[14] = (aot_mem.aot_load32(ctx.gpr[14] + static_cast<std::uint32_t>(20)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[14] + static_cast<std::uint32_t>(12)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = ctx.fpr[12] + ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[14] = (ctx.gpr[13] << 2u);
      if (branch_taken) {
          goto L_088C2458;
      }
      goto L_088C2358;
    }
L_088C2358:
    ctx.gpr[14] = (ctx.gpr[12] + ctx.gpr[14]);
    ctx.gpr[14] = (aot_mem.aot_load32(ctx.gpr[14] + static_cast<std::uint32_t>(0)));
    ctx.gpr[14] = (aot_mem.aot_load32(ctx.gpr[14] + static_cast<std::uint32_t>(20)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[14] + static_cast<std::uint32_t>(12)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[14] = (ctx.gpr[13] << 2u);
      if (branch_taken) {
          goto L_088C2458;
      }
      goto L_088C2380;
    }
L_088C2380:
    ctx.gpr[14] = (ctx.gpr[12] + ctx.gpr[14]);
    ctx.gpr[14] = (aot_mem.aot_load32(ctx.gpr[14] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.gpr[14] = (aot_mem.aot_load32(ctx.gpr[14] + static_cast<std::uint32_t>(20)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[14] + static_cast<std::uint32_t>(12)));
    ctx.fpr[14] = ctx.fpr[12] + ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[14] = (ctx.gpr[13] << 2u);
      if (branch_taken) {
          goto L_088C2458;
      }
      goto L_088C23AC;
    }
L_088C23AC:
    ctx.gpr[14] = (ctx.gpr[12] + ctx.gpr[14]);
    ctx.gpr[14] = (aot_mem.aot_load32(ctx.gpr[14] + static_cast<std::uint32_t>(0)));
    ctx.gpr[14] = (aot_mem.aot_load32(ctx.gpr[14] + static_cast<std::uint32_t>(20)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[14] + static_cast<std::uint32_t>(12)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[14] = (ctx.gpr[13] << 2u);
      if (branch_taken) {
          goto L_088C2458;
      }
      goto L_088C23D4;
    }
L_088C23D4:
    ctx.gpr[14] = (ctx.gpr[12] + ctx.gpr[14]);
    ctx.gpr[14] = (aot_mem.aot_load32(ctx.gpr[14] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[14] + static_cast<std::uint32_t>(20)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(12)));
    ctx.fpr[14] = ctx.fpr[12] + ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[3] = (ctx.gpr[13] << 2u);
      if (branch_taken) {
          goto L_088C2458;
      }
      goto L_088C2400;
    }
L_088C2400:
    ctx.gpr[3] = (ctx.gpr[12] + ctx.gpr[3]);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(20)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(12)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088C2458;
      }
      goto L_088C2428;
    }
L_088C2428:
    ctx.gpr[3] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[12] = (static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[12] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C2458;
      }
      goto L_088C2438;
    }
L_088C2438:
    { const bool branch_taken = ctx.gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C2450;
      }
      goto L_088C2440;
    }
L_088C2440:
    ctx.gpr[3] = (ctx.gpr[3] << 2u);
    ctx.gpr[3] = (ctx.gpr[9] + ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[3] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    goto L_088C2450;
L_088C2450:
    ctx.gpr[2] = (ctx.gpr[3] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[2]));
    goto L_088C2458;
L_088C2458:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C2304;
      }
      goto L_088C2460;
    }
L_088C2460:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C2468:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[2] = (16928u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[17] = ctx.fpr[16] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[8] << 16u);
    ctx.gpr[8] = (ctx.gpr[11] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[22]);
    ctx.gpr[21] = (ctx.gpr[5] | 0u);
    ctx.gpr[22] = (ctx.gpr[4] | 0u);
    ctx.gpr[11] = (16968u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[5] = (ctx.gpr[10] & 255u);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[5]);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[11]);
    ctx.fpr[17] = ctx.fpr[17] + ctx.fpr[16];
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[10] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.fpr[17] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[17]));
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[20]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.gpr[8] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.gpr[20] = (ctx.gpr[6] | 0u);
    ctx.gpr[16] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[19]);
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[18]) >> 16u));
    ctx.gpr[17] = (ctx.gpr[7] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(20976)));
    ctx.gpr[19] = (ctx.gpr[9] | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[31]);
    if (ctx.gpr[6] != 0u) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[5]);
        goto L_088C2528;
    }
    goto L_088C2528;
L_088C2528:
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[23] = (0u | 0u);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[16];
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[23] = (ctx.gpr[5] | 0u);
        goto L_088C254C;
    }
    goto L_088C254C;
L_088C254C:
    ctx.fpr[13] = ctx.fpr[14] / ctx.fpr[12];
    ctx.gpr[30] = (0u | 100u);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[16];
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 100 ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[30] = (ctx.gpr[5] | 0u);
        goto L_088C256C;
    }
    goto L_088C256C;
L_088C256C:
    ctx.fpr[12] = ctx.fpr[15] / ctx.fpr[12];
    ctx.gpr[5] = (0u | 100u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[16];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 100 ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[5]);
        goto L_088C2590;
    }
    goto L_088C2590;
L_088C2590:
    ctx.gpr[5] = (0u | 65535u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088C25A8;
      }
      goto L_088C25A0;
    }
L_088C25A0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(20976), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088C25B8;
      }
      goto L_088C25A8;
    }
L_088C25A8:
    ctx.gpr[31] = (0x088C25B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 155u, 0x088C4C18u>(ctx, &aot_mem) && ctx.pc == 0x088C25B0u) goto L_088C25B0;
    return;
L_088C25B0:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(20976), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_088C25B8;
L_088C25B8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[30]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[23]);
      if (branch_taken) {
          goto L_088C27D0;
      }
      goto L_088C25D0;
    }
L_088C25D0:
    ctx.gpr[4] = (ctx.gpr[23] << 5u);
    ctx.gpr[5] = (ctx.gpr[23] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[5]);
    goto L_088C25E8;
L_088C25E8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[30] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[30]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C27AC;
      }
      goto L_088C25FC;
    }
L_088C25FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[23] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[23] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[23] = (ctx.gpr[4] - ctx.gpr[23]);
    goto L_088C2614;
L_088C2614:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20972)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[23]);
      if (branch_taken) {
          goto L_088C2668;
      }
      goto L_088C2628;
    }
L_088C2628:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    ctx.gpr[8] = (ctx.gpr[17] | 0u);
    ctx.gpr[9] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088C2648u);
    ctx.gpr[10] = (ctx.gpr[19] | 0u);
    goto L_088C2800;
L_088C2648:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    ctx.gpr[8] = (ctx.gpr[17] | 0u);
    ctx.gpr[9] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088C2668u);
    ctx.gpr[10] = (ctx.gpr[19] | 0u);
    goto L_088C2800;
L_088C2668:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C26B4;
      }
      goto L_088C2674;
    }
L_088C2674:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(20));
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    ctx.gpr[8] = (ctx.gpr[17] | 0u);
    ctx.gpr[9] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088C2694u);
    ctx.gpr[10] = (ctx.gpr[19] | 0u);
    goto L_088C2800;
L_088C2694:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    ctx.gpr[8] = (ctx.gpr[17] | 0u);
    ctx.gpr[9] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088C26B4u);
    ctx.gpr[10] = (ctx.gpr[19] | 0u);
    goto L_088C2800;
L_088C26B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C2700;
      }
      goto L_088C26C0;
    }
L_088C26C0:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(28));
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    ctx.gpr[8] = (ctx.gpr[17] | 0u);
    ctx.gpr[9] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088C26E0u);
    ctx.gpr[10] = (ctx.gpr[19] | 0u);
    goto L_088C2800;
L_088C26E0:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    ctx.gpr[8] = (ctx.gpr[17] | 0u);
    ctx.gpr[9] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088C2700u);
    ctx.gpr[10] = (ctx.gpr[19] | 0u);
    goto L_088C2800;
L_088C2700:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C274C;
      }
      goto L_088C270C;
    }
L_088C270C:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(12));
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    ctx.gpr[8] = (ctx.gpr[17] | 0u);
    ctx.gpr[9] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088C272Cu);
    ctx.gpr[10] = (ctx.gpr[19] | 0u);
    goto L_088C2800;
L_088C272C:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    ctx.gpr[8] = (ctx.gpr[17] | 0u);
    ctx.gpr[9] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088C274Cu);
    ctx.gpr[10] = (ctx.gpr[19] | 0u);
    goto L_088C2800;
L_088C274C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C2798;
      }
      goto L_088C2758;
    }
L_088C2758:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(36));
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    ctx.gpr[8] = (ctx.gpr[17] | 0u);
    ctx.gpr[9] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088C2778u);
    ctx.gpr[10] = (ctx.gpr[19] | 0u);
    goto L_088C2800;
L_088C2778:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(40));
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    ctx.gpr[8] = (ctx.gpr[17] | 0u);
    ctx.gpr[9] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088C2798u);
    ctx.gpr[10] = (ctx.gpr[19] | 0u);
    goto L_088C2800;
L_088C2798:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[30]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(44));
      if (branch_taken) {
          goto L_088C2614;
      }
      goto L_088C27AC;
    }
L_088C27AC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(100));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[6]);
      if (branch_taken) {
          goto L_088C25E8;
      }
      goto L_088C27D0;
    }
L_088C27D0:
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
L_088C2800:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-176));
    ctx.gpr[9] = (ctx.gpr[9] << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[17]);
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 16u));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[5]);
    ctx.gpr[19] = (ctx.gpr[6] | 0u);
    ctx.gpr[18] = (ctx.gpr[8] | 0u);
    ctx.gpr[23] = (ctx.gpr[10] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[7]);
      if (branch_taken) {
          goto L_088C294C;
      }
      goto L_088C2854;
    }
L_088C2854:
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[22] = (2227u << 16u);
    goto L_088C2864;
L_088C2864:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[22] + static_cast<std::uint32_t>(20976)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_088C2944;
      }
      goto L_088C2878;
    }
L_088C2878:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[22] + static_cast<std::uint32_t>(20976)));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(84), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
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
      const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<8u, 4u>(vfpu_value); }
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 4u, 3u);
      ctx.read_vfpu_vector_ct<8u, 3u>(vfpu_target_raw);
      constexpr std::uint32_t vfpu_side = 3u;
      constexpr std::uint32_t vfpu_input_length = 3u;
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_target[i] = i < vfpu_input_length ? vfpu_target_raw[i] : 0.0f;
      if (vfpu_side - 1u >= vfpu_input_length) vfpu_target[vfpu_side - 1u] = 1.0f;
      for (std::uint32_t row = 0; row + 1u < vfpu_side; ++row) {
        float sum = 0.0f;
        for (std::uint32_t column = 0; column < vfpu_side; ++column) sum += vfpu_matrix[row * 4u + column] * vfpu_target[column];
        vfpu_result[row] = sum;
      }
      float vfpu_final_row[4]{vfpu_matrix[(vfpu_side - 1u) * 4u + 0u], vfpu_matrix[(vfpu_side - 1u) * 4u + 1u],
                              vfpu_matrix[(vfpu_side - 1u) * 4u + 2u], vfpu_matrix[(vfpu_side - 1u) * 4u + 3u]};
      ctx.apply_vfpu_source_prefix_ct<4u, 0u>(vfpu_final_row);
      ctx.apply_vfpu_source_prefix_ct<4u, 1u>(vfpu_target);
      for (std::uint32_t column = 0; column < 4u; ++column) vfpu_result[vfpu_side - 1u] += vfpu_final_row[column] * vfpu_target[column];
      const std::uint32_t vfpu_destination_prefix = ctx.vfpu_ctrl[2];
      const std::uint32_t vfpu_last_lane = vfpu_side - 1u;
      ctx.vfpu_ctrl[2] = ((vfpu_destination_prefix & (1u << 8u)) << vfpu_last_lane) |
                         ((vfpu_destination_prefix & 3u) << (vfpu_last_lane * 2u));
      ctx.write_vfpu_vector_with_destination_prefix(vfpu_result, 0u, vfpu_side); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[31] = (0x088C2904u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 538u, 0x088CADC4u>(ctx, &aot_mem) && ctx.pc == 0x088C2904u) goto L_088C2904;
    return;
L_088C2904:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C2944;
      }
      goto L_088C290C;
    }
L_088C290C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C2944;
      }
      goto L_088C2920;
    }
L_088C2920:
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C2938;
      }
      goto L_088C2928;
    }
L_088C2928:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[23] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    goto L_088C2938;
L_088C2938:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_088C2944;
L_088C2944:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C2864;
      }
      goto L_088C294C;
    }
L_088C294C:
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
L_088C297C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[20]);
    ctx.gpr[20] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (16968u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[22]);
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    ctx.gpr[22] = (ctx.gpr[7] << 16u);
    ctx.gpr[4] = (ctx.gpr[9] & 255u);
    ctx.gpr[7] = (ctx.gpr[10] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[9] = (ctx.gpr[11] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[21]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[9]);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[21] = (ctx.gpr[6] | 0u);
    ctx.gpr[16] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[30]);
    ctx.gpr[22] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[22]) >> 16u));
    ctx.gpr[30] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(20976)));
    ctx.gpr[23] = (ctx.gpr[8] | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[31]);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[30] = (ctx.gpr[5] | 0u);
        goto L_088C2A18;
    }
    goto L_088C2A18;
L_088C2A18:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = ctx.fpr[14] / ctx.fpr[12];
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[17] = (0u | 0u);
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
        goto L_088C2A40;
    }
    goto L_088C2A40;
L_088C2A40:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = ctx.fpr[14] / ctx.fpr[12];
    ctx.gpr[18] = (0u | 100u);
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 100 ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
        goto L_088C2A64;
    }
    goto L_088C2A64;
L_088C2A64:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[14] / ctx.fpr[12];
    ctx.gpr[5] = (0u | 100u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 100 ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[5]);
        goto L_088C2A8C;
    }
    goto L_088C2A8C;
L_088C2A8C:
    ctx.gpr[5] = (0u | 65535u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088C2AA4;
      }
      goto L_088C2A9C;
    }
L_088C2A9C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(20976), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088C2AB4;
      }
      goto L_088C2AA4;
    }
L_088C2AA4:
    ctx.gpr[31] = (0x088C2AACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 155u, 0x088C4C18u>(ctx, &aot_mem) && ctx.pc == 0x088C2AACu) goto L_088C2AAC;
    return;
L_088C2AAC:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(20976), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_088C2AB4;
L_088C2AB4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[18]);
    aot_mem.aot_store16(ctx.gpr[21] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[17]);
      if (branch_taken) {
          goto L_088C2C6C;
      }
      goto L_088C2AD0;
    }
L_088C2AD0:
    ctx.gpr[4] = (ctx.gpr[17] << 5u);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[30] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[5]);
    goto L_088C2AEC;
L_088C2AEC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C2C48;
      }
      goto L_088C2B00;
    }
L_088C2B00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[17] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[17] = (ctx.gpr[4] - ctx.gpr[17]);
    goto L_088C2B18;
L_088C2B18:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20972)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[17]);
      if (branch_taken) {
          goto L_088C2B7C;
      }
      goto L_088C2B2C;
    }
L_088C2B2C:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(20));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    ctx.gpr[8] = (ctx.gpr[22] | 0u);
    ctx.gpr[9] = (ctx.gpr[23] | 0u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x088C2B54u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    goto L_088C2C9C;
L_088C2B54:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    ctx.gpr[8] = (ctx.gpr[22] | 0u);
    ctx.gpr[9] = (ctx.gpr[23] | 0u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x088C2B7Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    goto L_088C2C9C;
L_088C2B7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C2BD8;
      }
      goto L_088C2B88;
    }
L_088C2B88:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(28));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    ctx.gpr[8] = (ctx.gpr[22] | 0u);
    ctx.gpr[9] = (ctx.gpr[23] | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 1u);
    ctx.gpr[31] = (0x088C2BB0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    goto L_088C2C9C;
L_088C2BB0:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    ctx.gpr[8] = (ctx.gpr[22] | 0u);
    ctx.gpr[9] = (ctx.gpr[23] | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 1u);
    ctx.gpr[31] = (0x088C2BD8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    goto L_088C2C9C;
L_088C2BD8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C2C34;
      }
      goto L_088C2BE4;
    }
L_088C2BE4:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(12));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    ctx.gpr[8] = (ctx.gpr[22] | 0u);
    ctx.gpr[9] = (ctx.gpr[23] | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x088C2C0Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[30]);
    goto L_088C2C9C;
L_088C2C0C:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    ctx.gpr[8] = (ctx.gpr[22] | 0u);
    ctx.gpr[9] = (ctx.gpr[23] | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x088C2C34u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[30]);
    goto L_088C2C9C;
L_088C2C34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(44));
      if (branch_taken) {
          goto L_088C2B18;
      }
      goto L_088C2C48;
    }
L_088C2C48:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(100));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[5]);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[6]);
      if (branch_taken) {
          goto L_088C2AEC;
      }
      goto L_088C2C6C;
    }
L_088C2C6C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
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
L_088C2C9C:
    ctx.gpr[2] = (ctx.gpr[11] | 0u);
    ctx.gpr[11] = (ctx.gpr[8] << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[11]) >> 16u));
    ctx.gpr[10] = (ctx.gpr[10] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[8] = (ctx.gpr[2] & 255u);
      if (branch_taken) {
          goto L_088C2E70;
      }
      goto L_088C2CB8;
    }
L_088C2CB8:
    ctx.gpr[3] = (0u | 2u);
    ctx.gpr[12] = (2227u << 16u);
    ctx.gpr[2] = (2229u << 16u);
    goto L_088C2CC4;
L_088C2CC4:
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[15] = (aot_mem.aot_load16(ctx.gpr[13] + static_cast<std::uint32_t>(84)));
    ctx.gpr[14] = (aot_mem.aot_load16(ctx.gpr[12] + static_cast<std::uint32_t>(20976)));
    { const bool branch_taken = ctx.gpr[15] == ctx.gpr[14];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_088C2E68;
      }
      goto L_088C2CD8;
    }
L_088C2CD8:
    aot_mem.aot_store16(ctx.gpr[13] + static_cast<std::uint32_t>(84), static_cast<std::uint16_t>(ctx.gpr[14]));
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.gpr[14] = (0u | 0u);
      if (branch_taken) {
          goto L_088C2CF8;
      }
      goto L_088C2CE4;
    }
L_088C2CE4:
    ctx.gpr[15] = (aot_mem.aot_load8(ctx.gpr[13] + static_cast<std::uint32_t>(596)));
    { const bool branch_taken = ctx.gpr[15] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_088C2D24;
      }
      goto L_088C2CF0;
    }
L_088C2CF0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[14] = (0u | 1u);
      if (branch_taken) {
          goto L_088C2D24;
      }
      goto L_088C2CF8;
    }
L_088C2CF8:
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C2D14;
      }
      goto L_088C2D00;
    }
L_088C2D00:
    ctx.gpr[15] = (aot_mem.aot_load8(ctx.gpr[13] + static_cast<std::uint32_t>(428)));
    { const bool branch_taken = ctx.gpr[15] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_088C2D24;
      }
      goto L_088C2D0C;
    }
L_088C2D0C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[14] = (0u | 1u);
      if (branch_taken) {
          goto L_088C2D24;
      }
      goto L_088C2D14;
    }
L_088C2D14:
    ctx.gpr[15] = (aot_mem.aot_load8(ctx.gpr[13] + static_cast<std::uint32_t>(420)));
    { const bool branch_taken = ctx.gpr[15] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_088C2D24;
      }
      goto L_088C2D20;
    }
L_088C2D20:
    ctx.gpr[14] = (0u | 1u);
    goto L_088C2D24;
L_088C2D24:
    { const bool branch_taken = ctx.gpr[14] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C2E68;
      }
      goto L_088C2D2C;
    }
L_088C2D2C:
    ctx.gpr[24] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[13] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[15] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[14] = (ctx.gpr[24] << 2u);
    ctx.gpr[14] = (ctx.gpr[15] + ctx.gpr[14]);
    ctx.gpr[25] = (aot_mem.aot_load32(ctx.gpr[14] + static_cast<std::uint32_t>(0)));
    ctx.gpr[14] = (ctx.gpr[13] + static_cast<std::uint32_t>(48));
    ctx.gpr[25] = (aot_mem.aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(20)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[14] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(12)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = ctx.fpr[12] + ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[25] = (ctx.gpr[24] << 2u);
      if (branch_taken) {
          goto L_088C2E68;
      }
      goto L_088C2D68;
    }
L_088C2D68:
    ctx.gpr[25] = (ctx.gpr[15] + ctx.gpr[25]);
    ctx.gpr[25] = (aot_mem.aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(0)));
    ctx.gpr[25] = (aot_mem.aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(20)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(12)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[25] = (ctx.gpr[24] << 2u);
      if (branch_taken) {
          goto L_088C2E68;
      }
      goto L_088C2D90;
    }
L_088C2D90:
    ctx.gpr[25] = (ctx.gpr[15] + ctx.gpr[25]);
    ctx.gpr[25] = (aot_mem.aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[14] + static_cast<std::uint32_t>(4)));
    ctx.gpr[25] = (aot_mem.aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(20)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(12)));
    ctx.fpr[14] = ctx.fpr[12] + ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[25] = (ctx.gpr[24] << 2u);
      if (branch_taken) {
          goto L_088C2E68;
      }
      goto L_088C2DBC;
    }
L_088C2DBC:
    ctx.gpr[25] = (ctx.gpr[15] + ctx.gpr[25]);
    ctx.gpr[25] = (aot_mem.aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(0)));
    ctx.gpr[25] = (aot_mem.aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(20)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(12)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[25] = (ctx.gpr[24] << 2u);
      if (branch_taken) {
          goto L_088C2E68;
      }
      goto L_088C2DE4;
    }
L_088C2DE4:
    ctx.gpr[25] = (ctx.gpr[15] + ctx.gpr[25]);
    ctx.gpr[25] = (aot_mem.aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[14] + static_cast<std::uint32_t>(8)));
    ctx.gpr[14] = (aot_mem.aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(20)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[14] + static_cast<std::uint32_t>(12)));
    ctx.fpr[14] = ctx.fpr[12] + ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[14] = (ctx.gpr[24] << 2u);
      if (branch_taken) {
          goto L_088C2E68;
      }
      goto L_088C2E10;
    }
L_088C2E10:
    ctx.gpr[14] = (ctx.gpr[15] + ctx.gpr[14]);
    ctx.gpr[14] = (aot_mem.aot_load32(ctx.gpr[14] + static_cast<std::uint32_t>(0)));
    ctx.gpr[14] = (aot_mem.aot_load32(ctx.gpr[14] + static_cast<std::uint32_t>(20)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[14] + static_cast<std::uint32_t>(12)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088C2E68;
      }
      goto L_088C2E38;
    }
L_088C2E38:
    ctx.gpr[14] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[15] = (static_cast<std::int32_t>(ctx.gpr[14]) < static_cast<std::int32_t>(ctx.gpr[11]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[15] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C2E68;
      }
      goto L_088C2E48;
    }
L_088C2E48:
    { const bool branch_taken = ctx.gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C2E60;
      }
      goto L_088C2E50;
    }
L_088C2E50:
    ctx.gpr[14] = (ctx.gpr[14] << 2u);
    ctx.gpr[14] = (ctx.gpr[9] + ctx.gpr[14]);
    aot_mem.aot_store32(ctx.gpr[14] + static_cast<std::uint32_t>(0), ctx.gpr[13]);
    ctx.gpr[14] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    goto L_088C2E60;
L_088C2E60:
    ctx.gpr[13] = (ctx.gpr[14] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[13]));
    goto L_088C2E68;
L_088C2E68:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C2CC4;
      }
      goto L_088C2E70;
    }
L_088C2E70:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C2E78:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (17530u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[2] = (50298u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[31]);
    ctx.gpr[31] = (0x088C2ECCu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    goto L_088C06D4;
L_088C2ECC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C2EE0;
      }
      goto L_088C2ED4;
    }
L_088C2ED4:
    ctx.gpr[4] = (16800u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_088C2EE4;
      }
      goto L_088C2EE0;
    }
L_088C2EE0:
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    goto L_088C2EE4;
L_088C2EE4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C2EF0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[2] = (50298u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[31]);
    ctx.gpr[31] = (0x088C2F44u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    goto L_088C06D4;
L_088C2F44:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C2F60;
      }
      goto L_088C2F4C;
    }
L_088C2F4C:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C2F58;
      }
      goto L_088C2F54;
    }
L_088C2F54:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    goto L_088C2F58;
L_088C2F58:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_088C2F74;
      }
      goto L_088C2F60;
    }
L_088C2F60:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C2F70;
      }
      goto L_088C2F68;
    }
L_088C2F68:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_088C2F70;
L_088C2F70:
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    goto L_088C2F74;
L_088C2F74:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C2F84:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[2] = (17530u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[31]);
    ctx.gpr[31] = (0x088C2FECu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    goto L_088C06D4;
L_088C2FEC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C3064;
      }
      goto L_088C2FF4;
    }
L_088C2FF4:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C304C;
      }
      goto L_088C2FFC;
    }
L_088C2FFC:
    ctx.gpr[4] = (2225u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (0x088C300Cu);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(13064));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 377u, 0x08AF5D84u>(ctx, &aot_mem) && ctx.pc == 0x088C300Cu) goto L_088C300C;
    return;
L_088C300C:
    ctx.gpr[19] = (ctx.gpr[3] | 0u);
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088C301Cu);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 377u, 0x08AF5D84u>(ctx, &aot_mem) && ctx.pc == 0x088C301Cu) goto L_088C301C;
    return;
L_088C301C:
    ctx.gpr[21] = (ctx.gpr[3] | 0u);
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088C302Cu);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 377u, 0x08AF5D84u>(ctx, &aot_mem) && ctx.pc == 0x088C302Cu) goto L_088C302C;
    return;
L_088C302C:
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[9] = (ctx.gpr[21] | 0u);
    ctx.gpr[8] = (ctx.gpr[20] | 0u);
    ctx.gpr[11] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x088C304Cu);
    ctx.gpr[10] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 375u, 0x08AF99BCu>(ctx, &aot_mem) && ctx.pc == 0x088C304Cu) goto L_088C304C;
    return;
L_088C304C:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C3058;
      }
      goto L_088C3054;
    }
L_088C3054:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    goto L_088C3058;
L_088C3058:
    ctx.gpr[4] = (16800u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_088C3078;
      }
      goto L_088C3064;
    }
L_088C3064:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C3074;
      }
      goto L_088C306C;
    }
L_088C306C:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_088C3074;
L_088C3074:
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    goto L_088C3078;
L_088C3078:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C309C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[5] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-15044)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[20] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[21] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_088C3150;
      }
      goto L_088C30DC;
    }
L_088C30DC:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(3248));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[20])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[18] = (ctx.lo);
    goto L_088C30E8;
L_088C30E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
        goto L_088C3108;
    }
    goto L_088C3100;
L_088C3100:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088C310C;
      }
      goto L_088C3108;
    }
L_088C3108:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    goto L_088C310C;
L_088C310C:
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C313C;
      }
      goto L_088C3118;
    }
L_088C3118:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_088C313C;
      }
      goto L_088C3120;
    }
L_088C3120:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088C312Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 307u, 0x08A0E530u>(ctx, &aot_mem) && ctx.pc == 0x088C312Cu) goto L_088C312C;
    return;
L_088C312C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1264)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_088C313C;
      }
      goto L_088C3138;
    }
L_088C3138:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(1264), 0u);
    goto L_088C313C;
L_088C313C:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[20] = (ctx.gpr[21] + static_cast<std::uint32_t>(-1));
    ctx.gpr[21] = (ctx.gpr[20] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-3248));
      if (branch_taken) {
          goto L_088C30E8;
      }
      goto L_088C3150;
    }
L_088C3150:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[21] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[22] = (ctx.gpr[21] | 0u);
      if (branch_taken) {
          goto L_088C31FC;
      }
      goto L_088C3168;
    }
L_088C3168:
    ctx.gpr[4] = (ctx.gpr[21] << 5u);
    ctx.gpr[5] = (0u - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 1u);
    ctx.gpr[19] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[4]);
    goto L_088C3188;
L_088C3188:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[21]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
        goto L_088C31A8;
    }
    goto L_088C31A0;
L_088C31A0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_088C31AC;
      }
      goto L_088C31A8;
    }
L_088C31A8:
    ctx.gpr[18] = (ctx.gpr[18] + ctx.gpr[19]);
    goto L_088C31AC;
L_088C31AC:
    ctx.gpr[20] = (ctx.gpr[18] | 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C31E8;
      }
      goto L_088C31B8;
    }
L_088C31B8:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_088C31E8;
      }
      goto L_088C31C0;
    }
L_088C31C0:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088C31CCu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 307u, 0x08A0E530u>(ctx, &aot_mem) && ctx.pc == 0x088C31CCu) goto L_088C31CC;
    return;
L_088C31CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(272));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x088C31E8u);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C31E8u) goto L_088C31E8;
    return;
L_088C31E8:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[21] = (ctx.gpr[22] + static_cast<std::uint32_t>(-1));
    ctx.gpr[22] = (ctx.gpr[21] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-1760));
      if (branch_taken) {
          goto L_088C3188;
      }
      goto L_088C31FC;
    }
L_088C31FC:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15028)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_088C327C;
      }
      goto L_088C3214;
    }
L_088C3214:
    ctx.gpr[4] = (ctx.gpr[18] << 5u);
    ctx.gpr[20] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[20] = (ctx.gpr[20] + ctx.gpr[4]);
    goto L_088C3224;
L_088C3224:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
        goto L_088C3244;
    }
    goto L_088C323C;
L_088C323C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088C3248;
      }
      goto L_088C3244;
    }
L_088C3244:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    goto L_088C3248;
L_088C3248:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C3268;
      }
      goto L_088C3254;
    }
L_088C3254:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_088C3268;
      }
      goto L_088C325C;
    }
L_088C325C:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x088C3268u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 307u, 0x08A0E530u>(ctx, &aot_mem) && ctx.pc == 0x088C3268u) goto L_088C3268;
    return;
L_088C3268:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-544));
      if (branch_taken) {
          goto L_088C3224;
      }
      goto L_088C327C;
    }
L_088C327C:
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
L_088C32A4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    ctx.gpr[5] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-15044)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[19]);
    ctx.fpr[30] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[28] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[19] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_088C3450;
      }
      goto L_088C3310;
    }
L_088C3310:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(3248));
    ctx.fpr[20] = std::bit_cast<float>(0u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[19])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (16204u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[23] = (2233u << 16u);
    ctx.gpr[4] = (16544u << 16u);
    ctx.gpr[21] = (0u | 55u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(-24800));
    ctx.gpr[22] = (2048u << 16u);
    ctx.gpr[20] = (ctx.lo);
    goto L_088C3344;
L_088C3344:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
        goto L_088C3364;
    }
    goto L_088C335C;
L_088C335C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088C3368;
      }
      goto L_088C3364;
    }
L_088C3364:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    goto L_088C3368;
L_088C3368:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C343C;
      }
      goto L_088C3370;
    }
L_088C3370:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_088C343C;
      }
      goto L_088C337C;
    }
L_088C337C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C343C;
      }
      goto L_088C3388;
    }
L_088C3388:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1756)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C343C;
      }
      goto L_088C3394;
    }
L_088C3394:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[22]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_088C343C;
      }
      goto L_088C33A4;
    }
L_088C33A4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[28];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
        goto L_088C33BC;
    }
    goto L_088C33BC;
L_088C33BC:
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[26]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088C343C;
      }
      goto L_088C33CC;
    }
L_088C33CC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
        goto L_088C33E8;
    }
    goto L_088C33E8;
L_088C33E8:
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088C343C;
      }
      goto L_088C33F8;
    }
L_088C33F8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[30];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
        goto L_088C3410;
    }
    goto L_088C3410;
L_088C3410:
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088C343C;
      }
      goto L_088C3420;
    }
L_088C3420:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[31] = (0x088C343Cu);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 771u, 0x0884F708u>(ctx, &aot_mem) && ctx.pc == 0x088C343Cu) goto L_088C343C;
    return;
L_088C343C:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(-1));
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-3248));
      if (branch_taken) {
          goto L_088C3344;
      }
      goto L_088C3450;
    }
L_088C3450:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C3494:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    ctx.gpr[5] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-15044)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[19]);
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[19] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_088C3664;
      }
      goto L_088C3504;
    }
L_088C3504:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(3248));
    ctx.fpr[20] = std::bit_cast<float>(0u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[19])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (16544u << 16u);
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[22] = (0u | 55u);
    ctx.gpr[4] = (16256u << 16u);
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[23] = (2048u << 16u);
    ctx.gpr[20] = (ctx.lo);
    goto L_088C3530;
L_088C3530:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
        goto L_088C3550;
    }
    goto L_088C3548;
L_088C3548:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (0u | 0u);
      if (branch_taken) {
          goto L_088C3554;
      }
      goto L_088C3550;
    }
L_088C3550:
    ctx.gpr[21] = (ctx.gpr[21] + ctx.gpr[20]);
    goto L_088C3554;
L_088C3554:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C3650;
      }
      goto L_088C355C;
    }
L_088C355C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(844)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_088C3650;
      }
      goto L_088C3568;
    }
L_088C3568:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C3650;
      }
      goto L_088C3574;
    }
L_088C3574:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1756)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C3650;
      }
      goto L_088C3580;
    }
L_088C3580:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[23]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_088C3650;
      }
      goto L_088C3590;
    }
L_088C3590:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
        goto L_088C35AC;
    }
    goto L_088C35AC;
L_088C35AC:
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[30]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088C3650;
      }
      goto L_088C35BC;
    }
L_088C35BC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[26];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
        goto L_088C35D4;
    }
    goto L_088C35D4;
L_088C35D4:
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088C3650;
      }
      goto L_088C35E4;
    }
L_088C35E4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[24];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
        goto L_088C35FC;
    }
    goto L_088C35FC;
L_088C35FC:
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088C3650;
      }
      goto L_088C360C;
    }
L_088C360C:
    ctx.gpr[31] = (0x088C3614u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x088C3614u) goto L_088C3614;
    return;
L_088C3614:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C3634;
      }
      goto L_088C361C;
    }
L_088C361C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x088C3634u);
    ctx.gpr[6] = (0u | 10000u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 353u, 0x089A18ACu>(ctx, &aot_mem) && ctx.pc == 0x088C3634u) goto L_088C3634;
    return;
L_088C3634:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 14u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x088C3650u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 575u, 0x088DEE0Cu>(ctx, &aot_mem) && ctx.pc == 0x088C3650u) goto L_088C3650;
    return;
L_088C3650:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(-1));
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-3248));
      if (branch_taken) {
          goto L_088C3530;
      }
      goto L_088C3664;
    }
L_088C3664:
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
L_088C36AC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    ctx.gpr[5] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-15040)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[19]);
    ctx.fpr[30] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[28] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[19] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_088C385C;
      }
      goto L_088C3718;
    }
L_088C3718:
    ctx.gpr[4] = (ctx.gpr[19] << 5u);
    ctx.gpr[5] = (0u - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 1u);
    ctx.gpr[20] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[20] = (ctx.gpr[20] + ctx.gpr[4]);
    ctx.gpr[4] = (16204u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[23] = (2233u << 16u);
    ctx.gpr[4] = (16544u << 16u);
    ctx.gpr[21] = (0u | 80u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(-24800));
    ctx.gpr[22] = (2048u << 16u);
    goto L_088C3760;
L_088C3760:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
        goto L_088C3780;
    }
    goto L_088C3778;
L_088C3778:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088C3784;
      }
      goto L_088C3780;
    }
L_088C3780:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    goto L_088C3784;
L_088C3784:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C3848;
      }
      goto L_088C378C;
    }
L_088C378C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[6] = (ctx.gpr[5] & 496u);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_088C3848;
      }
      goto L_088C379C;
    }
L_088C379C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(580)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[22]);
      if (branch_taken) {
          goto L_088C3848;
      }
      goto L_088C37A8;
    }
L_088C37A8:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_088C3848;
      }
      goto L_088C37B0;
    }
L_088C37B0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[28];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
        goto L_088C37C8;
    }
    goto L_088C37C8;
L_088C37C8:
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[26]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088C3848;
      }
      goto L_088C37D8;
    }
L_088C37D8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
        goto L_088C37F4;
    }
    goto L_088C37F4;
L_088C37F4:
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088C3848;
      }
      goto L_088C3804;
    }
L_088C3804:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[30];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
        goto L_088C381C;
    }
    goto L_088C381C;
L_088C381C:
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088C3848;
      }
      goto L_088C382C;
    }
L_088C382C:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[31] = (0x088C3848u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 771u, 0x0884F708u>(ctx, &aot_mem) && ctx.pc == 0x088C3848u) goto L_088C3848;
    return;
L_088C3848:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(-1));
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-1760));
      if (branch_taken) {
          goto L_088C3760;
      }
      goto L_088C385C;
    }
L_088C385C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C38A0:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15028)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[8] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_088C3994;
      }
      goto L_088C38B8;
    }
L_088C38B8:
    ctx.gpr[5] = (ctx.gpr[7] << 5u);
    ctx.fpr[17] = std::bit_cast<float>(0u);
    ctx.gpr[6] = (0u + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (16544u << 16u);
    ctx.gpr[4] = (0u | 31u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[5]);
    goto L_088C38D8;
L_088C38D8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] & 128u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
        goto L_088C38F8;
    }
    goto L_088C38F0;
L_088C38F0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_088C38FC;
      }
      goto L_088C38F8;
    }
L_088C38F8:
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    goto L_088C38FC;
L_088C38FC:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[10] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_088C3980;
      }
      goto L_088C3904;
    }
L_088C3904:
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(8)));
    ctx.fpr[18] = ctx.fpr[18] - ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[18] < ctx.fpr[17]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]) ^ 0x80000000u);
        goto L_088C391C;
    }
    goto L_088C391C;
L_088C391C:
    ctx.set_fpu_condition((ctx.fpr[18] < ctx.fpr[16]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088C3980;
      }
      goto L_088C392C;
    }
L_088C392C:
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    ctx.fpr[18] = ctx.fpr[18] - ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[18] < ctx.fpr[17]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]) ^ 0x80000000u);
        goto L_088C3944;
    }
    goto L_088C3944;
L_088C3944:
    ctx.set_fpu_condition((ctx.fpr[18] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088C3980;
      }
      goto L_088C3954;
    }
L_088C3954:
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(4)));
    ctx.fpr[18] = ctx.fpr[18] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[18] < ctx.fpr[17]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]) ^ 0x80000000u);
        goto L_088C396C;
    }
    goto L_088C396C;
L_088C396C:
    ctx.set_fpu_condition((ctx.fpr[18] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088C3980;
      }
      goto L_088C397C;
    }
L_088C397C:
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(424), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_088C3980;
L_088C3980:
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (ctx.gpr[8] + static_cast<std::uint32_t>(-1));
    ctx.gpr[8] = (ctx.gpr[7] | 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-544));
      if (branch_taken) {
          goto L_088C38D8;
      }
      goto L_088C3994;
    }
L_088C3994:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C399C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-176));
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[30]);
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[20]);
    ctx.gpr[20] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[20]);
      if (branch_taken) {
          goto L_088C3B68;
      }
      goto L_088C39F0;
    }
L_088C39F0:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(3248));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[20])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.fpr[24] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (18804u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 9214u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (49864u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[23] = (2228u << 16u);
    ctx.gpr[21] = (ctx.lo);
    goto L_088C3A28;
L_088C3A28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
        goto L_088C3A48;
    }
    goto L_088C3A40;
L_088C3A40:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_088C3A4C;
      }
      goto L_088C3A48;
    }
L_088C3A48:
    ctx.gpr[18] = (ctx.gpr[18] + ctx.gpr[21]);
    goto L_088C3A4C;
L_088C3A4C:
    ctx.gpr[16] = (ctx.gpr[18] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C3B50;
      }
      goto L_088C3A58;
    }
L_088C3A58:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088C3B50;
      }
      goto L_088C3A70;
    }
L_088C3A70:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(428)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088C3AA0;
      }
      goto L_088C3A80;
    }
L_088C3A80:
    ctx.gpr[31] = (0x088C3A88u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x088C3A88u) goto L_088C3A88;
    return;
L_088C3A88:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C3AA0;
      }
      goto L_088C3A90;
    }
L_088C3A90:
    ctx.gpr[31] = (0x088C3A98u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 289u, 0x08A9D734u>(ctx, &aot_mem) && ctx.pc == 0x088C3A98u) goto L_088C3A98;
    return;
L_088C3A98:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C3B50;
      }
      goto L_088C3AA0;
    }
L_088C3AA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-26612)));
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
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[31] = (0x088C3ACCu);
    ctx.gpr[10] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 369u, 0x0897572Cu>(ctx, &aot_mem) && ctx.pc == 0x088C3ACCu) goto L_088C3ACC;
    return;
L_088C3ACC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-26612)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[2] << 4u);
    ctx.gpr[6] = (ctx.gpr[2] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_vfpu_scalar_bits_ct<32u>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.execute_vfpu_vx2i(1u, 0u, 2u, 3u);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<1u, 3u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<3u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, -static_cast<int>(19u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 3u; ++vfpu_i) {
        const auto vfpu_integer = static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(vfpu_s[vfpu_i]));
        vfpu_d[vfpu_i] = static_cast<float>(vfpu_integer) * vfpu_scale;
      }
      ctx.write_vfpu_vector_with_destination_prefix_ct<2u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(104));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088C3B34u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C3B34u) goto L_088C3B34;
    return;
L_088C3B34:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    goto L_088C3B50;
L_088C3B50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[20] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-3248));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[20]);
      if (branch_taken) {
          goto L_088C3A28;
      }
      goto L_088C3B68;
    }
L_088C3B68:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C3BA8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-176));
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[30]);
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[20]);
    ctx.gpr[20] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[20]);
      if (branch_taken) {
          goto L_088C3DFC;
      }
      goto L_088C3BFC;
    }
L_088C3BFC:
    ctx.gpr[4] = (ctx.gpr[20] << 5u);
    ctx.gpr[5] = (0u - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 1u);
    ctx.gpr[21] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[21] = (ctx.gpr[21] + ctx.gpr[4]);
    ctx.fpr[24] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (18804u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 9214u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (49864u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[23] = (2228u << 16u);
    goto L_088C3C48;
L_088C3C48:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
        goto L_088C3C68;
    }
    goto L_088C3C60;
L_088C3C60:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_088C3C6C;
      }
      goto L_088C3C68;
    }
L_088C3C68:
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[21]);
    goto L_088C3C6C;
L_088C3C6C:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C3DE4;
      }
      goto L_088C3C78;
    }
L_088C3C78:
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088C3DE4;
      }
      goto L_088C3C90;
    }
L_088C3C90:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(596)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088C3CB4;
      }
      goto L_088C3CA0;
    }
L_088C3CA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (32u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C3CE0;
      }
      goto L_088C3CB4;
    }
L_088C3CB4:
    ctx.gpr[31] = (0x088C3CBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x088C3CBCu) goto L_088C3CBC;
    return;
L_088C3CBC:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088C3CE0;
      }
      goto L_088C3CC4;
    }
L_088C3CC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C3D98;
      }
      goto L_088C3CD0;
    }
L_088C3CD0:
    ctx.gpr[31] = (0x088C3CD8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(504)));
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x088C3CD8u) goto L_088C3CD8;
    return;
L_088C3CD8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C3D98;
      }
      goto L_088C3CE0;
    }
L_088C3CE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-26612)));
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[31] = (0x088C3D0Cu);
    ctx.gpr[10] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 369u, 0x0897572Cu>(ctx, &aot_mem) && ctx.pc == 0x088C3D0Cu) goto L_088C3D0C;
    return;
L_088C3D0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-26612)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[2] << 4u);
    ctx.gpr[6] = (ctx.gpr[2] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_vfpu_scalar_bits_ct<32u>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.execute_vfpu_vx2i(1u, 0u, 2u, 3u);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<1u, 3u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<3u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, -static_cast<int>(19u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 3u; ++vfpu_i) {
        const auto vfpu_integer = static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(vfpu_s[vfpu_i]));
        vfpu_d[vfpu_i] = static_cast<float>(vfpu_integer) * vfpu_scale;
      }
      ctx.write_vfpu_vector_with_destination_prefix_ct<2u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(104));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088C3D74u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C3D74u) goto L_088C3D74;
    return;
L_088C3D74:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C3DE4;
      }
      goto L_088C3D98;
    }
L_088C3D98:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(596)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088C3DB8;
      }
      goto L_088C3DA8;
    }
L_088C3DA8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(596)));
    ctx.gpr[5] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088C3DE4;
      }
      goto L_088C3DB8;
    }
L_088C3DB8:
    ctx.gpr[31] = (0x088C3DC0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_088C0528;
L_088C3DC0:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C3DE4;
      }
      goto L_088C3DC8;
    }
L_088C3DC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x088C3DE4u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C3DE4u) goto L_088C3DE4;
    return;
L_088C3DE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[20] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-1760));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[20]);
      if (branch_taken) {
          goto L_088C3C48;
      }
      goto L_088C3DFC;
    }
L_088C3DFC:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C3E3C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(104)));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C3E90;
      }
      goto L_088C3E5C;
    }
L_088C3E5C:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    goto L_088C3E64;
L_088C3E64:
    ctx.gpr[8] = (ctx.gpr[8] < ctx.gpr[7] ? 1u : 0u);
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    if (ctx.gpr[8] != 0u) {
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(12));
        goto L_088C3E84;
    }
    goto L_088C3E74;
L_088C3E74:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088C3E88;
      }
      goto L_088C3E84;
    }
L_088C3E84:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    goto L_088C3E88;
L_088C3E88:
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
        goto L_088C3E64;
    }
    goto L_088C3E90;
L_088C3E90:
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
        goto L_088C3EB4;
    }
    goto L_088C3E98;
L_088C3E98:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (ctx.gpr[7] < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    if (ctx.gpr[6] == 0u) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
        goto L_088C3EB8;
    }
    goto L_088C3EB0;
L_088C3EB0:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    goto L_088C3EB4;
L_088C3EB4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    goto L_088C3EB8;
L_088C3EB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[5] ^ ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C3EF0;
      }
      goto L_088C3EE8;
    }
L_088C3EE8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088C3EF4;
      }
      goto L_088C3EF0;
    }
L_088C3EF0:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    goto L_088C3EF4;
L_088C3EF4:
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C3EFC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    ctx.gpr[5] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-15040)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[19] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 1u, 0x088C4004u>(ctx, &aot_mem); return;
      }
      goto L_088C3F3C;
    }
L_088C3F3C:
    ctx.gpr[4] = (ctx.gpr[19] << 5u);
    ctx.gpr[5] = (0u - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 1u);
    ctx.gpr[20] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[21] = (0u | 3u);
    ctx.gpr[22] = (0u | 500u);
    ctx.gpr[20] = (ctx.gpr[20] + ctx.gpr[4]);
    goto L_088C3F64;
L_088C3F64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
        goto L_088C3F84;
    }
    goto L_088C3F7C;
L_088C3F7C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088C3F88;
      }
      goto L_088C3F84;
    }
L_088C3F84:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    goto L_088C3F88;
L_088C3F88:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C3FF0;
      }
      goto L_088C3F94;
    }
L_088C3F94:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(836)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C3FF0;
      }
      goto L_088C3FA0;
    }
L_088C3FA0:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1509))))));
    ctx.gpr[5] = (ctx.gpr[5] & 7u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_088C3FF0;
      }
      goto L_088C3FB0;
    }
L_088C3FB0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1512)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_088C3FF0;
      }
      goto L_088C3FBC;
    }
L_088C3FBC:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(646)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 501 ? 1u : 0u);
      if (branch_taken) {
          goto L_088C3FD0;
      }
      goto L_088C3FC8;
    }
L_088C3FC8:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C3FF0;
      }
      goto L_088C3FD0;
    }
L_088C3FD0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1512)));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(646), static_cast<std::uint16_t>(ctx.gpr[22]));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(648), ctx.gpr[5]);
      if (branch_taken) {
          goto L_088C3FF0;
      }
      goto L_088C3FE0;
    }
L_088C3FE0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(648));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x088C3FF0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 689u, 0x0883B8A4u>(ctx, &aot_mem) && ctx.pc == 0x088C3FF0u) goto L_088C3FF0;
    return;
L_088C3FF0:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(-1));
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-1760));
      if (branch_taken) {
          goto L_088C3F64;
      }
      (void)rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 1u, 0x088C4004u>(ctx, &aot_mem); return;
    }
}

void recomp_unit_0047(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0047_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_47(Runtime &runtime) {
    runtime.register_generated_unit(47u, 0x088C0000u, 16384u, &recomp_unit_0047, &recomp_unit_0047_entry);
    runtime.register_function(0x088C0000u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C004Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0058u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C009Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C00C4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C00D8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C00E4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0144u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0190u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C01DCu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C01E4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C01ECu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C01F4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C01FCu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0204u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0208u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0214u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C021Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0228u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0244u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0248u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0250u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0260u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0274u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0284u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0294u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C029Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C02B8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C02C0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C02D0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C02D4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C02F0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C02FCu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0304u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C030Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0328u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0330u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C033Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C034Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0354u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0370u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0378u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C038Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0390u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C03A0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C03A8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C03D4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C03FCu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0404u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0418u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C042Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0438u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0444u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C044Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0474u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C047Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0498u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C04B0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C04C4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C04CCu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C04DCu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C04ECu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C04FCu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0504u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C050Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0514u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0528u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0554u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C055Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0570u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0584u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C05A4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C05B0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C05D8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C05E0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C05ECu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C05F4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C05FCu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0604u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C060Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0614u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C061Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0620u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0628u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0640u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0658u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C066Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0674u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0684u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0694u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C06A4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C06ACu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C06B4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C06BCu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C06D4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0774u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C078Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0794u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C07A8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C07C8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C07D4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C07F4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0800u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0844u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0878u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C08B4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0914u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C092Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0934u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C093Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0990u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0998u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C09DCu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C09E4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C09ECu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C09F0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C09FCu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0A30u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0A38u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0A40u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0A54u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0A9Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0AA4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0AD4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0ADCu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0B10u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0B18u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0B20u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0B34u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0B80u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0B88u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0BACu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0BB4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0BBCu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0BD4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0C3Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0C44u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0C60u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0C70u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0C78u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0C80u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0C94u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0C98u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0CD8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0D64u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0D8Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0DB0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0DD8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0DE8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0E00u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0E14u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0E24u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0E50u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0E70u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0E90u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0EA4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0EC0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0EF8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0FC8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0FF0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1014u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C103Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C104Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1054u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C105Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1064u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C107Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1094u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C10A8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C10C0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C10D4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C10F4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1114u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1120u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1140u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1160u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C116Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C118Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C11ACu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C11B4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C11D4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C11F4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1200u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1220u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1240u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C124Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1278u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C128Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C12B0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C12E4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1300u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1308u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C131Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1348u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1360u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1370u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1380u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1390u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1398u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C13A8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C13B4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C13BCu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C13C4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C143Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1458u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C146Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1494u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C149Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C14A8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C14B0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C14CCu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C14D4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C14E0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C14E8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C14F4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C14FCu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1528u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1540u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1550u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1560u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1574u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C157Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C158Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1598u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C15A0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C15D4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C16A4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C16CCu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C16F0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1718u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1728u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1730u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1738u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1740u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1758u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1770u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1784u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C179Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C17B0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C17D4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C17F8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1804u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1828u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C184Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1858u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C187Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C18A0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C18ACu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C18D0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C18F4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1900u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1924u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1948u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C195Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1980u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C19B4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C19D0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C19D8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C19ECu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C19FCu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1A20u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1A38u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1A48u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1A58u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1A68u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1A70u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1A80u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1A8Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1A94u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1A9Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1B60u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1B88u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1BACu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1BD4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1BE4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1BECu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1BF4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1BFCu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1C18u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1C34u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1C48u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1C60u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1C70u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1C90u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1CB0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1CBCu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1CDCu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1CFCu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1D1Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1D28u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1D48u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1D68u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1D74u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1D94u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1DB4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1DC0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1DE0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1E00u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1E14u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1E38u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1E6Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1E84u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1E90u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1EA4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1ED0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1EF0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1F08u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1F34u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1F44u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1F4Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1F5Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1F68u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1F70u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1F78u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C202Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2054u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2078u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C20A0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C20B0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C20B8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C20C0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C20C8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C20E4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2100u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2114u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C212Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C213Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2158u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2174u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2180u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C219Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C21B8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C21C4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C21E0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C21FCu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2208u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2224u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2240u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C224Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2268u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2284u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2298u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C22BCu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C22ECu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C22FCu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2304u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2318u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2358u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2380u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C23ACu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C23D4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2400u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2428u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2438u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2440u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2450u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2458u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2460u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2468u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2528u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C254Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C256Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2590u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C25A0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C25A8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C25B0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C25B8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C25D0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C25E8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C25FCu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2614u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2628u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2648u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2668u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2674u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2694u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C26B4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C26C0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C26E0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2700u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C270Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C272Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C274Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2758u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2778u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2798u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C27ACu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C27D0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2800u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2854u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2864u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2878u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2904u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C290Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2920u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2928u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2938u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2944u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C294Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C297Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2A18u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2A40u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2A64u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2A8Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2A9Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2AA4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2AACu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2AB4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2AD0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2AECu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2B00u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2B18u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2B2Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2B54u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2B7Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2B88u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2BB0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2BD8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2BE4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2C0Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2C34u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2C48u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2C6Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2C9Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2CB8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2CC4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2CD8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2CE4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2CF0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2CF8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2D00u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2D0Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2D14u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2D20u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2D24u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2D2Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2D68u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2D90u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2DBCu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2DE4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2E10u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2E38u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2E48u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2E50u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2E60u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2E68u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2E70u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2E78u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2ECCu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2ED4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2EE0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2EE4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2EF0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2F44u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2F4Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2F54u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2F58u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2F60u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2F68u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2F70u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2F74u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2F84u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2FECu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2FF4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2FFCu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C300Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C301Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C302Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C304Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3054u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3058u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3064u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C306Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3074u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3078u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C309Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C30DCu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C30E8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3100u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3108u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C310Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3118u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3120u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C312Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3138u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C313Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3150u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3168u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3188u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C31A0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C31A8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C31ACu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C31B8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C31C0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C31CCu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C31E8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C31FCu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3214u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3224u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C323Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3244u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3248u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3254u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C325Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3268u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C327Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C32A4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3310u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3344u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C335Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3364u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3368u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3370u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C337Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3388u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3394u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C33A4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C33BCu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C33CCu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C33E8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C33F8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3410u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3420u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C343Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3450u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3494u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3504u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3530u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3548u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3550u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3554u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C355Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3568u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3574u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3580u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3590u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C35ACu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C35BCu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C35D4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C35E4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C35FCu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C360Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3614u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C361Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3634u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3650u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3664u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C36ACu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3718u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3760u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3778u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3780u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3784u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C378Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C379Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C37A8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C37B0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C37C8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C37D8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C37F4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3804u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C381Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C382Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3848u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C385Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C38A0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C38B8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C38D8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C38F0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C38F8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C38FCu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3904u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C391Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C392Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3944u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3954u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C396Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C397Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3980u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3994u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C399Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C39F0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3A28u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3A40u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3A48u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3A4Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3A58u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3A70u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3A80u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3A88u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3A90u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3A98u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3AA0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3ACCu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3B34u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3B50u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3B68u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3BA8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3BFCu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3C48u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3C60u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3C68u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3C6Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3C78u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3C90u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3CA0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3CB4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3CBCu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3CC4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3CD0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3CD8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3CE0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3D0Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3D74u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3D98u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3DA8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3DB8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3DC0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3DC8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3DE4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3DFCu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3E3Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3E5Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3E64u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3E74u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3E84u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3E88u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3E90u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3E98u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3EB0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3EB4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3EB8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3EE8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3EF0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3EF4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3EFCu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3F3Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3F64u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3F7Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3F84u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3F88u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3F94u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3FA0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3FB0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3FBCu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3FC8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3FD0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3FE0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3FF0u, &recomp_unit_0047, "recomp_unit_0047");
}
} // namespace psprecomp
