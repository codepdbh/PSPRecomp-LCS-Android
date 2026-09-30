#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0142[4093] = {
    1, 0, 2, 0, 0, 0, 0, 0, 0, 3, 0, 4, 0, 5, 0, 6, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0,
    0, 0, 0, 9, 0, 0, 0, 0, 0, 10, 0, 0, 0, 11, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 14, 0, 0,
    0, 15, 0, 16, 0, 0, 0, 0, 0, 17, 0, 0, 0, 18, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 21, 0, 0,
    0, 22, 0, 23, 24, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 28, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 32, 0, 0, 0, 33,
    34, 0, 35, 0, 36, 0, 0, 37, 0, 38, 0, 0, 39, 0, 40, 0, 41, 0, 0, 0, 0, 0, 0, 42, 0, 43, 0, 0, 44, 0, 0, 0,
    45, 0, 0, 0, 0, 0, 0, 46, 0, 47, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 51,
    0, 52, 0, 0, 0, 0, 53, 0, 54, 0, 55, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 58, 0, 0, 0, 59,
    0, 0, 60, 0, 0, 61, 0, 0, 62, 0, 0, 0, 63, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 65, 66, 0, 0, 0, 0, 67, 0,
    0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0,
    0, 0, 0, 72, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 76, 0, 77, 0, 0, 78, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 81, 0, 82, 83, 0, 84,
    0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 88, 0,
    89, 0, 0, 0, 90, 0, 91, 0, 92, 0, 93, 0, 0, 94, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 96, 0, 97, 0, 0, 0,
    0, 0, 0, 0, 98, 0, 0, 0, 0, 99, 100, 0, 101, 0, 102, 0, 103, 0, 0, 104, 0, 105, 0, 0, 106, 0, 107, 0, 108, 0, 0, 0,
    0, 0, 0, 109, 0, 0, 0, 110, 0, 111, 0, 0, 112, 0, 113, 0, 114, 0, 115, 0, 116, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 118,
    0, 119, 0, 0, 120, 0, 0, 0, 121, 0, 0, 122, 0, 123, 0, 0, 0, 0, 124, 0, 0, 125, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    127, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 129, 0, 130, 0, 131, 0, 132, 0, 0, 0, 0, 0, 0, 0, 133, 0, 134, 0, 0, 0,
    0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 138, 0, 0, 0, 0, 139, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 142, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 144, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 147, 0, 0, 0,
    148, 0, 0, 0, 0, 0, 149, 0, 0, 150, 0, 0, 0, 0, 0, 151, 0, 0, 152, 0, 0, 0, 0, 0, 153, 0, 0, 154, 0, 0, 0, 0,
    0, 155, 0, 0, 156, 0, 157, 0, 0, 158, 0, 0, 0, 0, 159, 0, 0, 0, 0, 160, 0, 161, 0, 0, 162, 0, 163, 0, 0, 0, 0, 0,
    0, 164, 0, 165, 0, 0, 0, 166, 0, 167, 0, 0, 0, 168, 0, 0, 0, 0, 169, 0, 0, 170, 171, 0, 0, 172, 0, 0, 0, 173, 0, 0,
    0, 174, 0, 175, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 177, 0, 178, 0, 0, 0, 0, 0, 179, 180, 0, 0, 0, 181, 0, 182, 0, 0,
    0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 184, 0, 0, 185, 0, 0, 0, 186, 0, 0, 0, 187, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0,
    0, 0, 189, 0, 0, 0, 190, 0, 0, 191, 0, 0, 0, 192, 0, 0, 0, 193, 0, 194, 0, 195, 0, 0, 0, 0, 196, 0, 0, 0, 0, 197,
    0, 198, 0, 0, 0, 0, 199, 0, 0, 0, 0, 200, 0, 0, 0, 0, 201, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0,
    0, 0, 0, 0, 0, 204, 0, 205, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 207, 208, 0, 0, 209, 0, 0, 0, 210, 0,
    0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 212, 0, 0, 0, 213, 0, 0, 214, 0, 0, 0, 215, 0, 0, 0, 216, 0, 217, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 218, 0, 0, 0, 219, 0, 220, 0, 0, 0, 221, 0, 0, 0, 222, 0, 223, 0, 0, 0, 0, 224, 0, 0, 0, 0, 225,
    0, 226, 0, 0, 0, 0, 227, 0, 0, 0, 0, 228, 0, 0, 0, 0, 229, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0,
    0, 0, 0, 0, 0, 232, 0, 233, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 235, 236, 0, 237, 0, 0, 0, 0, 0, 238,
    0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 240, 0, 0, 0, 241, 0, 0, 242, 0, 0, 0, 243, 0, 0, 0, 244, 0, 245, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 248, 0, 249, 0, 0, 0, 250, 0, 0, 0, 251,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 256,
    0, 257, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 260, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 262, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 264, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0,
    0, 0, 0, 0, 267, 0, 0, 268, 0, 269, 0, 0, 270, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 273, 0,
    274, 0, 275, 0, 0, 0, 0, 0, 0, 0, 276, 0, 277, 0, 278, 0, 0, 0, 0, 0, 279, 0, 280, 0, 281, 0, 0, 0, 0, 0, 282, 0,
    283, 0, 0, 0, 0, 0, 0, 284, 0, 0, 285, 0, 0, 0, 286, 0, 0, 0, 287, 0, 0, 288, 0, 0, 0, 289, 0, 0, 0, 290, 0, 0,
    291, 0, 292, 0, 0, 0, 0, 293, 0, 0, 0, 294, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0,
    0, 0, 0, 0, 297, 0, 0, 298, 0, 0, 0, 0, 0, 0, 299, 300, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 302, 0, 0,
    0, 0, 303, 0, 304, 0, 0, 305, 0, 306, 0, 0, 307, 0, 0, 308, 0, 0, 0, 309, 0, 0, 310, 0, 0, 311, 312, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 313, 0, 314, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 321, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 327, 0, 0, 328, 0, 329, 0, 330, 0, 331, 0, 332,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 335, 0, 0, 336, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 338, 0, 0, 0, 339, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 341, 342, 0, 0, 343, 0, 0, 0, 344, 0, 0, 0, 0, 0,
    0, 345, 346, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0, 0, 348, 349, 0, 0, 0, 0, 0, 350,
    0, 0, 0, 0, 351, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 355,
    0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 358, 0, 0, 0, 0, 359, 0, 0, 0, 360, 0, 0, 0, 0, 361,
    362, 363, 0, 364, 0, 0, 0, 0, 365, 0, 366, 367, 0, 0, 0, 368, 0, 0, 0, 369, 0, 0, 370, 0, 371, 0, 372, 0, 0, 373, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 0, 375,
    0, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 377, 0, 0, 0,
    0, 378, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 379, 0, 0, 380, 0, 0, 381, 0, 0, 0, 0, 382, 0, 0, 383, 0, 0, 0, 384,
    0, 0, 385, 0, 386, 0, 387, 0, 0, 388, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 0, 0, 0, 392, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 393, 0, 394, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 395, 0, 0,
    396, 0, 0, 0, 0, 0, 397, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 398, 0, 399, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    400, 0, 401, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 402, 0, 403, 0, 0, 0, 0, 0, 0, 0, 404, 405, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 406, 0, 407, 0, 408, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 409, 0, 0, 0, 0, 0, 410, 0, 0, 0, 0, 411, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 412, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 413, 0, 414, 0, 0, 0, 0, 0, 0, 415, 0, 0, 0, 0, 416, 0, 0, 417, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 418, 0, 419, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 420, 0, 421, 0, 0, 0, 0, 0, 422, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 423, 0, 0, 424, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 425, 0, 0, 0, 0, 0, 0, 0,
    426, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 427, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 428, 0, 429, 0, 430, 0, 0, 431, 0, 432, 0, 0, 433, 0, 0, 0, 434, 0, 0, 435, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 436, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 437, 0, 438, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 439, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 440, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 441, 0, 442, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 443, 0, 0, 0,
    444, 0, 0, 445, 0, 446, 0, 447, 0, 0, 0, 0, 448, 0, 0, 0, 0, 449, 0, 0, 450, 0, 451, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    452, 0, 0, 0, 0, 453, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 454, 0, 0, 0, 0, 455, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 456, 0, 0, 0, 0, 457, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 458, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 459, 0, 460, 0, 0, 0, 0, 0, 0, 0, 461, 0, 462, 0, 0, 0, 0, 0, 0, 0,
    463, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 464, 0, 0, 0, 0, 0, 465, 0, 466, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 467, 0, 0, 468, 469, 0, 0, 0, 0, 470, 0, 0, 0, 0, 0, 0, 471, 0, 0, 0,
    0, 0, 0, 0, 0, 472, 0, 0, 0, 0, 0, 473, 0, 0, 0, 474, 0, 0, 0, 475, 0, 0, 476, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 477, 0, 0, 0, 0, 478, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 479, 0, 0, 0, 0, 480, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 481, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 482, 483, 0,
    484, 0, 0, 0, 0, 0, 0, 485, 0, 0, 0, 486, 0, 0, 0, 0, 0, 487, 488, 0, 0, 0, 0, 0, 489, 0, 0, 0, 490, 0, 0, 0,
    491, 0, 0, 492, 0, 0, 0, 493, 0, 0, 0, 0, 0, 494, 0, 495, 0, 0, 496, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 497, 0, 0, 0, 0, 498, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 499, 0, 0, 0, 0, 500, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 501, 0, 502, 503, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 504, 0, 0, 0, 505, 0, 0, 0, 0, 506, 0, 0, 0, 0, 507, 508, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 509, 0, 510, 511, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 512, 0, 0, 0, 513, 0, 0, 514, 0, 0,
    0, 0, 515, 0, 0, 0, 516, 0, 517, 518, 0, 0, 0, 0, 0, 0, 519, 0, 0, 0, 0, 0, 0, 0, 0, 520, 0, 521, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 522, 0, 0, 523, 0, 524, 0, 525, 0, 0, 526, 0, 0, 0, 0, 527, 0, 528, 0, 0, 529, 0, 0, 530, 0, 0, 0, 531, 0,
    532, 533, 0, 0, 0, 0, 0, 0, 534, 0, 0, 0, 0, 0, 0, 535, 0, 0, 0, 0, 536, 0, 537, 0, 0, 538, 0, 0, 0, 0, 539, 0,
    540, 0, 0, 0, 0, 541, 0, 542, 0, 0, 0, 543, 0, 0, 544, 0, 545, 0, 0, 546, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 547, 0, 0, 0, 548, 0, 549, 550, 0, 0, 0, 0, 0, 0, 551, 0, 0, 0, 0, 0, 0, 552, 0, 0, 553, 0, 554,
    0, 555, 0, 0, 0, 556, 0, 557, 0, 0, 558, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 559,
    0, 0, 560, 0, 0, 0, 0, 0, 0, 0, 561, 0, 562, 0, 0, 563, 0, 0, 0, 0, 0, 0, 0, 564, 0, 0, 0, 0, 565, 0, 0, 566,
    0, 567, 0, 568, 0, 0, 0, 569, 0, 570, 0, 571, 0, 0, 572, 0, 0, 0, 0, 0, 0, 0, 573, 0, 0, 0, 0, 0, 0, 0, 574, 0,
    575, 0, 0, 0, 576, 0, 577, 0, 0, 578, 0, 0, 579, 0, 0, 580, 0, 0, 0, 0, 0, 0, 0, 581, 0, 582, 0, 0, 583, 0, 0, 0,
    0, 584, 0, 0, 0, 0, 585, 0, 0, 586, 0, 587, 0, 0, 588, 0, 589, 0, 0, 0, 590, 0, 591, 0, 0, 592, 0, 593, 0, 0, 0, 0,
    0, 0, 594, 0, 0, 0, 0, 595, 0, 0, 0, 0, 0, 596, 0, 0, 597, 0, 0, 598, 0, 599, 0, 0, 0, 600, 0, 0, 0, 0, 0, 601,
    0, 0, 0, 602, 0, 0, 603, 0, 0, 0, 0, 0, 0, 604, 0, 605, 0, 606, 0, 0, 0, 607, 0, 0, 608, 0, 0, 0, 0, 609, 0, 0,
    610, 0, 611, 0, 0, 0, 0, 0, 0, 612, 0, 613, 0, 0, 614, 0, 0, 0, 0, 615, 0, 0, 0, 616, 0, 0, 0, 0, 0, 0, 617, 0,
    0, 0, 0, 0, 0, 618, 0, 0, 0, 619, 0, 0, 0, 0, 0, 620, 0, 0, 621, 0, 0, 0, 0, 622, 0, 0, 0, 0, 623, 0, 0, 0,
    0, 0, 0, 0, 624, 0, 0, 625, 0, 0, 0, 626, 0, 0, 627, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 628, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 629, 0, 630, 0, 0, 0, 0, 0, 0, 0, 0, 0, 631, 632, 0, 633, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 634, 0, 0, 0, 0, 0, 0, 0, 0, 0, 635, 0, 636, 0, 637, 0, 638, 0, 639, 0, 640, 0, 641, 0, 642, 0, 0,
    0, 0, 0, 643, 0, 0, 0, 0, 0, 0, 0, 644, 0, 645, 0, 646, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 647,
    0, 0, 0, 0, 648, 0, 0, 0, 649, 0, 650, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 651, 0, 0, 0, 652, 0, 0, 0, 0,
    0, 0, 653, 0, 0, 0, 0, 0, 0, 654, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 655, 0, 656, 0, 0, 0, 0, 0, 0, 657, 0, 0, 0, 0, 0, 0, 658, 0, 0, 0, 0,
    0, 0, 659, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 660, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 661, 0, 662, 0, 0, 0,
    0, 0, 0, 663, 0, 0, 0, 0, 0, 664, 0, 0, 0, 0, 0, 0, 665, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 666, 0, 667, 0, 0, 0, 0, 0, 0, 668, 0, 0, 669, 0, 670, 0, 671, 0, 672, 0, 0, 673, 0, 674,
    0, 675, 0, 676, 0, 0, 677, 0, 678, 0, 679, 0, 680, 0, 0, 681, 0, 0, 0, 0, 0, 0, 0, 682, 0, 0, 683, 0, 684, 0, 685, 0,
    686, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 687, 0, 688,
};
void recomp_unit_0142_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08A3C000u;
        entry_id = (entry_delta < 16372u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0142[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A3C000;
    case 2u: goto L_08A3C008;
    case 3u: goto L_08A3C024;
    case 4u: goto L_08A3C02C;
    case 5u: goto L_08A3C034;
    case 6u: goto L_08A3C03C;
    case 7u: goto L_08A3C04C;
    case 8u: goto L_08A3C074;
    case 9u: goto L_08A3C08C;
    case 10u: goto L_08A3C0A4;
    case 11u: goto L_08A3C0B4;
    case 12u: goto L_08A3C0C0;
    case 13u: goto L_08A3C0E4;
    case 14u: goto L_08A3C0F4;
    case 15u: goto L_08A3C104;
    case 16u: goto L_08A3C10C;
    case 17u: goto L_08A3C124;
    case 18u: goto L_08A3C134;
    case 19u: goto L_08A3C140;
    case 20u: goto L_08A3C164;
    case 21u: goto L_08A3C174;
    case 22u: goto L_08A3C184;
    case 23u: goto L_08A3C18C;
    case 24u: goto L_08A3C190;
    case 25u: goto L_08A3C198;
    case 26u: goto L_08A3C1C0;
    case 27u: goto L_08A3C1D0;
    case 28u: goto L_08A3C20C;
    case 29u: goto L_08A3C21C;
    case 30u: goto L_08A3C23C;
    case 31u: goto L_08A3C258;
    case 32u: goto L_08A3C26C;
    case 33u: goto L_08A3C27C;
    case 34u: goto L_08A3C280;
    case 35u: goto L_08A3C288;
    case 36u: goto L_08A3C290;
    case 37u: goto L_08A3C29C;
    case 38u: goto L_08A3C2A4;
    case 39u: goto L_08A3C2B0;
    case 40u: goto L_08A3C2B8;
    case 41u: goto L_08A3C2C0;
    case 42u: goto L_08A3C2DC;
    case 43u: goto L_08A3C2E4;
    case 44u: goto L_08A3C2F0;
    case 45u: goto L_08A3C300;
    case 46u: goto L_08A3C31C;
    case 47u: goto L_08A3C324;
    case 48u: goto L_08A3C32C;
    case 49u: goto L_08A3C350;
    case 50u: goto L_08A3C35C;
    case 51u: goto L_08A3C37C;
    case 52u: goto L_08A3C384;
    case 53u: goto L_08A3C398;
    case 54u: goto L_08A3C3A0;
    case 55u: goto L_08A3C3A8;
    case 56u: goto L_08A3C3B4;
    case 57u: goto L_08A3C3E0;
    case 58u: goto L_08A3C3EC;
    case 59u: goto L_08A3C3FC;
    case 60u: goto L_08A3C408;
    case 61u: goto L_08A3C414;
    case 62u: goto L_08A3C420;
    case 63u: goto L_08A3C430;
    case 64u: goto L_08A3C43C;
    case 65u: goto L_08A3C460;
    case 66u: goto L_08A3C464;
    case 67u: goto L_08A3C478;
    case 68u: goto L_08A3C484;
    case 69u: goto L_08A3C4AC;
    case 70u: goto L_08A3C4C0;
    case 71u: goto L_08A3C4E8;
    case 72u: goto L_08A3C50C;
    case 73u: goto L_08A3C524;
    case 74u: goto L_08A3C544;
    case 75u: goto L_08A3C564;
    case 76u: goto L_08A3C58C;
    case 77u: goto L_08A3C594;
    case 78u: goto L_08A3C5A0;
    case 79u: goto L_08A3C5AC;
    case 80u: goto L_08A3C5CC;
    case 81u: goto L_08A3C5E8;
    case 82u: goto L_08A3C5F0;
    case 83u: goto L_08A3C5F4;
    case 84u: goto L_08A3C5FC;
    case 85u: goto L_08A3C60C;
    case 86u: goto L_08A3C648;
    case 87u: goto L_08A3C670;
    case 88u: goto L_08A3C678;
    case 89u: goto L_08A3C680;
    case 90u: goto L_08A3C690;
    case 91u: goto L_08A3C698;
    case 92u: goto L_08A3C6A0;
    case 93u: goto L_08A3C6A8;
    case 94u: goto L_08A3C6B4;
    case 95u: goto L_08A3C6C8;
    case 96u: goto L_08A3C6E8;
    case 97u: goto L_08A3C6F0;
    case 98u: goto L_08A3C710;
    case 99u: goto L_08A3C724;
    case 100u: goto L_08A3C728;
    case 101u: goto L_08A3C730;
    case 102u: goto L_08A3C738;
    case 103u: goto L_08A3C740;
    case 104u: goto L_08A3C74C;
    case 105u: goto L_08A3C754;
    case 106u: goto L_08A3C760;
    case 107u: goto L_08A3C768;
    case 108u: goto L_08A3C770;
    case 109u: goto L_08A3C78C;
    case 110u: goto L_08A3C79C;
    case 111u: goto L_08A3C7A4;
    case 112u: goto L_08A3C7B0;
    case 113u: goto L_08A3C7B8;
    case 114u: goto L_08A3C7C0;
    case 115u: goto L_08A3C7C8;
    case 116u: goto L_08A3C7D0;
    case 117u: goto L_08A3C7EC;
    case 118u: goto L_08A3C7FC;
    case 119u: goto L_08A3C804;
    case 120u: goto L_08A3C810;
    case 121u: goto L_08A3C820;
    case 122u: goto L_08A3C82C;
    case 123u: goto L_08A3C834;
    case 124u: goto L_08A3C848;
    case 125u: goto L_08A3C854;
    case 126u: goto L_08A3C858;
    case 127u: goto L_08A3C880;
    case 128u: goto L_08A3C8A0;
    case 129u: goto L_08A3C8B0;
    case 130u: goto L_08A3C8B8;
    case 131u: goto L_08A3C8C0;
    case 132u: goto L_08A3C8C8;
    case 133u: goto L_08A3C8E8;
    case 134u: goto L_08A3C8F0;
    case 135u: goto L_08A3C910;
    case 136u: goto L_08A3C94C;
    case 137u: goto L_08A3C95C;
    case 138u: goto L_08A3C98C;
    case 139u: goto L_08A3C9A0;
    case 140u: goto L_08A3C9A8;
    case 141u: goto L_08A3C9E4;
    case 142u: goto L_08A3C9F4;
    case 143u: goto L_08A3CA24;
    case 144u: goto L_08A3CA38;
    case 145u: goto L_08A3CA3C;
    case 146u: goto L_08A3CA68;
    case 147u: goto L_08A3CA70;
    case 148u: goto L_08A3CA80;
    case 149u: goto L_08A3CA98;
    case 150u: goto L_08A3CAA4;
    case 151u: goto L_08A3CABC;
    case 152u: goto L_08A3CAC8;
    case 153u: goto L_08A3CAE0;
    case 154u: goto L_08A3CAEC;
    case 155u: goto L_08A3CB04;
    case 156u: goto L_08A3CB10;
    case 157u: goto L_08A3CB18;
    case 158u: goto L_08A3CB24;
    case 159u: goto L_08A3CB38;
    case 160u: goto L_08A3CB4C;
    case 161u: goto L_08A3CB54;
    case 162u: goto L_08A3CB60;
    case 163u: goto L_08A3CB68;
    case 164u: goto L_08A3CB84;
    case 165u: goto L_08A3CB8C;
    case 166u: goto L_08A3CB9C;
    case 167u: goto L_08A3CBA4;
    case 168u: goto L_08A3CBB4;
    case 169u: goto L_08A3CBC8;
    case 170u: goto L_08A3CBD4;
    case 171u: goto L_08A3CBD8;
    case 172u: goto L_08A3CBE4;
    case 173u: goto L_08A3CBF4;
    case 174u: goto L_08A3CC04;
    case 175u: goto L_08A3CC0C;
    case 176u: goto L_08A3CC18;
    case 177u: goto L_08A3CC38;
    case 178u: goto L_08A3CC40;
    case 179u: goto L_08A3CC58;
    case 180u: goto L_08A3CC5C;
    case 181u: goto L_08A3CC6C;
    case 182u: goto L_08A3CC74;
    case 183u: goto L_08A3CC98;
    case 184u: goto L_08A3CCA8;
    case 185u: goto L_08A3CCB4;
    case 186u: goto L_08A3CCC4;
    case 187u: goto L_08A3CCD4;
    case 188u: goto L_08A3CCE8;
    case 189u: goto L_08A3CD08;
    case 190u: goto L_08A3CD18;
    case 191u: goto L_08A3CD24;
    case 192u: goto L_08A3CD34;
    case 193u: goto L_08A3CD44;
    case 194u: goto L_08A3CD4C;
    case 195u: goto L_08A3CD54;
    case 196u: goto L_08A3CD68;
    case 197u: goto L_08A3CD7C;
    case 198u: goto L_08A3CD84;
    case 199u: goto L_08A3CD98;
    case 200u: goto L_08A3CDAC;
    case 201u: goto L_08A3CDC0;
    case 202u: goto L_08A3CDD0;
    case 203u: goto L_08A3CDF4;
    case 204u: goto L_08A3CE14;
    case 205u: goto L_08A3CE1C;
    case 206u: goto L_08A3CE38;
    case 207u: goto L_08A3CE58;
    case 208u: goto L_08A3CE5C;
    case 209u: goto L_08A3CE68;
    case 210u: goto L_08A3CE78;
    case 211u: goto L_08A3CE90;
    case 212u: goto L_08A3CEA8;
    case 213u: goto L_08A3CEB8;
    case 214u: goto L_08A3CEC4;
    case 215u: goto L_08A3CED4;
    case 216u: goto L_08A3CEE4;
    case 217u: goto L_08A3CEEC;
    case 218u: goto L_08A3CF14;
    case 219u: goto L_08A3CF24;
    case 220u: goto L_08A3CF2C;
    case 221u: goto L_08A3CF3C;
    case 222u: goto L_08A3CF4C;
    case 223u: goto L_08A3CF54;
    case 224u: goto L_08A3CF68;
    case 225u: goto L_08A3CF7C;
    case 226u: goto L_08A3CF84;
    case 227u: goto L_08A3CF98;
    case 228u: goto L_08A3CFAC;
    case 229u: goto L_08A3CFC0;
    case 230u: goto L_08A3CFD0;
    case 231u: goto L_08A3CFF4;
    case 232u: goto L_08A3D014;
    case 233u: goto L_08A3D01C;
    case 234u: goto L_08A3D038;
    case 235u: goto L_08A3D058;
    case 236u: goto L_08A3D05C;
    case 237u: goto L_08A3D064;
    case 238u: goto L_08A3D07C;
    case 239u: goto L_08A3D094;
    case 240u: goto L_08A3D0AC;
    case 241u: goto L_08A3D0BC;
    case 242u: goto L_08A3D0C8;
    case 243u: goto L_08A3D0D8;
    case 244u: goto L_08A3D0E8;
    case 245u: goto L_08A3D0F0;
    case 246u: goto L_08A3D118;
    case 247u: goto L_08A3D144;
    case 248u: goto L_08A3D154;
    case 249u: goto L_08A3D15C;
    case 250u: goto L_08A3D16C;
    case 251u: goto L_08A3D17C;
    case 252u: goto L_08A3D1C4;
    case 253u: goto L_08A3D228;
    case 254u: goto L_08A3D230;
    case 255u: goto L_08A3D268;
    case 256u: goto L_08A3D27C;
    case 257u: goto L_08A3D284;
    case 258u: goto L_08A3D28C;
    case 259u: goto L_08A3D2B0;
    case 260u: goto L_08A3D2C0;
    case 261u: goto L_08A3D2C8;
    case 262u: goto L_08A3D308;
    case 263u: goto L_08A3D320;
    case 264u: goto L_08A3D334;
    case 265u: goto L_08A3D33C;
    case 266u: goto L_08A3D378;
    case 267u: goto L_08A3D390;
    case 268u: goto L_08A3D39C;
    case 269u: goto L_08A3D3A4;
    case 270u: goto L_08A3D3B0;
    case 271u: goto L_08A3D3B8;
    case 272u: goto L_08A3D3DC;
    case 273u: goto L_08A3D3F8;
    case 274u: goto L_08A3D400;
    case 275u: goto L_08A3D408;
    case 276u: goto L_08A3D428;
    case 277u: goto L_08A3D430;
    case 278u: goto L_08A3D438;
    case 279u: goto L_08A3D450;
    case 280u: goto L_08A3D458;
    case 281u: goto L_08A3D460;
    case 282u: goto L_08A3D478;
    case 283u: goto L_08A3D480;
    case 284u: goto L_08A3D49C;
    case 285u: goto L_08A3D4A8;
    case 286u: goto L_08A3D4B8;
    case 287u: goto L_08A3D4C8;
    case 288u: goto L_08A3D4D4;
    case 289u: goto L_08A3D4E4;
    case 290u: goto L_08A3D4F4;
    case 291u: goto L_08A3D500;
    case 292u: goto L_08A3D508;
    case 293u: goto L_08A3D51C;
    case 294u: goto L_08A3D52C;
    case 295u: goto L_08A3D538;
    case 296u: goto L_08A3D574;
    case 297u: goto L_08A3D590;
    case 298u: goto L_08A3D59C;
    case 299u: goto L_08A3D5B8;
    case 300u: goto L_08A3D5BC;
    case 301u: goto L_08A3D5D8;
    case 302u: goto L_08A3D5F4;
    case 303u: goto L_08A3D608;
    case 304u: goto L_08A3D610;
    case 305u: goto L_08A3D61C;
    case 306u: goto L_08A3D624;
    case 307u: goto L_08A3D630;
    case 308u: goto L_08A3D63C;
    case 309u: goto L_08A3D64C;
    case 310u: goto L_08A3D658;
    case 311u: goto L_08A3D664;
    case 312u: goto L_08A3D668;
    case 313u: goto L_08A3D698;
    case 314u: goto L_08A3D6A0;
    case 315u: goto L_08A3D6A8;
    case 316u: goto L_08A3D6CC;
    case 317u: goto L_08A3D6F0;
    case 318u: goto L_08A3D72C;
    case 319u: goto L_08A3D778;
    case 320u: goto L_08A3D7B8;
    case 321u: goto L_08A3D7C8;
    case 322u: goto L_08A3D7DC;
    case 323u: goto L_08A3D868;
    case 324u: goto L_08A3D8B8;
    case 325u: goto L_08A3D8DC;
    case 326u: goto L_08A3D934;
    case 327u: goto L_08A3D950;
    case 328u: goto L_08A3D95C;
    case 329u: goto L_08A3D964;
    case 330u: goto L_08A3D96C;
    case 331u: goto L_08A3D974;
    case 332u: goto L_08A3D97C;
    case 333u: goto L_08A3D9D8;
    case 334u: goto L_08A3DA34;
    case 335u: goto L_08A3DA3C;
    case 336u: goto L_08A3DA48;
    case 337u: goto L_08A3DA54;
    case 338u: goto L_08A3DB0C;
    case 339u: goto L_08A3DB1C;
    case 340u: goto L_08A3DB2C;
    case 341u: goto L_08A3DB48;
    case 342u: goto L_08A3DB4C;
    case 343u: goto L_08A3DB58;
    case 344u: goto L_08A3DB68;
    case 345u: goto L_08A3DB84;
    case 346u: goto L_08A3DB88;
    case 347u: goto L_08A3DBB8;
    case 348u: goto L_08A3DBE0;
    case 349u: goto L_08A3DBE4;
    case 350u: goto L_08A3DBFC;
    case 351u: goto L_08A3DC10;
    case 352u: goto L_08A3DC24;
    case 353u: goto L_08A3DC44;
    case 354u: goto L_08A3DC54;
    case 355u: goto L_08A3DC7C;
    case 356u: goto L_08A3DC98;
    case 357u: goto L_08A3DCB4;
    case 358u: goto L_08A3DCC4;
    case 359u: goto L_08A3DCD8;
    case 360u: goto L_08A3DCE8;
    case 361u: goto L_08A3DCFC;
    case 362u: goto L_08A3DD00;
    case 363u: goto L_08A3DD04;
    case 364u: goto L_08A3DD0C;
    case 365u: goto L_08A3DD20;
    case 366u: goto L_08A3DD28;
    case 367u: goto L_08A3DD2C;
    case 368u: goto L_08A3DD3C;
    case 369u: goto L_08A3DD4C;
    case 370u: goto L_08A3DD58;
    case 371u: goto L_08A3DD60;
    case 372u: goto L_08A3DD68;
    case 373u: goto L_08A3DD74;
    case 374u: goto L_08A3DDDC;
    case 375u: goto L_08A3DDFC;
    case 376u: goto L_08A3DE14;
    case 377u: goto L_08A3DE70;
    case 378u: goto L_08A3DE84;
    case 379u: goto L_08A3DEB4;
    case 380u: goto L_08A3DEC0;
    case 381u: goto L_08A3DECC;
    case 382u: goto L_08A3DEE0;
    case 383u: goto L_08A3DEEC;
    case 384u: goto L_08A3DEFC;
    case 385u: goto L_08A3DF08;
    case 386u: goto L_08A3DF10;
    case 387u: goto L_08A3DF18;
    case 388u: goto L_08A3DF24;
    case 389u: goto L_08A3DF5C;
    case 390u: goto L_08A3DFA8;
    case 391u: goto L_08A3DFC4;
    case 392u: goto L_08A3DFEC;
    case 393u: goto L_08A3E02C;
    case 394u: goto L_08A3E034;
    case 395u: goto L_08A3E074;
    case 396u: goto L_08A3E080;
    case 397u: goto L_08A3E098;
    case 398u: goto L_08A3E108;
    case 399u: goto L_08A3E110;
    case 400u: goto L_08A3E180;
    case 401u: goto L_08A3E188;
    case 402u: goto L_08A3E1CC;
    case 403u: goto L_08A3E1D4;
    case 404u: goto L_08A3E1F4;
    case 405u: goto L_08A3E1F8;
    case 406u: goto L_08A3E228;
    case 407u: goto L_08A3E230;
    case 408u: goto L_08A3E238;
    case 409u: goto L_08A3E290;
    case 410u: goto L_08A3E2A8;
    case 411u: goto L_08A3E2BC;
    case 412u: goto L_08A3E304;
    case 413u: goto L_08A3E330;
    case 414u: goto L_08A3E338;
    case 415u: goto L_08A3E354;
    case 416u: goto L_08A3E368;
    case 417u: goto L_08A3E374;
    case 418u: goto L_08A3E3D8;
    case 419u: goto L_08A3E3E0;
    case 420u: goto L_08A3E428;
    case 421u: goto L_08A3E430;
    case 422u: goto L_08A3E448;
    case 423u: goto L_08A3E4A0;
    case 424u: goto L_08A3E4AC;
    case 425u: goto L_08A3E4E0;
    case 426u: goto L_08A3E500;
    case 427u: goto L_08A3E5A0;
    case 428u: goto L_08A3E620;
    case 429u: goto L_08A3E628;
    case 430u: goto L_08A3E630;
    case 431u: goto L_08A3E63C;
    case 432u: goto L_08A3E644;
    case 433u: goto L_08A3E650;
    case 434u: goto L_08A3E660;
    case 435u: goto L_08A3E66C;
    case 436u: goto L_08A3E6A0;
    case 437u: goto L_08A3E6D4;
    case 438u: goto L_08A3E6DC;
    case 439u: goto L_08A3E710;
    case 440u: goto L_08A3E760;
    case 441u: goto L_08A3E7A0;
    case 442u: goto L_08A3E7A8;
    case 443u: goto L_08A3E7F0;
    case 444u: goto L_08A3E800;
    case 445u: goto L_08A3E80C;
    case 446u: goto L_08A3E814;
    case 447u: goto L_08A3E81C;
    case 448u: goto L_08A3E830;
    case 449u: goto L_08A3E844;
    case 450u: goto L_08A3E850;
    case 451u: goto L_08A3E858;
    case 452u: goto L_08A3E880;
    case 453u: goto L_08A3E894;
    case 454u: goto L_08A3E8E0;
    case 455u: goto L_08A3E8F4;
    case 456u: goto L_08A3E960;
    case 457u: goto L_08A3E974;
    case 458u: goto L_08A3E9D8;
    case 459u: goto L_08A3EA30;
    case 460u: goto L_08A3EA38;
    case 461u: goto L_08A3EA58;
    case 462u: goto L_08A3EA60;
    case 463u: goto L_08A3EA80;
    case 464u: goto L_08A3EABC;
    case 465u: goto L_08A3EAD4;
    case 466u: goto L_08A3EADC;
    case 467u: goto L_08A3EB30;
    case 468u: goto L_08A3EB3C;
    case 469u: goto L_08A3EB40;
    case 470u: goto L_08A3EB54;
    case 471u: goto L_08A3EB70;
    case 472u: goto L_08A3EB94;
    case 473u: goto L_08A3EBAC;
    case 474u: goto L_08A3EBBC;
    case 475u: goto L_08A3EBCC;
    case 476u: goto L_08A3EBD8;
    case 477u: goto L_08A3ECBC;
    case 478u: goto L_08A3ECD0;
    case 479u: goto L_08A3ED2C;
    case 480u: goto L_08A3ED40;
    case 481u: goto L_08A3EDA0;
    case 482u: goto L_08A3EDF4;
    case 483u: goto L_08A3EDF8;
    case 484u: goto L_08A3EE00;
    case 485u: goto L_08A3EE1C;
    case 486u: goto L_08A3EE2C;
    case 487u: goto L_08A3EE44;
    case 488u: goto L_08A3EE48;
    case 489u: goto L_08A3EE60;
    case 490u: goto L_08A3EE70;
    case 491u: goto L_08A3EE80;
    case 492u: goto L_08A3EE8C;
    case 493u: goto L_08A3EE9C;
    case 494u: goto L_08A3EEB4;
    case 495u: goto L_08A3EEBC;
    case 496u: goto L_08A3EEC8;
    case 497u: goto L_08A3EF04;
    case 498u: goto L_08A3EF18;
    case 499u: goto L_08A3EFAC;
    case 500u: goto L_08A3EFC0;
    case 501u: goto L_08A3F008;
    case 502u: goto L_08A3F010;
    case 503u: goto L_08A3F014;
    case 504u: goto L_08A3F0B4;
    case 505u: goto L_08A3F0C4;
    case 506u: goto L_08A3F0D8;
    case 507u: goto L_08A3F0EC;
    case 508u: goto L_08A3F0F0;
    case 509u: goto L_08A3F134;
    case 510u: goto L_08A3F13C;
    case 511u: goto L_08A3F140;
    case 512u: goto L_08A3F1D8;
    case 513u: goto L_08A3F1E8;
    case 514u: goto L_08A3F1F4;
    case 515u: goto L_08A3F208;
    case 516u: goto L_08A3F218;
    case 517u: goto L_08A3F220;
    case 518u: goto L_08A3F224;
    case 519u: goto L_08A3F240;
    case 520u: goto L_08A3F264;
    case 521u: goto L_08A3F26C;
    case 522u: goto L_08A3F30C;
    case 523u: goto L_08A3F318;
    case 524u: goto L_08A3F320;
    case 525u: goto L_08A3F328;
    case 526u: goto L_08A3F334;
    case 527u: goto L_08A3F348;
    case 528u: goto L_08A3F350;
    case 529u: goto L_08A3F35C;
    case 530u: goto L_08A3F368;
    case 531u: goto L_08A3F378;
    case 532u: goto L_08A3F380;
    case 533u: goto L_08A3F384;
    case 534u: goto L_08A3F3A0;
    case 535u: goto L_08A3F3BC;
    case 536u: goto L_08A3F3D0;
    case 537u: goto L_08A3F3D8;
    case 538u: goto L_08A3F3E4;
    case 539u: goto L_08A3F3F8;
    case 540u: goto L_08A3F400;
    case 541u: goto L_08A3F414;
    case 542u: goto L_08A3F41C;
    case 543u: goto L_08A3F42C;
    case 544u: goto L_08A3F438;
    case 545u: goto L_08A3F440;
    case 546u: goto L_08A3F44C;
    case 547u: goto L_08A3F494;
    case 548u: goto L_08A3F4A4;
    case 549u: goto L_08A3F4AC;
    case 550u: goto L_08A3F4B0;
    case 551u: goto L_08A3F4CC;
    case 552u: goto L_08A3F4E8;
    case 553u: goto L_08A3F4F4;
    case 554u: goto L_08A3F4FC;
    case 555u: goto L_08A3F504;
    case 556u: goto L_08A3F514;
    case 557u: goto L_08A3F51C;
    case 558u: goto L_08A3F528;
    case 559u: goto L_08A3F57C;
    case 560u: goto L_08A3F588;
    case 561u: goto L_08A3F5A8;
    case 562u: goto L_08A3F5B0;
    case 563u: goto L_08A3F5BC;
    case 564u: goto L_08A3F5DC;
    case 565u: goto L_08A3F5F0;
    case 566u: goto L_08A3F5FC;
    case 567u: goto L_08A3F604;
    case 568u: goto L_08A3F60C;
    case 569u: goto L_08A3F61C;
    case 570u: goto L_08A3F624;
    case 571u: goto L_08A3F62C;
    case 572u: goto L_08A3F638;
    case 573u: goto L_08A3F658;
    case 574u: goto L_08A3F678;
    case 575u: goto L_08A3F680;
    case 576u: goto L_08A3F690;
    case 577u: goto L_08A3F698;
    case 578u: goto L_08A3F6A4;
    case 579u: goto L_08A3F6B0;
    case 580u: goto L_08A3F6BC;
    case 581u: goto L_08A3F6DC;
    case 582u: goto L_08A3F6E4;
    case 583u: goto L_08A3F6F0;
    case 584u: goto L_08A3F704;
    case 585u: goto L_08A3F718;
    case 586u: goto L_08A3F724;
    case 587u: goto L_08A3F72C;
    case 588u: goto L_08A3F738;
    case 589u: goto L_08A3F740;
    case 590u: goto L_08A3F750;
    case 591u: goto L_08A3F758;
    case 592u: goto L_08A3F764;
    case 593u: goto L_08A3F76C;
    case 594u: goto L_08A3F788;
    case 595u: goto L_08A3F79C;
    case 596u: goto L_08A3F7B4;
    case 597u: goto L_08A3F7C0;
    case 598u: goto L_08A3F7CC;
    case 599u: goto L_08A3F7D4;
    case 600u: goto L_08A3F7E4;
    case 601u: goto L_08A3F7FC;
    case 602u: goto L_08A3F80C;
    case 603u: goto L_08A3F818;
    case 604u: goto L_08A3F834;
    case 605u: goto L_08A3F83C;
    case 606u: goto L_08A3F844;
    case 607u: goto L_08A3F854;
    case 608u: goto L_08A3F860;
    case 609u: goto L_08A3F874;
    case 610u: goto L_08A3F880;
    case 611u: goto L_08A3F888;
    case 612u: goto L_08A3F8A4;
    case 613u: goto L_08A3F8AC;
    case 614u: goto L_08A3F8B8;
    case 615u: goto L_08A3F8CC;
    case 616u: goto L_08A3F8DC;
    case 617u: goto L_08A3F8F8;
    case 618u: goto L_08A3F914;
    case 619u: goto L_08A3F924;
    case 620u: goto L_08A3F93C;
    case 621u: goto L_08A3F948;
    case 622u: goto L_08A3F95C;
    case 623u: goto L_08A3F970;
    case 624u: goto L_08A3F990;
    case 625u: goto L_08A3F99C;
    case 626u: goto L_08A3F9AC;
    case 627u: goto L_08A3F9B8;
    case 628u: goto L_08A3F9E4;
    case 629u: goto L_08A3FA10;
    case 630u: goto L_08A3FA18;
    case 631u: goto L_08A3FA40;
    case 632u: goto L_08A3FA44;
    case 633u: goto L_08A3FA4C;
    case 634u: goto L_08A3FA94;
    case 635u: goto L_08A3FABC;
    case 636u: goto L_08A3FAC4;
    case 637u: goto L_08A3FACC;
    case 638u: goto L_08A3FAD4;
    case 639u: goto L_08A3FADC;
    case 640u: goto L_08A3FAE4;
    case 641u: goto L_08A3FAEC;
    case 642u: goto L_08A3FAF4;
    case 643u: goto L_08A3FB0C;
    case 644u: goto L_08A3FB2C;
    case 645u: goto L_08A3FB34;
    case 646u: goto L_08A3FB3C;
    case 647u: goto L_08A3FB7C;
    case 648u: goto L_08A3FB90;
    case 649u: goto L_08A3FBA0;
    case 650u: goto L_08A3FBA8;
    case 651u: goto L_08A3FBDC;
    case 652u: goto L_08A3FBEC;
    case 653u: goto L_08A3FC08;
    case 654u: goto L_08A3FC24;
    case 655u: goto L_08A3FCAC;
    case 656u: goto L_08A3FCB4;
    case 657u: goto L_08A3FCD0;
    case 658u: goto L_08A3FCEC;
    case 659u: goto L_08A3FD08;
    case 660u: goto L_08A3FD64;
    case 661u: goto L_08A3FDE8;
    case 662u: goto L_08A3FDF0;
    case 663u: goto L_08A3FE0C;
    case 664u: goto L_08A3FE24;
    case 665u: goto L_08A3FE40;
    case 666u: goto L_08A3FEA0;
    case 667u: goto L_08A3FEA8;
    case 668u: goto L_08A3FEC4;
    case 669u: goto L_08A3FED0;
    case 670u: goto L_08A3FED8;
    case 671u: goto L_08A3FEE0;
    case 672u: goto L_08A3FEE8;
    case 673u: goto L_08A3FEF4;
    case 674u: goto L_08A3FEFC;
    case 675u: goto L_08A3FF04;
    case 676u: goto L_08A3FF0C;
    case 677u: goto L_08A3FF18;
    case 678u: goto L_08A3FF20;
    case 679u: goto L_08A3FF28;
    case 680u: goto L_08A3FF30;
    case 681u: goto L_08A3FF3C;
    case 682u: goto L_08A3FF5C;
    case 683u: goto L_08A3FF68;
    case 684u: goto L_08A3FF70;
    case 685u: goto L_08A3FF78;
    case 686u: goto L_08A3FF80;
    case 687u: goto L_08A3FFE8;
    case 688u: goto L_08A3FFF0;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A3C000:
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (15523u << 16u);
      if (branch_taken) {
          goto L_08A3C18C;
      }
      goto L_08A3C008;
    }
L_08A3C008:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(656)));
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A3C18C;
      }
      goto L_08A3C024;
    }
