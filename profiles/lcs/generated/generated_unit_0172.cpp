#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0172[4090] = {
    1, 0, 0, 2, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 5, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 9, 0, 10, 11, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 13, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 16, 0, 0,
    0, 17, 0, 18, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0,
    0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 28, 0, 0, 0, 29, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 33, 34, 0, 35, 0, 0, 36, 0, 37, 0, 0, 38, 0, 0, 39, 0, 0, 40, 41, 42,
    0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 46, 0, 47, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 51, 0, 0, 52, 0, 0, 53, 0, 0, 54, 55, 56, 0,
    57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 60, 0, 0, 0, 0, 0, 61, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 66, 0, 0, 67, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 69, 70, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 77, 0, 0, 78, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 79, 0, 0, 80, 0, 0, 0, 0, 0, 0, 81, 0, 0, 82, 0, 0, 0, 0, 0, 0, 83, 0, 0, 84, 0, 0, 0, 0,
    0, 0, 85, 0, 0, 86, 0, 0, 0, 0, 0, 0, 87, 0, 0, 88, 0, 0, 0, 0, 0, 0, 89, 0, 0, 90, 0, 0, 91, 0, 92, 0,
    0, 0, 0, 93, 0, 0, 0, 94, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 97, 0, 0, 0, 0, 98,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 100, 0, 0, 0, 0, 101, 0, 0, 0, 0, 102, 0, 0, 0, 0, 103, 0,
    0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 107, 0, 0, 0, 0, 108, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 110, 0, 0, 0, 0, 111, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 115, 0, 0, 0, 0, 116, 0, 0, 0, 117, 0, 118, 0, 119, 0, 120, 0, 121,
    0, 0, 122, 0, 123, 0, 0, 124, 0, 125, 0, 0, 0, 126, 0, 0, 0, 127, 0, 0, 0, 128, 0, 0, 0, 0, 0, 129, 0, 0, 0, 130,
    0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 133, 0, 0, 134, 0, 0, 135, 0, 0, 136,
    0, 0, 137, 0, 0, 138, 0, 0, 139, 0, 0, 140, 0, 0, 141, 0, 0, 142, 0, 0, 143, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0,
    0, 0, 145, 0, 0, 146, 0, 147, 0, 0, 148, 0, 0, 149, 0, 0, 150, 0, 0, 151, 0, 0, 152, 0, 0, 153, 0, 0, 154, 0, 0, 155,
    0, 0, 156, 0, 0, 0, 0, 157, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 160, 0, 0, 0, 0, 161,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 165, 0, 0,
    0, 166, 0, 167, 0, 168, 0, 169, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 171, 0, 172, 0, 0, 0, 0, 173, 174, 0, 0,
    0, 0, 0, 0, 175, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0,
    179, 0, 0, 0, 180, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 183, 0, 0, 184, 0, 0, 0, 0,
    0, 0, 0, 0, 185, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0,
    0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 190, 0, 191, 0, 192, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 196, 0, 0, 0, 0, 0, 197, 0, 0, 0,
    0, 198, 0, 0, 199, 0, 200, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203,
    0, 0, 0, 204, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 207, 0, 208, 0, 209, 0, 210, 0, 211, 0, 212,
    0, 213, 0, 214, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    217, 0, 0, 0, 218, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 220, 0, 0, 0, 221, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 225, 0, 226, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0,
    0, 228, 0, 229, 0, 0, 0, 230, 0, 0, 0, 0, 231, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 234, 0,
    235, 0, 0, 0, 0, 236, 0, 237, 0, 0, 0, 0, 238, 0, 239, 0, 0, 0, 0, 240, 0, 241, 0, 0, 0, 0, 242, 0, 243, 0, 0, 0,
    0, 0, 0, 0, 0, 244, 0, 245, 0, 0, 0, 0, 0, 0, 246, 0, 247, 0, 0, 0, 0, 248, 0, 249, 0, 0, 0, 0, 0, 0, 250, 0,
    251, 0, 0, 0, 0, 0, 0, 252, 0, 253, 0, 0, 0, 0, 0, 0, 254, 0, 255, 0, 0, 0, 0, 0, 0, 256, 0, 257, 0, 0, 0, 0,
    0, 0, 0, 0, 258, 0, 259, 0, 0, 0, 0, 260, 0, 261, 0, 0, 0, 0, 262, 0, 263, 0, 0, 0, 0, 264, 0, 265, 0, 0, 0, 0,
    0, 0, 266, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 271, 0, 0, 0, 0, 0,
    0, 0, 0, 272, 0, 273, 0, 0, 0, 0, 274, 0, 275, 0, 0, 0, 0, 0, 0, 276, 0, 277, 0, 0, 0, 0, 278, 0, 279, 0, 0, 0,
    0, 0, 0, 280, 0, 281, 0, 0, 0, 0, 0, 0, 282, 0, 283, 284, 0, 0, 285, 0, 0, 0, 286, 0, 0, 0, 287, 288, 0, 0, 0, 289,
    290, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 293, 0, 0, 294, 0,
    0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 298, 0, 299, 0,
    0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0,
    0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 313, 0, 0, 0, 314, 0, 0, 0, 315, 0,
    0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 318, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 320, 0, 321, 0, 0,
    0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 324, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 326, 0, 0,
    327, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 330, 0, 0, 0, 331, 0, 0, 0, 332, 0, 0, 0,
    0, 0, 333, 0, 0, 334, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 337, 0, 338, 0, 0, 0, 0, 339, 0, 0, 0, 340, 0, 0, 0, 341, 0, 0, 342, 0, 343, 0, 0, 344, 0, 345, 0, 0,
    0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 348, 0, 0, 0, 349, 350, 0, 0, 351, 0, 352, 0, 353, 0, 354, 355, 0,
    356, 0, 357, 0, 0, 358, 0, 359, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0,
    0, 363, 0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0,
    0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0,
    371, 0, 372, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 374, 0, 0, 0, 375, 0, 0, 0, 0, 0, 376, 0, 0, 377, 0, 0, 378,
    0, 0, 379, 0, 0, 380, 0, 0, 381, 0, 0, 382, 0, 0, 383, 384, 0, 0, 0, 0, 385, 0, 0, 0, 0, 0, 0, 0, 0, 0, 386, 0,
    387, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 388, 0, 0, 389, 0, 0, 0, 390, 0, 0, 391, 0, 0, 392, 0,
    393, 0, 394, 0, 395, 0, 0, 396, 0, 0, 0, 0, 397, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 398, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 399, 0, 0, 0, 0, 400, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 401, 0, 0, 0, 0, 0, 0, 402, 0, 0, 0, 0, 0, 403, 0, 0, 404, 0,
    405, 0, 0, 0, 0, 406, 0, 0, 0, 0, 407, 0, 0, 0, 0, 408, 0, 409, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    410, 0, 0, 0, 411, 0, 412, 0, 0, 0, 0, 0, 0, 0, 413, 0, 0, 414, 0, 0, 0, 0, 0, 0, 415, 0, 416, 0, 0, 417, 0, 418,
    0, 0, 0, 0, 0, 0, 0, 419, 0, 0, 420, 0, 421, 0, 0, 422, 0, 423, 0, 0, 0, 0, 424, 0, 0, 0, 425, 0, 426, 427, 0, 0,
    0, 0, 0, 428, 0, 0, 429, 0, 0, 0, 430, 0, 0, 431, 0, 432, 0, 0, 0, 0, 0, 433, 0, 0, 434, 0, 435, 0, 0, 0, 436, 0,
    437, 438, 0, 0, 0, 0, 0, 0, 439, 0, 0, 440, 0, 0, 0, 441, 0, 0, 442, 0, 443, 0, 444, 0, 0, 0, 0, 0, 0, 0, 445, 0,
    0, 0, 0, 0, 0, 0, 446, 0, 0, 0, 0, 0, 0, 447, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 448, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 449, 0, 0, 0, 0, 0, 450, 0, 0, 0, 0, 0, 0, 0, 451, 0, 0, 452, 0, 0, 453, 0, 454, 0, 0, 0,
    0, 455, 0, 0, 0, 456, 0, 457, 458, 0, 0, 0, 0, 0, 459, 0, 0, 460, 0, 0, 0, 461, 0, 0, 462, 0, 463, 0, 464, 0, 0, 465,
    0, 466, 0, 0, 0, 467, 0, 468, 469, 0, 0, 0, 0, 0, 0, 470, 0, 0, 471, 0, 0, 0, 472, 0, 0, 473, 0, 474, 0, 0, 0, 0,
    475, 0, 476, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 477, 0, 0, 0, 0, 0, 478,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 479, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 480, 0, 0, 0,
    0, 481, 0, 0, 482, 0, 0, 0, 0, 483, 0, 0, 484, 0, 0, 0, 0, 485, 0, 486, 0, 0, 487, 0, 0, 488, 0, 0, 489, 0, 0, 490,
    0, 0, 491, 0, 0, 492, 0, 0, 493, 0, 0, 494, 0, 0, 495, 0, 0, 496, 0, 0, 497, 0, 0, 498, 0, 0, 499, 0, 0, 500, 0, 0,
    501, 0, 0, 502, 0, 0, 0, 0, 503, 0, 0, 0, 504, 0, 0, 0, 505, 0, 0, 0, 506, 0, 0, 0, 507, 0, 0, 0, 508, 0, 0, 0,
    509, 0, 0, 0, 510, 0, 511, 0, 0, 0, 512, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 513, 0, 514, 0, 0, 0, 0, 0, 0, 515,
    0, 516, 0, 0, 0, 0, 0, 0, 0, 517, 0, 0, 0, 518, 0, 0, 519, 0, 0, 0, 0, 520, 0, 0, 0, 0, 0, 0, 0, 0, 0, 521,
    0, 522, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 523, 0, 524, 525, 0, 0, 0, 0, 0, 526, 0, 0, 0, 0, 0, 0, 0, 0,
    527, 0, 0, 0, 528, 0, 0, 529, 0, 530, 531, 0, 0, 0, 0, 0, 532, 0, 0, 0, 0, 533, 0, 0, 534, 0, 535, 0, 0, 536, 0, 537,
    0, 538, 0, 0, 0, 0, 539, 0, 540, 0, 0, 0, 0, 541, 0, 542, 0, 0, 543, 0, 544, 0, 0, 0, 0, 0, 0, 0, 545, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 546, 0, 0, 547, 0, 548, 0, 0, 0, 549, 0, 550, 0, 0, 551, 0, 0, 552, 0, 0,
    553, 554, 0, 0, 0, 0, 0, 0, 0, 0, 555, 0, 556, 0, 557, 0, 0, 558, 0, 0, 559, 0, 0, 560, 561, 0, 0, 0, 0, 0, 562, 0,
    0, 563, 0, 0, 564, 0, 0, 565, 566, 0, 0, 0, 0, 567, 0, 0, 0, 0, 0, 568, 0, 0, 569, 570, 0, 571, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 572, 0, 0, 0, 0, 0, 0, 0, 0, 0, 573, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 574, 0, 0, 0, 0, 0, 0, 0, 575, 0, 576, 0, 577, 0, 0, 578, 0, 0, 579, 0, 580, 581, 0, 582, 0, 0,
    583, 0, 0, 584, 0, 585, 586, 587, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 588, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 589, 0, 0,
    590, 0, 0, 591, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 592, 0, 0, 593, 0, 0, 594, 0, 595, 596, 0, 597, 0, 598, 0, 0, 0,
    0, 0, 0, 0, 0, 599, 0, 0, 0, 0, 0, 0, 600, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 601, 0, 0, 0, 0, 602, 0, 0,
    0, 603, 0, 0, 0, 0, 604, 0, 0, 0, 605, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 606, 0, 0, 0, 0, 607, 0, 608,
    0, 0, 0, 0, 0, 609, 0, 0, 0, 610, 0, 0, 0, 0, 0, 0, 0, 0, 611, 0, 0, 0, 0, 0, 612, 0, 0, 613, 0, 0, 0, 614,
    0, 0, 0, 0, 0, 615, 0, 616, 617, 0, 0, 618, 0, 0, 0, 0, 0, 0, 0, 619, 0, 0, 0, 0, 620, 0, 0, 621, 0, 0, 0, 0,
    622, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623, 0, 0, 0, 624, 0, 0, 0, 625, 0, 0, 0, 626, 0, 0, 627, 0, 0,
    628, 0, 0, 0, 0, 0, 0, 629, 0, 630, 0, 631, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 632, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    633, 0, 0, 634, 0, 635, 0, 0, 636, 0, 637, 0, 0, 638, 0, 639, 0, 0, 640, 0, 641, 0, 642, 0, 0, 643, 0, 0, 0, 644, 0, 0,
    0, 645, 0, 0, 0, 0, 646, 647, 0, 0, 0, 0, 0, 0, 0, 648, 0, 0, 0, 0, 0, 0, 0, 0, 649, 0, 0, 650, 0, 651, 0, 0,
    652, 0, 0, 0, 653, 0, 0, 0, 654, 0, 0, 0, 655, 0, 0, 656, 0, 0, 0, 0, 657, 0, 658, 0, 659, 0, 0, 660, 0, 661, 0, 662,
    0, 0, 663, 664, 0, 0, 0, 0, 0, 665, 0, 0, 0, 0, 0, 0, 0, 0, 666, 0, 0, 667, 0, 668, 0, 0, 669, 0, 0, 670, 0, 0,
    0, 671, 0, 0, 0, 0, 0, 672, 0, 673, 0, 674, 0, 0, 675, 0, 676, 0, 0, 677, 0, 678, 0, 679, 0, 0, 0, 680, 0, 0, 681, 682,
    0, 0, 0, 0, 0, 0, 683, 0, 0, 0, 0, 0, 0, 0, 0, 684, 0, 0, 685, 0, 686, 0, 0, 687, 0, 688, 0, 689, 0, 690, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 691, 0, 0, 692, 0, 693, 0, 694, 0, 695, 0, 0, 696, 0, 0, 697,
};
void recomp_unit_0172_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08AB4004u;
        entry_id = (entry_delta < 16360u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0172[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08AB4004;
    case 2u: goto L_08AB4010;
    case 3u: goto L_08AB4028;
    case 4u: goto L_08AB4068;
    case 5u: goto L_08AB4074;
    case 6u: goto L_08AB40A4;
    case 7u: goto L_08AB40B0;
    case 8u: goto L_08AB40DC;
    case 9u: goto L_08AB40F0;
    case 10u: goto L_08AB40F8;
    case 11u: goto L_08AB40FC;
    case 12u: goto L_08AB4128;
    case 13u: goto L_08AB4134;
    case 14u: goto L_08AB414C;
    case 15u: goto L_08AB4170;
    case 16u: goto L_08AB4178;
    case 17u: goto L_08AB4188;
    case 18u: goto L_08AB4190;
    case 19u: goto L_08AB4194;
    case 20u: goto L_08AB41D8;
    case 21u: goto L_08AB41EC;
    case 22u: goto L_08AB420C;
    case 23u: goto L_08AB4258;
    case 24u: goto L_08AB4284;
    case 25u: goto L_08AB42C8;
    case 26u: goto L_08AB42F8;
    case 27u: goto L_08AB4338;
    case 28u: goto L_08AB4398;
    case 29u: goto L_08AB43A8;
    case 30u: goto L_08AB43B4;
    case 31u: goto L_08AB4520;
    case 32u: goto L_08AB4690;
    case 33u: goto L_08AB46B4;
    case 34u: goto L_08AB46B8;
    case 35u: goto L_08AB46C0;
    case 36u: goto L_08AB46CC;
    case 37u: goto L_08AB46D4;
    case 38u: goto L_08AB46E0;
    case 39u: goto L_08AB46EC;
    case 40u: goto L_08AB46F8;
    case 41u: goto L_08AB46FC;
    case 42u: goto L_08AB4700;
    case 43u: goto L_08AB4708;
    case 44u: goto L_08AB472C;
    case 45u: goto L_08AB4758;
    case 46u: goto L_08AB4760;
    case 47u: goto L_08AB4768;
    case 48u: goto L_08AB47C0;
    case 49u: goto L_08AB47D4;
    case 50u: goto L_08AB4840;
    case 51u: goto L_08AB4850;
    case 52u: goto L_08AB485C;
    case 53u: goto L_08AB4868;
    case 54u: goto L_08AB4874;
    case 55u: goto L_08AB4878;
    case 56u: goto L_08AB487C;
    case 57u: goto L_08AB4884;
    case 58u: goto L_08AB48B8;
    case 59u: goto L_08AB4924;
    case 60u: goto L_08AB492C;
    case 61u: goto L_08AB4944;
    case 62u: goto L_08AB4954;
    case 63u: goto L_08AB4994;
    case 64u: goto L_08AB49C0;
    case 65u: goto L_08AB4A68;
    case 66u: goto L_08AB4A70;
    case 67u: goto L_08AB4A7C;
    case 68u: goto L_08AB4AD4;
    case 69u: goto L_08AB4AE8;
    case 70u: goto L_08AB4AEC;
    case 71u: goto L_08AB4D94;
    case 72u: goto L_08AB4DB0;
    case 73u: goto L_08AB4DD8;
    case 74u: goto L_08AB4E0C;
    case 75u: goto L_08AB4EB0;
    case 76u: goto L_08AB4EC8;
    case 77u: goto L_08AB4EE0;
    case 78u: goto L_08AB4EEC;
    case 79u: goto L_08AB4F14;
    case 80u: goto L_08AB4F20;
    case 81u: goto L_08AB4F3C;
    case 82u: goto L_08AB4F48;
    case 83u: goto L_08AB4F64;
    case 84u: goto L_08AB4F70;
    case 85u: goto L_08AB4F8C;
    case 86u: goto L_08AB4F98;
    case 87u: goto L_08AB4FB4;
    case 88u: goto L_08AB4FC0;
    case 89u: goto L_08AB4FDC;
    case 90u: goto L_08AB4FE8;
    case 91u: goto L_08AB4FF4;
    case 92u: goto L_08AB4FFC;
    case 93u: goto L_08AB5010;
    case 94u: goto L_08AB5020;
    case 95u: goto L_08AB5038;
    case 96u: goto L_08AB5058;
    case 97u: goto L_08AB506C;
    case 98u: goto L_08AB5080;
    case 99u: goto L_08AB50B0;
    case 100u: goto L_08AB50C0;
    case 101u: goto L_08AB50D4;
    case 102u: goto L_08AB50E8;
    case 103u: goto L_08AB50FC;
    case 104u: goto L_08AB510C;
    case 105u: goto L_08AB512C;
    case 106u: goto L_08AB514C;
    case 107u: goto L_08AB5160;
    case 108u: goto L_08AB5174;
    case 109u: goto L_08AB51A4;
    case 110u: goto L_08AB51B4;
    case 111u: goto L_08AB51C8;
    case 112u: goto L_08AB51D8;
    case 113u: goto L_08AB51F8;
    case 114u: goto L_08AB522C;
    case 115u: goto L_08AB523C;
    case 116u: goto L_08AB5250;
    case 117u: goto L_08AB5260;
    case 118u: goto L_08AB5268;
    case 119u: goto L_08AB5270;
    case 120u: goto L_08AB5278;
    case 121u: goto L_08AB5280;
    case 122u: goto L_08AB528C;
    case 123u: goto L_08AB5294;
    case 124u: goto L_08AB52A0;
    case 125u: goto L_08AB52A8;
    case 126u: goto L_08AB52B8;
    case 127u: goto L_08AB52C8;
    case 128u: goto L_08AB52D8;
    case 129u: goto L_08AB52F0;
    case 130u: goto L_08AB5300;
    case 131u: goto L_08AB5324;
    case 132u: goto L_08AB5350;
    case 133u: goto L_08AB535C;
    case 134u: goto L_08AB5368;
    case 135u: goto L_08AB5374;
    case 136u: goto L_08AB5380;
    case 137u: goto L_08AB538C;
    case 138u: goto L_08AB5398;
    case 139u: goto L_08AB53A4;
    case 140u: goto L_08AB53B0;
    case 141u: goto L_08AB53BC;
    case 142u: goto L_08AB53C8;
    case 143u: goto L_08AB53D4;
    case 144u: goto L_08AB53E8;
    case 145u: goto L_08AB540C;
    case 146u: goto L_08AB5418;
    case 147u: goto L_08AB5420;
    case 148u: goto L_08AB542C;
    case 149u: goto L_08AB5438;
    case 150u: goto L_08AB5444;
    case 151u: goto L_08AB5450;
    case 152u: goto L_08AB545C;
    case 153u: goto L_08AB5468;
    case 154u: goto L_08AB5474;
    case 155u: goto L_08AB5480;
    case 156u: goto L_08AB548C;
    case 157u: goto L_08AB54A0;
    case 158u: goto L_08AB54B0;
    case 159u: goto L_08AB54DC;
    case 160u: goto L_08AB54EC;
    case 161u: goto L_08AB5500;
    case 162u: goto L_08AB552C;
    case 163u: goto L_08AB5544;
    case 164u: goto L_08AB5568;
    case 165u: goto L_08AB5578;
    case 166u: goto L_08AB5588;
    case 167u: goto L_08AB5590;
    case 168u: goto L_08AB5598;
    case 169u: goto L_08AB55A0;
    case 170u: goto L_08AB55C0;
    case 171u: goto L_08AB55D8;
    case 172u: goto L_08AB55E0;
    case 173u: goto L_08AB55F4;
    case 174u: goto L_08AB55F8;
    case 175u: goto L_08AB5614;
    case 176u: goto L_08AB5628;
    case 177u: goto L_08AB5648;
    case 178u: goto L_08AB567C;
    case 179u: goto L_08AB5684;
    case 180u: goto L_08AB5694;
    case 181u: goto L_08AB569C;
    case 182u: goto L_08AB56D8;
    case 183u: goto L_08AB56E4;
    case 184u: goto L_08AB56F0;
    case 185u: goto L_08AB5714;
    case 186u: goto L_08AB5724;
    case 187u: goto L_08AB5778;
    case 188u: goto L_08AB5794;
    case 189u: goto L_08AB57BC;
    case 190u: goto L_08AB57C8;
    case 191u: goto L_08AB57D0;
    case 192u: goto L_08AB57D8;
    case 193u: goto L_08AB57DC;
    case 194u: goto L_08AB5808;
    case 195u: goto L_08AB584C;
    case 196u: goto L_08AB585C;
    case 197u: goto L_08AB5874;
    case 198u: goto L_08AB5888;
    case 199u: goto L_08AB5894;
    case 200u: goto L_08AB589C;
    case 201u: goto L_08AB58A0;
    case 202u: goto L_08AB58CC;
    case 203u: goto L_08AB5900;
    case 204u: goto L_08AB5910;
    case 205u: goto L_08AB5924;
    case 206u: goto L_08AB594C;
    case 207u: goto L_08AB5958;
    case 208u: goto L_08AB5960;
    case 209u: goto L_08AB5968;
    case 210u: goto L_08AB5970;
    case 211u: goto L_08AB5978;
    case 212u: goto L_08AB5980;
    case 213u: goto L_08AB5988;
    case 214u: goto L_08AB5990;
    case 215u: goto L_08AB5994;
    case 216u: goto L_08AB59C0;
    case 217u: goto L_08AB5A04;
    case 218u: goto L_08AB5A14;
    case 219u: goto L_08AB5A2C;
    case 220u: goto L_08AB5A40;
    case 221u: goto L_08AB5A50;
    case 222u: goto L_08AB5A58;
    case 223u: goto L_08AB5A84;
    case 224u: goto L_08AB5AB8;
    case 225u: goto L_08AB5AC8;
    case 226u: goto L_08AB5AD0;
    case 227u: goto L_08AB5AE4;
    case 228u: goto L_08AB5B08;
    case 229u: goto L_08AB5B10;
    case 230u: goto L_08AB5B20;
    case 231u: goto L_08AB5B34;
    case 232u: goto L_08AB5B48;
    case 233u: goto L_08AB5B60;
    case 234u: goto L_08AB5B7C;
    case 235u: goto L_08AB5B84;
    case 236u: goto L_08AB5B98;
    case 237u: goto L_08AB5BA0;
    case 238u: goto L_08AB5BB4;
    case 239u: goto L_08AB5BBC;
    case 240u: goto L_08AB5BD0;
    case 241u: goto L_08AB5BD8;
    case 242u: goto L_08AB5BEC;
    case 243u: goto L_08AB5BF4;
    case 244u: goto L_08AB5C18;
    case 245u: goto L_08AB5C20;
    case 246u: goto L_08AB5C3C;
    case 247u: goto L_08AB5C44;
    case 248u: goto L_08AB5C58;
    case 249u: goto L_08AB5C60;
    case 250u: goto L_08AB5C7C;
    case 251u: goto L_08AB5C84;
    case 252u: goto L_08AB5CA0;
    case 253u: goto L_08AB5CA8;
    case 254u: goto L_08AB5CC4;
    case 255u: goto L_08AB5CCC;
    case 256u: goto L_08AB5CE8;
    case 257u: goto L_08AB5CF0;
    case 258u: goto L_08AB5D14;
    case 259u: goto L_08AB5D1C;
    case 260u: goto L_08AB5D30;
    case 261u: goto L_08AB5D38;
    case 262u: goto L_08AB5D4C;
    case 263u: goto L_08AB5D54;
    case 264u: goto L_08AB5D68;
    case 265u: goto L_08AB5D70;
    case 266u: goto L_08AB5D8C;
    case 267u: goto L_08AB5D94;
    case 268u: goto L_08AB5DB8;
    case 269u: goto L_08AB5DC0;
    case 270u: goto L_08AB5DE4;
    case 271u: goto L_08AB5DEC;
    case 272u: goto L_08AB5E10;
    case 273u: goto L_08AB5E18;
    case 274u: goto L_08AB5E2C;
    case 275u: goto L_08AB5E34;
    case 276u: goto L_08AB5E50;
    case 277u: goto L_08AB5E58;
    case 278u: goto L_08AB5E6C;
    case 279u: goto L_08AB5E74;
    case 280u: goto L_08AB5E90;
    case 281u: goto L_08AB5E98;
    case 282u: goto L_08AB5EB4;
    case 283u: goto L_08AB5EBC;
    case 284u: goto L_08AB5EC0;
    case 285u: goto L_08AB5ECC;
    case 286u: goto L_08AB5EDC;
    case 287u: goto L_08AB5EEC;
    case 288u: goto L_08AB5EF0;
    case 289u: goto L_08AB5F00;
    case 290u: goto L_08AB5F04;
    case 291u: goto L_08AB5F0C;
    case 292u: goto L_08AB5F64;
    case 293u: goto L_08AB5F70;
    case 294u: goto L_08AB5F7C;
    case 295u: goto L_08AB5F98;
    case 296u: goto L_08AB5FB0;
    case 297u: goto L_08AB5FD8;
    case 298u: goto L_08AB5FF4;
    case 299u: goto L_08AB5FFC;
    case 300u: goto L_08AB6018;
    case 301u: goto L_08AB6030;
    case 302u: goto L_08AB6044;
    case 303u: goto L_08AB609C;
    case 304u: goto L_08AB60B8;
    case 305u: goto L_08AB60C8;
    case 306u: goto L_08AB60E8;
    case 307u: goto L_08AB6118;
    case 308u: goto L_08AB6150;
    case 309u: goto L_08AB617C;
    case 310u: goto L_08AB619C;
    case 311u: goto L_08AB61B0;
    case 312u: goto L_08AB61C8;
    case 313u: goto L_08AB61DC;
    case 314u: goto L_08AB61EC;
    case 315u: goto L_08AB61FC;
    case 316u: goto L_08AB620C;
    case 317u: goto L_08AB623C;
    case 318u: goto L_08AB6244;
    case 319u: goto L_08AB6258;
    case 320u: goto L_08AB6270;
    case 321u: goto L_08AB6278;
    case 322u: goto L_08AB6288;
    case 323u: goto L_08AB62B8;
    case 324u: goto L_08AB62CC;
    case 325u: goto L_08AB62E0;
    case 326u: goto L_08AB62F8;
    case 327u: goto L_08AB6304;
    case 328u: goto L_08AB6314;
    case 329u: goto L_08AB6340;
    case 330u: goto L_08AB6354;
    case 331u: goto L_08AB6364;
    case 332u: goto L_08AB6374;
    case 333u: goto L_08AB638C;
    case 334u: goto L_08AB6398;
    case 335u: goto L_08AB63B0;
    case 336u: goto L_08AB63D4;
    case 337u: goto L_08AB6494;
    case 338u: goto L_08AB649C;
    case 339u: goto L_08AB64B0;
    case 340u: goto L_08AB64C0;
    case 341u: goto L_08AB64D0;
    case 342u: goto L_08AB64DC;
    case 343u: goto L_08AB64E4;
    case 344u: goto L_08AB64F0;
    case 345u: goto L_08AB64F8;
    case 346u: goto L_08AB6514;
    case 347u: goto L_08AB6534;
    case 348u: goto L_08AB6540;
    case 349u: goto L_08AB6550;
    case 350u: goto L_08AB6554;
    case 351u: goto L_08AB6560;
    case 352u: goto L_08AB6568;
    case 353u: goto L_08AB6570;
    case 354u: goto L_08AB6578;
    case 355u: goto L_08AB657C;
    case 356u: goto L_08AB6584;
    case 357u: goto L_08AB658C;
    case 358u: goto L_08AB6598;
    case 359u: goto L_08AB65A0;
    case 360u: goto L_08AB65BC;
    case 361u: goto L_08AB65CC;
    case 362u: goto L_08AB65F0;
    case 363u: goto L_08AB6608;
    case 364u: goto L_08AB662C;
    case 365u: goto L_08AB664C;
    case 366u: goto L_08AB6670;
    case 367u: goto L_08AB6690;
    case 368u: goto L_08AB66AC;
    case 369u: goto L_08AB66C8;
    case 370u: goto L_08AB66E8;
    case 371u: goto L_08AB6704;
    case 372u: goto L_08AB670C;
    case 373u: goto L_08AB6728;
    case 374u: goto L_08AB6740;
    case 375u: goto L_08AB6750;
    case 376u: goto L_08AB6768;
    case 377u: goto L_08AB6774;
    case 378u: goto L_08AB6780;
    case 379u: goto L_08AB678C;
    case 380u: goto L_08AB6798;
    case 381u: goto L_08AB67A4;
    case 382u: goto L_08AB67B0;
    case 383u: goto L_08AB67BC;
    case 384u: goto L_08AB67C0;
    case 385u: goto L_08AB67D4;
    case 386u: goto L_08AB67FC;
    case 387u: goto L_08AB6804;
    case 388u: goto L_08AB6848;
    case 389u: goto L_08AB6854;
    case 390u: goto L_08AB6864;
    case 391u: goto L_08AB6870;
    case 392u: goto L_08AB687C;
    case 393u: goto L_08AB6884;
    case 394u: goto L_08AB688C;
    case 395u: goto L_08AB6894;
    case 396u: goto L_08AB68A0;
    case 397u: goto L_08AB68B4;
    case 398u: goto L_08AB68FC;
    case 399u: goto L_08AB6AB0;
    case 400u: goto L_08AB6AC4;
    case 401u: goto L_08AB6B3C;
    case 402u: goto L_08AB6B58;
    case 403u: goto L_08AB6B70;
    case 404u: goto L_08AB6B7C;
    case 405u: goto L_08AB6B84;
    case 406u: goto L_08AB6B98;
    case 407u: goto L_08AB6BAC;
    case 408u: goto L_08AB6BC0;
    case 409u: goto L_08AB6BC8;
    case 410u: goto L_08AB6C04;
    case 411u: goto L_08AB6C14;
    case 412u: goto L_08AB6C1C;
    case 413u: goto L_08AB6C3C;
    case 414u: goto L_08AB6C48;
    case 415u: goto L_08AB6C64;
    case 416u: goto L_08AB6C6C;
    case 417u: goto L_08AB6C78;
    case 418u: goto L_08AB6C80;
    case 419u: goto L_08AB6CA0;
    case 420u: goto L_08AB6CAC;
    case 421u: goto L_08AB6CB4;
    case 422u: goto L_08AB6CC0;
    case 423u: goto L_08AB6CC8;
    case 424u: goto L_08AB6CDC;
    case 425u: goto L_08AB6CEC;
    case 426u: goto L_08AB6CF4;
    case 427u: goto L_08AB6CF8;
    case 428u: goto L_08AB6D10;
    case 429u: goto L_08AB6D1C;
    case 430u: goto L_08AB6D2C;
    case 431u: goto L_08AB6D38;
    case 432u: goto L_08AB6D40;
    case 433u: goto L_08AB6D58;
    case 434u: goto L_08AB6D64;
    case 435u: goto L_08AB6D6C;
    case 436u: goto L_08AB6D7C;
    case 437u: goto L_08AB6D84;
    case 438u: goto L_08AB6D88;
    case 439u: goto L_08AB6DA4;
    case 440u: goto L_08AB6DB0;
    case 441u: goto L_08AB6DC0;
    case 442u: goto L_08AB6DCC;
    case 443u: goto L_08AB6DD4;
    case 444u: goto L_08AB6DDC;
    case 445u: goto L_08AB6DFC;
    case 446u: goto L_08AB6E1C;
    case 447u: goto L_08AB6E38;
    case 448u: goto L_08AB6E64;
    case 449u: goto L_08AB6E9C;
    case 450u: goto L_08AB6EB4;
    case 451u: goto L_08AB6ED4;
    case 452u: goto L_08AB6EE0;
    case 453u: goto L_08AB6EEC;
    case 454u: goto L_08AB6EF4;
    case 455u: goto L_08AB6F08;
    case 456u: goto L_08AB6F18;
    case 457u: goto L_08AB6F20;
    case 458u: goto L_08AB6F24;
    case 459u: goto L_08AB6F3C;
    case 460u: goto L_08AB6F48;
    case 461u: goto L_08AB6F58;
    case 462u: goto L_08AB6F64;
    case 463u: goto L_08AB6F6C;
    case 464u: goto L_08AB6F74;
    case 465u: goto L_08AB6F80;
    case 466u: goto L_08AB6F88;
    case 467u: goto L_08AB6F98;
    case 468u: goto L_08AB6FA0;
    case 469u: goto L_08AB6FA4;
    case 470u: goto L_08AB6FC0;
    case 471u: goto L_08AB6FCC;
    case 472u: goto L_08AB6FDC;
    case 473u: goto L_08AB6FE8;
    case 474u: goto L_08AB6FF0;
    case 475u: goto L_08AB7004;
    case 476u: goto L_08AB700C;
    case 477u: goto L_08AB7068;
    case 478u: goto L_08AB7080;
    case 479u: goto L_08AB7148;
    case 480u: goto L_08AB7174;
    case 481u: goto L_08AB7188;
    case 482u: goto L_08AB7194;
    case 483u: goto L_08AB71A8;
    case 484u: goto L_08AB71B4;
    case 485u: goto L_08AB71C8;
    case 486u: goto L_08AB71D0;
    case 487u: goto L_08AB71DC;
    case 488u: goto L_08AB71E8;
    case 489u: goto L_08AB71F4;
    case 490u: goto L_08AB7200;
    case 491u: goto L_08AB720C;
    case 492u: goto L_08AB7218;
    case 493u: goto L_08AB7224;
    case 494u: goto L_08AB7230;
    case 495u: goto L_08AB723C;
    case 496u: goto L_08AB7248;
    case 497u: goto L_08AB7254;
    case 498u: goto L_08AB7260;
    case 499u: goto L_08AB726C;
    case 500u: goto L_08AB7278;
    case 501u: goto L_08AB7284;
    case 502u: goto L_08AB7290;
    case 503u: goto L_08AB72A4;
    case 504u: goto L_08AB72B4;
    case 505u: goto L_08AB72C4;
    case 506u: goto L_08AB72D4;
    case 507u: goto L_08AB72E4;
    case 508u: goto L_08AB72F4;
    case 509u: goto L_08AB7304;
    case 510u: goto L_08AB7314;
    case 511u: goto L_08AB731C;
    case 512u: goto L_08AB732C;
    case 513u: goto L_08AB735C;
    case 514u: goto L_08AB7364;
    case 515u: goto L_08AB7380;
    case 516u: goto L_08AB7388;
    case 517u: goto L_08AB73A8;
    case 518u: goto L_08AB73B8;
    case 519u: goto L_08AB73C4;
    case 520u: goto L_08AB73D8;
    case 521u: goto L_08AB7400;
    case 522u: goto L_08AB7408;
    case 523u: goto L_08AB743C;
    case 524u: goto L_08AB7444;
    case 525u: goto L_08AB7448;
    case 526u: goto L_08AB7460;
    case 527u: goto L_08AB7484;
    case 528u: goto L_08AB7494;
    case 529u: goto L_08AB74A0;
    case 530u: goto L_08AB74A8;
    case 531u: goto L_08AB74AC;
    case 532u: goto L_08AB74C4;
    case 533u: goto L_08AB74D8;
    case 534u: goto L_08AB74E4;
    case 535u: goto L_08AB74EC;
    case 536u: goto L_08AB74F8;
    case 537u: goto L_08AB7500;
    case 538u: goto L_08AB7508;
    case 539u: goto L_08AB751C;
    case 540u: goto L_08AB7524;
    case 541u: goto L_08AB7538;
    case 542u: goto L_08AB7540;
    case 543u: goto L_08AB754C;
    case 544u: goto L_08AB7554;
    case 545u: goto L_08AB7574;
    case 546u: goto L_08AB75B4;
    case 547u: goto L_08AB75C0;
    case 548u: goto L_08AB75C8;
    case 549u: goto L_08AB75D8;
    case 550u: goto L_08AB75E0;
    case 551u: goto L_08AB75EC;
    case 552u: goto L_08AB75F8;
    case 553u: goto L_08AB7604;
    case 554u: goto L_08AB7608;
    case 555u: goto L_08AB762C;
    case 556u: goto L_08AB7634;
    case 557u: goto L_08AB763C;
    case 558u: goto L_08AB7648;
    case 559u: goto L_08AB7654;
    case 560u: goto L_08AB7660;
    case 561u: goto L_08AB7664;
    case 562u: goto L_08AB767C;
    case 563u: goto L_08AB7688;
    case 564u: goto L_08AB7694;
    case 565u: goto L_08AB76A0;
    case 566u: goto L_08AB76A4;
    case 567u: goto L_08AB76B8;
    case 568u: goto L_08AB76D0;
    case 569u: goto L_08AB76DC;
    case 570u: goto L_08AB76E0;
    case 571u: goto L_08AB76E8;
    case 572u: goto L_08AB7728;
    case 573u: goto L_08AB7750;
    case 574u: goto L_08AB779C;
    case 575u: goto L_08AB77BC;
    case 576u: goto L_08AB77C4;
    case 577u: goto L_08AB77CC;
    case 578u: goto L_08AB77D8;
    case 579u: goto L_08AB77E4;
    case 580u: goto L_08AB77EC;
    case 581u: goto L_08AB77F0;
    case 582u: goto L_08AB77F8;
    case 583u: goto L_08AB7804;
    case 584u: goto L_08AB7810;
    case 585u: goto L_08AB7818;
    case 586u: goto L_08AB781C;
    case 587u: goto L_08AB7820;
    case 588u: goto L_08AB7854;
    case 589u: goto L_08AB78F8;
    case 590u: goto L_08AB7904;
    case 591u: goto L_08AB7910;
    case 592u: goto L_08AB7940;
    case 593u: goto L_08AB794C;
    case 594u: goto L_08AB7958;
    case 595u: goto L_08AB7960;
    case 596u: goto L_08AB7964;
    case 597u: goto L_08AB796C;
    case 598u: goto L_08AB7974;
    case 599u: goto L_08AB7998;
    case 600u: goto L_08AB79B4;
    case 601u: goto L_08AB79E4;
    case 602u: goto L_08AB79F8;
    case 603u: goto L_08AB7A08;
    case 604u: goto L_08AB7A1C;
    case 605u: goto L_08AB7A2C;
    case 606u: goto L_08AB7A64;
    case 607u: goto L_08AB7A78;
    case 608u: goto L_08AB7A80;
    case 609u: goto L_08AB7A98;
    case 610u: goto L_08AB7AA8;
    case 611u: goto L_08AB7ACC;
    case 612u: goto L_08AB7AE4;
    case 613u: goto L_08AB7AF0;
    case 614u: goto L_08AB7B00;
    case 615u: goto L_08AB7B18;
    case 616u: goto L_08AB7B20;
    case 617u: goto L_08AB7B24;
    case 618u: goto L_08AB7B30;
    case 619u: goto L_08AB7B50;
    case 620u: goto L_08AB7B64;
    case 621u: goto L_08AB7B70;
    case 622u: goto L_08AB7B84;
    case 623u: goto L_08AB7BBC;
    case 624u: goto L_08AB7BCC;
    case 625u: goto L_08AB7BDC;
    case 626u: goto L_08AB7BEC;
    case 627u: goto L_08AB7BF8;
    case 628u: goto L_08AB7C04;
    case 629u: goto L_08AB7C20;
    case 630u: goto L_08AB7C28;
    case 631u: goto L_08AB7C30;
    case 632u: goto L_08AB7C5C;
    case 633u: goto L_08AB7C84;
    case 634u: goto L_08AB7C90;
    case 635u: goto L_08AB7C98;
    case 636u: goto L_08AB7CA4;
    case 637u: goto L_08AB7CAC;
    case 638u: goto L_08AB7CB8;
    case 639u: goto L_08AB7CC0;
    case 640u: goto L_08AB7CCC;
    case 641u: goto L_08AB7CD4;
    case 642u: goto L_08AB7CDC;
    case 643u: goto L_08AB7CE8;
    case 644u: goto L_08AB7CF8;
    case 645u: goto L_08AB7D08;
    case 646u: goto L_08AB7D1C;
    case 647u: goto L_08AB7D20;
    case 648u: goto L_08AB7D40;
    case 649u: goto L_08AB7D64;
    case 650u: goto L_08AB7D70;
    case 651u: goto L_08AB7D78;
    case 652u: goto L_08AB7D84;
    case 653u: goto L_08AB7D94;
    case 654u: goto L_08AB7DA4;
    case 655u: goto L_08AB7DB4;
    case 656u: goto L_08AB7DC0;
    case 657u: goto L_08AB7DD4;
    case 658u: goto L_08AB7DDC;
    case 659u: goto L_08AB7DE4;
    case 660u: goto L_08AB7DF0;
    case 661u: goto L_08AB7DF8;
    case 662u: goto L_08AB7E00;
    case 663u: goto L_08AB7E0C;
    case 664u: goto L_08AB7E10;
    case 665u: goto L_08AB7E28;
    case 666u: goto L_08AB7E4C;
    case 667u: goto L_08AB7E58;
    case 668u: goto L_08AB7E60;
    case 669u: goto L_08AB7E6C;
    case 670u: goto L_08AB7E78;
    case 671u: goto L_08AB7E88;
    case 672u: goto L_08AB7EA0;
    case 673u: goto L_08AB7EA8;
    case 674u: goto L_08AB7EB0;
    case 675u: goto L_08AB7EBC;
    case 676u: goto L_08AB7EC4;
    case 677u: goto L_08AB7ED0;
    case 678u: goto L_08AB7ED8;
    case 679u: goto L_08AB7EE0;
    case 680u: goto L_08AB7EF0;
    case 681u: goto L_08AB7EFC;
    case 682u: goto L_08AB7F00;
    case 683u: goto L_08AB7F1C;
    case 684u: goto L_08AB7F40;
    case 685u: goto L_08AB7F4C;
    case 686u: goto L_08AB7F54;
    case 687u: goto L_08AB7F60;
    case 688u: goto L_08AB7F68;
    case 689u: goto L_08AB7F70;
    case 690u: goto L_08AB7F78;
    case 691u: goto L_08AB7FAC;
    case 692u: goto L_08AB7FB8;
    case 693u: goto L_08AB7FC0;
    case 694u: goto L_08AB7FC8;
    case 695u: goto L_08AB7FD0;
    case 696u: goto L_08AB7FDC;
    case 697u: goto L_08AB7FE8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08AB4004:
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(27368), 0u);
    ctx.gpr[4] = (0u | 0u);
    goto L_08AB4010;
L_08AB4010:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08AB4010;
      }
      goto L_08AB4028;
    }