L_08A3C024:
    ctx.gpr[31] = (0x08A3C02Cu);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 446u, 0x08AFA05Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3C02Cu) goto L_08A3C02C;
    return;
L_08A3C02C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3C18C;
      }
      goto L_08A3C034;
    }
L_08A3C034:
    ctx.gpr[31] = (0x08A3C03Cu);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1348)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 340u, 0x08AF97F4u>(ctx, &aot_mem) && ctx.pc == 0x08A3C03Cu) goto L_08A3C03C;
    return;
L_08A3C03C:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[31] = (0x08A3C04Cu);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 523u, 0x08A37288u>(ctx, &aot_mem) && ctx.pc == 0x08A3C04Cu) goto L_08A3C04C;
    return;
L_08A3C04C:
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1160)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(1348), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-10520)));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(592));
      if (branch_taken) {
          goto L_08A3C08C;
      }
      goto L_08A3C074;
    }
L_08A3C074:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1164)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-10520)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A3C10C;
      }
      goto L_08A3C08C;
    }
L_08A3C08C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1600), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(1584));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1608), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1608));
    ctx.gpr[31] = (0x08A3C0A4u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(656));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 336u, 0x08AF97C0u>(ctx, &aot_mem) && ctx.pc == 0x08A3C0A4u) goto L_08A3C0A4;
    return;
L_08A3C0A4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1604), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(1604));
    ctx.gpr[31] = (0x08A3C0B4u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1600));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 330u, 0x08AF9774u>(ctx, &aot_mem) && ctx.pc == 0x08A3C0B4u) goto L_08A3C0B4;
    return;
L_08A3C0B4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1348)));
    ctx.gpr[31] = (0x08A3C0C0u);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 376u, 0x08AF99E4u>(ctx, &aot_mem) && ctx.pc == 0x08A3C0C0u) goto L_08A3C0C0;
    return;
L_08A3C0C0:
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(212)));
    ctx.gpr[4] = (15605u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 49807u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A3C0E4u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 342u, 0x08AF981Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3C0E4u) goto L_08A3C0E4;
    return;
L_08A3C0E4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A3C0F4u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 340u, 0x08A36178u>(ctx, &aot_mem) && ctx.pc == 0x08A3C0F4u) goto L_08A3C0F4;
    return;
L_08A3C0F4:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A3C104u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 435u, 0x08AF9EA4u>(ctx, &aot_mem) && ctx.pc == 0x08A3C104u) goto L_08A3C104;
    return;
L_08A3C104:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3C190;
      }
      goto L_08A3C10C;
    }
L_08A3C10C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1632), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(1616));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1640), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1640));
    ctx.gpr[31] = (0x08A3C124u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(656));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 336u, 0x08AF97C0u>(ctx, &aot_mem) && ctx.pc == 0x08A3C124u) goto L_08A3C124;
    return;
L_08A3C124:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1636), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(1636));
    ctx.gpr[31] = (0x08A3C134u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1632));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 330u, 0x08AF9774u>(ctx, &aot_mem) && ctx.pc == 0x08A3C134u) goto L_08A3C134;
    return;
L_08A3C134:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1348)));
    ctx.gpr[31] = (0x08A3C140u);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 376u, 0x08AF99E4u>(ctx, &aot_mem) && ctx.pc == 0x08A3C140u) goto L_08A3C140;
    return;
L_08A3C140:
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(212)));
    ctx.gpr[4] = (15333u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 24642u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A3C164u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 342u, 0x08AF981Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3C164u) goto L_08A3C164;
    return;
L_08A3C164:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A3C174u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 340u, 0x08A36178u>(ctx, &aot_mem) && ctx.pc == 0x08A3C174u) goto L_08A3C174;
    return;
L_08A3C174:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A3C184u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 435u, 0x08AF9EA4u>(ctx, &aot_mem) && ctx.pc == 0x08A3C184u) goto L_08A3C184;
    return;
L_08A3C184:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3C190;
      }
      goto L_08A3C18C;
    }
L_08A3C18C:
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(1348), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    goto L_08A3C190;
L_08A3C190:
    ctx.gpr[31] = (0x08A3C198u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[23] + static_cast<std::uint32_t>(88))))));
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 368u, 0x08A3639Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3C198u) goto L_08A3C198;
    return;
L_08A3C198:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2164)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2204)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(64)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2188)));
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1152)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[30]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08A3C1D0;
      }
      goto L_08A3C1C0;
    }
L_08A3C1C0:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1152)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1248)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    goto L_08A3C1D0;
L_08A3C1D0:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1232)));
    ctx.gpr[5] = (16192u << 16u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2196)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2184)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1152)));
    ctx.set_fpu_condition((ctx.fpr[15] <= ctx.fpr[30]));
    ctx.fpr[12] = ctx.fpr[14] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(1232), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(64)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08A3C21C;
      }
      goto L_08A3C20C;
    }
L_08A3C20C:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1152)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1248)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    goto L_08A3C21C;
L_08A3C21C:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1236)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[14] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(1236), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A3C23C;
L_08A3C23C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(1452), ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A3C23C;
      }
      goto L_08A3C258;
    }
L_08A3C258:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(588)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[30]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A3C280;
      }
      goto L_08A3C26C;
    }
L_08A3C26C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1456)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A3C280;
      }
      goto L_08A3C27C;
    }
L_08A3C27C:
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(1456), 0u);
    goto L_08A3C280;
L_08A3C280:
    ctx.gpr[31] = (0x08A3C288u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 411u, 0x08AF9D00u>(ctx, &aot_mem) && ctx.pc == 0x08A3C288u) goto L_08A3C288;
    return;
L_08A3C288:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3C2B8;
      }
      goto L_08A3C290;
    }
L_08A3C290:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[31] = (0x08A3C29Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25184));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 1016u, 0x08A97C88u>(ctx, &aot_mem) && ctx.pc == 0x08A3C29Cu) goto L_08A3C29C;
    return;
L_08A3C29C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3C2B0;
      }
      goto L_08A3C2A4;
    }
L_08A3C2A4:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(680), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A3C2C0;
      }
      goto L_08A3C2B0;
    }
L_08A3C2B0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(680), 0u);
      if (branch_taken) {
          goto L_08A3C2C0;
      }
      goto L_08A3C2B8;
    }
L_08A3C2B8:
    ctx.gpr[31] = (0x08A3C2C0u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 372u, 0x08A363E0u>(ctx, &aot_mem) && ctx.pc == 0x08A3C2C0u) goto L_08A3C2C0;
    return;
L_08A3C2C0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(616)));
    ctx.gpr[4] = (17274u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A3C5F0;
      }
      goto L_08A3C2DC;
    }
L_08A3C2DC:
    ctx.gpr[31] = (0x08A3C2E4u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 411u, 0x08AF9D00u>(ctx, &aot_mem) && ctx.pc == 0x08A3C2E4u) goto L_08A3C2E4;
    return;
L_08A3C2E4:
    ctx.gpr[4] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A3C5F0;
      }
      goto L_08A3C2F0;
    }
L_08A3C2F0:
    ctx.gpr[4] = (16230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.gpr[31] = (0x08A3C300u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x08A3C300u) goto L_08A3C300;
    return;
L_08A3C300:
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(1664));
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    { const bool branch_taken = ctx.gpr[23] != ctx.gpr[2];
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(1680));
      if (branch_taken) {
          goto L_08A3C384;
      }
      goto L_08A3C31C;
    }
L_08A3C31C:
    ctx.gpr[31] = (0x08A3C324u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2168)));
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 122u, 0x088ED020u>(ctx, &aot_mem) && ctx.pc == 0x08A3C324u) goto L_08A3C324;
    return;
L_08A3C324:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3C384;
      }
      goto L_08A3C32C;
    }
L_08A3C32C:
    ctx.gpr[5] = (16281u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[5] = (ctx.gpr[5] | 39322u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1696));
    ctx.gpr[5] = (48844u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.gpr[31] = (0x08A3C350u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 345u, 0x08A361E8u>(ctx, &aot_mem) && ctx.pc == 0x08A3C350u) goto L_08A3C350;
    return;
L_08A3C350:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A3C35Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 350u, 0x08A36268u>(ctx, &aot_mem) && ctx.pc == 0x08A3C35Cu) goto L_08A3C35C;
    return;
L_08A3C35C:
    ctx.gpr[4] = (15436u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1680), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1684), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[31] = (0x08A3C37Cu);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 523u, 0x08A37288u>(ctx, &aot_mem) && ctx.pc == 0x08A3C37Cu) goto L_08A3C37C;
    return;
L_08A3C37C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1688), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08A3C464;
      }
      goto L_08A3C384;
    }
L_08A3C384:
    ctx.gpr[4] = (16025u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x08A3C398u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 351u, 0x08AF987Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3C398u) goto L_08A3C398;
    return;
L_08A3C398:
    ctx.gpr[31] = (0x08A3C3A0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 368u, 0x08A3639Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3C3A0u) goto L_08A3C3A0;
    return;
L_08A3C3A0:
    ctx.gpr[31] = (0x08A3C3A8u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 444u, 0x08AFA030u>(ctx, &aot_mem) && ctx.pc == 0x08A3C3A8u) goto L_08A3C3A8;
    return;
L_08A3C3A8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A3C3B4u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 350u, 0x08A36268u>(ctx, &aot_mem) && ctx.pc == 0x08A3C3B4u) goto L_08A3C3B4;
    return;
L_08A3C3B4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1672)));
    ctx.gpr[4] = (15544u << 16u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[26];
    ctx.gpr[4] = (ctx.gpr[4] | 20972u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(1712));
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[26] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[26] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1672), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x08A3C3E0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 523u, 0x08A37288u>(ctx, &aot_mem) && ctx.pc == 0x08A3C3E0u) goto L_08A3C3E0;
    return;
L_08A3C3E0:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x08A3C3ECu);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 342u, 0x08AF981Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3C3ECu) goto L_08A3C3EC;
    return;
L_08A3C3EC:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x08A3C3FCu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 340u, 0x08A36178u>(ctx, &aot_mem) && ctx.pc == 0x08A3C3FCu) goto L_08A3C3FC;
    return;
L_08A3C3FC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A3C408u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 350u, 0x08A36268u>(ctx, &aot_mem) && ctx.pc == 0x08A3C408u) goto L_08A3C408;
    return;
L_08A3C408:
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[31] = (0x08A3C414u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 523u, 0x08A37288u>(ctx, &aot_mem) && ctx.pc == 0x08A3C414u) goto L_08A3C414;
    return;
L_08A3C414:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x08A3C420u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 343u, 0x08AF9824u>(ctx, &aot_mem) && ctx.pc == 0x08A3C420u) goto L_08A3C420;
    return;
L_08A3C420:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x08A3C430u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 340u, 0x08A36178u>(ctx, &aot_mem) && ctx.pc == 0x08A3C430u) goto L_08A3C430;
    return;
L_08A3C430:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A3C43Cu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 566u, 0x089274C4u>(ctx, &aot_mem) && ctx.pc == 0x08A3C43Cu) goto L_08A3C43C;
    return;
L_08A3C43C:
    ctx.gpr[4] = (15139u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (15523u << 16u);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x08A3C460u);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 523u, 0x08A37288u>(ctx, &aot_mem) && ctx.pc == 0x08A3C460u) goto L_08A3C460;
    return;
L_08A3C460:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1688), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08A3C464;
L_08A3C464:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(1648));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A3C478u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 335u, 0x08A360F0u>(ctx, &aot_mem) && ctx.pc == 0x08A3C478u) goto L_08A3C478;
    return;
L_08A3C478:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A3C484u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 350u, 0x08A36268u>(ctx, &aot_mem) && ctx.pc == 0x08A3C484u) goto L_08A3C484;
    return;
L_08A3C484:
    ctx.gpr[4] = (0u | 27u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x08A3C4ACu);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 78u, 0x08998634u>(ctx, &aot_mem) && ctx.pc == 0x08A3C4ACu) goto L_08A3C4AC;
    return;
L_08A3C4AC:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[31] = (0x08A3C4C0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 345u, 0x08A361E8u>(ctx, &aot_mem) && ctx.pc == 0x08A3C4C0u) goto L_08A3C4C0;
    return;
L_08A3C4C0:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[4] = (0u | 56u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x08A3C4E8u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 78u, 0x08998634u>(ctx, &aot_mem) && ctx.pc == 0x08A3C4E8u) goto L_08A3C4E8;
    return;
L_08A3C4E8:
    ctx.gpr[4] = (48928u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16160u << 16u);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x08A3C50Cu);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 523u, 0x08A37288u>(ctx, &aot_mem) && ctx.pc == 0x08A3C50Cu) goto L_08A3C50C;
    return;
L_08A3C50C:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1664)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[0];
    ctx.gpr[31] = (0x08A3C524u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1664), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 523u, 0x08A37288u>(ctx, &aot_mem) && ctx.pc == 0x08A3C524u) goto L_08A3C524;
    return;
L_08A3C524:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1668)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (16416u << 16u);
    ctx.fpr[14] = ctx.fpr[13] + ctx.fpr[0];
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1668), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[31] = (0x08A3C544u);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 523u, 0x08A37288u>(ctx, &aot_mem) && ctx.pc == 0x08A3C544u) goto L_08A3C544;
    return;
L_08A3C544:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1672)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.fpr[15] = ctx.fpr[14] + ctx.fpr[0];
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[31] = (0x08A3C564u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1672), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 345u, 0x08A361E8u>(ctx, &aot_mem) && ctx.pc == 0x08A3C564u) goto L_08A3C564;
    return;
L_08A3C564:
    ctx.gpr[4] = (0u | 57u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x08A3C58Cu);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 78u, 0x08998634u>(ctx, &aot_mem) && ctx.pc == 0x08A3C58Cu) goto L_08A3C58C;
    return;
L_08A3C58C:
    ctx.gpr[31] = (0x08A3C594u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1356)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 400u, 0x08AF9C04u>(ctx, &aot_mem) && ctx.pc == 0x08A3C594u) goto L_08A3C594;
    return;
L_08A3C594:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_08A3C5AC;
      }
      goto L_08A3C5A0;
    }
L_08A3C5A0:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_08A3C5AC;
L_08A3C5AC:
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    ctx.gpr[4] = (17820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 16384u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(1356), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A3C5E8;
      }
      goto L_08A3C5CC;
    }
L_08A3C5CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1440)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(280));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08A3C5E8u);
    ctx.gpr[4] = (ctx.gpr[23] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A3C5E8u) goto L_08A3C5E8;
    return;
L_08A3C5E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3C5F4;
      }
      goto L_08A3C5F0;
    }
L_08A3C5F0:
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(1356), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    goto L_08A3C5F4;
L_08A3C5F4:
    ctx.gpr[31] = (0x08A3C5FCu);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 628u, 0x0889F00Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3C5FCu) goto L_08A3C5FC;
    return;
L_08A3C5FC:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2200)));
    ctx.gpr[31] = (0x08A3C60Cu);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 349u, 0x08A36250u>(ctx, &aot_mem) && ctx.pc == 0x08A3C60Cu) goto L_08A3C60C;
    return;
L_08A3C60C:
    ctx.gpr[4] = (15651u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[4] | 55051u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (15692u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.gpr[30] = (0u | 25u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[22] = (0u | 18u);
    ctx.gpr[21] = (0u | 33u);
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(1728));
    ctx.gpr[17] = (ctx.gpr[23] | 0u);
    ctx.gpr[16] = (ctx.gpr[23] + static_cast<std::uint32_t>(1024));
    ctx.gpr[19] = (2229u << 16u);
    goto L_08A3C648;
L_08A3C648:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1168)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[4] = (16025u << 16u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1728), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A3C728;
      }
      goto L_08A3C670;
    }
L_08A3C670:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[4] = (0u | 2u);
      if (branch_taken) {
          goto L_08A3C680;
      }
      goto L_08A3C678;
    }
L_08A3C678:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A3C728;
      }
      goto L_08A3C680;
    }
L_08A3C680:
    ctx.set_fpu_condition((ctx.fpr[26] <= ctx.fpr[24]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A3C728;
      }
      goto L_08A3C690;
    }
L_08A3C690:
    ctx.gpr[31] = (0x08A3C698u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 411u, 0x08AF9D00u>(ctx, &aot_mem) && ctx.pc == 0x08A3C698u) goto L_08A3C698;
    return;
L_08A3C698:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3C6B4;
      }
      goto L_08A3C6A0;
    }
L_08A3C6A0:
    ctx.gpr[31] = (0x08A3C6A8u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 411u, 0x08AF9D00u>(ctx, &aot_mem) && ctx.pc == 0x08A3C6A8u) goto L_08A3C6A8;
    return;
L_08A3C6A8:
    ctx.gpr[4] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A3C728;
      }
      goto L_08A3C6B4;
    }
L_08A3C6B4:
    ctx.gpr[4] = (ctx.gpr[23] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1016)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A3C6F0;
      }
      goto L_08A3C6C8;
    }
L_08A3C6C8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(96)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1728)));
    ctx.gpr[6] = (16128u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2172)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[31] = (0x08A3C6E8u);
    ctx.gpr[6] = (0u | 14u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 101u, 0x0886476Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3C6E8u) goto L_08A3C6E8;
    return;
L_08A3C6E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3C710;
      }
      goto L_08A3C6F0;
    }
L_08A3C6F0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(96)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1728)));
    ctx.gpr[6] = (16128u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2172)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[31] = (0x08A3C710u);
    ctx.gpr[6] = (0u | 13u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 101u, 0x0886476Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3C710u) goto L_08A3C710;
    return;
L_08A3C710:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1728)));
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A3C728;
      }
      goto L_08A3C724;
    }
L_08A3C724:
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1728)));
    goto L_08A3C728;
L_08A3C728:
    ctx.gpr[31] = (0x08A3C730u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x08A3C730u) goto L_08A3C730;
    return;
L_08A3C730:
    { const bool branch_taken = ctx.gpr[23] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A3C858;
      }
      goto L_08A3C738;
    }
L_08A3C738:
    ctx.gpr[31] = (0x08A3C740u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 428u, 0x08AF9E58u>(ctx, &aot_mem) && ctx.pc == 0x08A3C740u) goto L_08A3C740;
    return;
L_08A3C740:
    ctx.gpr[4] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A3C770;
      }
      goto L_08A3C74C;
    }
L_08A3C74C:
    ctx.gpr[31] = (0x08A3C754u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 428u, 0x08AF9E58u>(ctx, &aot_mem) && ctx.pc == 0x08A3C754u) goto L_08A3C754;
    return;
L_08A3C754:
    ctx.gpr[4] = (0u | 19u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A3C770;
      }
      goto L_08A3C760;
    }
L_08A3C760:
    ctx.gpr[31] = (0x08A3C768u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 428u, 0x08AF9E58u>(ctx, &aot_mem) && ctx.pc == 0x08A3C768u) goto L_08A3C768;
    return;
L_08A3C768:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[30];
    // nop
      if (branch_taken) {
          goto L_08A3C79C;
      }
      goto L_08A3C770;
    }
L_08A3C770:
    ctx.gpr[4] = (15948u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A3C82C;
      }
      goto L_08A3C78C;
    }
L_08A3C78C:
    ctx.gpr[4] = (16025u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A3C82C;
      }
      goto L_08A3C79C;
    }
L_08A3C79C:
    ctx.gpr[31] = (0x08A3C7A4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 428u, 0x08AF9E58u>(ctx, &aot_mem) && ctx.pc == 0x08A3C7A4u) goto L_08A3C7A4;
    return;
L_08A3C7A4:
    ctx.gpr[4] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A3C7D0;
      }
      goto L_08A3C7B0;
    }
L_08A3C7B0:
    ctx.gpr[31] = (0x08A3C7B8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 428u, 0x08AF9E58u>(ctx, &aot_mem) && ctx.pc == 0x08A3C7B8u) goto L_08A3C7B8;
    return;
L_08A3C7B8:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_08A3C7D0;
      }
      goto L_08A3C7C0;
    }
L_08A3C7C0:
    ctx.gpr[31] = (0x08A3C7C8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 428u, 0x08AF9E58u>(ctx, &aot_mem) && ctx.pc == 0x08A3C7C8u) goto L_08A3C7C8;
    return;
L_08A3C7C8:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_08A3C7FC;
      }
      goto L_08A3C7D0;
    }
L_08A3C7D0:
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A3C82C;
      }
      goto L_08A3C7EC;
    }
L_08A3C7EC:
    ctx.gpr[4] = (15948u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A3C82C;
      }
      goto L_08A3C7FC;
    }
L_08A3C7FC:
    ctx.gpr[31] = (0x08A3C804u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 428u, 0x08AF9E58u>(ctx, &aot_mem) && ctx.pc == 0x08A3C804u) goto L_08A3C804;
    return;
L_08A3C804:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A3C82C;
      }
      goto L_08A3C810;
    }
L_08A3C810:
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[28]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A3C82C;
      }
      goto L_08A3C820;
    }
L_08A3C820:
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_08A3C82C;
L_08A3C82C:
    ctx.gpr[31] = (0x08A3C834u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 372u, 0x08AF9994u>(ctx, &aot_mem) && ctx.pc == 0x08A3C834u) goto L_08A3C834;
    return;
L_08A3C834:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-10504)));
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2168)));
      if (branch_taken) {
          goto L_08A3C854;
      }
      goto L_08A3C848;
    }
L_08A3C848:
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(120), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08A3C858;
      }
      goto L_08A3C854;
    }
L_08A3C854:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(120), static_cast<std::uint8_t>(0u));
    goto L_08A3C858;
L_08A3C858:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1168), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-10520)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1152), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08A3C648;
      }
      goto L_08A3C880;
    }
L_08A3C880:
    ctx.gpr[4] = (15820u << 16u);
    ctx.set_fpu_condition((ctx.fpr[22] <= ctx.fpr[30]));
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2200)));
    ctx.gpr[4] = (16128u << 16u);
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A3C8B0;
      }
      goto L_08A3C8A0;
    }
L_08A3C8A0:
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[30]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(602))))));
        goto L_08A3CA3C;
    }
    goto L_08A3C8B0;
L_08A3C8B0:
    ctx.gpr[31] = (0x08A3C8B8u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 411u, 0x08AF9D00u>(ctx, &aot_mem) && ctx.pc == 0x08A3C8B8u) goto L_08A3C8B8;
    return;
L_08A3C8B8:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(602))))));
        goto L_08A3CA3C;
    }
    goto L_08A3C8C0;
L_08A3C8C0:
    ctx.gpr[31] = (0x08A3C8C8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 349u, 0x08A36250u>(ctx, &aot_mem) && ctx.pc == 0x08A3C8C8u) goto L_08A3C8C8;
    return;