L_08AB4028:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(27336), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(27340), ctx.gpr[30]);
    ctx.gpr[16] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(27344), ctx.gpr[23]);
    ctx.gpr[5] = (ctx.gpr[30] ^ 480u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(27348), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[23] ^ 272u);
    ctx.gpr[4] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    ctx.gpr[23] = (2229u << 16u);
    ctx.gpr[31] = (0x08AB4068u);
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(27364), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.pc = 0x08B0B914u;
    return;
L_08AB4068:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x08AB4074u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(27324), ctx.gpr[2]);
    ctx.pc = 0x08B0B8F4u;
    return;
L_08AB4074:
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(27328), ctx.gpr[2]);
    ctx.gpr[4] = (2219u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16044));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (2219u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16124));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
    ctx.gpr[31] = (0x08AB40A4u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.pc = 0x08B0B8FCu;
    return;
L_08AB40A4:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x08AB40B0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(27316), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 528u, 0x08AB2EC0u>(ctx, &aot_mem) && ctx.pc == 0x08AB40B0u) goto L_08AB40B0;
    return;
L_08AB40B0:
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(27304), 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(27364)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(27336)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(27344)));
    ctx.gpr[9] = (9u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(-32768));
    ctx.gpr[6] = (2229u << 16u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[8] = (2229u << 16u);
      if (branch_taken) {
          goto L_08AB4178;
      }
      goto L_08AB40DC;
    }