L_08A3C8C8:
    ctx.gpr[4] = (15395u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[4] | 55051u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(602))))));
        goto L_08A3CA3C;
    }
    goto L_08A3C8E8;
L_08A3C8E8:
    ctx.gpr[31] = (0x08A3C8F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 343u, 0x08A361D0u>(ctx, &aot_mem) && ctx.pc == 0x08A3C8F0u) goto L_08A3C8F0;
    return;
L_08A3C8F0:
    ctx.gpr[4] = (17224u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17658u << 16u);
    ctx.set_fpu_condition((ctx.fpr[22] <= ctx.fpr[30]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A3C9A8;
      }
      goto L_08A3C910;
    }
L_08A3C910:
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(208)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[6] = (17274u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[15];
    ctx.gpr[7] = (17096u << 16u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1732));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(1736));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1732), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[31] = (0x08A3C94Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1736), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 330u, 0x08AF9774u>(ctx, &aot_mem) && ctx.pc == 0x08A3C94Cu) goto L_08A3C94C;
    return;
L_08A3C94C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08A3C95Cu);
    ctx.gpr[16] = (ctx.gpr[4] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 340u, 0x08AF97F4u>(ctx, &aot_mem) && ctx.pc == 0x08A3C95Cu) goto L_08A3C95C;
    return;
L_08A3C95C:
    ctx.gpr[4] = (18076u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[4] | 16384u);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08A3C98Cu);
    ctx.gpr[18] = (ctx.gpr[5] & 65535u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08A3C98Cu) goto L_08A3C98C;
    return;
L_08A3C98C:
    ctx.gpr[5] = (ctx.gpr[18] << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A3C9A0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 645u, 0x08A96C48u>(ctx, &aot_mem) && ctx.pc == 0x08A3C9A0u) goto L_08A3C9A0;
    return;
L_08A3C9A0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(602))))));
      if (branch_taken) {
          goto L_08A3CA3C;
      }
      goto L_08A3C9A8;
    }
L_08A3C9A8:
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(208)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[6] = (17174u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[15];
    ctx.gpr[7] = (16928u << 16u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1740));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(1744));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1740), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[31] = (0x08A3C9E4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1744), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 330u, 0x08AF9774u>(ctx, &aot_mem) && ctx.pc == 0x08A3C9E4u) goto L_08A3C9E4;
    return;
L_08A3C9E4:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08A3C9F4u);
    ctx.gpr[16] = (ctx.gpr[4] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 340u, 0x08AF97F4u>(ctx, &aot_mem) && ctx.pc == 0x08A3C9F4u) goto L_08A3C9F4;
    return;
L_08A3C9F4:
    ctx.gpr[4] = (17820u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[4] | 16384u);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08A3CA24u);
    ctx.gpr[18] = (ctx.gpr[5] & 65535u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08A3CA24u) goto L_08A3CA24;
    return;
L_08A3CA24:
    ctx.gpr[5] = (ctx.gpr[18] << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A3CA38u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 645u, 0x08A96C48u>(ctx, &aot_mem) && ctx.pc == 0x08A3CA38u) goto L_08A3CA38;
    return;
L_08A3CA38:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(602))))));
    goto L_08A3CA3C;
L_08A3CA3C:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-5));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(602), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(602))))));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-129));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(598))))));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(602), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[5] & 32u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3CA70;
      }
      goto L_08A3CA68;
    }
L_08A3CA68:
    ctx.gpr[31] = (0x08A3CA70u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 406u, 0x089EA89Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3CA70u) goto L_08A3CA70;
    return;
L_08A3CA70:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(322))))));
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3CB18;
      }
      goto L_08A3CA80;
    }
L_08A3CA80:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(1760));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[31] = (0x08A3CA98u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 345u, 0x08A361E8u>(ctx, &aot_mem) && ctx.pc == 0x08A3CA98u) goto L_08A3CA98;
    return;
L_08A3CA98:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A3CAA4u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 350u, 0x08A36268u>(ctx, &aot_mem) && ctx.pc == 0x08A3CAA4u) goto L_08A3CAA4;
    return;
L_08A3CAA4:
    ctx.gpr[18] = (ctx.gpr[23] + static_cast<std::uint32_t>(128));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[31] = (0x08A3CABCu);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 345u, 0x08A361E8u>(ctx, &aot_mem) && ctx.pc == 0x08A3CABCu) goto L_08A3CABC;
    return;
L_08A3CABC:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A3CAC8u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 350u, 0x08A36268u>(ctx, &aot_mem) && ctx.pc == 0x08A3CAC8u) goto L_08A3CAC8;
    return;
L_08A3CAC8:
    ctx.gpr[18] = (ctx.gpr[23] + static_cast<std::uint32_t>(144));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[31] = (0x08A3CAE0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 345u, 0x08A361E8u>(ctx, &aot_mem) && ctx.pc == 0x08A3CAE0u) goto L_08A3CAE0;
    return;
L_08A3CAE0:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A3CAECu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 350u, 0x08A36268u>(ctx, &aot_mem) && ctx.pc == 0x08A3CAECu) goto L_08A3CAEC;
    return;
L_08A3CAEC:
    ctx.gpr[18] = (ctx.gpr[23] + static_cast<std::uint32_t>(160));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[31] = (0x08A3CB04u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 345u, 0x08A361E8u>(ctx, &aot_mem) && ctx.pc == 0x08A3CB04u) goto L_08A3CB04;
    return;
L_08A3CB04:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A3CB10u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 350u, 0x08A36268u>(ctx, &aot_mem) && ctx.pc == 0x08A3CB10u) goto L_08A3CB10;
    return;
L_08A3CB10:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3CBD8;
      }
      goto L_08A3CB18;
    }
L_08A3CB18:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(2237)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3CBD8;
      }
      goto L_08A3CB24;
    }
L_08A3CB24:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2224)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[30])) && ctx.fpr[12] == ctx.fpr[30]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A3CB4C;
      }
      goto L_08A3CB38;
    }
L_08A3CB38:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2232)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[30])) && ctx.fpr[12] == ctx.fpr[30]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A3CB60;
      }
      goto L_08A3CB4C;
    }
L_08A3CB4C:
    ctx.gpr[31] = (0x08A3CB54u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 411u, 0x08AF9D00u>(ctx, &aot_mem) && ctx.pc == 0x08A3CB54u) goto L_08A3CB54;
    return;
L_08A3CB54:
    ctx.gpr[4] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A3CBD8;
      }
      goto L_08A3CB60;
    }
L_08A3CB60:
    ctx.gpr[31] = (0x08A3CB68u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(112)));
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 344u, 0x08A361DCu>(ctx, &aot_mem) && ctx.pc == 0x08A3CB68u) goto L_08A3CB68;
    return;
L_08A3CB68:
    ctx.gpr[4] = (15267u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A3CBD8;
      }
      goto L_08A3CB84;
    }
L_08A3CB84:
    ctx.gpr[31] = (0x08A3CB8Cu);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(116)));
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 344u, 0x08A361DCu>(ctx, &aot_mem) && ctx.pc == 0x08A3CB8Cu) goto L_08A3CB8C;
    return;
L_08A3CB8C:
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A3CBD8;
      }
      goto L_08A3CB9C;
    }
L_08A3CB9C:
    ctx.gpr[31] = (0x08A3CBA4u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(120)));
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 344u, 0x08A361DCu>(ctx, &aot_mem) && ctx.pc == 0x08A3CBA4u) goto L_08A3CBA4;
    return;
L_08A3CBA4:
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A3CBD8;
      }
      goto L_08A3CBB4;
    }
L_08A3CBB4:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1776));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[31] = (0x08A3CBC8u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 345u, 0x08A361E8u>(ctx, &aot_mem) && ctx.pc == 0x08A3CBC8u) goto L_08A3CBC8;
    return;
L_08A3CBC8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A3CBD4u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 350u, 0x08A36268u>(ctx, &aot_mem) && ctx.pc == 0x08A3CBD4u) goto L_08A3CBD4;
    return;
L_08A3CBD4:
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    goto L_08A3CBD8;
L_08A3CBD8:
    ctx.gpr[18] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(2220)));
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3CC04;
      }
      goto L_08A3CBE4;
    }
L_08A3CBE4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(1332))))));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3CC04;
      }
      goto L_08A3CBF4;
    }
L_08A3CBF4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(1333))))));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3D17C;
      }
      goto L_08A3CC04;
    }
L_08A3CC04:
    ctx.gpr[31] = (0x08A3CC0Cu);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 342u, 0x08AF981Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3CC0Cu) goto L_08A3CC0C;
    return;
L_08A3CC0C:
    ctx.gpr[5] = (ctx.gpr[23] + static_cast<std::uint32_t>(976));
    ctx.gpr[31] = (0x08A3CC18u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 336u, 0x08A36118u>(ctx, &aot_mem) && ctx.pc == 0x08A3CC18u) goto L_08A3CC18;
    return;
L_08A3CC18:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(1792));
    ctx.set_fpu_condition((ctx.fpr[22] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (ctx.gpr[23] + static_cast<std::uint32_t>(240));
      if (branch_taken) {
          goto L_08A3CC40;
      }
      goto L_08A3CC38;
    }
L_08A3CC38:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
      if (branch_taken) {
          goto L_08A3CC5C;
      }
      goto L_08A3CC40;
    }
L_08A3CC40:
    ctx.gpr[5] = (49024u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A3CC5C;
      }
      goto L_08A3CC58;
    }
L_08A3CC58:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A3CC5C;
L_08A3CC5C:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A3CC6Cu);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 334u, 0x08A360D0u>(ctx, &aot_mem) && ctx.pc == 0x08A3CC6Cu) goto L_08A3CC6C;
    return;
L_08A3CC6C:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[4] = (48665u << 16u);
      if (branch_taken) {
          goto L_08A3CCE8;
      }
      goto L_08A3CC74;
    }
L_08A3CC74:
    ctx.gpr[4] = (48588u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(212)));
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(1808));
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A3CC98u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[28] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[28] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 344u, 0x08AF982Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3CC98u) goto L_08A3CC98;
    return;
L_08A3CC98:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A3CCA8u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 340u, 0x08A36178u>(ctx, &aot_mem) && ctx.pc == 0x08A3CCA8u) goto L_08A3CCA8;
    return;
L_08A3CCA8:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(1824));
    ctx.gpr[31] = (0x08A3CCB4u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 342u, 0x08AF981Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3CCB4u) goto L_08A3CCB4;
    return;
L_08A3CCB4:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A3CCC4u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 338u, 0x08A36148u>(ctx, &aot_mem) && ctx.pc == 0x08A3CCC4u) goto L_08A3CCC4;
    return;
L_08A3CCC4:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A3CCD4u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 435u, 0x08AF9EA4u>(ctx, &aot_mem) && ctx.pc == 0x08A3CCD4u) goto L_08A3CCD4;
    return;
L_08A3CCD4:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(1333))))));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(1333), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A3CD44;
      }
      goto L_08A3CCE8;
    }
L_08A3CCE8:
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(212)));
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(1840));
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A3CD08u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[28] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[28] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 344u, 0x08AF982Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3CD08u) goto L_08A3CD08;
    return;
L_08A3CD08:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A3CD18u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 340u, 0x08A36178u>(ctx, &aot_mem) && ctx.pc == 0x08A3CD18u) goto L_08A3CD18;
    return;
L_08A3CD18:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(1856));
    ctx.gpr[31] = (0x08A3CD24u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 342u, 0x08AF981Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3CD24u) goto L_08A3CD24;
    return;
L_08A3CD24:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A3CD34u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 338u, 0x08A36148u>(ctx, &aot_mem) && ctx.pc == 0x08A3CD34u) goto L_08A3CD34;
    return;
L_08A3CD34:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A3CD44u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 435u, 0x08AF9EA4u>(ctx, &aot_mem) && ctx.pc == 0x08A3CD44u) goto L_08A3CD44;
    return;
L_08A3CD44:
    ctx.gpr[31] = (0x08A3CD4Cu);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 411u, 0x08AF9D00u>(ctx, &aot_mem) && ctx.pc == 0x08A3CD4Cu) goto L_08A3CD4C;
    return;
L_08A3CD4C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3D17C;
      }
      goto L_08A3CD54;
    }
L_08A3CD54:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1184)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[30])) && ctx.fpr[12] == ctx.fpr[30]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A3CF54;
      }
      goto L_08A3CD68;
    }
L_08A3CD68:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1188)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[30])) && ctx.fpr[12] == ctx.fpr[30]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A3CF54;
      }
      goto L_08A3CD7C;
    }
L_08A3CD7C:
    ctx.gpr[31] = (0x08A3CD84u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 343u, 0x08AF9824u>(ctx, &aot_mem) && ctx.pc == 0x08A3CD84u) goto L_08A3CD84;
    return;
L_08A3CD84:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[30]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A3CF54;
      }
      goto L_08A3CD98;
    }
L_08A3CD98:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1192)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[30])) && ctx.fpr[12] == ctx.fpr[30]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A3CDC0;
      }
      goto L_08A3CDAC;
    }
L_08A3CDAC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1196)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[30])) && ctx.fpr[12] == ctx.fpr[30]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A3CF54;
      }
      goto L_08A3CDC0;
    }
L_08A3CDC0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1008)));
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A3CDD0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(44)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 343u, 0x08AF9824u>(ctx, &aot_mem) && ctx.pc == 0x08A3CDD0u) goto L_08A3CDD0;
    return;
L_08A3CDD0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (15897u << 16u);
    ctx.fpr[20] = ctx.fpr[20] - ctx.fpr[12];
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (16025u << 16u);
      if (branch_taken) {
          goto L_08A3CE1C;
      }
      goto L_08A3CDF4;
    }
L_08A3CDF4:
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1920), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[20];
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1920));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(1924));
    ctx.gpr[31] = (0x08A3CE14u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1924), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 336u, 0x08AF97C0u>(ctx, &aot_mem) && ctx.pc == 0x08A3CE14u) goto L_08A3CE14;
    return;
L_08A3CE14:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08A3CE5C;
      }
      goto L_08A3CE1C;
    }
L_08A3CE1C:
    ctx.gpr[4] = (48547u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (48655u << 16u);
      if (branch_taken) {
          goto L_08A3CE5C;
      }
      goto L_08A3CE38;
    }
L_08A3CE38:
    ctx.gpr[4] = (ctx.gpr[4] | 23593u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1928), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[20];
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1928));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(1932));
    ctx.gpr[31] = (0x08A3CE58u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1932), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 330u, 0x08AF9774u>(ctx, &aot_mem) && ctx.pc == 0x08A3CE58u) goto L_08A3CE58;
    return;
L_08A3CE58:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08A3CE5C;
L_08A3CE5C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1872), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[31] = (0x08A3CE68u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 348u, 0x08A36234u>(ctx, &aot_mem) && ctx.pc == 0x08A3CE68u) goto L_08A3CE68;
    return;
L_08A3CE68:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1876), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(1876));
    ctx.gpr[31] = (0x08A3CE78u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1872));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 330u, 0x08AF9774u>(ctx, &aot_mem) && ctx.pc == 0x08A3CE78u) goto L_08A3CE78;
    return;
L_08A3CE78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1008)));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(1888));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[31] = (0x08A3CE90u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 340u, 0x08AF97F4u>(ctx, &aot_mem) && ctx.pc == 0x08A3CE90u) goto L_08A3CE90;
    return;
L_08A3CE90:
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(212)));
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[31] = (0x08A3CEA8u);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 344u, 0x08AF982Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3CEA8u) goto L_08A3CEA8;
    return;
L_08A3CEA8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A3CEB8u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 340u, 0x08A36178u>(ctx, &aot_mem) && ctx.pc == 0x08A3CEB8u) goto L_08A3CEB8;
    return;
L_08A3CEB8:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(1904));
    ctx.gpr[31] = (0x08A3CEC4u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 343u, 0x08AF9824u>(ctx, &aot_mem) && ctx.pc == 0x08A3CEC4u) goto L_08A3CEC4;
    return;
L_08A3CEC4:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A3CED4u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 338u, 0x08A36148u>(ctx, &aot_mem) && ctx.pc == 0x08A3CED4u) goto L_08A3CED4;
    return;
L_08A3CED4:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A3CEE4u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 435u, 0x08AF9EA4u>(ctx, &aot_mem) && ctx.pc == 0x08A3CEE4u) goto L_08A3CEE4;
    return;
L_08A3CEE4:
    ctx.gpr[31] = (0x08A3CEECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 340u, 0x08AF97F4u>(ctx, &aot_mem) && ctx.pc == 0x08A3CEECu) goto L_08A3CEEC;
    return;
L_08A3CEEC:
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1304)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1008)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(212)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[31] = (0x08A3CF14u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 342u, 0x08AF981Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3CF14u) goto L_08A3CF14;
    return;
L_08A3CF14:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A3CF24u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 340u, 0x08A36178u>(ctx, &aot_mem) && ctx.pc == 0x08A3CF24u) goto L_08A3CF24;
    return;
L_08A3CF24:
    ctx.gpr[31] = (0x08A3CF2Cu);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 343u, 0x08AF9824u>(ctx, &aot_mem) && ctx.pc == 0x08A3CF2Cu) goto L_08A3CF2C;
    return;
L_08A3CF2C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A3CF3Cu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 338u, 0x08A36148u>(ctx, &aot_mem) && ctx.pc == 0x08A3CF3Cu) goto L_08A3CF3C;
    return;
L_08A3CF3C:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A3CF4Cu);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 435u, 0x08AF9EA4u>(ctx, &aot_mem) && ctx.pc == 0x08A3CF4Cu) goto L_08A3CF4C;
    return;
L_08A3CF4C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3D17C;
      }
      goto L_08A3CF54;
    }
L_08A3CF54:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1192)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[30])) && ctx.fpr[12] == ctx.fpr[30]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A3D17C;
      }
      goto L_08A3CF68;
    }
L_08A3CF68:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1196)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[30])) && ctx.fpr[12] == ctx.fpr[30]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A3D17C;
      }
      goto L_08A3CF7C;
    }
L_08A3CF7C:
    ctx.gpr[31] = (0x08A3CF84u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 343u, 0x08AF9824u>(ctx, &aot_mem) && ctx.pc == 0x08A3CF84u) goto L_08A3CF84;
    return;
L_08A3CF84:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[30]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A3D17C;
      }
      goto L_08A3CF98;
    }
L_08A3CF98:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1184)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[30])) && ctx.fpr[12] == ctx.fpr[30]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A3CFC0;
      }
      goto L_08A3CFAC;
    }
L_08A3CFAC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1188)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[30])) && ctx.fpr[12] == ctx.fpr[30]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A3D17C;
      }
      goto L_08A3CFC0;
    }
L_08A3CFC0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1008)));
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A3CFD0u);
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(48)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 343u, 0x08AF9824u>(ctx, &aot_mem) && ctx.pc == 0x08A3CFD0u) goto L_08A3CFD0;
    return;
L_08A3CFD0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (15897u << 16u);
    ctx.fpr[22] = ctx.fpr[22] - ctx.fpr[12];
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[22] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (16025u << 16u);
      if (branch_taken) {
          goto L_08A3D01C;
      }
      goto L_08A3CFF4;
    }
L_08A3CFF4:
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1992), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[22];
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1992));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(1996));
    ctx.gpr[31] = (0x08A3D014u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1996), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 336u, 0x08AF97C0u>(ctx, &aot_mem) && ctx.pc == 0x08A3D014u) goto L_08A3D014;
    return;
L_08A3D014:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08A3D05C;
      }
      goto L_08A3D01C;
    }
L_08A3D01C:
    ctx.gpr[4] = (48665u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (48793u << 16u);
      if (branch_taken) {
          goto L_08A3D05C;
      }
      goto L_08A3D038;
    }
L_08A3D038:
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2000), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[22];
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(2000));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(2004));
    ctx.gpr[31] = (0x08A3D058u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2004), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 330u, 0x08AF9774u>(ctx, &aot_mem) && ctx.pc == 0x08A3D058u) goto L_08A3D058;
    return;
L_08A3D058:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08A3D05C;
L_08A3D05C:
    ctx.gpr[31] = (0x08A3D064u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 348u, 0x08A36234u>(ctx, &aot_mem) && ctx.pc == 0x08A3D064u) goto L_08A3D064;
    return;
L_08A3D064:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1988), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(1936));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1936), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(1988));
    ctx.gpr[31] = (0x08A3D07Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 330u, 0x08AF9774u>(ctx, &aot_mem) && ctx.pc == 0x08A3D07Cu) goto L_08A3D07C;
    return;
L_08A3D07C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1008)));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(1952));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[31] = (0x08A3D094u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 340u, 0x08AF97F4u>(ctx, &aot_mem) && ctx.pc == 0x08A3D094u) goto L_08A3D094;
    return;
L_08A3D094:
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(212)));
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[31] = (0x08A3D0ACu);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[26] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[26] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 344u, 0x08AF982Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3D0ACu) goto L_08A3D0AC;
    return;
L_08A3D0AC:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A3D0BCu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 340u, 0x08A36178u>(ctx, &aot_mem) && ctx.pc == 0x08A3D0BCu) goto L_08A3D0BC;
    return;
L_08A3D0BC:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(1968));
    ctx.gpr[31] = (0x08A3D0C8u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 343u, 0x08AF9824u>(ctx, &aot_mem) && ctx.pc == 0x08A3D0C8u) goto L_08A3D0C8;
    return;
L_08A3D0C8:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A3D0D8u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 338u, 0x08A36148u>(ctx, &aot_mem) && ctx.pc == 0x08A3D0D8u) goto L_08A3D0D8;
    return;
L_08A3D0D8:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A3D0E8u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 435u, 0x08AF9EA4u>(ctx, &aot_mem) && ctx.pc == 0x08A3D0E8u) goto L_08A3D0E8;
    return;
L_08A3D0E8:
    ctx.gpr[31] = (0x08A3D0F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 340u, 0x08AF97F4u>(ctx, &aot_mem) && ctx.pc == 0x08A3D0F0u) goto L_08A3D0F0;
    return;
L_08A3D0F0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1988)));
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (16544u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1936), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(1984));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A3D118u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1984), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 330u, 0x08AF9774u>(ctx, &aot_mem) && ctx.pc == 0x08A3D118u) goto L_08A3D118;
    return;
L_08A3D118:
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1304)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1008)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(212)));
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[31] = (0x08A3D144u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 342u, 0x08AF981Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3D144u) goto L_08A3D144;
    return;
L_08A3D144:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A3D154u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 340u, 0x08A36178u>(ctx, &aot_mem) && ctx.pc == 0x08A3D154u) goto L_08A3D154;
    return;
L_08A3D154:
    ctx.gpr[31] = (0x08A3D15Cu);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 343u, 0x08AF9824u>(ctx, &aot_mem) && ctx.pc == 0x08A3D15Cu) goto L_08A3D15C;
    return;
L_08A3D15C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A3D16Cu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 338u, 0x08A36148u>(ctx, &aot_mem) && ctx.pc == 0x08A3D16Cu) goto L_08A3D16C;
    return;
L_08A3D16C:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A3D17Cu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 435u, 0x08AF9EA4u>(ctx, &aot_mem) && ctx.pc == 0x08A3D17Cu) goto L_08A3D17C;
    return;
L_08A3D17C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2260)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2264)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2268)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2272)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2276)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2280)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2284)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2288)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2292)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2296)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2300)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2304)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2308)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2312)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2316)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2320)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(2336));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3D1C4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] & 255u);
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(112));
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x08A3D228u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08A3D228u) goto L_08A3D228;
    return;
L_08A3D228:
    ctx.gpr[31] = (0x08A3D230u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 1081u, 0x08A97ED4u>(ctx, &aot_mem) && ctx.pc == 0x08A3D230u) goto L_08A3D230;
    return;
L_08A3D230:
    ctx.gpr[19] = (0u + static_cast<std::uint32_t>(-33));
    ctx.gpr[4] = (15360u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (15948u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[20] = (2230u << 16u);
    ctx.gpr[4] = (49024u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17279u << 16u);
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[26] = std::bit_cast<float>(0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[21] = (2232u << 16u);
      if (branch_taken) {
          goto L_08A3D27C;
      }
      goto L_08A3D268;
    }
L_08A3D268:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[4] | 32u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(597), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A3D2B0;
      }
      goto L_08A3D27C;
    }
L_08A3D27C:
    ctx.gpr[31] = (0x08A3D284u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08A3D284u) goto L_08A3D284;
    return;
L_08A3D284:
    ctx.gpr[31] = (0x08A3D28Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 1064u, 0x08A97E3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3D28Cu) goto L_08A3D28C;
    return;
L_08A3D28C:
    ctx.gpr[4] = (0u < ctx.gpr[2] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(597), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A3D2B0;
L_08A3D2B0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(832)));
    ctx.gpr[31] = (0x08A3D2C0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08A3D2C0u) goto L_08A3D2C0;
    return;
L_08A3D2C0:
    ctx.gpr[31] = (0x08A3D2C8u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 799u, 0x08A97230u>(ctx, &aot_mem) && ctx.pc == 0x08A3D2C8u) goto L_08A3D2C8;
    return;
L_08A3D2C8:
    ctx.gpr[4] = (0u - ctx.gpr[2]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(832)));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-7864)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[15] - ctx.fpr[13];
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[26] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(832), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(832)));
        goto L_08A3D308;
    }
    goto L_08A3D308;
L_08A3D308:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_08A3D320;
    }
    goto L_08A3D320;
L_08A3D320:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(832), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1316)));
    ctx.gpr[31] = (0x08A3D334u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08A3D334u) goto L_08A3D334;
    return;
L_08A3D334:
    ctx.gpr[31] = (0x08A3D33Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 812u, 0x08A972D8u>(ctx, &aot_mem) && ctx.pc == 0x08A3D33Cu) goto L_08A3D33C;
    return;
L_08A3D33C:
    ctx.gpr[4] = (0u - ctx.gpr[2]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1316)));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-7864)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[26] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1316), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    if (!ctx.fpu_condition()) {
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1316)));
        goto L_08A3D378;
    }
    goto L_08A3D378;
L_08A3D378:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
        goto L_08A3D390;
    }
    goto L_08A3D390;
L_08A3D390:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1316), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08A3D39Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08A3D39Cu) goto L_08A3D39C;
    return;
L_08A3D39C:
    ctx.gpr[31] = (0x08A3D3A4u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 7u, 0x08A9802Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3D3A4u) goto L_08A3D3A4;
    return;
L_08A3D3A4:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A3D3B0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08A3D3B0u) goto L_08A3D3B0;
    return;
L_08A3D3B0:
    ctx.gpr[31] = (0x08A3D3B8u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 1077u, 0x08A97EB4u>(ctx, &aot_mem) && ctx.pc == 0x08A3D3B8u) goto L_08A3D3B8;
    return;
L_08A3D3B8:
    ctx.gpr[4] = (ctx.gpr[20] - ctx.gpr[2]);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.fpr[20] = ctx.fpr[20] / ctx.fpr[30];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[26]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]) ^ 0x80000000u);
        goto L_08A3D3DC;
    }
    goto L_08A3D3DC;
L_08A3D3DC:
    ctx.gpr[4] = (15395u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A3D4A8;
      }
      goto L_08A3D3F8;
    }
L_08A3D3F8:
    ctx.gpr[31] = (0x08A3D400u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08A3D400u) goto L_08A3D400;
    return;
L_08A3D400:
    ctx.gpr[31] = (0x08A3D408u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 7u, 0x08A9802Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3D408u) goto L_08A3D408;
    return;
L_08A3D408:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[4] = (17174u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A3D49C;
      }
      goto L_08A3D428;
    }
L_08A3D428:
    ctx.gpr[31] = (0x08A3D430u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08A3D430u) goto L_08A3D430;
    return;
L_08A3D430:
    ctx.gpr[31] = (0x08A3D438u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 1077u, 0x08A97EB4u>(ctx, &aot_mem) && ctx.pc == 0x08A3D438u) goto L_08A3D438;
    return;
L_08A3D438:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A3D49C;
      }
      goto L_08A3D450;
    }
L_08A3D450:
    ctx.gpr[31] = (0x08A3D458u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08A3D458u) goto L_08A3D458;
    return;
L_08A3D458:
    ctx.gpr[31] = (0x08A3D460u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 7u, 0x08A9802Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3D460u) goto L_08A3D460;
    return;
L_08A3D460:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[30];
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A3D478u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(588), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08A3D478u) goto L_08A3D478;
    return;
L_08A3D478:
    ctx.gpr[31] = (0x08A3D480u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 1077u, 0x08A97EB4u>(ctx, &aot_mem) && ctx.pc == 0x08A3D480u) goto L_08A3D480;
    return;
L_08A3D480:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[30];
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(1340), static_cast<std::uint16_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(592), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A3D508;
      }
      goto L_08A3D49C;
    }
L_08A3D49C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(588), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(592), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
      if (branch_taken) {
          goto L_08A3D508;
      }
      goto L_08A3D4A8;
    }
L_08A3D4A8:
    ctx.set_fpu_condition((ctx.fpr[28] < ctx.fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A3D4E4;
      }
      goto L_08A3D4B8;
    }
L_08A3D4B8:
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A3D4D4;
      }
      goto L_08A3D4C8;
    }
L_08A3D4C8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(588), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(592), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
      if (branch_taken) {
          goto L_08A3D508;
      }
      goto L_08A3D4D4;
    }
L_08A3D4D4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(588), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]) ^ 0x80000000u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(592), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A3D508;
      }
      goto L_08A3D4E4;
    }
L_08A3D4E4:
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A3D500;
      }
      goto L_08A3D4F4;
    }
L_08A3D4F4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(588), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(592), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
      if (branch_taken) {
          goto L_08A3D508;
      }
      goto L_08A3D500;
    }
L_08A3D500:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(588), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(592), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    goto L_08A3D508;
L_08A3D508:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(832)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[26]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(832)));
        goto L_08A3D52C;
    }
    goto L_08A3D51C;
L_08A3D51C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(832)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(-29356), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A3D538;
      }
      goto L_08A3D52C;
    }
L_08A3D52C:
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(-29356), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A3D538;
L_08A3D538:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(336)));
    ctx.gpr[5] = (16457u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(168)));
    ctx.gpr[4] = (ctx.gpr[5] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17204u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-29356)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(598))))));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(584), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A3D608;
      }
      goto L_08A3D574;
    }
L_08A3D574:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[5] = (ctx.gpr[5] >> 10u);
    ctx.gpr[5] = (ctx.gpr[5] & 15u);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(12) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3D59C;
      }
      goto L_08A3D590;
    }
L_08A3D590:
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(588), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A3D59C;
L_08A3D59C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[5] = (ctx.gpr[5] >> 10u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(6));
    ctx.gpr[5] = (ctx.gpr[5] & 15u);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(12) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3D5BC;
      }
      goto L_08A3D5B8;
    }
L_08A3D5B8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(592), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    goto L_08A3D5BC;
L_08A3D5BC:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[19]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(597), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] & 2048u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (15605u << 16u);
      if (branch_taken) {
          goto L_08A3D5F4;
      }
      goto L_08A3D5D8;
    }
L_08A3D5D8:
    ctx.gpr[4] = (15779u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(584)));
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(584), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A3D608;
      }
      goto L_08A3D5F4;
    }
L_08A3D5F4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(584)));
    ctx.gpr[4] = (ctx.gpr[4] | 49807u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(584), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A3D608;
L_08A3D608:
    ctx.gpr[31] = (0x08A3D610u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08A3D610u) goto L_08A3D610;
    return;
L_08A3D610:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(134)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3D63C;
      }
      goto L_08A3D61C;
    }
L_08A3D61C:
    ctx.gpr[31] = (0x08A3D624u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08A3D624u) goto L_08A3D624;
    return;
L_08A3D624:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(136)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3D63C;
      }
      goto L_08A3D630;
    }
L_08A3D630:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(840)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3D6F0;
      }
      goto L_08A3D63C;
    }
L_08A3D63C:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27772)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (2227u << 16u);
      if (branch_taken) {
          goto L_08A3D664;
      }
      goto L_08A3D64C;
    }
L_08A3D64C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(16662)));
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(597))))));
        goto L_08A3D668;
    }
    goto L_08A3D658;
L_08A3D658:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(840)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3D6F0;
      }
      goto L_08A3D664;
    }
L_08A3D664:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(597))))));
    goto L_08A3D668;
L_08A3D668:
    ctx.gpr[6] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(592), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] | 32u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(597), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(588), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[5] = (16015u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27772)));
    ctx.gpr[5] = (ctx.gpr[5] | 23593u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A3D6A8;
      }
      goto L_08A3D698;
    }
L_08A3D698:
    ctx.gpr[31] = (0x08A3D6A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08A3D6A0u) goto L_08A3D6A0;
    return;
L_08A3D6A0:
    ctx.gpr[31] = (0x08A3D6A8u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 104u, 0x0894C834u>(ctx, &aot_mem) && ctx.pc == 0x08A3D6A8u) goto L_08A3D6A8;
    return;
L_08A3D6A8:
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A3D6F0;
      }
      goto L_08A3D6CC;
    }
L_08A3D6CC:
    ctx.fpr[12] = ctx.fpr[26] / ctx.fpr[12];
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    goto L_08A3D6F0;
L_08A3D6F0:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3D72C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-2464));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2396), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2400), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2404), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2408), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2412), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2416), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2420), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2424), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2428), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2432), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2436), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2440), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2444), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2448), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2452), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2456), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A3D778u);
    ctx.gpr[22] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 509u, 0x0889E8ACu>(ctx, &aot_mem) && ctx.pc == 0x08A3D778u) goto L_08A3D778;
    return;
L_08A3D778:
    ctx.gpr[6] = (16128u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (16000u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(1456)));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[22] + static_cast<std::uint32_t>(112));
    ctx.gpr[6] = (16256u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2376), ctx.gpr[5]);
    ctx.fpr[22] = std::bit_cast<float>(0u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[19] = (ctx.gpr[22] + static_cast<std::uint32_t>(16));
    ctx.gpr[20] = (0u | 1u);
    ctx.gpr[18] = (0u | 2u);
    ctx.gpr[5] = (2229u << 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (2230u << 16u);
      if (branch_taken) {
          goto L_08A3DA3C;
      }
      goto L_08A3D7B8;
    }
L_08A3D7B8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(1150)));
    ctx.gpr[6] = (0u | 19u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A3DA3C;
      }
      goto L_08A3D7C8;
    }
L_08A3D7C8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(1196)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A3DB0C;
      }
      goto L_08A3D7DC;
    }
L_08A3D7DC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(1308)));
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
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[22] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (16204u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(1120)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(352), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(1124)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(356), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(1128)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(360), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(352));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(1176)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-10520)));
    ctx.set_fpu_condition((ctx.fpr[16] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A3D8B8;
      }
      goto L_08A3D868;
    }
L_08A3D868:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(1088)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(400), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(1092)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(404), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(1096)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(408), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(400));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(384));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[5]);
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(368));
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
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    goto L_08A3D8B8;
L_08A3D8B8:
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(304));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A3D8DCu);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 565u, 0x089274ACu>(ctx, &aot_mem) && ctx.pc == 0x08A3D8DCu) goto L_08A3D8DC;
    return;
L_08A3D8DC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(320), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(324), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(328), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(320));
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(336), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(340), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(344), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(336));
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-10432)));
    ctx.gpr[4] = (0u | 66u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x08A3D934u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 78u, 0x08998634u>(ctx, &aot_mem) && ctx.pc == 0x08A3D934u) goto L_08A3D934;
    return;
L_08A3D934:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(1208)));
    ctx.gpr[7] = (ctx.gpr[22] + static_cast<std::uint32_t>(1213));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08A3D950u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0184_entry, 184u, 293u, 0x08AE58CCu>(ctx, &aot_mem) && ctx.pc == 0x08A3D950u) goto L_08A3D950;
    return;
L_08A3D950:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(1456)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_08A3DA34;
      }
      goto L_08A3D95C;
    }
L_08A3D95C:
    ctx.gpr[31] = (0x08A3D964u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(1150)));
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 202u, 0x089257B0u>(ctx, &aot_mem) && ctx.pc == 0x08A3D964u) goto L_08A3D964;
    return;
L_08A3D964:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_08A3D97C;
      }
      goto L_08A3D96C;
    }
L_08A3D96C:
    ctx.gpr[31] = (0x08A3D974u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(1150)));
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 202u, 0x089257B0u>(ctx, &aot_mem) && ctx.pc == 0x08A3D974u) goto L_08A3D974;
    return;
L_08A3D974:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08A3DA34;
      }
      goto L_08A3D97C;
    }
L_08A3D97C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(432), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(436), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(440), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(432));
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(416));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(448), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(452), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(456), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(448));
    ctx.gpr[4] = (0u | 67u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x08A3D9D8u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 78u, 0x08998634u>(ctx, &aot_mem) && ctx.pc == 0x08A3D9D8u) goto L_08A3D9D8;
    return;
L_08A3D9D8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(432), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(436), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(440), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(416), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(420), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (15692u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(424), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (0u | 67u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x08A3DA34u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 78u, 0x08998634u>(ctx, &aot_mem) && ctx.pc == 0x08A3DA34u) goto L_08A3DA34;
    return;
L_08A3DA34:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3DB0C;
      }
      goto L_08A3DA3C;
    }
L_08A3DA3C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(1213)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3DA54;
      }
      goto L_08A3DA48;
    }
L_08A3DA48:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(1215)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3DB0C;
      }
      goto L_08A3DA54;
    }
L_08A3DA54:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(1308)));
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
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[22] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (16204u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(1120)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(480), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(1124)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(484), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(1128)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(488), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(496));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(480));
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(464));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(1208)));
    ctx.gpr[7] = (ctx.gpr[22] + static_cast<std::uint32_t>(1213));
    ctx.gpr[31] = (0x08A3DB0Cu);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0184_entry, 184u, 293u, 0x08AE58CCu>(ctx, &aot_mem) && ctx.pc == 0x08A3DB0Cu) goto L_08A3DB0C;
    return;
L_08A3DB0C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(-7768)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A3DBE0;
      }
      goto L_08A3DB1C;
    }
L_08A3DB1C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(-7768)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 20 ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(-7768)));
        goto L_08A3DB4C;
    }
    goto L_08A3DB2C;
L_08A3DB2C:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[22] + static_cast<std::uint32_t>(86)));
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(-7767)));
    ctx.gpr[5] = (ctx.gpr[5] & 63u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
        goto L_08A3DBE4;
    }
    goto L_08A3DB48;
L_08A3DB48:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(-7768)));
    goto L_08A3DB4C;
L_08A3DB4C:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 7 ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
        goto L_08A3DBE4;
    }
    goto L_08A3DB58;
L_08A3DB58:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(-7768)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 8 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[22] + static_cast<std::uint32_t>(86)));
        goto L_08A3DB88;
    }
    goto L_08A3DB68;
L_08A3DB68:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[22] + static_cast<std::uint32_t>(86)));
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(-7767)));
    ctx.gpr[5] = (ctx.gpr[5] & 63u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
        goto L_08A3DBE4;
    }
    goto L_08A3DB84;
L_08A3DB84:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[22] + static_cast<std::uint32_t>(86)));
    goto L_08A3DB88;
L_08A3DB88:
    ctx.gpr[6] = (18243u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[5] = (ctx.gpr[6] | 20480u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[5] = (2230u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7804)));
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
        goto L_08A3DBE4;
    }
    goto L_08A3DBB8;
L_08A3DBB8:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[22] + static_cast<std::uint32_t>(86)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.fpr[12] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[5] = (2230u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7816)));
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A3DBE4;
      }
      goto L_08A3DBE0;
    }
L_08A3DBE0:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    goto L_08A3DBE4;
L_08A3DBE4:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (ctx.gpr[5] & 64u);
    ctx.gpr[5] = (ctx.gpr[5] >> 6u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A3DCC4;
      }
      goto L_08A3DBFC;
    }
L_08A3DBFC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(68)));
    ctx.gpr[6] = (0u | 80u);
    ctx.gpr[5] = (ctx.gpr[5] & 496u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A3DCC4;
      }
      goto L_08A3DC10;
    }
L_08A3DC10:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(68)));
    ctx.gpr[6] = (0u | 64u);
    ctx.gpr[5] = (ctx.gpr[5] & 496u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A3DC44;
      }
      goto L_08A3DC24;
    }
L_08A3DC24:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-65));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(597), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A3DCC4;
      }
      goto L_08A3DC44;
    }
L_08A3DC44:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[4] = (ctx.gpr[4] & 64u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_08A3DCC4;
      }
      goto L_08A3DC54;
    }
L_08A3DC54:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.gpr[5] = (ctx.gpr[22] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[22]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
        goto L_08A3DC7C;
    }
    goto L_08A3DC7C;
L_08A3DC7C:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[22]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) ^ 0x80000000u);
        goto L_08A3DC98;
    }
    goto L_08A3DC98;
L_08A3DC98:
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A3DCC4;
      }
      goto L_08A3DCB4;
    }
L_08A3DCB4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-65));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(597), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A3DCC4;
L_08A3DCC4:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[22] + static_cast<std::uint32_t>(500)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[4] = (0u | 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08A3DD00;
      }
      goto L_08A3DCD8;
    }
L_08A3DCD8:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[22] + static_cast<std::uint32_t>(500)));
    ctx.gpr[8] = (0u | 65535u);
    if (ctx.gpr[7] == ctx.gpr[8]) {
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
        goto L_08A3DD04;
    }
    goto L_08A3DCE8;
L_08A3DCE8:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(68)));
    ctx.gpr[8] = (0u | 80u);
    ctx.gpr[7] = (ctx.gpr[7] & 496u);
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[8];
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_08A3DD04;
      }
      goto L_08A3DCFC;
    }
L_08A3DCFC:
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    goto L_08A3DD00;
L_08A3DD00:
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    goto L_08A3DD04;
L_08A3DD04:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3DD2C;
      }
      goto L_08A3DD0C;
    }
L_08A3DD0C:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[5] = (ctx.gpr[5] & 256u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3DD28;
      }
      goto L_08A3DD20;
    }
L_08A3DD20:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_08A3DD2C;
      }
      goto L_08A3DD28;
    }
L_08A3DD28:
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    goto L_08A3DD2C;
L_08A3DD2C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[5] = (ctx.gpr[5] & 16u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3DD58;
      }
      goto L_08A3DD3C;
    }
L_08A3DD3C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[5] = (ctx.gpr[5] & 64u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3DD58;
      }
      goto L_08A3DD4C;
    }
L_08A3DD4C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(608)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2384), ctx.gpr[19]);
      if (branch_taken) {
          goto L_08A3DD68;
      }
      goto L_08A3DD58;
    }
L_08A3DD58:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2384), ctx.gpr[19]);
      if (branch_taken) {
          goto L_08A3DD68;
      }
      goto L_08A3DD60;
    }
L_08A3DD60:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2384), ctx.gpr[19]);
      if (branch_taken) {
          goto L_08A3E81C;
      }
      goto L_08A3DD68;
    }
L_08A3DD68:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(2380), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[31] = (0x08A3DD74u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 491u, 0x08A36E90u>(ctx, &aot_mem) && ctx.pc == 0x08A3DD74u) goto L_08A3DD74;
    return;
L_08A3DD74:
    ctx.gpr[30] = (ctx.gpr[22] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[19] = (2232u << 16u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(13216));
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(48));
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
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(528));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(608));
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
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(656));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2372), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(688));
    ctx.gpr[21] = (ctx.gpr[22] + static_cast<std::uint32_t>(896));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(624));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[22])) && ctx.fpr[12] == ctx.fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(640));
      if (branch_taken) {
          goto L_08A3DDFC;
      }
      goto L_08A3DDDC;
    }
L_08A3DDDC:
    ctx.fpr[12] = ctx.fpr[24] / ctx.fpr[12];
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<1u>(ctx.gpr[5]);
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
          goto L_08A3DE14;
      }
      goto L_08A3DDFC;
    }
L_08A3DDFC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(768), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(772), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(776), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(768));
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
    goto L_08A3DE14;
L_08A3DE14:
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2384)));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]) & 0x7FFFFFFFu);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[4]);
    { const float vfpu_constant = std::bit_cast<float>(0x3FC90FDBu);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] < -1.0f ? -1.0f : (vfpu_s[i] > 1.0f ? 1.0f : vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::asin(vfpu_s[i]) * 0.63661977236758134308f;
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<64u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<64u>());
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[28] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]) & 0x7FFFFFFFu);
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[22] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7872)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_08A3DE84;
      }
      goto L_08A3DE70;
    }
L_08A3DE70:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08A3DE84;
L_08A3DE84:
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(80));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-2));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(752), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(756)));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(756), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[22] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u | 152u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A3DF18;
      }
      goto L_08A3DEB4;
    }
L_08A3DEB4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2388), ctx.gpr[19]);
    ctx.gpr[31] = (0x08A3DEC0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 509u, 0x08A0654Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3DEC0u) goto L_08A3DEC0;
    return;