L_08AB40DC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(27348)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[5] = (ctx.lo);
    { const bool branch_taken = ctx.gpr[30] != ctx.gpr[20];
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[5]);
      if (branch_taken) {
          goto L_08AB40F8;
      }
      goto L_08AB40F0;
    }
L_08AB40F0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
      if (branch_taken) {
          goto L_08AB40FC;
      }
      goto L_08AB40F8;
    }
L_08AB40F8:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    goto L_08AB40FC;
L_08AB40FC:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(27296), ctx.gpr[9]);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[22]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(27312), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(27308), ctx.gpr[4]);
    ctx.gpr[4] = (15u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[31] = (0x08AB4128u);
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 518u, 0x08AB2E08u>(ctx, &aot_mem) && ctx.pc == 0x08AB4128u) goto L_08AB4128;
    return;
L_08AB4128:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[31] = (0x08AB4134u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(27240), ctx.gpr[4]);
    goto L_08AB42F8;
L_08AB4134:
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(27240), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 480u);
    ctx.gpr[31] = (0x08AB414Cu);
    ctx.gpr[6] = (0u | 272u);
    ctx.pc = 0x08B0B8A4u;
    return;
L_08AB414C:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27324)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(27240), ctx.gpr[20]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(27308)));
    ctx.gpr[5] = (0u | 512u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[31] = (0x08AB4170u);
    ctx.gpr[7] = (0u | 1u);
    ctx.pc = 0x08B0B8ACu;
    return;
L_08AB4170:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB420C;
      }
      goto L_08AB4178;
    }
L_08AB4178:
    ctx.gpr[5] = (0u | 512u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(27348), ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[30] != ctx.gpr[20];
    ctx.gpr[4] = (ctx.gpr[4] << 9u);
      if (branch_taken) {
          goto L_08AB4190;
      }
      goto L_08AB4188;
    }
L_08AB4188:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
      if (branch_taken) {
          goto L_08AB4194;
      }
      goto L_08AB4190;
    }
L_08AB4190:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[4]);
    goto L_08AB4194;
L_08AB4194:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(27296));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[9]);
    ctx.gpr[9] = (0u + static_cast<std::uint32_t>(-3));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[9])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[22]);
    ctx.gpr[10] = (ctx.gpr[4] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(27296), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[10] + ctx.gpr[22]);
    ctx.gpr[5] = (24u << 16u);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(27312), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-32768));
    ctx.gpr[6] = (ctx.lo);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(27308), ctx.gpr[22]);
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    ctx.gpr[31] = (0x08AB41D8u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 518u, 0x08AB2E08u>(ctx, &aot_mem) && ctx.pc == 0x08AB41D8u) goto L_08AB41D8;
    return;
L_08AB41D8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(27344)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27340)));
    ctx.gpr[31] = (0x08AB41ECu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.pc = 0x08B0B8A4u;
    return;
L_08AB41EC:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27324)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(27308)));
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(27348)));
    ctx.gpr[31] = (0x08AB420Cu);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(27336)));
    ctx.pc = 0x08B0B8ACu;
    return;
L_08AB420C:
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(27272), 0u);
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(27360), 0u);
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(27229), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(27229));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(27228), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(27232), ctx.gpr[4]);
    ctx.gpr[5] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(27236), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 4u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(27240), ctx.gpr[4]);
    ctx.gpr[31] = (0x08AB4258u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 583u, 0x08AB34F0u>(ctx, &aot_mem) && ctx.pc == 0x08AB4258u) goto L_08AB4258;
    return;
L_08AB4258:
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(27276), 0u);
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(27280), 0u);
    ctx.gpr[4] = (0u | 5u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(27240), ctx.gpr[4]);
    ctx.gpr[5] = (2219u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(15540));
    ctx.gpr[4] = (0u | 15u);
    ctx.gpr[31] = (0x08AB4284u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 290u, 0x08AF94B0u>(ctx, &aot_mem) && ctx.pc == 0x08AB4284u) goto L_08AB4284;
    return;
L_08AB4284:
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(27284), 0u);
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27340)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (17392u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(27344)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.gpr[4] = (17288u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[15];
    ctx.gpr[31] = (0x08AB42C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 866u, 0x08AD3774u>(ctx, &aot_mem) && ctx.pc == 0x08AB42C8u) goto L_08AB42C8;
    return;
L_08AB42C8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB42F8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[22]);
    ctx.gpr[22] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(27368)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08AB4DD8;
      }
      goto L_08AB4338;
    }
L_08AB4338:
    ctx.gpr[4] = (ctx.gpr[4] ^ 1u);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(27368), ctx.gpr[4]);
    ctx.gpr[5] = (17664u << 16u);
    ctx.gpr[21] = (256u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[17] = (2232u << 16u);
    ctx.gpr[23] = (0u | 3u);
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-1));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(13216));
    ctx.gpr[2] = (16896u << 16u);
    ctx.gpr[11] = (17152u << 16u);
    ctx.gpr[8] = (17664u << 16u);
    ctx.gpr[6] = (17920u << 16u);
    ctx.gpr[22] = (2229u << 16u);
    ctx.gpr[10] = (51968u << 16u);
    ctx.gpr[30] = (2229u << 16u);
    ctx.gpr[14] = (2229u << 16u);
    ctx.gpr[13] = (2229u << 16u);
    ctx.gpr[24] = (40960u << 16u);
    ctx.gpr[15] = (43008u << 16u);
    ctx.gpr[9] = (255u << 16u);
    ctx.gpr[20] = (2229u << 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (2229u << 16u);
      if (branch_taken) {
          goto L_08AB43A8;
      }
      goto L_08AB4398;
    }
L_08AB4398:
    ctx.gpr[18] = (2278u << 16u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-13568));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08AB43B4;
      }
      goto L_08AB43A8;
    }
L_08AB43A8:
    ctx.gpr[18] = (2278u << 16u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-11456));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    goto L_08AB43B4;
L_08AB43B4:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.gpr[4] = (52224u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (17264u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[5] >> 8u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (49928u << 16u);
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[5] >> 8u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[11]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[7] >> 8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[7] >> 8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (19456u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(28928));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (19712u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(30592));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (54272u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (54532u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16864));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (5376u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (5636u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(15839));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (7168u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (7680u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(27336)));
    if (ctx.gpr[4] == ctx.gpr[23]) {
    ctx.gpr[16] = (ctx.gpr[23] | 0u);
        goto L_08AB4520;
    }
    goto L_08AB4520;
L_08AB4520:
    ctx.gpr[4] = (49664u << 16u);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (49920u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[16] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[10]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[14] + static_cast<std::uint32_t>(27324)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(27296)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(27348)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[5] & ctx.gpr[21]);
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[24]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] >> 8u);
    ctx.gpr[7] = (ctx.gpr[7] | ctx.gpr[15]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[7] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (47104u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2313));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[10]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (53760u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(27308)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(3));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[21]);
    ctx.gpr[7] = (39936u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] >> 8u);
    ctx.gpr[6] = (40192u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[9]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(512));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (59136u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (8704u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (8960u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (50688u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(263));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[31] = (0x08AB4690u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 133u, 0x088ED0C8u>(ctx, &aot_mem) && ctx.pc == 0x08AB4690u) goto L_08AB4690;
    return;
L_08AB4690:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(7172)));
    ctx.gpr[11] = (22272u << 16u);
    ctx.gpr[2] = (22016u << 16u);
    ctx.gpr[3] = (22528u << 16u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[12] = (21760u << 16u);
      if (branch_taken) {
          goto L_08AB46B8;
      }
      goto L_08AB46B4;
    }
L_08AB46B4:
    ctx.gpr[16] = (0u | 1u);
    goto L_08AB46B8;
L_08AB46B8:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08AB4840;
      }
      goto L_08AB46C0;
    }
L_08AB46C0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(22240)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB4840;
      }
      goto L_08AB46CC;
    }
L_08AB46CC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[8]) > 0;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_08AB46F8;
      }
      goto L_08AB46D4;
    }
L_08AB46D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(7156)));
    if (static_cast<std::int32_t>(ctx.gpr[4]) >= 0) {
    ctx.gpr[6] = (0u | 1u);
        goto L_08AB46FC;
    }
    goto L_08AB46E0;
L_08AB46E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(7128)));
    if (static_cast<std::int32_t>(ctx.gpr[4]) >= 0) {
    ctx.gpr[6] = (0u | 1u);
        goto L_08AB46FC;
    }
    goto L_08AB46EC;
L_08AB46EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(7168)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.gpr[4] = (ctx.gpr[6] & 255u);
      if (branch_taken) {
          goto L_08AB4700;
      }
      goto L_08AB46F8;
    }
L_08AB46F8:
    ctx.gpr[6] = (0u | 1u);
    goto L_08AB46FC;
L_08AB46FC:
    ctx.gpr[4] = (ctx.gpr[6] & 255u);
    goto L_08AB4700;
L_08AB4700:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB4840;
      }
      goto L_08AB4708;
    }
L_08AB4708:
    ctx.gpr[8] = (2229u << 16u);
    ctx.gpr[6] = (ctx.gpr[8] + static_cast<std::uint32_t>(27372));
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(3)));
    ctx.gpr[4] = (0u | 255u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[10]);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(27372)));
    ctx.gpr[9] = (ctx.gpr[4] << 24u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[8]) < 0;
    ctx.gpr[9] = (0u + ctx.gpr[9]);
      if (branch_taken) {
          goto L_08AB4758;
      }
      goto L_08AB472C;
    }
L_08AB472C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(2)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(1)));
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[9] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[9] = (ctx.gpr[4] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[9] & ctx.gpr[21]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[9] = (ctx.gpr[9] >> 24u);
      if (branch_taken) {
          goto L_08AB4760;
      }
      goto L_08AB4758;
    }
L_08AB4758:
    ctx.gpr[8] = (ctx.gpr[9] & ctx.gpr[21]);
    ctx.gpr[9] = (ctx.gpr[9] >> 24u);
    goto L_08AB4760;
L_08AB4760:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[10]) <= 0;
    ctx.gpr[4] = (8448u << 16u);
      if (branch_taken) {
          goto L_08AB47C0;
      }
      goto L_08AB4768;
    }
L_08AB4768:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (57088u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(50));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (57344u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (57600u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
      if (branch_taken) {
          goto L_08AB47D4;
      }
      goto L_08AB47C0;
    }
L_08AB47C0:
    ctx.gpr[4] = (8448u << 16u);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    goto L_08AB47D4;
L_08AB47D4:
    ctx.gpr[4] = (51456u << 16u);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[8] | ctx.gpr[12]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[9] | ctx.gpr[3]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[8] | ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[8] | ctx.gpr[11]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(27336)));
      if (branch_taken) {
          goto L_08AB4924;
      }
      goto L_08AB4840;
    }
L_08AB4840:
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_08AB4874;
      }
      goto L_08AB4850;
    }
L_08AB4850:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(7156)));
    if (static_cast<std::int32_t>(ctx.gpr[4]) >= 0) {
    ctx.gpr[6] = (0u | 1u);
        goto L_08AB4878;
    }
    goto L_08AB485C;
L_08AB485C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(7128)));
    if (static_cast<std::int32_t>(ctx.gpr[4]) >= 0) {
    ctx.gpr[6] = (0u | 1u);
        goto L_08AB4878;
    }
    goto L_08AB4868;
L_08AB4868:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(7168)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.gpr[4] = (ctx.gpr[6] & 255u);
      if (branch_taken) {
          goto L_08AB487C;
      }
      goto L_08AB4874;
    }
L_08AB4874:
    ctx.gpr[6] = (0u | 1u);
    goto L_08AB4878;
L_08AB4878:
    ctx.gpr[4] = (ctx.gpr[6] & 255u);
    goto L_08AB487C;
L_08AB487C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (8448u << 16u);
      if (branch_taken) {
          goto L_08AB48B8;
      }
      goto L_08AB4884;
    }
L_08AB4884:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(27372));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(2)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1)));
    ctx.gpr[6] = (ctx.gpr[6] << 16u);
    ctx.gpr[6] = (0u + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] << 8u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27372)));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[8] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (256u << 16u);
    ctx.gpr[8] = (ctx.gpr[8] - ctx.gpr[4]);
    ctx.gpr[4] = (8448u << 16u);
    goto L_08AB48B8;
L_08AB48B8:
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[8] & ctx.gpr[21]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[5] | ctx.gpr[12]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[8] >> 24u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] | ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[11]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(27336)));
    goto L_08AB4924;
L_08AB4924:
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[23];
    // nop
      if (branch_taken) {
          goto L_08AB4944;
      }
      goto L_08AB492C;
    }
L_08AB492C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (8192u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08AB4944;
L_08AB4944:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(27348)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 513 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB4A70;
      }
      goto L_08AB4954;
    }
L_08AB4954:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(27340)));
    ctx.gpr[16] = (4u << 16u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-16384));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[16]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[4]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(27344)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[10] = (0u | 272u);
    ctx.gpr[11] = (0u | 512u);
    ctx.gpr[9] = (ctx.lo);
    ctx.gpr[31] = (0x08AB4994u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 381u, 0x08A7EE00u>(ctx, &aot_mem) && ctx.pc == 0x08AB4994u) goto L_08AB4994;
    return;
L_08AB4994:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(27348)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27324)));
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(27296)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(27336)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[6] = (0u | 1024u);
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[7] == ctx.gpr[23]) {
    ctx.gpr[6] = (0u | 2048u);
        goto L_08AB49C0;
    }
    goto L_08AB49C0;
L_08AB49C0:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[4] & ctx.gpr[21]);
    ctx.gpr[7] = (40960u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[7] = (43008u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] >> 8u);
    ctx.gpr[7] = (255u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (47104u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2313));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (51968u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(27340)));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[16]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[11]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(27344)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 512u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 480u);
    ctx.gpr[10] = (0u | 272u);
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[31] = (0x08AB4A68u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 381u, 0x08A7EE00u>(ctx, &aot_mem) && ctx.pc == 0x08AB4A68u) goto L_08AB4A68;
    return;
L_08AB4A68:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AB4AEC;
      }
      goto L_08AB4A70;
    }
L_08AB4A70:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[16] = (0u | 68u);
    goto L_08AB4A7C;
L_08AB4A7C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(27344)));
    ctx.gpr[21] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[6] >> 30u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(27340)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[9] = (0u | 480u);
    ctx.gpr[10] = (ctx.gpr[16] | 0u);
    ctx.gpr[8] = (ctx.lo);
    // nop
    // nop
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[21])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[2] = (ctx.lo);
    ctx.gpr[31] = (0x08AB4AD4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 381u, 0x08A7EE00u>(ctx, &aot_mem) && ctx.pc == 0x08AB4AD4u) goto L_08AB4AD4;
    return;
L_08AB4AD4:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(68));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(68));
      if (branch_taken) {
          goto L_08AB4A7C;
      }
      goto L_08AB4AE8;
    }
L_08AB4AE8:
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    goto L_08AB4AEC;
L_08AB4AEC:
    ctx.gpr[4] = (59136u << 16u);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (8704u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (8960u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (8448u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (50688u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(263));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(27340)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(27344)));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 1u));
    ctx.gpr[7] = (ctx.gpr[7] >> 31u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 1u));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 1u));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[5] = (ctx.gpr[5] >> 31u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 1u));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[5] = (16896u << 16u);
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[6] >> 8u);
    ctx.gpr[5] = (ctx.gpr[6] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) ^ 0x80000000u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (ctx.gpr[5] >> 8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (17152u << 16u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[6] >> 8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (17664u << 16u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[6] >> 8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (17920u << 16u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 4096u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(27340)));
    ctx.gpr[7] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 1u));
    ctx.gpr[7] = (ctx.gpr[7] >> 31u);
    ctx.gpr[6] = (ctx.gpr[7] - ctx.gpr[6]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(27344)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4096));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[7]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 1u));
    ctx.gpr[5] = (ctx.gpr[5] >> 31u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 1u));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[6] << 4u);
    ctx.gpr[7] = (19456u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4096));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 1u));
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (19712u << 16u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (54272u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(27340)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(27344)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (54528u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[6] << 10u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (5376u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(27340)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(27344)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] << 10u);
    ctx.gpr[7] = (5632u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[6] | ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (22016u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (22528u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(255));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (22272u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (22528u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (51456u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(256));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[30]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(27336)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[23];
    ctx.gpr[4] = (3840u << 16u);
      if (branch_taken) {
          goto L_08AB4DB0;
      }
      goto L_08AB4D94;
    }
L_08AB4D94:
    ctx.gpr[4] = (8192u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[30]);
    ctx.gpr[4] = (3840u << 16u);
    goto L_08AB4DB0;
L_08AB4DB0:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (3072u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08AB4DD8;
L_08AB4DD8:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB4E0C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27172)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[18];
    ctx.gpr[4] = (16014u << 16u);
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] | 14571u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(27168)));
    ctx.gpr[7] = (2229u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.gpr[6] = (2229u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(27196)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(27176), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[17] / ctx.fpr[15];
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[18] / ctx.fpr[12];
    ctx.gpr[10] = (2229u << 16u);
    ctx.gpr[9] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(27184), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[8] = (16672u << 16u);
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(27180), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[8]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[7] = (15744u << 16u);
    ctx.gpr[11] = (2229u << 16u);
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[2] = (2229u << 16u);
    ctx.gpr[4] = (2233u << 16u);
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(27188), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4912));
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(27192), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AB4EB0u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(27200), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 379u, 0x08A7EDA8u>(ctx, &aot_mem) && ctx.pc == 0x08AB4EB0u) goto L_08AB4EB0;
    return;
L_08AB4EB0:
    ctx.gpr[4] = (2278u << 16u);
    ctx.gpr[5] = (2278u << 16u);
    ctx.gpr[6] = (0u | 2048u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13568));
    ctx.gpr[31] = (0x08AB4EC8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-15616));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 380u, 0x08A7EDC8u>(ctx, &aot_mem) && ctx.pc == 0x08AB4EC8u) goto L_08AB4EC8;
    return;
L_08AB4EC8:
    ctx.gpr[4] = (2278u << 16u);
    ctx.gpr[5] = (2278u << 16u);
    ctx.gpr[6] = (0u | 2048u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-11456));
    ctx.gpr[31] = (0x08AB4EE0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-13504));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 380u, 0x08A7EDC8u>(ctx, &aot_mem) && ctx.pc == 0x08AB4EE0u) goto L_08AB4EE0;
    return;
L_08AB4EE0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB4EEC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    jump_target = ctx.gpr[9];
    ctx.gpr[31] = (0x08AB4F14u);
    ctx.gpr[7] = (ctx.gpr[8] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AB4F14u) goto L_08AB4F14;
    return;
L_08AB4F14:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB4F20:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AB4F3Cu);
    ctx.gpr[5] = (0u | 1u);
    goto L_08AB4EEC;
L_08AB4F3C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB4F48:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AB4F64u);
    ctx.gpr[5] = (0u | 4u);
    goto L_08AB4EEC;
L_08AB4F64:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB4F70:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AB4F8Cu);
    ctx.gpr[5] = (0u | 4u);
    goto L_08AB4EEC;
L_08AB4F8C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB4F98:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AB4FB4u);
    ctx.gpr[5] = (0u | 4u);
    goto L_08AB4EEC;
L_08AB4FB4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB4FC0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AB4FE8;
      }
      goto L_08AB4FDC;
    }
L_08AB4FDC:
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB4FFC;
      }
      goto L_08AB4FE8;
    }
L_08AB4FE8:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x08AB4FF4u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08AB4F70;
L_08AB4FF4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB5020;
      }
      goto L_08AB4FFC;
    }
L_08AB4FFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[31] = (0x08AB5010u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_08AB4F70;
L_08AB5010:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AB5020u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    goto L_08AB4EEC;
L_08AB5020:
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
L_08AB5038:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AB5058u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    goto L_08AB4F48;
L_08AB5058:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AB506Cu);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    goto L_08AB4EEC;
L_08AB506C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB5080:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(56)));
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AB50B0u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    goto L_08AB4F48;
L_08AB50B0:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08AB510C;
      }
      goto L_08AB50C0;
    }
L_08AB50C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[31] = (0x08AB50D4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08AB4FC0;
L_08AB50D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[31] = (0x08AB50E8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    goto L_08AB4F48;
L_08AB50E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[31] = (0x08AB50FCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    goto L_08AB4F48;
L_08AB50FC:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08AB50C0;
      }
      goto L_08AB510C;
    }
L_08AB510C:
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
L_08AB512C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AB514Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    goto L_08AB4F48;
L_08AB514C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AB5160u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    goto L_08AB4EEC;
L_08AB5160:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB5174:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AB51A4u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    goto L_08AB4F48;
L_08AB51A4:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08AB51D8;
      }
      goto L_08AB51B4;
    }
L_08AB51B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[31] = (0x08AB51C8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08AB4FC0;
L_08AB51C8:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AB51B4;
      }
      goto L_08AB51D8;
    }
L_08AB51D8:
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
L_08AB51F8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AB522Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    goto L_08AB4F48;
L_08AB522C:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[21] = (0u | 0u);
      if (branch_taken) {
          goto L_08AB52B8;
      }
      goto L_08AB523C;
    }
L_08AB523C:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[20] = (ctx.gpr[20] + ctx.gpr[21]);
    ctx.gpr[31] = (0x08AB5250u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    goto L_08AB4F20;
L_08AB5250:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AB5270;
      }
      goto L_08AB5260;
    }
L_08AB5260:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB52A8;
      }
      goto L_08AB5268;
    }
L_08AB5268:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB52A8;
      }
      goto L_08AB5270;
    }
L_08AB5270:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 5 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AB5294;
      }
      goto L_08AB5278;
    }
L_08AB5278:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB52A8;
      }
      goto L_08AB5280;
    }
L_08AB5280:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x08AB528Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08AB4FC0;
L_08AB528C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB52A8;
      }
      goto L_08AB5294;
    }
L_08AB5294:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x08AB52A0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08AB4F98;
L_08AB52A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB52A8;
      }
      goto L_08AB52A8;
    }
L_08AB52A8:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08AB523C;
      }
      goto L_08AB52B8;
    }
L_08AB52B8:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AB52C8u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    goto L_08AB4F48;
L_08AB52C8:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_08AB5300;
      }
      goto L_08AB52D8;
    }
L_08AB52D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08AB52F0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    goto L_08AB5324;
L_08AB52F0:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AB52D8;
      }
      goto L_08AB5300;
    }
L_08AB5300:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB5324:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    if (ctx.gpr[4] != ctx.gpr[7]) {
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
        goto L_08AB5350;
    }
    goto L_08AB5350;
L_08AB5350:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08AB535Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08AB4FC0;
L_08AB535C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(60)));
    ctx.gpr[31] = (0x08AB5368u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08AB4F48;
L_08AB5368:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.gpr[31] = (0x08AB5374u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08AB4F20;
L_08AB5374:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(69)));
    ctx.gpr[31] = (0x08AB5380u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08AB4F20;
L_08AB5380:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(70)));
    ctx.gpr[31] = (0x08AB538Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08AB4F20;
L_08AB538C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(71)));
    ctx.gpr[31] = (0x08AB5398u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08AB4F20;
L_08AB5398:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AB53A4u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08AB512C;
L_08AB53A4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AB53B0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08AB5080;
L_08AB53B0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AB53BCu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08AB5174;
L_08AB53BC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AB53C8u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08AB51F8;
L_08AB53C8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AB53D4u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08AB5038;
L_08AB53D4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB53E8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (0u | 4u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AB540Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-17616));
    goto L_08AB4EEC;
L_08AB540C:
    ctx.gpr[4] = (0u | 80u);
    ctx.gpr[31] = (0x08AB5418u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08AB4F20;
L_08AB5418:
    ctx.gpr[31] = (0x08AB5420u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 128u, 0x08A00908u>(ctx, &aot_mem) && ctx.pc == 0x08AB5420u) goto L_08AB5420;
    return;
L_08AB5420:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AB542Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08AB4F20;
L_08AB542C:
    ctx.gpr[4] = (0u | 4u);
    ctx.gpr[31] = (0x08AB5438u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08AB4F20;
L_08AB5438:
    ctx.gpr[4] = (0u | 4u);
    ctx.gpr[31] = (0x08AB5444u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08AB4F20;
L_08AB5444:
    ctx.gpr[4] = (0u | 4u);
    ctx.gpr[31] = (0x08AB5450u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08AB4F20;
L_08AB5450:
    ctx.gpr[4] = (0u | 6u);
    ctx.gpr[31] = (0x08AB545Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08AB4F20;
L_08AB545C:
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[31] = (0x08AB5468u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08AB4F20;
L_08AB5468:
    ctx.gpr[4] = (0u | 9u);
    ctx.gpr[31] = (0x08AB5474u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08AB4F20;
L_08AB5474:
    ctx.gpr[4] = (0u | 9u);
    ctx.gpr[31] = (0x08AB5480u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08AB4F20;
L_08AB5480:
    ctx.gpr[4] = (0u | 4u);
    ctx.gpr[31] = (0x08AB548Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08AB4F20;
L_08AB548C:
    ctx.gpr[5] = (19439u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 44859u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AB54A0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    goto L_08AB4F98;
L_08AB54A0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB54B0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AB54DCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08AB53E8;
L_08AB54DC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08AB54ECu);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    goto L_08AB5324;
L_08AB54EC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB5500:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1806)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 14 ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB5544;
      }
      goto L_08AB552C;
    }
L_08AB552C:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(1806));
    ctx.gpr[19] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[19] << 6u);
      if (branch_taken) {
          goto L_08AB5568;
      }
      goto L_08AB5544;
    }
L_08AB5544:
    ctx.gpr[19] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1805)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1856)));
    ctx.gpr[18] = (ctx.gpr[19] << 6u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[18]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AB5590;
      }
      goto L_08AB5568;
    }
L_08AB5568:
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[18]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(1808));
    ctx.gpr[31] = (0x08AB5578u);
    ctx.gpr[6] = (0u | 64u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08AB5578u) goto L_08AB5578;
    return;
L_08AB5578:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08AB5598;
      }
      goto L_08AB5588;
    }
L_08AB5588:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB55F4;
      }
      goto L_08AB5590;
    }
L_08AB5590:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB55F8;
      }
      goto L_08AB5598;
    }
L_08AB5598:
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[18]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(48)));
    goto L_08AB55A0;
L_08AB55A0:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1792)));
    ctx.gpr[5] = (ctx.gpr[5] << 6u);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(48)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AB55E0;
      }
      goto L_08AB55C0;
    }
L_08AB55C0:
    ctx.gpr[6] = (0u | 13u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(1793));
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(1792));
    ctx.gpr[31] = (0x08AB55D8u);
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 539u, 0x08932C08u>(ctx, &aot_mem) && ctx.pc == 0x08AB55D8u) goto L_08AB55D8;
    return;
L_08AB55D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB55F4;
      }
      goto L_08AB55E0;
    }
L_08AB55E0:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[17] = (ctx.gpr[16] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AB55A0;
      }
      goto L_08AB55F4;
    }
L_08AB55F4:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1792), static_cast<std::uint8_t>(ctx.gpr[19]));
    goto L_08AB55F8;
L_08AB55F8:
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
L_08AB5614:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    ctx.gpr[2] = (ctx.gpr[5] & 255u);
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[5];
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08AB5694;
      }
      goto L_08AB5628;
    }
L_08AB5628:
    ctx.gpr[8] = (2229u << 16u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(27584));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[8]);
    ctx.gpr[8] = (16768u << 16u);
    ctx.gpr[7] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    goto L_08AB5648;
L_08AB5648:
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
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
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    ctx.gpr[8] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AB5684;
      }
      goto L_08AB567C;
    }
L_08AB567C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 22u);
      if (branch_taken) {
          goto L_08AB5694;
      }
      goto L_08AB5684;
    }
L_08AB5684:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08AB5648;
      }
      goto L_08AB5694;
    }
L_08AB5694:
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB569C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[6] & 255u);
    ctx.gpr[6] = (15057u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (ctx.gpr[6] | 46871u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AB5778;
      }
      goto L_08AB56D8;
    }
L_08AB56D8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AB56E4u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08AB5794;
L_08AB56E4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08AB5778;
      }
      goto L_08AB56F0;
    }
L_08AB56F0:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.fpr[13] = std::sqrt(ctx.fpr[13]);
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AB5714u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 924u, 0x08A9B62Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB5714u) goto L_08AB5714;
    return;
L_08AB5714:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08AB5778;
      }
      goto L_08AB5724;
    }
L_08AB5724:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 7u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(64), 0u);
    ctx.gpr[4] = (16512u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 5u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(100), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AB5778u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 868u, 0x08A9B020u>(ctx, &aot_mem) && ctx.pc == 0x08AB5778u) goto L_08AB5778;
    return;
L_08AB5778:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB5794:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AB57D8;
      }
      goto L_08AB57BC;
    }
L_08AB57BC:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(9)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 25u);
      if (branch_taken) {
          goto L_08AB57D8;
      }
      goto L_08AB57C8;
    }
L_08AB57C8:
    if (ctx.gpr[4] == ctx.gpr[6]) {
    ctx.gpr[5] = (14545u << 16u);
        goto L_08AB57DC;
    }
    goto L_08AB57D0;
L_08AB57D0:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08AB5888;
      }
      goto L_08AB57D8;
    }
L_08AB57D8:
    ctx.gpr[5] = (14545u << 16u);
    goto L_08AB57DC;
L_08AB57DC:
    ctx.gpr[5] = (ctx.gpr[5] | 46871u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (15800u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 20972u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (15800u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 7550u);
    ctx.gpr[31] = (0x08AB5808u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    goto L_08AB5ECC;
L_08AB5808:
    ctx.gpr[5] = (16988u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (17995u << 16u);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[4] | 8192u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[2] = (0u | 35000u);
    ctx.gpr[4] = (0u | 258u);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    ctx.gpr[4] = (20224u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08AB585C;
      }
      goto L_08AB584C;
    }
L_08AB584C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[5] + ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AB5874;
      }
      goto L_08AB585C;
    }
L_08AB585C:
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[5] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[2] = (ctx.gpr[5] + ctx.gpr[2]);
    goto L_08AB5874;
L_08AB5874:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[16] < static_cast<std::uint32_t>(2) ? 1u : 0u);
      if (branch_taken) {
          goto L_08AB5B08;
      }
      goto L_08AB5888;
    }
L_08AB5888:
    ctx.gpr[6] = (0u | 19u);
    if (ctx.gpr[4] == ctx.gpr[6]) {
    ctx.gpr[5] = (14545u << 16u);
        goto L_08AB58A0;
    }
    goto L_08AB5894;
L_08AB5894:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08AB594C;
      }
      goto L_08AB589C;
    }
L_08AB589C:
    ctx.gpr[5] = (14545u << 16u);
    goto L_08AB58A0;
L_08AB58A0:
    ctx.gpr[5] = (ctx.gpr[5] | 46871u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (15800u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 20972u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (15800u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 7550u);
    ctx.gpr[31] = (0x08AB58CCu);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    goto L_08AB5ECC;
L_08AB58CC:
    ctx.gpr[4] = (17853u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[4] | 4096u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (0u | 18u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (20224u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[14]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[14];
        goto L_08AB5910;
    }
    goto L_08AB5900;
L_08AB5900:
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[2] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(16000));
      if (branch_taken) {
          goto L_08AB5924;
      }
      goto L_08AB5910;
    }
L_08AB5910:
    ctx.gpr[4] = (32768u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[2] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(16000));
    goto L_08AB5924;
L_08AB5924:
    ctx.gpr[4] = (16880u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (ctx.gpr[16] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[2] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] & 255u);
      if (branch_taken) {
          goto L_08AB5B08;
      }
      goto L_08AB594C;
    }
L_08AB594C:
    ctx.gpr[6] = (0u | 3u);
    if (ctx.gpr[4] == ctx.gpr[6]) {
    ctx.gpr[5] = (14545u << 16u);
        goto L_08AB5994;
    }
    goto L_08AB5958;
L_08AB5958:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 4u);
      if (branch_taken) {
          goto L_08AB5990;
      }
      goto L_08AB5960;
    }
L_08AB5960:
    if (ctx.gpr[4] == ctx.gpr[6]) {
    ctx.gpr[5] = (14545u << 16u);
        goto L_08AB5994;
    }
    goto L_08AB5968;
L_08AB5968:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 18u);
      if (branch_taken) {
          goto L_08AB5990;
      }
      goto L_08AB5970;
    }
L_08AB5970:
    if (ctx.gpr[4] == ctx.gpr[6]) {
    ctx.gpr[5] = (14545u << 16u);
        goto L_08AB5994;
    }
    goto L_08AB5978;
L_08AB5978:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 33u);
      if (branch_taken) {
          goto L_08AB5990;
      }
      goto L_08AB5980;
    }
L_08AB5980:
    if (ctx.gpr[4] == ctx.gpr[6]) {
    ctx.gpr[5] = (14545u << 16u);
        goto L_08AB5994;
    }
    goto L_08AB5988;
L_08AB5988:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08AB5A40;
      }
      goto L_08AB5990;
    }
L_08AB5990:
    ctx.gpr[5] = (14545u << 16u);
    goto L_08AB5994;
L_08AB5994:
    ctx.gpr[5] = (ctx.gpr[5] | 46871u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (15800u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 20972u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (15800u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 7550u);
    ctx.gpr[31] = (0x08AB59C0u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    goto L_08AB5ECC;
L_08AB59C0:
    ctx.gpr[4] = (16988u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (17723u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 32768u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[4] = (0u | 196u);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (20224u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08AB5A14;
      }
      goto L_08AB5A04;
    }
L_08AB5A04:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[2] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(5000));
      if (branch_taken) {
          goto L_08AB5A2C;
      }
      goto L_08AB5A14;
    }
L_08AB5A14:
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[5] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[2] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(5000));
    goto L_08AB5A2C;
L_08AB5A2C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[16] < static_cast<std::uint32_t>(2) ? 1u : 0u);
      if (branch_taken) {
          goto L_08AB5B08;
      }
      goto L_08AB5A40;
    }
L_08AB5A40:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (0u | 17u);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AB5AC8;
      }
      goto L_08AB5A50;
    }
L_08AB5A50:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    ctx.gpr[5] = (14545u << 16u);
      if (branch_taken) {
          goto L_08AB5AC8;
      }
      goto L_08AB5A58;
    }
L_08AB5A58:
    ctx.gpr[5] = (ctx.gpr[5] | 46871u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (15800u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 20972u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (15800u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 7550u);
    ctx.gpr[31] = (0x08AB5A84u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    goto L_08AB5ECC;
L_08AB5A84:
    ctx.gpr[4] = (17948u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[4] | 16384u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (0u | 273u);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (20224u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[12];
        goto L_08AB5AD0;
    }
    goto L_08AB5AB8;
L_08AB5AB8:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    ctx.gpr[2] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(10000));
      if (branch_taken) {
          goto L_08AB5AE4;
      }
      goto L_08AB5AC8;
    }
L_08AB5AC8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AB5B20;
      }
      goto L_08AB5AD0;
    }
L_08AB5AD0:
    ctx.gpr[4] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[2] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(10000));
    goto L_08AB5AE4;
L_08AB5AE4:
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (ctx.gpr[16] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[2] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[2] = (ctx.gpr[2] & 255u);
    goto L_08AB5B08;
L_08AB5B08:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB5B20;
      }
      goto L_08AB5B10;
    }
L_08AB5B10:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[2] = (ctx.gpr[4] >> 1u);
    ctx.gpr[2] = (ctx.gpr[2] & 255u);
    goto L_08AB5B20;
L_08AB5B20:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB5B34:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[6] = (ctx.gpr[5] < static_cast<std::uint32_t>(35) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB5EBC;
      }
      goto L_08AB5B48;
    }
L_08AB5B48:
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[5]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-17328)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB5B60:
    ctx.gpr[5] = (16672u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (17008u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (16968u << 16u);
    ctx.gpr[31] = (0x08AB5B7Cu);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    goto L_08AB5ECC;
L_08AB5B7C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB5EC0;
      }
      goto L_08AB5B84;
    }
L_08AB5B84:
    ctx.gpr[5] = (16384u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[31] = (0x08AB5B98u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    goto L_08AB5ECC;
L_08AB5B98:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB5EC0;
      }
      goto L_08AB5BA0;
    }