L_08A3DEC0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(1304)));
    ctx.gpr[31] = (0x08A3DECCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 495u, 0x08A062F0u>(ctx, &aot_mem) && ctx.pc == 0x08A3DECCu) goto L_08A3DECC;
    return;
L_08A3DECC:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(784));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08A3DEE0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 504u, 0x08A0649Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3DEE0u) goto L_08A3DEE0;
    return;
L_08A3DEE0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A3DEECu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 519u, 0x08A0695Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3DEECu) goto L_08A3DEEC;
    return;
L_08A3DEEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(852)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2388)));
      if (branch_taken) {
          goto L_08A3DF10;
      }
      goto L_08A3DEFC;
    }
L_08A3DEFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(848)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3DF10;
      }
      goto L_08A3DF08;
    }
L_08A3DF08:
    ctx.gpr[31] = (0x08A3DF10u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(848)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x08A3DF10u) goto L_08A3DF10;
    return;
L_08A3DF10:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3DF24;
      }
      goto L_08A3DF18;
    }
L_08A3DF18:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A3DF24u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 519u, 0x08A0695Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3DF24u) goto L_08A3DF24;
    return;
L_08A3DF24:
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(48);
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
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.set_fpu_condition((ctx.fpr[30] < ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (16128u << 16u);
      if (branch_taken) {
          goto L_08A3E1D4;
      }
      goto L_08A3DF5C;
    }
L_08A3DF5C:
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]) ^ 0x80000000u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (49016u << 16u);
    ctx.gpr[4] = (16025u << 16u);
    { const float fs = ctx.fpr[26]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] | 20972u);
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[4] = (16320u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[26] = ctx.fpr[26] + ctx.fpr[14];
    ctx.fpr[24] = ctx.fpr[24] + ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[30] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A3E074;
      }
      goto L_08A3DFA8;
    }
L_08A3DFA8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2372)));
    ctx.gpr[4] = (16880u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A3E074;
      }
      goto L_08A3DFC4;
    }
L_08A3DFC4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(336)));
    ctx.gpr[6] = (16281u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 39322u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(208)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (16948u << 16u);
    ctx.gpr[4] = (ctx.gpr[22] + static_cast<std::uint32_t>(6));
    ctx.gpr[5] = (ctx.gpr[5] & 32768u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
      if (branch_taken) {
          goto L_08A3E034;
      }
      goto L_08A3DFEC;
    }
L_08A3DFEC:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(224)));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[5] = (0u | 150u);
    ctx.gpr[6] = (0u | 150u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[7] = (0u | 195u);
    ctx.gpr[8] = (0u | 255u);
    ctx.gpr[9] = (ctx.gpr[18] | 0u);
    ctx.gpr[10] = (0u | 4u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x08A3E02Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 325u, 0x089FA098u>(ctx, &aot_mem) && ctx.pc == 0x08A3E02Cu) goto L_08A3E02C;
    return;
L_08A3E02C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3E074;
      }
      goto L_08A3E034;
    }
L_08A3E034:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(224)));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[5] = (0u | 160u);
    ctx.gpr[6] = (0u | 160u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[7] = (0u | 140u);
    ctx.gpr[8] = (0u | 255u);
    ctx.gpr[9] = (ctx.gpr[18] | 0u);
    ctx.gpr[10] = (0u | 4u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x08A3E074u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 325u, 0x089FA098u>(ctx, &aot_mem) && ctx.pc == 0x08A3E074u) goto L_08A3E074;
    return;
L_08A3E074:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(2380)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3E188;
      }
      goto L_08A3E080;
    }
L_08A3E080:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(336)));
    ctx.gpr[5] = (16968u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(208)));
    ctx.gpr[4] = (ctx.gpr[4] & 32768u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A3E110;
      }
      goto L_08A3E098;
    }
L_08A3E098:
    ctx.gpr[4] = (17214u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (17279u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(224)));
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[8] = (0u | 255u);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[9] = (ctx.gpr[18] | 0u);
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[10] = (0u | 8u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[11] = (0u | 0u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08A3E108u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 325u, 0x089FA098u>(ctx, &aot_mem) && ctx.pc == 0x08A3E108u) goto L_08A3E108;
    return;
L_08A3E108:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(127)));
      if (branch_taken) {
          goto L_08A3E1F8;
      }
      goto L_08A3E110;
    }
L_08A3E110:
    ctx.gpr[4] = (17234u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (17219u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(224)));
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[8] = (0u | 255u);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[9] = (ctx.gpr[18] | 0u);
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[10] = (0u | 8u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[11] = (0u | 0u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08A3E180u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 325u, 0x089FA098u>(ctx, &aot_mem) && ctx.pc == 0x08A3E180u) goto L_08A3E180;
    return;
L_08A3E180:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(127)));
      if (branch_taken) {
          goto L_08A3E1F8;
      }
      goto L_08A3E188;
    }
L_08A3E188:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (ctx.gpr[18] | 0u);
    ctx.gpr[10] = (0u | 8u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x08A3E1CCu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 325u, 0x089FA098u>(ctx, &aot_mem) && ctx.pc == 0x08A3E1CCu) goto L_08A3E1CC;
    return;
L_08A3E1CC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(127)));
      if (branch_taken) {
          goto L_08A3E1F8;
      }
      goto L_08A3E1D4;
    }
L_08A3E1D4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(224)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08A3E1F4u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 327u, 0x089FA10Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3E1F4u) goto L_08A3E1F4;
    return;
L_08A3E1F4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(127)));
    goto L_08A3E1F8;
L_08A3E1F8:
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[6] = (16256u << 16u);
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[6]);
      if (branch_taken) {
          goto L_08A3E238;
      }
      goto L_08A3E228;
    }
L_08A3E228:
    ctx.gpr[31] = (0x08A3E230u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x08A3E230u) goto L_08A3E230;
    return;
L_08A3E230:
    { const bool branch_taken = ctx.gpr[22] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A3E290;
      }
      goto L_08A3E238;
    }
L_08A3E238:
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(864));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(720));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(880));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(896));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(704));
    { const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(912));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(336)));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(220)));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(4));
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x08A3E290u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0008_entry, 8u, 184u, 0x088250B4u>(ctx, &aot_mem) && ctx.pc == 0x08A3E290u) goto L_08A3E290;
    return;
L_08A3E290:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[22] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7872)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A3E2BC;
      }
      goto L_08A3E2A8;
    }
L_08A3E2A8:
    ctx.gpr[4] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08A3E2BC;
L_08A3E2BC:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(96));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(672));
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
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(48);
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
      const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.set_fpu_condition((ctx.fpr[30] <= ctx.fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (16076u << 16u);
      if (branch_taken) {
          goto L_08A3E430;
      }
      goto L_08A3E304;
    }
L_08A3E304:
    ctx.fpr[14] = ctx.fpr[30] + ctx.fpr[20];
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(588)));
    { const float fs = ctx.fpr[30]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (16128u << 16u);
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[22]));
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    { const bool branch_taken = !ctx.fpu_condition();
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[30]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[30] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[30] = fs * ft; }
      if (branch_taken) {
          goto L_08A3E338;
      }
      goto L_08A3E330;
    }
L_08A3E330:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3E448;
      }
      goto L_08A3E338;
    }
L_08A3E338:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(592)));
    ctx.gpr[6] = (16320u << 16u);
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[22]));
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[22] + static_cast<std::uint32_t>(14));
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
      if (branch_taken) {
          goto L_08A3E368;
      }
      goto L_08A3E354;
    }
L_08A3E354:
    ctx.gpr[6] = (16025u << 16u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[6] = (ctx.gpr[6] | 39322u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[30] = ctx.fpr[30] + ctx.fpr[15];
    goto L_08A3E368;
L_08A3E368:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(2380)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A3E3E0;
      }
      goto L_08A3E374;
    }
L_08A3E374:
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (17152u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(224)));
    ctx.fpr[16] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[8] = (0u | 255u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[9] = (ctx.gpr[23] | 0u);
    ctx.gpr[10] = (0u | 8u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x08A3E3D8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 325u, 0x089FA098u>(ctx, &aot_mem) && ctx.pc == 0x08A3E3D8u) goto L_08A3E3D8;
    return;
L_08A3E3D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3E448;
      }
      goto L_08A3E3E0;
    }
L_08A3E3E0:
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (ctx.gpr[23] | 0u);
    ctx.gpr[10] = (0u | 8u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x08A3E428u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 325u, 0x089FA098u>(ctx, &aot_mem) && ctx.pc == 0x08A3E428u) goto L_08A3E428;
    return;
L_08A3E428:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3E448;
      }
      goto L_08A3E430;
    }
L_08A3E430:
    ctx.gpr[6] = (16968u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[4] = (ctx.gpr[22] + static_cast<std::uint32_t>(14));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x08A3E448u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 327u, 0x089FA10Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3E448u) goto L_08A3E448;
    return;
L_08A3E448:
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[22] + static_cast<std::uint32_t>(928));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(544));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(560));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[22] + static_cast<std::uint32_t>(912));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(576));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(336)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(221)));
    ctx.gpr[8] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x08A3E4A0u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0008_entry, 8u, 184u, 0x088250B4u>(ctx, &aot_mem) && ctx.pc == 0x08A3E4A0u) goto L_08A3E4A0;
    return;
L_08A3E4A0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(2380)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2384)));
      if (branch_taken) {
          goto L_08A3E620;
      }
      goto L_08A3E4AC;
    }
L_08A3E4AC:
    { const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(592));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(704));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[15];
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[14]) || std::isnan(ctx.fpr[22])) && ctx.fpr[14] == ctx.fpr[22]));
    // nop
    if (ctx.fpu_condition()) {
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
        goto L_08A3E500;
    }
    goto L_08A3E4E0;
L_08A3E4E0:
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[4]);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / std::sqrt(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<0u>());
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    goto L_08A3E500;
L_08A3E500:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(660)));
    ctx.gpr[4] = (16576u << 16u);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[26] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[26] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(592)));
    ctx.fpr[12] = ctx.fpr[15] + ctx.fpr[16];
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(596)));
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(600)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    ctx.gpr[4] = (16528u << 16u);
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[28];
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[2] = (16608u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[15] = ctx.fpr[17] + ctx.fpr[18];
    ctx.gpr[5] = (ctx.gpr[22] + static_cast<std::uint32_t>(22));
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    ctx.gpr[8] = (0u | 145u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(592), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[9] = (0u | 145u);
    ctx.gpr[10] = (0u | 145u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(596), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (49152u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(600), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[26]; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(27928)));
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[30]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    { const float fs = ctx.fpr[26]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[31] = (0x08A3E5A0u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 152u, 0x089293E4u>(ctx, &aot_mem) && ctx.pc == 0x08A3E5A0u) goto L_08A3E5A0;
    return;
L_08A3E5A0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(660)));
    ctx.gpr[4] = (16640u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(676)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(592)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(596)));
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (16512u << 16u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    ctx.gpr[5] = (ctx.gpr[22] + static_cast<std::uint32_t>(25));
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    ctx.gpr[4] = (2227u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27924)));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[8] = (0u | 34u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[9] = (0u | 0u);
    ctx.fpr[13] = ctx.fpr[15] - ctx.fpr[13];
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    ctx.fpr[14] = ctx.fpr[17] - ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(592), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(596), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x08A3E620u);
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 152u, 0x089293E4u>(ctx, &aot_mem) && ctx.pc == 0x08A3E620u) goto L_08A3E620;
    return;
L_08A3E620:
    ctx.gpr[31] = (0x08A3E628u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x08A3E628u) goto L_08A3E628;
    return;
L_08A3E628:
    { const bool branch_taken = ctx.gpr[22] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A3E7F0;
      }
      goto L_08A3E630;
    }
L_08A3E630:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(2380)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3E7F0;
      }
      goto L_08A3E63C;
    }
L_08A3E63C:
    ctx.gpr[31] = (0x08A3E644u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x08A3E644u) goto L_08A3E644;
    return;
L_08A3E644:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(112));
    ctx.gpr[31] = (0x08A3E650u);
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x08A3E650u) goto L_08A3E650;
    return;
L_08A3E650:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(112));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08A3E660u);
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x08A3E660u) goto L_08A3E660;
    return;
L_08A3E660:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(112));
    ctx.gpr[31] = (0x08A3E66Cu);
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x08A3E66Cu) goto L_08A3E66C;
    return;
L_08A3E66C:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(112));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (15951u << 16u);
    { const float fs = ctx.fpr[26]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[4] | 23592u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(960));
    ctx.gpr[4] = (16800u << 16u);
    ctx.fpr[13] = ctx.fpr[24] + ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A3E6DC;
      }
      goto L_08A3E6A0;
    }
L_08A3E6A0:
    { const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(976));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
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
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(992));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (0u | 1u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[31] = (0x08A3E6D4u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0184_entry, 184u, 333u, 0x08AE5D44u>(ctx, &aot_mem) && ctx.pc == 0x08A3E6D4u) goto L_08A3E6D4;
    return;
L_08A3E6D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3E710;
      }
      goto L_08A3E6DC;
    }
L_08A3E6DC:
    { const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(1008));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
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
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(1024));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (0u | 1u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08A3E710u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0184_entry, 184u, 333u, 0x08AE5D44u>(ctx, &aot_mem) && ctx.pc == 0x08A3E710u) goto L_08A3E710;
    return;
L_08A3E710:
    ctx.gpr[4] = (16512u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(944));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(928));
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
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(592)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A3E7A8;
      }
      goto L_08A3E760;
    }
L_08A3E760:
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(1040));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1056), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1060), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1064), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(1056));
    ctx.gpr[4] = (16672u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (0u | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08A3E7A0u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0184_entry, 184u, 333u, 0x08AE5D44u>(ctx, &aot_mem) && ctx.pc == 0x08A3E7A0u) goto L_08A3E7A0;
    return;
L_08A3E7A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3E7F0;
      }
      goto L_08A3E7A8;
    }
L_08A3E7A8:
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(1072));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1088), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1092), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1096), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(1088));
    ctx.gpr[4] = (16608u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16153u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (0u | 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08A3E7F0u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0184_entry, 184u, 333u, 0x08AE5D44u>(ctx, &aot_mem) && ctx.pc == 0x08A3E7F0u) goto L_08A3E7F0;
    return;
L_08A3E7F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(756)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3E814;
      }
      goto L_08A3E800;
    }
L_08A3E800:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(752)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3E814;
      }
      goto L_08A3E80C;
    }
L_08A3E80C:
    ctx.gpr[31] = (0x08A3E814u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(752)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x08A3E814u) goto L_08A3E814;
    return;
L_08A3E814:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3EA80;
      }
      goto L_08A3E81C;
    }
L_08A3E81C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u | 64u);
    ctx.gpr[4] = (ctx.gpr[4] & 496u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A3EA80;
      }
      goto L_08A3E830;
    }
L_08A3E830:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u | 80u);
    ctx.gpr[4] = (ctx.gpr[4] & 496u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A3EA80;
      }
      goto L_08A3E844;
    }
L_08A3E844:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(608)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3EA80;
      }
      goto L_08A3E850;
    }
L_08A3E850:
    ctx.gpr[31] = (0x08A3E858u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 491u, 0x08A36E90u>(ctx, &aot_mem) && ctx.pc == 0x08A3E858u) goto L_08A3E858;
    return;
L_08A3E858:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[22] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7872)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[17] = (ctx.gpr[22] + static_cast<std::uint32_t>(896));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(1120));
      if (branch_taken) {
          goto L_08A3E894;
      }
      goto L_08A3E880;
    }
L_08A3E880:
    ctx.gpr[5] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    goto L_08A3E894;
L_08A3E894:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(96));
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
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(48);
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
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(1104));
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
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(592)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A3E8F4;
      }
      goto L_08A3E8E0;
    }
L_08A3E8E0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(588)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A3EA60;
      }
      goto L_08A3E8F4;
    }
L_08A3E8F4:
    ctx.gpr[5] = (ctx.gpr[22] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
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
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(1136));
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
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(1152));
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
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A3EA38;
      }
      goto L_08A3E960;
    }
L_08A3E960:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(588)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A3EA58;
      }
      goto L_08A3E974;
    }
L_08A3E974:
    ctx.gpr[5] = (ctx.gpr[22] + static_cast<std::uint32_t>(14));
    ctx.gpr[6] = (16281u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(224)));
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[4] = (16320u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (0u | 120u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 255u);
    ctx.gpr[9] = (ctx.gpr[16] | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x08A3E9D8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 325u, 0x089FA098u>(ctx, &aot_mem) && ctx.pc == 0x08A3E9D8u) goto L_08A3E9D8;
    return;
L_08A3E9D8:
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1168));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (ctx.gpr[22] + static_cast<std::uint32_t>(928));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(1184));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(1200));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[7] = (ctx.gpr[22] + static_cast<std::uint32_t>(912));
    { const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(1216));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(336)));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(221)));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(8));
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x08A3EA30u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0008_entry, 8u, 184u, 0x088250B4u>(ctx, &aot_mem) && ctx.pc == 0x08A3EA30u) goto L_08A3EA30;
    return;
L_08A3EA30:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3EA58;
      }
      goto L_08A3EA38;
    }
L_08A3EA38:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(224)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (16968u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[22] + static_cast<std::uint32_t>(14));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[31] = (0x08A3EA58u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 327u, 0x089FA10Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3EA58u) goto L_08A3EA58;
    return;
L_08A3EA58:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3EA80;
      }
      goto L_08A3EA60;
    }
L_08A3EA60:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(224)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (16968u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[22] + static_cast<std::uint32_t>(14));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[31] = (0x08A3EA80u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 327u, 0x089FA10Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3EA80u) goto L_08A3EA80;
    return;
L_08A3EA80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2376)));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-10528)));
    ctx.fpr[20] = ctx.fpr[20] / ctx.fpr[12];
    ctx.gpr[17] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[22]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]) ^ 0x80000000u);
        goto L_08A3EABC;
    }
    goto L_08A3EABC;
L_08A3EABC:
    ctx.gpr[4] = (17076u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2384), ctx.gpr[19]);
      if (branch_taken) {
          goto L_08A3EADC;
      }
      goto L_08A3EAD4;
    }
L_08A3EAD4:
    ctx.gpr[17] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2384), ctx.gpr[19]);
    goto L_08A3EADC;
L_08A3EADC:
    ctx.gpr[4] = (15395u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (15651u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2368), ctx.gpr[17]);
    ctx.gpr[4] = (15907u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (15948u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.gpr[20] = (0u | 0u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[7] = (0u | 33u);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(1296));
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(1344));
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(1360));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(1376));
    ctx.gpr[21] = (2232u << 16u);
    goto L_08A3EB30;
L_08A3EB30:
    ctx.gpr[8] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[8];
    ctx.gpr[9] = (0u | 2u);
      if (branch_taken) {
          goto L_08A3EB40;
      }
      goto L_08A3EB3C;
    }
L_08A3EB3C:
    ctx.gpr[20] = (ctx.gpr[9] | 0u);
    goto L_08A3EB40;
L_08A3EB40:
    ctx.gpr[4] = (ctx.gpr[22] + ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1016)));
    ctx.gpr[4] = (ctx.gpr[20] << 2u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[8];
    ctx.gpr[4] = (ctx.gpr[22] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A3EE00;
      }
      goto L_08A3EB54;
    }
L_08A3EB54:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1168)));
    ctx.gpr[5] = (2229u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-10520)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A3EE00;
      }
      goto L_08A3EB70;
    }
L_08A3EB70:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2376)));
    { const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[30]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(-29352), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A3EE00;
      }
      goto L_08A3EB94;
    }
L_08A3EB94:
    ctx.gpr[5] = (ctx.gpr[20] << 5u);
    ctx.gpr[16] = (ctx.gpr[22] + ctx.gpr[5]);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1024));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(30)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[9];
    // nop
      if (branch_taken) {
          goto L_08A3EE00;
      }
      goto L_08A3EBAC;
    }
L_08A3EBAC:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(30)));
    ctx.gpr[6] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A3EE00;
      }
      goto L_08A3EBBC;
    }
L_08A3EBBC:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(30)));
    ctx.gpr[6] = (0u | 18u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A3EE00;
      }
      goto L_08A3EBCC;
    }
L_08A3EBCC:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(30)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A3EE00;
      }
      goto L_08A3EBD8;
    }
L_08A3EBD8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1232), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1236), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1240), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1232));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1232), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1236), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1240), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1248));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1312), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1316), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1320), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1264), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1268), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1272), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16000u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(1280));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(1264));
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x08A3ECBCu);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 78u, 0x08998634u>(ctx, &aot_mem) && ctx.pc == 0x08A3ECBCu) goto L_08A3ECBC;
    return;
L_08A3ECBC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-29352)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[28]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A3ED2C;
      }
      goto L_08A3ECD0;
    }
L_08A3ECD0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1328), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1332), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1336), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16000u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(1328));
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[30] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x08A3ED2Cu);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 78u, 0x08998634u>(ctx, &aot_mem) && ctx.pc == 0x08A3ED2Cu) goto L_08A3ED2C;
    return;
L_08A3ED2C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-29352)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A3EDF8;
      }
      goto L_08A3ED40;
    }
L_08A3ED40:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2392), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1360), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1364), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1368), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16000u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x08A3EDA0u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 78u, 0x08998634u>(ctx, &aot_mem) && ctx.pc == 0x08A3EDA0u) goto L_08A3EDA0;
    return;
L_08A3EDA0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1360), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1364), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1368), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x08A3EDF4u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 78u, 0x08998634u>(ctx, &aot_mem) && ctx.pc == 0x08A3EDF4u) goto L_08A3EDF4;
    return;
L_08A3EDF4:
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2392)));
    goto L_08A3EDF8;
L_08A3EDF8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3EE9C;
      }
      goto L_08A3EE00;
    }
L_08A3EE00:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1168)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-10520)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A3EE9C;
      }
      goto L_08A3EE1C;
    }
L_08A3EE1C:
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[24]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (ctx.gpr[20] << 5u);
      if (branch_taken) {
          goto L_08A3EE48;
      }
      goto L_08A3EE2C;
    }
L_08A3EE2C:
    ctx.gpr[4] = (ctx.gpr[17] << 2u);
    ctx.gpr[4] = (ctx.gpr[22] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1452)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A3EE9C;
      }
      goto L_08A3EE44;
    }
L_08A3EE44:
    ctx.gpr[4] = (ctx.gpr[20] << 5u);
    goto L_08A3EE48;