L_08AB5BA0:
    ctx.gpr[5] = (16384u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[31] = (0x08AB5BB4u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    goto L_08AB5ECC;
L_08AB5BB4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB5EC0;
      }
      goto L_08AB5BBC;
    }
L_08AB5BBC:
    ctx.gpr[5] = (16384u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[31] = (0x08AB5BD0u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    goto L_08AB5ECC;
L_08AB5BD0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB5EC0;
      }
      goto L_08AB5BD8;
    }
L_08AB5BD8:
    ctx.gpr[5] = (16672u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[31] = (0x08AB5BECu);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    goto L_08AB5ECC;
L_08AB5BEC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB5EC0;
      }
      goto L_08AB5BF4;
    }
L_08AB5BF4:
    ctx.gpr[5] = (15820u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (16670u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 26214u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (16672u << 16u);
    ctx.gpr[31] = (0x08AB5C18u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    goto L_08AB5ECC;
L_08AB5C18:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB5EC0;
      }
      goto L_08AB5C20;
    }
L_08AB5C20:
    ctx.gpr[5] = (16800u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (17096u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (17056u << 16u);
    ctx.gpr[31] = (0x08AB5C3Cu);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    goto L_08AB5ECC;
L_08AB5C3C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB5EC0;
      }
      goto L_08AB5C44;
    }
L_08AB5C44:
    ctx.gpr[5] = (16512u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[31] = (0x08AB5C58u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    goto L_08AB5ECC;
L_08AB5C58:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB5EC0;
      }
      goto L_08AB5C60;
    }
L_08AB5C60:
    ctx.gpr[5] = (16880u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (17154u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (17096u << 16u);
    ctx.gpr[31] = (0x08AB5C7Cu);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    goto L_08AB5ECC;
L_08AB5C7C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB5EC0;
      }
      goto L_08AB5C84;
    }
L_08AB5C84:
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (16672u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (16656u << 16u);
    ctx.gpr[31] = (0x08AB5CA0u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    goto L_08AB5ECC;
L_08AB5CA0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB5EC0;
      }
      goto L_08AB5CA8;
    }
L_08AB5CA8:
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (16672u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (16656u << 16u);
    ctx.gpr[31] = (0x08AB5CC4u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    goto L_08AB5ECC;
L_08AB5CC4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB5EC0;
      }
      goto L_08AB5CCC;
    }
L_08AB5CCC:
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (16752u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (16736u << 16u);
    ctx.gpr[31] = (0x08AB5CE8u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    goto L_08AB5ECC;
L_08AB5CE8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB5EC0;
      }
      goto L_08AB5CF0;
    }
L_08AB5CF0:
    ctx.gpr[5] = (15820u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (16670u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 26214u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (16672u << 16u);
    ctx.gpr[31] = (0x08AB5D14u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    goto L_08AB5ECC;
L_08AB5D14:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB5EC0;
      }
      goto L_08AB5D1C;
    }
L_08AB5D1C:
    ctx.gpr[5] = (16800u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[31] = (0x08AB5D30u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    goto L_08AB5ECC;
L_08AB5D30:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB5EC0;
      }
      goto L_08AB5D38;
    }
L_08AB5D38:
    ctx.gpr[5] = (16672u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[31] = (0x08AB5D4Cu);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    goto L_08AB5ECC;
L_08AB5D4C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB5EC0;
      }
      goto L_08AB5D54;
    }
L_08AB5D54:
    ctx.gpr[5] = (16672u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[31] = (0x08AB5D68u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    goto L_08AB5ECC;
L_08AB5D68:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB5EC0;
      }
      goto L_08AB5D70;
    }
L_08AB5D70:
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (16512u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (16448u << 16u);
    ctx.gpr[31] = (0x08AB5D8Cu);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    goto L_08AB5ECC;
L_08AB5D8C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB5EC0;
      }
      goto L_08AB5D94;
    }
L_08AB5D94:
    ctx.gpr[5] = (15820u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (16540u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (16544u << 16u);
    ctx.gpr[31] = (0x08AB5DB8u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    goto L_08AB5ECC;
L_08AB5DB8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB5EC0;
      }
      goto L_08AB5DC0;
    }
L_08AB5DC0:
    ctx.gpr[5] = (15820u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (16927u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 39322u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (16928u << 16u);
    ctx.gpr[31] = (0x08AB5DE4u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    goto L_08AB5ECC;
L_08AB5DE4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB5EC0;
      }
      goto L_08AB5DEC;
    }
L_08AB5DEC:
    ctx.gpr[5] = (15820u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (16505u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 39322u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (16512u << 16u);
    ctx.gpr[31] = (0x08AB5E10u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    goto L_08AB5ECC;
L_08AB5E10:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB5EC0;
      }
      goto L_08AB5E18;
    }
L_08AB5E18:
    ctx.gpr[5] = (16128u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[31] = (0x08AB5E2Cu);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    goto L_08AB5ECC;
L_08AB5E2C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB5EC0;
      }
      goto L_08AB5E34;
    }
L_08AB5E34:
    ctx.gpr[5] = (16512u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (16928u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (16912u << 16u);
    ctx.gpr[31] = (0x08AB5E50u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    goto L_08AB5ECC;
L_08AB5E50:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB5EC0;
      }
      goto L_08AB5E58;
    }
L_08AB5E58:
    ctx.gpr[5] = (16544u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[31] = (0x08AB5E6Cu);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    goto L_08AB5ECC;
L_08AB5E6C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB5EC0;
      }
      goto L_08AB5E74;
    }
L_08AB5E74:
    ctx.gpr[5] = (16576u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (16968u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (16944u << 16u);
    ctx.gpr[31] = (0x08AB5E90u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    goto L_08AB5ECC;
L_08AB5E90:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB5EC0;
      }
      goto L_08AB5E98;
    }
L_08AB5E98:
    ctx.gpr[5] = (16640u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (16968u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (16936u << 16u);
    ctx.gpr[31] = (0x08AB5EB4u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    goto L_08AB5ECC;
L_08AB5EB4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB5EC0;
      }
      goto L_08AB5EBC;
    }
L_08AB5EBC:
    ctx.fpr[0] = std::bit_cast<float>(0u);
    goto L_08AB5EC0;
L_08AB5EC0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB5ECC:
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AB5F00;
      }
      goto L_08AB5EDC;
    }
L_08AB5EDC:
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AB5EF0;
      }
      goto L_08AB5EEC;
    }
L_08AB5EEC:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    goto L_08AB5EF0;
L_08AB5EF0:
    ctx.fpr[0] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[0] = ctx.fpr[0] / ctx.fpr[15];
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB5F04;
      }
      goto L_08AB5F00;
    }
L_08AB5F00:
    ctx.fpr[0] = std::bit_cast<float>(0u);
    goto L_08AB5F04;
L_08AB5F04:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB5F0C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-176));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[7] & 255u);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[20]);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[20] = (ctx.gpr[8] & 255u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08AB6118;
      }
      goto L_08AB5F64;
    }
L_08AB5F64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(19956)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08AB6118;
      }
      goto L_08AB5F70;
    }
L_08AB5F70:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(21945)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB6118;
      }
      goto L_08AB5F7C;
    }
L_08AB5F7C:
    ctx.gpr[4] = (15057u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 46871u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (15395u << 16u);
      if (branch_taken) {
          goto L_08AB5FB0;
      }
      goto L_08AB5F98;
    }
L_08AB5F98:
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AB5FF4;
      }
      goto L_08AB5FB0;
    }
L_08AB5FB0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (ctx.gpr[5] & 14u);
    ctx.gpr[5] = (ctx.gpr[5] ^ 2u);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[23] = (ctx.gpr[16] + static_cast<std::uint32_t>(19968));
      if (branch_taken) {
          goto L_08AB5FFC;
      }
      goto L_08AB5FD8;
    }
L_08AB5FD8:
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(48));
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
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB6044;
      }
      goto L_08AB5FF4;
    }
L_08AB5FF4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB6118;
      }
      goto L_08AB5FFC;
    }
L_08AB5FFC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(68)));
    ctx.gpr[6] = (ctx.gpr[6] & 14u);
    ctx.gpr[6] = (ctx.gpr[6] ^ 2u);
    ctx.gpr[6] = (ctx.gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_08AB6030;
      }
      goto L_08AB6018;
    }
L_08AB6018:
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
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
          goto L_08AB6044;
      }
      goto L_08AB6030;
    }
L_08AB6030:
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
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
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
    goto L_08AB6044;
L_08AB6044:
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (16384u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[5]);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    { const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08AB609Cu);
    ctx.gpr[6] = (ctx.gpr[30] | 0u);
    goto L_08AB5614;
L_08AB609C:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08AB60B8u);
    ctx.gpr[6] = (ctx.gpr[30] | 0u);
    goto L_08AB5614;
L_08AB60B8:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AB60C8u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 304u, 0x08A6D4E8u>(ctx, &aot_mem) && ctx.pc == 0x08AB60C8u) goto L_08AB60C8;
    return;
L_08AB60C8:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (17692u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 16384u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AB6118;
      }
      goto L_08AB60E8;
    }
L_08AB60E8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(21776), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(21780), ctx.gpr[18]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(21784), static_cast<std::uint8_t>(ctx.gpr[19]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(21785), static_cast<std::uint8_t>(ctx.gpr[20]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(21788), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(21792), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(21808));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(21824), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08AB6118u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    goto L_08AB5500;
L_08AB6118:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
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
L_08AB6150:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(19956)));
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[31]);
    goto L_08AB617C;
L_08AB617C:
    ctx.gpr[5] = (ctx.gpr[29] + ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 14 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB617C;
      }
      goto L_08AB619C;
    }
L_08AB619C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(21774)));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_08AB6270;
      }
      goto L_08AB61B0;
    }
L_08AB61B0:
    ctx.gpr[8] = (ctx.gpr[16] + ctx.gpr[18]);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(21760)));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[8] << 6u);
    ctx.gpr[6] = (ctx.gpr[16] + ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(19968)));
    goto L_08AB61C8;
L_08AB61C8:
    ctx.gpr[5] = (ctx.gpr[7] << 6u);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20864)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[9];
    // nop
      if (branch_taken) {
          goto L_08AB6244;
      }
      goto L_08AB61DC;
    }
L_08AB61DC:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(19972)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20868)));
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[10];
    // nop
      if (branch_taken) {
          goto L_08AB6244;
      }
      goto L_08AB61EC;
    }
L_08AB61EC:
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(19976)));
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(20872)));
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[10];
    // nop
      if (branch_taken) {
          goto L_08AB6244;
      }
      goto L_08AB61FC;
    }
L_08AB61FC:
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(19977)));
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(20873)));
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[10];
    // nop
      if (branch_taken) {
          goto L_08AB6244;
      }
      goto L_08AB620C;
    }
L_08AB620C:
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[8]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[7]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20916)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.gpr[4] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(20916), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(20020), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(19968));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AB623Cu);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    goto L_08AB569C;
L_08AB623C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB6258;
      }
      goto L_08AB6244;
    }
L_08AB6244:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[7]) < 14 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB61C8;
      }
      goto L_08AB6258;
    }
L_08AB6258:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(21774)));
    ctx.gpr[18] = (ctx.gpr[18] & 255u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB61B0;
      }
      goto L_08AB6270;
    }
L_08AB6270:
    ctx.gpr[4] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    goto L_08AB6278;
L_08AB6278:
    ctx.gpr[5] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (ctx.gpr[4] << 6u);
      if (branch_taken) {
          goto L_08AB62B8;
      }
      goto L_08AB6288;
    }
L_08AB6288:
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(20864));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08AB62B8;
L_08AB62B8:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 14 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB6278;
      }
      goto L_08AB62CC;
    }
L_08AB62CC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(21774)));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (0u | 1u);
      if (branch_taken) {
          goto L_08AB638C;
      }
      goto L_08AB62E0;
    }
L_08AB62E0:
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(21760)));
    ctx.gpr[5] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB6374;
      }
      goto L_08AB62F8;
    }
L_08AB62F8:
    ctx.gpr[4] = (ctx.gpr[4] << 6u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    goto L_08AB6304;
L_08AB6304:
    ctx.gpr[5] = (ctx.gpr[29] + ctx.gpr[18]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (ctx.gpr[18] << 6u);
      if (branch_taken) {
          goto L_08AB6340;
      }
      goto L_08AB6314;
    }
L_08AB6314:
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(19968)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(20916), ctx.gpr[19]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(19972)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(20864), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(19976)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(20868), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(19977)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(20872), static_cast<std::uint8_t>(ctx.gpr[6]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(20873), static_cast<std::uint8_t>(ctx.gpr[7]));
      if (branch_taken) {
          goto L_08AB6354;
      }
      goto L_08AB6340;
    }
L_08AB6340:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[18] & 255u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[18]) < 14 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB6304;
      }
      goto L_08AB6354;
    }
L_08AB6354:
    ctx.gpr[20] = (ctx.gpr[4] + static_cast<std::uint32_t>(19968));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AB6364u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    goto L_08AB63D4;
L_08AB6364:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08AB6374u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    goto L_08AB569C;
L_08AB6374:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(21774)));
    ctx.gpr[17] = (ctx.gpr[17] & 255u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB62E0;
      }
      goto L_08AB638C;
    }
L_08AB638C:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (0u | 14u);
    ctx.gpr[6] = (ctx.gpr[16] + ctx.gpr[4]);
    goto L_08AB6398;
L_08AB6398:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(21760), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 14 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[6] = (ctx.gpr[16] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AB6398;
      }
      goto L_08AB63B0;
    }
L_08AB63B0:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(21774), static_cast<std::uint8_t>(0u));
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
L_08AB63D4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[16]);
    ctx.gpr[8] = (ctx.gpr[4] + static_cast<std::uint32_t>(80));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (16204u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (15948u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[4] = (16256u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(27436));
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[6]);
    ctx.gpr[4] = (16928u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[6] = (2233u << 16u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-25200));
    ctx.gpr[4] = (16968u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(32));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[7]);
    ctx.gpr[4] = (16512u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[30]);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[21] = (0u | 17u);
    ctx.gpr[23] = (0u | 5u);
    ctx.gpr[30] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[8]);
    ctx.gpr[19] = (ctx.gpr[5] | 0u);
    ctx.gpr[22] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[31]);
    goto L_08AB6494;
L_08AB6494:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB64B0;
      }
      goto L_08AB649C;
    }
L_08AB649C:
    ctx.gpr[17] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[20] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(9)));
    ctx.gpr[17] = (ctx.gpr[17] & 255u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[20] & 255u);
      if (branch_taken) {
          goto L_08AB64C0;
      }
      goto L_08AB64B0;
    }
L_08AB64B0:
    ctx.gpr[17] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(9)));
    ctx.gpr[20] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[17] = (ctx.gpr[17] & 255u);
    ctx.gpr[20] = (ctx.gpr[20] & 255u);
    goto L_08AB64C0;
L_08AB64C0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AB64D0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08AB5B34;
L_08AB64D0:
    ctx.gpr[4] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[4];
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08AB64F0;
      }
      goto L_08AB64DC;
    }
L_08AB64DC:
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_08AB64F0;
      }
      goto L_08AB64E4;
    }
L_08AB64E4:
    ctx.gpr[5] = (16000u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    goto L_08AB64F0;
L_08AB64F0:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AB6534;
      }
      goto L_08AB64F8;
    }
L_08AB64F8:
    ctx.gpr[4] = (16153u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AB6534;
      }
      goto L_08AB6514;
    }
L_08AB6514:
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (0u | 10u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[24] < ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
        goto L_08AB6534;
    }
    goto L_08AB6534;
L_08AB6534:
    ctx.gpr[4] = (0u | 13u);
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AB6554;
      }
      goto L_08AB6540;
    }
L_08AB6540:
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AB6554;
      }
      goto L_08AB6550;
    }
L_08AB6550:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    goto L_08AB6554;
L_08AB6554:
    ctx.gpr[5] = (0u | 14u);
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 16u);
      if (branch_taken) {
          goto L_08AB6570;
      }
      goto L_08AB6560;
    }
L_08AB6560:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AB6570;
      }
      goto L_08AB6568;
    }
L_08AB6568:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AB657C;
      }
      goto L_08AB6570;
    }
L_08AB6570:
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_08AB657C;
      }
      goto L_08AB6578;
    }
L_08AB6578:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    goto L_08AB657C;
L_08AB657C:
    if (ctx.gpr[17] != ctx.gpr[21]) {
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
        goto L_08AB658C;
    }
    goto L_08AB6584;
L_08AB6584:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 127u);
      if (branch_taken) {
          goto L_08AB6598;
      }
      goto L_08AB658C;
    }
L_08AB658C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08AB6598;
L_08AB6598:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08AB68A0;
      }
      goto L_08AB65A0;
    }
L_08AB65A0:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.fpr[13] = std::sqrt(ctx.fpr[13]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08AB65BCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 924u, 0x08A9B62Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB65BCu) goto L_08AB65BC;
    return;
L_08AB65BC:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08AB68A0;
      }
      goto L_08AB65CC;
    }
L_08AB65CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (ctx.gpr[17] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-101));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(48) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB6740;
      }
      goto L_08AB65F0;
    }
L_08AB65F0:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-17184)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB6608:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21924)));
    ctx.gpr[5] = (0u | 6u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (ctx.hi);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AB6740;
      }
      goto L_08AB662C;
    }
L_08AB662C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21928)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[23]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (ctx.hi);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AB6740;
      }
      goto L_08AB664C;
    }
L_08AB664C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21932)));
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (ctx.hi);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AB6740;
      }
      goto L_08AB6670;
    }
L_08AB6670:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21936)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[23]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (ctx.hi);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AB6740;
      }
      goto L_08AB6690;
    }
L_08AB6690:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AB6740;
      }
      goto L_08AB66AC;
    }
L_08AB66AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21936)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[4] & 3u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AB6740;
      }
      goto L_08AB66C8;
    }
L_08AB66C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21932)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[23]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (ctx.hi);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AB6740;
      }
      goto L_08AB66E8;
    }
L_08AB66E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21928)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[4] & 3u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AB6740;
      }
      goto L_08AB6704;
    }
L_08AB6704:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB6740;
      }
      goto L_08AB670C;
    }
L_08AB670C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21936)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AB6740;
      }
      goto L_08AB6728;
    }
L_08AB6728:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[4] & 3u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    goto L_08AB6740;
L_08AB6740:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(-7));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(18) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB67B0;
      }
      goto L_08AB6750;
    }
L_08AB6750:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-16992)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB6768:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x08AB6774u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 335u, 0x088B5ECCu>(ctx, &aot_mem) && ctx.pc == 0x08AB6774u) goto L_08AB6774;
    return;
L_08AB6774:
    ctx.gpr[4] = (ctx.gpr[2] << 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AB67C0;
      }
      goto L_08AB6780;
    }
L_08AB6780:
    ctx.gpr[4] = (0u | 8819u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AB67C0;
      }
      goto L_08AB678C;
    }
L_08AB678C:
    ctx.gpr[4] = (0u | 13500u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AB67C0;
      }
      goto L_08AB6798;
    }
L_08AB6798:
    ctx.gpr[4] = (0u | 8000u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AB67C0;
      }
      goto L_08AB67A4;
    }
L_08AB67A4:
    ctx.gpr[4] = (0u | 6000u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AB67C0;
      }
      goto L_08AB67B0;
    }
L_08AB67B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x08AB67BCu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 335u, 0x088B5ECCu>(ctx, &aot_mem) && ctx.pc == 0x08AB67BCu) goto L_08AB67BC;
    return;
L_08AB67BC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    goto L_08AB67C0;
L_08AB67C0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[30]);
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AB67D4u);
    ctx.gpr[5] = (ctx.gpr[30] >> 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 855u, 0x08A9AF1Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB67D4u) goto L_08AB67D4;
    return;
L_08AB67D4:
    ctx.gpr[4] = (ctx.gpr[30] + ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[22] + static_cast<std::uint32_t>(27664)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[22] + static_cast<std::uint32_t>(27664), static_cast<std::uint16_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[22] + static_cast<std::uint32_t>(27664)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 255 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
      if (branch_taken) {
          goto L_08AB6804;
      }
      goto L_08AB67FC;
    }
L_08AB67FC:
    ctx.gpr[4] = (0u | 24u);
    aot_mem.aot_store16(ctx.gpr[22] + static_cast<std::uint32_t>(27664), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_08AB6804;
L_08AB6804:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(ctx.gpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[30]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(0u));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08AB6848u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[30]);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08AB6848u) goto L_08AB6848;
    return;
L_08AB6848:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[2];
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
      if (branch_taken) {
          goto L_08AB6870;
      }
      goto L_08AB6854;
    }
L_08AB6854:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[30]);
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x08AB6864u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[30]);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08AB6864u) goto L_08AB6864;
    return;
L_08AB6864:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[2];
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
      if (branch_taken) {
          goto L_08AB6884;
      }
      goto L_08AB6870;
    }
L_08AB6870:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AB687Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 868u, 0x08A9B020u>(ctx, &aot_mem) && ctx.pc == 0x08AB687Cu) goto L_08AB687C;
    return;
L_08AB687C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB68A0;
      }
      goto L_08AB6884;
    }
L_08AB6884:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_08AB68A0;
      }
      goto L_08AB688C;
    }
L_08AB688C:
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_08AB68A0;
      }
      goto L_08AB6894;
    }
L_08AB6894:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AB68A0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 868u, 0x08A9B020u>(ctx, &aot_mem) && ctx.pc == 0x08AB68A0u) goto L_08AB68A0;
    return;
L_08AB68A0:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[18] & 255u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB6494;
      }
      goto L_08AB68B4;
    }
L_08AB68B4:
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
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB68FC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27412)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(27408)));
    ctx.gpr[7] = (2229u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(27416), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = ctx.fpr[16] / ctx.fpr[15];
    ctx.gpr[5] = (16014u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[17];
    ctx.gpr[5] = (ctx.gpr[5] | 14571u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[15] / ctx.fpr[12];
    ctx.gpr[14] = (2229u << 16u);
    ctx.gpr[13] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[14] + static_cast<std::uint32_t>(27424), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[6] = (16672u << 16u);
    aot_mem.aot_store32(ctx.gpr[13] + static_cast<std::uint32_t>(27420), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[8] = (17571u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[8] = (ctx.gpr[8] | 57344u);
    ctx.gpr[11] = (2229u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[9] = (50257u << 16u);
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(27584), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[10] = (16755u << 16u);
    ctx.gpr[15] = (2229u << 16u);
    ctx.gpr[9] = (ctx.gpr[9] | 49152u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(27428), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[22]);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.gpr[2] = (17520u << 16u);
    ctx.gpr[10] = (ctx.gpr[10] | 13107u);
    ctx.gpr[22] = (ctx.gpr[11] + static_cast<std::uint32_t>(27584));
    aot_mem.aot_store32(ctx.gpr[15] + static_cast<std::uint32_t>(27432), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[10]);
    ctx.gpr[3] = (50052u << 16u);
    ctx.gpr[2] = (ctx.gpr[2] | 16384u);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[12] = (16853u << 16u);
    ctx.gpr[3] = (ctx.gpr[3] | 32768u);
    ctx.gpr[14] = (ctx.gpr[22] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.gpr[24] = (17511u << 16u);
    ctx.gpr[12] = (ctx.gpr[12] | 39322u);
    aot_mem.aot_store32(ctx.gpr[14] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[12]);
    ctx.gpr[24] = (ctx.gpr[24] | 49152u);
    aot_mem.aot_store32(ctx.gpr[14] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[24]);
    ctx.gpr[25] = (16547u << 16u);
    ctx.gpr[16] = (50053u << 16u);
    ctx.gpr[13] = (ctx.gpr[22] + static_cast<std::uint32_t>(32));
    aot_mem.aot_store32(ctx.gpr[14] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.gpr[7] = (17538u << 16u);
    ctx.gpr[17] = (16665u << 16u);
    ctx.gpr[5] = (ctx.gpr[25] | 13107u);
    aot_mem.aot_store32(ctx.gpr[13] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[7] = (ctx.gpr[7] | 8192u);
    ctx.gpr[25] = (ctx.gpr[17] | 39322u);
    aot_mem.aot_store32(ctx.gpr[13] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[18] = (17172u << 16u);
    ctx.gpr[17] = (ctx.gpr[22] + static_cast<std::uint32_t>(48));
    aot_mem.aot_store32(ctx.gpr[13] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[18]);
    ctx.gpr[19] = (17567u << 16u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[25]);
    ctx.gpr[19] = (ctx.gpr[19] | 57344u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.gpr[20] = (16753u << 16u);
    ctx.gpr[21] = (50250u << 16u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (ctx.gpr[22] + static_cast<std::uint32_t>(64));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[20] | 39322u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB6AB0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AB6AC4u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 192u, 0x0883CF88u>(ctx, &aot_mem) && ctx.pc == 0x08AB6AC4u) goto L_08AB6AC4;
    return;
L_08AB6AC4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-12548));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(92), ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-497));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(512), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(516), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] | 32u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-513));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(520), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(528), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (32768u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(532), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(536), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (0u | 4u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(420), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(496), 0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2049));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(500), 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB6B3C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AB6B84;
      }
      goto L_08AB6B58;
    }
L_08AB6B58:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-12548));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(92), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AB6B70u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 211u, 0x0883D22Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB6B70u) goto L_08AB6B70;
    return;
L_08AB6B70:
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB6B84;
      }
      goto L_08AB6B7C;
    }
L_08AB6B7C:
    ctx.gpr[31] = (0x08AB6B84u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 242u, 0x0883D3ECu>(ctx, &aot_mem) && ctx.pc == 0x08AB6B84u) goto L_08AB6B84;
    return;
L_08AB6B84:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB6B98:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AB6BACu);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 598u, 0x08A2EB48u>(ctx, &aot_mem) && ctx.pc == 0x08AB6BACu) goto L_08AB6BAC;
    return;
L_08AB6BAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AB6C04;
      }
      goto L_08AB6BC0;
    }
L_08AB6BC0:
    ctx.gpr[31] = (0x08AB6BC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 304u, 0x088656A0u>(ctx, &aot_mem) && ctx.pc == 0x08AB6BC8u) goto L_08AB6BC8;
    return;
L_08AB6BC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(27768)));
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(112));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[7]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(27768)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (ctx.gpr[5] | 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08AB6C04;
L_08AB6C04:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB6C14:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB6C1C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-256));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(496)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(248), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(252), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AB6C64;
      }
      goto L_08AB6C3C;
    }
L_08AB6C3C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(500)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB6C64;
      }
      goto L_08AB6C48;
    }
L_08AB6C48:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (2u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB6C80;
      }
      goto L_08AB6C64;
    }
L_08AB6C64:
    ctx.gpr[31] = (0x08AB6C6Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 222u, 0x08A0DBD0u>(ctx, &aot_mem) && ctx.pc == 0x08AB6C6Cu) goto L_08AB6C6C;
    return;
L_08AB6C6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(496)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB6CA0;
      }
      goto L_08AB6C78;
    }
L_08AB6C78:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB6DDC;
      }
      goto L_08AB6C80;
    }
L_08AB6C80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (65534u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (2u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AB6E9C;
      }
      goto L_08AB6CA0;
    }
L_08AB6CA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(500)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (0u + static_cast<std::uint32_t>(-2));
      if (branch_taken) {
          goto L_08AB6D58;
      }
      goto L_08AB6CAC;
    }
L_08AB6CAC:
    ctx.gpr[31] = (0x08AB6CB4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(500)));
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 762u, 0x08A2F7D8u>(ctx, &aot_mem) && ctx.pc == 0x08AB6CB4u) goto L_08AB6CB4;
    return;
L_08AB6CB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(500)));
    ctx.gpr[31] = (0x08AB6CC0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 252u, 0x08A4D0D8u>(ctx, &aot_mem) && ctx.pc == 0x08AB6CC0u) goto L_08AB6CC0;
    return;
L_08AB6CC0:
    ctx.gpr[31] = (0x08AB6CC8u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 173u, 0x0890CF68u>(ctx, &aot_mem) && ctx.pc == 0x08AB6CC8u) goto L_08AB6CC8;
    return;
L_08AB6CC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(496)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), 0u);
    ctx.gpr[18] = (ctx.gpr[4] << 6u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[2] + ctx.gpr[18]);
      if (branch_taken) {
          goto L_08AB6CF4;
      }
      goto L_08AB6CDC;
    }
L_08AB6CDC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
        goto L_08AB6CF8;
    }
    goto L_08AB6CEC;
L_08AB6CEC:
    ctx.gpr[31] = (0x08AB6CF4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x08AB6CF4u) goto L_08AB6CF4;
    return;
L_08AB6CF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    goto L_08AB6CF8;
L_08AB6CF8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08AB6D10u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 508u, 0x08A0651Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB6D10u) goto L_08AB6D10;
    return;
L_08AB6D10:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AB6D1Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 519u, 0x08A0695Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB6D1Cu) goto L_08AB6D1C;
    return;
L_08AB6D1C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB6D40;
      }
      goto L_08AB6D2C;
    }
L_08AB6D2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB6D40;
      }
      goto L_08AB6D38;
    }
L_08AB6D38:
    ctx.gpr[31] = (0x08AB6D40u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x08AB6D40u) goto L_08AB6D40;
    return;
L_08AB6D40:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (65534u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AB6E9C;
      }
      goto L_08AB6D58;
    }
L_08AB6D58:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(496)));
    ctx.gpr[31] = (0x08AB6D64u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 213u, 0x08A5D6F0u>(ctx, &aot_mem) && ctx.pc == 0x08AB6D64u) goto L_08AB6D64;
    return;
L_08AB6D64:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), 0u);
      if (branch_taken) {
          goto L_08AB6D84;
      }
      goto L_08AB6D6C;
    }
L_08AB6D6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
        goto L_08AB6D88;
    }
    goto L_08AB6D7C;
L_08AB6D7C:
    ctx.gpr[31] = (0x08AB6D84u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x08AB6D84u) goto L_08AB6D84;
    return;
L_08AB6D84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    goto L_08AB6D88;
L_08AB6D88:
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[31] = (0x08AB6DA4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 508u, 0x08A0651Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB6DA4u) goto L_08AB6DA4;
    return;
L_08AB6DA4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AB6DB0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 519u, 0x08A0695Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB6DB0u) goto L_08AB6DB0;
    return;
L_08AB6DB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB6DD4;
      }
      goto L_08AB6DC0;
    }
L_08AB6DC0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB6DD4;
      }
      goto L_08AB6DCC;
    }
L_08AB6DCC:
    ctx.gpr[31] = (0x08AB6DD4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x08AB6DD4u) goto L_08AB6DD4;
    return;
L_08AB6DD4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB6E9C;
      }
      goto L_08AB6DDC;
    }
L_08AB6DDC:
    ctx.gpr[5] = (2230u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7864)));
    ctx.gpr[6] = (16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(112));
      if (branch_taken) {
          goto L_08AB6E1C;
      }
      goto L_08AB6DFC;
    }
L_08AB6DFC:
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<1u>(ctx.gpr[6]);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<1u, 1u>(vfpu_d); }
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
          goto L_08AB6E38;
      }
      goto L_08AB6E1C;
    }
L_08AB6E1C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7864)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<1u>(ctx.gpr[6]);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<1u, 1u>(vfpu_d); }
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
    goto L_08AB6E38;
L_08AB6E38:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(528));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7864)));
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
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AB6E64u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 565u, 0x089274ACu>(ctx, &aot_mem) && ctx.pc == 0x08AB6E64u) goto L_08AB6E64;
    return;
L_08AB6E64:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(512));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08AB6E9C;
L_08AB6E9C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(240)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(244)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(248)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(252)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(256));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB6EB4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-288));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(496)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(272), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(280), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(284), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AB6FF0;
      }
      goto L_08AB6ED4;
    }
L_08AB6ED4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(500)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (0u + static_cast<std::uint32_t>(-2));
      if (branch_taken) {
          goto L_08AB6F74;
      }
      goto L_08AB6EE0;
    }
L_08AB6EE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(500)));
    ctx.gpr[31] = (0x08AB6EECu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 252u, 0x08A4D0D8u>(ctx, &aot_mem) && ctx.pc == 0x08AB6EECu) goto L_08AB6EEC;
    return;
L_08AB6EEC:
    ctx.gpr[31] = (0x08AB6EF4u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 173u, 0x0890CF68u>(ctx, &aot_mem) && ctx.pc == 0x08AB6EF4u) goto L_08AB6EF4;
    return;
L_08AB6EF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(496)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), 0u);
    ctx.gpr[18] = (ctx.gpr[4] << 6u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[2] + ctx.gpr[18]);
      if (branch_taken) {
          goto L_08AB6F20;
      }
      goto L_08AB6F08;
    }
L_08AB6F08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
        goto L_08AB6F24;
    }
    goto L_08AB6F18;
L_08AB6F18:
    ctx.gpr[31] = (0x08AB6F20u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x08AB6F20u) goto L_08AB6F20;
    return;
L_08AB6F20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    goto L_08AB6F24;
L_08AB6F24:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[31] = (0x08AB6F3Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 508u, 0x08A0651Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB6F3Cu) goto L_08AB6F3C;
    return;
L_08AB6F3C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AB6F48u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 519u, 0x08A0695Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB6F48u) goto L_08AB6F48;
    return;
L_08AB6F48:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB6F6C;
      }
      goto L_08AB6F58;
    }
L_08AB6F58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB6F6C;
      }
      goto L_08AB6F64;
    }
L_08AB6F64:
    ctx.gpr[31] = (0x08AB6F6Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x08AB6F6Cu) goto L_08AB6F6C;
    return;
L_08AB6F6C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB6FF0;
      }
      goto L_08AB6F74;
    }
L_08AB6F74:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(496)));
    ctx.gpr[31] = (0x08AB6F80u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 213u, 0x08A5D6F0u>(ctx, &aot_mem) && ctx.pc == 0x08AB6F80u) goto L_08AB6F80;
    return;
L_08AB6F80:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), 0u);
      if (branch_taken) {
          goto L_08AB6FA0;
      }
      goto L_08AB6F88;
    }
L_08AB6F88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
        goto L_08AB6FA4;
    }
    goto L_08AB6F98;
L_08AB6F98:
    ctx.gpr[31] = (0x08AB6FA0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x08AB6FA0u) goto L_08AB6FA0;
    return;
L_08AB6FA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    goto L_08AB6FA4;
L_08AB6FA4:
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    ctx.gpr[31] = (0x08AB6FC0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 508u, 0x08A0651Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB6FC0u) goto L_08AB6FC0;
    return;
L_08AB6FC0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AB6FCCu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 519u, 0x08A0695Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB6FCCu) goto L_08AB6FCC;
    return;
L_08AB6FCC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB6FF0;
      }
      goto L_08AB6FDC;
    }
L_08AB6FDC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB6FF0;
      }
      goto L_08AB6FE8;
    }
L_08AB6FE8:
    ctx.gpr[31] = (0x08AB6FF0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x08AB6FF0u) goto L_08AB6FF0;
    return;
L_08AB6FF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AB700C;
      }
      goto L_08AB7004;
    }
L_08AB7004:
    ctx.gpr[31] = (0x08AB700Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 762u, 0x08A2F7D8u>(ctx, &aot_mem) && ctx.pc == 0x08AB700Cu) goto L_08AB700C;
    return;
L_08AB700C:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[5] = (16128u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (16544u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[31] = (0x08AB7068u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 95u, 0x088C06D4u>(ctx, &aot_mem) && ctx.pc == 0x08AB7068u) goto L_08AB7068;
    return;
L_08AB7068:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(272)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(280)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(284)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(288));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB7080:
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27684)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[5] = (2229u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(27680)));
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[10] = (2229u << 16u);
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(27712)));
    ctx.gpr[11] = (2229u << 16u);
    ctx.gpr[14] = (2229u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.gpr[15] = (2229u << 16u);
    ctx.gpr[5] = (16014u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 14571u);
    ctx.gpr[3] = (2229u << 16u);
    ctx.gpr[2] = (2229u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[17];
    ctx.gpr[9] = (16672u << 16u);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(27688), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(27708)));
    aot_mem.aot_store32(ctx.gpr[14] + static_cast<std::uint32_t>(27716), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[15] + static_cast<std::uint32_t>(27724), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[7] = (16281u << 16u);
    ctx.gpr[8] = (16268u << 16u);
    ctx.gpr[12] = (2229u << 16u);
    ctx.gpr[6] = (ctx.gpr[7] | 39322u);
    ctx.gpr[13] = (2229u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[16] / ctx.fpr[15];
    ctx.gpr[7] = (ctx.gpr[8] | 52429u);
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[24] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(27696), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[17] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(27692), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[9]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(27700), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[13] + static_cast<std::uint32_t>(27704), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(27720), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(27728), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB7148:
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
L_08AB7174:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2232u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AB7188u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5992));
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 532u, 0x088A75FCu>(ctx, &aot_mem) && ctx.pc == 0x08AB7188u) goto L_08AB7188;
    return;
L_08AB7188:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB7194:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2232u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AB71A8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5992));
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 472u, 0x088ADE40u>(ctx, &aot_mem) && ctx.pc == 0x08AB71A8u) goto L_08AB71A8;
    return;
L_08AB71A8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB71B4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AB71C8u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 711u, 0x089CAF64u>(ctx, &aot_mem) && ctx.pc == 0x08AB71C8u) goto L_08AB71C8;
    return;
L_08AB71C8:
    ctx.gpr[31] = (0x08AB71D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 561u, 0x089C661Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB71D0u) goto L_08AB71D0;
    return;
L_08AB71D0:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08AB71DCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-16912));
    goto L_08AB7148;
L_08AB71DC:
    ctx.gpr[4] = (0u | 258u);
    ctx.gpr[31] = (0x08AB71E8u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 659u, 0x089CAC28u>(ctx, &aot_mem) && ctx.pc == 0x08AB71E8u) goto L_08AB71E8;
    return;
L_08AB71E8:
    ctx.gpr[4] = (0u | 264u);
    ctx.gpr[31] = (0x08AB71F4u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 659u, 0x089CAC28u>(ctx, &aot_mem) && ctx.pc == 0x08AB71F4u) goto L_08AB71F4;
    return;
L_08AB71F4:
    ctx.gpr[4] = (0u | 269u);
    ctx.gpr[31] = (0x08AB7200u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 659u, 0x089CAC28u>(ctx, &aot_mem) && ctx.pc == 0x08AB7200u) goto L_08AB7200;
    return;
L_08AB7200:
    ctx.gpr[4] = (0u | 270u);
    ctx.gpr[31] = (0x08AB720Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 659u, 0x089CAC28u>(ctx, &aot_mem) && ctx.pc == 0x08AB720Cu) goto L_08AB720C;
    return;
L_08AB720C:
    ctx.gpr[4] = (0u | 270u);
    ctx.gpr[31] = (0x08AB7218u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 659u, 0x089CAC28u>(ctx, &aot_mem) && ctx.pc == 0x08AB7218u) goto L_08AB7218;
    return;
L_08AB7218:
    ctx.gpr[4] = (0u | 272u);
    ctx.gpr[31] = (0x08AB7224u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 659u, 0x089CAC28u>(ctx, &aot_mem) && ctx.pc == 0x08AB7224u) goto L_08AB7224;
    return;
L_08AB7224:
    ctx.gpr[4] = (0u | 273u);
    ctx.gpr[31] = (0x08AB7230u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 659u, 0x089CAC28u>(ctx, &aot_mem) && ctx.pc == 0x08AB7230u) goto L_08AB7230;
    return;
L_08AB7230:
    ctx.gpr[4] = (0u | 274u);
    ctx.gpr[31] = (0x08AB723Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 659u, 0x089CAC28u>(ctx, &aot_mem) && ctx.pc == 0x08AB723Cu) goto L_08AB723C;
    return;
L_08AB723C:
    ctx.gpr[4] = (0u | 277u);
    ctx.gpr[31] = (0x08AB7248u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 659u, 0x089CAC28u>(ctx, &aot_mem) && ctx.pc == 0x08AB7248u) goto L_08AB7248;
    return;
L_08AB7248:
    ctx.gpr[4] = (0u | 281u);
    ctx.gpr[31] = (0x08AB7254u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 659u, 0x089CAC28u>(ctx, &aot_mem) && ctx.pc == 0x08AB7254u) goto L_08AB7254;
    return;
L_08AB7254:
    ctx.gpr[4] = (0u | 276u);
    ctx.gpr[31] = (0x08AB7260u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 659u, 0x089CAC28u>(ctx, &aot_mem) && ctx.pc == 0x08AB7260u) goto L_08AB7260;
    return;
L_08AB7260:
    ctx.gpr[4] = (0u | 287u);
    ctx.gpr[31] = (0x08AB726Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 659u, 0x089CAC28u>(ctx, &aot_mem) && ctx.pc == 0x08AB726Cu) goto L_08AB726C;
    return;