L_08A3EE48:
    ctx.gpr[4] = (ctx.gpr[22] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1024));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(30)));
    ctx.gpr[6] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A3EE8C;
      }
      goto L_08A3EE60;
    }
L_08A3EE60:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(30)));
    ctx.gpr[6] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A3EE8C;
      }
      goto L_08A3EE70;
    }
L_08A3EE70:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(30)));
    ctx.gpr[6] = (0u | 18u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A3EE8C;
      }
      goto L_08A3EE80;
    }
L_08A3EE80:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(30)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A3EE9C;
      }
      goto L_08A3EE8C;
    }
L_08A3EE8C:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2368)));
    ctx.gpr[31] = (0x08A3EE9Cu);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 528u, 0x08A3733Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3EE9Cu) goto L_08A3EE9C;
    return;
L_08A3EE9C:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[4] << 24u);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 24u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[7] = (0u | 33u);
      if (branch_taken) {
          goto L_08A3EB30;
      }
      goto L_08A3EEB4;
    }
L_08A3EEB4:
    ctx.gpr[31] = (0x08A3EEBCu);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    goto L_08A3FA94;
L_08A3EEBC:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08A3EEC8u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 360u, 0x0892AE44u>(ctx, &aot_mem) && ctx.pc == 0x08A3EEC8u) goto L_08A3EEC8;
    return;
L_08A3EEC8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-2));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), 0u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[22] + static_cast<std::uint32_t>(88))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), ctx.gpr[5]);
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7872)));
    ctx.gpr[6] = (16128u << 16u);
    ctx.gpr[18] = (0u | 0u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
      if (branch_taken) {
          goto L_08A3EF18;
      }
      goto L_08A3EF04;
    }
L_08A3EF04:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08A3EF18;
L_08A3EF18:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(584)));
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
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<7u, 4u>(vfpu_value); }
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 36u, 3u);
      ctx.read_vfpu_vector_ct<7u, 3u>(vfpu_target_raw);
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
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2384)));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(288));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(1184)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2376)));
      if (branch_taken) {
          goto L_08A3EFC0;
      }
      goto L_08A3EFAC;
    }
L_08A3EFAC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(1188)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A3F0C4;
      }
      goto L_08A3EFC0;
    }
L_08A3EFC0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(64)));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[15] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(1168)));
    ctx.gpr[7] = (ctx.gpr[22] + static_cast<std::uint32_t>(128));
    ctx.gpr[6] = (ctx.gpr[22] + static_cast<std::uint32_t>(160));
    ctx.gpr[5] = (ctx.gpr[22] + static_cast<std::uint32_t>(144));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(1172)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(1248)));
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[17]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
      if (branch_taken) {
          goto L_08A3F010;
      }
      goto L_08A3F008;
    }
L_08A3F008:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(1168)));
      if (branch_taken) {
          goto L_08A3F014;
      }
      goto L_08A3F010;
    }
L_08A3F010:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(1172)));
    goto L_08A3F014;
L_08A3F014:
    ctx.gpr[9] = (ctx.gpr[4] | 0u);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(60)));
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[17];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(264), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(2144));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2160), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2164), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2168), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(2160));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    ctx.execute_vfpu_cross_quat(0u, 1u, 2u, 3u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(2128));
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
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(2112));
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1392));
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
      const std::uint32_t vfpu_address = ctx.gpr[9] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(60)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[8] | 0u);
    ctx.gpr[31] = (0x08A3F0B4u);
    ctx.gpr[7] = (ctx.gpr[9] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 805u, 0x0889FBC4u>(ctx, &aot_mem) && ctx.pc == 0x08A3F0B4u) goto L_08A3F0B4;
    return;
L_08A3F0B4:
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(1224), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(1216)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[0];
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(1216), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A3F0C4;
L_08A3F0C4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(1192)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[22]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(64)));
        goto L_08A3F0F0;
    }
    goto L_08A3F0D8;
L_08A3F0D8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(1196)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A3F1E8;
      }
      goto L_08A3F0EC;
    }
L_08A3F0EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(64)));
    goto L_08A3F0F0;
L_08A3F0F0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[13] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(1176)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(1180)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(1256)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[22] + static_cast<std::uint32_t>(128));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (ctx.gpr[22] + static_cast<std::uint32_t>(160));
    ctx.set_fpu_condition((ctx.fpr[16] < ctx.fpr[17]));
    ctx.gpr[6] = (ctx.gpr[22] + static_cast<std::uint32_t>(144));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_08A3F13C;
      }
      goto L_08A3F134;
    }
L_08A3F134:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(1176)));
      if (branch_taken) {
          goto L_08A3F140;
      }
      goto L_08A3F13C;
    }
L_08A3F13C:
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(1180)));
    goto L_08A3F140;
L_08A3F140:
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[15];
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(60)));
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[17];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(264), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(2272));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2288), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2292), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2296), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(2288));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    ctx.execute_vfpu_cross_quat(0u, 1u, 2u, 3u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(2256));
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
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(2240));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1408));
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
      const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(1456)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(60)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08A3F1D8u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 805u, 0x0889FBC4u>(ctx, &aot_mem) && ctx.pc == 0x08A3F1D8u) goto L_08A3F1D8;
    return;
L_08A3F1D8:
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(1228), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(1220)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[0];
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(1220), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A3F1E8;
L_08A3F1E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(856)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3F440;
      }
      goto L_08A3F1F4;
    }
L_08A3F1F4:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(856)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(1424));
      if (branch_taken) {
          goto L_08A3F220;
      }
      goto L_08A3F208;
    }
L_08A3F208:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08A3F224;
      }
      goto L_08A3F218;
    }
L_08A3F218:
    ctx.gpr[31] = (0x08A3F220u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x08A3F220u) goto L_08A3F220;
    return;
L_08A3F220:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    goto L_08A3F224;
L_08A3F224:
    ctx.gpr[17] = (0u + static_cast<std::uint32_t>(-2));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A3F240u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 508u, 0x08A0651Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3F240u) goto L_08A3F240;
    return;
L_08A3F240:
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1492)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1492), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1504));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1488), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A3F264u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 509u, 0x08A0654Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3F264u) goto L_08A3F264;
    return;
L_08A3F264:
    ctx.gpr[31] = (0x08A3F26Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 505u, 0x08A064E8u>(ctx, &aot_mem) && ctx.pc == 0x08A3F26Cu) goto L_08A3F26C;
    return;
L_08A3F26C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(164)));
    ctx.gpr[4] = (16457u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (17204u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
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
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1584), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1588), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1592), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(1584));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(1568));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(1304)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.gpr[31] = (0x08A3F30Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 174u, 0x0891CFF8u>(ctx, &aot_mem) && ctx.pc == 0x08A3F30Cu) goto L_08A3F30C;
    return;
L_08A3F30C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1488)));
    ctx.gpr[31] = (0x08A3F318u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 175u, 0x0891D024u>(ctx, &aot_mem) && ctx.pc == 0x08A3F318u) goto L_08A3F318;
    return;
L_08A3F318:
    ctx.gpr[31] = (0x08A3F320u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 508u, 0x08A0651Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3F320u) goto L_08A3F320;
    return;
L_08A3F320:
    ctx.gpr[31] = (0x08A3F328u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 509u, 0x08A0654Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3F328u) goto L_08A3F328;
    return;
L_08A3F328:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08A3F334u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 522u, 0x08A069A4u>(ctx, &aot_mem) && ctx.pc == 0x08A3F334u) goto L_08A3F334;
    return;
L_08A3F334:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    ctx.gpr[31] = (0x08A3F348u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 515u, 0x08A06668u>(ctx, &aot_mem) && ctx.pc == 0x08A3F348u) goto L_08A3F348;
    return;
L_08A3F348:
    ctx.gpr[31] = (0x08A3F350u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 505u, 0x08A064E8u>(ctx, &aot_mem) && ctx.pc == 0x08A3F350u) goto L_08A3F350;
    return;
L_08A3F350:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(876)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3F41C;
      }
      goto L_08A3F35C;
    }
L_08A3F35C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(876)));
      if (branch_taken) {
          goto L_08A3F380;
      }
      goto L_08A3F368;
    }
L_08A3F368:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08A3F384;
      }
      goto L_08A3F378;
    }
L_08A3F378:
    ctx.gpr[31] = (0x08A3F380u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x08A3F380u) goto L_08A3F380;
    return;
L_08A3F380:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    goto L_08A3F384;
L_08A3F384:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A3F3A0u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 508u, 0x08A0651Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3F3A0u) goto L_08A3F3A0;
    return;
L_08A3F3A0:
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 496u);
    ctx.gpr[5] = (0u | 64u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A3F3D0;
      }
      goto L_08A3F3BC;
    }
L_08A3F3BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u | 80u);
    ctx.gpr[4] = (ctx.gpr[4] & 496u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A3F400;
      }
      goto L_08A3F3D0;
    }
L_08A3F3D0:
    ctx.gpr[31] = (0x08A3F3D8u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 509u, 0x08A0654Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3F3D8u) goto L_08A3F3D8;
    return;
L_08A3F3D8:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08A3F3E4u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 522u, 0x08A069A4u>(ctx, &aot_mem) && ctx.pc == 0x08A3F3E4u) goto L_08A3F3E4;
    return;
L_08A3F3E4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    ctx.gpr[31] = (0x08A3F3F8u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 515u, 0x08A06668u>(ctx, &aot_mem) && ctx.pc == 0x08A3F3F8u) goto L_08A3F3F8;
    return;
L_08A3F3F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3F414;
      }
      goto L_08A3F400;
    }
L_08A3F400:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    ctx.gpr[31] = (0x08A3F414u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 512u, 0x08A065B8u>(ctx, &aot_mem) && ctx.pc == 0x08A3F414u) goto L_08A3F414;
    return;
L_08A3F414:
    ctx.gpr[31] = (0x08A3F41Cu);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 505u, 0x08A064E8u>(ctx, &aot_mem) && ctx.pc == 0x08A3F41Cu) goto L_08A3F41C;
    return;
L_08A3F41C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1492)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3F440;
      }
      goto L_08A3F42C;
    }
L_08A3F42C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1488)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3F440;
      }
      goto L_08A3F438;
    }
L_08A3F438:
    ctx.gpr[31] = (0x08A3F440u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1488)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x08A3F440u) goto L_08A3F440;
    return;
L_08A3F440:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(860)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3F4FC;
      }
      goto L_08A3F44C;
    }
L_08A3F44C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(1236)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(1244)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(1288)));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[4]);
    { const float vfpu_constant = std::bit_cast<float>(0x3FC90FDBu);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] < -1.0f ? -1.0f : (vfpu_s[i] > 1.0f ? 1.0f : vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::asin(vfpu_s[i]) * 0.63661977236758134308f;
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<64u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<0u>());
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]) ^ 0x80000000u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(860)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
      if (branch_taken) {
          goto L_08A3F4AC;
      }
      goto L_08A3F494;
    }
L_08A3F494:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08A3F4B0;
      }
      goto L_08A3F4A4;
    }
L_08A3F4A4:
    ctx.gpr[31] = (0x08A3F4ACu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x08A3F4ACu) goto L_08A3F4AC;
    return;
L_08A3F4AC:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    goto L_08A3F4B0;
L_08A3F4B0:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A3F4CCu);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 508u, 0x08A0651Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3F4CCu) goto L_08A3F4CC;
    return;
L_08A3F4CC:
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x08A3F4E8u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 492u, 0x08A05FFCu>(ctx, &aot_mem) && ctx.pc == 0x08A3F4E8u) goto L_08A3F4E8;
    return;
L_08A3F4E8:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08A3F4F4u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 366u, 0x08A36378u>(ctx, &aot_mem) && ctx.pc == 0x08A3F4F4u) goto L_08A3F4F4;
    return;
L_08A3F4F4:
    ctx.gpr[31] = (0x08A3F4FCu);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 505u, 0x08A064E8u>(ctx, &aot_mem) && ctx.pc == 0x08A3F4FCu) goto L_08A3F4FC;
    return;
L_08A3F4FC:
    ctx.gpr[31] = (0x08A3F504u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(864)));
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 332u, 0x08A360B0u>(ctx, &aot_mem) && ctx.pc == 0x08A3F504u) goto L_08A3F504;
    return;
L_08A3F504:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A3F514u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 352u, 0x08A36294u>(ctx, &aot_mem) && ctx.pc == 0x08A3F514u) goto L_08A3F514;
    return;
L_08A3F514:
    ctx.gpr[31] = (0x08A3F51Cu);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 345u, 0x08AF9834u>(ctx, &aot_mem) && ctx.pc == 0x08A3F51Cu) goto L_08A3F51C;
    return;
L_08A3F51C:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x08A3F528u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 350u, 0x08A36268u>(ctx, &aot_mem) && ctx.pc == 0x08A3F528u) goto L_08A3F528;
    return;
L_08A3F528:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(1232)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(1296)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(1240)));
    ctx.fpr[13] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(1292)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(232), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(64)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(1300)));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[16];
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(1016)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[16] = (0u | 1u);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[15];
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[16];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A3F5B0;
      }
      goto L_08A3F57C;
    }
L_08A3F57C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(1216)));
    ctx.gpr[31] = (0x08A3F588u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 376u, 0x08AF99E4u>(ctx, &aot_mem) && ctx.pc == 0x08A3F588u) goto L_08A3F588;
    return;
L_08A3F588:
    ctx.gpr[4] = (15692u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08A3F5A8u);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 492u, 0x08A05FFCu>(ctx, &aot_mem) && ctx.pc == 0x08A3F5A8u) goto L_08A3F5A8;
    return;
L_08A3F5A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3F5BC;
      }
      goto L_08A3F5B0;
    }
L_08A3F5B0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(1216)));
    ctx.gpr[31] = (0x08A3F5BCu);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 486u, 0x08A05F84u>(ctx, &aot_mem) && ctx.pc == 0x08A3F5BCu) goto L_08A3F5BC;
    return;
L_08A3F5BC:
    ctx.gpr[17] = (2229u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(25632)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[24])) && ctx.fpr[12] == ctx.fpr[24]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A3F5F0;
      }
      goto L_08A3F5DC;
    }
L_08A3F5DC:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(25632)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08A3F5F0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 514u, 0x08A06620u>(ctx, &aot_mem) && ctx.pc == 0x08A3F5F0u) goto L_08A3F5F0;
    return;
L_08A3F5F0:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08A3F5FCu);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 366u, 0x08A36378u>(ctx, &aot_mem) && ctx.pc == 0x08A3F5FCu) goto L_08A3F5FC;
    return;
L_08A3F5FC:
    ctx.gpr[31] = (0x08A3F604u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 505u, 0x08A064E8u>(ctx, &aot_mem) && ctx.pc == 0x08A3F604u) goto L_08A3F604;
    return;
L_08A3F604:
    ctx.gpr[31] = (0x08A3F60Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(872)));
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 332u, 0x08A360B0u>(ctx, &aot_mem) && ctx.pc == 0x08A3F60Cu) goto L_08A3F60C;
    return;
L_08A3F60C:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A3F61Cu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 352u, 0x08A36294u>(ctx, &aot_mem) && ctx.pc == 0x08A3F61Cu) goto L_08A3F61C;
    return;
L_08A3F61C:
    ctx.gpr[31] = (0x08A3F624u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 509u, 0x08A0654Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3F624u) goto L_08A3F624;
    return;
L_08A3F624:
    ctx.gpr[31] = (0x08A3F62Cu);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 351u, 0x08AF987Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3F62Cu) goto L_08A3F62C;
    return;
L_08A3F62C:
    ctx.gpr[4] = (0u | 205u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A3F658;
      }
      goto L_08A3F638;
    }
L_08A3F638:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (49024u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    goto L_08A3F658;
L_08A3F658:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08A3F678u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 505u, 0x08A064E8u>(ctx, &aot_mem) && ctx.pc == 0x08A3F678u) goto L_08A3F678;
    return;
L_08A3F678:
    ctx.gpr[31] = (0x08A3F680u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(868)));
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 332u, 0x08A360B0u>(ctx, &aot_mem) && ctx.pc == 0x08A3F680u) goto L_08A3F680;
    return;
L_08A3F680:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A3F690u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 352u, 0x08A36294u>(ctx, &aot_mem) && ctx.pc == 0x08A3F690u) goto L_08A3F690;
    return;
L_08A3F690:
    ctx.gpr[31] = (0x08A3F698u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 345u, 0x08AF9834u>(ctx, &aot_mem) && ctx.pc == 0x08A3F698u) goto L_08A3F698;
    return;
L_08A3F698:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x08A3F6A4u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 350u, 0x08A36268u>(ctx, &aot_mem) && ctx.pc == 0x08A3F6A4u) goto L_08A3F6A4;
    return;
L_08A3F6A4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(1017)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08A3F6E4;
      }
      goto L_08A3F6B0;
    }
L_08A3F6B0:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(1220)));
    ctx.gpr[31] = (0x08A3F6BCu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 376u, 0x08AF99E4u>(ctx, &aot_mem) && ctx.pc == 0x08A3F6BCu) goto L_08A3F6BC;
    return;
L_08A3F6BC:
    ctx.gpr[4] = (15759u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[4] | 23593u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08A3F6DCu);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 492u, 0x08A05FFCu>(ctx, &aot_mem) && ctx.pc == 0x08A3F6DCu) goto L_08A3F6DC;
    return;
L_08A3F6DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3F6F0;
      }
      goto L_08A3F6E4;
    }
L_08A3F6E4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(1220)));
    ctx.gpr[31] = (0x08A3F6F0u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 486u, 0x08A05F84u>(ctx, &aot_mem) && ctx.pc == 0x08A3F6F0u) goto L_08A3F6F0;
    return;
L_08A3F6F0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(25632)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[24])) && ctx.fpr[12] == ctx.fpr[24]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A3F718;
      }
      goto L_08A3F704;
    }
L_08A3F704:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(25632)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08A3F718u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 514u, 0x08A06620u>(ctx, &aot_mem) && ctx.pc == 0x08A3F718u) goto L_08A3F718;
    return;
L_08A3F718:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08A3F724u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 366u, 0x08A36378u>(ctx, &aot_mem) && ctx.pc == 0x08A3F724u) goto L_08A3F724;
    return;
L_08A3F724:
    ctx.gpr[31] = (0x08A3F72Cu);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 505u, 0x08A064E8u>(ctx, &aot_mem) && ctx.pc == 0x08A3F72Cu) goto L_08A3F72C;
    return;
L_08A3F72C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3F7D4;
      }
      goto L_08A3F738;
    }
L_08A3F738:
    ctx.gpr[31] = (0x08A3F740u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(852)));
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 332u, 0x08A360B0u>(ctx, &aot_mem) && ctx.pc == 0x08A3F740u) goto L_08A3F740;
    return;
L_08A3F740:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A3F750u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 352u, 0x08A36294u>(ctx, &aot_mem) && ctx.pc == 0x08A3F750u) goto L_08A3F750;
    return;
L_08A3F750:
    ctx.gpr[31] = (0x08A3F758u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 345u, 0x08AF9834u>(ctx, &aot_mem) && ctx.pc == 0x08A3F758u) goto L_08A3F758;
    return;
L_08A3F758:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x08A3F764u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 350u, 0x08A36268u>(ctx, &aot_mem) && ctx.pc == 0x08A3F764u) goto L_08A3F764;
    return;
L_08A3F764:
    ctx.gpr[31] = (0x08A3F76Cu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 398u, 0x08AF9BF4u>(ctx, &aot_mem) && ctx.pc == 0x08A3F76Cu) goto L_08A3F76C;
    return;
L_08A3F76C:
    ctx.gpr[4] = (16230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.gpr[31] = (0x08A3F788u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(1308)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 377u, 0x08AF9A08u>(ctx, &aot_mem) && ctx.pc == 0x08A3F788u) goto L_08A3F788;
    return;
L_08A3F788:
    ctx.fpr[15] = ctx.fpr[24] - ctx.fpr[0];
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(1308)));
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.gpr[31] = (0x08A3F79Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(232), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 344u, 0x08A361DCu>(ctx, &aot_mem) && ctx.pc == 0x08A3F79Cu) goto L_08A3F79C;
    return;
L_08A3F79C:
    ctx.gpr[4] = (48460u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08A3F7B4u);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 486u, 0x08A05F84u>(ctx, &aot_mem) && ctx.pc == 0x08A3F7B4u) goto L_08A3F7B4;
    return;
L_08A3F7B4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(1308)));
    ctx.gpr[31] = (0x08A3F7C0u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 494u, 0x08A06210u>(ctx, &aot_mem) && ctx.pc == 0x08A3F7C0u) goto L_08A3F7C0;
    return;
L_08A3F7C0:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08A3F7CCu);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 366u, 0x08A36378u>(ctx, &aot_mem) && ctx.pc == 0x08A3F7CCu) goto L_08A3F7CC;
    return;
L_08A3F7CC:
    ctx.gpr[31] = (0x08A3F7D4u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 505u, 0x08A064E8u>(ctx, &aot_mem) && ctx.pc == 0x08A3F7D4u) goto L_08A3F7D4;
    return;
L_08A3F7D4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
      if (branch_taken) {
          goto L_08A3FA44;
      }
      goto L_08A3F7E4;
    }
L_08A3F7E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(336)));
    ctx.gpr[5] = (16u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(208)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
      if (branch_taken) {
          goto L_08A3FA44;
      }
      goto L_08A3F7FC;
    }
L_08A3F7FC:
    ctx.gpr[5] = (17154u << 16u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08A3F80Cu);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 343u, 0x08AF9824u>(ctx, &aot_mem) && ctx.pc == 0x08A3F80Cu) goto L_08A3F80C;
    return;
L_08A3F80C:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A3F818u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 336u, 0x08A36118u>(ctx, &aot_mem) && ctx.pc == 0x08A3F818u) goto L_08A3F818;
    return;
L_08A3F818:
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-10528)));
    ctx.fpr[20] = ctx.fpr[0] / ctx.fpr[20];
    ctx.set_fpu_condition((ctx.fpr[26] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A3FA40;
      }
      goto L_08A3F834;
    }
L_08A3F834:
    ctx.gpr[31] = (0x08A3F83Cu);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 351u, 0x08AF987Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3F83Cu) goto L_08A3F83C;
    return;
L_08A3F83C:
    ctx.gpr[31] = (0x08A3F844u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 368u, 0x08A3639Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3F844u) goto L_08A3F844;
    return;
L_08A3F844:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(1616));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A3F854u);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 443u, 0x08AFA020u>(ctx, &aot_mem) && ctx.pc == 0x08A3F854u) goto L_08A3F854;
    return;