L_08AB726C:
    ctx.gpr[4] = (0u | 290u);
    ctx.gpr[31] = (0x08AB7278u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 659u, 0x089CAC28u>(ctx, &aot_mem) && ctx.pc == 0x08AB7278u) goto L_08AB7278;
    return;
L_08AB7278:
    ctx.gpr[4] = (0u | 285u);
    ctx.gpr[31] = (0x08AB7284u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 659u, 0x089CAC28u>(ctx, &aot_mem) && ctx.pc == 0x08AB7284u) goto L_08AB7284;
    return;
L_08AB7284:
    ctx.gpr[4] = (0u | 291u);
    ctx.gpr[31] = (0x08AB7290u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 659u, 0x089CAC28u>(ctx, &aot_mem) && ctx.pc == 0x08AB7290u) goto L_08AB7290;
    return;
L_08AB7290:
    ctx.gpr[16] = (2228u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-30860)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08AB72A4u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(288)));
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 659u, 0x089CAC28u>(ctx, &aot_mem) && ctx.pc == 0x08AB72A4u) goto L_08AB72A4;
    return;
L_08AB72A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-30860)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08AB72B4u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(284)));
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 659u, 0x089CAC28u>(ctx, &aot_mem) && ctx.pc == 0x08AB72B4u) goto L_08AB72B4;
    return;
L_08AB72B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-30860)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08AB72C4u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(294)));
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 659u, 0x089CAC28u>(ctx, &aot_mem) && ctx.pc == 0x08AB72C4u) goto L_08AB72C4;
    return;
L_08AB72C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-30860)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08AB72D4u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(272)));
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 659u, 0x089CAC28u>(ctx, &aot_mem) && ctx.pc == 0x08AB72D4u) goto L_08AB72D4;
    return;
L_08AB72D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-30860)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08AB72E4u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(274)));
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 659u, 0x089CAC28u>(ctx, &aot_mem) && ctx.pc == 0x08AB72E4u) goto L_08AB72E4;
    return;
L_08AB72E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-30860)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08AB72F4u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(276)));
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 659u, 0x089CAC28u>(ctx, &aot_mem) && ctx.pc == 0x08AB72F4u) goto L_08AB72F4;
    return;
L_08AB72F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-30860)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08AB7304u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(278)));
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 659u, 0x089CAC28u>(ctx, &aot_mem) && ctx.pc == 0x08AB7304u) goto L_08AB7304;
    return;
L_08AB7304:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-30860)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08AB7314u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(280)));
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 659u, 0x089CAC28u>(ctx, &aot_mem) && ctx.pc == 0x08AB7314u) goto L_08AB7314;
    return;
L_08AB7314:
    ctx.gpr[31] = (0x08AB731Cu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 711u, 0x089CAF64u>(ctx, &aot_mem) && ctx.pc == 0x08AB731Cu) goto L_08AB731C;
    return;
L_08AB731C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB732C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AB735Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-16880));
    goto L_08AB7148;
L_08AB735C:
    ctx.gpr[31] = (0x08AB7364u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 630u, 0x08942DF8u>(ctx, &aot_mem) && ctx.pc == 0x08AB7364u) goto L_08AB7364;
    return;
L_08AB7364:
    ctx.gpr[16] = (2233u << 16u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AB7380u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(428), static_cast<std::uint8_t>(ctx.gpr[5]));
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 639u, 0x08942EE0u>(ctx, &aot_mem) && ctx.pc == 0x08AB7380u) goto L_08AB7380;
    return;
L_08AB7380:
    ctx.gpr[31] = (0x08AB7388u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 604u, 0x089C68BCu>(ctx, &aot_mem) && ctx.pc == 0x08AB7388u) goto L_08AB7388;
    return;
L_08AB7388:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (49864u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08AB73D8;
      }
      goto L_08AB73A8;
    }
L_08AB73A8:
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[31] = (0x08AB73B8u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 448u, 0x088C2E78u>(ctx, &aot_mem) && ctx.pc == 0x08AB73B8u) goto L_08AB73B8;
    return;
L_08AB73B8:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x08AB73C4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 847u, 0x08A2FC04u>(ctx, &aot_mem) && ctx.pc == 0x08AB73C4u) goto L_08AB73C4;
    return;
L_08AB73C4:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[0];
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    goto L_08AB73D8;
L_08AB73D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(27780)));
    ctx.gpr[31] = (0x08AB7400u);
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 260u, 0x089A527Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB7400u) goto L_08AB7400;
    return;
L_08AB7400:
    ctx.gpr[31] = (0x08AB7408u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 641u, 0x08942F1Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB7408u) goto L_08AB7408;
    return;
L_08AB7408:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27776)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(744)));
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(19148));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08AB743Cu);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 90u, 0x08A28BB8u>(ctx, &aot_mem) && ctx.pc == 0x08AB743Cu) goto L_08AB743C;
    return;
L_08AB743C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB7448;
      }
      goto L_08AB7444;
    }
L_08AB7444:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), 0u);
    goto L_08AB7448;
L_08AB7448:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(64));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08AB7460u);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AB7460u) goto L_08AB7460;
    return;
L_08AB7460:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[19] + static_cast<std::uint32_t>(88), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(40));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08AB7484u);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AB7484u) goto L_08AB7484;
    return;
L_08AB7484:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(744), ctx.gpr[18]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x08AB7494u);
    ctx.gpr[4] = (0u | 224u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08AB7494u) goto L_08AB7494;
    return;
L_08AB7494:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB74AC;
      }
      goto L_08AB74A0;
    }
L_08AB74A0:
    ctx.gpr[31] = (0x08AB74A8u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 33u, 0x08A3433Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB74A8u) goto L_08AB74A8;
    return;
L_08AB74A8:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_08AB74AC;
L_08AB74AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(152));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08AB74C4u);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AB74C4u) goto L_08AB74C4;
    return;
L_08AB74C4:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5992));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(116));
    ctx.gpr[31] = (0x08AB74D8u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 57u, 0x089C0478u>(ctx, &aot_mem) && ctx.pc == 0x08AB74D8u) goto L_08AB74D8;
    return;
L_08AB74D8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AB74E4u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 426u, 0x08A5A2CCu>(ctx, &aot_mem) && ctx.pc == 0x08AB74E4u) goto L_08AB74E4;
    return;
L_08AB74E4:
    ctx.gpr[31] = (0x08AB74ECu);
    ctx.gpr[4] = (0u | 224u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08AB74ECu) goto L_08AB74EC;
    return;
L_08AB74EC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB7500;
      }
      goto L_08AB74F8;
    }
L_08AB74F8:
    ctx.gpr[31] = (0x08AB7500u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 777u, 0x0897FFDCu>(ctx, &aot_mem) && ctx.pc == 0x08AB7500u) goto L_08AB7500;
    return;
L_08AB7500:
    ctx.gpr[31] = (0x08AB7508u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08AB7508u) goto L_08AB7508;
    return;
L_08AB7508:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 6u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08AB751Cu);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 601u, 0x0899F2F4u>(ctx, &aot_mem) && ctx.pc == 0x08AB751Cu) goto L_08AB751C;
    return;
L_08AB751C:
    ctx.gpr[31] = (0x08AB7524u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08AB7524u) goto L_08AB7524;
    return;
L_08AB7524:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 17u);
    ctx.gpr[6] = (0u | 999u);
    ctx.gpr[31] = (0x08AB7538u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 601u, 0x0899F2F4u>(ctx, &aot_mem) && ctx.pc == 0x08AB7538u) goto L_08AB7538;
    return;
L_08AB7538:
    ctx.gpr[31] = (0x08AB7540u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08AB7540u) goto L_08AB7540;
    return;
L_08AB7540:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AB754Cu);
    ctx.gpr[5] = (0u | 17u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 598u, 0x0899F2C4u>(ctx, &aot_mem) && ctx.pc == 0x08AB754Cu) goto L_08AB754C;
    return;
L_08AB754C:
    ctx.gpr[31] = (0x08AB7554u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 639u, 0x08942EE0u>(ctx, &aot_mem) && ctx.pc == 0x08AB7554u) goto L_08AB7554;
    return;
L_08AB7554:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
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
L_08AB7574:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[17]);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AB75B4u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 561u, 0x089C661Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB75B4u) goto L_08AB75B4;
    return;
L_08AB75B4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AB75C0u);
    ctx.gpr[5] = (0u | 22u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 659u, 0x089CAC28u>(ctx, &aot_mem) && ctx.pc == 0x08AB75C0u) goto L_08AB75C0;
    return;
L_08AB75C0:
    ctx.gpr[31] = (0x08AB75C8u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 711u, 0x089CAF64u>(ctx, &aot_mem) && ctx.pc == 0x08AB75C8u) goto L_08AB75C8;
    return;
L_08AB75C8:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[31] = (0x08AB75D8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 148u, 0x08A28E68u>(ctx, &aot_mem) && ctx.pc == 0x08AB75D8u) goto L_08AB75D8;
    return;
L_08AB75D8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB762C;
      }
      goto L_08AB75E0;
    }
L_08AB75E0:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x08AB75ECu);
    ctx.gpr[4] = (0u | 1472u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 510u, 0x0889E8B4u>(ctx, &aot_mem) && ctx.pc == 0x08AB75ECu) goto L_08AB75EC;
    return;
L_08AB75EC:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_08AB7608;
      }
      goto L_08AB75F8;
    }
L_08AB75F8:
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AB7604u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 565u, 0x08A378CCu>(ctx, &aot_mem) && ctx.pc == 0x08AB7604u) goto L_08AB7604;
    return;
L_08AB7604:
    ctx.gpr[18] = (ctx.gpr[20] | 0u);
    goto L_08AB7608;
L_08AB7608:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(1333))))));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] | 1u);
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(1333), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08AB76B8;
      }
      goto L_08AB762C;
    }
L_08AB762C:
    ctx.gpr[31] = (0x08AB7634u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 136u, 0x08A28DD4u>(ctx, &aot_mem) && ctx.pc == 0x08AB7634u) goto L_08AB7634;
    return;
L_08AB7634:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB767C;
      }
      goto L_08AB763C;
    }
L_08AB763C:
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[31] = (0x08AB7648u);
    ctx.gpr[4] = (0u | 1760u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 510u, 0x0889E8B4u>(ctx, &aot_mem) && ctx.pc == 0x08AB7648u) goto L_08AB7648;
    return;
L_08AB7648:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[21] == 0u;
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
      if (branch_taken) {
          goto L_08AB7664;
      }
      goto L_08AB7654;
    }
L_08AB7654:
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AB7660u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 357u, 0x0880E120u>(ctx, &aot_mem) && ctx.pc == 0x08AB7660u) goto L_08AB7660;
    return;
L_08AB7660:
    ctx.gpr[20] = (ctx.gpr[21] | 0u);
    goto L_08AB7664;
L_08AB7664:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (ctx.gpr[20] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08AB76B8;
      }
      goto L_08AB767C;
    }
L_08AB767C:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[31] = (0x08AB7688u);
    ctx.gpr[4] = (0u | 1760u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 510u, 0x0889E8B4u>(ctx, &aot_mem) && ctx.pc == 0x08AB7688u) goto L_08AB7688;
    return;
L_08AB7688:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_08AB76A4;
      }
      goto L_08AB7694;
    }
L_08AB7694:
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AB76A0u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 357u, 0x0880E120u>(ctx, &aot_mem) && ctx.pc == 0x08AB76A0u) goto L_08AB76A0;
    return;
L_08AB76A0:
    ctx.gpr[19] = (ctx.gpr[20] | 0u);
    goto L_08AB76A4;
L_08AB76A4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (ctx.gpr[19] | 0u);
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    goto L_08AB76B8;
L_08AB76B8:
    ctx.gpr[4] = (49864u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[26] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AB76E0;
      }
      goto L_08AB76D0;
    }
L_08AB76D0:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x08AB76DCu);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 448u, 0x088C2E78u>(ctx, &aot_mem) && ctx.pc == 0x08AB76DCu) goto L_08AB76DC;
    return;
L_08AB76DC:
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08AB76E0;
L_08AB76E0:
    ctx.gpr[31] = (0x08AB76E8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 847u, 0x08A2FC04u>(ctx, &aot_mem) && ctx.pc == 0x08AB76E8u) goto L_08AB76E8;
    return;
L_08AB76E8:
    ctx.fpr[12] = ctx.fpr[26] + ctx.fpr[0];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (16457u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (17204u << 16u);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    ctx.gpr[31] = (0x08AB7728u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 43u, 0x08A287ACu>(ctx, &aot_mem) && ctx.pc == 0x08AB7728u) goto L_08AB7728;
    return;
L_08AB7728:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-497));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] | 64u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(597))))));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] | 8u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(597), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x08AB7750u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 206u, 0x089ED510u>(ctx, &aot_mem) && ctx.pc == 0x08AB7750u) goto L_08AB7750;
    return;
L_08AB7750:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(398), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (16656u << 16u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(399), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(397), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(597))))));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(395), static_cast<std::uint8_t>(0u));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(404), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-17));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(396), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(597), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(408), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(13820)));
    ctx.gpr[31] = (0x08AB779Cu);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 281u, 0x08871AF4u>(ctx, &aot_mem) && ctx.pc == 0x08AB779Cu) goto L_08AB779C;
    return;
L_08AB779C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(599))))));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(326), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (ctx.gpr[4] | 4u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(599), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(660), ctx.gpr[4]);
    ctx.gpr[31] = (0x08AB77BCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 47u, 0x088C03D4u>(ctx, &aot_mem) && ctx.pc == 0x08AB77BCu) goto L_08AB77BC;
    return;
L_08AB77BC:
    ctx.gpr[31] = (0x08AB77C4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 148u, 0x08A28E68u>(ctx, &aot_mem) && ctx.pc == 0x08AB77C4u) goto L_08AB77C4;
    return;
L_08AB77C4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB77F8;
      }
      goto L_08AB77CC;
    }
L_08AB77CC:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08AB77D8u);
    ctx.gpr[4] = (0u | 240u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08AB77D8u) goto L_08AB77D8;
    return;
L_08AB77D8:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08AB77F0;
      }
      goto L_08AB77E4;
    }
L_08AB77E4:
    ctx.gpr[31] = (0x08AB77ECu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 390u, 0x089D9FBCu>(ctx, &aot_mem) && ctx.pc == 0x08AB77ECu) goto L_08AB77EC;
    return;
L_08AB77EC:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08AB77F0;
L_08AB77F0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08AB7820;
      }
      goto L_08AB77F8;
    }
L_08AB77F8:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08AB7804u);
    ctx.gpr[4] = (0u | 364u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08AB7804u) goto L_08AB7804;
    return;
L_08AB7804:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08AB781C;
      }
      goto L_08AB7810;
    }
L_08AB7810:
    ctx.gpr[31] = (0x08AB7818u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 247u, 0x08ABD7E0u>(ctx, &aot_mem) && ctx.pc == 0x08AB7818u) goto L_08AB7818;
    return;
L_08AB7818:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08AB781C;
L_08AB781C:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    goto L_08AB7820;
L_08AB7820:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB7854:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27740)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[5] = (2229u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(27736)));
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.gpr[9] = (2229u << 16u);
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(27764)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[17];
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(27744), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = ctx.fpr[16] / ctx.fpr[15];
    ctx.gpr[5] = (16014u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 14571u);
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[19] / ctx.fpr[12];
    ctx.gpr[11] = (2229u << 16u);
    ctx.gpr[10] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(27752), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[7] = (16672u << 16u);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(27748), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[8] = (15744u << 16u);
    ctx.gpr[2] = (2229u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[3] = (2229u << 16u);
    ctx.gpr[13] = (2232u << 16u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(27756), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.gpr[12] = (2229u << 16u);
    ctx.gpr[4] = (ctx.gpr[13] + static_cast<std::uint32_t>(5992));
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(27760), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AB78F8u);
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(27768), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 444u, 0x088A6FF4u>(ctx, &aot_mem) && ctx.pc == 0x08AB78F8u) goto L_08AB78F8;
    return;
L_08AB78F8:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x08AB7904u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(27784));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 251u, 0x08AF5420u>(ctx, &aot_mem) && ctx.pc == 0x08AB7904u) goto L_08AB7904;
    return;
L_08AB7904:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB7910:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[6]);
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24700)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24700)));
        goto L_08AB796C;
    }
    goto L_08AB7940;
L_08AB7940:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08AB794Cu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08AB794Cu) goto L_08AB794C;
    return;
L_08AB794C:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB7964;
      }
      goto L_08AB7958;
    }
L_08AB7958:
    ctx.gpr[31] = (0x08AB7960u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08AB7960u) goto L_08AB7960;
    return;
L_08AB7960:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08AB7964;
L_08AB7964:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24700)));
    goto L_08AB796C;
L_08AB796C:
    ctx.gpr[31] = (0x08AB7974u);
    ctx.gpr[5] = (ctx.gpr[19] + static_cast<std::uint32_t>(11));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08AB7974u) goto L_08AB7974;
    return;
L_08AB7974:
    ctx.gpr[5] = (rt.memory().aot_load_word_right(ctx.gpr[19] + static_cast<std::uint32_t>(3), ctx.gpr[5]));
    ctx.gpr[5] = (rt.memory().aot_load_word_left(ctx.gpr[19] + static_cast<std::uint32_t>(6), ctx.gpr[5]));
    ctx.gpr[6] = (rt.memory().aot_load_word_right(ctx.gpr[19] + static_cast<std::uint32_t>(7), ctx.gpr[6]));
    ctx.gpr[6] = (rt.memory().aot_load_word_left(ctx.gpr[19] + static_cast<std::uint32_t>(10), ctx.gpr[6]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08AB7998u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 256u, 0x08879648u>(ctx, &aot_mem) && ctx.pc == 0x08AB7998u) goto L_08AB7998;
    return;
L_08AB7998:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB79B4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-336));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(304), ctx.gpr[16]);
    ctx.gpr[6] = (11u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(308), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(312), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(316), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(320), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(324), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AB79E4u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(181));
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 562u, 0x08ACE7B4u>(ctx, &aot_mem) && ctx.pc == 0x08AB79E4u) goto L_08AB79E4;
    return;
L_08AB79E4:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08AB79F8u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 423u, 0x08A4B554u>(ctx, &aot_mem) && ctx.pc == 0x08AB79F8u) goto L_08AB79F8;
    return;
L_08AB79F8:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AB7A08u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 440u, 0x08A4B658u>(ctx, &aot_mem) && ctx.pc == 0x08AB7A08u) goto L_08AB7A08;
    return;
L_08AB7A08:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[31] = (0x08AB7A1Cu);
    ctx.gpr[16] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 440u, 0x08A4B658u>(ctx, &aot_mem) && ctx.pc == 0x08AB7A1Cu) goto L_08AB7A1C;
    return;
L_08AB7A1C:
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08AB7A2Cu);
    ctx.gpr[20] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 498u, 0x08AEDD14u>(ctx, &aot_mem) && ctx.pc == 0x08AB7A2Cu) goto L_08AB7A2C;
    return;
L_08AB7A2C:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(12));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-5692)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(34), static_cast<std::uint8_t>(ctx.gpr[5]));
    rt.memory().aot_store_word_right(ctx.gpr[29] + static_cast<std::uint32_t>(35), ctx.gpr[16]);
    rt.memory().aot_store_word_left(ctx.gpr[29] + static_cast<std::uint32_t>(38), ctx.gpr[16]);
    rt.memory().aot_store_word_right(ctx.gpr[29] + static_cast<std::uint32_t>(39), ctx.gpr[20]);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    rt.memory().aot_store_word_left(ctx.gpr[29] + static_cast<std::uint32_t>(42), ctx.gpr[20]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(43));
    ctx.gpr[31] = (0x08AB7A64u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 411u, 0x08AED6BCu>(ctx, &aot_mem) && ctx.pc == 0x08AB7A64u) goto L_08AB7A64;
    return;
L_08AB7A64:
    ctx.gpr[16] = (2232u << 16u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(5992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AB7A78u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 642u, 0x088A7D80u>(ctx, &aot_mem) && ctx.pc == 0x08AB7A78u) goto L_08AB7A78;
    return;
L_08AB7A78:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB7A98;
      }
      goto L_08AB7A80;
    }
L_08AB7A80:
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(300), static_cast<std::uint16_t>(0u));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(300))))));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08AB7A98u);
    ctx.gpr[7] = (0u | 0u);
    goto L_08AB7910;
L_08AB7A98:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AB7AA8u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 132u, 0x088A8764u>(ctx, &aot_mem) && ctx.pc == 0x08AB7AA8u) goto L_08AB7AA8;
    return;
L_08AB7AA8:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(312)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(316)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(320)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(324)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(336));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB7ACC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AB7AE4u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-16716));
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 398u, 0x08A4B3B8u>(ctx, &aot_mem) && ctx.pc == 0x08AB7AE4u) goto L_08AB7AE4;
    return;
L_08AB7AE4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB7B20;
      }
      goto L_08AB7AF0;
    }
L_08AB7AF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AB7B20;
      }
      goto L_08AB7B00;
    }
L_08AB7B00:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5992));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    ctx.gpr[31] = (0x08AB7B18u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 138u, 0x088A87D4u>(ctx, &aot_mem) && ctx.pc == 0x08AB7B18u) goto L_08AB7B18;
    return;
L_08AB7B18:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB7B24;
      }
      goto L_08AB7B20;
    }
L_08AB7B20:
    ctx.gpr[2] = (0u | 0u);
    goto L_08AB7B24;
L_08AB7B24:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB7B30:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AB7B50u);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 92u, 0x0890C78Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB7B50u) goto L_08AB7B50;
    return;
L_08AB7B50:
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AB7B64u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-16716));
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 395u, 0x08A4B388u>(ctx, &aot_mem) && ctx.pc == 0x08AB7B64u) goto L_08AB7B64;
    return;
L_08AB7B64:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AB7B70u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 29u, 0x0890C2B8u>(ctx, &aot_mem) && ctx.pc == 0x08AB7B70u) goto L_08AB7B70;
    return;
L_08AB7B70:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB7B84:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[20]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[20] = (0u | 1u);
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AB7BBCu);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 562u, 0x08ACE7B4u>(ctx, &aot_mem) && ctx.pc == 0x08AB7BBCu) goto L_08AB7BBC;
    return;
L_08AB7BBC:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AB7BCCu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 440u, 0x08A4B658u>(ctx, &aot_mem) && ctx.pc == 0x08AB7BCCu) goto L_08AB7BCC;
    return;
L_08AB7BCC:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AB7BDCu);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 440u, 0x08A4B658u>(ctx, &aot_mem) && ctx.pc == 0x08AB7BDCu) goto L_08AB7BDC;
    return;
L_08AB7BDC:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x08AB7BECu);
    ctx.gpr[4] = (0u | 112u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08AB7BECu) goto L_08AB7BEC;
    return;
L_08AB7BEC:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08AB7C28;
      }
      goto L_08AB7BF8;
    }
L_08AB7BF8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AB7C04u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 610u, 0x0890B834u>(ctx, &aot_mem) && ctx.pc == 0x08AB7C04u) goto L_08AB7C04;
    return;
L_08AB7C04:
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08AB7C20u);
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 620u, 0x08936AE0u>(ctx, &aot_mem) && ctx.pc == 0x08AB7C20u) goto L_08AB7C20;
    return;
L_08AB7C20:
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08AB7C28;
L_08AB7C28:
    ctx.gpr[31] = (0x08AB7C30u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_08AB7B30;
L_08AB7C30:
    ctx.gpr[2] = (ctx.gpr[20] | 0u);
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
L_08AB7C5C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AB7C84u);
    ctx.gpr[5] = (0u | 1u);
    goto L_08AB7ACC;
L_08AB7C84:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB7CD4;
      }
      goto L_08AB7C90;
    }
L_08AB7C90:
    ctx.gpr[31] = (0x08AB7C98u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 552u, 0x0890B3DCu>(ctx, &aot_mem) && ctx.pc == 0x08AB7C98u) goto L_08AB7C98;
    return;
L_08AB7C98:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (0u | 2u);
      if (branch_taken) {
          goto L_08AB7CDC;
      }
      goto L_08AB7CA4;
    }
L_08AB7CA4:
    ctx.gpr[31] = (0x08AB7CACu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 687u, 0x0893708Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB7CACu) goto L_08AB7CAC;
    return;
L_08AB7CAC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08AB7CB8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BB6Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB7CB8u) goto L_08AB7CB8;
    return;
L_08AB7CB8:
    ctx.gpr[31] = (0x08AB7CC0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 687u, 0x0893708Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB7CC0u) goto L_08AB7CC0;
    return;
L_08AB7CC0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x08AB7CCCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BB6Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB7CCCu) goto L_08AB7CCC;
    return;
L_08AB7CCC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08AB7D20;
      }
      goto L_08AB7CD4;
    }
L_08AB7CD4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AB7D20;
      }
      goto L_08AB7CDC;
    }
L_08AB7CDC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AB7CE8u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 440u, 0x08A4B658u>(ctx, &aot_mem) && ctx.pc == 0x08AB7CE8u) goto L_08AB7CE8;
    return;
L_08AB7CE8:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AB7CF8u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 440u, 0x08A4B658u>(ctx, &aot_mem) && ctx.pc == 0x08AB7CF8u) goto L_08AB7CF8;
    return;
L_08AB7CF8:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AB7D08u);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 610u, 0x0890B834u>(ctx, &aot_mem) && ctx.pc == 0x08AB7D08u) goto L_08AB7D08;
    return;
L_08AB7D08:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x08AB7D1Cu);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 680u, 0x08936F04u>(ctx, &aot_mem) && ctx.pc == 0x08AB7D1Cu) goto L_08AB7D1C;
    return;
L_08AB7D1C:
    ctx.gpr[2] = (0u | 0u);
    goto L_08AB7D20;
L_08AB7D20:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
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
L_08AB7D40:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AB7D64u);
    ctx.gpr[5] = (0u | 1u);
    goto L_08AB7ACC;
L_08AB7D64:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB7DF8;
      }
      goto L_08AB7D70;
    }
L_08AB7D70:
    ctx.gpr[31] = (0x08AB7D78u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 552u, 0x0890B3DCu>(ctx, &aot_mem) && ctx.pc == 0x08AB7D78u) goto L_08AB7D78;
    return;
L_08AB7D78:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB7DDC;
      }
      goto L_08AB7D84;
    }
L_08AB7D84:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[31] = (0x08AB7D94u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 423u, 0x08A4B554u>(ctx, &aot_mem) && ctx.pc == 0x08AB7D94u) goto L_08AB7D94;
    return;
L_08AB7D94:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08AB7DA4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 498u, 0x08AEDD14u>(ctx, &aot_mem) && ctx.pc == 0x08AB7DA4u) goto L_08AB7DA4;
    return;
L_08AB7DA4:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AB7DB4u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 309u, 0x08AF9624u>(ctx, &aot_mem) && ctx.pc == 0x08AB7DB4u) goto L_08AB7DB4;
    return;
L_08AB7DB4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AB7DC0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 671u, 0x08936E54u>(ctx, &aot_mem) && ctx.pc == 0x08AB7DC0u) goto L_08AB7DC0;
    return;
L_08AB7DC0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-21008));
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[4];
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_08AB7E00;
      }
      goto L_08AB7DD4;
    }
L_08AB7DD4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB7E0C;
      }
      goto L_08AB7DDC;
    }
L_08AB7DDC:
    ctx.gpr[31] = (0x08AB7DE4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 676u, 0x08936EB8u>(ctx, &aot_mem) && ctx.pc == 0x08AB7DE4u) goto L_08AB7DE4;
    return;
L_08AB7DE4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x08AB7DF0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 680u, 0x0890BC14u>(ctx, &aot_mem) && ctx.pc == 0x08AB7DF0u) goto L_08AB7DF0;
    return;
L_08AB7DF0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08AB7E10;
      }
      goto L_08AB7DF8;
    }
L_08AB7DF8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AB7E10;
      }
      goto L_08AB7E00;
    }
L_08AB7E00:
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AB7E0Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5696));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 730u, 0x08AA367Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB7E0Cu) goto L_08AB7E0C;
    return;
L_08AB7E0C:
    ctx.gpr[2] = (0u | 0u);
    goto L_08AB7E10;
L_08AB7E10:
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
L_08AB7E28:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AB7E4Cu);
    ctx.gpr[5] = (0u | 1u);
    goto L_08AB7ACC;
L_08AB7E4C:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB7ED8;
      }
      goto L_08AB7E58;
    }
L_08AB7E58:
    ctx.gpr[31] = (0x08AB7E60u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 552u, 0x0890B3DCu>(ctx, &aot_mem) && ctx.pc == 0x08AB7E60u) goto L_08AB7E60;
    return;
L_08AB7E60:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (0u | 2u);
      if (branch_taken) {
          goto L_08AB7EA8;
      }
      goto L_08AB7E6C;
    }
L_08AB7E6C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AB7E78u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 610u, 0x0890B834u>(ctx, &aot_mem) && ctx.pc == 0x08AB7E78u) goto L_08AB7E78;
    return;
L_08AB7E78:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AB7E88u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 610u, 0x0890B834u>(ctx, &aot_mem) && ctx.pc == 0x08AB7E88u) goto L_08AB7E88;
    return;
L_08AB7E88:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (16395u << 16u);
      if (branch_taken) {
          goto L_08AB7EE0;
      }
      goto L_08AB7EA0;
    }
L_08AB7EA0:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08AB7EF0;
      }
      goto L_08AB7EA8;
    }
L_08AB7EA8:
    ctx.gpr[31] = (0x08AB7EB0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 695u, 0x0893714Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB7EB0u) goto L_08AB7EB0;
    return;
L_08AB7EB0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08AB7EBCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BB6Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB7EBCu) goto L_08AB7EBC;
    return;
L_08AB7EBC:
    ctx.gpr[31] = (0x08AB7EC4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 695u, 0x0893714Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB7EC4u) goto L_08AB7EC4;
    return;
L_08AB7EC4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x08AB7ED0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BB6Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB7ED0u) goto L_08AB7ED0;
    return;
L_08AB7ED0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08AB7F00;
      }
      goto L_08AB7ED8;
    }
L_08AB7ED8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AB7F00;
      }
      goto L_08AB7EE0;
    }
L_08AB7EE0:
    ctx.gpr[4] = (ctx.gpr[4] | 8548u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08AB7EF0;
L_08AB7EF0:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AB7EFCu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 691u, 0x089370D8u>(ctx, &aot_mem) && ctx.pc == 0x08AB7EFCu) goto L_08AB7EFC;
    return;
L_08AB7EFC:
    ctx.gpr[2] = (0u | 0u);
    goto L_08AB7F00;
L_08AB7F00:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB7F1C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AB7F40u);
    ctx.gpr[5] = (0u | 1u);
    goto L_08AB7ACC;
L_08AB7F40:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB7F68;
      }
      goto L_08AB7F4C;
    }
L_08AB7F4C:
    ctx.gpr[31] = (0x08AB7F54u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 552u, 0x0890B3DCu>(ctx, &aot_mem) && ctx.pc == 0x08AB7F54u) goto L_08AB7F54;
    return;
L_08AB7F54:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB7F70;
      }
      goto L_08AB7F60;
    }
L_08AB7F60:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB7FC8;
      }
      goto L_08AB7F68;
    }
L_08AB7F68:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0173_entry, 173u, 9u, 0x08AB8090u>(ctx, &aot_mem); return;
      }
      goto L_08AB7F70;
    }
L_08AB7F70:
    ctx.gpr[31] = (0x08AB7F78u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 727u, 0x089373FCu>(ctx, &aot_mem) && ctx.pc == 0x08AB7F78u) goto L_08AB7F78;
    return;
L_08AB7F78:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1)));
    ctx.gpr[4] = (ctx.gpr[4] << 24u);
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] << 8u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_08AB7FB8;
      }
      goto L_08AB7FAC;
    }
L_08AB7FAC:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_08AB7FB8;
L_08AB7FB8:
    ctx.gpr[31] = (0x08AB7FC0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BB6Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB7FC0u) goto L_08AB7FC0;
    return;
L_08AB7FC0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0173_entry, 173u, 9u, 0x08AB8090u>(ctx, &aot_mem); return;
      }
      goto L_08AB7FC8;
    }
L_08AB7FC8:
    ctx.gpr[31] = (0x08AB7FD0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 552u, 0x0890B3DCu>(ctx, &aot_mem) && ctx.pc == 0x08AB7FD0u) goto L_08AB7FD0;
    return;
L_08AB7FD0:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0173_entry, 173u, 3u, 0x08AB8020u>(ctx, &aot_mem); return;
      }
      goto L_08AB7FDC;
    }
L_08AB7FDC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AB7FE8u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 743u, 0x089BF884u>(ctx, &aot_mem) && ctx.pc == 0x08AB7FE8u) goto L_08AB7FE8;
    return;
L_08AB7FE8:
    ctx.gpr[4] = (ctx.gpr[2] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(255));
    ctx.gpr[5] = (ctx.gpr[4] >> 24u);
    ctx.gpr[6] = (ctx.gpr[4] >> 16u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (ctx.gpr[4] >> 8u);
    ctx.pc = 0x08AB8000u; return;
}

void recomp_unit_0172(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0172_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_172(Runtime &runtime) {
    runtime.register_generated_unit(172u, 0x08AB4000u, 16384u, &recomp_unit_0172, &recomp_unit_0172_entry);
    runtime.register_function(0x08AB4004u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4010u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4028u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4068u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4074u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB40A4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB40B0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB40DCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB40F0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB40F8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB40FCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4128u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4134u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB414Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4170u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4178u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4188u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4190u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4194u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB41D8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB41ECu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB420Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4258u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4284u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB42C8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB42F8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4338u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4398u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB43A8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB43B4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4520u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4690u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB46B4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB46B8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB46C0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB46CCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB46D4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB46E0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB46ECu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB46F8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB46FCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4700u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4708u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB472Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4758u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4760u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4768u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB47C0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB47D4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4840u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4850u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB485Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4868u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4874u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4878u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB487Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4884u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB48B8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4924u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB492Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4944u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4954u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4994u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB49C0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4A68u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4A70u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4A7Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4AD4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4AE8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4AECu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4D94u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4DB0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4DD8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4E0Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4EB0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4EC8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4EE0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4EECu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4F14u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4F20u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4F3Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4F48u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4F64u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4F70u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4F8Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4F98u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4FB4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4FC0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4FDCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4FE8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4FF4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4FFCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5010u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5020u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5038u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5058u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB506Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5080u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB50B0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB50C0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB50D4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB50E8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB50FCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB510Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB512Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB514Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5160u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5174u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB51A4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB51B4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB51C8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB51D8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB51F8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB522Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB523Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5250u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5260u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5268u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5270u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5278u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5280u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB528Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5294u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB52A0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB52A8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB52B8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB52C8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB52D8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB52F0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5300u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5324u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5350u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB535Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5368u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5374u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5380u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB538Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5398u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB53A4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB53B0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB53BCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB53C8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB53D4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB53E8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB540Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5418u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5420u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB542Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5438u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5444u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5450u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB545Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5468u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5474u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5480u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB548Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB54A0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB54B0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB54DCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB54ECu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5500u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB552Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5544u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5568u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5578u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5588u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5590u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5598u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB55A0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB55C0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB55D8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB55E0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB55F4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB55F8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5614u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5628u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5648u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB567Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5684u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5694u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB569Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB56D8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB56E4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB56F0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5714u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5724u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5778u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5794u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB57BCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB57C8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB57D0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB57D8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB57DCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5808u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB584Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB585Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5874u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5888u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5894u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB589Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB58A0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB58CCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5900u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5910u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5924u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB594Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5958u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5960u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5968u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5970u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5978u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5980u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5988u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5990u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5994u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB59C0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5A04u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5A14u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5A2Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5A40u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5A50u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5A58u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5A84u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5AB8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5AC8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5AD0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5AE4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5B08u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5B10u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5B20u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5B34u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5B48u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5B60u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5B7Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5B84u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5B98u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5BA0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5BB4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5BBCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5BD0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5BD8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5BECu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5BF4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5C18u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5C20u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5C3Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5C44u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5C58u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5C60u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5C7Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5C84u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5CA0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5CA8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5CC4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5CCCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5CE8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5CF0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5D14u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5D1Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5D30u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5D38u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5D4Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5D54u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5D68u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5D70u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5D8Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5D94u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5DB8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5DC0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5DE4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5DECu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5E10u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5E18u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5E2Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5E34u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5E50u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5E58u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5E6Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5E74u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5E90u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5E98u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5EB4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5EBCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5EC0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5ECCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5EDCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5EECu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5EF0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5F00u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5F04u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5F0Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5F64u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5F70u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5F7Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5F98u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5FB0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5FD8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5FF4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5FFCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6018u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6030u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6044u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB609Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB60B8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB60C8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB60E8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6118u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6150u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB617Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB619Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB61B0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB61C8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB61DCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB61ECu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB61FCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB620Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB623Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6244u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6258u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6270u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6278u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6288u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB62B8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB62CCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB62E0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB62F8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6304u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6314u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6340u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6354u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6364u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6374u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB638Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6398u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB63B0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB63D4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6494u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB649Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB64B0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB64C0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB64D0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB64DCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB64E4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB64F0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB64F8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6514u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6534u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6540u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6550u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6554u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6560u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6568u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6570u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6578u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB657Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6584u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB658Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6598u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB65A0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB65BCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB65CCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB65F0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6608u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB662Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB664Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6670u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6690u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB66ACu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB66C8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB66E8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6704u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB670Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6728u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6740u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6750u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6768u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6774u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6780u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB678Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6798u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB67A4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB67B0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB67BCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB67C0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB67D4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB67FCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6804u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6848u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6854u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6864u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6870u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB687Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6884u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB688Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6894u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB68A0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB68B4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB68FCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6AB0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6AC4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6B3Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6B58u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6B70u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6B7Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6B84u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6B98u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6BACu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6BC0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6BC8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6C04u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6C14u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6C1Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6C3Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6C48u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6C64u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6C6Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6C78u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6C80u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6CA0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6CACu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6CB4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6CC0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6CC8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6CDCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6CECu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6CF4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6CF8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6D10u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6D1Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6D2Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6D38u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6D40u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6D58u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6D64u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6D6Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6D7Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6D84u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6D88u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6DA4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6DB0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6DC0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6DCCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6DD4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6DDCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6DFCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6E1Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6E38u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6E64u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6E9Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6EB4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6ED4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6EE0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6EECu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6EF4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6F08u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6F18u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6F20u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6F24u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6F3Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6F48u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6F58u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6F64u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6F6Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6F74u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6F80u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6F88u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6F98u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6FA0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6FA4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6FC0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6FCCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6FDCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6FE8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6FF0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7004u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB700Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7068u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7080u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7148u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7174u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7188u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7194u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB71A8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB71B4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB71C8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB71D0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB71DCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB71E8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB71F4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7200u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB720Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7218u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7224u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7230u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB723Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7248u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7254u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7260u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB726Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7278u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7284u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7290u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB72A4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB72B4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB72C4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB72D4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB72E4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB72F4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7304u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7314u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB731Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB732Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB735Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7364u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7380u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7388u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB73A8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB73B8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB73C4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB73D8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7400u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7408u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB743Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7444u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7448u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7460u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7484u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7494u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB74A0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB74A8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB74ACu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB74C4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB74D8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB74E4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB74ECu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB74F8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7500u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7508u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB751Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7524u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7538u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7540u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB754Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7554u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7574u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB75B4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB75C0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB75C8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB75D8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB75E0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB75ECu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB75F8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7604u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7608u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB762Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7634u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB763Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7648u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7654u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7660u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7664u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB767Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7688u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7694u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB76A0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB76A4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB76B8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB76D0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB76DCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB76E0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB76E8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7728u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7750u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB779Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB77BCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB77C4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB77CCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB77D8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB77E4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB77ECu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB77F0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB77F8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7804u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7810u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7818u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB781Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7820u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7854u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB78F8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7904u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7910u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7940u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB794Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7958u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7960u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7964u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB796Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7974u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7998u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB79B4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB79E4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB79F8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7A08u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7A1Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7A2Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7A64u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7A78u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7A80u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7A98u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7AA8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7ACCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7AE4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7AF0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7B00u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7B18u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7B20u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7B24u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7B30u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7B50u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7B64u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7B70u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7B84u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7BBCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7BCCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7BDCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7BECu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7BF8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7C04u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7C20u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7C28u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7C30u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7C5Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7C84u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7C90u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7C98u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7CA4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7CACu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7CB8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7CC0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7CCCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7CD4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7CDCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7CE8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7CF8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7D08u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7D1Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7D20u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7D40u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7D64u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7D70u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7D78u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7D84u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7D94u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7DA4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7DB4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7DC0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7DD4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7DDCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7DE4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7DF0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7DF8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7E00u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7E0Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7E10u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7E28u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7E4Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7E58u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7E60u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7E6Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7E78u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7E88u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7EA0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7EA8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7EB0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7EBCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7EC4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7ED0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7ED8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7EE0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7EF0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7EFCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7F00u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7F1Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7F40u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7F4Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7F54u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7F60u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7F68u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7F70u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7F78u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7FACu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7FB8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7FC0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7FC8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7FD0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7FDCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7FE8u, &recomp_unit_0172, "recomp_unit_0172");
}
} // namespace psprecomp