L_08A3F854:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A3F860u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 346u, 0x08A361FCu>(ctx, &aot_mem) && ctx.pc == 0x08A3F860u) goto L_08A3F860;
    return;
L_08A3F860:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1600));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x08A3F874u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 345u, 0x08A361E8u>(ctx, &aot_mem) && ctx.pc == 0x08A3F874u) goto L_08A3F874;
    return;
L_08A3F874:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A3F880u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 563u, 0x0892748Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3F880u) goto L_08A3F880;
    return;
L_08A3F880:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3FA40;
      }
      goto L_08A3F888;
    }
L_08A3F888:
    ctx.gpr[4] = (16672u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1656), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(1664));
      if (branch_taken) {
          goto L_08A3F914;
      }
      goto L_08A3F8A4;
    }
L_08A3F8A4:
    ctx.gpr[31] = (0x08A3F8ACu);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(584)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 376u, 0x08AF99E4u>(ctx, &aot_mem) && ctx.pc == 0x08A3F8ACu) goto L_08A3F8AC;
    return;
L_08A3F8AC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(584)));
    ctx.gpr[31] = (0x08A3F8B8u);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 377u, 0x08AF9A08u>(ctx, &aot_mem) && ctx.pc == 0x08A3F8B8u) goto L_08A3F8B8;
    return;
L_08A3F8B8:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]) ^ 0x80000000u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1696));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x08A3F8CCu);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 345u, 0x08A361E8u>(ctx, &aot_mem) && ctx.pc == 0x08A3F8CCu) goto L_08A3F8CC;
    return;
L_08A3F8CC:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1712));
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08A3F8DCu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 334u, 0x08A360D0u>(ctx, &aot_mem) && ctx.pc == 0x08A3F8DCu) goto L_08A3F8DC;
    return;
L_08A3F8DC:
    ctx.gpr[4] = (48501u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 49807u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (48373u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 49807u);
    ctx.gpr[31] = (0x08A3F8F8u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 523u, 0x08A37288u>(ctx, &aot_mem) && ctx.pc == 0x08A3F8F8u) goto L_08A3F8F8;
    return;
L_08A3F8F8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1712)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1716)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1648), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1652), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_08A3F924;
      }
      goto L_08A3F914;
    }
L_08A3F914:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(112)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(116)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1648), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1652), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_08A3F924;
L_08A3F924:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(1632));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08A3F93Cu);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 335u, 0x08A360F0u>(ctx, &aot_mem) && ctx.pc == 0x08A3F93Cu) goto L_08A3F93C;
    return;
L_08A3F93C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A3F948u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 350u, 0x08A36268u>(ctx, &aot_mem) && ctx.pc == 0x08A3F948u) goto L_08A3F948;
    return;
L_08A3F948:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(336)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(208)));
    ctx.gpr[4] = (ctx.gpr[4] & 256u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3F99C;
      }
      goto L_08A3F95C;
    }
L_08A3F95C:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(1744));
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A3F970u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 346u, 0x08A361FCu>(ctx, &aot_mem) && ctx.pc == 0x08A3F970u) goto L_08A3F970;
    return;
L_08A3F970:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1744)));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(1728));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1744), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08A3F990u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 335u, 0x08A360F0u>(ctx, &aot_mem) && ctx.pc == 0x08A3F990u) goto L_08A3F990;
    return;
L_08A3F990:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1680));
    ctx.gpr[31] = (0x08A3F99Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 350u, 0x08A36268u>(ctx, &aot_mem) && ctx.pc == 0x08A3F99Cu) goto L_08A3F99C;
    return;
L_08A3F99C:
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x08A3F9ACu);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 523u, 0x08A37288u>(ctx, &aot_mem) && ctx.pc == 0x08A3F9ACu) goto L_08A3F9AC;
    return;
L_08A3F9AC:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x08A3F9B8u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 449u, 0x08AFA07Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3F9B8u) goto L_08A3F9B8;
    return;
L_08A3F9B8:
    ctx.gpr[4] = (16268u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[0] + ctx.fpr[12];
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-10428)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A3FA40;
      }
      goto L_08A3F9E4;
    }
L_08A3F9E4:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(1648));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (0u | 65u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x08A3FA10u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 78u, 0x08998634u>(ctx, &aot_mem) && ctx.pc == 0x08A3FA10u) goto L_08A3FA10;
    return;
L_08A3FA10:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3FA40;
      }
      goto L_08A3FA18;
    }
L_08A3FA18:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(1680));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (0u | 65u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x08A3FA40u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 78u, 0x08998634u>(ctx, &aot_mem) && ctx.pc == 0x08A3FA40u) goto L_08A3FA40;
    return;
L_08A3FA40:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    goto L_08A3FA44;
L_08A3FA44:
    ctx.gpr[31] = (0x08A3FA4Cu);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 358u, 0x08A36310u>(ctx, &aot_mem) && ctx.pc == 0x08A3FA4Cu) goto L_08A3FA4C;
    return;
L_08A3FA4C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2396)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2400)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2404)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2408)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2412)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2416)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2420)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2424)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2428)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2432)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2436)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2440)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2444)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2448)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2452)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2456)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(2464));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3FA94:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-576));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(544), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(548), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(552), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(556), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(560), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(564), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(568), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A3FABCu);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x08A3FABCu) goto L_08A3FABC;
    return;
L_08A3FABC:
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[2];
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_08A3FAD4;
      }
      goto L_08A3FAC4;
    }
L_08A3FAC4:
    ctx.gpr[31] = (0x08A3FACCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 122u, 0x088ED020u>(ctx, &aot_mem) && ctx.pc == 0x08A3FACCu) goto L_08A3FACC;
    return;
L_08A3FACC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3FAEC;
      }
      goto L_08A3FAD4;
    }
L_08A3FAD4:
    ctx.gpr[31] = (0x08A3FADCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x08A3FADCu) goto L_08A3FADC;
    return;
L_08A3FADC:
    if (ctx.gpr[16] != ctx.gpr[2]) {
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86)));
        goto L_08A3FAF4;
    }
    goto L_08A3FAE4;
L_08A3FAE4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3FB0C;
      }
      goto L_08A3FAEC;
    }
L_08A3FAEC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 3u, 0x08A40098u>(ctx, &aot_mem); return;
      }
      goto L_08A3FAF4;
    }
L_08A3FAF4:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7820)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3FB34;
      }
      goto L_08A3FB0C;
    }
L_08A3FB0C:
    ctx.gpr[4] = (17442u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(616)));
    ctx.gpr[4] = (ctx.gpr[4] | 32768u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A3FB3C;
      }
      goto L_08A3FB2C;
    }
L_08A3FB2C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 3u, 0x08A40098u>(ctx, &aot_mem); return;
      }
      goto L_08A3FB34;
    }
L_08A3FB34:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 3u, 0x08A40098u>(ctx, &aot_mem); return;
      }
      goto L_08A3FB3C;
    }
L_08A3FB3C:
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(112));
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-7872)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
      if (branch_taken) {
          goto L_08A3FB90;
      }
      goto L_08A3FB7C;
    }
L_08A3FB7C:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08A3FB90;
L_08A3FB90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(56)));
    ctx.gpr[6] = (0u | 1u);
    if (ctx.gpr[4] != ctx.gpr[6]) {
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(112));
        goto L_08A3FBA8;
    }
    goto L_08A3FBA0;
L_08A3FBA0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(80));
      if (branch_taken) {
          goto L_08A3FBA8;
      }
      goto L_08A3FBA8;
    }
L_08A3FBA8:
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[4] = (16076u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A3FBDCu);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 335u, 0x08A360F0u>(ctx, &aot_mem) && ctx.pc == 0x08A3FBDCu) goto L_08A3FBDC;
    return;
L_08A3FBDC:
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
    ctx.gpr[31] = (0x08A3FBECu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 491u, 0x08A36E90u>(ctx, &aot_mem) && ctx.pc == 0x08A3FBECu) goto L_08A3FBEC;
    return;
L_08A3FBEC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(616)));
    ctx.gpr[4] = (17274u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 3u, 0x08A40098u>(ctx, &aot_mem); return;
      }
      goto L_08A3FC08;
    }
L_08A3FC08:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(616)));
    ctx.gpr[4] = (17312u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A3FCB4;
      }
      goto L_08A3FC24;
    }
L_08A3FC24:
    ctx.gpr[4] = (15948u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (15523u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(896));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (0u | 56u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x08A3FCACu);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 78u, 0x08998634u>(ctx, &aot_mem) && ctx.pc == 0x08A3FCACu) goto L_08A3FCAC;
    return;
L_08A3FCAC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 3u, 0x08A40098u>(ctx, &aot_mem); return;
      }
      goto L_08A3FCB4;
    }
L_08A3FCB4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(616)));
    ctx.gpr[4] = (17347u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[17] = (2230u << 16u);
      if (branch_taken) {
          goto L_08A3FDF0;
      }
      goto L_08A3FCD0;
    }
L_08A3FCD0:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86)));
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-7820)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] & 3u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(896));
      if (branch_taken) {
          goto L_08A3FD08;
      }
      goto L_08A3FCEC;
    }
L_08A3FCEC:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-7820)));
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] & 3u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A3FD64;
      }
      goto L_08A3FD08;
    }
L_08A3FD08:
    ctx.gpr[4] = (15692u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (0u | 33u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x08A3FD64u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 78u, 0x08998634u>(ctx, &aot_mem) && ctx.pc == 0x08A3FD64u) goto L_08A3FD64;
    return;
L_08A3FD64:
    ctx.gpr[4] = (16025u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (15651u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (0u | 55u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x08A3FDE8u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 78u, 0x08998634u>(ctx, &aot_mem) && ctx.pc == 0x08A3FDE8u) goto L_08A3FDE8;
    return;
L_08A3FDE8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 3u, 0x08A40098u>(ctx, &aot_mem); return;
      }
      goto L_08A3FDF0;
    }
L_08A3FDF0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(616)));
    ctx.gpr[4] = (17382u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A3FEA8;
      }
      goto L_08A3FE0C;
    }
L_08A3FE0C:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-7820)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] & 3u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3FE40;
      }
      goto L_08A3FE24;
    }
L_08A3FE24:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-7820)));
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] & 3u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 3u, 0x08A40098u>(ctx, &aot_mem); return;
      }
      goto L_08A3FE40;
    }
L_08A3FE40:
    ctx.gpr[4] = (15733u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 49807u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(896));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (0u | 33u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x08A3FEA0u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 78u, 0x08998634u>(ctx, &aot_mem) && ctx.pc == 0x08A3FEA0u) goto L_08A3FEA0;
    return;
L_08A3FEA0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 3u, 0x08A40098u>(ctx, &aot_mem); return;
      }
      goto L_08A3FEA8;
    }
L_08A3FEA8:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-7820)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3FED8;
      }
      goto L_08A3FEC4;
    }
L_08A3FEC4:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 70 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 26 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A3FEE0;
      }
      goto L_08A3FED0;
    }
L_08A3FED0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3FEE8;
      }
      goto L_08A3FED8;
    }
L_08A3FED8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 3u, 0x08A40098u>(ctx, &aot_mem); return;
      }
      goto L_08A3FEE0;
    }
L_08A3FEE0:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3FEFC;
      }
      goto L_08A3FEE8;
    }
L_08A3FEE8:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 160 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 101 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A3FF04;
      }
      goto L_08A3FEF4;
    }
L_08A3FEF4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3FF0C;
      }
      goto L_08A3FEFC;
    }
L_08A3FEFC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 3u, 0x08A40098u>(ctx, &aot_mem); return;
      }
      goto L_08A3FF04;
    }
L_08A3FF04:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3FF20;
      }
      goto L_08A3FF0C;
    }
L_08A3FF0C:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 200 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 176 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A3FF28;
      }
      goto L_08A3FF18;
    }
L_08A3FF18:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3FF30;
      }
      goto L_08A3FF20;
    }
L_08A3FF20:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 3u, 0x08A40098u>(ctx, &aot_mem); return;
      }
      goto L_08A3FF28;
    }
L_08A3FF28:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3FF78;
      }
      goto L_08A3FF30;
    }
L_08A3FF30:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 236 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (15692u << 16u);
      if (branch_taken) {
          goto L_08A3FF70;
      }
      goto L_08A3FF3C;
    }
L_08A3FF3C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    ctx.gpr[31] = (0x08A3FF5Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 139u, 0x088ED114u>(ctx, &aot_mem) && ctx.pc == 0x08A3FF5Cu) goto L_08A3FF5C;
    return;
L_08A3FF5C:
    ctx.gpr[4] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A3FF80;
      }
      goto L_08A3FF68;
    }
L_08A3FF68:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3FFF0;
      }
      goto L_08A3FF70;
    }
L_08A3FF70:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 3u, 0x08A40098u>(ctx, &aot_mem); return;
      }
      goto L_08A3FF78;
    }
L_08A3FF78:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 3u, 0x08A40098u>(ctx, &aot_mem); return;
      }
      goto L_08A3FF80;
    }
L_08A3FF80:
    ctx.gpr[4] = (15779u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(896));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (0u | 33u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x08A3FFE8u);
    ctx.gpr[11] = (0u | 1000u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 78u, 0x08998634u>(ctx, &aot_mem) && ctx.pc == 0x08A3FFE8u) goto L_08A3FFE8;
    return;
L_08A3FFE8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 3u, 0x08A40098u>(ctx, &aot_mem); return;
      }
      goto L_08A3FFF0;
    }
L_08A3FFF0:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-7820)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.pc = 0x08A40000u; return;
}

void recomp_unit_0142(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0142_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_142(Runtime &runtime) {
    runtime.register_generated_unit(142u, 0x08A3C000u, 16384u, &recomp_unit_0142, &recomp_unit_0142_entry);
    runtime.register_function(0x08A3C000u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C008u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C024u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C02Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C034u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C03Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C04Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C074u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C08Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C0A4u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C0B4u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C0C0u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C0E4u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C0F4u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C104u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C10Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C124u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C134u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C140u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C164u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C174u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C184u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C18Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C190u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C198u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C1C0u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C1D0u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C20Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C21Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C23Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C258u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C26Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C27Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C280u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C288u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C290u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C29Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C2A4u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C2B0u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C2B8u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C2C0u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C2DCu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C2E4u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C2F0u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C300u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C31Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C324u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C32Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C350u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C35Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C37Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C384u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C398u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C3A0u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C3A8u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C3B4u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C3E0u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C3ECu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C3FCu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C408u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C414u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C420u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C430u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C43Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C460u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C464u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C478u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C484u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C4ACu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C4C0u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C4E8u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C50Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C524u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C544u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C564u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C58Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C594u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C5A0u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C5ACu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C5CCu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C5E8u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C5F0u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C5F4u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C5FCu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C60Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C648u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C670u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C678u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C680u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C690u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C698u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C6A0u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C6A8u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C6B4u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C6C8u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C6E8u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C6F0u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C710u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C724u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C728u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C730u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C738u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C740u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C74Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C754u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C760u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C768u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C770u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C78Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C79Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C7A4u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C7B0u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C7B8u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C7C0u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C7C8u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C7D0u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C7ECu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C7FCu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C804u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C810u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C820u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C82Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C834u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C848u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C854u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C858u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C880u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C8A0u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C8B0u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C8B8u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C8C0u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C8C8u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C8E8u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C8F0u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C910u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C94Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C95Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C98Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C9A0u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C9A8u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C9E4u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C9F4u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3CA24u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3CA38u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3CA3Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3CA68u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3CA70u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3CA80u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3CA98u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3CAA4u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3CABCu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3CAC8u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3CAE0u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3CAECu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3CB04u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3CB10u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3CB18u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3CB24u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3CB38u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3CB4Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3CB54u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3CB60u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3CB68u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3CB84u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3CB8Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3CB9Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3CBA4u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3CBB4u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3CBC8u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3CBD4u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3CBD8u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3CBE4u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3CBF4u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3CC04u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3CC0Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3CC18u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3CC38u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3CC40u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3CC58u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3CC5Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3CC6Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3CC74u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3CC98u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3CCA8u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3CCB4u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3CCC4u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3CCD4u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3CCE8u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3CD08u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3CD18u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3CD24u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3CD34u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3CD44u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3CD4Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3CD54u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3CD68u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3CD7Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3CD84u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3CD98u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3CDACu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3CDC0u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3CDD0u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3CDF4u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3CE14u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3CE1Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3CE38u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3CE58u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3CE5Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3CE68u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3CE78u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3CE90u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3CEA8u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3CEB8u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3CEC4u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3CED4u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3CEE4u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3CEECu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3CF14u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3CF24u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3CF2Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3CF3Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3CF4Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3CF54u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3CF68u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3CF7Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3CF84u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3CF98u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3CFACu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3CFC0u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3CFD0u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3CFF4u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D014u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D01Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D038u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D058u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D05Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D064u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D07Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D094u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D0ACu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D0BCu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D0C8u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D0D8u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D0E8u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D0F0u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D118u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D144u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D154u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D15Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D16Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D17Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D1C4u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D228u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D230u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D268u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D27Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D284u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D28Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D2B0u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D2C0u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D2C8u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D308u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D320u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D334u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D33Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D378u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D390u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D39Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D3A4u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D3B0u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D3B8u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D3DCu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D3F8u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D400u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D408u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D428u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D430u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D438u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D450u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D458u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D460u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D478u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D480u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D49Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D4A8u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D4B8u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D4C8u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D4D4u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D4E4u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D4F4u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D500u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D508u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D51Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D52Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D538u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D574u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D590u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D59Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D5B8u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D5BCu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D5D8u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D5F4u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D608u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D610u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D61Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D624u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D630u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D63Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D64Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D658u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D664u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D668u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D698u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D6A0u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D6A8u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D6CCu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D6F0u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D72Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D778u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D7B8u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D7C8u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D7DCu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D868u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D8B8u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D8DCu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D934u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D950u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D95Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D964u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D96Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D974u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D97Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D9D8u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3DA34u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3DA3Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3DA48u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3DA54u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3DB0Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3DB1Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3DB2Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3DB48u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3DB4Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3DB58u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3DB68u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3DB84u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3DB88u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3DBB8u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3DBE0u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3DBE4u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3DBFCu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3DC10u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3DC24u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3DC44u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3DC54u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3DC7Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3DC98u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3DCB4u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3DCC4u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3DCD8u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3DCE8u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3DCFCu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3DD00u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3DD04u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3DD0Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3DD20u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3DD28u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3DD2Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3DD3Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3DD4Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3DD58u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3DD60u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3DD68u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3DD74u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3DDDCu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3DDFCu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3DE14u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3DE70u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3DE84u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3DEB4u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3DEC0u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3DECCu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3DEE0u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3DEECu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3DEFCu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3DF08u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3DF10u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3DF18u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3DF24u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3DF5Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3DFA8u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3DFC4u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3DFECu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3E02Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3E034u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3E074u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3E080u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3E098u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3E108u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3E110u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3E180u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3E188u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3E1CCu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3E1D4u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3E1F4u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3E1F8u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3E228u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3E230u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3E238u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3E290u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3E2A8u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3E2BCu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3E304u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3E330u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3E338u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3E354u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3E368u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3E374u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3E3D8u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3E3E0u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3E428u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3E430u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3E448u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3E4A0u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3E4ACu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3E4E0u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3E500u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3E5A0u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3E620u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3E628u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3E630u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3E63Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3E644u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3E650u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3E660u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3E66Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3E6A0u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3E6D4u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3E6DCu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3E710u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3E760u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3E7A0u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3E7A8u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3E7F0u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3E800u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3E80Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3E814u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3E81Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3E830u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3E844u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3E850u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3E858u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3E880u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3E894u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3E8E0u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3E8F4u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3E960u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3E974u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3E9D8u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3EA30u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3EA38u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3EA58u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3EA60u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3EA80u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3EABCu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3EAD4u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3EADCu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3EB30u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3EB3Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3EB40u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3EB54u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3EB70u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3EB94u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3EBACu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3EBBCu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3EBCCu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3EBD8u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3ECBCu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3ECD0u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3ED2Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3ED40u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3EDA0u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3EDF4u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3EDF8u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3EE00u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3EE1Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3EE2Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3EE44u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3EE48u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3EE60u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3EE70u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3EE80u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3EE8Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3EE9Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3EEB4u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3EEBCu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3EEC8u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3EF04u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3EF18u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3EFACu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3EFC0u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F008u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F010u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F014u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F0B4u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F0C4u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F0D8u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F0ECu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F0F0u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F134u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F13Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F140u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F1D8u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F1E8u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F1F4u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F208u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F218u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F220u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F224u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F240u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F264u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F26Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F30Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F318u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F320u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F328u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F334u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F348u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F350u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F35Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F368u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F378u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F380u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F384u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F3A0u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F3BCu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F3D0u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F3D8u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F3E4u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F3F8u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F400u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F414u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F41Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F42Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F438u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F440u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F44Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F494u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F4A4u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F4ACu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F4B0u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F4CCu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F4E8u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F4F4u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F4FCu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F504u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F514u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F51Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F528u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F57Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F588u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F5A8u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F5B0u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F5BCu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F5DCu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F5F0u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F5FCu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F604u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F60Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F61Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F624u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F62Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F638u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F658u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F678u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F680u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F690u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F698u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F6A4u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F6B0u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F6BCu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F6DCu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F6E4u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F6F0u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F704u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F718u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F724u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F72Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F738u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F740u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F750u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F758u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F764u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F76Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F788u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F79Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F7B4u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F7C0u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F7CCu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F7D4u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F7E4u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F7FCu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F80Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F818u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F834u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F83Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F844u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F854u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F860u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F874u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F880u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F888u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F8A4u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F8ACu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F8B8u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F8CCu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F8DCu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F8F8u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F914u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F924u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F93Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F948u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F95Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F970u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F990u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F99Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F9ACu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F9B8u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F9E4u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3FA10u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3FA18u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3FA40u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3FA44u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3FA4Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3FA94u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3FABCu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3FAC4u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3FACCu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3FAD4u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3FADCu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3FAE4u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3FAECu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3FAF4u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3FB0Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3FB2Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3FB34u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3FB3Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3FB7Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3FB90u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3FBA0u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3FBA8u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3FBDCu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3FBECu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3FC08u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3FC24u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3FCACu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3FCB4u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3FCD0u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3FCECu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3FD08u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3FD64u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3FDE8u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3FDF0u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3FE0Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3FE24u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3FE40u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3FEA0u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3FEA8u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3FEC4u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3FED0u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3FED8u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3FEE0u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3FEE8u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3FEF4u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3FEFCu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3FF04u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3FF0Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3FF18u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3FF20u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3FF28u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3FF30u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3FF3Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3FF5Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3FF68u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3FF70u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3FF78u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3FF80u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3FFE8u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3FFF0u, &recomp_unit_0142, "recomp_unit_0142");
}
} // namespace psprecomp
